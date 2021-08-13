#pragma once
#include "SdkHeaders.hpp"
#include <Psapi.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <Windows.h>
#pragma comment(lib, "Psapi.lib")
UProfile_TA* localProfile = nullptr;

namespace Utils
{
	// All GetInstanceOf related functions loop through the entire GObject TArray, which can be resource heavy if you're using them everywhere.
	// So rely on hooking functions and storing classes here instead, only use GetInstanceOf functions them when needed.

	FString to_fstring(const std::string& s) {
		wchar_t* p = new wchar_t[s.size() + 1];
		for (std::string::size_type i = 0; i < s.size(); ++i)
			p[i] = s[i];

		p[s.size()] = '\0';
		return FString(p);
	}

	FName to_fname(const std::string& s) {
		wchar_t* p = new wchar_t[s.size() + 1];
		for (std::string::size_type i = 0; i < s.size(); ++i)
			p[i] = s[i];

		p[s.size()] = '\0';
		return FName(p);
	}

	// Get the default constructor of a class type. Example: UGameData_TA* gameData = GetDefaultInstanceOf<UGameData_TA>();
	template<typename T> T* GetDefaultInstanceOf()
	{
		UClass* staticClass = T::StaticClass();

		for (int32_t i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				if (std::string(uObject->GetFullName()).find("Default") != std::string::npos)
				{
					return reinterpret_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}

	// Get the most current/active instance of a class. Example: UEngine* engine = GetInstanceOf<UEngine>();
	template<typename T> T* GetInstanceOf()
	{
		UClass* staticClass = T::StaticClass();

		for (int32_t i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				if (std::string(uObject->GetFullName()).find("Default") == std::string::npos)
				{
					return reinterpret_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}

	template<typename T> // Get all active instances of a class type. Example: std::vector<APawn*> pawns = GetAllInstancesOf<APawn>();
	TArray<T*> GetAllInstancesOf()
	{
		TArray<T*> objectInstances;
		UClass* staticClass = T::StaticClass();

		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA(staticClass))
			{
				if (std::string(uObject->GetFullName()).find("Default") == std::string::npos)
				{
					objectInstances.Add(reinterpret_cast<T*>(uObject));
				}
			}
		}

		return objectInstances;
	}

	// Get all default instances of a class type.
	template<typename T> TArray<T*> GetAllDefaultInstancesOf()
	{
		TArray<T*> objectInstances;
		UClass* staticClass = T::StaticClass();

		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA(staticClass))
			{
				if (std::string(uObject->GetFullName()).find("Default") != std::string::npos)
				{
					objectInstances.Add(reinterpret_cast<T*>(uObject));
				}
			}
		}

		return objectInstances;
	}

	// Get an object instance by it's name and class type. Example: UTexture2D* texture = FindObject<UTexture2D>("WhiteSquare");
	template<typename T> T* FindObject(const std::string& objectName)
	{
		UClass* staticClass = T::StaticClass();

		for (int32_t i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				std::string objectFullName = uObject->GetFullName();

				if (objectFullName == objectName || objectFullName.find(objectName) != std::string::npos)
				{
					return reinterpret_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}

	// Get all object instances by it's name and class type. Example: std::vector<UTexture2D*> textures = FindAllObjects<UTexture2D>("Noise");
	template<typename T> std::vector<T*> FindAllObjects(const std::string& objectName)
	{
		std::vector<T*> objectInstances;
		UClass* staticClass = T::StaticClass();

		for (int32_t i = 0; i < UObject::GObjObjects()->Num(); i++)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				std::string objectFullName = uObject->GetFullName();

				if (objectFullName == objectName || objectFullName.find(objectName) != std::string::npos)
				{
					objectInstances.push_back(reinterpret_cast<T*>(uObject));
				}
			}
		}

		return objectInstances;
	}

	template<class U>
	U* StaticLoadObject(const std::string& objectName)
	{
		UClass* objectClass = (UClass*)U::StaticClass();

		for (int i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* checkObject = UObject::GObjObjects()->At(i);

			if (checkObject && checkObject->IsA(objectClass))
			{
				std::string checkFullName = std::string(checkObject->GetFullName());

				if (checkFullName == objectName || checkFullName.find(objectName) != std::string::npos)
					return (U*)checkObject;
			}
		}

		return nullptr;
	}

	void Init()
	{
		localProfile = GetInstanceOf<UProfile_TA>();
	}

	struct FUniqueNetId GetUniqueID()
	{
		if (localProfile)
		{
			return localProfile->GetUniqueNetId();
		}

		return FUniqueNetId{};
	}

	class UProfile_TA* GetProfile()
	{
		return localProfile;
	}

	class UGFxData_PRI_TA* GetLocalPlayerPRI()
	{
		TArray<UGFxData_PRI_TA*> pris = GetAllInstancesOf<UGFxData_PRI_TA>();

		for (UGFxData_PRI_TA* pri : pris)
		{
			if (!pri)
				continue;

			if (pri->PlayerID.EpicAccountId.ToString() == GetUniqueID().EpicAccountId.ToString() && pri->PlayerID.Platform == GetUniqueID().Platform)
				return pri;
		}

		return nullptr;
	}

	class UGFxData_PRI_TA* GetPRIFromSteamID(unsigned long long steamId)
	{
		TArray<UGFxData_PRI_TA*> pris = GetAllInstancesOf<UGFxData_PRI_TA>();

		for (int i = 0; i < pris.Num(); i++)
		{
			auto pri = pris.At(i);

			if (!pri)
				continue;

			if (pri->PlayerID.Uid == steamId && pri->PlayerID.Platform == 1) { return pri; } else { continue; }
		}

		return nullptr;
	}

	class UGFxData_PRI_TA* GetPRIFromEpicID(std::string epicId)
	{
		TArray<UGFxData_PRI_TA*> pris = GetAllInstancesOf<UGFxData_PRI_TA>();

		for (UGFxData_PRI_TA* pri : pris)
		{
			if (!pri)
				continue;

			if (pri->PlayerID.EpicAccountId == to_fstring(epicId) && pri->PlayerID.Platform == 11) { return pri; } else { continue; }
		}

		return nullptr;
	}

	bool SetDataStoreValue(UGFxDataRow_X* dataRow, FName table, FName column, FString str, int i, UTexture* texture)
	{
		UGFxDataStore_X* dataStore = GetInstanceOf<UGFxDataStore_X>();
		if (dataStore)
		{
			if (dataRow)
			{
				FASValue name = dataStore->GetValue(table, dataRow->RowIndex, column);

				if (name.Type == 4) // string
				{
					dataStore->SetStringValue(table, dataRow->RowIndex, column, str);
					return true;
				}
				else if (name.Type == 3 || name.Type == 7 || name.Type == 5 || name.Type == 2) // int
				{
					dataStore->SetIntValue(table, dataRow->RowIndex, column, i);
					return true;
				}
				else if (name.Type == 6) // texture 
				{
					dataStore->SetTextureValue(table, dataRow->RowIndex, column, texture);
					return true;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	void LogDatastoreValues()
	{
		UGFxDataStore_X* store = GetInstanceOf<UGFxDataStore_X>();

		if (store) {
			TArray<struct FGFxDataStoreTable> t = store->Tables;
			for (int i = 0; i < t.Num(); i++) {
				std::cout << "\n" + std::string("Table: ") << t.At(i).Name.ToString() << std::endl;
				TArray<struct FGFxDataStoreRow> rows = t.At(i).Rows;
				for (int k = 0; k < rows.Num(); k++) {
					if (!rows.At(k).BoundObject)
						continue;
					std::cout << "RowIndex " + std::to_string(k) << " :\n" << std::endl;
					std::cout << std::to_string(rows.At(k).BoundObject->RowIndex) << std::endl;
				}
				TArray<struct FGFxDataStoreColumn> columns = t.At(i).Columns;
				std::cout << "Columns:\n" << std::endl;
				for (int j = 0; j < columns.Num(); j++) {
					std::cout << columns.At(j).Name.ToString() << std::endl;
				}

			}
		}
	}

	uintptr_t FindPattern(HMODULE module, const uint8_t* pattern, const char* mask)
	{
		MODULEINFO info = { };
		GetModuleInformation(GetCurrentProcess(), module, &info, sizeof(MODULEINFO));

		uintptr_t start = reinterpret_cast<uintptr_t>(module);
		size_t length = info.SizeOfImage;

		size_t pos = 0;
		size_t maskLength = std::strlen(mask) - 1;

		for (uintptr_t retAddress = start; retAddress < start + length; retAddress++)
		{
			if (*reinterpret_cast<unsigned char*>(retAddress) == pattern[pos] || mask[pos] == '?')
			{
				if (pos == maskLength)
				{
					return (retAddress - maskLength);
				}

				pos++;
			}
			else
			{
				retAddress -= pos;
				pos = 0;
			}
		}

		return NULL;
	}

	void ReplaceTexture(UTexture* ogTexture, UTexture* newTexture) {
		for (UMaterialInstanceConstant* constant : Utils::GetAllInstancesOf<UMaterialInstanceConstant>())
		{
			for (FTextureParameterValue& paramValue : constant->TextureParameterValues)
			{
				if (paramValue.ParameterValue == ogTexture)
				{
					constant->SetTextureParameterValue(paramValue.ParameterName, newTexture);
					std::cout << paramValue.ParameterName.ToString() << std::endl;
				}
			}
		}
	}

	/*
		for (UMaterialInstanceConstant* matconst : Utils::GetAllInstancesOf<UMaterialInstanceConstant>())
		{
			if (matconst)
			{
				for (FTextureParameterValue& textureparam : matconst->TextureParameterValues)
				{
					for (UTexture* tex2d : Utils::GetAllInstancesOf<UTexture>())
					{
						if (tex2d)
						{
							if (textureparam.ParameterValue && textureparam.ParameterValue == tex2d)
							{
								Console.Notify("Texture: " + (std::string)tex2d->GetFullName());
								Console.Notify("TextureParamName: " + textureparam.ParameterName.ToString());
							}
						}
					}
				}
			}
		}
	*/
}