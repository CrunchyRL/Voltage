#pragma once
#define WIN32_LEAN_AND_MEAN
#pragma comment(lib, "pluginsdk.lib")
#include "bakkesmod\plugin/bakkesmodplugin.h"
#include "bakkesmod\plugin/pluginwindow.h"
#include "RLSDK/se_exception.h"
#include "RLSDK/Utils.hpp"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#include "json/json/json.h"
#include "Components/Components/Console.hpp"
#include "Extensions/Colors.hpp"
#include <filesystem>
#include <string>
#include "Formatting.hpp"

class Voltage : public BakkesMod::Plugin::BakkesModPlugin, public BakkesMod::Plugin::PluginWindow
{
private:
	void getEquippedTitle();
	void setPRIGFxHUD(uintptr_t gfxhudaddress);

	struct VTitleData
	{
		std::string	                                       TitleText;
		FColor											   TitleColor;
		FColor											   TitleGlowColor;
	};

	struct VCustomTitleInfo
	{
		unsigned long long                                 SteamID;
		std::string										   EpicAccountId;
		struct VTitleData                                  TitleData;
	};
private:
	int bannerIndex = 16;
	int borderIndex = 20;
	int bodiesIndex = 0;
	int boostIndex = 3;
	int decalIndex = 1;
	int cratesIndex = 11;
	int topperIndex = 5;
	int wheelsIndex = 2;
	int geIndex = 15;
	int shopitem = 25;
	int themeIndex = 18;
	int currencyIndex = 26;
	int paintfinishIndex = 7;
	int blueprintIndex = 24;
	int esportIndex = 22;
	int trailIndex = 14;
	int antennaIndex = 4;
	int titleIndex = 21;
	int bumperindex = 6;
private:
	UOnlineProduct_TA* onlineProduct = nullptr;
	USaveData_TA* SaveData = nullptr;
	UProductDatabase_TA* ProductDatabase = nullptr;
	APlayerController* PlayerController = nullptr;
	UPlayerTitleConfig_X* titleConfig = nullptr;
	UOnlineDLCProductCache_TA* DLCProductCache = nullptr;
	UProductAttribute_Quality_TA* QualityAttribute = nullptr;
	UProductAttribute_Painted_TA* PaintedAttribute = nullptr;
	UProductAttribute_NoNotify_TA* NoNotifyAttribute = nullptr;
	UProductAttribute_TitleID_TA* TitleIdAttribute = nullptr;
	UProductAttribute_Certified_TA* CertifiedAttribute = nullptr;
	UGFxData_PlayerTitles_TA* playertitles = nullptr;
	UGFxShell_TA* gfxshell = nullptr;
	UGFxModal_X* gfxmodal = nullptr;
	UGFxModal_X* newmodal = nullptr;
	UGFxDataStore_X* dataStore = nullptr;
	FASColorTransform ColorTransform = FASColorTransform{};
	uintptr_t gfxhudaddy = 0;
	TArray<struct VCustomTitleInfo> customtitles;
	TArray<class APRI_TA*>APRIs;
	std::shared_ptr<ImageWrapper> image;
	UTexture* billboards1 = nullptr;
	UTexture* billboards2 = nullptr;
	UTexture* stadiumlinerads1 = nullptr;
	UTexture* stadiumlinerads2 = nullptr;
private:
	std::string localVersion = "148";
	int titleHexColor;
	int titleHexGlowColor;
	bool versionSafe = false;
	bool userAuthorized = false;
	bool classesSafe = false;
	bool instancesLoaded = false;
	bool penis = true;
	bool penis1 = false;
	bool bSetTitle = false;
	int temptick = 0;
	int tempitemid = 0;
	int temppaintid = 0;
	int tempqualityid = 0;
	int tempcertid = 0;
	int itemId = 0;
	int paintId = 0;
	int qualityId = 0;
	int certId = 0;
	int setRankID = 0;
	int rankId = 0;
	int setSeasonRewardID = 0;
	int SeasonRewardId = 0;
	int crateitem = 0;
	int crateitem_paint = 0;
	int tick = 0;
	int newping = 0;
	int HUDTick = 0;
	int rgbTick = 0;
	bool allalphaboost = false;
	bool setrealtitle = true;
	bool alphabetLOL = false;
	bool superspeedball = false;
	bool bSetCustomTitle;
	bool bSetCrunchyTitle;
	int selectedtitlenum = 0;
	int pp = 0;
	int titleSet = 0;
	bool bapplesauyce = false;
	bool bapplesauyce12 = false;
	unsigned long long largestInstanceID = 0;
	std::vector<int> ownedProducts;
	std::vector<int> ownedDLCs;
	std::vector<int> crateproduct;
	std::vector<int> crateproductpaint;
	TArray<unsigned long long> spawneditemsInstanceIds;
	std::shared_ptr<int> notifySpawn;
	std::shared_ptr<int> savedCustomTitleColor;
	std::shared_ptr<int> savedCustomTitleGlowColor;
	std::shared_ptr<std::string> savedCustomTitleText;
	std::shared_ptr<int> spawnPaintedSet;
	std::filesystem::path VoltageFolder = "Voltage";
	//std::filesystem::path CustomTexturesFolder = VoltageFolder.u8string() + "\\CustomTextureDownloads";
	unsigned long long crunchysteamid = 76561198252921625;
	FName selectedtitle;
	TArray<struct VCustomTitleInfo> customTitles;	
	int productidindex = 0;
	char ACWheelsURL[256] = "https://i.imgur.com/SvEZpGf.png";
	char CustomOrangeTeamLogoURL[256] = "https://i.imgur.com/FzIu7En.png";
	char CustomBlueTeamLogoURL[256] = "https://i.imgur.com/FzIu7En.png";
	char CustomAds1[256] = "https://i.imgur.com/FzIu7En.png";
	char CustomAds2[256] = "https://i.imgur.com/FzIu7En.png";
	char CustomAds3[256] = "https://i.imgur.com/FzIu7En.png";
	char CustomAds4[256] = "https://i.imgur.com/FzIu7En.png";
	char CustomTitleText[256] = "";
	char Nothing[256] = "";
	int	 CustomTitleColorR = 0;
	int	 CustomTitleColorG = 0;
	int	 CustomTitleColorB = 0;
	int	 CustomTitleGlowColorR = 0;
	int	 CustomTitleGlowColorG = 0;
	int	 CustomTitleGlowColorB = 0;
	bool setCustomAds;
	int paintValues[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
public:
	void checkVersion();
	void checkUserAuthed();
	bool areGObjectsValid();
	bool areGNamesValid();

	unsigned long long newInstanceID();

	virtual void onLoad();
	virtual void onUnload();

	bool isWindowOpen_ = false;
	bool isMinimized_ = false;
	std::string menuTitle_ = "Voltage";

	virtual void Render() override;
	virtual std::string GetMenuName() override;
	virtual std::string GetMenuTitle() override;
	virtual void SetImGuiContext(uintptr_t ctx) override;
	virtual bool ShouldBlockInput() override;
	virtual bool IsActiveOverlay() override;
	virtual void OnOpen() override;
	virtual void OnClose() override;

	class UProduct_TA* GetProductFromId(const int32_t& productId);
	void MakeModal(std::string title);
	void ShowModal();
	void SetModalBody(std::string bodytext);
	void AddModalButton(std::string label);
	void SetModalColor(int r, int g, int b);
	void revealSequence();
	void menuSequence();
	void dumpItems();
	void dumpTitles();
	void dumpSlots();
	void dumpServices();
	void dumpFunctions();
	void dumpSaveData();
	void dumpObjectsForClass(UClass* StaticClass);
	void loadInstances(bool log);
	void makePaintColor(std::vector<std::string> params);
	void setPaintColor(float r, float g, float b);
	void spawnSet(std::vector<std::string> params);
	void cratesim(std::vector<std::string> params);
	void spawnProductCRATEITEMS(int productId, int paintId);
	void userGiveProduct(std::vector<std::string> params);
	void userGivePaintedProduct(std::vector<std::string> params);
	UOnlineProduct_TA* GiveProduct(int productId, int paintId, int qualityId, int certId);
	void userGiveTitle(std::vector<std::string> params);
	void GiveTitle(FString titleid);
	void sync(bool exiting);
	void debug();
	void spawnTitles();
	void Execute(const std::function<void(GameWrapper*)>& theLambda);
	void renderItemmodTab();
	void renderCustomTexturesTab();
	void renderGuiShitTab();
	void renderMiscTab();
	void renderPRIeditorTab();
	TArray<APRI_TA*> GetPRIs();
	void spawnDLC();
	void spawnAllPainted();
	void doReveal(UOnlineProduct_TA* revealProduct);
	std::vector<int> getCrateProducts(std::string crateName);
	void spawnCrates();
	void spawnAll();
	void spawnBorders();
	void spawnBanners();
	void spawnBodies();
	void spawnDecals();
	void spawnGoalExplosions();
	void spawnAntennaTrailTopper();
	void spawnWheels();
	void spawnHackerItems();
	void spawnAlphaRewards();
	void spawnBlackMarkets();
	UTexture* DownloadTexture(const char* url, const wchar_t* fileName);
	bool ExportTexture(UTexture* textureRef, std::string& outTexturePath);
	void replaceAds(UTexture* billboards1, UTexture* billboards2, UTexture* stadiumlinerads1, UTexture* stadiumlinerads);
	void RefreshCar();
	bool SetPlayerTitle(UGFxData_PRI_TA* pri, std::string titletext, FColor titleColor, FColor titleGlowColor);
	void SetCGTTextures();

	std::vector<FString> TitleIDs
	{
FString(L"CRL_Analyst"),
FString(L"CRL_Season_1_Champion"),
FString(L"CRL_Season_1_Elite"),
FString(L"Developer"),
FString(L"DreamHack_Champion"),
FString(L"Eleague_Cup_Champion"),
FString(L"ESLMonthlyChampion"),
FString(L"ESLMonthlyElite"),
FString(L"FirstRocketeer"),
FString(L"MLGSeason1Champion"),
FString(L"MLGSeason1Elite"),
FString(L"Moderator"),
FString(L"PaxChampion"),
FString(L"RLCS_01_Contender"),
FString(L"RLCS_01_Elite"),
FString(L"RLCS_01_Grand_Finalist"),
FString(L"RLCS_01_World_Champion"),
FString(L"RLCS_02_Contender"),
FString(L"RLCS_02_Elite"),
FString(L"RLCS_02_Grand_Finalist"),
FString(L"RLCS_02_World_Champion"),
FString(L"RLCS_03_Contender"),
FString(L"RLCS_03_Elite"),
FString(L"RLCS_03_Grand_Finalist"),
FString(L"RLCS_03_World_Champion"),
FString(L"RLCS_04_Contender"),
FString(L"RLCS_04_Elite"),
FString(L"RLCS_04_Grand_Finalist"),
FString(L"RLCS_04_World_Champion"),
FString(L"RLCS_05_Contender"),
FString(L"RLCS_05_Elite"),
FString(L"RLCS_05_Grand_Finalist"),
FString(L"RLCS_05_World_Champion"),
FString(L"RLCS_Analyst"),
FString(L"RLRS_01_Challenger"),
FString(L"RLRS_02_Challenger"),
FString(L"Season2GrandChampion"),
FString(L"Season3GrandChampion"),
FString(L"Season4GrandChampion"),
FString(L"Season5GrandChampion"),
FString(L"Season6GrandChampion"),
FString(L"Season7GrandChampion"),
FString(L"Season8GrandChampion"),
FString(L"The_Pigeon_Man"),
FString(L"Wet_Art_Man"),
FString(L"Throwdown_ANZ_Champion"),
FString(L"UORL_Champion"),
FString(L"X_Games_Champion"),
FString(L"XP_Veteran"),
FString(L"XP_Expert"),
FString(L"XP_Master"),
FString(L"XP_Legend"),
FString(L"XP_Rocketeer"),
FString(L"XP_EliteChallenger"),
FString(L"XP_AllStar"),
FString(L"XP_Superstar"),
FString(L"XP_SupremeRival"),
FString(L"XP_TranscendentMaster"),
FString(L"XP_SupersonicLegend"),
FString(L"XP_UltimateBaller"),
FString(L"XP_RocketeerElite"),
FString(L"XP_RocketDemigod"),
FString(L"RP1_CrossbarHero"),
FString(L"RP1_SaltMiner"),
FString(L"RP1_TheFabulous"),
FString(L"RP1_TradeMinister"),
FString(L"RP1_TheCalculator"),
FString(L"RP1_CaptainClutch"),
FString(L"RP1_BallChaser"),
FString(L"RP1_QuickChatChampion"),
FString(L"RP1_Sherpa"),
FString(L"RP1_AbsoluteMadman"),
FString(L"RP1_TacticalWhiffer"),
FString(L"RP1_Skylord"),
FString(L"SE_DemolitionDemon"),
FString(L"RLCS_06_Contender"),
FString(L"RLCS_06_Elite"),
FString(L"RLCS_06_Grand_Finalist"),
FString(L"RLCS_06_World_Champion"),
FString(L"Renegade_Cup_Champion"),
FString(L"Renegade_Cup_Elite"),
FString(L"Renegade_Cup_Monthly_Winner"),
FString(L"RLRS_03_Challenger"),
FString(L"Rival_Series_Analyst"),
FString(L"CRL_Season_2_Champion"),
FString(L"CRL_Season_2_Elite"),
FString(L"CRL_02_Contender"),
FString(L"Rockets_Engaged"),
FString(L"SE_PeppermintPowerhouse"),
FString(L"RP2_WallCrawler"),
FString(L"RP2_BoostHog"),
FString(L"RP2_Leadfoot"),
FString(L"RP2_ReliableRotator"),
FString(L"RP2_BackseatDriver"),
FString(L"RP2_MotorManiac"),
FString(L"RP2_SpeedDemon"),
FString(L"RP2_BlastJockey"),
FString(L"RP2_TheCollector"),
FString(L"RP2_ProfessorOfPhysics"),
FString(L"RP2_SpinningCarWizard"),
FString(L"RP2_TheInsane"),
FString(L"S9_Grand_Champion_Rumble"),
FString(L"S9_Grand_Champion_Dropshot"),
FString(L"S9_Grand_Champion_SnowDay"),
FString(L"S9_Grand_Champion_Hoops"),
FString(L"Season9GrandChampion"),
FString(L"RP3_Floater"),
FString(L"RP3_Goaltender"),
FString(L"RP3_WildCard"),
FString(L"RP3_Wheeler"),
FString(L"RP3_TheAccelerator"),
FString(L"RP3_TheFearless"),
FString(L"RP3_Reckless"),
FString(L"RP3_SundayDriver"),
FString(L"RP3_Ballistic"),
FString(L"RP3_Steamroller"),
FString(L"RP3_Showboat"),
FString(L"FR_4DChessmaster"),
FString(L"FR_TiltDetector"),
FString(L"Season10GrandChampion"),
FString(L"S10_Grand_Champion_Rumble"),
FString(L"S10_Grand_Champion_Dropshot"),
FString(L"S10_Grand_Champion_SnowDay"),
FString(L"S10_Grand_Champion_Hoops"),
FString(L"SE_CouchPotato"),
FString(L"CRL_03_SpringChampion"),
FString(L"CRL_03_SpringElite"),
FString(L"CRL_03_SpringContender"),
FString(L"CRL_03_FallChampion"),
FString(L"CRL_03_FallElite"),
FString(L"CRL_03_FallContender"),
FString(L"RLRS_04_Challenger"),
FString(L"RLCS_07_Contender"),
FString(L"RLCS_07_Elite"),
FString(L"RLCS_07_Grand_Finalist"),
FString(L"RLCS_07_World_Champion"),
FString(L"Season11GrandChampion"),
FString(L"S11_Grand_Champion_Rumble"),
FString(L"S11_Grand_Champion_Dropshot"),
FString(L"S11_Grand_Champion_SnowDay"),
FString(L"S11_Grand_Champion_Hoops"),
FString(L"RP4_QuickStudy"),
FString(L"RP4_TheMagnificent"),
FString(L"RP4_DriftKing"),
FString(L"RP4_RankAmateur"),
FString(L"RP4_SonicChaser"),
FString(L"RP4_FlipLord"),
FString(L"RP4_Trailblazer"),
FString(L"RP4_DeftDefender"),
FString(L"RP4_SureStriker"),
FString(L"BTS_Champion"),
FString(L"Rocket_Husband"),
FString(L"Rocket_Wife"),
FString(L"FR_BackboardBaller"),
FString(L"FR_MidfieldMagician"),
FString(L"SE_DEMOgorgon"),
FString(L"SE_SilentKnight"),
FString(L"SE_RatRace"),
FString(L"RP5_Animator"),
FString(L"RP5_SpeedChaser"),
FString(L"RP5_ShotNinja"),
FString(L"RP5_SoccerSenpai"),
FString(L"RP5_DriftQueen"),
FString(L"RP5_TheFantastic"),
FString(L"RP5_Juggler"),
FString(L"RP5_ChipChamp"),
FString(L"RP5_OGPlayer"),
FString(L"RP5_Committed"),
FString(L"SE_DiscJockey"),
FString(L"Season12GrandChampion"),
FString(L"S12_Grand_Champion_Rumble"),
FString(L"S12_Grand_Champion_Dropshot"),
FString(L"S12_Grand_Champion_SnowDay"),
FString(L"S12_Grand_Champion_Hoops"),
FString(L"Helping_Hand"),
FString(L"RLRS_05_Challenger"),
FString(L"RLCS_08_Contender"),
FString(L"RLCS_08_Elite"),
FString(L"RLCS_08_Grand_Finalist"),
FString(L"RLCS_08_World_Champion"),
FString(L"Season13GrandChampion"),
FString(L"S13_Grand_Champion_Rumble"),
FString(L"S13_Grand_Champion_Dropshot"),
FString(L"S13_Grand_Champion_SnowDay"),
FString(L"S13_Grand_Champion_Hoops"),
FString(L"Est_2015"),
FString(L"Est_2016"),
FString(L"Est_2017"),
FString(L"Est_2018"),
FString(L"Est_2019"),
FString(L"Est_2020"),
FString(L"AutoTour_01_Bronze_1"),
FString(L"AutoTour_01_Bronze_2"),
FString(L"AutoTour_01_Silver_1"),
FString(L"AutoTour_01_Silver_2"),
FString(L"AutoTour_01_Gold_1"),
FString(L"AutoTour_01_Gold_2"),
FString(L"AutoTour_01_Platinum_1"),
FString(L"AutoTour_01_Platinum_2"),
FString(L"AutoTour_01_Diamond_1"),
FString(L"AutoTour_01_Diamond_2"),
FString(L"AutoTour_01_Champion_1"),
FString(L"AutoTour_01_Champion_2"),
FString(L"AutoTour_01_GrandChampion_1"),
FString(L"AutoTour_01_GrandChampion_2"),
FString(L"AutoTour_01_SuperSonicLegend_1"),
FString(L"AutoTour_01_SuperSonicLegend_2"),
FString(L"RP6_Technician"),
FString(L"RP6_Thriller"),
FString(L"RP6_TroubleShooter"),
FString(L"RP6_TheMercurial"),
FString(L"RP6_VirtualRealist"),
FString(L"RP6_Soloist"),
FString(L"RP6_NetWorker"),
FString(L"RP6_StreetSamurai"),
FString(L"RP6_Duelist"),
FString(L"RP6_Fliptastic"),
FString(L"RP6_Maestro"),
FString(L"FR_Airhead"),
FString(L"2Time_World_Champion"),
FString(L"3Time_World_Champion"),
FString(L"4Time_World_Champion"),
FString(L"5Time_World_Champion"),
FString(L"RP7_FifthWheel"),
FString(L"RP7_Gearshifter"),
FString(L"RP7_Throwback"),
FString(L"RP7_Cross_Platformer"),
FString(L"RP7_SupersonicAcrobat"),
FString(L"RP7_Renegade"),
FString(L"RP7_FreeSpirit"),
FString(L"RP7_RocketRookie"),
FString(L"RP7_Carpooler"),
FString(L"RP8_ProspectElite"),
FString(L"RP7_Passtronaut"),
FString(L"RLRS_06_Challenger"),
FString(L"RLCS_09_Contender"),
FString(L"RLCS_09_NA_Champion"),
FString(L"RLCS_09_Elite"),
FString(L"RLCS_09_EU_Champion"),
FString(L"SE_Long_Time_Fan"),
FString(L"Season14GrandChampion"),
FString(L"S14_Grand_Champion_Rumble"),
FString(L"S14_Grand_Champion_Dropshot"),
FString(L"S14_Grand_Champion_SnowDay"),
FString(L"S14_Grand_Champion_Hoops"),
FString(L"KickOff_AsiaElite"),
FString(L"KickOff_AsiaGrandFinalist"),
FString(L"KickOff_AsiaChampion"),
FString(L"KickOff_MiddleEastElite"),
FString(L"KickOff_MiddleEastGrandFinalist"),
FString(L"KickOff_MiddleEastChampion"),
FString(L"FR_Hardstuck"),
FString(L"GrandSeries_09_Champion"),
FString(L"GrandSeries_09_Elite"),
FString(L"RP8_Diva"),
FString(L"RP8_The_Conductor"),
FString(L"RP8_Beatseeker"),
FString(L"RP8_The_Entertainer"),
FString(L"RP8_Headliner"),
FString(L"RP8_Rockin_Roller"),
FString(L"SE_SleighQueen"),
FString(L"S15_Grand_Champion_Rumble"),
FString(L"S15_Grand_Champion_DropShot"),
FString(L"S15_Grand_Champion_SnowDay"),
FString(L"S15_Grand_Champion_Hoops"),
FString(L"Season15GrandChampion"),
FString(L"AutoTour_02_Bronze_1"),
FString(L"AutoTour_02_Bronze_2"),
FString(L"AutoTour_02_Silver_1"),
FString(L"AutoTour_02_Silver_2"),
FString(L"AutoTour_02_Gold_1"),
FString(L"AutoTour_02_Gold_2"),
FString(L"AutoTour_02_Platinum_1"),
FString(L"AutoTour_02_Platinum_2"),
FString(L"AutoTour_02_Diamond_1"),
FString(L"AutoTour_02_Diamond_2"),
FString(L"AutoTour_02_Champion_1"),
FString(L"AutoTour_02_Champion_2"),
FString(L"AutoTour_02_GrandChampion_1"),
FString(L"AutoTour_02_GrandChampion_2"),
FString(L"S15_SuperSonic_Legend"),
FString(L"S15_SSL_Rumble"),
FString(L"S15_SSL_DropShot"),
FString(L"S15_SSL_SnowDay"),
FString(L"S15_SSL_Hoops"),
FString(L"AutoTour_02_SuperSonicLegend_1"),
FString(L"AutoTour_02_SuperSonicLegend_2"),
FString(L"RLCS_X_Major_Champion"),
FString(L"RLCS_X_Major_Finalist"),
FString(L"RLCS_X_Major_Elite"),
FString(L"RLCS_X_Regional_Champion"),
FString(L"RLCS_X_Regional_Finalist"),
FString(L"SE_LuckyDevil"),
FString(L"SE_GridironGuru"),
FString(L"RP9_Hairpin_Hero"),
FString(L"RP9_Victory_Lapper"),
FString(L"RP9_Slipstreamer"),
FString(L"RP9_Downforcer"),
FString(L"RP9_Crew_Chief"),
FString(L"RP9_Apex_Predator"),
FString(L"RP9_Tire_Changer"),
FString(L"RP9_Granny_Shifter"),
FString(L"RP9_Powertrainer"),
FString(L"SE_ExtraOrdinary"),
FString(L"CRL_Spring_2020_Champion"),
FString(L"CRL_Spring_2020_Elite"),
FString(L"CRL_Spring_2020_Contender"),
FString(L"CRL_Spring_Showdown_Champ"),
FString(L"CRL_Spring_Showdown_Elite"),
FString(L"Summer_Series_Champion"),
FString(L"Summer_Series_Elite"),
FString(L"CRL_Fall_2020_Champion"),
FString(L"CRL_Fall_2020_Elite"),
FString(L"CRL_Fall_2020_Contender"),
FString(L"SE_Gridiron_Games_Champion"),
FString(L"S16_Grand_Champion_Rumble"),
FString(L"S16_Grand_Champion_DropShot"),
FString(L"S16_Grand_Champion_SnowDay"),
FString(L"S16_Grand_Champion_Hoops"),
FString(L"Season16GrandChampion"),
FString(L"AutoTour_03_Bronze_1"),
FString(L"AutoTour_03_Bronze_2"),
FString(L"AutoTour_03_Silver_1"),
FString(L"AutoTour_03_Silver_2"),
FString(L"AutoTour_03_Gold_1"),
FString(L"AutoTour_03_Gold_2"),
FString(L"AutoTour_03_Platinum_1"),
FString(L"AutoTour_03_Platinum_2"),
FString(L"AutoTour_03_Diamond_1"),
FString(L"AutoTour_03_Diamond_2"),
FString(L"AutoTour_03_Champion_1"),
FString(L"AutoTour_03_Champion_2"),
FString(L"AutoTour_03_GrandChampion_1"),
FString(L"AutoTour_03_GrandChampion_2"),
FString(L"S16_SuperSonic_Legend"),
FString(L"S16_SSL_Rumble"),
FString(L"S16_SSL_DropShot"),
FString(L"S16_SSL_SnowDay"),
FString(L"S16_SSL_Hoops"),
FString(L"AutoTour_03_SuperSonicLegend_1"),
FString(L"AutoTour_03_SuperSonicLegend_2"),
FString(L"RLOC_Season_9_Elite"),
FString(L"White_Hat_Legend"),
FString(L"SE_FordFreestyler"),
FString(L"SE_FordFreestyleFinalist"),
FString(L"SE_FordFreestyleChampion"),
FString(L"AutoTour_04_Bronze_1"),
FString(L"AutoTour_04_Bronze_2"),
FString(L"AutoTour_04_Silver_1"),
FString(L"AutoTour_04_Silver_2"),
FString(L"AutoTour_04_Gold_1"),
FString(L"AutoTour_04_Gold_2"),
FString(L"AutoTour_04_Platinum_1"),
FString(L"AutoTour_04_Platinum_2"),
FString(L"AutoTour_04_Diamond_1"),
FString(L"AutoTour_04_Diamond_2"),
FString(L"AutoTour_04_Champion_1"),
FString(L"AutoTour_04_Champion_2"),
FString(L"AutoTour_04_GrandChampion_1"),
FString(L"AutoTour_04_GrandChampion_2"),
FString(L"S17_SuperSonic_Legend"),
FString(L"S17_SSL_Rumble"),
FString(L"S17_SSL_DropShot"),
FString(L"S17_SSL_SnowDay"),
FString(L"S17_SSL_Hoops"),
FString(L"AutoTour_04_SuperSonicLegend_1"),
FString(L"AutoTour_04_SuperSonicLegend_2"),
FString(L"S17_Grand_Champion_Rumble"),
FString(L"S17_Grand_Champion_DropShot"),
FString(L"S17_Grand_Champion_SnowDay"),
FString(L"S17_Grand_Champion_Hoops"),
FString(L"Season17GrandChampion"),
	};

};

int cock = 0;
int red = 255;
int green = 0;
int blue = 0;
std::string tempModalBody = "";
static char modalTitle[420] = "";
std::string tempModalTitle = "";
static char modalBody[420] = "";
std::string  tempModalButton = "";
static char modalButton[420] = "";
std::string  tempModalButton1 = "";
static char modalButton1[420] = "";
int tempmodalR = 0;
int tempmodalG = 0;
int tempmodalB = 0;
int modalR = 0;
int modalG = 0;
int modalB = 0;
int numba = 0;