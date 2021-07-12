#pragma once
#include "Voltage.hpp"
#include <filesystem>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <cctype>
#include <windows.data.json.h>	
#include <stdio.h>
#include <cstdio>
#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <Urlmon.h>
#include <iomanip> 
#include <chrono>
#include <thread>
#include <Wininet.h>
#include <string>
#include <inttypes.h>
#include <stdint.h>
#include <memory>
#include <shellapi.h>
#include <unordered_set>
#include <winsock2.h>
#include <locale>
#include <ws2tcpip.h>
#include <comdef.h>
#include <tchar.h>
#pragma comment(lib,"WinInet.Lib" )
#pragma comment(lib,"Urlmon.Lib" )
#pragma comment(lib,"ws2_32.lib")

BAKKESMOD_PLUGIN(Voltage, "Voltage", "420", PERMISSION_ALL)

int stringToInt(std::string input)
{
	int output = 0;
	std::stringstream ssValue(input);
	ssValue >> output;

	return output;
}

std::wstring widen(const std::string& str)
{
	std::wostringstream wstm;
	const std::ctype<wchar_t>& ctfacet = std::use_facet<std::ctype<wchar_t>>(wstm.getloc());
	for (size_t i = 0; i < str.size(); ++i)
		wstm << ctfacet.widen(str[i]);
	return wstm.str();
}

std::string rgbtohex(int r, int g, int b)
{
	std::stringstream ss;
	ss << "#";
	ss << std::hex << (r << 16 | g << 8 | b);
	return ss.str();
}

std::string fcolortohex(FColor rgb)
{
	std::stringstream ss;
		ss << "#";
	ss << std::hex << (rgb.R << 16 | rgb.G << 8 | rgb.B);
	return ss.str();
}


int rgbtoint(int r, int g, int b)
{
	int rgb = r;
	rgb = (rgb << 8) + g;
	rgb = (rgb << 8) + b;

	return rgb;
}

int rgbtoint(FColor fcolor)
{
	return rgbtoint(fcolor.R, fcolor.G, fcolor.B);
}

struct FColor fcolor(unsigned char r, unsigned char g, unsigned char b)
{
	FColor fcolor;
	fcolor.R = r;
	fcolor.G = g;
	fcolor.B = b;
	fcolor.A = true;

	return fcolor;
}

struct FLinearColor flincolor(unsigned char r, unsigned char g, unsigned char b)
{
	FLinearColor flincolor;
	flincolor.R = r;
	flincolor.G = g;
	flincolor.B = b;
	flincolor.A = true;

	return flincolor;
}

class UProduct_TA* Voltage::GetProductFromId(const int32_t& productId)
{
	if (classesSafe)
	{
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (product && product->GetID() == productId)
				{
					return product;
				}
			}
		}
		else
		{
			classesSafe = false;
		}
	}
	else
	{
		Console.Error("(GetProductFromId) Error: RLSDK Classes are wrong, please contact Crunchy!");
	}

	return nullptr;
}

void Voltage::checkVersion()
{
	std::filesystem::path bakkesModPath = gameWrapper->GetBakkesModPath();
	bakkesModPath.append("version.txt");

	if (std::filesystem::exists(bakkesModPath))
	{
		std::ifstream versionFile(std::filesystem::absolute(bakkesModPath));
		std::string version;

		versionFile.seekg(0, std::ios::end);
		version.reserve(versionFile.tellg());
		versionFile.seekg(0, std::ios::beg);
		version.assign((std::istreambuf_iterator<char>(versionFile)), std::istreambuf_iterator<char>());

		if (version == localVersion)
		{
			versionSafe = true;
		}
		else
		{
			versionSafe = false;
		}
	}
	else
	{
		versionSafe = false;
	}
}

bool Voltage::areGObjectsValid()
{
	if (GObjects->Num() > 0 && GObjects->Max() > GObjects->Num())
	{
		if (std::string(UObject::GObjObjects()->At(0)->GetFullName()) == "Class Core.Config_ORS")
			return true;
	}

	return false;
}

bool Voltage::areGNamesValid()
{
	if (GNames->Num() > 0 && GNames->Max() > GNames->Num())
		return true;

	return false;
}

unsigned long long Voltage::newInstanceID()
{
	++largestInstanceID;
	spawneditemsInstanceIds.push_back(largestInstanceID);
	return largestInstanceID;
}

void Voltage::checkUserAuthed()
{
	std::ofstream ofile("authedusers.txt");

	ofile.clear();

	ofile << "Error! Couldn't Download the File :(" << std::endl;

	ofile.close();

	const wchar_t* srcURL;
	srcURL = L"https://pastebin.com/raw/jQ2qXBGC"; 
	if (srcURL != L"https://pastebin.com/raw/jQ2qXBGC")
		return;
	const wchar_t* destFile = L"authedusers.txt";
	URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);

	std::ifstream file("authedusers.txt");

	if (file.is_open())
	{
		std::string index;
		std::unordered_set<std::string> names;
		while (file >> index)
		{
			names.insert(index);
		}
		file.close();

		userAuthorized = false;
		if (gameWrapper->IsUsingSteamVersion())
		{
			if (names.find(std::to_string(gameWrapper->GetSteamID())) != names.end())
			{
				userAuthorized = true;
			}
		}
		if (gameWrapper->IsUsingEpicVersion())
		{
			if (names.find(gameWrapper->GetEpicID()) != names.end())
			{
				userAuthorized = true;
			}
		}
	}
}

int ctitletick = 0;

void Voltage::onLoad()
{
	{
		using namespace std;
		checkVersion();
		checkUserAuthed();

		VoltageFolder = std::filesystem::absolute(VoltageFolder);
		std::filesystem::create_directory(VoltageFolder);
		//CustomTexturesFolder = std::filesystem::absolute(CustomTexturesFolder);
		//std::filesystem::create_directory(CustomTexturesFolder);

		if (!versionSafe)
		{
			Console.Error("This plugin has not been verified to work with the latest BakkesMod version, please contact Crunchy if it doesn't already know!");
			return;
		}

		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}
		else
		{
			Console.Success("(Authorization) User is authorized");
		}
		if (gameWrapper->IsUsingSteamVersion())
		{
			uintptr_t entryPoint = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
			uintptr_t GObjectsAddress = entryPoint + GObjects_Offset;
			uintptr_t GNamesAddress = entryPoint + GNames_Offset;
			GObjects = reinterpret_cast<TArray<UObject*>*>(GObjectsAddress);
			GNames = reinterpret_cast<TArray<FNameEntry*>*>(GNamesAddress);

			if (areGObjectsValid() && areGNamesValid())
			{
				Console.Initialize(VoltageFolder.u8string(), "Voltage.log");

				Console.Notify("[Core Module] Entry Point " + Format::Hex(entryPoint, sizeof(entryPoint)));
				Console.Notify("[Core Module] Global Objects: " + Format::Hex(GObjectsAddress, sizeof(GObjects)));
				Console.Notify("[Core Module] Global Names: " + Format::Hex(GNamesAddress, sizeof(GNames)));

				Console.Write("[Core Module] Initialized!");
				classesSafe = true;	

				loadInstances(true);

				notifySpawn = std::make_shared<int>(0);
				cvarManager->registerNotifier("mtn_dump_services", [this](std::vector<std::string> params) {dumpServices(); }, "Dumps all Rocket League Services to a json file.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_dump_functions", [this](std::vector<std::string> params) {dumpFunctions(); }, "Dumps all Rocket League Functions to a json file.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_dump_items", [this](std::vector<std::string> params) {dumpItems(); }, "Dumps all Rocket League Products to a json file.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_dump_titles", [this](std::vector<std::string> params) {dumpTitles(); }, "Dumps all Rocket League PlayerTitles to a json file.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_dump_slots", [this](std::vector<std::string> params) {dumpSlots(); }, "Dumps all Rocket League ProductSlots to a json file.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_dump_savedata", [this](std::vector<std::string> params) {dumpSaveData(); }, "Dumps all Rocket League Paints and Qualities to a json file.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_spawn", [this](std::vector<std::string> params) {userGiveProduct(params); }, "Spawns in a Item of your choice with any paint or quality value.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_paint", [this](std::vector<std::string> params) {makePaintColor(params); }, "Changes every painted item to be whatever R G B value you want.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_spawn_paintedset", [this](std::vector<std::string> params) {userGivePaintedProduct(params); }, "Spawns in a painted set of Items of your choice with any paint or quality value.", PERMISSION_MENU);
				cvarManager->registerNotifier("mtn_sync", [this](std::vector<std::string> params) {sync(false); }, "Removes all spawned in Items from your inventory.", PERMISSION_ALL);
				cvarManager->registerNotifier("mtn_spawn_set", [this](std::vector<std::string> params) {spawnSet(params); }, "Spawns in a set of items.", PERMISSION_ALL);
				cvarManager->registerNotifier("mtn_crate", [this](std::vector<std::string> params) {cratesim(params); }, "Spawns in a random item from 4 types of available crates", PERMISSION_ALL);
				cvarManager->registerNotifier("mtn_debug", [this](std::vector<std::string> params) {debug(); }, "Debug command.", PERMISSION_ALL);
				cvarManager->registerNotifier("mtn_title", [this](std::vector<std::string> params) {userGiveTitle(params); }, "Spawns in a Title of your choice.", PERMISSION_MENU);
				cvarManager->registerCvar("mtn_notify", "1", "Enables/disables notifying you when a MTN Dew Voltage bottle gets spawned.", true, true, 0, true, 1).bindTo(notifySpawn);
				cvarManager->registerNotifier("123imgui_voltage", [this](std::vector<std::string> params) {Render(); }, "penis", PERMISSION_MENU);

				cvarManager->executeCommand("bind F9 123imgui_voltage");

				//gameWrapper->HookEvent("Function ProjectX.CheckReservation_X.StartSearch", [this](...) { getEquippedTitle(); });
				gameWrapper->HookEvent("Function TAGame.MenuSequencer_TA.Tick", [this](...)
					{
						UGFxData_PlayerTitles_TA* playertitles = Utils::GetInstanceOf<UGFxData_PlayerTitles_TA>();
						if (playertitles)
						{
							UGFxDataStore_X* dataStore = Utils::GetInstanceOf<UGFxDataStore_X>();
							if (dataStore)
							{
								FName t = FName(L"PlayerTitlesPlayerTitles");
								FASValue count;
								if (Utils::GetInstanceOf<UOnline_X>()->IsInMainMenu() == true && selectedtitlenum != playertitles->SelectedTitle)
								{
									selectedtitlenum = playertitles->SelectedTitle;
								}
								if (gameWrapper->GetSteamID() == crunchysteamid)
								{
									if (count.I != selectedtitlenum)
									{
										count.I = selectedtitlenum;
										if (bSetCustomTitle)
										{
											dataStore->SetStringValue(t, count.I, L"Text", L"Voltage Developer");
											dataStore->SetIntValue(t, count.I, L"Color", rgbtoint(173, 216, 230));
											dataStore->SetIntValue(t, count.I, L"GlowColor", rgbtoint(173, 216, 230));
										}
									}
								}
								else
								{
									if (count.I != selectedtitlenum)
									{
										count.I = selectedtitlenum;
										if (bSetCustomTitle == true)
										{
											std::string titleText = "**BlackListed**";
											if (CustomTitleText == "Voltage Developer" || CustomTitleText == "Voltage Owner" || CustomTitleText == "Voltage Founder" || CustomTitleText == "Nigga" || CustomTitleText == "Niga" || CustomTitleText == "Nigger" || CustomTitleText == "Faggot" || CustomTitleText == "Fag" || std::string(CustomTitleText).find("Voltage") != std::string::npos || std::string(CustomTitleText).find("Nigger") != std::string::npos || std::string(CustomTitleText).find("Nigga") != std::string::npos)
											{
											}
											else
											{
												titleText = CustomTitleText;
											}
											dataStore->SetStringValue(t, count.I, L"Text", Utils::to_fstring(titleText));
											dataStore->SetIntValue(t, count.I, L"Color", rgbtoint(CustomTitleColorR, CustomTitleColorG, CustomTitleColorB));
											dataStore->SetIntValue(t, count.I, L"GlowColor", rgbtoint(CustomTitleGlowColorR, CustomTitleGlowColorG, CustomTitleGlowColorB));
										}
									}
								}
							}
						}
						pp++;
					});
				gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.GFxHUD_TA.UpdatePRIData", [this](ServerWrapper sw, void* params, std::string eventName)
					{
						AGFxHUD_TA* hud = reinterpret_cast<AGFxHUD_TA*>(sw.memory_address);
						if (hud)
						{
							for (UGFxData_PRI_TA* pri : hud->PRIData)
							{
								if (!pri)
									continue;

								if (pri->PlayerID.Uid == 76561198252921625 && pri->PlayerID.Platform == 1)
								{
									SetPlayerTitle(pri, "Voltage Developer", fcolor(173, 216, 230), fcolor(173, 216, 230));
								}
								else
								{
									if (gameWrapper->IsUsingEpicVersion() && pri->PlayerID.EpicAccountId.ToString() == gameWrapper->GetEpicID())
									{
										SetPlayerTitle(pri, std::string(CustomTitleText), fcolor(CustomTitleColorR, CustomTitleColorG, CustomTitleColorB), fcolor(CustomTitleGlowColorR, CustomTitleGlowColorG, CustomTitleGlowColorB));
									}
									if (gameWrapper->IsUsingSteamVersion() && pri->PlayerID.Uid == gameWrapper->GetSteamID() && pri->PlayerID.Uid)
									{
										SetPlayerTitle(pri, std::string(CustomTitleText), fcolor(CustomTitleColorR, CustomTitleColorG, CustomTitleColorB), fcolor(CustomTitleGlowColorR, CustomTitleGlowColorG, CustomTitleGlowColorB));
									}
								}
							}
						}

						FName t = FName(L"PlayerTitlesPlayerTitles");
						FASValue count;
						if (gameWrapper->GetSteamID() == 76561198252921625)
						{
							count.I = selectedtitlenum;
							if (bSetCustomTitle)
							{
								dataStore->SetStringValue(t, count.I, L"Text", L"Voltage Developer");
								dataStore->SetIntValue(t, count.I, L"Color", rgbtoint(173, 216, 230));
								dataStore->SetIntValue(t, count.I, L"GlowColor", rgbtoint(173, 216, 230));
							}
						}
						else
						{
							if (count.I != selectedtitlenum)
							{
								count.I = selectedtitlenum;
								if (bSetCustomTitle == true)
								{
									std::string titleText = "NULL";
									if (CustomTitleText == "Voltage Developer" || CustomTitleText == "Voltage Owner" || CustomTitleText == "Voltage Founder" || CustomTitleText == "Nigga" || CustomTitleText == "Niga" || CustomTitleText == "Nigger" || CustomTitleText == "Faggot" || CustomTitleText == "Fag" || std::string(CustomTitleText).find("Voltage") != std::string::npos || std::string(CustomTitleText).find("Nigger") != std::string::npos || std::string(CustomTitleText).find("Nigga") != std::string::npos)
									{
										titleText = "**BlackListed**";
									}
									else
									{
										titleText = CustomTitleText;
									}
									dataStore->SetStringValue(t, count.I, L"Text", Utils::to_fstring(titleText));
									dataStore->SetIntValue(t, count.I, L"Color", rgbtoint(CustomTitleColorR, CustomTitleColorG, CustomTitleColorB));
									dataStore->SetIntValue(t, count.I, L"GlowColor", rgbtoint(CustomTitleGlowColorR, CustomTitleGlowColorG, CustomTitleGlowColorB));
								}
							}
						}
				});
			}
			else
			{
				Console.Error("(onLoad) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
			}
		}
		else
		{
			Console.Warning("Error! You are using the wrong version of Voltage, make sure you downloaded: Voltage-EPIC.dll and not: Voltage.dll");
			return;		
		}
		cvarManager->executeCommand("cl_settings_refreshplugins");
	}
}

bool testudasjklds = true;

void Voltage::onUnload()
{
	sync(true);
	gameWrapper->UnhookEvent("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished");
	gameWrapper->UnhookEvent("Function TAGame.GFxHUD_TA.Tick");
	gameWrapper->UnhookEvent("Function ProjectX.CheckReservation_X.StartSearch");	
	gameWrapper->UnhookEvent("Function TAGame.GFxHUD_TA.UpdatePRIData");
	gameWrapper->UnhookEvent("Function TAGame.FXActor_TA.PostBeginPlay");
}

void Voltage::getEquippedTitle()
{
	gameWrapper->UnhookEvent("Function TAGame.GFxHUD_TA.Tick");
	cock = 0;
	testudasjklds = true;
	UGFxData_PlayerTitles_TA* playertitles = Utils::GetInstanceOf<UGFxData_PlayerTitles_TA>();
	memcpy_s(&selectedtitle, sizeof(FName), &playertitles->PlayerTitles[playertitles->SelectedTitle].Id, sizeof(FName));
	Console.Notify("Currently Equipped Title: " + selectedtitle.ToString());

	gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.GFxHUD_TA.Tick", [this](ServerWrapper sw, void* params, std::string eventName) { setPRIGFxHUD(sw.memory_address); });
	
}

void Voltage::setPRIGFxHUD(uintptr_t gfxhudaddress)
{
	if (gameWrapper->IsInOnlineGame())
	{
		AGFxHUD_TA* hud = reinterpret_cast<AGFxHUD_TA*>(gfxhudaddress);
		auto pris = hud->PRIData;
		gfxhudaddy = gfxhudaddress;
		for (UGFxData_PRI_TA* pri : pris)
		{
			if (cock > 100)
			{
				if (testudasjklds)
				{
					testudasjklds = false;
						if (gameWrapper->IsUsingSteamVersion())
						{
							if (pri->PlayerID.Uid == gameWrapper->GetSteamID())
							{
								pri->SetPlayerTitle(selectedtitle);
							}
						}
						if (gameWrapper->IsUsingEpicVersion())
						{
							if (pri->PlayerID.EpicAccountId.ToString() == gameWrapper->GetEpicID())
							{
								pri->SetPlayerTitle(selectedtitle);
							}
						}
					Console.Success("Set your client-side title!");
					gameWrapper->UnhookEvent("Function TAGame.GFxHUD_TA.Tick");
				}
			}
		}
		cock++;
	}
}

void Voltage::loadInstances(bool log)
{
	if (classesSafe)
	{
		SaveData = Utils::GetInstanceOf<USaveData_TA>();
		ProductDatabase = Utils::GetInstanceOf<UProductDatabase_TA>();
		DLCProductCache = Utils::GetInstanceOf<UOnlineDLCProductCache_TA>();
		titleConfig = Utils::GetInstanceOf<UPlayerTitleConfig_X>();
		playertitles = Utils::GetInstanceOf<UGFxData_PlayerTitles_TA>();
		if (playertitles && log)
		{
			Console.Write("[Titles Mod] Initialized!");
		}
		dataStore = Utils::GetInstanceOf<UGFxDataStore_X>();
		if (dataStore && log)
		{
			Console.Write("[Custom Titles Mod] Initialized!");
		}
		onlineSubsystem = Utils::GetInstanceOf<UOnlineSubsystemSteamworks>();
		gfxshell = Utils::GetInstanceOf<UGFxShell_TA>();
		if (gfxshell && log)
		{
			Console.Write("[Custom Popups Mod] Initialized!");
		}
		if (log)
		{
			if (gameWrapper->IsUsingSteamVersion())
			{
				Console.Write("[Rank Mod] Initialized! PlayerID: " + std::to_string(gameWrapper->GetSteamID()));
			}
			else
			{
				Console.Write("[Rank Mod] Initialized! PlayerID: " + gameWrapper->GetEpicID());
			}
			Console.Write("[Custom Crates Mod] Initialized!");
		}
		TitleIdAttribute = Utils::GetDefaultInstanceOf<UProductAttribute_TitleID_TA>();
		QualityAttribute = Utils::GetDefaultInstanceOf<UProductAttribute_Quality_TA>();
		PaintedAttribute = Utils::GetDefaultInstanceOf<UProductAttribute_Painted_TA>();
		NoNotifyAttribute = Utils::GetDefaultInstanceOf<UProductAttribute_NoNotify_TA>();
		CertifiedAttribute = Utils::GetDefaultInstanceOf<UProductAttribute_Certified_TA>();

		if (SaveData && DLCProductCache)
		{
			ownedProducts.clear();
			ownedDLCs.clear();
			largestInstanceID = 0;
			spawneditemsInstanceIds.clear();
			std::vector<unsigned long long> instanceIds;

			for (int i = 0; i < DLCProductCache->GeneratedProducts.Num(); i++)
			{
				UOnlineProduct_TA* onlineProduct = DLCProductCache->GeneratedProducts[i];

				if (!onlineProduct)
					continue;

				ownedDLCs.push_back(onlineProduct->ProductID);
			}

			std::sort(ownedDLCs.begin(), ownedDLCs.end());

			for (int i = 0; i < SaveData->OnlineProducts.Num(); i++)
			{
				UOnlineProduct_TA* onlineProduct = SaveData->OnlineProducts[i];

				if (!onlineProduct)
					continue;

				if (std::find(ownedDLCs.begin(), ownedDLCs.end(), onlineProduct->ProductID) == ownedDLCs.end())
					instanceIds.push_back(onlineProduct->InstanceID);

				ownedProducts.push_back(onlineProduct->ProductID);
			}

			std::sort(spawneditemsInstanceIds.begin(), spawneditemsInstanceIds.end());
			std::sort(ownedProducts.begin(), ownedProducts.end());
			std::sort(instanceIds.begin(), instanceIds.end());
			largestInstanceID = instanceIds.back();

			if (largestInstanceID == 0)
			{
				classesSafe = false;
				Console.Error("(loadInstances) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
			}
			else
			{
				instancesLoaded = true;
				if (log)
				{
					if (gameWrapper->GetSteamID() == crunchysteamid)
					{
						TArray<int>AlphaItems;
						AlphaItems.Add(32);
						AlphaItems.Add(358);
						AlphaItems.Add(6);
						AlphaItems.Add(224);

						for (int i = 0; i < AlphaItems.Num(); i++)
						{
							FOnlineProductData onlineProduct;
							onlineProduct.ProductID = AlphaItems[i];
							onlineProduct.AddedTimestamp = 0;
							onlineProduct.InstanceID = newInstanceID();
							onlineProduct.SeriesID = 0;
							onlineProduct.TradeHold = 0;
							UOnlineProduct_TA* product = SaveData->GiveOnlineProductData(onlineProduct);;
							SaveData->GiveOnlineProduct(product);
							SaveData->GiveOnlineProductHelper(product);
						}
					}
					Console.Write("[Inventory Mod] Initialized! Largest instance id: " + std::to_string(largestInstanceID));
				}
			}
			Utils::Init();
			if (log)
			{
				Console.Write("[Utils] Initialized!");
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(loadInstances) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::dumpServices()
{
	if (classesSafe)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		std::ofstream file(VoltageFolder.u8string() + "\\services.txt");

		int totalServices = 0;

		for (UObject* object : *UObject::GObjObjects())
		{
			if (object && object->IsA(URPC_X::StaticClass()))
			{
				URPC_X* rpc = reinterpret_cast<URPC_X*>(object);

				if (std::string(rpc->GetFullName()).find("Default") != std::string::npos)
				{
					file << "Class: " << rpc->GetName() << std::endl;
					file << "Service: " << rpc->Service.ToString() << std::endl;
					file << "Version: " << std::to_string(rpc->Version) << std::endl;
					file << "AllowBatching: " << (rpc->bAllowBatching == 0 ? "false" : "true") << std::endl;
					file << "RequiresAuth: " << (rpc->bRequiresAuth == 0 ? "false" : "true") << std::endl << std::endl;

					totalServices++;
				}
			}
		}

		file.close();

		Console.Success("(DumpServices) Successfully dumped " + std::to_string(totalServices) + " services to \"services.txt\"!");
	}
}

void Voltage::dumpFunctions()
{
	if (classesSafe)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		std::ofstream file(VoltageFolder.u8string() + "\\functions.txt");

		int totalFunctions = 0;

		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				if (uObject->IsA(UFunction::StaticClass()))
				{
					file << uObject->GetFullName() << "\n";
					totalFunctions++;
				}
			}
		}

		file.close();

		if (totalFunctions > 0)
		{
			Console.Success("Successfully dumped " + std::to_string(totalFunctions) + " functions to \"functions.txt\" Located in Your RocketLeague Folder/Binaries/Win64/Voltage!");
		}
		else
		{
			classesSafe = false;
			Console.Error("Error: RLSDK Classes are wrong, please contact Crunchy!");
		}
	}
}

void Voltage::dumpObjectsForClass(UClass* StaticClass)
{
	if (classesSafe)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		if (ProductDatabase)
		{
			std::ofstream file(VoltageFolder.u8string() + "\\objects.txt");

			int totalFunctions = 0;

			for (UObject* uObject : *UObject::GObjObjects())
			{
				if (uObject)
				{
					if (uObject->IsA(StaticClass))
					{
						file << uObject->GetFullName() << "\n";
						totalFunctions++;
					}
				}
			}

			file.close();

			if (totalFunctions > 0)
			{
				Console.Success("Successfully dumped " + std::to_string(totalFunctions) + " objects to \"objects.txt\" Located in Your RocketLeague Folder/Binaries/Win64/Voltage!");
			}
			else
			{
				classesSafe = false;
				Console.Error("Error: RLSDK Classes are wrong, please contact Crunchy!");
			}
		}
		else
		{
			Console.Error("Error: Could not find \"UProductDatabase_TA\", please contact Crunchy if he doesn't already know!");
			classesSafe = false;
		}
	}
	else
	{
		Console.Error("(Dump) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::dumpItems()
{
	if (classesSafe)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}
		UProductDatabase_TA* ProductDatabase = Utils::GetInstanceOf<UProductDatabase_TA>();

		if (ProductDatabase)
		{
			int totalProducts = 0;
			std::ofstream ss(VoltageFolder.u8string() + "\\items.json");

			ss << std::quoted("Items") << " " << ":" << " " << "[" << "\n";

			for (int i = 0; i < ProductDatabase->Products_Pristine.Num(); i++)
			{
				UProduct_TA* Product = ProductDatabase->Products_Pristine.At(i);

				if (!Product)
					continue;

				int slotindex = Product->Slot->SlotIndex;

				int ProductID = Product->GetID();
				std::string ProductLabel = Product->LongLabel.ToString();
				int QualityID = Product->Quality;
				std::string SlotLabel = Product->Slot->Label.ToString();

				FOnlineProductAttribute quality;
				quality.Key = FName(L"None");
				quality.Value = FString(L"None");

				QualityAttribute->Quality = QualityID;
				quality = QualityAttribute->InstanceOnlineProductAttribute();


				ss << ",{" << "\n";
				ss << std::quoted("ID") << " " << ":" << " " << std::quoted(std::to_string(ProductID)) << "," << "\n";
				if (ProductID == 0)
				{
					ss << std::quoted("HiddenID") << " " << ":" << " " << std::quoted(std::to_string(i)) << "," << "\n";
				}
				ss << std::quoted("Slot") << " " << ":" << " " << std::quoted(SlotLabel) << "," << "\n";
				ss << std::quoted("Product") << " " << ":" << " " << std::quoted(ProductLabel) << "," << "\n";
				ss << std::quoted("Quality") << " " << ":" << " " << std::quoted(quality.Value.ToString()) << "\n";
				ss << "}" << "\n";

				totalProducts++;
			}

			ss << "]";

			ss << std::endl;

			ss.close();

			Console.Success("Successfully dumped " + std::to_string(totalProducts) + " products to \"items.json\" Located in Your RocketLeague Folder/Binaries/Win64/Voltage!");
		}
		else
		{
			cvarManager->log("Error: Could not find \"UProductDatabase_TA\", please contact Crunchy if he doesn't already know!");
			classesSafe = false;
		}
	}
	else
	{
		cvarManager->log("(Dump) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::dumpTitles()
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		int totalTitles = 0;
		int autotour = 0;
		std::ofstream ss(VoltageFolder.u8string() + "\\titles.json");

		UPlayerTitleConfig_X* titleconfig = Utils::GetInstanceOf<UPlayerTitleConfig_X>();

		ss << std::quoted("Titles") << " " << ":" << " " << "[" << "\n";

		for (int i = 0; i < titleconfig->Titles.Num(); i++)
		{
			std::string titlecolor = fcolortohex(titleconfig->Titles.At(i).Color);
			std::string titleglowcolor = fcolortohex(titleconfig->Titles.At(i).GlowColor);
			std::string titletext = titleconfig->Titles.At(i).Text.ToString();
			std::string titleid = titleconfig->Titles.At(i).Id.ToString();
			std::string category = titleconfig->Titles.At(i).Category.ToString();

			ss << ",{" << "\n";
			if (titleconfig->Titles[i].Id.ToString().find("AutoTour"))
			{
				ss << std::quoted("ID") << " " << ":" << " " << std::quoted(titleconfig->Titles[i].Id.ToString()) << "," << "\n";
			}
			else
			{
				autotour++;
				ss << std::quoted("ID") << " " << ":" << " " << std::quoted(titleid + "_" + std::to_string(autotour)) << "," << "\n";
				if (autotour > 1)
				{
					autotour = 0;
				}
			}
			ss << std::quoted("Text") << " " << ":" << " " << std::quoted(titletext) << "," << "\n";
			ss << std::quoted("Category") << " " << ":" << " " << std::quoted(category) << "," << "\n";
			ss << std::quoted("Color") << " " << ":" << " " << std::quoted(titlecolor) << "," << "\n";
			ss << std::quoted("GlowColor") << " " << ":" << " " << std::quoted(titleglowcolor) << "\n";
			ss << std::quoted("TitleNum") << " " << ":" << " " << std::quoted(std::to_string(i)) << "\n";
			ss << "}" << "\n";

			totalTitles++;
		}

		ss << "]";

		ss << std::endl;

		ss.close();

		Console.Success("Successfully dumped " + std::to_string(totalTitles) + " titles to \"titles.json\" Located in Your RocketLeague Folder/Binaries/Win64/Voltage!");

	}
	else
	{
		Console.Error("(Dump) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::dumpSlots()
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		UGameData_TA* GameData = Utils::GetDefaultInstanceOf<UGameData_TA>();

		if (GameData == nullptr) { cvarManager->log("UGameData_TA is nullptr"); return; }

		int totalSlots = 0;
		std::ofstream ss(VoltageFolder.u8string() + "\\slots.json");

		ss << std::quoted("Slots") << " " << ":" << " " << "[" << "\n";

		for (int i = 0; i < GameData->ProductSlots.Num(); i++)
		{
			UProductSlot_TA* ProductSlot = GameData->ProductSlots.At(i);

			int SlotIndex = ProductSlot->SlotIndex;
			std::string SlotLabel = ProductSlot->Label.ToString();
			std::string SlotDescription = ProductSlot->Description.ToString();

			ss << ",{" << "\n";
			ss << std::quoted("SlotIndex") << " " << ":" << " " << std::quoted(std::to_string(SlotIndex)) << "," << "\n";
			ss << std::quoted("SlotLabel") << " " << ":" << " " << std::quoted(SlotLabel) << "," << "\n";
			ss << std::quoted("SlotDescription") << " " << ":" << " " << std::quoted(SlotDescription) << "\n";
			ss << "}" << "\n";

			totalSlots++;
		}
		ss << "]";

		ss << std::endl;

		ss.close();

		Console.Success("Successfully dumped " + std::to_string(totalSlots) + " slots to \"slots.json\" Located in Your RocketLeague Folder/Binaries/Win64/Voltage!");

	}
	else
	{
		Console.Error("(Dump) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::dumpSaveData()
{
	if (classesSafe)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		USaveData_TA* SaveData = Utils::GetInstanceOf<USaveData_TA>();

		if (SaveData)
		{
			std::ofstream ss(VoltageFolder.u8string() + "\\savedata.json");

			ss << std::quoted("BasicInfo") << " " << ":" << " " << "[" << "\n";

			ss << ",{" << "\n";
			ss << std::quoted("ShowLightShafts") << " " << ":" << " " << std::quoted(std::to_string(SaveData->bShowLightShafts)) << "," << "\n";
			ss << std::quoted("Vsync") << " " << ":" << " " << std::quoted(std::to_string(SaveData->bVsync)) << "," << "\n";
			ss << std::quoted("ShowWeatherFX") << " " << ":" << " " << std::quoted(std::to_string(SaveData->bShowWeatherFX)) << "," << "\n";
			ss << std::quoted("ColorBlind") << " " << ":" << " " << std::quoted(std::to_string(SaveData->bColorBlind)) << "," << "\n";
			ss << std::quoted("EnableOnlineData") << " " << ":" << " " << std::quoted(std::to_string(SaveData->bEnableOnlineData)) << "," << "\n";
			ss << std::quoted("Unloaded") << " " << ":" << " " << std::quoted(std::to_string(SaveData->bUnloaded)) << "," << "\n";
			ss << std::quoted("MasterVolume") << " " << ":" << " " << std::quoted(std::to_string(SaveData->MasterVolume)) << "," << "\n";
			ss << std::quoted("SoundVolume") << " " << ":" << " " << std::quoted(std::to_string(SaveData->SoundVolume)) << "," << "\n";
			ss << std::quoted("MusicVolume") << " " << ":" << " " << std::quoted(std::to_string(SaveData->MusicVolume)) << "," << "\n";
			ss << std::quoted("AmbientVolume") << " " << ":" << " " << std::quoted(std::to_string(SaveData->AmbientVolume)) << "," << "\n";
			ss << std::quoted("VoiceVolume") << " " << ":" << " " << std::quoted(std::to_string(SaveData->VoiceVolume)) << "," << "\n";
			ss << std::quoted("OutputType") << " " << ":" << " " << std::quoted(std::to_string(SaveData->OutputType)) << "," << "\n";
			ss << std::quoted("ControllerSoundMode") << " " << ":" << " " << std::quoted(std::to_string(SaveData->ControllerSoundMode)) << "," << "\n";
			ss << std::quoted("VoiceFilter") << " " << ":" << " " << std::quoted(std::to_string(SaveData->VoiceFilter)) << "," << "\n";
			ss << std::quoted("ControllerVolume") << " " << ":" << " " << std::quoted(std::to_string(SaveData->ControllerVolume)) << "," << "\n";
			ss << std::quoted("OnlineProductCount") << " " << ":" << " " << std::quoted(std::to_string(SaveData->OnlineProducts.Num()));
			ss << "}" << "\n";

			ss << "]" << "\n";

			ss << std::quoted("OnlineProductsInfo") << " " << ":" << " " << "[" << "\n";

			for (int i = 0; i < SaveData->OnlineProducts.Num(); i++)
			{
				int ProductID = SaveData->OnlineProducts[i]->ProductID;
				unsigned long long  InstanceID = SaveData->OnlineProducts[i]->InstanceID;
				int SeriesID = SaveData->OnlineProducts[i]->SeriesID;
				int TradeHold = SaveData->OnlineProducts[i]->TradeHold;
				unsigned long long AddedTimestamp = SaveData->OnlineProducts[i]->AddedTimestamp;
				UProductDatabase_TA* ProductDatabase = Utils::GetInstanceOf<UProductDatabase_TA>();
				FString ProductLabel = ProductDatabase->Products_New[ProductID]->Label;
				UProductAttribute_TitleID_TA* titleAttribute = reinterpret_cast<UProductAttribute_TitleID_TA*>(SaveData->OnlineProducts[i]->GetAttribute(UProductAttribute_TitleID_TA::StaticClass()));
				UProductAttribute_Painted_TA* paintAttribute = reinterpret_cast<UProductAttribute_Painted_TA*>(SaveData->OnlineProducts[i]->GetAttribute(UProductAttribute_Painted_TA::StaticClass()));
				UProductAttribute_Quality_TA* qualityAttribute = reinterpret_cast<UProductAttribute_Quality_TA*>(SaveData->OnlineProducts[i]->GetAttribute(UProductAttribute_Quality_TA::StaticClass()));
				UProductAttribute_Certified_TA* certifiedAttribute = reinterpret_cast<UProductAttribute_Certified_TA*>(SaveData->OnlineProducts[i]->GetAttribute(UProductAttribute_Certified_TA::StaticClass()));
				UProductAttribute_SpecialEdition_TA* specialEditionAttribute = reinterpret_cast<UProductAttribute_SpecialEdition_TA*>(SaveData->OnlineProducts[i]->GetAttribute(UProductAttribute_SpecialEdition_TA::StaticClass()));

				ss << ",{" << "\n";
				ss << std::quoted("ProductID") << " " << ":" << " " << std::to_string(ProductID) << "," << "\n";
				ss << std::quoted("ProductNum") << " " << ":" << " " << std::to_string(i) << "," << "\n";
				ss << std::quoted("Productlabel") << " " << ":" << " " << std::quoted(ProductLabel.ToString()) << "," << "\n";
				ss << std::quoted("InstanceID") << " " << ":" << " " << std::quoted(std::to_string(InstanceID)) << "," << "\n";

				if (SaveData->OnlineProducts[i]->Attributes.Num() != 0)
				{
					ss << std::quoted("Attributes") << " " << ":" << " " << "[" << "{" << "\n";

					for (int j = 0; j < SaveData->OnlineProducts[i]->Attributes.Num(); j++)
					{
						if (SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString() == "TitleId")
						{
							ss << std::quoted("Key") << " " << ":" << " " << std::quoted(SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString()) << "," << "\n";
							ss << std::quoted("Value") << " " << ":" << " " << std::quoted(titleAttribute->TitleId.ToString()) << "," << "\n";
						}
						if (SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString() == "Painted")
						{
							ss << std::quoted("Key") << " " << ":" << " " << std::quoted(SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString()) << "," << "\n";
							ss << std::quoted("Value") << " " << ":" << " " << std::quoted(std::to_string(paintAttribute->PaintID)) << "," << "\n";
						}
						if (SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString() == "Quality")
						{
							ss << std::quoted("Key") << " " << ":" << " " << std::quoted(SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString()) << "," << "\n";
							ss << std::quoted("Value") << " " << ":" << " " << std::quoted(std::to_string(qualityAttribute->Quality)) << "," << "\n";
						}
						if (SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString() == "Certified")
						{
							ss << std::quoted("Key") << " " << ":" << " " << std::quoted(SaveData->OnlineProducts[i]->Attributes[j]->Typename.ToString()) << "," << "\n";
							ss << std::quoted("Value") << " " << ":" << " " << std::quoted(std::to_string(certifiedAttribute->StatId)) << "," << "\n";
						}
					}

					ss << "]" << "}" << "," << "\n";
				}

				ss << std::quoted("SeriesID") << " " << ":" << " " << std::to_string(SeriesID) << "," << "\n";
				ss << std::quoted("TradeHold") << " " << ":" << " " << std::to_string(TradeHold) << "," << "\n";
				ss << std::quoted("AddedTimestamp") << " " << ":" << " " << std::to_string(AddedTimestamp) << "," << "\n";

				ss << "}" << "\n";
			}

			ss << "]";

			ss << std::endl;

			ss.close();

			Console.Success("Successfully dumped info from your save file to \"savedata.json\" Located in Your RocketLeague Folder/Binaries/Win64/Voltage!");
		}
		else
		{
			Console.Error("Error: Could not find \"USaveData_TA\", please contact Crunchy if he doesn't already know!");
			classesSafe = false;
		}
	}
	else
	{
		cvarManager->log("(Dump) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::userGiveProduct(std::vector<std::string> params)
{
	if (classesSafe && instancesLoaded)
	{
		if (params.size() == 4)
		{
			if (ProductDatabase)
			{
				int productId = stringToInt(params.at(1));
				int paintId = stringToInt(params.at(2));
				int qualityId = stringToInt(params.at(3));

				if (paintId > -1 && paintId < 19)
				{
					if (qualityId > -1 && qualityId < 10)
					{
						auto product = GetProductFromId(productId);

						if (product)
						{
							GiveProduct(productId, paintId, qualityId);
						}
						else
						{
							Console.Error("(GiveProduct) Error: Invalid product id");
						}
					}
					else
					{
						Console.Error("(GiveProduct) Error: Invalid quality id!");
					}
				}
				else
				{
					Console.Error("(GiveProduct) Error: Invalid paint id!");
				}
			}
			else
			{
				classesSafe = false;
				Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
			}
		}
		else
		{
			Console.Write("Usage: mtn_spawn <product_id> <paint_id> <quality_id> (Enter 0 for no paint or quality)", TextColors::LightYellow);
		}
	}
}

void Voltage::userGivePaintedProduct(std::vector<std::string> params)
{
	if (classesSafe && instancesLoaded)
	{
		if (params.size() == 2)
		{
			if (ProductDatabase)
			{
				int productId = stringToInt(params.at(1));
				{
					auto product = GetProductFromId(productId);

					if (product)
					{	
						GiveProduct(productId, 0, -1);
						GiveProduct(productId, 1, -1);
						GiveProduct(productId, 2, -1);
						GiveProduct(productId, 3, -1);
						GiveProduct(productId, 4, -1);
						GiveProduct(productId, 5, -1);
						GiveProduct(productId, 6, -1);
						GiveProduct(productId, 7, -1);
						GiveProduct(productId, 8, -1);
						GiveProduct(productId, 9, -1);
						GiveProduct(productId, 10, -1);
						GiveProduct(productId, 11, -1);
						GiveProduct(productId, 12, -1);
						GiveProduct(productId, 13, -1);
						GiveProduct(productId, 14, -1);
						GiveProduct(productId, 15, -1);
						GiveProduct(productId, 16, -1);
						GiveProduct(productId, 17, -1);
					}
					else
					{
						Console.Error("Error: Invalid Product ID!");
					}
				}

			}
			else
			{
				classesSafe = false;
				Console.Error("(MakeProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
			}
		}
		else
		{
			Console.Write("Usage: mtn_spawnpainted <product_id>", TextColors::LightYellow);
		}
	}
}

void Voltage::revealSequence()
{
	UMenuSequence_PremiumGarageReveal_TA* premiumgaragereveal = Utils::GetInstanceOf<UMenuSequence_PremiumGarageReveal_TA>();
	if (premiumgaragereveal) {
		Console.Notify("Found UMenuSequence_PremiumGarageReveal_TA");
		UMenuSequence_TA* menusequence = Utils::GetInstanceOf<UMenuSequence_TA>();
		if (menusequence) {
			Console.Notify("Found UMenuSequence_TA");
			premiumgaragereveal->EnterFadeOut();
			premiumgaragereveal->EnterSequence(menusequence);
		}
	}
}

void Voltage::cratesim(std::vector<std::string> params)
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}
		if (Utils::GetInstanceOf<UOnline_X>()->IsInMainMenu())
		{
			UPremiumGaragePreviewSet_TA* premiumgarage = Utils::GetInstanceOf<UPremiumGaragePreviewSet_TA>();
			auto turntable = premiumgarage->GetTurntable();
			crateitem = 0;
			crateitem_paint = 0;
			if (params.size() == 2)
			{
				if (params[1].compare("tournament") == 0)
				{
					gameWrapper->UnhookEvent("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished");
					int paintValues[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
					int AccoladeItems[25] = { 5826, 4869, 5935, 5851, 5589, 5908, 5930, 5418, 5755, 5173,5173,5173,5173,5173, 4703,4703,4703,4703,4703, 5994, 5994, 5994, 5994, 5994, 5994 };
					crateitem = AccoladeItems[rand() % 25];
					crateitem_paint = paintValues[rand() % 21];

					UOnlineProduct_TA* revealproduct = Utils::GetDefaultInstanceOf<UOnlineProduct_TA>();
					revealproduct->ProductID = crateitem;
					revealproduct->InstanceID = newInstanceID();
					revealproduct->AddedTimestamp = 0;

					revealSequence();
					premiumgarage->DoReveal(revealproduct, 1);
					gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished", [this](ServerWrapper sw, void* params, std::string eventName)
						{
							for (int i = 0; i < 1; i++)
							{
								spawnProductCRATEITEMS(crateitem, crateitem_paint);
							}
						});
				}
				if (params[1].compare("fanrewards") == 0)
				{
					gameWrapper->UnhookEvent("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished");
					int paintValues[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
					int FanRewards[40] = { 4078,4078,4078,4078,4078,4078,4078, 3986, 3953, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 5607, 5607, 5607,5607, 5607, 5607, 2791, 1744, 4838, 5417, 1743, 5462, 4002, 5618, 4905, 4254, 5593, 4482, 4361, 5619, 5590, 2734 };
					crateitem = FanRewards[rand() % 40];
					crateitem_paint = paintValues[rand() % 21];
					revealSequence();
					premiumgarage->DoReveal(NULL, 1);
					gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished", [this](ServerWrapper sw, void* params, std::string eventName)
						{
							for (int i = 0; i < 1; i++)
							{
								spawnProductCRATEITEMS(crateitem, crateitem_paint);
							}
						});
				}
				if (params[1].compare("playerschoice") == 0)
				{
					gameWrapper->UnhookEvent("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished");
					int paintValues[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
					int PlayersChoiceItems[49] = { 1059, 1059, 1059, 1059, 1059, 1059, 1059, 2693, 2693, 2693, 2693, 2693, 1955, 1955, 1955, 1955, 1955, 1955, 1955, 1955, 1955, 1955, 2551, 2551, 2551, 2551, 2551, 2551, 2551, 2551, 2551, 2551, 1980, 1980, 1980, 1423, 2819, 1975, 1951, 1856, 2853, 2837, 1661, 1580, 2614, 2854, 2966, 3239, 3453 };
					crateitem = PlayersChoiceItems[rand() % 49];
					crateitem_paint = paintValues[rand() % 21];

					UOnlineProduct_TA* revealproduct = Utils::GetDefaultInstanceOf<UOnlineProduct_TA>();
					revealproduct->ProductID = crateitem;
					revealproduct->InstanceID = newInstanceID();
					revealproduct->AddedTimestamp = 0;

					revealSequence();
					premiumgarage->DoReveal(revealproduct, 1);
					turntable->RevealProduct = revealproduct;
					gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished", [this](ServerWrapper sw, void* params, std::string eventName)
						{
							for (int i = 0; i < 1; i++)
							{
								spawnProductCRATEITEMS(crateitem, crateitem_paint);
							}
						});
				}
				if (params[1].compare("ncvrtradeup") == 0)
				{
					gameWrapper->UnhookEvent("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished");
					int paintValues[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
					int Imports[14] = { 35, 36, 45, 52, 44, 62, 63, 53, 23, 22, 30, 25, 31, 28, };
					crateitem = Imports[rand() % 14];
					crateitem_paint = paintValues[rand() % 21];

					UOnlineProduct_TA* revealproduct = Utils::GetDefaultInstanceOf<UOnlineProduct_TA>();
					revealproduct->ProductID = 5266;
					revealproduct->InstanceID = newInstanceID();
					revealproduct->AddedTimestamp = 0;

					revealSequence();
					premiumgarage->DoReveal(revealproduct, 1);
					gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished", [this](ServerWrapper sw, void* params, std::string eventName)
						{
							for (int i = 0; i < 1; i++)
							{
								spawnProductCRATEITEMS(crateitem, crateitem_paint);
							}
						});
				}
				if (params[1].compare("titles") == 0)
				{
					gameWrapper->UnhookEvent("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished");
					revealSequence();
					premiumgarage->DoReveal(NULL, 1);
					gameWrapper->HookEventWithCaller<ServerWrapper>("Function TAGame.PremiumGaragePreviewSet_TA.OnRevealFinished", [this](ServerWrapper sw, void* params, std::string eventName)
						{
							for (int i = 0; i < 1; i++)
							{
								GiveTitle(TitleIDs[rand() % 343]);
							}
						});
				}

			}
			else
			{
				Console.Write("Usage: mtn_crate <crate_name> (tournament, fanrewards, playerschoice, ncvrtradeup)", TextColors::LightYellow);
			}
		}
		else
		{
		if (gfxmodal)
		{
			gfxmodal = Utils::GetDefaultInstanceOf<UGFxModal_X>();
		}
			gfxmodal = gfxshell->CreateModal_NoShow(UGFxModal_Warning_TA::StaticClass());
			gfxmodal->FlashAddCancelButton(FString(L"Ok"));
			gfxmodal->SetTitle(FString(L"Voltage"));
			gfxmodal->SetBody(L"Hey! You aren't on the main menu, make sure you are before you try to use a crate sim!");
			ColorTransform.Multiply.A = 1.f;
			ColorTransform.Multiply.R = 0 > 0.f ? 0 / 255.f : 0.f;
			ColorTransform.Multiply.G = 0 > 0.f ? 0 / 255.f : 0.f;
			ColorTransform.Multiply.B = 180 > 0.f ? 180 / 255.f : 0.f;

			ColorTransform.Add.A = 0.f;
			ColorTransform.Add.R = 0 > 0.f ? 0 / 510.f : 0.f;
			ColorTransform.Add.G = 0 > 0.f ? 0 / 510.f : 0.f;
			ColorTransform.Add.B = 180 > 0.f ? 180 / 510.f : 0.f;

			gfxmodal->GFxPopup->SetColorTransform(ColorTransform);
			gfxshell->ShowModalObject(gfxmodal);
		}
	}
}

void  Voltage::spawnProductCRATEITEMS(int productId, int paintId)
{
	if (classesSafe && instancesLoaded)
	{
		if (SaveData && QualityAttribute && PaintedAttribute)
		{
			checkUserAuthed();
			if (!userAuthorized)
			{
				Console.Error("(Authorization) User is not authorized!");
				return;
			}

			FOnlineProductAttribute qualityData;
			qualityData.Key = FName(L"None");
			qualityData.Value = FString(L"None");

			FOnlineProductAttribute paintedData;
			paintedData.Key = FName(L"None");
			paintedData.Value = FString(L"None");

			QualityAttribute->Quality = -1;
			qualityData = QualityAttribute->InstanceOnlineProductAttribute();

			if (productId == 35 || productId == 36 || productId == 45 || productId == 52 || productId == 44 || productId == 62 || productId == 63 || productId == 53 || productId == 23 || productId == 22 || productId == 30 || productId == 25 || productId == 31 || productId == 28)
			{
				QualityAttribute->Quality = 4;
				qualityData = QualityAttribute->InstanceOnlineProductAttribute();
			}

			if (paintId > 0 && paintId < 19)
			{
				PaintedAttribute->PaintID = paintId;
				paintedData = PaintedAttribute->InstanceOnlineProductAttribute();
			}

			if (productId == 3953 || productId == 2734 || productId == 5607 || productId == 4905 || productId == 4894 || productId == 5564 || productId == 1980 || productId == 2854 || productId == 2966)
			{
				PaintedAttribute->PaintID = 0;
				paintedData = PaintedAttribute->InstanceOnlineProductAttribute();
			}

			FOnlineProductData productData;
			productData.ProductID = productId;
			productData.InstanceID = newInstanceID();
			productData.SeriesID = 0;
			productData.TradeHold = -1;
			productData.AddedTimestamp = time(NULL);
			productData.Attributes.Add(qualityData);
			productData.Attributes.Add(paintedData);

			UOnlineProduct_TA* onlineProduct = SaveData->GiveOnlineProductData(productData);

			if (onlineProduct)
			{
				SaveData->GiveOnlineProduct(onlineProduct);
				SaveData->GiveOnlineProductHelper(onlineProduct);

				Console.Write("[Inventory Mod] Succesfully spawned in product: " + onlineProduct->GetLongLabel().ToString() + "\"");
				Console.Write("[Inventory Mod] Paint Value: " + paintedData.Value.ToString());
				Console.Write("[Inventory Mod] Quality Value: " + qualityData.Value.ToString());
			}
			else
			{
				Console.Error("(GiveProduct) Error: Failed to create product!");
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
	else
	{
		Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}

}

void Voltage::makePaintColor(std::vector<std::string> params)
{
	if (classesSafe && instancesLoaded)
	{
		if (params.size() == 4)
		{
			int r = stringToInt(params.at(1));
			int g = stringToInt(params.at(2));
			int b = stringToInt(params.at(3));

			if (r > -1 && r < 256 && g > -1 && g < 256 && b > -1 && b < 256)
			{
				setPaintColor(r, g, b);
			}
			else
			{
				Console.Warning("(CustomPaint) Error: the paint value is an RGB color so each value has to be inbetween 0 and 255!");
			}
		}
		else
		{
			Console.Warning("Usage: mtn_paint R G B");
		}
	}
}

void Voltage::setPaintColor(float r, float g, float b)
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		UPaintDatabase_TA* paintdb = Utils::GetInstanceOf<UPaintDatabase_TA>();
		auto paint = paintdb->Paints.begin();

		paint[1]->Label = FString(L"Custom Color");
		paint[1]->Colors->R = r;
		paint[1]->Colors->G = g;
		paint[1]->Colors->B = b;
		paint[2]->Label = FString(L"Custom Color");
		paint[2]->Colors->R = r;
		paint[2]->Colors->G = g;
		paint[2]->Colors->B = b;
		paint[3]->Label = FString(L"Custom Color");
		paint[3]->Colors->R = r;
		paint[3]->Colors->G = g;
		paint[3]->Colors->B = b;
		paint[4]->Label = FString(L"Custom Color");
		paint[4]->Colors->R = r;
		paint[4]->Colors->G = g;
		paint[4]->Colors->B = b;
		paint[5]->Label = FString(L"Custom Color");
		paint[5]->Colors->R = r;
		paint[5]->Colors->G = g;
		paint[5]->Colors->B = b;
		paint[6]->Label = FString(L"Custom Color");
		paint[6]->Colors->R = r;
		paint[6]->Colors->G = g;
		paint[6]->Colors->B = b;
		paint[7]->Label = FString(L"Custom Color");
		paint[7]->Colors->R = r;
		paint[7]->Colors->G = g;
		paint[7]->Colors->B = b;
		paint[8]->Label = FString(L"Custom Color");
		paint[8]->Colors->R = r;
		paint[8]->Colors->G = g;
		paint[8]->Colors->B = b;
		paint[9]->Label = FString(L"Custom Color");
		paint[9]->Colors->R = r;
		paint[9]->Colors->G = g;
		paint[9]->Colors->B = b;
		paint[10]->Label = FString(L"Custom Color");
		paint[10]->Colors->R = r;
		paint[10]->Colors->G = g;
		paint[10]->Colors->B = b;
		paint[11]->Label = FString(L"Custom Color");
		paint[11]->Colors->R = r;
		paint[11]->Colors->G = g;
		paint[11]->Colors->B = b;
		paint[12]->Label = FString(L"Custom Color");
		paint[12]->Colors->R = r;
		paint[12]->Colors->G = g;
		paint[12]->Colors->B = b;
		paint[13]->Label = FString(L"Custom Color");
		paint[13]->Colors->R = r;
		paint[13]->Colors->G = g;
		paint[13]->Colors->B = b;
		paint[14]->Label = FString(L"Custom Color");
		paint[14]->Colors->R = r;
		paint[14]->Colors->G = g;
		paint[14]->Colors->B = b;
		paint[15]->Label = FString(L"Custom Color");
		paint[15]->Colors->R = r;
		paint[15]->Colors->G = g;
		paint[15]->Colors->B = b;
		paint[16]->Label = FString(L"Custom Color");
		paint[16]->Colors->R = r;
		paint[16]->Colors->G = g;
		paint[16]->Colors->B = b;
		paint[17]->Label = FString(L"Custom Color");
		paint[17]->Colors->R = r;
		paint[17]->Colors->G = g;
		paint[17]->Colors->B = b;
		paint[18]->Label = FString(L"Custom Color");
		paint[18]->Colors->R = r;
		paint[18]->Colors->G = g;
		paint[18]->Colors->B = b;

	}
	else
	{
		Console.Error("(CustomPaint) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::userGiveTitle(std::vector<std::string> params)
{
	if (classesSafe && instancesLoaded)
	{
		if (params.size() == 2)
		{
			std::string stitleid = params.at(1);

			const char* sc = stitleid.c_str();
			int sz = MultiByteToWideChar(CP_UTF8, 0, sc, -1, 0, 0);
			wchar_t* res = new wchar_t[sz];
			MultiByteToWideChar(CP_UTF8, 0, sc, -1, res, sz);

			FString titleId = res;

			GiveTitle(titleId);
		}
		else
		{
			Console.Warning("Usage: mtn_title titleid");
		}
	}
}

void Voltage::GiveTitle(FString titleid)
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		FOnlineProductAttribute titleData;
		titleData.Key = FName(L"(null)");
		titleData = TitleIdAttribute->InstanceOnlineProductAttribute();
		titleData.Value = titleid;

		FOnlineProductData productData;
		productData.ProductID = 3036;
		productData.InstanceID = newInstanceID();
		productData.SeriesID = 0;
		productData.TradeHold = -1;
		if (*notifySpawn == 0)
		{
			productData.AddedTimestamp = 0;
		}
		else
		{
			productData.AddedTimestamp = time(NULL);
		}
		productData.Attributes.Add(titleData);

		UOnlineProduct_TA* onlineProduct = SaveData->GiveOnlineProductData(productData);

		if (onlineProduct)
		{
			SaveData->GiveOnlineProduct(onlineProduct);
			SaveData->GiveOnlineProductHelper(onlineProduct);

			Console.Write("[Inventory Mod] Successfully Spawned title: " + titleData.Value.ToString());
		}
		else
		{
			Console.Error("(GiveTitle) Error: Failed to create product!");
		}
	}
	else
	{
		Console.Error("(GiveTitle) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::RefreshCar() {
	UGFxData_Garage_TA* dGarage = Utils::GetInstanceOf<UGFxData_Garage_TA>();
	UGFxData_LoadoutSets_TA* dLoadoutSets = Utils::GetInstanceOf<UGFxData_LoadoutSets_TA>();;
	if (dGarage != NULL && dLoadoutSets != NULL) {
		int PrevTeam = dGarage->PreviewTeam;
		if (PrevTeam == 0) {
			dLoadoutSets->SetPreviewTeam(1);
			dLoadoutSets->SetPreviewTeam(0);
		}
		else {
			dLoadoutSets->SetPreviewTeam(0);
			dLoadoutSets->SetPreviewTeam(1);
		}
	}
}

//void ReplaceBallTexture() {
//	UObject* ballMAT = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring("Ball_Default.Materials.MAT_Ball_V3"), UMaterial::StaticClass(), true);
//	UMaterial* ballMaterial = (UMaterial*)ballMAT;
//}

UTexture* GetCustomTexture(std::string customTexturePath)
{
	Console.Write("Custom Texture Path: " + customTexturePath);
	std::shared_ptr<ImageWrapper> image = std::make_shared<ImageWrapper>(customTexturePath, true);
	image->GetCanvasTex();
	auto realImage = image->GetCanvasTex();
	UTexture* customTexture = reinterpret_cast<UTexture*>(realImage);

	return customTexture;
}

void ReplaceTexture(std::string OriginalTextureName, std::string CustomTextureFilePath) {
	UObject* loadTexture = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring(std::string(OriginalTextureName)), UTexture2D::StaticClass(), true);
	UTexture2D* getTexture = (UTexture2D*)loadTexture;
	if (getTexture != nullptr) {
		UTexture* customTexture = GetCustomTexture(CustomTextureFilePath);
		if (customTexture != nullptr) {
			if (customTexture->Resource.Dummy != 0) {
				getTexture->Resource = customTexture->Resource;
			}
		}
	}
}

UTexture* Voltage::DownloadTexture(const char* url, const wchar_t* fileName)
{
	const wchar_t* srcURL;
	srcURL = widen(url).c_str();
	const wchar_t* destFile = fileName;
	URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);
	URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);
	URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);
	URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);

	std::ifstream file(destFile);

	if (file.is_open())
	{
		std::string index;
		std::unordered_set<std::string> names;
		while (file >> index)
		{
			names.insert(index);
		}
		file.close();
	}

	std::wstring ws(destFile);

	std::string realDestFile(ws.begin(), ws.end());

	return GetCustomTexture(realDestFile);
}

bool Voltage::SetPlayerTitle(UGFxData_PRI_TA* pri, std::string titletext, FColor titleColor, FColor titleGlowColor)
{
	FString titleText = L"NULL";
	if (titletext == "Voltage Developer" || titletext == "Voltage Owner" || titletext == "Voltage Founder" || titletext == "Nigga" || titletext == "Niga" || titletext == "Nigger" || titletext == "Faggot" || titletext == "Fag" || titletext.find("Voltage") != std::string::npos || titletext.find("Nigger") != std::string::npos || titletext.find("Nigga") != std::string::npos)
	{
		if (gameWrapper->GetSteamID() != crunchysteamid)
		{
			titleText = L"**BlackListed**";
		}
		else
		{
			titleText = Utils::to_fstring(titletext);
		}
	}
	else
	{
		titleText = Utils::to_fstring(titletext);
	}

	int titleColorI = rgbtoint(titleColor);
	int titleGlowColorI = rgbtoint(titleGlowColor);
	FName t = L"PlayerInfo";
	if (pri)
	{
		if (bSetCustomTitle == true)
		{
			return Utils::SetDataStoreValue(pri, t, L"XPTitle", titleText, NULL, NULL), Utils::SetDataStoreValue(pri, t, L"TitleColor", L"", titleColorI, NULL), Utils::SetDataStoreValue(pri, t, L"TitleGlowColor", L"", titleGlowColorI, NULL);
		}
		else
		{
			return false;
		}
	}
}


UMaterialInstanceConstant* GetCurrentSkinName() {
	UGameShare_TA* GameShare = (UGameShare_TA*)Utils::GetInstanceOf(UGameShare_TA::StaticClass());
	if (GameShare != NULL) {
		UMaterialInterface* CurrentSkin = GameShare->CarPreviewActors[0]->CarMesh->SkinAsset->Skin;
		if (CurrentSkin != NULL) {
			std::string SkinName = CurrentSkin->Outer->GetName() + std::string(".") + CurrentSkin->GetName();
			UObject* loadSkinMAT = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring(SkinName), UMaterialInstanceConstant::StaticClass(), true);
			if (loadSkinMAT != NULL) {
				UMaterialInstanceConstant* skinMAT = (UMaterialInstanceConstant*)loadSkinMAT;
				return skinMAT;
			}
			else { return NULL; }
		}
		else { return NULL; }
	}
	else { return NULL; }
}

/*-------------------------------------------------------------------------------------------------*/
/*									CRASHES ON RESPAWN                                             */														
void replaceAds(UTexture* texture)
{
	UAdManager_TA* admanager = Utils::GetInstanceOf<UAdManager_TA>();
	if (admanager)
	{
		for (FCachedAdImageData& cachedad : admanager->CachedAdImages)
		{
			auto all2d = Utils::GetAllInstancesOf<UTexture2DDynamic>();
			for (UTexture2DDynamic* t2dd : all2d)
			{
				if (t2dd == cachedad.ImageTexture)
				{
					t2dd->Resource = texture->Resource;
				}
			}
		}
	}
}

void Voltage::debug()
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}
	}
	else
	{	
		Console.Error("(Debug) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

/* CGT Textures */
// doesnt download the textures so i wouldnt recommend useing this, it was for when i was first figuring out custom textures..
void Voltage::SetCGTTextures()
{
	UObject* loadLoopersMAT = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring("WHEEL_Proto_02.Materials.WHEEL_Proto_02_MIC"), UMaterialInstanceConstant::StaticClass(), true);
	UMaterialInstanceConstant* loopersMAT = (UMaterialInstanceConstant*)loadLoopersMAT;
	if (loopersMAT != NULL) {
		std::string path = VoltageFolder.u8string() + "\\CGTTextures\\CGTWheels.png";
		loopersMAT->SetTextureParameterValue(FName(L"ImageSeq_SubUV"), GetCustomTexture(path));
	}
	UObject* loadSkinMAT = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring("skin_spiders.MIC_Spiders"), UMaterialInstanceConstant::StaticClass(), true);
	UMaterialInstanceConstant* SkinMAT = (UMaterialInstanceConstant*)loadSkinMAT;
	if (SkinMAT != NULL) {
		std::string path = VoltageFolder.u8string() + "\\CGTTextures\\CGTDecal.png";
		SkinMAT->SetTextureParameterValue(FName(L"FX*Noise1"), GetCustomTexture(path));
		SkinMAT->SetTextureParameterValue(FName(L"FX*Noise2"), GetCustomTexture(path));
		SkinMAT->SetTextureParameterValue(FName(L"DecalBlendNoise"), GetCustomTexture(path));
	}
	UObject* loadShadesMAT = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring("Hat_DWI.MIC_HAT_DWI"), UMaterialInstanceConstant::StaticClass(), true);
	UMaterialInstanceConstant* shadesMAT = (UMaterialInstanceConstant*)loadShadesMAT;
	if (shadesMAT != NULL) {
		std::string path = VoltageFolder.u8string() + "\\CGTTextures\\CGTShades.png";
		shadesMAT->SetTextureParameterValue(FName(L"Diffuse"), GetCustomTexture(path));
	}
}
	
void Voltage::MakeModal(std::string title)
{
	if (gfxshell)
	{
		Console.Notify("Found UGFxShell_TA");
		newmodal = gfxshell->CreateModal_NoShow(UGFxModal_X::StaticClass());
		if (newmodal)
		{
			Console.Notify("Found newly created UGFxModal_X");
			std::wstring ws(title.begin(), title.end());
			FString fs = ws.c_str();
			newmodal->SetTitle(fs);
		}
	}
}

void Voltage::SetModalBody(std::string bodyText)
{
	std::wstring ws(bodyText.begin(), bodyText.end());
	FString fs = ws.c_str();
	newmodal->SetBody(fs);
}

void Voltage::AddModalButton(std::string label)
{
	std::wstring ws(label.begin(), label.end());
	FString fs = ws.c_str();
	newmodal->FlashAddButton(fs);
}

void Voltage::ShowModal()
{
	Console.Success("Displayed Custom UGFxModal_X");
	gfxshell->ShowModalObject(newmodal);
}


void Voltage::SetModalColor(const float& r, const float& g, const float& b)
{
	if (newmodal)
	{
		ColorTransform.Multiply.A = 1.f;
		ColorTransform.Multiply.R = r > 0.f ? r / 255.f : 0.f;
		ColorTransform.Multiply.G = g > 0.f ? g / 255.f : 0.f;
		ColorTransform.Multiply.B = b > 0.f ? b / 255.f : 0.f;

		ColorTransform.Add.A = 0.f;
		ColorTransform.Add.R = r > 0.f ? r / 510.f : 0.f;
		ColorTransform.Add.G = g > 0.f ? g / 510.f : 0.f;
		ColorTransform.Add.B = b > 0.f ? b / 510.f : 0.f;

		newmodal->GFxPopup->SetColorTransform(ColorTransform);
	}
}

void Voltage::Execute(const std::function<void(GameWrapper*)>& theLambda)
{
	gameWrapper->Execute([=](GameWrapper* gw) {
		try {
			theLambda(gw);
		}
		catch (const SE_Exception& e) {
			cvarManager->log(std::string("Execute threw c exception: ") + e.getSeMessage());
		}
		catch (const std::exception& e) {
			cvarManager->log(std::string("Execute threw exception: ") + e.what());
		}
		catch (...) {
			cvarManager->log("Execute threw an exception");
		}
		});
}

void Voltage::renderCustomTexturesTab()
{
	if (ImGui::BeginTabItem("Custom-Shit")) {
		if (ImGui::BeginChild("##Custom-Shit", ImVec2(0, 0), true)) {
			if (ImGui::CollapsingHeader("Custom Titles")) {
				ImGui::Indent(20);
				if (ImGui::Checkbox("Set Custom Titles", &bapplesauyce)) {
					if (bapplesauyce == true)
					{
						bSetCustomTitle = true;
					}
					if (bapplesauyce == false)
					{
						bSetCustomTitle = false;
					}
				}
				ImGui::InputText("Custom Title Text", CustomTitleText, IM_ARRAYSIZE(CustomTitleText), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
				ImGui::SetNextItemWidth(80);
				if (ImGui::InputInt("# Custom Title Color Red", &CustomTitleColorR)) {
					Execute([this, newTitleR = CustomTitleColorR](GameWrapper*) {
						CustomTitleColorR = newTitleR;
						});
				}
				ImGui::SetNextItemWidth(80);
				if (ImGui::InputInt("# Custom Title Color Green", &CustomTitleColorG)) {
					Execute([this, newTitleG = CustomTitleColorG](GameWrapper*) {
						CustomTitleColorG = newTitleG;
						});
				}
				ImGui::SetNextItemWidth(80);
				if (ImGui::InputInt("# Custom Title Color Blue", &CustomTitleColorB)) {
					Execute([this, newTitleB = CustomTitleColorB](GameWrapper*) {
						CustomTitleColorB = newTitleB;
						});
				}
				ImGui::SetNextItemWidth(80);
				if (ImGui::InputInt("# Custom Title Glow Color Red", &CustomTitleGlowColorR)) {
					Execute([this, newTitleGlowR = CustomTitleGlowColorR](GameWrapper*) {
						CustomTitleGlowColorR = newTitleGlowR;
						});
				}
				ImGui::SetNextItemWidth(80);
				if (ImGui::InputInt("# Custom Title Glow Color Green", &CustomTitleGlowColorG)) {
					Execute([this, newTitleGlowG = CustomTitleGlowColorG](GameWrapper*) {
						CustomTitleGlowColorG = newTitleGlowG;
						});
				}
				ImGui::SetNextItemWidth(80);
				if (ImGui::InputInt("# Custom Title Glow Color Blue", &CustomTitleGlowColorB)) {
					Execute([this, newTitleGlowB = CustomTitleGlowColorB](GameWrapper*) {
						CustomTitleGlowColorB = newTitleGlowB;
						});
				}

				if (ImGui::Button("Reset Custom Title")) {
					Execute([this](GameWrapper*) {
						auto playertitles = Utils::GetInstanceOf<UGFxData_PlayerTitles_TA>();
						if (playertitles) {
							playertitles->UpdatePlayerTitles();
						}
						
						CustomTitleColorR = 0;
						CustomTitleColorG = 0;
						CustomTitleColorB = 0;
						CustomTitleGlowColorR = 0;
						CustomTitleGlowColorG = 0;
						CustomTitleGlowColorB = 0;
					});
				}
				ImGui::Unindent(20);
			}
			if (ImGui::CollapsingHeader("Wheel Mods")) {
				ImGui::Indent(20);
				ImGui::InputText("Wheel Texture URL", ACWheelsURL, IM_ARRAYSIZE(ACWheelsURL), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
				if (ImGui::Button("Equip Loopers")) {
					Execute([this](GameWrapper*) {

						UProfileLoadoutSave_TA* loadoutSave = Utils::GetProfile()->LoadoutSave;
						if (loadoutSave) {
							ULoadoutSet_TA* equippedloadout = loadoutSave->EquippedLoadoutSet;
							if (equippedloadout) {
								if (equippedloadout->Loadouts[0]) {
									for (int i = 0; i < equippedloadout->Loadouts[0]->Products.Num(); i++)
									{
										if (GetProductFromId(equippedloadout->Loadouts[0]->Products.At(i))->Slot->SlotIndex == wheelsIndex)
										{
											int looperid = 820;

											memcpy_s(&equippedloadout->Loadouts[0]->Products[i], sizeof(int), &looperid, sizeof(int));
										}
									}
								}
								if (equippedloadout->Loadouts[1]) {
									for (int i = 0; i < equippedloadout->Loadouts[1]->Products.Num(); i++)
									{
										if (GetProductFromId(equippedloadout->Loadouts[1]->Products.At(i))->Slot->SlotIndex == wheelsIndex)
										{
											int looperid = 820;

											memcpy_s(&equippedloadout->Loadouts[1]->Products[i], sizeof(int), &looperid, sizeof(int));
										}
									}
								}
							}
						}

						UGFxData_Garage_TA* dGarage = Utils::GetInstanceOf<UGFxData_Garage_TA>();
						UGFxData_LoadoutSets_TA* dLoadoutSets = Utils::GetInstanceOf<UGFxData_LoadoutSets_TA>();
						if (dGarage != NULL && dLoadoutSets != NULL) {
							int PrevTeam = dGarage->PreviewTeam;
							if (PrevTeam == 0) {
								dLoadoutSets->SetPreviewTeam(1);
								dLoadoutSets->SetPreviewTeam(0);
							}
							else {
								dLoadoutSets->SetPreviewTeam(0);
								dLoadoutSets->SetPreviewTeam(1);
							}
						}
						if (dGarage != NULL && dLoadoutSets != NULL) {
							int PrevTeam = dGarage->PreviewTeam;
							if (PrevTeam == 0) {
								dLoadoutSets->SetPreviewTeam(1);
								dLoadoutSets->SetPreviewTeam(0);
							}
							else {
								dLoadoutSets->SetPreviewTeam(0);
								dLoadoutSets->SetPreviewTeam(1);
							}
						}
						if (dGarage != NULL && dLoadoutSets != NULL) {
							int PrevTeam = dGarage->PreviewTeam;
							if (PrevTeam == 0) {
								dLoadoutSets->SetPreviewTeam(1);
								dLoadoutSets->SetPreviewTeam(0);
							}
							else {
								dLoadoutSets->SetPreviewTeam(0);
								dLoadoutSets->SetPreviewTeam(1);
							}
						}
					});
				}
				if (ImGui::Button("Replace Loopers Texture")) {
					Execute([this](GameWrapper*)
						{
							const wchar_t* srcURL;
							srcURL = widen(ACWheelsURL).c_str();
							const wchar_t* destFile = L"DownloadedCustomWheels.png";
							URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);
							URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);
							URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);
							URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);

							std::ifstream file("DownloadedCustomWheels.png");

							if (file.is_open())
							{
								std::string index;
								std::unordered_set<std::string> names;
								while (file >> index)
								{
									names.insert(index);
								}
								file.close();
							}

							UObject* loadLoopersMAT = UObject::StaticClass()->DynamicLoadObject(Utils::to_fstring("WHEEL_Proto_02.Materials.WHEEL_Proto_02_MIC"), UMaterialInstanceConstant::StaticClass(), true);
							UMaterialInstanceConstant* loopersMAT = (UMaterialInstanceConstant*)loadLoopersMAT;
							if (loopersMAT != NULL) {
								std::string path = "DownloadedCustomWheels.png";
								loopersMAT->SetTextureParameterValue(FName(L"ImageSeq_SubUV"), GetCustomTexture(path));
							}
						});
				}
				ImGui::Unindent(20);
			}
			ImGui::Separator();
			ImGui::TextColored(ImVec4(1.0f, 0.647f, 0.074f, 0.7f), "- ALL Custom texture methods currently only work in the Garage.");
		}
		ImGui::EndChild();
		ImGui::EndTabItem();
	}
}

void Voltage::renderGuiShitTab()
{
	if (ImGui::BeginTabItem("GUI-Shit")) {
			if (ImGui::BeginChild("##GUI-Shit", ImVec2(0, 0), true)) {
				if (ImGui::CollapsingHeader("Custom Popups")) {
					ImGui::Indent(20);
					ImGui::SetNextItemWidth(200);
					if (ImGui::Button("RGB Popup"))
					{
						Execute([this](GameWrapper*) {
							MakeModal("RGB Test");
							gameWrapper->HookEventWithCaller<ServerWrapper>("Function Engine.GameViewportClient.PostRender", [this](ServerWrapper sw, void* params, std::string eventName)
								{
									if (cock > 10)
									{
										cock = 0;
										if (red > 0 && blue == 0) {
											red--;
											green++;
										}
										if (green > 0 && red == 0) {
											green--;
											blue++;
										}
										if (blue > 0 && green == 0) {
											red++;
											blue--;
										}
										SetModalColor(red, green, blue);
									}
									if (red > green && red > blue)
									{
										SetModalBody("Red");
									}
									if (green > red && green > blue)
									{
										SetModalBody("Green");
									}
									if (blue > green && blue > red)
									{
										SetModalBody("Blue");
									}
									cock++;
								});
							AddModalButton("Cancel");
							ShowModal();
							});
					}
					if (ImGui::Button("Ban Popup"))
					{
						Execute([this](GameWrapper*) {
							gameWrapper->UnhookEvent("Function Engine.GameViewportClient.PostRender");
							if (gfxmodal)
							{
								gfxmodal = Utils::GetDefaultInstanceOf<UGFxModal_X>();
							}
							gfxmodal = gfxshell->CreateModal_NoShow(UGFxModal_Ban_TA::StaticClass());
							gfxmodal->FlashAddButton(FString(L"Well Shit"));
							gfxmodal->SetTitle(FString(L"Permanently Banned"));
							gfxmodal->SetBody(L"You have been permanently banned for being too gangsta");
							gfxshell->ShowModalObject(gfxmodal);
							UGFxModal_Ban_TA* banmodal = Utils::GetInstanceOf<UGFxModal_Ban_TA>();
							TArray<struct FString> Citations;
							Citations.Add(L"Watchu know about rollin down in the deep");
							banmodal->SetCitations(Citations);
							});
					}
					if (ImGui::InputText(" Modal Title", modalTitle, IM_ARRAYSIZE(modalTitle)))
					{
						Execute([this, newmodalTitle = modalTitle](GameWrapper*) {
							tempModalTitle = newmodalTitle;
							});
					}
					if (ImGui::InputText(" Modal Body", modalBody, IM_ARRAYSIZE(modalBody)))
					{
						Execute([this, newmodalBody = modalBody](GameWrapper*) {
							tempModalBody = newmodalBody;
							});
					}
					if (ImGui::InputText(" Modal Button 1", modalButton, IM_ARRAYSIZE(modalButton)))
					{
						Execute([this, newmodalbutton = modalButton](GameWrapper*) {
							tempModalButton = newmodalbutton;
							});
					}
					if (ImGui::InputText(" Modal Button 2", modalButton1, IM_ARRAYSIZE(modalButton1)))
					{
						Execute([this, newmodalbutton = modalButton1](GameWrapper*) {
							tempModalButton1 = newmodalbutton;
							});
					}
					ImGui::SetNextItemWidth(80);
					if (ImGui::InputInt("# Red", &modalR)) {
						Execute([this, newmodalR = modalR](GameWrapper*) {
							tempmodalR = newmodalR;
							});
					}
					ImGui::SetNextItemWidth(80);
					if (ImGui::InputInt("# Green", &modalG)) {
						Execute([this, newmodalG = modalG](GameWrapper*) {
							tempmodalG = newmodalG;
							});
					}
					ImGui::SetNextItemWidth(80);
					if (ImGui::InputInt("# Blue", &modalB)) {
						Execute([this, newmodalB = modalB](GameWrapper*) {
							tempmodalB = newmodalB;
							});
					}
					if (ImGui::Button("Display Custom Modal"))
					{
						Execute([this](GameWrapper*) {
							gameWrapper->UnhookEvent("Function Engine.GameViewportClient.PostRender");
							MakeModal(modalTitle);
							if (tempmodalR == 0 && tempmodalG == 0 && tempmodalB == 0) {}
							else { SetModalColor(tempmodalR, tempmodalG, tempmodalB); }
							SetModalBody(tempModalBody);
							AddModalButton(tempModalButton);
							AddModalButton(tempModalButton1);
							ShowModal();
							});
					}
					ImGui::Unindent(20);
				}
			}
			ImGui::EndChild();
			ImGui::EndTabItem();
	}
}

void Voltage::renderMiscTab()
{
	if (ImGui::BeginTabItem("Misc")) {
			if (ImGui::BeginChild("##Misc", ImVec2(0, 0), true)) {
			if (ImGui::CollapsingHeader("Rank Shit")) {
			ImGui::Indent(20);
			ImGui::SetNextItemWidth(200);
			if (ImGui::InputInt("# RankID", &rankId)) {
				Execute([this, newRankID = rankId](GameWrapper*) {
					setRankID = newRankID;
					});
			}
			ImGui::SetNextItemWidth(200);
			if (ImGui::InputInt("# SeasonRewardID", &SeasonRewardId)) {
				Execute([this, newRewardID = SeasonRewardId](GameWrapper*) {
					setSeasonRewardID = newRewardID;
					});
			}
			if (ImGui::Button("Set Rank")) {
				Execute([this](GameWrapper*) {
					checkUserAuthed();
					if (!userAuthorized)
					{
						Console.Error("(Authorization) User is not authorized!");
						return;
					}

					FPlayerSeasonRewardProgress progress;
					progress.PlayerID = SaveData->GetOnlinePlayer()->PlayerID;
					progress.Level = setSeasonRewardID;
					progress.Wins = 10;

					FUpdatedPlayerSkillRating rating;
					rating.Tier = setRankID;
					rating.Division = 1;
					rating.MatchesPlayed = 69420;
					rating.MMR = 3466;
					rating.Sigma = 3466;
					rating.Mu = 3466;
					rating.PlayerID = SaveData->GetOnlinePlayer()->PlayerID;
					rating.PrevMu = 3466;
					rating.PrevSigma = 3466;
					rating.PrevTier = setRankID;
					rating.PrevDivision = setRankID;

					UOnlineGameSkill_X* skillz = Utils::GetInstanceOf<UOnlineGameSkill_X>();

					if (skillz)
					{
						skillz->SetPlayerSeasonReward(progress);

						for (UPlaylistSkillCache_X* skillCache : skillz->Playlists)
						{
							if (skillCache)
							{
								skillCache->CacheSkill(rating);
							}
						}
					}
					rankId = 0;
					setRankID = 0;
					SeasonRewardId = 0;
					setSeasonRewardID = 0;
					});
				}
				ImGui::Unindent(20);
			}
				if (ImGui::CollapsingHeader("Dumpers")) {
					ImGui::Indent(20);
					if (ImGui::Button("Dump All")) {
						Execute([this](GameWrapper*) {
							dumpItems();
							dumpTitles();
							dumpSaveData();
							dumpSlots();
							dumpFunctions();
							dumpServices();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					if (ImGui::Button("Dump Items")) {
						Execute([this](GameWrapper*) {
							dumpItems();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					if (ImGui::Button("Dump Titles")) {
						Execute([this](GameWrapper*) {
							dumpTitles();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					if (ImGui::Button("Dump SaveData")) {
						Execute([this](GameWrapper*) {
							dumpSaveData();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					if (ImGui::Button("Dump Slots")) {
						Execute([this](GameWrapper*) {
							dumpSlots();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					if (ImGui::Button("Dump Functions")) {
						Execute([this](GameWrapper*) {
							dumpFunctions();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					if (ImGui::Button("Dump Services")) {
						Execute([this](GameWrapper*) {
							dumpServices();

							ShellExecute(NULL, L"open", VoltageFolder.c_str(), NULL, NULL, SW_SHOWDEFAULT);
							});
					}
					ImGui::Unindent(20);
				}
			}
			ImGui::EndChild();
			ImGui::EndTabItem();
		}
}

void Voltage::renderItemmodTab()
{
	if (ImGui::BeginTabItem("Item-Mods")) {
		if (ImGui::BeginChild("##Item-Mods", ImVec2(0, 0), true)) {
			if (ImGui::CollapsingHeader("Item Spawning")) {
				ImGui::Indent(20);
				if (ImGui::Checkbox("Notify", &penis)) {
					if (penis == true)
					{
						*notifySpawn = 1;
					}
					if (penis == false)
					{
						*notifySpawn = 0;
					}
				}
				if (ImGui::CollapsingHeader("Individual Item Spawning")) {
					ImGui::Indent(20);
					ImGui::SetNextItemWidth(200);
					if (ImGui::InputInt("# ItemID", &itemId)) {
						Execute([this, newItemId = itemId](GameWrapper*) {
							tempitemid = newItemId;
							});
					}
					ImGui::SetNextItemWidth(200);
					if (ImGui::InputInt("# PaintID", &paintId)) {
						Execute([this, newPaintId = paintId](GameWrapper*) {
							temppaintid = newPaintId;
							});
					}
					ImGui::SetNextItemWidth(200);
					if (ImGui::InputInt("# QualityID", &qualityId)) {
						Execute([this, newQualityId = qualityId](GameWrapper*) {
							tempqualityid = newQualityId;
							});
					}
					ImGui::Checkbox("Spawn Painted Set", &penis1);
					if (ImGui::Button("Spawn Item")) {
						Execute([this](GameWrapper*) {
							if (penis1 == false)
							{
								GiveProduct(tempitemid, temppaintid, tempqualityid);
							}
							else
							{
								GiveProduct(tempitemid, 0, tempqualityid);
								GiveProduct(tempitemid, 1, tempqualityid);
								GiveProduct(tempitemid, 2, tempqualityid);
								GiveProduct(tempitemid, 3, tempqualityid);
								GiveProduct(tempitemid, 4, tempqualityid);
								GiveProduct(tempitemid, 5, tempqualityid);
								GiveProduct(tempitemid, 6, tempqualityid);
								GiveProduct(tempitemid, 7, tempqualityid);
								GiveProduct(tempitemid, 8, tempqualityid);
								GiveProduct(tempitemid, 9, tempqualityid);
								GiveProduct(tempitemid, 10, tempqualityid);
								GiveProduct(tempitemid, 11, tempqualityid);
								GiveProduct(tempitemid, 12, tempqualityid);
								GiveProduct(tempitemid, 13, tempqualityid);
								GiveProduct(tempitemid, 14, tempqualityid);
								GiveProduct(tempitemid, 15, tempqualityid);
								GiveProduct(tempitemid, 16, tempqualityid);
								GiveProduct(tempitemid, 17, tempqualityid);
							}
							tempitemid = 0;
							temppaintid = 0;
							tempqualityid = 0;
							itemId = 0;
							paintId = 0;
							qualityId = 0;
							});
					}
					ImGui::Unindent(20);
				}
				if (ImGui::CollapsingHeader("Item Sets")) {
					ImGui::Indent(20);
					if (ImGui::Button("Spawn All")) {
						Execute([this](GameWrapper*) {
							spawnAll();
							});
					}
					if (ImGui::Button("Spawn Alpha Items")) {
						Execute([this](GameWrapper*) {
							spawnAlphaRewards();
							});
					}
					if (ImGui::Button("Spawn BlackMarkets")) {
						Execute([this](GameWrapper*) {
							spawnBlackMarkets();
							});
					}
					if (ImGui::Button("Spawn Hacker")) {
						Execute([this](GameWrapper*) {
							spawnHackerItems();
							});
					}
					if (ImGui::Button("Spawn Bodies")) {
						Execute([this](GameWrapper*) {
							spawnBodies();
							});
					}
					if (ImGui::Button("Spawn Banners")) {
						Execute([this](GameWrapper*) {
							spawnBanners();
							});
					}
					if (ImGui::Button("Spawn Borders")) {
						Execute([this](GameWrapper*) {
							spawnBorders();
							});
					}
					if (ImGui::Button("Spawn Decals")) {
						Execute([this](GameWrapper*) {
							spawnDecals();
							});
					}
					if (ImGui::Button("Spawn Goal Explosions")) {
						Execute([this](GameWrapper*) {
							spawnGoalExplosions();
							});
					}
					if (ImGui::Button("Spawn Toppers")) {
						Execute([this](GameWrapper*) {
							spawnAntennaTrailTopper();
							});
					}
					if (ImGui::Button("Spawn Wheels")) {
						Execute([this](GameWrapper*) {
							spawnWheels();
							});
					}
					if (ImGui::Button("Spawn Crates")) {
						Execute([this](GameWrapper*) {
							spawnCrates();
							});
					}
					if (ImGui::Button("Spawn Titles")) {
						Execute([this](GameWrapper*) {
							spawnTitles();
							});
					}
					if (ImGui::Button("Spawn DLC")) {
						Execute([this](GameWrapper*) {
							spawnDLC();
							});
					}
				}
				ImGui::Unindent(20);
			}
			if (ImGui::CollapsingHeader("Crate Sims - VERY BUGGY ATM")) {
				ImGui::Indent(20);
				if (ImGui::Button("Player's Choice")) {
					Execute([this](GameWrapper*) {
						cvarManager->executeCommand("mtn_crate playerschoice");
						});
				}
				if (ImGui::Button("Fan Reward Drop")) {
					Execute([this](GameWrapper*) {
						cvarManager->executeCommand("mtn_crate fanrewards");
						});
				}
				if (ImGui::Button("Tournament")) {
					Execute([this](GameWrapper*) {
						cvarManager->executeCommand("mtn_crate tournament");
						});
				}
				if (ImGui::Button("NCVR Tradeup")) {
					Execute([this](GameWrapper*) {
						cvarManager->executeCommand("mtn_crate ncvrtradeup");
						});
				}
				if (ImGui::Button("Random Title Drop")) {
					Execute([this](GameWrapper*) {
						cvarManager->executeCommand("mtn_crate titles");
						});
				}
				ImGui::Unindent(20);
			}
			ImGui::Separator();
			if (ImGui::Button("Remove Spawned Items")) {
				Execute([this](GameWrapper*) {
					sync(false);
					});
			}
		}
		ImGui::EndChild();
		ImGui::EndTabItem();
	}
}

void Voltage::Render()
{
	ImGui::SetNextWindowSizeConstraints(ImVec2(800, 600), ImVec2(FLT_MAX, FLT_MAX));
	if (ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_)) {
		if (ImGui::BeginTabBar("#TabBar", ImGuiTabBarFlags_NoCloseWithMiddleMouseButton | ImGuiTabBarFlags_NoTooltip)) {
			renderItemmodTab();
			renderCustomTexturesTab();
			renderGuiShitTab();
			renderMiscTab();
			ImGui::EndTabBar();
		}
	}
	ImGui::End();

	if (!isWindowOpen_) {
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

std::string Voltage::GetMenuName()
{
	return "voltage";
}

std::string Voltage::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void Voltage::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));

	Console.Notify("[ImGui Component] ImGui Context: " + Format::Hex(reinterpret_cast<uintptr_t>(ImGui::GetCurrentContext()), sizeof(GNames)));

	Console.Write("[ImGui Component] Initialized! Default bound key: F9");
}

bool Voltage::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

bool Voltage::IsActiveOverlay()
{
	return true;
}

void Voltage::OnOpen()
{
	isWindowOpen_ = true;
}

void Voltage::OnClose()
{
	isWindowOpen_ = false;
}

void Voltage::spawnSet(std::vector<std::string> params)
{
	if (classesSafe && instancesLoaded)
	{
		if (params.size() == 2)
		{
			if (params[1].compare("allpainted") == 0)
			{
				spawnAllPainted();
			}
			if (params[1].compare("alpha") == 0)
			{
				spawnAlphaRewards();
			}
			if (params[1].compare("blackmarkets") == 0)
			{
				spawnBlackMarkets();
			}
			if (params[1].compare("bodies") == 0)
			{
				spawnBodies();
			}
			if (params[1].compare("banners") == 0)
			{
				spawnBanners();
			}
			if (params[1].compare("borders") == 0)
			{
				spawnBorders();
			}
			if (params[1].compare("all") == 0)
			{
				spawnAll();
			}
			if (params[1].compare("decals") == 0)
			{
				spawnDecals();
			}
			if (params[1].compare("goalexplosions") == 0)
			{
				spawnGoalExplosions();
			}
			if (params[1].compare("toppers") == 0)
			{
				spawnAntennaTrailTopper();
			}
			if (params[1].compare("wheels") == 0)
			{
				spawnWheels();
			}
			if (params[1].compare("hacker") == 0)
			{
				spawnHackerItems();
			}
			if (params[1].compare("crates") == 0)
			{
				spawnCrates();
			}
			if (params[1].compare("titles") == 0)
			{
				spawnTitles();
			}
			if (params[1].compare("dlc") == 0)
			{
				spawnDLC();
			}
		}
		else
		{
			Console.Warning("Usage: mtn_spawn_set <set_name> (allpainted, alpha, blackmarkets, bodies, banners, borders, all, decals, goalexplosions, toppers, wheels, hacker, crates, titles, dlc)");
		}
	}
}

void Voltage::spawnTitles()
{
	if (classesSafe && instancesLoaded)
	{
		checkUserAuthed();
		if (!userAuthorized)
		{
			Console.Error("(Authorization) User is not authorized!");
			return;
		}

		if (SaveData)
		{
			for (int i = 0; i < 343; i++)
			{
				FOnlineProductAttribute titleData;
				titleData.Key = FName(L"(null)");
				titleData = TitleIdAttribute->InstanceOnlineProductAttribute();
				titleData.Value = TitleIDs[i];

				FOnlineProductData productData;
				productData.ProductID = 3036;
				productData.InstanceID = newInstanceID();
				productData.SeriesID = 0;
				productData.TradeHold = -1;
				if (*notifySpawn == 0)
				{
					productData.AddedTimestamp = 0;
				}
				else
				{
					productData.AddedTimestamp = time(NULL);
				}
				productData.Attributes.Add(titleData);

				UOnlineProduct_TA* onlineProduct = SaveData->GiveOnlineProductData(productData);

				if (onlineProduct)
				{
					SaveData->GiveOnlineProduct(onlineProduct);
					SaveData->GiveOnlineProductHelper(onlineProduct);

					Console.Write("[Inventory Mod] Successfully spawned title: " + titleData.Value.ToString());
				}
				else
				{
					Console.Error("(GiveProduct) Error: Failed to create product!");
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
	else
	{
		Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::spawnAllPainted()
{
	checkUserAuthed();
	if (!userAuthorized)
	{
		Console.Error("(Authorization) User is not authorized!");
		return;
	}

	if (classesSafe && instancesLoaded)
	{
		if (SaveData && PaintedAttribute && NoNotifyAttribute)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				for (int j = 1; j <= 18; j++)
				{
					if (!product)
						continue;

					int ProductID = product->GetID();

					FOnlineProductAttribute paintedData;
					paintedData.Key = FName(L"None");
					paintedData.Value = FString(L"None");

					FOnlineProductAttribute NoNotifyData;
					NoNotifyData.Key = FName(L"None");
					NoNotifyData.Value = FString(L"None");
					{
						PaintedAttribute->PaintID = j;
					}
					paintedData = PaintedAttribute->InstanceOnlineProductAttribute();

					NoNotifyData = NoNotifyAttribute->InstanceOnlineProductAttribute();

					FOnlineProductData productData;
					productData.ProductID = ProductID;
					productData.InstanceID = newInstanceID();
					productData.SeriesID = int(NULL);
					productData.TradeHold = -1;
					productData.AddedTimestamp = 0;
					productData.Attributes.Add(paintedData);
					productData.Attributes.Add(NoNotifyData);

					UOnlineProduct_TA* onlineProduct = SaveData->GiveOnlineProductData(productData);

					if (onlineProduct)
					{
						SaveData->GiveOnlineProduct(onlineProduct);
						Console.Write("[Inventory Mod] Successfully spawned in product: " + onlineProduct->GetLongLabel().ToString() + "\"");
						Console.Write("[Inventory Mod] InstanceID: " + std::to_string(onlineProduct->InstanceID));
						Console.Write("[Inventory Mod] Paint Value: " + paintedData.Value.ToString());
					}
					else
					{
						Console.Error("(GiveProduct) Error: Failed to create product!");
					}
				}
			}
			for (int i = 0; i < 343; i++)
			{
				FOnlineProductAttribute titleData;
				titleData.Key = FName(L"(null)");
				titleData = TitleIdAttribute->InstanceOnlineProductAttribute();
				titleData.Value = TitleIDs[i];

				FOnlineProductData titleproductData;
				titleproductData.ProductID = 3036;
				titleproductData.InstanceID = newInstanceID();
				titleproductData.SeriesID = 0;
				titleproductData.TradeHold = -1;
				titleproductData.AddedTimestamp = 0;
				titleproductData.Attributes.Add(titleData);

				UOnlineProduct_TA* titleonlineProduct = SaveData->GiveOnlineProductData(titleproductData);

				if (titleonlineProduct)
				{
					SaveData->GiveOnlineProduct(titleonlineProduct);
					SaveData->GiveOnlineProductHelper(titleonlineProduct);

					Console.Write("[Inventory Mod] Successfully spawned title: " + titleData.Value.ToString());
				}
				else
				{
					Console.Error("(GiveProduct) Error: Failed to create product!");
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
	else
	{
		Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::spawnAlphaRewards()
{
	GiveProduct(32, 0, 8);
	GiveProduct(6, 0, 8);
	GiveProduct(224, 0, 8);
	GiveProduct(358, 0, 8);
}

void Voltage::spawnBlackMarkets()
{
	if (ProductDatabase)
	{

		for (UProduct_TA* product : ProductDatabase->Products_New)
		{
			if (!product)
				continue;

			if (product->Quality == 6)
			{
				GiveProduct(product->GetID(), 0, 0);
			}

		}
	}

}

void Voltage::spawnBodies()
{
	if (classesSafe && instancesLoaded)
	{
		cvarManager->executeCommand("mtn_notify 0");
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == bodiesIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);
					{
						GiveProduct(productId, 1, -1);
						GiveProduct(productId, 2, -1);
						GiveProduct(productId, 3, -1);
						GiveProduct(productId, 4, -1);
						GiveProduct(productId, 5, -1);
						GiveProduct(productId, 6, -1);
						GiveProduct(productId, 7, -1);
						GiveProduct(productId, 8, -1);
						GiveProduct(productId, 9, -1);
						GiveProduct(productId, 10, -1);
						GiveProduct(productId, 11, -1);
						GiveProduct(productId, 12, -1);
						GiveProduct(productId, 13, -1);
						GiveProduct(productId, 14, -1);
						GiveProduct(productId, 15, -1);
						GiveProduct(productId, 16, -1);
						GiveProduct(productId, 17, -1);
						GiveProduct(productId, 18, -1);

					}

				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::spawnBanners()
{
	if (classesSafe && instancesLoaded)
	{
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == bannerIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);

					if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
					{
						ownedProducts.push_back(productId);

						GiveProduct(productId, 0, -1);
					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::spawnBorders()
{
	if (classesSafe && instancesLoaded)
	{
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == borderIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);
					{
						GiveProduct(productId, 0, -1);
					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::spawnAll()
{
	if (classesSafe && instancesLoaded)
	{
		if (SaveData && PaintedAttribute && NoNotifyAttribute)
		{
			checkUserAuthed();
			if (!userAuthorized)
			{
				Console.Error("(Authorization) User is not authorized!");
				return;
			}

			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int ProductID = product->GetID();

				FOnlineProductAttribute NoNotifyData;
				NoNotifyData.Key = FName(L"None");
				NoNotifyData.Value = FString(L"None");

				NoNotifyData = NoNotifyAttribute->InstanceOnlineProductAttribute();

				FOnlineProductData productData;
				productData.ProductID = ProductID;
				productData.InstanceID = newInstanceID();
				productData.SeriesID = int(NULL);
				productData.TradeHold = -1;
				productData.AddedTimestamp = time(NULL);
				productData.Attributes.Add(NoNotifyData);

				UOnlineProduct_TA* onlineProduct = SaveData->GiveOnlineProductData(productData);

				if (onlineProduct)
				{
					SaveData->GiveOnlineProduct(onlineProduct);
					Console.Write("[Inventory Mod] Successfully Spawned Product: " + GetProductFromId(ProductID)->LongLabel.ToString());
				}
				else
				{
				Console.Error("(GiveProduct) Error: Failed to create product!");
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
	else
	{
		Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::spawnDecals()
{
	if (classesSafe && instancesLoaded)
	{
		cvarManager->executeCommand("mtn_notify 0");
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == decalIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);

					if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
					{
						ownedProducts.push_back(productId);

						GiveProduct(productId, 0, -1);
						GiveProduct(productId, 1, -1);
						GiveProduct(productId, 2, -1);
						GiveProduct(productId, 3, -1);
						GiveProduct(productId, 4, -1);
						GiveProduct(productId, 5, -1);
						GiveProduct(productId, 6, -1);
						GiveProduct(productId, 7, -1);
						GiveProduct(productId, 8, -1);
						GiveProduct(productId, 9, -1);
						GiveProduct(productId, 10, -1);
						GiveProduct(productId, 11, -1);
						GiveProduct(productId, 12, -1);
						GiveProduct(productId, 13, -1);
						GiveProduct(productId, 14, -1);
						GiveProduct(productId, 15, -1);
						GiveProduct(productId, 16, -1);
						GiveProduct(productId, 17, -1);

					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}

}

void Voltage::spawnGoalExplosions()
{
	if (classesSafe && instancesLoaded)
	{
		cvarManager->executeCommand("mtn_notify 0");
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == geIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);

					if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
					{
						ownedProducts.push_back(productId);

						GiveProduct(productId, 0, -1);
						GiveProduct(productId, 1, -1);
						GiveProduct(productId, 2, -1);
						GiveProduct(productId, 3, -1);
						GiveProduct(productId, 4, -1);
						GiveProduct(productId, 5, -1);
						GiveProduct(productId, 6, -1);
						GiveProduct(productId, 7, -1);
						GiveProduct(productId, 8, -1);
						GiveProduct(productId, 9, -1);
						GiveProduct(productId, 10, -1);
						GiveProduct(productId, 11, -1);
						GiveProduct(productId, 12, -1);
						GiveProduct(productId, 13, -1);
						GiveProduct(productId, 14, -1);
						GiveProduct(productId, 15, -1);
						GiveProduct(productId, 16, -1);
						GiveProduct(productId, 17, -1);
					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::spawnAntennaTrailTopper()
{
	if (classesSafe && instancesLoaded)
	{
		cvarManager->executeCommand("mtn_notify 0");
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == topperIndex || slotIndex == trailIndex || slotIndex == antennaIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);

					if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
					{
						ownedProducts.push_back(productId);

						GiveProduct(productId, 0, -1);
						GiveProduct(productId, 1, -1);
						GiveProduct(productId, 2, -1);
						GiveProduct(productId, 3, -1);
						GiveProduct(productId, 4, -1);
						GiveProduct(productId, 5, -1);
						GiveProduct(productId, 6, -1);
						GiveProduct(productId, 7, -1);
						GiveProduct(productId, 8, -1);
						GiveProduct(productId, 9, -1);
						GiveProduct(productId, 10, -1);
						GiveProduct(productId, 11, -1);
						GiveProduct(productId, 12, -1);
						GiveProduct(productId, 13, -1);
						GiveProduct(productId, 14, -1);
						GiveProduct(productId, 15, -1);
						GiveProduct(productId, 16, -1);
						GiveProduct(productId, 17, -1);

					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}

	}
}
void Voltage::spawnWheels()
{
	if (classesSafe && instancesLoaded)
	{
		cvarManager->executeCommand("mtn_notify 0");
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == wheelsIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);

					if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
					{
						ownedProducts.push_back(productId);

						GiveProduct(productId, 0, -1);
						GiveProduct(productId, 1, -1);
						GiveProduct(productId, 2, -1);
						GiveProduct(productId, 3, -1);
						GiveProduct(productId, 4, -1);
						GiveProduct(productId, 5, -1);
						GiveProduct(productId, 6, -1);
						GiveProduct(productId, 7, -1);
						GiveProduct(productId, 8, -1);
						GiveProduct(productId, 9, -1);
						GiveProduct(productId, 10, -1);
						GiveProduct(productId, 11, -1);
						GiveProduct(productId, 12, -1);
						GiveProduct(productId, 13, -1);
						GiveProduct(productId, 14, -1);
						GiveProduct(productId, 15, -1);
						GiveProduct(productId, 16, -1);
						GiveProduct(productId, 17, -1);

					}

				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::spawnHackerItems()
{
	GiveProduct(1412, 0, -1);
	GiveProduct(3315, 0, -1);
	GiveProduct(3316, 0, -1);
	GiveProduct(1470, 0, -1);
	GiveProduct(3138, 0, -1);
	GiveProduct(2764, 0, -1);
}

void Voltage::spawnCrates()
{
	if (classesSafe && instancesLoaded)
	{
		if (ProductDatabase)
		{
			for (UProduct_TA* product : ProductDatabase->Products_New)
			{
				if (!product)
					continue;

				int slotIndex = product->Slot->SlotIndex;

				if (slotIndex == cratesIndex || slotIndex == blueprintIndex)
				{
					int productId = product->GetID();

					if (productId == 0)
						loadInstances(false);

					if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
					{
						ownedProducts.push_back(productId);
						GiveProduct(productId, -1, -1);
					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
}

void Voltage::spawnDLC()
{
	if (ProductDatabase)
	{
		for (UProduct_TA* Product : ProductDatabase->Products_New)
		{
			if (!Product)
				continue;

			if (Product->Quality == 7)
			{
				GiveProduct(Product->GetID(), 0, 0);
			}

		}
	}

}

void Voltage::GiveProduct(int productId, int paintId, int qualityId)
{
	if (classesSafe && instancesLoaded)
	{
		if (SaveData && QualityAttribute && PaintedAttribute && NoNotifyAttribute)
		{
			checkUserAuthed();
			if (!userAuthorized)
			{
				Console.Error("(Authorization) User is not authorized!");
				return;
			}

			FOnlineProductAttribute qualityData;
			FOnlineProductAttribute paintedData;
			FOnlineProductAttribute NoNotifyData;

			if (paintId > 0 && paintId < 19)
			{
				PaintedAttribute->PaintID = paintId;
				paintedData = PaintedAttribute->InstanceOnlineProductAttribute();
			}

			if (qualityId > 0 && qualityId < 10)
			{
				QualityAttribute->Quality = qualityId;
				qualityData = QualityAttribute->InstanceOnlineProductAttribute();
			}

			if (*notifySpawn == 0)
			{
				NoNotifyData = NoNotifyAttribute->InstanceOnlineProductAttribute();
			}

			FOnlineProductData productData;
			productData.ProductID = productId;
			productData.InstanceID = newInstanceID();
			productData.SeriesID = 0;
			productData.TradeHold = -1;
			productData.AddedTimestamp = time(NULL);

			if (qualityData.Key.GetDisplayIndex() != 0)
				productData.Attributes.Add(qualityData);

			if (paintedData.Key.GetDisplayIndex() != 0)
				productData.Attributes.Add(paintedData);

			if (NoNotifyData.Key.GetDisplayIndex() != 0)
				productData.Attributes.Add(NoNotifyData);


			UOnlineProduct_TA* onlineProduct = SaveData->GiveOnlineProductData(productData);

			if (onlineProduct)
			{
				SaveData->GiveOnlineProduct(onlineProduct);
				SaveData->GiveOnlineProductHelper(onlineProduct);
				SaveData->OnNewOnlineProduct(onlineProduct);

				Console.Write("[Inventory Mod] Successfully spawned in product: " + onlineProduct->GetLongLabel().ToString() + "\"");
				Console.Write("[Inventory Mod] InstanceID: " + std::to_string(onlineProduct->InstanceID));
				Console.Write("[Inventory Mod] Paint Value: " + paintedData.Value.ToString());
				Console.Write("[Inventory Mod] Quality Value: " + qualityData.Value.ToString());
			}
			else
			{
				Console.Error("[Inventory Mod] Error: Failed to create product!");
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
	else
	{
		Console.Error("(GiveProduct) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

void Voltage::sync(bool exiting)
{
	if (classesSafe)
	{
		if (SaveData)
		{
			UOnlineGameSkill_X* skillz = Utils::GetInstanceOf<UOnlineGameSkill_X>();
			FScriptDelegate fsdelegate = skillz->__EventSkillSynced__Delegate;
			skillz->SyncPlayerSkill(SaveData->GetOnlinePlayer()->PlayerID, fsdelegate);
			checkUserAuthed();
			if (!userAuthorized)
			{
				Console.Error("(Authorization) User is not authorized!");
				return;
			}

			if (exiting)
			{
				SaveData->SyncOnlineProducts();
				//for (unsigned long long iid : spawneditemsInstanceIds)
				//{
				//	SaveData->RemoveOnlineProductId(iid);
				//	if (playertitles)
				//	{
				//		playertitles->UpdatePlayerTitles();
				//	}
				//	Console.Notify("Removed Item's Instance ID: " + std::to_string(iid));
				//}
			}
			else
			{
				SaveData->SyncOnlineProducts();
				//for (unsigned long long iid : spawneditemsInstanceIds)
				//{
				//	SaveData->RemoveOnlineProductId(iid);
				//	if (playertitles)
				//	{
				//		playertitles->UpdatePlayerTitles();
				//	}
				//	Console.Notify("Removed Item's Instance ID: " + std::to_string(iid));
				//}
				instancesLoaded = false;
				loadInstances(false);

				Console.Success("[Inventory Mod] Successfully removed all Bottles of Voltage MTN Dew from your inventory.");

				if (ProductDatabase)
				{
					for (int i = 0; i < ProductDatabase->Products_New.Num(); i++)
					{
						if (!classesSafe)
							return;

						UProduct_TA* product = ProductDatabase->Products_New[i];

						if (!product)
							continue;

						int slotIndex = product->Slot->SlotIndex;

						if (slotIndex == borderIndex || slotIndex == bannerIndex || slotIndex == boostIndex || slotIndex == bodiesIndex || slotIndex == decalIndex || slotIndex == geIndex || slotIndex == topperIndex || slotIndex == trailIndex || slotIndex == currencyIndex || slotIndex == blueprintIndex || slotIndex == esportIndex || slotIndex == wheelsIndex || slotIndex == themeIndex || slotIndex == paintfinishIndex || slotIndex == antennaIndex)
						{
							int productId = product->GetID();

							if (productId == 0)
								loadInstances(false);


							if (std::find(ownedProducts.begin(), ownedProducts.end(), productId) == ownedProducts.end())
							{
								ownedProducts.push_back(productId);
							}
						}
					}
				}
			}
		}
		else
		{
			classesSafe = false;
			Console.Error("(sync) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
		}
	}
	else
	{
		Console.Error("(sync) Error: RLSDK classes are wrong, please contact Crunchy if he doesn't already know!");
	}
}

#undef EXP_VAL
#undef EXP_STRING