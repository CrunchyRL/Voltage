/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: IpDrv_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK, Crunchy
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function IpDrv.AdHocDelegates.EventAdHocDestroyed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAdHocDestroyed()
{
	static UFunction* pFnEventAdHocDestroyed = nullptr;

	if (!pFnEventAdHocDestroyed)
	{
		pFnEventAdHocDestroyed = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocDestroyed");

	}

	UAdHocDelegates_execEventAdHocDestroyed_Parms EventAdHocDestroyed_Parms;

	this->ProcessEvent(pFnEventAdHocDestroyed, &EventAdHocDestroyed_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocFinalized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAdHocFinalized()
{
	static UFunction* pFnEventAdHocFinalized = nullptr;

	if (!pFnEventAdHocFinalized)
	{
		pFnEventAdHocFinalized = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocFinalized");

	}

	UAdHocDelegates_execEventAdHocFinalized_Parms EventAdHocFinalized_Parms;

	this->ProcessEvent(pFnEventAdHocFinalized, &EventAdHocFinalized_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventStationDisconnected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventStationDisconnected()
{
	static UFunction* pFnEventStationDisconnected = nullptr;

	if (!pFnEventStationDisconnected)
	{
		pFnEventStationDisconnected = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventStationDisconnected");

	}

	UAdHocDelegates_execEventStationDisconnected_Parms EventStationDisconnected_Parms;

	this->ProcessEvent(pFnEventStationDisconnected, &EventStationDisconnected_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventStationConnected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventStationConnected()
{
	static UFunction* pFnEventStationConnected = nullptr;

	if (!pFnEventStationConnected)
	{
		pFnEventStationConnected = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventStationConnected");

	}

	UAdHocDelegates_execEventStationConnected_Parms EventStationConnected_Parms;

	this->ProcessEvent(pFnEventStationConnected, &EventStationConnected_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventBecomeStation
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventBecomeStation()
{
	static UFunction* pFnEventBecomeStation = nullptr;

	if (!pFnEventBecomeStation)
	{
		pFnEventBecomeStation = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventBecomeStation");

	}

	UAdHocDelegates_execEventBecomeStation_Parms EventBecomeStation_Parms;

	this->ProcessEvent(pFnEventBecomeStation, &EventBecomeStation_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAccessPointCreated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAccessPointCreated()
{
	static UFunction* pFnEventAccessPointCreated = nullptr;

	if (!pFnEventAccessPointCreated)
	{
		pFnEventAccessPointCreated = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAccessPointCreated");

	}

	UAdHocDelegates_execEventAccessPointCreated_Parms EventAccessPointCreated_Parms;

	this->ProcessEvent(pFnEventAccessPointCreated, &EventAccessPointCreated_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocInitialized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAdHocDelegates::EventAdHocInitialized()
{
	static UFunction* pFnEventAdHocInitialized = nullptr;

	if (!pFnEventAdHocInitialized)
	{
		pFnEventAdHocInitialized = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocInitialized");

	}

	UAdHocDelegates_execEventAdHocInitialized_Parms EventAdHocInitialized_Parms;

	this->ProcessEvent(pFnEventAdHocInitialized, &EventAdHocInitialized_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocError
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UError*                  Error                          (CPF_Parm)

void UAdHocDelegates::EventAdHocError(class UError* Error)
{
	static UFunction* pFnEventAdHocError = nullptr;

	if (!pFnEventAdHocError)
	{
		pFnEventAdHocError = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocError");

	}

	UAdHocDelegates_execEventAdHocError_Parms EventAdHocError_Parms;
	memcpy_s(&EventAdHocError_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnEventAdHocError, &EventAdHocError_Parms, nullptr);
};

// Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// TArray<struct FAdHocAccessPointInfo> Ahapis                         (CPF_Parm | CPF_NeedCtorLink)

void UAdHocDelegates::EventAdHocOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis)
{
	static UFunction* pFnEventAdHocOnNetworkChanged = nullptr;

	if (!pFnEventAdHocOnNetworkChanged)
	{
		pFnEventAdHocOnNetworkChanged = UFunction::FindFunction("Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged");

	}

	UAdHocDelegates_execEventAdHocOnNetworkChanged_Parms EventAdHocOnNetworkChanged_Parms;
	memcpy_s(&EventAdHocOnNetworkChanged_Parms.Ahapis, 0x10, &Ahapis, 0x10);

	this->ProcessEvent(pFnEventAdHocOnNetworkChanged, &EventAdHocOnNetworkChanged_Parms, nullptr);
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    OutRegisteredPlayers           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& OutRegisteredPlayers)
{
	static UFunction* pFnGetRegisteredPlayers = nullptr;

	if (!pFnGetRegisteredPlayers)
	{
		pFnGetRegisteredPlayers = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");

	}

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms GetRegisteredPlayers_Parms;
	memcpy_s(&GetRegisteredPlayers_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnGetRegisteredPlayers, &GetRegisteredPlayers_Parms, nullptr);
	memcpy_s(&GetRegisteredPlayers_Parms.OutRegisteredPlayers, 0x10, &OutRegisteredPlayers, 0x10);
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsPlayerInSession = nullptr;

	if (!pFnIsPlayerInSession)
	{
		pFnIsPlayerInSession = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");

	}

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms IsPlayerInSession_Parms;
	memcpy_s(&IsPlayerInSession_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&IsPlayerInSession_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnIsPlayerInSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPlayerInSession, &IsPlayerInSession_Parms, nullptr);

	pFnIsPlayerInSession->FunctionFlags |= 0x400;

	return IsPlayerInSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            UserIndex                      (CPF_Parm)

struct FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerNicknameFromIndex = nullptr;

	if (!pFnGetPlayerNicknameFromIndex)
	{
		pFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");

	}

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	memcpy_s(&GetPlayerNicknameFromIndex_Parms.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, nullptr);

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Country                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, struct FString Country)
{
	static UFunction* pFnOnPlayerCountryRetrieved = nullptr;

	if (!pFnOnPlayerCountryRetrieved)
	{
		pFnOnPlayerCountryRetrieved = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved");

	}

	UOnlineSubsystemCommonImpl_execOnPlayerCountryRetrieved_Parms OnPlayerCountryRetrieved_Parms;
	memcpy_s(&OnPlayerCountryRetrieved_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&OnPlayerCountryRetrieved_Parms.Country, 0x10, &Country, 0x10);

	this->ProcessEvent(pFnOnPlayerCountryRetrieved, &OnPlayerCountryRetrieved_Parms, nullptr);
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FWordFilterResult       Result                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::OnSanitizeStringComplete(struct FWordFilterResult Result)
{
	static UFunction* pFnOnSanitizeStringComplete = nullptr;

	if (!pFnOnSanitizeStringComplete)
	{
		pFnOnSanitizeStringComplete = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete");

	}

	UOnlineSubsystemCommonImpl_execOnSanitizeStringComplete_Parms OnSanitizeStringComplete_Parms;
	memcpy_s(&OnSanitizeStringComplete_Parms.Result, 0x38, &Result, 0x38);

	this->ProcessEvent(pFnOnSanitizeStringComplete, &OnSanitizeStringComplete_Parms, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.TriggerAvatarCallbacks
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Avatar                         (CPF_Parm)

void UAvatarDownloadComponent::TriggerAvatarCallbacks(class UAvatarDownload* Avatar)
{
	static UFunction* pFnTriggerAvatarCallbacks = nullptr;

	if (!pFnTriggerAvatarCallbacks)
	{
		pFnTriggerAvatarCallbacks = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.TriggerAvatarCallbacks");

	}

	UAvatarDownloadComponent_execTriggerAvatarCallbacks_Parms TriggerAvatarCallbacks_Parms;
	memcpy_s(&TriggerAvatarCallbacks_Parms.Avatar, 0x8, &Avatar, 0x8);

	this->ProcessEvent(pFnTriggerAvatarCallbacks, &TriggerAvatarCallbacks_Parms, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.HandleOnlineImageDownloaded
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FOnlineImageDownload    ImageInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::HandleOnlineImageDownloaded(struct FOnlineImageDownload ImageInfo)
{
	static UFunction* pFnHandleOnlineImageDownloaded = nullptr;

	if (!pFnHandleOnlineImageDownloaded)
	{
		pFnHandleOnlineImageDownloaded = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.HandleOnlineImageDownloaded");

	}

	UAvatarDownloadComponent_execHandleOnlineImageDownloaded_Parms HandleOnlineImageDownloaded_Parms;
	memcpy_s(&HandleOnlineImageDownloaded_Parms.ImageInfo, 0x40, &ImageInfo, 0x40);

	this->ProcessEvent(pFnHandleOnlineImageDownloaded, &HandleOnlineImageDownloaded_Parms, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.GetAvatar
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  Size                           (CPF_Parm)

class UAvatarDownload* UAvatarDownloadComponent::GetAvatar(struct FUniqueNetId PlayerID, unsigned char Size)
{
	static UFunction* pFnGetAvatar = nullptr;

	if (!pFnGetAvatar)
	{
		pFnGetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.GetAvatar");

	}

	UAvatarDownloadComponent_execGetAvatar_Parms GetAvatar_Parms;
	memcpy_s(&GetAvatar_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	GetAvatar_Parms.Size = Size;

	this->ProcessEvent(pFnGetAvatar, &GetAvatar_Parms, nullptr);

	return GetAvatar_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadComponent.ClearPendingDownloads
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadComponent::ClearPendingDownloads()
{
	static UFunction* pFnClearPendingDownloads = nullptr;

	if (!pFnClearPendingDownloads)
	{
		pFnClearPendingDownloads = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.ClearPendingDownloads");

	}

	UAvatarDownloadComponent_execClearPendingDownloads_Parms ClearPendingDownloads_Parms;

	this->ProcessEvent(pFnClearPendingDownloads, &ClearPendingDownloads_Parms, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.CleanupAvatars
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadComponent::CleanupAvatars()
{
	static UFunction* pFnCleanupAvatars = nullptr;

	if (!pFnCleanupAvatars)
	{
		pFnCleanupAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.CleanupAvatars");

	}

	UAvatarDownloadComponent_execCleanupAvatars_Parms CleanupAvatars_Parms;

	this->ProcessEvent(pFnCleanupAvatars, &CleanupAvatars_Parms, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.DownloadAvatar
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  Size                           (CPF_Parm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::DownloadAvatar(struct FUniqueNetId PlayerID, unsigned char Size, struct FString URL)
{
	static UFunction* pFnDownloadAvatar = nullptr;

	if (!pFnDownloadAvatar)
	{
		pFnDownloadAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.DownloadAvatar");

	}

	UAvatarDownloadComponent_execDownloadAvatar_Parms DownloadAvatar_Parms;
	memcpy_s(&DownloadAvatar_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	DownloadAvatar_Parms.Size = Size;
	memcpy_s(&DownloadAvatar_Parms.URL, 0x10, &URL, 0x10);

	this->ProcessEvent(pFnDownloadAvatar, &DownloadAvatar_Parms, nullptr);
};

// Function IpDrv.AvatarDownloadComponent.StoreNewAvatars
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    NewPlayerIDs                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::StoreNewAvatars(unsigned char Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& NewPlayerIDs)
{
	static UFunction* pFnStoreNewAvatars = nullptr;

	if (!pFnStoreNewAvatars)
	{
		pFnStoreNewAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.StoreNewAvatars");

	}

	UAvatarDownloadComponent_execStoreNewAvatars_Parms StoreNewAvatars_Parms;
	StoreNewAvatars_Parms.Size = Size;
	memcpy_s(&StoreNewAvatars_Parms.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);

	pFnStoreNewAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStoreNewAvatars, &StoreNewAvatars_Parms, nullptr);

	pFnStoreNewAvatars->FunctionFlags |= 0x400;
	memcpy_s(&StoreNewAvatars_Parms.NewPlayerIDs, 0x10, &NewPlayerIDs, 0x10);
};

// Function IpDrv.AvatarDownloadComponent.ProcessOldRequests
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  SizeType                       (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    InPlayerIDs                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    NewRequestIDs                  (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadComponent::ProcessOldRequests(unsigned char SizeType, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& InPlayerIDs, TArray<struct FUniqueNetId>& NewRequestIDs)
{
	static UFunction* pFnProcessOldRequests = nullptr;

	if (!pFnProcessOldRequests)
	{
		pFnProcessOldRequests = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.ProcessOldRequests");

	}

	UAvatarDownloadComponent_execProcessOldRequests_Parms ProcessOldRequests_Parms;
	ProcessOldRequests_Parms.SizeType = SizeType;
	memcpy_s(&ProcessOldRequests_Parms.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);

	pFnProcessOldRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProcessOldRequests, &ProcessOldRequests_Parms, nullptr);

	pFnProcessOldRequests->FunctionFlags |= 0x400;
	memcpy_s(&ProcessOldRequests_Parms.InPlayerIDs, 0x10, &InPlayerIDs, 0x10);
	memcpy_s(&ProcessOldRequests_Parms.NewRequestIDs, 0x10, &NewRequestIDs, 0x10);
};

// Function IpDrv.AvatarDownloadComponent.TryAddAvatarTextureCallback
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

bool UAvatarDownloadComponent::TryAddAvatarTextureCallback(struct FUniqueNetId PlayerNetId, unsigned char Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate)
{
	static UFunction* pFnTryAddAvatarTextureCallback = nullptr;

	if (!pFnTryAddAvatarTextureCallback)
	{
		pFnTryAddAvatarTextureCallback = UFunction::FindFunction("Function IpDrv.AvatarDownloadComponent.TryAddAvatarTextureCallback");

	}

	UAvatarDownloadComponent_execTryAddAvatarTextureCallback_Parms TryAddAvatarTextureCallback_Parms;
	memcpy_s(&TryAddAvatarTextureCallback_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	TryAddAvatarTextureCallback_Parms.Size = Size;
	memcpy_s(&TryAddAvatarTextureCallback_Parms.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);

	pFnTryAddAvatarTextureCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTryAddAvatarTextureCallback, &TryAddAvatarTextureCallback_Parms, nullptr);

	pFnTryAddAvatarTextureCallback->FunctionFlags |= 0x400;

	return TryAddAvatarTextureCallback_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.ContainsImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

bool UAvatarDownloadMap::ContainsImage(struct FString Key)
{
	static UFunction* pFnContainsImage = nullptr;

	if (!pFnContainsImage)
	{
		pFnContainsImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ContainsImage");

	}

	UAvatarDownloadMap_execContainsImage_Parms ContainsImage_Parms;
	memcpy_s(&ContainsImage_Parms.Key, 0x10, &Key, 0x10);

	pFnContainsImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnContainsImage, &ContainsImage_Parms, nullptr);

	pFnContainsImage->FunctionFlags |= 0x400;

	return ContainsImage_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.ContainsAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UAvatarDownloadMap::ContainsAvatar(struct FAvatarKey& Key)
{
	static UFunction* pFnContainsAvatar = nullptr;

	if (!pFnContainsAvatar)
	{
		pFnContainsAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ContainsAvatar");

	}

	UAvatarDownloadMap_execContainsAvatar_Parms ContainsAvatar_Parms;

	pFnContainsAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnContainsAvatar, &ContainsAvatar_Parms, nullptr);

	pFnContainsAvatar->FunctionFlags |= 0x400;
	memcpy_s(&ContainsAvatar_Parms.Key, 0x50, &Key, 0x50);

	return ContainsAvatar_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.OnAvatarReceivedImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Avatar                         (CPF_Parm)

void UAvatarDownloadMap::OnAvatarReceivedImage(class UAvatarDownload* Avatar)
{
	static UFunction* pFnOnAvatarReceivedImage = nullptr;

	if (!pFnOnAvatarReceivedImage)
	{
		pFnOnAvatarReceivedImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.OnAvatarReceivedImage");

	}

	UAvatarDownloadMap_execOnAvatarReceivedImage_Parms OnAvatarReceivedImage_Parms;
	memcpy_s(&OnAvatarReceivedImage_Parms.Avatar, 0x8, &Avatar, 0x8);

	pFnOnAvatarReceivedImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOnAvatarReceivedImage, &OnAvatarReceivedImage_Parms, nullptr);

	pFnOnAvatarReceivedImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.RemoveImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

void UAvatarDownloadMap::RemoveImage(struct FString Key)
{
	static UFunction* pFnRemoveImage = nullptr;

	if (!pFnRemoveImage)
	{
		pFnRemoveImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.RemoveImage");

	}

	UAvatarDownloadMap_execRemoveImage_Parms RemoveImage_Parms;
	memcpy_s(&RemoveImage_Parms.Key, 0x10, &Key, 0x10);

	pFnRemoveImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveImage, &RemoveImage_Parms, nullptr);

	pFnRemoveImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.RemoveAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadMap::RemoveAvatar(struct FAvatarKey& Key)
{
	static UFunction* pFnRemoveAvatar = nullptr;

	if (!pFnRemoveAvatar)
	{
		pFnRemoveAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.RemoveAvatar");

	}

	UAvatarDownloadMap_execRemoveAvatar_Parms RemoveAvatar_Parms;

	pFnRemoveAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveAvatar, &RemoveAvatar_Parms, nullptr);

	pFnRemoveAvatar->FunctionFlags |= 0x400;
	memcpy_s(&RemoveAvatar_Parms.Key, 0x50, &Key, 0x50);
};

// Function IpDrv.AvatarDownloadMap.RemoveAllNetIDs
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadMap::RemoveAllNetIDs(struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnRemoveAllNetIDs = nullptr;

	if (!pFnRemoveAllNetIDs)
	{
		pFnRemoveAllNetIDs = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.RemoveAllNetIDs");

	}

	UAvatarDownloadMap_execRemoveAllNetIDs_Parms RemoveAllNetIDs_Parms;

	pFnRemoveAllNetIDs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveAllNetIDs, &RemoveAllNetIDs_Parms, nullptr);

	pFnRemoveAllNetIDs->FunctionFlags |= 0x400;
	memcpy_s(&RemoveAllNetIDs_Parms.PlayerID, 0x48, &PlayerID, 0x48);
};

// Function IpDrv.AvatarDownloadMap.ClearAvatarsPendingImages
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::ClearAvatarsPendingImages()
{
	static UFunction* pFnClearAvatarsPendingImages = nullptr;

	if (!pFnClearAvatarsPendingImages)
	{
		pFnClearAvatarsPendingImages = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ClearAvatarsPendingImages");

	}

	UAvatarDownloadMap_execClearAvatarsPendingImages_Parms ClearAvatarsPendingImages_Parms;

	pFnClearAvatarsPendingImages->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearAvatarsPendingImages, &ClearAvatarsPendingImages_Parms, nullptr);

	pFnClearAvatarsPendingImages->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.ClearImages
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::ClearImages()
{
	static UFunction* pFnClearImages = nullptr;

	if (!pFnClearImages)
	{
		pFnClearImages = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ClearImages");

	}

	UAvatarDownloadMap_execClearImages_Parms ClearImages_Parms;

	pFnClearImages->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearImages, &ClearImages_Parms, nullptr);

	pFnClearImages->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.ClearAvatars
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::ClearAvatars()
{
	static UFunction* pFnClearAvatars = nullptr;

	if (!pFnClearAvatars)
	{
		pFnClearAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.ClearAvatars");

	}

	UAvatarDownloadMap_execClearAvatars_Parms ClearAvatars_Parms;

	pFnClearAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearAvatars, &ClearAvatars_Parms, nullptr);

	pFnClearAvatars->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.Clear
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAvatarDownloadMap::Clear()
{
	static UFunction* pFnClear = nullptr;

	if (!pFnClear)
	{
		pFnClear = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.Clear");

	}

	UAvatarDownloadMap_execClear_Parms Clear_Parms;

	pFnClear->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClear, &Clear_Parms, nullptr);

	pFnClear->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.TryGetImage
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                OutValue                       (CPF_Parm | CPF_OutParm)

bool UAvatarDownloadMap::TryGetImage(struct FString Key, class UTexture*& OutValue)
{
	static UFunction* pFnTryGetImage = nullptr;

	if (!pFnTryGetImage)
	{
		pFnTryGetImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.TryGetImage");

	}

	UAvatarDownloadMap_execTryGetImage_Parms TryGetImage_Parms;
	memcpy_s(&TryGetImage_Parms.Key, 0x10, &Key, 0x10);

	pFnTryGetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTryGetImage, &TryGetImage_Parms, nullptr);

	pFnTryGetImage->FunctionFlags |= 0x400;
	memcpy_s(&TryGetImage_Parms.OutValue, 0x8, &OutValue, 0x8);

	return TryGetImage_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.TryGetAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class UAvatarDownload*         OutValue                       (CPF_Parm | CPF_OutParm)

bool UAvatarDownloadMap::TryGetAvatar(struct FAvatarKey& Key, class UAvatarDownload*& OutValue)
{
	static UFunction* pFnTryGetAvatar = nullptr;

	if (!pFnTryGetAvatar)
	{
		pFnTryGetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.TryGetAvatar");

	}

	UAvatarDownloadMap_execTryGetAvatar_Parms TryGetAvatar_Parms;

	pFnTryGetAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTryGetAvatar, &TryGetAvatar_Parms, nullptr);

	pFnTryGetAvatar->FunctionFlags |= 0x400;
	memcpy_s(&TryGetAvatar_Parms.Key, 0x50, &Key, 0x50);
	memcpy_s(&TryGetAvatar_Parms.OutValue, 0x8, &OutValue, 0x8);

	return TryGetAvatar_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.GetAvatarsPendingImage
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// TArray<class UAvatarDownload*> OutAvatars                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAvatarDownloadMap::GetAvatarsPendingImage(struct FString Key, TArray<class UAvatarDownload*>& OutAvatars)
{
	static UFunction* pFnGetAvatarsPendingImage = nullptr;

	if (!pFnGetAvatarsPendingImage)
	{
		pFnGetAvatarsPendingImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.GetAvatarsPendingImage");

	}

	UAvatarDownloadMap_execGetAvatarsPendingImage_Parms GetAvatarsPendingImage_Parms;
	memcpy_s(&GetAvatarsPendingImage_Parms.Key, 0x10, &Key, 0x10);

	pFnGetAvatarsPendingImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAvatarsPendingImage, &GetAvatarsPendingImage_Parms, nullptr);

	pFnGetAvatarsPendingImage->FunctionFlags |= 0x400;
	memcpy_s(&GetAvatarsPendingImage_Parms.OutAvatars, 0x10, &OutAvatars, 0x10);
};

// Function IpDrv.AvatarDownloadMap.GetImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

class UTexture* UAvatarDownloadMap::GetImage(struct FString Key)
{
	static UFunction* pFnGetImage = nullptr;

	if (!pFnGetImage)
	{
		pFnGetImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.GetImage");

	}

	UAvatarDownloadMap_execGetImage_Parms GetImage_Parms;
	memcpy_s(&GetImage_Parms.Key, 0x10, &Key, 0x10);

	pFnGetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetImage, &GetImage_Parms, nullptr);

	pFnGetImage->FunctionFlags |= 0x400;

	return GetImage_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.GetAvatar
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAvatarKey              Key                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UAvatarDownload* UAvatarDownloadMap::GetAvatar(struct FAvatarKey& Key)
{
	static UFunction* pFnGetAvatar = nullptr;

	if (!pFnGetAvatar)
	{
		pFnGetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.GetAvatar");

	}

	UAvatarDownloadMap_execGetAvatar_Parms GetAvatar_Parms;

	pFnGetAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAvatar, &GetAvatar_Parms, nullptr);

	pFnGetAvatar->FunctionFlags |= 0x400;
	memcpy_s(&GetAvatar_Parms.Key, 0x50, &Key, 0x50);

	return GetAvatar_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.AddAvatarPendingImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Avatar                         (CPF_Parm)

void UAvatarDownloadMap::AddAvatarPendingImage(class UAvatarDownload* Avatar)
{
	static UFunction* pFnAddAvatarPendingImage = nullptr;

	if (!pFnAddAvatarPendingImage)
	{
		pFnAddAvatarPendingImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.AddAvatarPendingImage");

	}

	UAvatarDownloadMap_execAddAvatarPendingImage_Parms AddAvatarPendingImage_Parms;
	memcpy_s(&AddAvatarPendingImage_Parms.Avatar, 0x8, &Avatar, 0x8);

	pFnAddAvatarPendingImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAvatarPendingImage, &AddAvatarPendingImage_Parms, nullptr);

	pFnAddAvatarPendingImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.SetImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                Value                          (CPF_Parm)

void UAvatarDownloadMap::SetImage(struct FString URL, class UTexture* Value)
{
	static UFunction* pFnSetImage = nullptr;

	if (!pFnSetImage)
	{
		pFnSetImage = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.SetImage");

	}

	UAvatarDownloadMap_execSetImage_Parms SetImage_Parms;
	memcpy_s(&SetImage_Parms.URL, 0x10, &URL, 0x10);
	memcpy_s(&SetImage_Parms.Value, 0x8, &Value, 0x8);

	pFnSetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetImage, &SetImage_Parms, nullptr);

	pFnSetImage->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.SetAvatar
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAvatarDownload*         Value                          (CPF_Parm)

void UAvatarDownloadMap::SetAvatar(class UAvatarDownload* Value)
{
	static UFunction* pFnSetAvatar = nullptr;

	if (!pFnSetAvatar)
	{
		pFnSetAvatar = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.SetAvatar");

	}

	UAvatarDownloadMap_execSetAvatar_Parms SetAvatar_Parms;
	memcpy_s(&SetAvatar_Parms.Value, 0x8, &Value, 0x8);

	pFnSetAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetAvatar, &SetAvatar_Parms, nullptr);

	pFnSetAvatar->FunctionFlags |= 0x400;
};

// Function IpDrv.AvatarDownloadMap.CountAvatars
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UAvatarDownloadMap::CountAvatars()
{
	static UFunction* pFnCountAvatars = nullptr;

	if (!pFnCountAvatars)
	{
		pFnCountAvatars = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.CountAvatars");

	}

	UAvatarDownloadMap_execCountAvatars_Parms CountAvatars_Parms;

	pFnCountAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCountAvatars, &CountAvatars_Parms, nullptr);

	pFnCountAvatars->FunctionFlags |= 0x400;

	return CountAvatars_Parms.ReturnValue;
};

// Function IpDrv.AvatarDownloadMap.AllValues
// [0x00424405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int                            MaxValues                      (CPF_OptionalParm | CPF_Parm)
// class UAvatarDownload*         OutAvatar                      (CPF_Parm | CPF_OutParm)

void UAvatarDownloadMap::AllValues(int StartIndex, int MaxValues, class UAvatarDownload*& OutAvatar)
{
	static UFunction* pFnAllValues = nullptr;

	if (!pFnAllValues)
	{
		pFnAllValues = UFunction::FindFunction("Function IpDrv.AvatarDownloadMap.AllValues");

	}

	UAvatarDownloadMap_execAllValues_Parms AllValues_Parms;
	memcpy_s(&AllValues_Parms.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&AllValues_Parms.MaxValues, 0x4, &MaxValues, 0x4);

	pFnAllValues->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllValues, &AllValues_Parms, nullptr);

	pFnAllValues->FunctionFlags |= 0x400;
	memcpy_s(&AllValues_Parms.OutAvatar, 0x8, &OutAvatar, 0x8);
};

// Function IpDrv.HttpRequestCurl.ProcessRequest
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestCurl::ProcessRequest()
{
	static UFunction* pFnProcessRequest = nullptr;

	if (!pFnProcessRequest)
	{
		pFnProcessRequest = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.ProcessRequest");

	}

	UHttpRequestCurl_execProcessRequest_Parms ProcessRequest_Parms;

	unsigned short NativeIndex = pFnProcessRequest->iNative;
	pFnProcessRequest->iNative = 0;

	pFnProcessRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProcessRequest, &ProcessRequest_Parms, nullptr);

	pFnProcessRequest->FunctionFlags |= 0x400;

	pFnProcessRequest->iNative = NativeIndex;

	return ProcessRequest_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 HeaderValue                    (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetHeader(struct FString HeaderName, struct FString HeaderValue)
{
	static UFunction* pFnSetHeader = nullptr;

	if (!pFnSetHeader)
	{
		pFnSetHeader = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetHeader");

	}

	UHttpRequestCurl_execSetHeader_Parms SetHeader_Parms;
	memcpy_s(&SetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&SetHeader_Parms.HeaderValue, 0x10, &HeaderValue, 0x10);

	unsigned short NativeIndex = pFnSetHeader->iNative;
	pFnSetHeader->iNative = 0;

	pFnSetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetHeader, &SetHeader_Parms, nullptr);

	pFnSetHeader->FunctionFlags |= 0x400;

	pFnSetHeader->iNative = NativeIndex;

	return SetHeader_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetContentAsString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ContentString                  (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetContentAsString(struct FString ContentString)
{
	static UFunction* pFnSetContentAsString = nullptr;

	if (!pFnSetContentAsString)
	{
		pFnSetContentAsString = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetContentAsString");

	}

	UHttpRequestCurl_execSetContentAsString_Parms SetContentAsString_Parms;
	memcpy_s(&SetContentAsString_Parms.ContentString, 0x10, &ContentString, 0x10);

	unsigned short NativeIndex = pFnSetContentAsString->iNative;
	pFnSetContentAsString->iNative = 0;

	pFnSetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetContentAsString, &SetContentAsString_Parms, nullptr);

	pFnSetContentAsString->FunctionFlags |= 0x400;

	pFnSetContentAsString->iNative = NativeIndex;

	return SetContentAsString_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<unsigned char>          ContentPayload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetContent(TArray<unsigned char>& ContentPayload)
{
	static UFunction* pFnSetContent = nullptr;

	if (!pFnSetContent)
	{
		pFnSetContent = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetContent");

	}

	UHttpRequestCurl_execSetContent_Parms SetContent_Parms;

	unsigned short NativeIndex = pFnSetContent->iNative;
	pFnSetContent->iNative = 0;

	pFnSetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetContent, &SetContent_Parms, nullptr);

	pFnSetContent->FunctionFlags |= 0x400;

	pFnSetContent->iNative = NativeIndex;
	memcpy_s(&SetContent_Parms.ContentPayload, 0x10, &ContentPayload, 0x10);

	return SetContent_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetURL
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetURL(struct FString URL)
{
	static UFunction* pFnSetURL = nullptr;

	if (!pFnSetURL)
	{
		pFnSetURL = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetURL");

	}

	UHttpRequestCurl_execSetURL_Parms SetURL_Parms;
	memcpy_s(&SetURL_Parms.URL, 0x10, &URL, 0x10);

	unsigned short NativeIndex = pFnSetURL->iNative;
	pFnSetURL->iNative = 0;

	pFnSetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetURL, &SetURL_Parms, nullptr);

	pFnSetURL->FunctionFlags |= 0x400;

	pFnSetURL->iNative = NativeIndex;

	return SetURL_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetVerb
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Verb                           (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestCurl::SetVerb(struct FString Verb)
{
	static UFunction* pFnSetVerb = nullptr;

	if (!pFnSetVerb)
	{
		pFnSetVerb = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.SetVerb");

	}

	UHttpRequestCurl_execSetVerb_Parms SetVerb_Parms;
	memcpy_s(&SetVerb_Parms.Verb, 0x10, &Verb, 0x10);

	unsigned short NativeIndex = pFnSetVerb->iNative;
	pFnSetVerb->iNative = 0;

	pFnSetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVerb, &SetVerb_Parms, nullptr);

	pFnSetVerb->FunctionFlags |= 0x400;

	pFnSetVerb->iNative = NativeIndex;

	return SetVerb_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetVerb
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetVerb()
{
	static UFunction* pFnGetVerb = nullptr;

	if (!pFnGetVerb)
	{
		pFnGetVerb = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetVerb");

	}

	UHttpRequestCurl_execGetVerb_Parms GetVerb_Parms;

	unsigned short NativeIndex = pFnGetVerb->iNative;
	pFnGetVerb->iNative = 0;

	pFnGetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVerb, &GetVerb_Parms, nullptr);

	pFnGetVerb->FunctionFlags |= 0x400;

	pFnGetVerb->iNative = NativeIndex;

	return GetVerb_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<unsigned char>          Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpRequestCurl::GetContent(TArray<unsigned char>& Content)
{
	static UFunction* pFnGetContent = nullptr;

	if (!pFnGetContent)
	{
		pFnGetContent = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetContent");

	}

	UHttpRequestCurl_execGetContent_Parms GetContent_Parms;

	unsigned short NativeIndex = pFnGetContent->iNative;
	pFnGetContent->iNative = 0;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContent, &GetContent_Parms, nullptr);

	pFnGetContent->FunctionFlags |= 0x400;

	pFnGetContent->iNative = NativeIndex;
	memcpy_s(&GetContent_Parms.Content, 0x10, &Content, 0x10);
};

// Function IpDrv.HttpRequestCurl.GetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetURL()
{
	static UFunction* pFnGetURL = nullptr;

	if (!pFnGetURL)
	{
		pFnGetURL = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetURL");

	}

	UHttpRequestCurl_execGetURL_Parms GetURL_Parms;

	unsigned short NativeIndex = pFnGetURL->iNative;
	pFnGetURL->iNative = 0;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURL, &GetURL_Parms, nullptr);

	pFnGetURL->FunctionFlags |= 0x400;

	pFnGetURL->iNative = NativeIndex;

	return GetURL_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContentLength
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UHttpRequestCurl::GetContentLength()
{
	static UFunction* pFnGetContentLength = nullptr;

	if (!pFnGetContentLength)
	{
		pFnGetContentLength = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetContentLength");

	}

	UHttpRequestCurl_execGetContentLength_Parms GetContentLength_Parms;

	unsigned short NativeIndex = pFnGetContentLength->iNative;
	pFnGetContentLength->iNative = 0;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentLength, &GetContentLength_Parms, nullptr);

	pFnGetContentLength->FunctionFlags |= 0x400;

	pFnGetContentLength->iNative = NativeIndex;

	return GetContentLength_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContentType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetContentType()
{
	static UFunction* pFnGetContentType = nullptr;

	if (!pFnGetContentType)
	{
		pFnGetContentType = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetContentType");

	}

	UHttpRequestCurl_execGetContentType_Parms GetContentType_Parms;

	unsigned short NativeIndex = pFnGetContentType->iNative;
	pFnGetContentType->iNative = 0;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentType, &GetContentType_Parms, nullptr);

	pFnGetContentType->FunctionFlags |= 0x400;

	pFnGetContentType->iNative = NativeIndex;

	return GetContentType_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetURLParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetURLParameter(struct FString ParameterName)
{
	static UFunction* pFnGetURLParameter = nullptr;

	if (!pFnGetURLParameter)
	{
		pFnGetURLParameter = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetURLParameter");

	}

	UHttpRequestCurl_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy_s(&GetURLParameter_Parms.ParameterName, 0x10, &ParameterName, 0x10);

	unsigned short NativeIndex = pFnGetURLParameter->iNative;
	pFnGetURLParameter->iNative = 0;

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURLParameter, &GetURLParameter_Parms, nullptr);

	pFnGetURLParameter->FunctionFlags |= 0x400;

	pFnGetURLParameter->iNative = NativeIndex;

	return GetURLParameter_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetHeaders
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FString> UHttpRequestCurl::GetHeaders()
{
	static UFunction* pFnGetHeaders = nullptr;

	if (!pFnGetHeaders)
	{
		pFnGetHeaders = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetHeaders");

	}

	UHttpRequestCurl_execGetHeaders_Parms GetHeaders_Parms;

	unsigned short NativeIndex = pFnGetHeaders->iNative;
	pFnGetHeaders->iNative = 0;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeaders, &GetHeaders_Parms, nullptr);

	pFnGetHeaders->FunctionFlags |= 0x400;

	pFnGetHeaders->iNative = NativeIndex;

	return GetHeaders_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpRequestCurl::GetHeader(struct FString HeaderName)
{
	static UFunction* pFnGetHeader = nullptr;

	if (!pFnGetHeader)
	{
		pFnGetHeader = UFunction::FindFunction("Function IpDrv.HttpRequestCurl.GetHeader");

	}

	UHttpRequestCurl_execGetHeader_Parms GetHeader_Parms;
	memcpy_s(&GetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);

	unsigned short NativeIndex = pFnGetHeader->iNative;
	pFnGetHeader->iNative = 0;

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeader, &GetHeader_Parms, nullptr);

	pFnGetHeader->FunctionFlags |= 0x400;

	pFnGetHeader->iNative = NativeIndex;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetResponseCode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UHttpResponseCurl::GetResponseCode()
{
	static UFunction* pFnGetResponseCode = nullptr;

	if (!pFnGetResponseCode)
	{
		pFnGetResponseCode = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetResponseCode");

	}

	UHttpResponseCurl_execGetResponseCode_Parms GetResponseCode_Parms;

	unsigned short NativeIndex = pFnGetResponseCode->iNative;
	pFnGetResponseCode->iNative = 0;

	pFnGetResponseCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResponseCode, &GetResponseCode_Parms, nullptr);

	pFnGetResponseCode->FunctionFlags |= 0x400;

	pFnGetResponseCode->iNative = NativeIndex;

	return GetResponseCode_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentAsString
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetContentAsString()
{
	static UFunction* pFnGetContentAsString = nullptr;

	if (!pFnGetContentAsString)
	{
		pFnGetContentAsString = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContentAsString");

	}

	UHttpResponseCurl_execGetContentAsString_Parms GetContentAsString_Parms;

	unsigned short NativeIndex = pFnGetContentAsString->iNative;
	pFnGetContentAsString->iNative = 0;

	pFnGetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentAsString, &GetContentAsString_Parms, nullptr);

	pFnGetContentAsString->FunctionFlags |= 0x400;

	pFnGetContentAsString->iNative = NativeIndex;

	return GetContentAsString_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<unsigned char>          Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpResponseCurl::GetContent(TArray<unsigned char>& Content)
{
	static UFunction* pFnGetContent = nullptr;

	if (!pFnGetContent)
	{
		pFnGetContent = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContent");

	}

	UHttpResponseCurl_execGetContent_Parms GetContent_Parms;

	unsigned short NativeIndex = pFnGetContent->iNative;
	pFnGetContent->iNative = 0;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContent, &GetContent_Parms, nullptr);

	pFnGetContent->FunctionFlags |= 0x400;

	pFnGetContent->iNative = NativeIndex;
	memcpy_s(&GetContent_Parms.Content, 0x10, &Content, 0x10);
};

// Function IpDrv.HttpResponseCurl.GetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetURL()
{
	static UFunction* pFnGetURL = nullptr;

	if (!pFnGetURL)
	{
		pFnGetURL = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetURL");

	}

	UHttpResponseCurl_execGetURL_Parms GetURL_Parms;

	unsigned short NativeIndex = pFnGetURL->iNative;
	pFnGetURL->iNative = 0;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURL, &GetURL_Parms, nullptr);

	pFnGetURL->FunctionFlags |= 0x400;

	pFnGetURL->iNative = NativeIndex;

	return GetURL_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentLength
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UHttpResponseCurl::GetContentLength()
{
	static UFunction* pFnGetContentLength = nullptr;

	if (!pFnGetContentLength)
	{
		pFnGetContentLength = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContentLength");

	}

	UHttpResponseCurl_execGetContentLength_Parms GetContentLength_Parms;

	unsigned short NativeIndex = pFnGetContentLength->iNative;
	pFnGetContentLength->iNative = 0;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentLength, &GetContentLength_Parms, nullptr);

	pFnGetContentLength->FunctionFlags |= 0x400;

	pFnGetContentLength->iNative = NativeIndex;

	return GetContentLength_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetContentType()
{
	static UFunction* pFnGetContentType = nullptr;

	if (!pFnGetContentType)
	{
		pFnGetContentType = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetContentType");

	}

	UHttpResponseCurl_execGetContentType_Parms GetContentType_Parms;

	unsigned short NativeIndex = pFnGetContentType->iNative;
	pFnGetContentType->iNative = 0;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentType, &GetContentType_Parms, nullptr);

	pFnGetContentType->FunctionFlags |= 0x400;

	pFnGetContentType->iNative = NativeIndex;

	return GetContentType_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetURLParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetURLParameter(struct FString ParameterName)
{
	static UFunction* pFnGetURLParameter = nullptr;

	if (!pFnGetURLParameter)
	{
		pFnGetURLParameter = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetURLParameter");

	}

	UHttpResponseCurl_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy_s(&GetURLParameter_Parms.ParameterName, 0x10, &ParameterName, 0x10);

	unsigned short NativeIndex = pFnGetURLParameter->iNative;
	pFnGetURLParameter->iNative = 0;

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURLParameter, &GetURLParameter_Parms, nullptr);

	pFnGetURLParameter->FunctionFlags |= 0x400;

	pFnGetURLParameter->iNative = NativeIndex;

	return GetURLParameter_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetHeaders
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FString> UHttpResponseCurl::GetHeaders()
{
	static UFunction* pFnGetHeaders = nullptr;

	if (!pFnGetHeaders)
	{
		pFnGetHeaders = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetHeaders");

	}

	UHttpResponseCurl_execGetHeaders_Parms GetHeaders_Parms;

	unsigned short NativeIndex = pFnGetHeaders->iNative;
	pFnGetHeaders->iNative = 0;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeaders, &GetHeaders_Parms, nullptr);

	pFnGetHeaders->FunctionFlags |= 0x400;

	pFnGetHeaders->iNative = NativeIndex;

	return GetHeaders_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpResponseCurl::GetHeader(struct FString HeaderName)
{
	static UFunction* pFnGetHeader = nullptr;

	if (!pFnGetHeader)
	{
		pFnGetHeader = UFunction::FindFunction("Function IpDrv.HttpResponseCurl.GetHeader");

	}

	UHttpResponseCurl_execGetHeader_Parms GetHeader_Parms;
	memcpy_s(&GetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);

	unsigned short NativeIndex = pFnGetHeader->iNative;
	pFnGetHeader->iNative = 0;

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeader, &GetHeader_Parms, nullptr);

	pFnGetHeader->FunctionFlags |= 0x400;

	pFnGetHeader->iNative = NativeIndex;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.ImageDecoder.RequestDecodeImage
// [0x00430401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequestURL                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  ImageType                      (CPF_Parm)
// struct FScriptDelegate         FinishedCallback               (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          ImageData                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UImageDecoder::RequestDecodeImage(struct FString RequestURL, unsigned char ImageType, struct FScriptDelegate FinishedCallback, TArray<unsigned char>& ImageData)
{
	static UFunction* pFnRequestDecodeImage = nullptr;

	if (!pFnRequestDecodeImage)
	{
		pFnRequestDecodeImage = UFunction::FindFunction("Function IpDrv.ImageDecoder.RequestDecodeImage");

	}

	UImageDecoder_execRequestDecodeImage_Parms RequestDecodeImage_Parms;
	memcpy_s(&RequestDecodeImage_Parms.RequestURL, 0x10, &RequestURL, 0x10);
	RequestDecodeImage_Parms.ImageType = ImageType;
	memcpy_s(&RequestDecodeImage_Parms.FinishedCallback, 0x18, &FinishedCallback, 0x18);

	pFnRequestDecodeImage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestDecodeImage, &RequestDecodeImage_Parms, nullptr);

	pFnRequestDecodeImage->FunctionFlags |= 0x400;
	memcpy_s(&RequestDecodeImage_Parms.ImageData, 0x10, &ImageData, 0x10);
};

// Function IpDrv.ImageDecoder.ImageDecodedDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequestURL                     (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            Image                          (CPF_Parm | CPF_NeedCtorLink)

void UImageDecoder::ImageDecodedDelegate(struct FString RequestURL, struct FImageLayout Image)
{
	static UFunction* pFnImageDecodedDelegate = nullptr;

	if (!pFnImageDecodedDelegate)
	{
		pFnImageDecodedDelegate = UFunction::FindFunction("Function IpDrv.ImageDecoder.ImageDecodedDelegate");

	}

	UImageDecoder_execImageDecodedDelegate_Parms ImageDecodedDelegate_Parms;
	memcpy_s(&ImageDecodedDelegate_Parms.RequestURL, 0x10, &RequestURL, 0x10);
	memcpy_s(&ImageDecodedDelegate_Parms.Image, 0x18, &Image, 0x18);

	this->ProcessEvent(pFnImageDecodedDelegate, &ImageDecodedDelegate_Parms, nullptr);
};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AInternetLink::eventResolveFailed()
{
	static UFunction* pFnResolveFailed = nullptr;

	if (!pFnResolveFailed)
	{
		pFnResolveFailed = UFunction::FindFunction("Function IpDrv.InternetLink.ResolveFailed");

	}

	AInternetLink_eventResolveFailed_Parms ResolveFailed_Parms;

	this->ProcessEvent(pFnResolveFailed, &ResolveFailed_Parms, nullptr);
};

// Function IpDrv.InternetLink.Resolved
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FIpAddr                 Addr                           (CPF_Parm)

void AInternetLink::eventResolved(struct FIpAddr Addr)
{
	static UFunction* pFnResolved = nullptr;

	if (!pFnResolved)
	{
		pFnResolved = UFunction::FindFunction("Function IpDrv.InternetLink.Resolved");

	}

	AInternetLink_eventResolved_Parms Resolved_Parms;
	memcpy_s(&Resolved_Parms.Addr, 0x14, &Addr, 0x14);

	this->ProcessEvent(pFnResolved, &Resolved_Parms, nullptr);
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FIpAddr                 Arg                            (CPF_Parm | CPF_OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr& Arg)
{
	static UFunction* pFnGetLocalIP = nullptr;

	if (!pFnGetLocalIP)
	{
		pFnGetLocalIP = UFunction::FindFunction("Function IpDrv.InternetLink.GetLocalIP");

	}

	AInternetLink_execGetLocalIP_Parms GetLocalIP_Parms;

	pFnGetLocalIP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLocalIP, &GetLocalIP_Parms, nullptr);

	pFnGetLocalIP->FunctionFlags |= 0x400;
	memcpy_s(&GetLocalIP_Parms.Arg, 0x14, &Arg, 0x14);
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Str                            (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 Addr                           (CPF_Parm | CPF_OutParm)

bool AInternetLink::StringToIpAddr(struct FString Str, struct FIpAddr& Addr)
{
	static UFunction* pFnStringToIpAddr = nullptr;

	if (!pFnStringToIpAddr)
	{
		pFnStringToIpAddr = UFunction::FindFunction("Function IpDrv.InternetLink.StringToIpAddr");

	}

	AInternetLink_execStringToIpAddr_Parms StringToIpAddr_Parms;
	memcpy_s(&StringToIpAddr_Parms.Str, 0x10, &Str, 0x10);

	pFnStringToIpAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStringToIpAddr, &StringToIpAddr_Parms, nullptr);

	pFnStringToIpAddr->FunctionFlags |= 0x400;
	memcpy_s(&StringToIpAddr_Parms.Addr, 0x14, &Addr, 0x14);

	return StringToIpAddr_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FIpAddr                 Arg                            (CPF_Parm)

struct FString AInternetLink::IpAddrToString(struct FIpAddr Arg)
{
	static UFunction* pFnIpAddrToString = nullptr;

	if (!pFnIpAddrToString)
	{
		pFnIpAddrToString = UFunction::FindFunction("Function IpDrv.InternetLink.IpAddrToString");

	}

	AInternetLink_execIpAddrToString_Parms IpAddrToString_Parms;
	memcpy_s(&IpAddrToString_Parms.Arg, 0x14, &Arg, 0x14);

	pFnIpAddrToString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIpAddrToString, &IpAddrToString_Parms, nullptr);

	pFnIpAddrToString->FunctionFlags |= 0x400;

	return IpAddrToString_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int AInternetLink::GetLastError()
{
	static UFunction* pFnGetLastError = nullptr;

	if (!pFnGetLastError)
	{
		pFnGetLastError = UFunction::FindFunction("Function IpDrv.InternetLink.GetLastError");

	}

	AInternetLink_execGetLastError_Parms GetLastError_Parms;

	pFnGetLastError->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLastError, &GetLastError_Parms, nullptr);

	pFnGetLastError->FunctionFlags |= 0x400;

	return GetLastError_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Domain                         (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AInternetLink::Resolve(struct FString Domain)
{
	static UFunction* pFnResolve = nullptr;

	if (!pFnResolve)
	{
		pFnResolve = UFunction::FindFunction("Function IpDrv.InternetLink.Resolve");

	}

	AInternetLink_execResolve_Parms Resolve_Parms;
	memcpy_s(&Resolve_Parms.Domain, 0x10, &Domain, 0x10);

	pFnResolve->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnResolve, &Resolve_Parms, nullptr);

	pFnResolve->FunctionFlags |= 0x400;
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 Addr                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int                            PortNum                        (CPF_Parm | CPF_OutParm)
// struct FString                 LevelName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 EntryName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AInternetLink::ParseURL(struct FString URL, struct FString& Addr, int& PortNum, struct FString& LevelName, struct FString& EntryName)
{
	static UFunction* pFnParseURL = nullptr;

	if (!pFnParseURL)
	{
		pFnParseURL = UFunction::FindFunction("Function IpDrv.InternetLink.ParseURL");

	}

	AInternetLink_execParseURL_Parms ParseURL_Parms;
	memcpy_s(&ParseURL_Parms.URL, 0x10, &URL, 0x10);

	pFnParseURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParseURL, &ParseURL_Parms, nullptr);

	pFnParseURL->FunctionFlags |= 0x400;
	memcpy_s(&ParseURL_Parms.Addr, 0x10, &Addr, 0x10);
	memcpy_s(&ParseURL_Parms.PortNum, 0x4, &PortNum, 0x4);
	memcpy_s(&ParseURL_Parms.LevelName, 0x10, &LevelName, 0x10);
	memcpy_s(&ParseURL_Parms.EntryName, 0x10, &EntryName, 0x10);

	return ParseURL_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AInternetLink::IsDataPending()
{
	static UFunction* pFnIsDataPending = nullptr;

	if (!pFnIsDataPending)
	{
		pFnIsDataPending = UFunction::FindFunction("Function IpDrv.InternetLink.IsDataPending");

	}

	AInternetLink_execIsDataPending_Parms IsDataPending_Parms;

	pFnIsDataPending->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsDataPending, &IsDataPending_Parms, nullptr);

	pFnIsDataPending->FunctionFlags |= 0x400;

	return IsDataPending_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)

void ATcpLink::eventReceivedBinary(int Count, unsigned char B)
{
	static UFunction* pFnReceivedBinary = nullptr;

	if (!pFnReceivedBinary)
	{
		pFnReceivedBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedBinary");

	}

	ATcpLink_eventReceivedBinary_Parms ReceivedBinary_Parms;
	memcpy_s(&ReceivedBinary_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReceivedBinary_Parms.B, 0xFF, &B, 0xFF);

	this->ProcessEvent(pFnReceivedBinary, &ReceivedBinary_Parms, nullptr);
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Line                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedLine(struct FString Line)
{
	static UFunction* pFnReceivedLine = nullptr;

	if (!pFnReceivedLine)
	{
		pFnReceivedLine = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedLine");

	}

	ATcpLink_eventReceivedLine_Parms ReceivedLine_Parms;
	memcpy_s(&ReceivedLine_Parms.Line, 0x10, &Line, 0x10);

	this->ProcessEvent(pFnReceivedLine, &ReceivedLine_Parms, nullptr);
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Text                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedText(struct FString Text)
{
	static UFunction* pFnReceivedText = nullptr;

	if (!pFnReceivedText)
	{
		pFnReceivedText = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedText");

	}

	ATcpLink_eventReceivedText_Parms ReceivedText_Parms;
	memcpy_s(&ReceivedText_Parms.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(pFnReceivedText, &ReceivedText_Parms, nullptr);
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ATcpLink::eventClosed()
{
	static UFunction* pFnClosed = nullptr;

	if (!pFnClosed)
	{
		pFnClosed = UFunction::FindFunction("Function IpDrv.TcpLink.Closed");

	}

	ATcpLink_eventClosed_Parms Closed_Parms;

	this->ProcessEvent(pFnClosed, &Closed_Parms, nullptr);
};

// Function IpDrv.TcpLink.Opened
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ATcpLink::eventOpened()
{
	static UFunction* pFnOpened = nullptr;

	if (!pFnOpened)
	{
		pFnOpened = UFunction::FindFunction("Function IpDrv.TcpLink.Opened");

	}

	ATcpLink_eventOpened_Parms Opened_Parms;

	this->ProcessEvent(pFnOpened, &Opened_Parms, nullptr);
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ATcpLink::eventAccepted()
{
	static UFunction* pFnAccepted = nullptr;

	if (!pFnAccepted)
	{
		pFnAccepted = UFunction::FindFunction("Function IpDrv.TcpLink.Accepted");

	}

	ATcpLink_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent(pFnAccepted, &Accepted_Parms, nullptr);
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm | CPF_OutParm)

int ATcpLink::ReadBinary(int Count, unsigned char& B)
{
	static UFunction* pFnReadBinary = nullptr;

	if (!pFnReadBinary)
	{
		pFnReadBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReadBinary");

	}

	ATcpLink_execReadBinary_Parms ReadBinary_Parms;
	memcpy_s(&ReadBinary_Parms.Count, 0x4, &Count, 0x4);

	pFnReadBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadBinary, &ReadBinary_Parms, nullptr);

	pFnReadBinary->FunctionFlags |= 0x400;
	memcpy_s(&ReadBinary_Parms.B, 0xFF, &B, 0xFF);

	return ReadBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Str                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int ATcpLink::ReadText(struct FString& Str)
{
	static UFunction* pFnReadText = nullptr;

	if (!pFnReadText)
	{
		pFnReadText = UFunction::FindFunction("Function IpDrv.TcpLink.ReadText");

	}

	ATcpLink_execReadText_Parms ReadText_Parms;

	pFnReadText->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadText, &ReadText_Parms, nullptr);

	pFnReadText->FunctionFlags |= 0x400;
	memcpy_s(&ReadText_Parms.Str, 0x10, &Str, 0x10);

	return ReadText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)

int ATcpLink::SendBinary(int Count, unsigned char B)
{
	static UFunction* pFnSendBinary = nullptr;

	if (!pFnSendBinary)
	{
		pFnSendBinary = UFunction::FindFunction("Function IpDrv.TcpLink.SendBinary");

	}

	ATcpLink_execSendBinary_Parms SendBinary_Parms;
	memcpy_s(&SendBinary_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&SendBinary_Parms.B, 0xFF, &B, 0xFF);

	pFnSendBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendBinary, &SendBinary_Parms, nullptr);

	pFnSendBinary->FunctionFlags |= 0x400;

	return SendBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Str                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int ATcpLink::SendText(struct FString Str)
{
	static UFunction* pFnSendText = nullptr;

	if (!pFnSendText)
	{
		pFnSendText = UFunction::FindFunction("Function IpDrv.TcpLink.SendText");

	}

	ATcpLink_execSendText_Parms SendText_Parms;
	memcpy_s(&SendText_Parms.Str, 0x10, &Str, 0x10);

	pFnSendText->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendText, &SendText_Parms, nullptr);

	pFnSendText->FunctionFlags |= 0x400;

	return SendText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::IsConnected()
{
	static UFunction* pFnIsConnected = nullptr;

	if (!pFnIsConnected)
	{
		pFnIsConnected = UFunction::FindFunction("Function IpDrv.TcpLink.IsConnected");

	}

	ATcpLink_execIsConnected_Parms IsConnected_Parms;

	pFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsConnected, &IsConnected_Parms, nullptr);

	pFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Close()
{
	static UFunction* pFnClose = nullptr;

	if (!pFnClose)
	{
		pFnClose = UFunction::FindFunction("Function IpDrv.TcpLink.Close");

	}

	ATcpLink_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClose, &Close_Parms, nullptr);

	pFnClose->FunctionFlags |= 0x400;

	return Close_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 Addr                           (CPF_Parm)

bool ATcpLink::Open(struct FIpAddr Addr)
{
	static UFunction* pFnOpen = nullptr;

	if (!pFnOpen)
	{
		pFnOpen = UFunction::FindFunction("Function IpDrv.TcpLink.Open");

	}

	ATcpLink_execOpen_Parms Open_Parms;
	memcpy_s(&Open_Parms.Addr, 0x14, &Addr, 0x14);

	pFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOpen, &Open_Parms, nullptr);

	pFnOpen->FunctionFlags |= 0x400;

	return Open_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Listen()
{
	static UFunction* pFnListen = nullptr;

	if (!pFnListen)
	{
		pFnListen = UFunction::FindFunction("Function IpDrv.TcpLink.Listen");

	}

	ATcpLink_execListen_Parms Listen_Parms;

	pFnListen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnListen, &Listen_Parms, nullptr);

	pFnListen->FunctionFlags |= 0x400;

	return Listen_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PortNum                        (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bUseNextAvailable              (CPF_OptionalParm | CPF_Parm)

int ATcpLink::BindPort(int PortNum, unsigned long bUseNextAvailable)
{
	static UFunction* pFnBindPort = nullptr;

	if (!pFnBindPort)
	{
		pFnBindPort = UFunction::FindFunction("Function IpDrv.TcpLink.BindPort");

	}

	ATcpLink_execBindPort_Parms BindPort_Parms;
	memcpy_s(&BindPort_Parms.PortNum, 0x4, &PortNum, 0x4);
	BindPort_Parms.bUseNextAvailable = bUseNextAvailable;

	pFnBindPort->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBindPort, &BindPort_Parms, nullptr);

	pFnBindPort->FunctionFlags |= 0x400;

	return BindPort_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

struct FString UMcpServiceBase::GetUserAuthURL(struct FString McpId)
{
	static UFunction* pFnGetUserAuthURL = nullptr;

	if (!pFnGetUserAuthURL)
	{
		pFnGetUserAuthURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetUserAuthURL");

	}

	UMcpServiceBase_execGetUserAuthURL_Parms GetUserAuthURL_Parms;
	memcpy_s(&GetUserAuthURL_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnGetUserAuthURL, &GetUserAuthURL_Parms, nullptr);

	return GetUserAuthURL_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UMcpServiceBase::GetAppAccessURL()
{
	static UFunction* pFnGetAppAccessURL = nullptr;

	if (!pFnGetAppAccessURL)
	{
		pFnGetAppAccessURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetAppAccessURL");

	}

	UMcpServiceBase_execGetAppAccessURL_Parms GetAppAccessURL_Parms;

	this->ProcessEvent(pFnGetAppAccessURL, &GetAppAccessURL_Parms, nullptr);

	return GetAppAccessURL_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UMcpServiceBase::GetBaseURL()
{
	static UFunction* pFnGetBaseURL = nullptr;

	if (!pFnGetBaseURL)
	{
		pFnGetBaseURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetBaseURL");

	}

	UMcpServiceBase_execGetBaseURL_Parms GetBaseURL_Parms;

	this->ProcessEvent(pFnGetBaseURL, &GetBaseURL_Parms, nullptr);

	return GetBaseURL_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpServiceBase::eventInit()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function IpDrv.McpServiceBase.Init");

	}

	UMcpServiceBase_eventInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineMatchmakingStats* MMStats                        (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static UFunction* pFnUploadMatchmakingStats = nullptr;

	if (!pFnUploadMatchmakingStats)
	{
		pFnUploadMatchmakingStats = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");

	}

	UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Parms UploadMatchmakingStats_Parms;
	memcpy_s(&UploadMatchmakingStats_Parms.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&UploadMatchmakingStats_Parms.MMStats, 0x8, &MMStats, 0x8);

	pFnUploadMatchmakingStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUploadMatchmakingStats, &UploadMatchmakingStats_Parms, nullptr);

	pFnUploadMatchmakingStats->FunctionFlags |= 0x400;

	return UploadMatchmakingStats_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)
// int                            NumPlayers                     (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int PlaylistId, int NumPlayers)
{
	static UFunction* pFnUpdatePlaylistPopulation = nullptr;

	if (!pFnUpdatePlaylistPopulation)
	{
		pFnUpdatePlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");

	}

	UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Parms UpdatePlaylistPopulation_Parms;
	memcpy_s(&UpdatePlaylistPopulation_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&UpdatePlaylistPopulation_Parms.NumPlayers, 0x4, &NumPlayers, 0x4);

	pFnUpdatePlaylistPopulation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdatePlaylistPopulation, &UpdatePlaylistPopulation_Parms, nullptr);

	pFnUpdatePlaylistPopulation->FunctionFlags |= 0x400;

	return UpdatePlaylistPopulation_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(struct FUniqueNetId UniqueId, TArray<unsigned char>& Payload)
{
	static UFunction* pFnUploadGameplayEventsData = nullptr;

	if (!pFnUploadGameplayEventsData)
	{
		pFnUploadGameplayEventsData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");

	}

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms UploadGameplayEventsData_Parms;
	memcpy_s(&UploadGameplayEventsData_Parms.UniqueId, 0x48, &UniqueId, 0x48);

	pFnUploadGameplayEventsData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUploadGameplayEventsData, &UploadGameplayEventsData_Parms, nullptr);

	pFnUploadGameplayEventsData->FunctionFlags |= 0x400;
	memcpy_s(&UploadGameplayEventsData_Parms.Payload, 0x10, &Payload, 0x10);

	return UploadGameplayEventsData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 PlayerNick                     (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* pFnUploadPlayerData = nullptr;

	if (!pFnUploadPlayerData)
	{
		pFnUploadPlayerData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");

	}

	UOnlineEventsInterfaceMcp_execUploadPlayerData_Parms UploadPlayerData_Parms;
	memcpy_s(&UploadPlayerData_Parms.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&UploadPlayerData_Parms.PlayerNick, 0x10, &PlayerNick, 0x10);
	memcpy_s(&UploadPlayerData_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);
	memcpy_s(&UploadPlayerData_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);

	pFnUploadPlayerData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUploadPlayerData, &UploadPlayerData_Parms, nullptr);

	pFnUploadPlayerData->FunctionFlags |= 0x400;

	return UploadPlayerData_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  NewsType                       (CPF_Parm)

struct FString UOnlineNewsInterfaceMcp::GetNews(unsigned char LocalUserNum, unsigned char NewsType)
{
	static UFunction* pFnGetNews = nullptr;

	if (!pFnGetNews)
	{
		pFnGetNews = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.GetNews");

	}

	UOnlineNewsInterfaceMcp_execGetNews_Parms GetNews_Parms;
	GetNews_Parms.LocalUserNum = LocalUserNum;
	GetNews_Parms.NewsType = NewsType;

	this->ProcessEvent(pFnGetNews, &GetNews_Parms, nullptr);

	return GetNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadGameNewsDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(struct FScriptDelegate ReadGameNewsDelegate)
{
	static UFunction* pFnClearReadNewsCompletedDelegate = nullptr;

	if (!pFnClearReadNewsCompletedDelegate)
	{
		pFnClearReadNewsCompletedDelegate = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate");

	}

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms ClearReadNewsCompletedDelegate_Parms;
	memcpy_s(&ClearReadNewsCompletedDelegate_Parms.ReadGameNewsDelegate, 0x18, &ReadGameNewsDelegate, 0x18);

	this->ProcessEvent(pFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadNewsDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(struct FScriptDelegate ReadNewsDelegate)
{
	static UFunction* pFnAddReadNewsCompletedDelegate = nullptr;

	if (!pFnAddReadNewsCompletedDelegate)
	{
		pFnAddReadNewsCompletedDelegate = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate");

	}

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms AddReadNewsCompletedDelegate_Parms;
	memcpy_s(&AddReadNewsCompletedDelegate_Parms.ReadNewsDelegate, 0x18, &ReadNewsDelegate, 0x18);

	this->ProcessEvent(pFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// unsigned char                  NewsType                       (CPF_Parm)

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(unsigned long bWasSuccessful, unsigned char NewsType)
{
	static UFunction* pFnOnReadNewsCompleted = nullptr;

	if (!pFnOnReadNewsCompleted)
	{
		pFnOnReadNewsCompleted = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted");

	}

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms OnReadNewsCompleted_Parms;
	OnReadNewsCompleted_Parms.bWasSuccessful = bWasSuccessful;
	OnReadNewsCompleted_Parms.NewsType = NewsType;

	this->ProcessEvent(pFnOnReadNewsCompleted, &OnReadNewsCompleted_Parms, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  NewsType                       (CPF_Parm)

bool UOnlineNewsInterfaceMcp::ReadNews(unsigned char LocalUserNum, unsigned char NewsType)
{
	static UFunction* pFnReadNews = nullptr;

	if (!pFnReadNews)
	{
		pFnReadNews = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.ReadNews");

	}

	UOnlineNewsInterfaceMcp_execReadNews_Parms ReadNews_Parms;
	ReadNews_Parms.LocalUserNum = LocalUserNum;
	ReadNews_Parms.NewsType = NewsType;

	pFnReadNews->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadNews, &ReadNews_Parms, nullptr);

	pFnReadNews->FunctionFlags |= 0x400;

	return ReadNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UOnlineTitleFileDownloadBase::GetUrlForFile(struct FString Filename)
{
	static UFunction* pFnGetUrlForFile = nullptr;

	if (!pFnGetUrlForFile)
	{
		pFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile");

	}

	UOnlineTitleFileDownloadBase_execGetUrlForFile_Parms GetUrlForFile_Parms;
	memcpy_s(&GetUrlForFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetUrlForFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUrlForFile, &GetUrlForFile_Parms, nullptr);

	pFnGetUrlForFile->FunctionFlags |= 0x400;

	return GetUrlForFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate)
{
	static UFunction* pFnClearRequestTitleFileListCompleteDelegate = nullptr;

	if (!pFnClearRequestTitleFileListCompleteDelegate)
	{
		pFnClearRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate");

	}

	UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Parms ClearRequestTitleFileListCompleteDelegate_Parms;
	memcpy_s(&ClearRequestTitleFileListCompleteDelegate_Parms.RequestTitleFileListDelegate, 0x18, &RequestTitleFileListDelegate, 0x18);

	this->ProcessEvent(pFnClearRequestTitleFileListCompleteDelegate, &ClearRequestTitleFileListCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate)
{
	static UFunction* pFnAddRequestTitleFileListCompleteDelegate = nullptr;

	if (!pFnAddRequestTitleFileListCompleteDelegate)
	{
		pFnAddRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate");

	}

	UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Parms AddRequestTitleFileListCompleteDelegate_Parms;
	memcpy_s(&AddRequestTitleFileListCompleteDelegate_Parms.RequestTitleFileListDelegate, 0x18, &RequestTitleFileListDelegate, 0x18);

	this->ProcessEvent(pFnAddRequestTitleFileListCompleteDelegate, &AddRequestTitleFileListCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// TArray<struct FString>         ResultStr                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnRequestTitleFileListComplete(unsigned long bWasSuccessful, TArray<struct FString> ResultStr)
{
	static UFunction* pFnOnRequestTitleFileListComplete = nullptr;

	if (!pFnOnRequestTitleFileListComplete)
	{
		pFnOnRequestTitleFileListComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete");

	}

	UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Parms OnRequestTitleFileListComplete_Parms;
	OnRequestTitleFileListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRequestTitleFileListComplete_Parms.ResultStr, 0x10, &ResultStr, 0x10);

	this->ProcessEvent(pFnOnRequestTitleFileListComplete, &OnRequestTitleFileListComplete_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::RequestTitleFileList()
{
	static UFunction* pFnRequestTitleFileList = nullptr;

	if (!pFnRequestTitleFileList)
	{
		pFnRequestTitleFileList = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList");

	}

	UOnlineTitleFileDownloadBase_execRequestTitleFileList_Parms RequestTitleFileList_Parms;

	this->ProcessEvent(pFnRequestTitleFileList, &RequestTitleFileList_Parms, nullptr);

	return RequestTitleFileList_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFile(struct FString Filename)
{
	static UFunction* pFnClearDownloadedFile = nullptr;

	if (!pFnClearDownloadedFile)
	{
		pFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile");

	}

	UOnlineTitleFileDownloadBase_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy_s(&ClearDownloadedFile_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnClearDownloadedFile, &ClearDownloadedFile_Parms, nullptr);

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFiles()
{
	static UFunction* pFnClearDownloadedFiles = nullptr;

	if (!pFnClearDownloadedFiles)
	{
		pFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles");

	}

	UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	this->ProcessEvent(pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, nullptr);

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

unsigned char UOnlineTitleFileDownloadBase::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = nullptr;

	if (!pFnGetTitleFileState)
	{
		pFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState");

	}

	UOnlineTitleFileDownloadBase_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy_s(&GetTitleFileState_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, nullptr);

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::GetTitleFileContents(struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetTitleFileContents = nullptr;

	if (!pFnGetTitleFileContents)
	{
		pFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents");

	}

	UOnlineTitleFileDownloadBase_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy_s(&GetTitleFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, nullptr);
	memcpy_s(&GetTitleFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!pFnClearReadTitleFileCompleteDelegate)
	{
		pFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate");

	}

	UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!pFnAddReadTitleFileCompleteDelegate)
	{
		pFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate");

	}

	UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy_s(&AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 FileToRead                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  FileType                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineTitleFileDownloadBase::ReadTitleFile(struct FString FileToRead, unsigned char FileType)
{
	static UFunction* pFnReadTitleFile = nullptr;

	if (!pFnReadTitleFile)
	{
		pFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile");

	}

	UOnlineTitleFileDownloadBase_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy_s(&ReadTitleFile_Parms.FileToRead, 0x10, &FileToRead, 0x10);
	ReadTitleFile_Parms.FileType = FileType;

	this->ProcessEvent(pFnReadTitleFile, &ReadTitleFile_Parms, nullptr);

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadTitleFileComplete = nullptr;

	if (!pFnOnReadTitleFileComplete)
	{
		pFnOnReadTitleFileComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete");

	}

	UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(struct FString Filename)
{
	static UFunction* pFnClearDownloadedFile = nullptr;

	if (!pFnClearDownloadedFile)
	{
		pFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile");

	}

	UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy_s(&ClearDownloadedFile_Parms.Filename, 0x10, &Filename, 0x10);

	unsigned short NativeIndex = pFnClearDownloadedFile->iNative;
	pFnClearDownloadedFile->iNative = 0;

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFile, &ClearDownloadedFile_Parms, nullptr);

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	pFnClearDownloadedFile->iNative = NativeIndex;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static UFunction* pFnClearDownloadedFiles = nullptr;

	if (!pFnClearDownloadedFiles)
	{
		pFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles");

	}

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	unsigned short NativeIndex = pFnClearDownloadedFiles->iNative;
	pFnClearDownloadedFiles->iNative = 0;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, nullptr);

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	pFnClearDownloadedFiles->iNative = NativeIndex;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

unsigned char UOnlineTitleFileDownloadMcp::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = nullptr;

	if (!pFnGetTitleFileState)
	{
		pFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState");

	}

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy_s(&GetTitleFileState_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, nullptr);

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents(struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetTitleFileContents = nullptr;

	if (!pFnGetTitleFileContents)
	{
		pFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents");

	}

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy_s(&GetTitleFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	unsigned short NativeIndex = pFnGetTitleFileContents->iNative;
	pFnGetTitleFileContents->iNative = 0;

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, nullptr);

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	pFnGetTitleFileContents->iNative = NativeIndex;
	memcpy_s(&GetTitleFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 FileToRead                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  FileType                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineTitleFileDownloadMcp::ReadTitleFile(struct FString FileToRead, unsigned char FileType)
{
	static UFunction* pFnReadTitleFile = nullptr;

	if (!pFnReadTitleFile)
	{
		pFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile");

	}

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy_s(&ReadTitleFile_Parms.FileToRead, 0x10, &FileToRead, 0x10);
	ReadTitleFile_Parms.FileType = FileType;

	unsigned short NativeIndex = pFnReadTitleFile->iNative;
	pFnReadTitleFile->iNative = 0;

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadTitleFile, &ReadTitleFile_Parms, nullptr);

	pFnReadTitleFile->FunctionFlags |= 0x400;

	pFnReadTitleFile->iNative = NativeIndex;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UOnlineTitleFileDownloadWeb::GetUrlForFile(struct FString Filename)
{
	static UFunction* pFnGetUrlForFile = nullptr;

	if (!pFnGetUrlForFile)
	{
		pFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile");

	}

	UOnlineTitleFileDownloadWeb_execGetUrlForFile_Parms GetUrlForFile_Parms;
	memcpy_s(&GetUrlForFile_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetUrlForFile, &GetUrlForFile_Parms, nullptr);

	return GetUrlForFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnOnFileListReceived = nullptr;

	if (!pFnOnFileListReceived)
	{
		pFnOnFileListReceived = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived");

	}

	UOnlineTitleFileDownloadWeb_execOnFileListReceived_Parms OnFileListReceived_Parms;
	memcpy_s(&OnFileListReceived_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnFileListReceived_Parms.Response, 0x8, &Response, 0x8);
	OnFileListReceived_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnOnFileListReceived, &OnFileListReceived_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::RequestTitleFileList()
{
	static UFunction* pFnRequestTitleFileList = nullptr;

	if (!pFnRequestTitleFileList)
	{
		pFnRequestTitleFileList = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList");

	}

	UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Parms RequestTitleFileList_Parms;

	this->ProcessEvent(pFnRequestTitleFileList, &RequestTitleFileList_Parms, nullptr);

	return RequestTitleFileList_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFile(struct FString Filename)
{
	static UFunction* pFnClearDownloadedFile = nullptr;

	if (!pFnClearDownloadedFile)
	{
		pFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile");

	}

	UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy_s(&ClearDownloadedFile_Parms.Filename, 0x10, &Filename, 0x10);

	unsigned short NativeIndex = pFnClearDownloadedFile->iNative;
	pFnClearDownloadedFile->iNative = 0;

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFile, &ClearDownloadedFile_Parms, nullptr);

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	pFnClearDownloadedFile->iNative = NativeIndex;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFiles()
{
	static UFunction* pFnClearDownloadedFiles = nullptr;

	if (!pFnClearDownloadedFiles)
	{
		pFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles");

	}

	UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	unsigned short NativeIndex = pFnClearDownloadedFiles->iNative;
	pFnClearDownloadedFiles->iNative = 0;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, nullptr);

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	pFnClearDownloadedFiles->iNative = NativeIndex;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

unsigned char UOnlineTitleFileDownloadWeb::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = nullptr;

	if (!pFnGetTitleFileState)
	{
		pFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState");

	}

	UOnlineTitleFileDownloadWeb_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy_s(&GetTitleFileState_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, nullptr);

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::GetTitleFileContents(struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetTitleFileContents = nullptr;

	if (!pFnGetTitleFileContents)
	{
		pFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents");

	}

	UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy_s(&GetTitleFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	unsigned short NativeIndex = pFnGetTitleFileContents->iNative;
	pFnGetTitleFileContents->iNative = 0;

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, nullptr);

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	pFnGetTitleFileContents->iNative = NativeIndex;
	memcpy_s(&GetTitleFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FString                 FileRead                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadWeb::TriggerDelegates(unsigned long bSuccess, struct FString FileRead)
{
	static UFunction* pFnTriggerDelegates = nullptr;

	if (!pFnTriggerDelegates)
	{
		pFnTriggerDelegates = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates");

	}

	UOnlineTitleFileDownloadWeb_execTriggerDelegates_Parms TriggerDelegates_Parms;
	TriggerDelegates_Parms.bSuccess = bSuccess;
	memcpy_s(&TriggerDelegates_Parms.FileRead, 0x10, &FileRead, 0x10);

	pFnTriggerDelegates->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTriggerDelegates, &TriggerDelegates_Parms, nullptr);

	pFnTriggerDelegates->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnOnFileDownloadComplete = nullptr;

	if (!pFnOnFileDownloadComplete)
	{
		pFnOnFileDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete");

	}

	UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Parms OnFileDownloadComplete_Parms;
	memcpy_s(&OnFileDownloadComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnFileDownloadComplete_Parms.Response, 0x8, &Response, 0x8);
	OnFileDownloadComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnOnFileDownloadComplete, &OnFileDownloadComplete_Parms, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 FileToRead                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  FileType                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineTitleFileDownloadWeb::ReadTitleFile(struct FString FileToRead, unsigned char FileType)
{
	static UFunction* pFnReadTitleFile = nullptr;

	if (!pFnReadTitleFile)
	{
		pFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile");

	}

	UOnlineTitleFileDownloadWeb_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy_s(&ReadTitleFile_Parms.FileToRead, 0x10, &FileToRead, 0x10);
	ReadTitleFile_Parms.FileType = FileType;

	this->ProcessEvent(pFnReadTitleFile, &ReadTitleFile_Parms, nullptr);

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  FileCompressionType            (CPF_Parm)
// TArray<unsigned char>          CompressedFileContents         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          UncompressedFileContents       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::UncompressTitleFileContents(unsigned char FileCompressionType, TArray<unsigned char>& CompressedFileContents, TArray<unsigned char>& UncompressedFileContents)
{
	static UFunction* pFnUncompressTitleFileContents = nullptr;

	if (!pFnUncompressTitleFileContents)
	{
		pFnUncompressTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents");

	}

	UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Parms UncompressTitleFileContents_Parms;
	UncompressTitleFileContents_Parms.FileCompressionType = FileCompressionType;

	pFnUncompressTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUncompressTitleFileContents, &UncompressTitleFileContents_Parms, nullptr);

	pFnUncompressTitleFileContents->FunctionFlags |= 0x400;
	memcpy_s(&UncompressTitleFileContents_Parms.CompressedFileContents, 0x10, &CompressedFileContents, 0x10);
	memcpy_s(&UncompressTitleFileContents_Parms.UncompressedFileContents, 0x10, &UncompressedFileContents, 0x10);

	return UncompressTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::DeleteTitleFile(struct FString Filename)
{
	static UFunction* pFnDeleteTitleFile = nullptr;

	if (!pFnDeleteTitleFile)
	{
		pFnDeleteTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFile");

	}

	UTitleFileDownloadCache_execDeleteTitleFile_Parms DeleteTitleFile_Parms;
	memcpy_s(&DeleteTitleFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnDeleteTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteTitleFile, &DeleteTitleFile_Parms, nullptr);

	pFnDeleteTitleFile->FunctionFlags |= 0x400;

	return DeleteTitleFile_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxAgeSeconds                  (CPF_Parm)

bool UTitleFileDownloadCache::DeleteTitleFiles(float MaxAgeSeconds)
{
	static UFunction* pFnDeleteTitleFiles = nullptr;

	if (!pFnDeleteTitleFiles)
	{
		pFnDeleteTitleFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles");

	}

	UTitleFileDownloadCache_execDeleteTitleFiles_Parms DeleteTitleFiles_Parms;
	memcpy_s(&DeleteTitleFiles_Parms.MaxAgeSeconds, 0x4, &MaxAgeSeconds, 0x4);

	pFnDeleteTitleFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteTitleFiles, &DeleteTitleFiles_Parms, nullptr);

	pFnDeleteTitleFiles->FunctionFlags |= 0x400;

	return DeleteTitleFiles_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::ClearCachedFile(struct FString Filename)
{
	static UFunction* pFnClearCachedFile = nullptr;

	if (!pFnClearCachedFile)
	{
		pFnClearCachedFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFile");

	}

	UTitleFileDownloadCache_execClearCachedFile_Parms ClearCachedFile_Parms;
	memcpy_s(&ClearCachedFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnClearCachedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearCachedFile, &ClearCachedFile_Parms, nullptr);

	pFnClearCachedFile->FunctionFlags |= 0x400;

	return ClearCachedFile_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFiles()
{
	static UFunction* pFnClearCachedFiles = nullptr;

	if (!pFnClearCachedFiles)
	{
		pFnClearCachedFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFiles");

	}

	UTitleFileDownloadCache_execClearCachedFiles_Parms ClearCachedFiles_Parms;

	pFnClearCachedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearCachedFiles, &ClearCachedFiles_Parms, nullptr);

	pFnClearCachedFiles->FunctionFlags |= 0x400;

	return ClearCachedFiles_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UTitleFileDownloadCache::GetTitleFileLogicalName(struct FString Filename)
{
	static UFunction* pFnGetTitleFileLogicalName = nullptr;

	if (!pFnGetTitleFileLogicalName)
	{
		pFnGetTitleFileLogicalName = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName");

	}

	UTitleFileDownloadCache_execGetTitleFileLogicalName_Parms GetTitleFileLogicalName_Parms;
	memcpy_s(&GetTitleFileLogicalName_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetTitleFileLogicalName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileLogicalName, &GetTitleFileLogicalName_Parms, nullptr);

	pFnGetTitleFileLogicalName->FunctionFlags |= 0x400;

	return GetTitleFileLogicalName_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UTitleFileDownloadCache::GetTitleFileHash(struct FString Filename)
{
	static UFunction* pFnGetTitleFileHash = nullptr;

	if (!pFnGetTitleFileHash)
	{
		pFnGetTitleFileHash = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileHash");

	}

	UTitleFileDownloadCache_execGetTitleFileHash_Parms GetTitleFileHash_Parms;
	memcpy_s(&GetTitleFileHash_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetTitleFileHash->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileHash, &GetTitleFileHash_Parms, nullptr);

	pFnGetTitleFileHash->FunctionFlags |= 0x400;

	return GetTitleFileHash_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

unsigned char UTitleFileDownloadCache::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = nullptr;

	if (!pFnGetTitleFileState)
	{
		pFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileState");

	}

	UTitleFileDownloadCache_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy_s(&GetTitleFileState_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetTitleFileState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, nullptr);

	pFnGetTitleFileState->FunctionFlags |= 0x400;

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::GetTitleFileContents(struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetTitleFileContents = nullptr;

	if (!pFnGetTitleFileContents)
	{
		pFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileContents");

	}

	UTitleFileDownloadCache_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy_s(&GetTitleFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, nullptr);

	pFnGetTitleFileContents->FunctionFlags |= 0x400;
	memcpy_s(&GetTitleFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate)
{
	static UFunction* pFnClearSaveTitleFileCompleteDelegate = nullptr;

	if (!pFnClearSaveTitleFileCompleteDelegate)
	{
		pFnClearSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate");

	}

	UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Parms ClearSaveTitleFileCompleteDelegate_Parms;
	memcpy_s(&ClearSaveTitleFileCompleteDelegate_Parms.SaveCompleteDelegate, 0x18, &SaveCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearSaveTitleFileCompleteDelegate, &ClearSaveTitleFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate)
{
	static UFunction* pFnAddSaveTitleFileCompleteDelegate = nullptr;

	if (!pFnAddSaveTitleFileCompleteDelegate)
	{
		pFnAddSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate");

	}

	UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Parms AddSaveTitleFileCompleteDelegate_Parms;
	memcpy_s(&AddSaveTitleFileCompleteDelegate_Parms.SaveCompleteDelegate, 0x18, &SaveCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddSaveTitleFileCompleteDelegate, &AddSaveTitleFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnSaveTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnSaveTitleFileComplete = nullptr;

	if (!pFnOnSaveTitleFileComplete)
	{
		pFnOnSaveTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete");

	}

	UTitleFileDownloadCache_execOnSaveTitleFileComplete_Parms OnSaveTitleFileComplete_Parms;
	OnSaveTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnSaveTitleFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnSaveTitleFileComplete, &OnSaveTitleFileComplete_Parms, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 LogicalName                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::SaveTitleFile(struct FString Filename, struct FString LogicalName, TArray<unsigned char> FileContents)
{
	static UFunction* pFnSaveTitleFile = nullptr;

	if (!pFnSaveTitleFile)
	{
		pFnSaveTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.SaveTitleFile");

	}

	UTitleFileDownloadCache_execSaveTitleFile_Parms SaveTitleFile_Parms;
	memcpy_s(&SaveTitleFile_Parms.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&SaveTitleFile_Parms.LogicalName, 0x10, &LogicalName, 0x10);
	memcpy_s(&SaveTitleFile_Parms.FileContents, 0x10, &FileContents, 0x10);

	pFnSaveTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSaveTitleFile, &SaveTitleFile_Parms, nullptr);

	pFnSaveTitleFile->FunctionFlags |= 0x400;

	return SaveTitleFile_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate)
{
	static UFunction* pFnClearLoadTitleFileCompleteDelegate = nullptr;

	if (!pFnClearLoadTitleFileCompleteDelegate)
	{
		pFnClearLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate");

	}

	UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Parms ClearLoadTitleFileCompleteDelegate_Parms;
	memcpy_s(&ClearLoadTitleFileCompleteDelegate_Parms.LoadCompleteDelegate, 0x18, &LoadCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearLoadTitleFileCompleteDelegate, &ClearLoadTitleFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate)
{
	static UFunction* pFnAddLoadTitleFileCompleteDelegate = nullptr;

	if (!pFnAddLoadTitleFileCompleteDelegate)
	{
		pFnAddLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate");

	}

	UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Parms AddLoadTitleFileCompleteDelegate_Parms;
	memcpy_s(&AddLoadTitleFileCompleteDelegate_Parms.LoadCompleteDelegate, 0x18, &LoadCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddLoadTitleFileCompleteDelegate, &AddLoadTitleFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnLoadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnLoadTitleFileComplete = nullptr;

	if (!pFnOnLoadTitleFileComplete)
	{
		pFnOnLoadTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete");

	}

	UTitleFileDownloadCache_execOnLoadTitleFileComplete_Parms OnLoadTitleFileComplete_Parms;
	OnLoadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadTitleFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnLoadTitleFileComplete, &OnLoadTitleFileComplete_Parms, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::LoadTitleFile(struct FString Filename)
{
	static UFunction* pFnLoadTitleFile = nullptr;

	if (!pFnLoadTitleFile)
	{
		pFnLoadTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.LoadTitleFile");

	}

	UTitleFileDownloadCache_execLoadTitleFile_Parms LoadTitleFile_Parms;
	memcpy_s(&LoadTitleFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnLoadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoadTitleFile, &LoadTitleFile_Parms, nullptr);

	pFnLoadTitleFile->FunctionFlags |= 0x400;

	return LoadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageBase::CacheMessageContents(struct FString MessageId, TArray<unsigned char>& MessageContents)
{
	static UFunction* pFnCacheMessageContents = nullptr;

	if (!pFnCacheMessageContents)
	{
		pFnCacheMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.CacheMessageContents");

	}

	UMcpMessageBase_execCacheMessageContents_Parms CacheMessageContents_Parms;
	memcpy_s(&CacheMessageContents_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnCacheMessageContents, &CacheMessageContents_Parms, nullptr);
	memcpy_s(&CacheMessageContents_Parms.MessageContents, 0x10, &MessageContents, 0x10);

	return CacheMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::CacheMessage(struct FMcpMessage Message)
{
	static UFunction* pFnCacheMessage = nullptr;

	if (!pFnCacheMessage)
	{
		pFnCacheMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.CacheMessage");

	}

	UMcpMessageBase_execCacheMessage_Parms CacheMessage_Parms;
	memcpy_s(&CacheMessage_Parms.Message, 0x68, &Message, 0x68);

	this->ProcessEvent(pFnCacheMessage, &CacheMessage_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageBase::GetMessageContents(struct FString MessageId, TArray<unsigned char>& MessageContents)
{
	static UFunction* pFnGetMessageContents = nullptr;

	if (!pFnGetMessageContents)
	{
		pFnGetMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.GetMessageContents");

	}

	UMcpMessageBase_execGetMessageContents_Parms GetMessageContents_Parms;
	memcpy_s(&GetMessageContents_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnGetMessageContents, &GetMessageContents_Parms, nullptr);
	memcpy_s(&GetMessageContents_Parms.MessageContents, 0x10, &MessageContents, 0x10);

	return GetMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessageContentsComplete(struct FString MessageId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryMessageContentsComplete = nullptr;

	if (!pFnOnQueryMessageContentsComplete)
	{
		pFnOnQueryMessageContentsComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete");

	}

	UMcpMessageBase_execOnQueryMessageContentsComplete_Parms OnQueryMessageContentsComplete_Parms;
	memcpy_s(&OnQueryMessageContentsComplete_Parms.MessageId, 0x10, &MessageId, 0x10);
	OnQueryMessageContentsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMessageContentsComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryMessageContentsComplete, &OnQueryMessageContentsComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessageContents(struct FString MessageId)
{
	static UFunction* pFnQueryMessageContents = nullptr;

	if (!pFnQueryMessageContents)
	{
		pFnQueryMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.QueryMessageContents");

	}

	UMcpMessageBase_execQueryMessageContents_Parms QueryMessageContents_Parms;
	memcpy_s(&QueryMessageContents_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnQueryMessageContents, &QueryMessageContents_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageBase::GetMessageList(struct FString ToUniqueUserId, struct FMcpMessageList& MessageList)
{
	static UFunction* pFnGetMessageList = nullptr;

	if (!pFnGetMessageList)
	{
		pFnGetMessageList = UFunction::FindFunction("Function IpDrv.McpMessageBase.GetMessageList");

	}

	UMcpMessageBase_execGetMessageList_Parms GetMessageList_Parms;
	memcpy_s(&GetMessageList_Parms.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);

	this->ProcessEvent(pFnGetMessageList, &GetMessageList_Parms, nullptr);
	memcpy_s(&GetMessageList_Parms.MessageList, 0x20, &MessageList, 0x20);
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessagesComplete(struct FString UserId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryMessagesComplete = nullptr;

	if (!pFnOnQueryMessagesComplete)
	{
		pFnOnQueryMessagesComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnQueryMessagesComplete");

	}

	UMcpMessageBase_execOnQueryMessagesComplete_Parms OnQueryMessagesComplete_Parms;
	memcpy_s(&OnQueryMessagesComplete_Parms.UserId, 0x10, &UserId, 0x10);
	OnQueryMessagesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMessagesComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryMessagesComplete, &OnQueryMessagesComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessages(struct FString ToUniqueUserId)
{
	static UFunction* pFnQueryMessages = nullptr;

	if (!pFnQueryMessages)
	{
		pFnQueryMessages = UFunction::FindFunction("Function IpDrv.McpMessageBase.QueryMessages");

	}

	UMcpMessageBase_execQueryMessages_Parms QueryMessages_Parms;
	memcpy_s(&QueryMessages_Parms.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryMessages, &QueryMessages_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnDeleteMessageComplete(struct FString MessageId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteMessageComplete = nullptr;

	if (!pFnOnDeleteMessageComplete)
	{
		pFnOnDeleteMessageComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnDeleteMessageComplete");

	}

	UMcpMessageBase_execOnDeleteMessageComplete_Parms OnDeleteMessageComplete_Parms;
	memcpy_s(&OnDeleteMessageComplete_Parms.MessageId, 0x10, &MessageId, 0x10);
	OnDeleteMessageComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteMessageComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteMessageComplete, &OnDeleteMessageComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::DeleteMessage(struct FString MessageId)
{
	static UFunction* pFnDeleteMessage = nullptr;

	if (!pFnDeleteMessage)
	{
		pFnDeleteMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.DeleteMessage");

	}

	UMcpMessageBase_execDeleteMessage_Parms DeleteMessage_Parms;
	memcpy_s(&DeleteMessage_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnDeleteMessage, &DeleteMessage_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnCreateMessageComplete(struct FMcpMessage Message, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnCreateMessageComplete = nullptr;

	if (!pFnOnCreateMessageComplete)
	{
		pFnOnCreateMessageComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnCreateMessageComplete");

	}

	UMcpMessageBase_execOnCreateMessageComplete_Parms OnCreateMessageComplete_Parms;
	memcpy_s(&OnCreateMessageComplete_Parms.Message, 0x68, &Message, 0x68);
	OnCreateMessageComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateMessageComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnCreateMessageComplete, &OnCreateMessageComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 FromUniqueUserId               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 FromFriendlyName               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 MessageType                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 PushMessage                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ValidUntil                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         ToUniqueUserIds                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageBase::CreateMessage(struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString PushMessage, struct FString ValidUntil, TArray<struct FString>& ToUniqueUserIds, TArray<unsigned char>& MessageContents)
{
	static UFunction* pFnCreateMessage = nullptr;

	if (!pFnCreateMessage)
	{
		pFnCreateMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.CreateMessage");

	}

	UMcpMessageBase_execCreateMessage_Parms CreateMessage_Parms;
	memcpy_s(&CreateMessage_Parms.FromUniqueUserId, 0x10, &FromUniqueUserId, 0x10);
	memcpy_s(&CreateMessage_Parms.FromFriendlyName, 0x10, &FromFriendlyName, 0x10);
	memcpy_s(&CreateMessage_Parms.MessageType, 0x10, &MessageType, 0x10);
	memcpy_s(&CreateMessage_Parms.PushMessage, 0x10, &PushMessage, 0x10);
	memcpy_s(&CreateMessage_Parms.ValidUntil, 0x10, &ValidUntil, 0x10);

	this->ProcessEvent(pFnCreateMessage, &CreateMessage_Parms, nullptr);
	memcpy_s(&CreateMessage_Parms.ToUniqueUserIds, 0x10, &ToUniqueUserIds, 0x10);
	memcpy_s(&CreateMessage_Parms.MessageContents, 0x10, &MessageContents, 0x10);
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpMessageBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpMessageBase* UMcpMessageBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpMessageBase.CreateInstance");

	}

	UMcpMessageBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::CacheMessageContents(struct FString MessageId, TArray<unsigned char>& MessageContents)
{
	static UFunction* pFnCacheMessageContents = nullptr;

	if (!pFnCacheMessageContents)
	{
		pFnCacheMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.CacheMessageContents");

	}

	UMcpMessageManager_execCacheMessageContents_Parms CacheMessageContents_Parms;
	memcpy_s(&CacheMessageContents_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnCacheMessageContents, &CacheMessageContents_Parms, nullptr);
	memcpy_s(&CacheMessageContents_Parms.MessageContents, 0x10, &MessageContents, 0x10);

	return CacheMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessage             Message                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::GetMessageById(struct FString MessageId, struct FMcpMessage& Message)
{
	static UFunction* pFnGetMessageById = nullptr;

	if (!pFnGetMessageById)
	{
		pFnGetMessageById = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageById");

	}

	UMcpMessageManager_execGetMessageById_Parms GetMessageById_Parms;
	memcpy_s(&GetMessageById_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnGetMessageById, &GetMessageById_Parms, nullptr);
	memcpy_s(&GetMessageById_Parms.Message, 0x68, &Message, 0x68);

	return GetMessageById_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::CacheMessage(struct FMcpMessage Message)
{
	static UFunction* pFnCacheMessage = nullptr;

	if (!pFnCacheMessage)
	{
		pFnCacheMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.CacheMessage");

	}

	UMcpMessageManager_execCacheMessage_Parms CacheMessage_Parms;
	memcpy_s(&CacheMessage_Parms.Message, 0x68, &Message, 0x68);

	this->ProcessEvent(pFnCacheMessage, &CacheMessage_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::GetMessageContents(struct FString MessageId, TArray<unsigned char>& MessageContents)
{
	static UFunction* pFnGetMessageContents = nullptr;

	if (!pFnGetMessageContents)
	{
		pFnGetMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageContents");

	}

	UMcpMessageManager_execGetMessageContents_Parms GetMessageContents_Parms;
	memcpy_s(&GetMessageContents_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnGetMessageContents, &GetMessageContents_Parms, nullptr);
	memcpy_s(&GetMessageContents_Parms.MessageContents, 0x10, &MessageContents, 0x10);

	return GetMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryMessageContentsRequestComplete = nullptr;

	if (!pFnOnQueryMessageContentsRequestComplete)
	{
		pFnOnQueryMessageContentsRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete");

	}

	UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Parms OnQueryMessageContentsRequestComplete_Parms;
	memcpy_s(&OnQueryMessageContentsRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryMessageContentsRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryMessageContentsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryMessageContentsRequestComplete, &OnQueryMessageContentsRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessageContents(struct FString MessageId)
{
	static UFunction* pFnQueryMessageContents = nullptr;

	if (!pFnQueryMessageContents)
	{
		pFnQueryMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.QueryMessageContents");

	}

	UMcpMessageManager_execQueryMessageContents_Parms QueryMessageContents_Parms;
	memcpy_s(&QueryMessageContents_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnQueryMessageContents, &QueryMessageContents_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::GetMessageList(struct FString ToUniqueUserId, struct FMcpMessageList& MessageList)
{
	static UFunction* pFnGetMessageList = nullptr;

	if (!pFnGetMessageList)
	{
		pFnGetMessageList = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageList");

	}

	UMcpMessageManager_execGetMessageList_Parms GetMessageList_Parms;
	memcpy_s(&GetMessageList_Parms.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);

	this->ProcessEvent(pFnGetMessageList, &GetMessageList_Parms, nullptr);
	memcpy_s(&GetMessageList_Parms.MessageList, 0x20, &MessageList, 0x20);
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryMessagesRequestComplete = nullptr;

	if (!pFnOnQueryMessagesRequestComplete)
	{
		pFnOnQueryMessagesRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete");

	}

	UMcpMessageManager_execOnQueryMessagesRequestComplete_Parms OnQueryMessagesRequestComplete_Parms;
	memcpy_s(&OnQueryMessagesRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryMessagesRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryMessagesRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryMessagesRequestComplete, &OnQueryMessagesRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessages(struct FString ToUniqueUserId)
{
	static UFunction* pFnQueryMessages = nullptr;

	if (!pFnQueryMessages)
	{
		pFnQueryMessages = UFunction::FindFunction("Function IpDrv.McpMessageManager.QueryMessages");

	}

	UMcpMessageManager_execQueryMessages_Parms QueryMessages_Parms;
	memcpy_s(&QueryMessages_Parms.ToUniqueUserId, 0x10, &ToUniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryMessages, &QueryMessages_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteMessageRequestComplete = nullptr;

	if (!pFnOnDeleteMessageRequestComplete)
	{
		pFnOnDeleteMessageRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete");

	}

	UMcpMessageManager_execOnDeleteMessageRequestComplete_Parms OnDeleteMessageRequestComplete_Parms;
	memcpy_s(&OnDeleteMessageRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDeleteMessageRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnDeleteMessageRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteMessageRequestComplete, &OnDeleteMessageRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::DeleteMessage(struct FString MessageId)
{
	static UFunction* pFnDeleteMessage = nullptr;

	if (!pFnDeleteMessage)
	{
		pFnDeleteMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.DeleteMessage");

	}

	UMcpMessageManager_execDeleteMessage_Parms DeleteMessage_Parms;
	memcpy_s(&DeleteMessage_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnDeleteMessage, &DeleteMessage_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   CreateMessageRequest           (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCreateMessageRequestComplete = nullptr;

	if (!pFnOnCreateMessageRequestComplete)
	{
		pFnOnCreateMessageRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete");

	}

	UMcpMessageManager_execOnCreateMessageRequestComplete_Parms OnCreateMessageRequestComplete_Parms;
	memcpy_s(&OnCreateMessageRequestComplete_Parms.CreateMessageRequest, 0x8, &CreateMessageRequest, 0x8);
	memcpy_s(&OnCreateMessageRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnCreateMessageRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCreateMessageRequestComplete, &OnCreateMessageRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 FromUniqueUserId               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 FromFriendlyName               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 MessageType                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 PushMessage                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ValidUntil                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         ToUniqueUserIds                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::CreateMessage(struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString PushMessage, struct FString ValidUntil, TArray<struct FString>& ToUniqueUserIds, TArray<unsigned char>& MessageContents)
{
	static UFunction* pFnCreateMessage = nullptr;

	if (!pFnCreateMessage)
	{
		pFnCreateMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.CreateMessage");

	}

	UMcpMessageManager_execCreateMessage_Parms CreateMessage_Parms;
	memcpy_s(&CreateMessage_Parms.FromUniqueUserId, 0x10, &FromUniqueUserId, 0x10);
	memcpy_s(&CreateMessage_Parms.FromFriendlyName, 0x10, &FromFriendlyName, 0x10);
	memcpy_s(&CreateMessage_Parms.MessageType, 0x10, &MessageType, 0x10);
	memcpy_s(&CreateMessage_Parms.PushMessage, 0x10, &PushMessage, 0x10);
	memcpy_s(&CreateMessage_Parms.ValidUntil, 0x10, &ValidUntil, 0x10);

	this->ProcessEvent(pFnCreateMessage, &CreateMessage_Parms, nullptr);
	memcpy_s(&CreateMessage_Parms.ToUniqueUserIds, 0x10, &ToUniqueUserIds, 0x10);
	memcpy_s(&CreateMessage_Parms.MessageContents, 0x10, &MessageContents, 0x10);
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          UncompressedMessageContents    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::eventFinishedAsyncUncompression(unsigned long bWasSuccessful, struct FString MessageId, TArray<unsigned char>& UncompressedMessageContents)
{
	static UFunction* pFnFinishedAsyncUncompression = nullptr;

	if (!pFnFinishedAsyncUncompression)
	{
		pFnFinishedAsyncUncompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.FinishedAsyncUncompression");

	}

	UMcpMessageManager_eventFinishedAsyncUncompression_Parms FinishedAsyncUncompression_Parms;
	FinishedAsyncUncompression_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&FinishedAsyncUncompression_Parms.MessageId, 0x10, &MessageId, 0x10);

	this->ProcessEvent(pFnFinishedAsyncUncompression, &FinishedAsyncUncompression_Parms, nullptr);
	memcpy_s(&FinishedAsyncUncompression_Parms.UncompressedMessageContents, 0x10, &UncompressedMessageContents, 0x10);
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  MessageCompressionType         (CPF_Parm)
// TArray<unsigned char>          MessageContent                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::StartAsyncUncompression(struct FString MessageId, unsigned char MessageCompressionType, TArray<unsigned char>& MessageContent)
{
	static UFunction* pFnStartAsyncUncompression = nullptr;

	if (!pFnStartAsyncUncompression)
	{
		pFnStartAsyncUncompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.StartAsyncUncompression");

	}

	UMcpMessageManager_execStartAsyncUncompression_Parms StartAsyncUncompression_Parms;
	memcpy_s(&StartAsyncUncompression_Parms.MessageId, 0x10, &MessageId, 0x10);
	StartAsyncUncompression_Parms.MessageCompressionType = MessageCompressionType;

	pFnStartAsyncUncompression->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartAsyncUncompression, &StartAsyncUncompression_Parms, nullptr);

	pFnStartAsyncUncompression->FunctionFlags |= 0x400;
	memcpy_s(&StartAsyncUncompression_Parms.MessageContent, 0x10, &MessageContent, 0x10);

	return StartAsyncUncompression_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  MessageCompressionType         (CPF_Parm)
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// TArray<unsigned char>          MessageContent                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::StartAsyncCompression(unsigned char MessageCompressionType, class UHttpRequestInterface* Request, TArray<unsigned char>& MessageContent)
{
	static UFunction* pFnStartAsyncCompression = nullptr;

	if (!pFnStartAsyncCompression)
	{
		pFnStartAsyncCompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.StartAsyncCompression");

	}

	UMcpMessageManager_execStartAsyncCompression_Parms StartAsyncCompression_Parms;
	StartAsyncCompression_Parms.MessageCompressionType = MessageCompressionType;
	memcpy_s(&StartAsyncCompression_Parms.Request, 0x8, &Request, 0x8);

	pFnStartAsyncCompression->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartAsyncCompression, &StartAsyncCompression_Parms, nullptr);

	pFnStartAsyncCompression->FunctionFlags |= 0x400;
	memcpy_s(&StartAsyncCompression_Parms.MessageContent, 0x10, &MessageContent, 0x10);

	return StartAsyncCompression_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpUserCloudFileDownload::ClearAllDelegates()
{
	static UFunction* pFnClearAllDelegates = nullptr;

	if (!pFnClearAllDelegates)
	{
		pFnClearAllDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates");

	}

	UMcpUserCloudFileDownload_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent(pFnClearAllDelegates, &ClearAllDelegates_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!pFnClearDeleteUserFileCompleteDelegate)
	{
		pFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!pFnAddDeleteUserFileCompleteDelegate)
	{
		pFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallDeleteUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnCallDeleteUserFileCompleteDelegates = nullptr;

	if (!pFnCallDeleteUserFileCompleteDelegates)
	{
		pFnCallDeleteUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates");

	}

	UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Parms CallDeleteUserFileCompleteDelegates_Parms;
	CallDeleteUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallDeleteUserFileCompleteDelegates_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&CallDeleteUserFileCompleteDelegates_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnCallDeleteUserFileCompleteDelegates, &CallDeleteUserFileCompleteDelegates_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnDeleteUserFileComplete = nullptr;

	if (!pFnOnDeleteUserFileComplete)
	{
		pFnOnDeleteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete");

	}

	UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnDeleteUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnHTTPRequestDeleteUserFileComplete = nullptr;

	if (!pFnOnHTTPRequestDeleteUserFileComplete)
	{
		pFnOnHTTPRequestDeleteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete");

	}

	UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Parms OnHTTPRequestDeleteUserFileComplete_Parms;
	memcpy_s(&OnHTTPRequestDeleteUserFileComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestDeleteUserFileComplete_Parms.Response, 0x8, &Response, 0x8);
	OnHTTPRequestDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnHTTPRequestDeleteUserFileComplete, &OnHTTPRequestDeleteUserFileComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldCloudDelete             (CPF_Parm)
// unsigned long                  bShouldLocallyDelete           (CPF_Parm)

bool UMcpUserCloudFileDownload::DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete)
{
	static UFunction* pFnDeleteUserFile = nullptr;

	if (!pFnDeleteUserFile)
	{
		pFnDeleteUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.DeleteUserFile");

	}

	UMcpUserCloudFileDownload_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy_s(&DeleteUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&DeleteUserFile_Parms.Filename, 0x10, &Filename, 0x10);
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	this->ProcessEvent(pFnDeleteUserFile, &DeleteUserFile_Parms, nullptr);

	return DeleteUserFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!pFnClearWriteUserFileCompleteDelegate)
	{
		pFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!pFnAddWriteUserFileCompleteDelegate)
	{
		pFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy_s(&AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallWriteUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnCallWriteUserFileCompleteDelegates = nullptr;

	if (!pFnCallWriteUserFileCompleteDelegates)
	{
		pFnCallWriteUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates");

	}

	UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Parms CallWriteUserFileCompleteDelegates_Parms;
	CallWriteUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallWriteUserFileCompleteDelegates_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&CallWriteUserFileCompleteDelegates_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnCallWriteUserFileCompleteDelegates, &CallWriteUserFileCompleteDelegates_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnWriteUserFileComplete = nullptr;

	if (!pFnOnWriteUserFileComplete)
	{
		pFnOnWriteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete");

	}

	UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnHTTPRequestWriteUserFileComplete = nullptr;

	if (!pFnOnHTTPRequestWriteUserFileComplete)
	{
		pFnOnHTTPRequestWriteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete");

	}

	UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Parms OnHTTPRequestWriteUserFileComplete_Parms;
	memcpy_s(&OnHTTPRequestWriteUserFileComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestWriteUserFileComplete_Parms.Response, 0x8, &Response, 0x8);
	OnHTTPRequestWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnHTTPRequestWriteUserFileComplete, &OnHTTPRequestWriteUserFileComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// int                            UserIdx                        (CPF_Parm | CPF_OutParm)
// int                            FileIdx                        (CPF_Parm | CPF_OutParm)

void UMcpUserCloudFileDownload::GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int& UserIdx, int& FileIdx)
{
	static UFunction* pFnGetUserFileIndexForRequest = nullptr;

	if (!pFnGetUserFileIndexForRequest)
	{
		pFnGetUserFileIndexForRequest = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest");

	}

	UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Parms GetUserFileIndexForRequest_Parms;
	memcpy_s(&GetUserFileIndexForRequest_Parms.Request, 0x8, &Request, 0x8);

	this->ProcessEvent(pFnGetUserFileIndexForRequest, &GetUserFileIndexForRequest_Parms, nullptr);
	memcpy_s(&GetUserFileIndexForRequest_Parms.UserIdx, 0x4, &UserIdx, 0x4);
	memcpy_s(&GetUserFileIndexForRequest_Parms.FileIdx, 0x4, &FileIdx, 0x4);
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::WriteUserFile(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnWriteUserFile = nullptr;

	if (!pFnWriteUserFile)
	{
		pFnWriteUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.WriteUserFile");

	}

	UMcpUserCloudFileDownload_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy_s(&WriteUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFile_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnWriteUserFile, &WriteUserFile_Parms, nullptr);
	memcpy_s(&WriteUserFile_Parms.FileContents, 0x10, &FileContents, 0x10);

	return WriteUserFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = nullptr;

	if (!pFnClearReadUserFileCompleteDelegate)
	{
		pFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = nullptr;

	if (!pFnAddReadUserFileCompleteDelegate)
	{
		pFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy_s(&AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallReadUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnCallReadUserFileCompleteDelegates = nullptr;

	if (!pFnCallReadUserFileCompleteDelegates)
	{
		pFnCallReadUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates");

	}

	UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Parms CallReadUserFileCompleteDelegates_Parms;
	CallReadUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallReadUserFileCompleteDelegates_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&CallReadUserFileCompleteDelegates_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnCallReadUserFileCompleteDelegates, &CallReadUserFileCompleteDelegates_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnReadUserFileComplete = nullptr;

	if (!pFnOnReadUserFileComplete)
	{
		pFnOnReadUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete");

	}

	UMcpUserCloudFileDownload_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnReadUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnHTTPRequestReadUserFileComplete = nullptr;

	if (!pFnOnHTTPRequestReadUserFileComplete)
	{
		pFnOnHTTPRequestReadUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete");

	}

	UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Parms OnHTTPRequestReadUserFileComplete_Parms;
	memcpy_s(&OnHTTPRequestReadUserFileComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestReadUserFileComplete_Parms.Response, 0x8, &Response, 0x8);
	OnHTTPRequestReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnHTTPRequestReadUserFileComplete, &OnHTTPRequestReadUserFileComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ReadUserFile(struct FString UserId, struct FString Filename)
{
	static UFunction* pFnReadUserFile = nullptr;

	if (!pFnReadUserFile)
	{
		pFnReadUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ReadUserFile");

	}

	UMcpUserCloudFileDownload_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy_s(&ReadUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ReadUserFile_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnReadUserFile, &ReadUserFile_Parms, nullptr);

	return ReadUserFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* pFnGetUserFileList = nullptr;

	if (!pFnGetUserFileList)
	{
		pFnGetUserFileList = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetUserFileList");

	}

	UMcpUserCloudFileDownload_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy_s(&GetUserFileList_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnGetUserFileList, &GetUserFileList_Parms, nullptr);
	memcpy_s(&GetUserFileList_Parms.UserFiles, 0x10, &UserFiles, 0x10);
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!pFnClearEnumerateUserFileCompleteDelegate)
	{
		pFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!pFnAddEnumerateUserFileCompleteDelegate)
	{
		pFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate");

	}

	UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallEnumerateUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId)
{
	static UFunction* pFnCallEnumerateUserFileCompleteDelegates = nullptr;

	if (!pFnCallEnumerateUserFileCompleteDelegates)
	{
		pFnCallEnumerateUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates");

	}

	UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Parms CallEnumerateUserFileCompleteDelegates_Parms;
	CallEnumerateUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallEnumerateUserFileCompleteDelegates_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnCallEnumerateUserFileCompleteDelegates, &CallEnumerateUserFileCompleteDelegates_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId)
{
	static UFunction* pFnOnEnumerateUserFilesComplete = nullptr;

	if (!pFnOnEnumerateUserFilesComplete)
	{
		pFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete");

	}

	UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnHTTPRequestEnumerateUserFilesComplete = nullptr;

	if (!pFnOnHTTPRequestEnumerateUserFilesComplete)
	{
		pFnOnHTTPRequestEnumerateUserFilesComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete");

	}

	UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Parms OnHTTPRequestEnumerateUserFilesComplete_Parms;
	memcpy_s(&OnHTTPRequestEnumerateUserFilesComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnHTTPRequestEnumerateUserFilesComplete_Parms.Response, 0x8, &Response, 0x8);
	OnHTTPRequestEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnHTTPRequestEnumerateUserFilesComplete, &OnHTTPRequestEnumerateUserFilesComplete_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::EnumerateUserFiles(struct FString UserId)
{
	static UFunction* pFnEnumerateUserFiles = nullptr;

	if (!pFnEnumerateUserFiles)
	{
		pFnEnumerateUserFiles = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles");

	}

	UMcpUserCloudFileDownload_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy_s(&EnumerateUserFiles_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ClearFile(struct FString UserId, struct FString Filename)
{
	static UFunction* pFnClearFile = nullptr;

	if (!pFnClearFile)
	{
		pFnClearFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearFile");

	}

	UMcpUserCloudFileDownload_execClearFile_Parms ClearFile_Parms;
	memcpy_s(&ClearFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ClearFile_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnClearFile, &ClearFile_Parms, nullptr);

	return ClearFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ClearFiles(struct FString UserId)
{
	static UFunction* pFnClearFiles = nullptr;

	if (!pFnClearFiles)
	{
		pFnClearFiles = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearFiles");

	}

	UMcpUserCloudFileDownload_execClearFiles_Parms ClearFiles_Parms;
	memcpy_s(&ClearFiles_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnClearFiles, &ClearFiles_Parms, nullptr);

	return ClearFiles_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::GetFileContents(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetFileContents = nullptr;

	if (!pFnGetFileContents)
	{
		pFnGetFileContents = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetFileContents");

	}

	UMcpUserCloudFileDownload_execGetFileContents_Parms GetFileContents_Parms;
	memcpy_s(&GetFileContents_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetFileContents, &GetFileContents_Parms, nullptr);
	memcpy_s(&GetFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetFileContents_Parms.ReturnValue;
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMeshBeacon::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = nullptr;

	if (!pFnDestroyBeacon)
	{
		pFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeacon.DestroyBeacon");

	}

	UMeshBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, nullptr);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

bool UMeshBeaconClient::SendHostNewGameSessionResponse(unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, unsigned char& PlatformSpecificInfo)
{
	static UFunction* pFnSendHostNewGameSessionResponse = nullptr;

	if (!pFnSendHostNewGameSessionResponse)
	{
		pFnSendHostNewGameSessionResponse = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse");

	}

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms SendHostNewGameSessionResponse_Parms;
	SendHostNewGameSessionResponse_Parms.bSuccess = bSuccess;
	memcpy_s(&SendHostNewGameSessionResponse_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&SendHostNewGameSessionResponse_Parms.SearchClass, 0x8, &SearchClass, 0x8);

	pFnSendHostNewGameSessionResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Parms, nullptr);

	pFnSendHostNewGameSessionResponse->FunctionFlags |= 0x400;
	memcpy_s(&SendHostNewGameSessionResponse_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	return SendHostNewGameSessionResponse_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FPlayerMember>   Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players)
{
	static UFunction* pFnOnCreateNewSessionRequestReceived = nullptr;

	if (!pFnOnCreateNewSessionRequestReceived)
	{
		pFnOnCreateNewSessionRequestReceived = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived");

	}

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms OnCreateNewSessionRequestReceived_Parms;
	memcpy_s(&OnCreateNewSessionRequestReceived_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnCreateNewSessionRequestReceived_Parms.SearchClass, 0x8, &SearchClass, 0x8);

	this->ProcessEvent(pFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Parms, nullptr);
	memcpy_s(&OnCreateNewSessionRequestReceived_Parms.Players, 0x10, &Players, 0x10);
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconClient::OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, unsigned char& PlatformSpecificInfo)
{
	static UFunction* pFnOnTravelRequestReceived = nullptr;

	if (!pFnOnTravelRequestReceived)
	{
		pFnOnTravelRequestReceived = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnTravelRequestReceived");

	}

	UMeshBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy_s(&OnTravelRequestReceived_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnTravelRequestReceived_Parms.SearchClass, 0x8, &SearchClass, 0x8);

	this->ProcessEvent(pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, nullptr);
	memcpy_s(&OnTravelRequestReceived_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  TestType                       (CPF_Parm)
// unsigned char                  TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconClient::OnReceivedBandwidthTestResults(unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats& BandwidthStats)
{
	static UFunction* pFnOnReceivedBandwidthTestResults = nullptr;

	if (!pFnOnReceivedBandwidthTestResults)
	{
		pFnOnReceivedBandwidthTestResults = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults");

	}

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms OnReceivedBandwidthTestResults_Parms;
	OnReceivedBandwidthTestResults_Parms.TestType = TestType;
	OnReceivedBandwidthTestResults_Parms.TestResult = TestResult;

	this->ProcessEvent(pFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Parms, nullptr);
	memcpy_s(&OnReceivedBandwidthTestResults_Parms.BandwidthStats, 0xC, &BandwidthStats, 0xC);
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  TestType                       (CPF_Parm)

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(unsigned char TestType)
{
	static UFunction* pFnOnReceivedBandwidthTestRequest = nullptr;

	if (!pFnOnReceivedBandwidthTestRequest)
	{
		pFnOnReceivedBandwidthTestRequest = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest");

	}

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms OnReceivedBandwidthTestRequest_Parms;
	OnReceivedBandwidthTestRequest_Parms.TestType = TestType;

	this->ProcessEvent(pFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Parms, nullptr);
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ConnectionResult               (CPF_Parm)

void UMeshBeaconClient::OnConnectionRequestResult(unsigned char ConnectionResult)
{
	static UFunction* pFnOnConnectionRequestResult = nullptr;

	if (!pFnOnConnectionRequestResult)
	{
		pFnOnConnectionRequestResult = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnConnectionRequestResult");

	}

	UMeshBeaconClient_execOnConnectionRequestResult_Parms OnConnectionRequestResult_Parms;
	OnConnectionRequestResult_Parms.ConnectionResult = ConnectionResult;

	this->ProcessEvent(pFnOnConnectionRequestResult, &OnConnectionRequestResult_Parms, nullptr);
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  TestType                       (CPF_Parm)
// int                            TestBufferSize                 (CPF_Parm)

bool UMeshBeaconClient::BeginBandwidthTest(unsigned char TestType, int TestBufferSize)
{
	static UFunction* pFnBeginBandwidthTest = nullptr;

	if (!pFnBeginBandwidthTest)
	{
		pFnBeginBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.BeginBandwidthTest");

	}

	UMeshBeaconClient_execBeginBandwidthTest_Parms BeginBandwidthTest_Parms;
	BeginBandwidthTest_Parms.TestType = TestType;
	memcpy_s(&BeginBandwidthTest_Parms.TestBufferSize, 0x4, &TestBufferSize, 0x4);

	pFnBeginBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBeginBandwidthTest, &BeginBandwidthTest_Parms, nullptr);

	pFnBeginBandwidthTest->FunctionFlags |= 0x400;

	return BeginBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bRegisterSecureAddress         (CPF_Parm)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FClientConnectionRequest ClientRequest                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconClient::RequestConnection(unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult& DesiredHost, struct FClientConnectionRequest& ClientRequest)
{
	static UFunction* pFnRequestConnection = nullptr;

	if (!pFnRequestConnection)
	{
		pFnRequestConnection = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.RequestConnection");

	}

	UMeshBeaconClient_execRequestConnection_Parms RequestConnection_Parms;
	RequestConnection_Parms.bRegisterSecureAddress = bRegisterSecureAddress;

	pFnRequestConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestConnection, &RequestConnection_Parms, nullptr);

	pFnRequestConnection->FunctionFlags |= 0x400;
	memcpy_s(&RequestConnection_Parms.DesiredHost, 0x10, &DesiredHost, 0x10);
	memcpy_s(&RequestConnection_Parms.ClientRequest, 0x70, &ClientRequest, 0x70);

	return RequestConnection_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UMeshBeaconClient::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = nullptr;

	if (!pFnDestroyBeacon)
	{
		pFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.DestroyBeacon");

	}

	UMeshBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	unsigned short NativeIndex = pFnDestroyBeacon->iNative;
	pFnDestroyBeacon->iNative = 0;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, nullptr);

	pFnDestroyBeacon->FunctionFlags |= 0x400;

	pFnDestroyBeacon->iNative = NativeIndex;
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSucceeded                     (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, unsigned char& PlatformSpecificInfo)
{
	static UFunction* pFnOnReceivedClientCreateNewSessionResult = nullptr;

	if (!pFnOnReceivedClientCreateNewSessionResult)
	{
		pFnOnReceivedClientCreateNewSessionResult = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult");

	}

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms OnReceivedClientCreateNewSessionResult_Parms;
	OnReceivedClientCreateNewSessionResult_Parms.bSucceeded = bSucceeded;
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Parms.SearchClass, 0x8, &SearchClass, 0x8);

	this->ProcessEvent(pFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Parms, nullptr);
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FPlayerMember>   Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconHost::RequestClientCreateNewSession(struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players)
{
	static UFunction* pFnRequestClientCreateNewSession = nullptr;

	if (!pFnRequestClientCreateNewSession)
	{
		pFnRequestClientCreateNewSession = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession");

	}

	UMeshBeaconHost_execRequestClientCreateNewSession_Parms RequestClientCreateNewSession_Parms;
	memcpy_s(&RequestClientCreateNewSession_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	memcpy_s(&RequestClientCreateNewSession_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RequestClientCreateNewSession_Parms.SearchClass, 0x8, &SearchClass, 0x8);

	pFnRequestClientCreateNewSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Parms, nullptr);

	pFnRequestClientCreateNewSession->FunctionFlags |= 0x400;
	memcpy_s(&RequestClientCreateNewSession_Parms.Players, 0x10, &Players, 0x10);

	return RequestClientCreateNewSession_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, unsigned char& PlatformSpecificInfo)
{
	static UFunction* pFnTellClientsToTravel = nullptr;

	if (!pFnTellClientsToTravel)
	{
		pFnTellClientsToTravel = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.TellClientsToTravel");

	}

	UMeshBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy_s(&TellClientsToTravel_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&TellClientsToTravel_Parms.SearchClass, 0x8, &SearchClass, 0x8);

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsToTravel, &TellClientsToTravel_Parms, nullptr);

	pFnTellClientsToTravel->FunctionFlags |= 0x400;
	memcpy_s(&TellClientsToTravel_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static UFunction* pFnOnAllPendingPlayersConnected = nullptr;

	if (!pFnOnAllPendingPlayersConnected)
	{
		pFnOnAllPendingPlayersConnected = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected");

	}

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms OnAllPendingPlayersConnected_Parms;

	this->ProcessEvent(pFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Parms, nullptr);
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconHost::AllPlayersConnected(TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnAllPlayersConnected = nullptr;

	if (!pFnAllPlayersConnected)
	{
		pFnAllPlayersConnected = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.AllPlayersConnected");

	}

	UMeshBeaconHost_execAllPlayersConnected_Parms AllPlayersConnected_Parms;

	pFnAllPlayersConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllPlayersConnected, &AllPlayersConnected_Parms, nullptr);

	pFnAllPlayersConnected->FunctionFlags |= 0x400;
	memcpy_s(&AllPlayersConnected_Parms.Players, 0x10, &Players, 0x10);

	return AllPlayersConnected_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)

int UMeshBeaconHost::GetConnectionIndexForPlayer(struct FUniqueNetId PlayerNetId)
{
	static UFunction* pFnGetConnectionIndexForPlayer = nullptr;

	if (!pFnGetConnectionIndexForPlayer)
	{
		pFnGetConnectionIndexForPlayer = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer");

	}

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms GetConnectionIndexForPlayer_Parms;
	memcpy_s(&GetConnectionIndexForPlayer_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);

	pFnGetConnectionIndexForPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Parms, nullptr);

	pFnGetConnectionIndexForPlayer->FunctionFlags |= 0x400;

	return GetConnectionIndexForPlayer_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconHost::SetPendingPlayerConnections(TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnSetPendingPlayerConnections = nullptr;

	if (!pFnSetPendingPlayerConnections)
	{
		pFnSetPendingPlayerConnections = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections");

	}

	UMeshBeaconHost_execSetPendingPlayerConnections_Parms SetPendingPlayerConnections_Parms;

	this->ProcessEvent(pFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Parms, nullptr);
	memcpy_s(&SetPendingPlayerConnections_Parms.Players, 0x10, &Players, 0x10);
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  TestType                       (CPF_Parm)
// unsigned char                  TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::OnFinishedBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats& BandwidthStats)
{
	static UFunction* pFnOnFinishedBandwidthTest = nullptr;

	if (!pFnOnFinishedBandwidthTest)
	{
		pFnOnFinishedBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest");

	}

	UMeshBeaconHost_execOnFinishedBandwidthTest_Parms OnFinishedBandwidthTest_Parms;
	memcpy_s(&OnFinishedBandwidthTest_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	OnFinishedBandwidthTest_Parms.TestType = TestType;
	OnFinishedBandwidthTest_Parms.TestResult = TestResult;

	this->ProcessEvent(pFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Parms, nullptr);
	memcpy_s(&OnFinishedBandwidthTest_Parms.BandwidthStats, 0xC, &BandwidthStats, 0xC);
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  TestType                       (CPF_Parm)

void UMeshBeaconHost::OnStartedBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType)
{
	static UFunction* pFnOnStartedBandwidthTest = nullptr;

	if (!pFnOnStartedBandwidthTest)
	{
		pFnOnStartedBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest");

	}

	UMeshBeaconHost_execOnStartedBandwidthTest_Parms OnStartedBandwidthTest_Parms;
	memcpy_s(&OnStartedBandwidthTest_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	OnStartedBandwidthTest_Parms.TestType = TestType;

	this->ProcessEvent(pFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Parms, nullptr);
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FClientMeshBeaconConnection NewClientConnection            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& NewClientConnection)
{
	static UFunction* pFnOnReceivedClientConnectionRequest = nullptr;

	if (!pFnOnReceivedClientConnectionRequest)
	{
		pFnOnReceivedClientConnectionRequest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest");

	}

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms OnReceivedClientConnectionRequest_Parms;

	this->ProcessEvent(pFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Parms, nullptr);
	memcpy_s(&OnReceivedClientConnectionRequest_Parms.NewClientConnection, 0xB8, &NewClientConnection, 0xB8);
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnabled                       (CPF_Parm)

void UMeshBeaconHost::AllowBandwidthTesting(unsigned long bEnabled)
{
	static UFunction* pFnAllowBandwidthTesting = nullptr;

	if (!pFnAllowBandwidthTesting)
	{
		pFnAllowBandwidthTesting = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.AllowBandwidthTesting");

	}

	UMeshBeaconHost_execAllowBandwidthTesting_Parms AllowBandwidthTesting_Parms;
	AllowBandwidthTesting_Parms.bEnabled = bEnabled;

	this->ProcessEvent(pFnAllowBandwidthTesting, &AllowBandwidthTesting_Parms, nullptr);
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static UFunction* pFnCancelPendingBandwidthTests = nullptr;

	if (!pFnCancelPendingBandwidthTests)
	{
		pFnCancelPendingBandwidthTests = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests");

	}

	UMeshBeaconHost_execCancelPendingBandwidthTests_Parms CancelPendingBandwidthTests_Parms;

	pFnCancelPendingBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Parms, nullptr);

	pFnCancelPendingBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static UFunction* pFnHasPendingBandwidthTest = nullptr;

	if (!pFnHasPendingBandwidthTest)
	{
		pFnHasPendingBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest");

	}

	UMeshBeaconHost_execHasPendingBandwidthTest_Parms HasPendingBandwidthTest_Parms;

	pFnHasPendingBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Parms, nullptr);

	pFnHasPendingBandwidthTest->FunctionFlags |= 0x400;

	return HasPendingBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static UFunction* pFnCancelInProgressBandwidthTests = nullptr;

	if (!pFnCancelInProgressBandwidthTests)
	{
		pFnCancelInProgressBandwidthTests = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests");

	}

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms CancelInProgressBandwidthTests_Parms;

	pFnCancelInProgressBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Parms, nullptr);

	pFnCancelInProgressBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static UFunction* pFnHasInProgressBandwidthTest = nullptr;

	if (!pFnHasInProgressBandwidthTest)
	{
		pFnHasInProgressBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest");

	}

	UMeshBeaconHost_execHasInProgressBandwidthTest_Parms HasInProgressBandwidthTest_Parms;

	pFnHasInProgressBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Parms, nullptr);

	pFnHasInProgressBandwidthTest->FunctionFlags |= 0x400;

	return HasInProgressBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  TestType                       (CPF_Parm)
// int                            TestBufferSize                 (CPF_Parm)

bool UMeshBeaconHost::RequestClientBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType, int TestBufferSize)
{
	static UFunction* pFnRequestClientBandwidthTest = nullptr;

	if (!pFnRequestClientBandwidthTest)
	{
		pFnRequestClientBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest");

	}

	UMeshBeaconHost_execRequestClientBandwidthTest_Parms RequestClientBandwidthTest_Parms;
	memcpy_s(&RequestClientBandwidthTest_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);
	RequestClientBandwidthTest_Parms.TestType = TestType;
	memcpy_s(&RequestClientBandwidthTest_Parms.TestBufferSize, 0x4, &TestBufferSize, 0x4);

	pFnRequestClientBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Parms, nullptr);

	pFnRequestClientBandwidthTest->FunctionFlags |= 0x400;

	return RequestClientBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UMeshBeaconHost::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = nullptr;

	if (!pFnDestroyBeacon)
	{
		pFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.DestroyBeacon");

	}

	UMeshBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	unsigned short NativeIndex = pFnDestroyBeacon->iNative;
	pFnDestroyBeacon->iNative = 0;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, nullptr);

	pFnDestroyBeacon->FunctionFlags |= 0x400;

	pFnDestroyBeacon->iNative = NativeIndex;
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            InOwningPlayerId               (CPF_Parm | CPF_NeedCtorLink)

bool UMeshBeaconHost::InitHostBeacon(struct FUniqueNetId InOwningPlayerId)
{
	static UFunction* pFnInitHostBeacon = nullptr;

	if (!pFnInitHostBeacon)
	{
		pFnInitHostBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.InitHostBeacon");

	}

	UMeshBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	memcpy_s(&InitHostBeacon_Parms.InOwningPlayerId, 0x48, &InOwningPlayerId, 0x48);

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInitHostBeacon, &InitHostBeacon_Parms, nullptr);

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UOnlineAuthInterfaceImpl::RequestAccountAuthorization(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestAccountAuthorization = nullptr;

	if (!pFnRequestAccountAuthorization)
	{
		pFnRequestAccountAuthorization = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization");

	}

	UOnlineAuthInterfaceImpl_execRequestAccountAuthorization_Parms RequestAccountAuthorization_Parms;
	memcpy_s(&RequestAccountAuthorization_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAccountAuthorization_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRequestAccountAuthorization, &RequestAccountAuthorization_Parms, nullptr);

	return RequestAccountAuthorization_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 Token                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnAccountAuthorization(struct FString Token)
{
	static UFunction* pFnOnAccountAuthorization = nullptr;

	if (!pFnOnAccountAuthorization)
	{
		pFnOnAccountAuthorization = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization");

	}

	UOnlineAuthInterfaceImpl_execOnAccountAuthorization_Parms OnAccountAuthorization_Parms;
	memcpy_s(&OnAccountAuthorization_Parms.Token, 0x10, &Token, 0x10);

	this->ProcessEvent(pFnOnAccountAuthorization, &OnAccountAuthorization_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged
// [0x00030000] (FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bLoggedIn                      (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnLoginChanged(unsigned long bLoggedIn)
{
	static UFunction* pFnOnLoginChanged = nullptr;

	if (!pFnOnLoginChanged)
	{
		pFnOnLoginChanged = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged");

	}

	UOnlineAuthInterfaceImpl_execOnLoginChanged_Parms OnLoginChanged_Parms;
	OnLoginChanged_Parms.bLoggedIn = bLoggedIn;

	this->ProcessEvent(pFnOnLoginChanged, &OnLoginChanged_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestMtxCode = nullptr;

	if (!pFnRequestMtxCode)
	{
		pFnRequestMtxCode = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode");

	}

	UOnlineAuthInterfaceImpl_execRequestMtxCode_Parms RequestMtxCode_Parms;
	memcpy_s(&RequestMtxCode_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestMtxCode_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRequestMtxCode, &RequestMtxCode_Parms, nullptr);

	return RequestMtxCode_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestAuthTicket = nullptr;

	if (!pFnRequestAuthTicket)
	{
		pFnRequestAuthTicket = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket");

	}

	UOnlineAuthInterfaceImpl_execRequestAuthTicket_Parms RequestAuthTicket_Parms;
	memcpy_s(&RequestAuthTicket_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAuthTicket_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRequestAuthTicket, &RequestAuthTicket_Parms, nullptr);

	return RequestAuthTicket_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::RequiresAuthTicket()
{
	static UFunction* pFnRequiresAuthTicket = nullptr;

	if (!pFnRequiresAuthTicket)
	{
		pFnRequiresAuthTicket = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket");

	}

	UOnlineAuthInterfaceImpl_execRequiresAuthTicket_Parms RequiresAuthTicket_Parms;

	this->ProcessEvent(pFnRequiresAuthTicket, &RequiresAuthTicket_Parms, nullptr);

	return RequiresAuthTicket_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode
// [0x00130001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FString                 Code                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnReceivedAuthCode(unsigned long bSuccess, struct FString Code)
{
	static UFunction* pFnOnReceivedAuthCode = nullptr;

	if (!pFnOnReceivedAuthCode)
	{
		pFnOnReceivedAuthCode = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode");

	}

	UOnlineAuthInterfaceImpl_execOnReceivedAuthCode_Parms OnReceivedAuthCode_Parms;
	OnReceivedAuthCode_Parms.bSuccess = bSuccess;
	memcpy_s(&OnReceivedAuthCode_Parms.Code, 0x10, &Code, 0x10);

	this->ProcessEvent(pFnOnReceivedAuthCode, &OnReceivedAuthCode_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 OutServerIP                    (CPF_Parm | CPF_OutParm)
// int                            OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::GetServerAddr(struct FIpAddr& OutServerIP, int& OutServerPort)
{
	static UFunction* pFnGetServerAddr = nullptr;

	if (!pFnGetServerAddr)
	{
		pFnGetServerAddr = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr");

	}

	UOnlineAuthInterfaceImpl_execGetServerAddr_Parms GetServerAddr_Parms;

	this->ProcessEvent(pFnGetServerAddr, &GetServerAddr_Parms, nullptr);
	memcpy_s(&GetServerAddr_Parms.OutServerIP, 0x14, &OutServerIP, 0x14);
	memcpy_s(&GetServerAddr_Parms.OutServerPort, 0x4, &OutServerPort, 0x4);

	return GetServerAddr_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* pFnGetServerUniqueId = nullptr;

	if (!pFnGetServerUniqueId)
	{
		pFnGetServerUniqueId = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId");

	}

	UOnlineAuthInterfaceImpl_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	this->ProcessEvent(pFnGetServerUniqueId, &GetServerUniqueId_Parms, nullptr);
	memcpy_s(&GetServerUniqueId_Parms.OutServerUID, 0x48, &OutServerUID, 0x48);

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* pFnFindLocalServerAuthSession = nullptr;

	if (!pFnFindLocalServerAuthSession)
	{
		pFnFindLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");

	}

	UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Parms FindLocalServerAuthSession_Parms;
	memcpy_s(&FindLocalServerAuthSession_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);

	pFnFindLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindLocalServerAuthSession, &FindLocalServerAuthSession_Parms, nullptr);

	pFnFindLocalServerAuthSession->FunctionFlags |= 0x400;
	memcpy_s(&FindLocalServerAuthSession_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	return FindLocalServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& OutSessionInfo)
{
	static UFunction* pFnFindServerAuthSession = nullptr;

	if (!pFnFindServerAuthSession)
	{
		pFnFindServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");

	}

	UOnlineAuthInterfaceImpl_execFindServerAuthSession_Parms FindServerAuthSession_Parms;
	memcpy_s(&FindServerAuthSession_Parms.ServerConnection, 0x8, &ServerConnection, 0x8);

	pFnFindServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindServerAuthSession, &FindServerAuthSession_Parms, nullptr);

	pFnFindServerAuthSession->FunctionFlags |= 0x400;
	memcpy_s(&FindServerAuthSession_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	return FindServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* pFnFindLocalClientAuthSession = nullptr;

	if (!pFnFindLocalClientAuthSession)
	{
		pFnFindLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");

	}

	UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Parms FindLocalClientAuthSession_Parms;
	memcpy_s(&FindLocalClientAuthSession_Parms.ServerConnection, 0x8, &ServerConnection, 0x8);

	pFnFindLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindLocalClientAuthSession, &FindLocalClientAuthSession_Parms, nullptr);

	pFnFindLocalClientAuthSession->FunctionFlags |= 0x400;
	memcpy_s(&FindLocalClientAuthSession_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	return FindLocalClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& OutSessionInfo)
{
	static UFunction* pFnFindClientAuthSession = nullptr;

	if (!pFnFindClientAuthSession)
	{
		pFnFindClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");

	}

	UOnlineAuthInterfaceImpl_execFindClientAuthSession_Parms FindClientAuthSession_Parms;
	memcpy_s(&FindClientAuthSession_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);

	pFnFindClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindClientAuthSession, &FindClientAuthSession_Parms, nullptr);

	pFnFindClientAuthSession->FunctionFlags |= 0x400;
	memcpy_s(&FindClientAuthSession_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);

	return FindClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions(struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* pFnAllLocalServerAuthSessions = nullptr;

	if (!pFnAllLocalServerAuthSessions)
	{
		pFnAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Parms AllLocalServerAuthSessions_Parms;

	pFnAllLocalServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllLocalServerAuthSessions, &AllLocalServerAuthSessions_Parms, nullptr);

	pFnAllLocalServerAuthSessions->FunctionFlags |= 0x400;
	memcpy_s(&AllLocalServerAuthSessions_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllServerAuthSessions(struct FAuthSession& OutSessionInfo)
{
	static UFunction* pFnAllServerAuthSessions = nullptr;

	if (!pFnAllServerAuthSessions)
	{
		pFnAllServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Parms AllServerAuthSessions_Parms;

	pFnAllServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllServerAuthSessions, &AllServerAuthSessions_Parms, nullptr);

	pFnAllServerAuthSessions->FunctionFlags |= 0x400;
	memcpy_s(&AllServerAuthSessions_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions(struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* pFnAllLocalClientAuthSessions = nullptr;

	if (!pFnAllLocalClientAuthSessions)
	{
		pFnAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Parms AllLocalClientAuthSessions_Parms;

	pFnAllLocalClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllLocalClientAuthSessions, &AllLocalClientAuthSessions_Parms, nullptr);

	pFnAllLocalClientAuthSessions->FunctionFlags |= 0x400;
	memcpy_s(&AllLocalClientAuthSessions_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AllClientAuthSessions(struct FAuthSession& OutSessionInfo)
{
	static UFunction* pFnAllClientAuthSessions = nullptr;

	if (!pFnAllClientAuthSessions)
	{
		pFnAllClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Parms AllClientAuthSessions_Parms;

	pFnAllClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllClientAuthSessions, &AllClientAuthSessions_Parms, nullptr);

	pFnAllClientAuthSessions->FunctionFlags |= 0x400;
	memcpy_s(&AllClientAuthSessions_Parms.OutSessionInfo, 0x68, &OutSessionInfo, 0x68);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllRemoteServerAuthSessions()
{
	static UFunction* pFnEndAllRemoteServerAuthSessions = nullptr;

	if (!pFnEndAllRemoteServerAuthSessions)
	{
		pFnEndAllRemoteServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Parms EndAllRemoteServerAuthSessions_Parms;

	pFnEndAllRemoteServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndAllRemoteServerAuthSessions, &EndAllRemoteServerAuthSessions_Parms, nullptr);

	pFnEndAllRemoteServerAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllLocalServerAuthSessions()
{
	static UFunction* pFnEndAllLocalServerAuthSessions = nullptr;

	if (!pFnEndAllLocalServerAuthSessions)
	{
		pFnEndAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Parms EndAllLocalServerAuthSessions_Parms;

	pFnEndAllLocalServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndAllLocalServerAuthSessions, &EndAllLocalServerAuthSessions_Parms, nullptr);

	pFnEndAllLocalServerAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP)
{
	static UFunction* pFnEndRemoteServerAuthSession = nullptr;

	if (!pFnEndRemoteServerAuthSession)
	{
		pFnEndRemoteServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession");

	}

	UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Parms EndRemoteServerAuthSession_Parms;
	memcpy_s(&EndRemoteServerAuthSession_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&EndRemoteServerAuthSession_Parms.ServerIP, 0x14, &ServerIP, 0x14);

	pFnEndRemoteServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndRemoteServerAuthSession, &EndRemoteServerAuthSession_Parms, nullptr);

	pFnEndRemoteServerAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP)
{
	static UFunction* pFnEndLocalServerAuthSession = nullptr;

	if (!pFnEndLocalServerAuthSession)
	{
		pFnEndLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession");

	}

	UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Parms EndLocalServerAuthSession_Parms;
	memcpy_s(&EndLocalServerAuthSession_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&EndLocalServerAuthSession_Parms.ClientIP, 0x14, &ClientIP, 0x14);

	pFnEndLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndLocalServerAuthSession, &EndLocalServerAuthSession_Parms, nullptr);

	pFnEndLocalServerAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID)
{
	static UFunction* pFnVerifyServerAuthSession = nullptr;

	if (!pFnVerifyServerAuthSession)
	{
		pFnVerifyServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession");

	}

	UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy_s(&VerifyServerAuthSession_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&VerifyServerAuthSession_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&VerifyServerAuthSession_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, nullptr);

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int& OutAuthTicketUID)
{
	static UFunction* pFnCreateServerAuthSession = nullptr;

	if (!pFnCreateServerAuthSession)
	{
		pFnCreateServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession");

	}

	UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy_s(&CreateServerAuthSession_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&CreateServerAuthSession_Parms.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&CreateServerAuthSession_Parms.ClientPort, 0x4, &ClientPort, 0x4);

	this->ProcessEvent(pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, nullptr);
	memcpy_s(&CreateServerAuthSession_Parms.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllRemoteClientAuthSessions()
{
	static UFunction* pFnEndAllRemoteClientAuthSessions = nullptr;

	if (!pFnEndAllRemoteClientAuthSessions)
	{
		pFnEndAllRemoteClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Parms EndAllRemoteClientAuthSessions_Parms;

	pFnEndAllRemoteClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndAllRemoteClientAuthSessions, &EndAllRemoteClientAuthSessions_Parms, nullptr);

	pFnEndAllRemoteClientAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::EndAllLocalClientAuthSessions()
{
	static UFunction* pFnEndAllLocalClientAuthSessions = nullptr;

	if (!pFnEndAllLocalClientAuthSessions)
	{
		pFnEndAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions");

	}

	UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Parms EndAllLocalClientAuthSessions_Parms;

	pFnEndAllLocalClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndAllLocalClientAuthSessions, &EndAllLocalClientAuthSessions_Parms, nullptr);

	pFnEndAllLocalClientAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP)
{
	static UFunction* pFnEndRemoteClientAuthSession = nullptr;

	if (!pFnEndRemoteClientAuthSession)
	{
		pFnEndRemoteClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession");

	}

	UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Parms EndRemoteClientAuthSession_Parms;
	memcpy_s(&EndRemoteClientAuthSession_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&EndRemoteClientAuthSession_Parms.ClientIP, 0x14, &ClientIP, 0x14);

	pFnEndRemoteClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndRemoteClientAuthSession, &EndRemoteClientAuthSession_Parms, nullptr);

	pFnEndRemoteClientAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort)
{
	static UFunction* pFnEndLocalClientAuthSession = nullptr;

	if (!pFnEndLocalClientAuthSession)
	{
		pFnEndLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession");

	}

	UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Parms EndLocalClientAuthSession_Parms;
	memcpy_s(&EndLocalClientAuthSession_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&EndLocalClientAuthSession_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&EndLocalClientAuthSession_Parms.ServerPort, 0x4, &ServerPort, 0x4);

	pFnEndLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndLocalClientAuthSession, &EndLocalClientAuthSession_Parms, nullptr);

	pFnEndLocalClientAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID)
{
	static UFunction* pFnVerifyClientAuthSession = nullptr;

	if (!pFnVerifyClientAuthSession)
	{
		pFnVerifyClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession");

	}

	UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy_s(&VerifyClientAuthSession_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&VerifyClientAuthSession_Parms.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&VerifyClientAuthSession_Parms.ClientPort, 0x4, &ClientPort, 0x4);
	memcpy_s(&VerifyClientAuthSession_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, nullptr);

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)
// unsigned long                  bSecure                        (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int& OutAuthTicketUID)
{
	static UFunction* pFnCreateClientAuthSession = nullptr;

	if (!pFnCreateClientAuthSession)
	{
		pFnCreateClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession");

	}

	UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy_s(&CreateClientAuthSession_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&CreateClientAuthSession_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&CreateClientAuthSession_Parms.ServerPort, 0x4, &ServerPort, 0x4);
	CreateClientAuthSession_Parms.bSecure = bSecure;

	this->ProcessEvent(pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, nullptr);
	memcpy_s(&CreateClientAuthSession_Parms.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest()
{
	static UFunction* pFnSendServerAuthRetryRequest = nullptr;

	if (!pFnSendServerAuthRetryRequest)
	{
		pFnSendServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest");

	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Parms SendServerAuthRetryRequest_Parms;

	pFnSendServerAuthRetryRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendServerAuthRetryRequest, &SendServerAuthRetryRequest_Parms, nullptr);

	pFnSendServerAuthRetryRequest->FunctionFlags |= 0x400;

	return SendServerAuthRetryRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest(class UPlayer* ClientConnection)
{
	static UFunction* pFnSendClientAuthEndSessionRequest = nullptr;

	if (!pFnSendClientAuthEndSessionRequest)
	{
		pFnSendClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest");

	}

	UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Parms SendClientAuthEndSessionRequest_Parms;
	memcpy_s(&SendClientAuthEndSessionRequest_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);

	pFnSendClientAuthEndSessionRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendClientAuthEndSessionRequest, &SendClientAuthEndSessionRequest_Parms, nullptr);

	pFnSendClientAuthEndSessionRequest->FunctionFlags |= 0x400;

	return SendClientAuthEndSessionRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse(class UPlayer* ClientConnection, int AuthTicketUID)
{
	static UFunction* pFnSendServerAuthResponse = nullptr;

	if (!pFnSendServerAuthResponse)
	{
		pFnSendServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse");

	}

	UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Parms SendServerAuthResponse_Parms;
	memcpy_s(&SendServerAuthResponse_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&SendServerAuthResponse_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	pFnSendServerAuthResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendServerAuthResponse, &SendServerAuthResponse_Parms, nullptr);

	pFnSendServerAuthResponse->FunctionFlags |= 0x400;

	return SendServerAuthResponse_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse(int AuthTicketUID)
{
	static UFunction* pFnSendClientAuthResponse = nullptr;

	if (!pFnSendClientAuthResponse)
	{
		pFnSendClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse");

	}

	UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Parms SendClientAuthResponse_Parms;
	memcpy_s(&SendClientAuthResponse_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	pFnSendClientAuthResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendClientAuthResponse, &SendClientAuthResponse_Parms, nullptr);

	pFnSendClientAuthResponse->FunctionFlags |= 0x400;

	return SendClientAuthResponse_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest(struct FUniqueNetId ServerUID)
{
	static UFunction* pFnSendServerAuthRequest = nullptr;

	if (!pFnSendServerAuthRequest)
	{
		pFnSendServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest");

	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;
	memcpy_s(&SendServerAuthRequest_Parms.ServerUID, 0x48, &ServerUID, 0x48);

	this->ProcessEvent(pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, nullptr);

	return SendServerAuthRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID)
{
	static UFunction* pFnSendClientAuthRequest = nullptr;

	if (!pFnSendClientAuthRequest)
	{
		pFnSendClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest");

	}

	UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;
	memcpy_s(&SendClientAuthRequest_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&SendClientAuthRequest_Parms.ClientUID, 0x48, &ClientUID, 0x48);

	this->ProcessEvent(pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, nullptr);

	return SendClientAuthRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate)
{
	static UFunction* pFnClearServerConnectionCloseDelegate = nullptr;

	if (!pFnClearServerConnectionCloseDelegate)
	{
		pFnClearServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Parms ClearServerConnectionCloseDelegate_Parms;
	memcpy_s(&ClearServerConnectionCloseDelegate_Parms.ServerConnectionCloseDelegate, 0x18, &ServerConnectionCloseDelegate, 0x18);

	this->ProcessEvent(pFnClearServerConnectionCloseDelegate, &ClearServerConnectionCloseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate)
{
	static UFunction* pFnAddServerConnectionCloseDelegate = nullptr;

	if (!pFnAddServerConnectionCloseDelegate)
	{
		pFnAddServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Parms AddServerConnectionCloseDelegate_Parms;
	memcpy_s(&AddServerConnectionCloseDelegate_Parms.ServerConnectionCloseDelegate, 0x18, &ServerConnectionCloseDelegate, 0x18);

	this->ProcessEvent(pFnAddServerConnectionCloseDelegate, &AddServerConnectionCloseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerConnectionClose(class UPlayer* ServerConnection)
{
	static UFunction* pFnOnServerConnectionClose = nullptr;

	if (!pFnOnServerConnectionClose)
	{
		pFnOnServerConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose");

	}

	UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Parms OnServerConnectionClose_Parms;
	memcpy_s(&OnServerConnectionClose_Parms.ServerConnection, 0x8, &ServerConnection, 0x8);

	this->ProcessEvent(pFnOnServerConnectionClose, &OnServerConnectionClose_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate)
{
	static UFunction* pFnClearClientConnectionCloseDelegate = nullptr;

	if (!pFnClearClientConnectionCloseDelegate)
	{
		pFnClearClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Parms ClearClientConnectionCloseDelegate_Parms;
	memcpy_s(&ClearClientConnectionCloseDelegate_Parms.ClientConnectionCloseDelegate, 0x18, &ClientConnectionCloseDelegate, 0x18);

	this->ProcessEvent(pFnClearClientConnectionCloseDelegate, &ClearClientConnectionCloseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate)
{
	static UFunction* pFnAddClientConnectionCloseDelegate = nullptr;

	if (!pFnAddClientConnectionCloseDelegate)
	{
		pFnAddClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Parms AddClientConnectionCloseDelegate_Parms;
	memcpy_s(&AddClientConnectionCloseDelegate_Parms.ClientConnectionCloseDelegate, 0x18, &ClientConnectionCloseDelegate, 0x18);

	this->ProcessEvent(pFnAddClientConnectionCloseDelegate, &AddClientConnectionCloseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientConnectionClose(class UPlayer* ClientConnection)
{
	static UFunction* pFnOnClientConnectionClose = nullptr;

	if (!pFnOnClientConnectionClose)
	{
		pFnOnClientConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose");

	}

	UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Parms OnClientConnectionClose_Parms;
	memcpy_s(&OnClientConnectionClose_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);

	this->ProcessEvent(pFnOnClientConnectionClose, &OnClientConnectionClose_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate)
{
	static UFunction* pFnClearServerAuthRetryRequestDelegate = nullptr;

	if (!pFnClearServerAuthRetryRequestDelegate)
	{
		pFnClearServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Parms ClearServerAuthRetryRequestDelegate_Parms;
	memcpy_s(&ClearServerAuthRetryRequestDelegate_Parms.ServerAuthRetryRequestDelegate, 0x18, &ServerAuthRetryRequestDelegate, 0x18);

	this->ProcessEvent(pFnClearServerAuthRetryRequestDelegate, &ClearServerAuthRetryRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate)
{
	static UFunction* pFnAddServerAuthRetryRequestDelegate = nullptr;

	if (!pFnAddServerAuthRetryRequestDelegate)
	{
		pFnAddServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Parms AddServerAuthRetryRequestDelegate_Parms;
	memcpy_s(&AddServerAuthRetryRequestDelegate_Parms.ServerAuthRetryRequestDelegate, 0x18, &ServerAuthRetryRequestDelegate, 0x18);

	this->ProcessEvent(pFnAddServerAuthRetryRequestDelegate, &AddServerAuthRetryRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest(class UPlayer* ClientConnection)
{
	static UFunction* pFnOnServerAuthRetryRequest = nullptr;

	if (!pFnOnServerAuthRetryRequest)
	{
		pFnOnServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest");

	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Parms OnServerAuthRetryRequest_Parms;
	memcpy_s(&OnServerAuthRetryRequest_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);

	this->ProcessEvent(pFnOnServerAuthRetryRequest, &OnServerAuthRetryRequest_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate)
{
	static UFunction* pFnClearClientAuthEndSessionRequestDelegate = nullptr;

	if (!pFnClearClientAuthEndSessionRequestDelegate)
	{
		pFnClearClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Parms ClearClientAuthEndSessionRequestDelegate_Parms;
	memcpy_s(&ClearClientAuthEndSessionRequestDelegate_Parms.ClientAuthEndSessionRequestDelegate, 0x18, &ClientAuthEndSessionRequestDelegate, 0x18);

	this->ProcessEvent(pFnClearClientAuthEndSessionRequestDelegate, &ClearClientAuthEndSessionRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate)
{
	static UFunction* pFnAddClientAuthEndSessionRequestDelegate = nullptr;

	if (!pFnAddClientAuthEndSessionRequestDelegate)
	{
		pFnAddClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Parms AddClientAuthEndSessionRequestDelegate_Parms;
	memcpy_s(&AddClientAuthEndSessionRequestDelegate_Parms.ClientAuthEndSessionRequestDelegate, 0x18, &ClientAuthEndSessionRequestDelegate, 0x18);

	this->ProcessEvent(pFnAddClientAuthEndSessionRequestDelegate, &AddClientAuthEndSessionRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest(class UPlayer* ServerConnection)
{
	static UFunction* pFnOnClientAuthEndSessionRequest = nullptr;

	if (!pFnOnClientAuthEndSessionRequest)
	{
		pFnOnClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest");

	}

	UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Parms OnClientAuthEndSessionRequest_Parms;
	memcpy_s(&OnClientAuthEndSessionRequest_Parms.ServerConnection, 0x8, &ServerConnection, 0x8);

	this->ProcessEvent(pFnOnClientAuthEndSessionRequest, &OnClientAuthEndSessionRequest_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate)
{
	static UFunction* pFnClearServerAuthCompleteDelegate = nullptr;

	if (!pFnClearServerAuthCompleteDelegate)
	{
		pFnClearServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Parms ClearServerAuthCompleteDelegate_Parms;
	memcpy_s(&ClearServerAuthCompleteDelegate_Parms.ServerAuthCompleteDelegate, 0x18, &ServerAuthCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearServerAuthCompleteDelegate, &ClearServerAuthCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate)
{
	static UFunction* pFnAddServerAuthCompleteDelegate = nullptr;

	if (!pFnAddServerAuthCompleteDelegate)
	{
		pFnAddServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Parms AddServerAuthCompleteDelegate_Parms;
	memcpy_s(&AddServerAuthCompleteDelegate_Parms.ServerAuthCompleteDelegate, 0x18, &ServerAuthCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddServerAuthCompleteDelegate, &AddServerAuthCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FString                 ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnServerAuthComplete(unsigned long bSuccess, struct FUniqueNetId ServerUID, class UPlayer* ServerConnection, struct FString ExtraInfo)
{
	static UFunction* pFnOnServerAuthComplete = nullptr;

	if (!pFnOnServerAuthComplete)
	{
		pFnOnServerAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete");

	}

	UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Parms OnServerAuthComplete_Parms;
	OnServerAuthComplete_Parms.bSuccess = bSuccess;
	memcpy_s(&OnServerAuthComplete_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&OnServerAuthComplete_Parms.ServerConnection, 0x8, &ServerConnection, 0x8);
	memcpy_s(&OnServerAuthComplete_Parms.ExtraInfo, 0x10, &ExtraInfo, 0x10);

	this->ProcessEvent(pFnOnServerAuthComplete, &OnServerAuthComplete_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate)
{
	static UFunction* pFnClearClientAuthCompleteDelegate = nullptr;

	if (!pFnClearClientAuthCompleteDelegate)
	{
		pFnClearClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Parms ClearClientAuthCompleteDelegate_Parms;
	memcpy_s(&ClearClientAuthCompleteDelegate_Parms.ClientAuthCompleteDelegate, 0x18, &ClientAuthCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearClientAuthCompleteDelegate, &ClearClientAuthCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate)
{
	static UFunction* pFnAddClientAuthCompleteDelegate = nullptr;

	if (!pFnAddClientAuthCompleteDelegate)
	{
		pFnAddClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Parms AddClientAuthCompleteDelegate_Parms;
	memcpy_s(&AddClientAuthCompleteDelegate_Parms.ClientAuthCompleteDelegate, 0x18, &ClientAuthCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddClientAuthCompleteDelegate, &AddClientAuthCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FString                 ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnClientAuthComplete(unsigned long bSuccess, struct FUniqueNetId ClientUID, class UPlayer* ClientConnection, struct FString ExtraInfo)
{
	static UFunction* pFnOnClientAuthComplete = nullptr;

	if (!pFnOnClientAuthComplete)
	{
		pFnOnClientAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete");

	}

	UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Parms OnClientAuthComplete_Parms;
	OnClientAuthComplete_Parms.bSuccess = bSuccess;
	memcpy_s(&OnClientAuthComplete_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&OnClientAuthComplete_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&OnClientAuthComplete_Parms.ExtraInfo, 0x10, &ExtraInfo, 0x10);

	this->ProcessEvent(pFnOnClientAuthComplete, &OnClientAuthComplete_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate)
{
	static UFunction* pFnClearServerAuthResponseDelegate = nullptr;

	if (!pFnClearServerAuthResponseDelegate)
	{
		pFnClearServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Parms ClearServerAuthResponseDelegate_Parms;
	memcpy_s(&ClearServerAuthResponseDelegate_Parms.ServerAuthResponseDelegate, 0x18, &ServerAuthResponseDelegate, 0x18);

	this->ProcessEvent(pFnClearServerAuthResponseDelegate, &ClearServerAuthResponseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate)
{
	static UFunction* pFnAddServerAuthResponseDelegate = nullptr;

	if (!pFnAddServerAuthResponseDelegate)
	{
		pFnAddServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Parms AddServerAuthResponseDelegate_Parms;
	memcpy_s(&AddServerAuthResponseDelegate_Parms.ServerAuthResponseDelegate, 0x18, &ServerAuthResponseDelegate, 0x18);

	this->ProcessEvent(pFnAddServerAuthResponseDelegate, &AddServerAuthResponseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthResponse(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID)
{
	static UFunction* pFnOnServerAuthResponse = nullptr;

	if (!pFnOnServerAuthResponse)
	{
		pFnOnServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse");

	}

	UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Parms OnServerAuthResponse_Parms;
	memcpy_s(&OnServerAuthResponse_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&OnServerAuthResponse_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&OnServerAuthResponse_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(pFnOnServerAuthResponse, &OnServerAuthResponse_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate)
{
	static UFunction* pFnClearClientAuthResponseDelegate = nullptr;

	if (!pFnClearClientAuthResponseDelegate)
	{
		pFnClearClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Parms ClearClientAuthResponseDelegate_Parms;
	memcpy_s(&ClearClientAuthResponseDelegate_Parms.ClientAuthResponseDelegate, 0x18, &ClientAuthResponseDelegate, 0x18);

	this->ProcessEvent(pFnClearClientAuthResponseDelegate, &ClearClientAuthResponseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate)
{
	static UFunction* pFnAddClientAuthResponseDelegate = nullptr;

	if (!pFnAddClientAuthResponseDelegate)
	{
		pFnAddClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Parms AddClientAuthResponseDelegate_Parms;
	memcpy_s(&AddClientAuthResponseDelegate_Parms.ClientAuthResponseDelegate, 0x18, &ClientAuthResponseDelegate, 0x18);

	this->ProcessEvent(pFnAddClientAuthResponseDelegate, &AddClientAuthResponseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthResponse(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int AuthTicketUID)
{
	static UFunction* pFnOnClientAuthResponse = nullptr;

	if (!pFnOnClientAuthResponse)
	{
		pFnOnClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse");

	}

	UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Parms OnClientAuthResponse_Parms;
	memcpy_s(&OnClientAuthResponse_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&OnClientAuthResponse_Parms.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&OnClientAuthResponse_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	this->ProcessEvent(pFnOnClientAuthResponse, &OnClientAuthResponse_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate)
{
	static UFunction* pFnClearServerAuthRequestDelegate = nullptr;

	if (!pFnClearServerAuthRequestDelegate)
	{
		pFnClearServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Parms ClearServerAuthRequestDelegate_Parms;
	memcpy_s(&ClearServerAuthRequestDelegate_Parms.ServerAuthRequestDelegate, 0x18, &ServerAuthRequestDelegate, 0x18);

	this->ProcessEvent(pFnClearServerAuthRequestDelegate, &ClearServerAuthRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate)
{
	static UFunction* pFnAddServerAuthRequestDelegate = nullptr;

	if (!pFnAddServerAuthRequestDelegate)
	{
		pFnAddServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Parms AddServerAuthRequestDelegate_Parms;
	memcpy_s(&AddServerAuthRequestDelegate_Parms.ServerAuthRequestDelegate, 0x18, &ServerAuthRequestDelegate, 0x18);

	this->ProcessEvent(pFnAddServerAuthRequestDelegate, &AddServerAuthRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort)
{
	static UFunction* pFnOnServerAuthRequest = nullptr;

	if (!pFnOnServerAuthRequest)
	{
		pFnOnServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest");

	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Parms OnServerAuthRequest_Parms;
	memcpy_s(&OnServerAuthRequest_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&OnServerAuthRequest_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&OnServerAuthRequest_Parms.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&OnServerAuthRequest_Parms.ClientPort, 0x4, &ClientPort, 0x4);

	this->ProcessEvent(pFnOnServerAuthRequest, &OnServerAuthRequest_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate)
{
	static UFunction* pFnClearClientAuthRequestDelegate = nullptr;

	if (!pFnClearClientAuthRequestDelegate)
	{
		pFnClearClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Parms ClearClientAuthRequestDelegate_Parms;
	memcpy_s(&ClearClientAuthRequestDelegate_Parms.ClientAuthRequestDelegate, 0x18, &ClientAuthRequestDelegate, 0x18);

	this->ProcessEvent(pFnClearClientAuthRequestDelegate, &ClearClientAuthRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate)
{
	static UFunction* pFnAddClientAuthRequestDelegate = nullptr;

	if (!pFnAddClientAuthRequestDelegate)
	{
		pFnAddClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Parms AddClientAuthRequestDelegate_Parms;
	memcpy_s(&AddClientAuthRequestDelegate_Parms.ClientAuthRequestDelegate, 0x18, &ClientAuthRequestDelegate, 0x18);

	this->ProcessEvent(pFnAddClientAuthRequestDelegate, &AddClientAuthRequestDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)
// unsigned long                  bSecure                        (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthRequest(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure)
{
	static UFunction* pFnOnClientAuthRequest = nullptr;

	if (!pFnOnClientAuthRequest)
	{
		pFnOnClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest");

	}

	UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Parms OnClientAuthRequest_Parms;
	memcpy_s(&OnClientAuthRequest_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&OnClientAuthRequest_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&OnClientAuthRequest_Parms.ServerPort, 0x4, &ServerPort, 0x4);
	OnClientAuthRequest_Parms.bSecure = bSecure;

	this->ProcessEvent(pFnOnClientAuthRequest, &OnClientAuthRequest_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate)
{
	static UFunction* pFnClearAuthReadyDelegate = nullptr;

	if (!pFnClearAuthReadyDelegate)
	{
		pFnClearAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");

	}

	UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Parms ClearAuthReadyDelegate_Parms;
	memcpy_s(&ClearAuthReadyDelegate_Parms.AuthReadyDelegate, 0x18, &AuthReadyDelegate, 0x18);

	this->ProcessEvent(pFnClearAuthReadyDelegate, &ClearAuthReadyDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate)
{
	static UFunction* pFnAddAuthReadyDelegate = nullptr;

	if (!pFnAddAuthReadyDelegate)
	{
		pFnAddAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");

	}

	UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Parms AddAuthReadyDelegate_Parms;
	memcpy_s(&AddAuthReadyDelegate_Parms.AuthReadyDelegate, 0x18, &AuthReadyDelegate, 0x18);

	this->ProcessEvent(pFnAddAuthReadyDelegate, &AddAuthReadyDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineAuthInterfaceImpl::OnAuthReady()
{
	static UFunction* pFnOnAuthReady = nullptr;

	if (!pFnOnAuthReady)
	{
		pFnOnAuthReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady");

	}

	UOnlineAuthInterfaceImpl_execOnAuthReady_Parms OnAuthReady_Parms;

	this->ProcessEvent(pFnOnAuthReady, &OnAuthReady_Parms, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::IsReady()
{
	static UFunction* pFnIsReady = nullptr;

	if (!pFnIsReady)
	{
		pFnIsReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.IsReady");

	}

	UOnlineAuthInterfaceImpl_execIsReady_Parms IsReady_Parms;

	this->ProcessEvent(pFnIsReady, &IsReady_Parms, nullptr);

	return IsReady_Parms.ReturnValue;
};

// Function IpDrv.OnlineFriendsInterfaceImpl.GetActivePlatformId
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            AccountId                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceImpl::GetActivePlatformId(unsigned char LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId)
{
	static UFunction* pFnGetActivePlatformId = nullptr;

	if (!pFnGetActivePlatformId)
	{
		pFnGetActivePlatformId = UFunction::FindFunction("Function IpDrv.OnlineFriendsInterfaceImpl.GetActivePlatformId");

	}

	UOnlineFriendsInterfaceImpl_execGetActivePlatformId_Parms GetActivePlatformId_Parms;
	GetActivePlatformId_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetActivePlatformId_Parms.AccountId, 0x48, &AccountId, 0x48);

	this->ProcessEvent(pFnGetActivePlatformId, &GetActivePlatformId_Parms, nullptr);
	memcpy_s(&GetActivePlatformId_Parms.PlatformId, 0x48, &PlatformId, 0x48);

	return GetActivePlatformId_Parms.ReturnValue;
};

// Function IpDrv.OnlineFriendsInterfaceImpl.RequestLinkedAccounts
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    AccountIds                     (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceImpl::RequestLinkedAccounts(unsigned char LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestLinkedAccounts = nullptr;

	if (!pFnRequestLinkedAccounts)
	{
		pFnRequestLinkedAccounts = UFunction::FindFunction("Function IpDrv.OnlineFriendsInterfaceImpl.RequestLinkedAccounts");

	}

	UOnlineFriendsInterfaceImpl_execRequestLinkedAccounts_Parms RequestLinkedAccounts_Parms;
	RequestLinkedAccounts_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RequestLinkedAccounts_Parms.AccountIds, 0x10, &AccountIds, 0x10);
	memcpy_s(&RequestLinkedAccounts_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRequestLinkedAccounts, &RequestLinkedAccounts_Parms, nullptr);

	return RequestLinkedAccounts_Parms.ReturnValue;
};

// Function IpDrv.OnlineFriendsInterfaceImpl.OnReceivedLinkedAccount
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// TArray<struct FLinkedAccountData> LinkedAccountData              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineFriendsInterfaceImpl::OnReceivedLinkedAccount(unsigned long bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData)
{
	static UFunction* pFnOnReceivedLinkedAccount = nullptr;

	if (!pFnOnReceivedLinkedAccount)
	{
		pFnOnReceivedLinkedAccount = UFunction::FindFunction("Function IpDrv.OnlineFriendsInterfaceImpl.OnReceivedLinkedAccount");

	}

	UOnlineFriendsInterfaceImpl_execOnReceivedLinkedAccount_Parms OnReceivedLinkedAccount_Parms;
	OnReceivedLinkedAccount_Parms.bSuccess = bSuccess;
	memcpy_s(&OnReceivedLinkedAccount_Parms.LinkedAccountData, 0x10, &LinkedAccountData, 0x10);

	this->ProcessEvent(pFnOnReceivedLinkedAccount, &OnReceivedLinkedAccount_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GamePlayersChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGamePlayersChangedDelegate(struct FScriptDelegate GamePlayersChangedDelegate)
{
	static UFunction* pFnClearGamePlayersChangedDelegate = nullptr;

	if (!pFnClearGamePlayersChangedDelegate)
	{
		pFnClearGamePlayersChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate");

	}

	UOnlineGameInterfaceImpl_execClearGamePlayersChangedDelegate_Parms ClearGamePlayersChangedDelegate_Parms;
	memcpy_s(&ClearGamePlayersChangedDelegate_Parms.GamePlayersChangedDelegate, 0x18, &GamePlayersChangedDelegate, 0x18);

	this->ProcessEvent(pFnClearGamePlayersChangedDelegate, &ClearGamePlayersChangedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GamePlayersChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGamePlayersChangedDelegate(struct FScriptDelegate GamePlayersChangedDelegate)
{
	static UFunction* pFnAddGamePlayersChangedDelegate = nullptr;

	if (!pFnAddGamePlayersChangedDelegate)
	{
		pFnAddGamePlayersChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate");

	}

	UOnlineGameInterfaceImpl_execAddGamePlayersChangedDelegate_Parms AddGamePlayersChangedDelegate_Parms;
	memcpy_s(&AddGamePlayersChangedDelegate_Parms.GamePlayersChangedDelegate, 0x18, &GamePlayersChangedDelegate, 0x18);

	this->ProcessEvent(pFnAddGamePlayersChangedDelegate, &AddGamePlayersChangedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::OnGamePlayersChanged(struct FName SessionName, TArray<struct FUniqueNetId> Players)
{
	static UFunction* pFnOnGamePlayersChanged = nullptr;

	if (!pFnOnGamePlayersChanged)
	{
		pFnOnGamePlayersChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged");

	}

	UOnlineGameInterfaceImpl_execOnGamePlayersChanged_Parms OnGamePlayersChanged_Parms;
	memcpy_s(&OnGamePlayersChanged_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnGamePlayersChanged_Parms.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(pFnOnGamePlayersChanged, &OnGamePlayersChanged_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ServerAddress                  (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  Visibility                     (CPF_Parm)

void UOnlineGameInterfaceImpl::SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, unsigned char Visibility)
{
	static UFunction* pFnSetFriendJoinLocation = nullptr;

	if (!pFnSetFriendJoinLocation)
	{
		pFnSetFriendJoinLocation = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation");

	}

	UOnlineGameInterfaceImpl_execSetFriendJoinLocation_Parms SetFriendJoinLocation_Parms;
	memcpy_s(&SetFriendJoinLocation_Parms.JoinablePlayerID, 0x48, &JoinablePlayerID, 0x48);
	memcpy_s(&SetFriendJoinLocation_Parms.ServerAddress, 0x10, &ServerAddress, 0x10);
	SetFriendJoinLocation_Parms.Visibility = Visibility;

	this->ProcessEvent(pFnSetFriendJoinLocation, &SetFriendJoinLocation_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         OldDelegate                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearReportMatchmakingInfoDelegate(struct FScriptDelegate OldDelegate)
{
	static UFunction* pFnClearReportMatchmakingInfoDelegate = nullptr;

	if (!pFnClearReportMatchmakingInfoDelegate)
	{
		pFnClearReportMatchmakingInfoDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate");

	}

	UOnlineGameInterfaceImpl_execClearReportMatchmakingInfoDelegate_Parms ClearReportMatchmakingInfoDelegate_Parms;
	memcpy_s(&ClearReportMatchmakingInfoDelegate_Parms.OldDelegate, 0x18, &OldDelegate, 0x18);

	this->ProcessEvent(pFnClearReportMatchmakingInfoDelegate, &ClearReportMatchmakingInfoDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         NewDelegate                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddReportMatchmakingInfoDelegate(struct FScriptDelegate NewDelegate)
{
	static UFunction* pFnAddReportMatchmakingInfoDelegate = nullptr;

	if (!pFnAddReportMatchmakingInfoDelegate)
	{
		pFnAddReportMatchmakingInfoDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate");

	}

	UOnlineGameInterfaceImpl_execAddReportMatchmakingInfoDelegate_Parms AddReportMatchmakingInfoDelegate_Parms;
	memcpy_s(&AddReportMatchmakingInfoDelegate_Parms.NewDelegate, 0x18, &NewDelegate, 0x18);

	this->ProcessEvent(pFnAddReportMatchmakingInfoDelegate, &AddReportMatchmakingInfoDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 NewInfo                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::EventReportMatchmakingInfo(struct FString NewInfo)
{
	static UFunction* pFnEventReportMatchmakingInfo = nullptr;

	if (!pFnEventReportMatchmakingInfo)
	{
		pFnEventReportMatchmakingInfo = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo");

	}

	UOnlineGameInterfaceImpl_execEventReportMatchmakingInfo_Parms EventReportMatchmakingInfo_Parms;
	memcpy_s(&EventReportMatchmakingInfo_Parms.NewInfo, 0x10, &NewInfo, 0x10);

	this->ProcessEvent(pFnEventReportMatchmakingInfo, &EventReportMatchmakingInfo_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate)
{
	static UFunction* pFnClearQosStatusChangedDelegate = nullptr;

	if (!pFnClearQosStatusChangedDelegate)
	{
		pFnClearQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");

	}

	UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Parms ClearQosStatusChangedDelegate_Parms;
	memcpy_s(&ClearQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, 0x18, &QosStatusChangedDelegate, 0x18);

	this->ProcessEvent(pFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate)
{
	static UFunction* pFnAddQosStatusChangedDelegate = nullptr;

	if (!pFnAddQosStatusChangedDelegate)
	{
		pFnAddQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");

	}

	UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Parms AddQosStatusChangedDelegate_Parms;
	memcpy_s(&AddQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, 0x18, &QosStatusChangedDelegate, 0x18);

	this->ProcessEvent(pFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            NumComplete                    (CPF_Parm)
// int                            NumTotal                       (CPF_Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int NumComplete, int NumTotal)
{
	static UFunction* pFnOnQosStatusChanged = nullptr;

	if (!pFnOnQosStatusChanged)
	{
		pFnOnQosStatusChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");

	}

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Parms OnQosStatusChanged_Parms;
	memcpy_s(&OnQosStatusChanged_Parms.NumComplete, 0x4, &NumComplete, 0x4);
	memcpy_s(&OnQosStatusChanged_Parms.NumTotal, 0x4, &NumTotal, 0x4);

	this->ProcessEvent(pFnOnQosStatusChanged, &OnQosStatusChanged_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo)
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = nullptr;

	if (!pFnBindPlatformSpecificSessionToSearch)
	{
		pFnBindPlatformSpecificSessionToSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");

	}

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	memcpy_s(&BindPlatformSpecificSessionToSearch_Parms.SearchSettings, 0x8, &SearchSettings, 0x8);
	memcpy_s(&BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, nullptr);

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, unsigned char& PlatformSpecificInfo)
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = nullptr;

	if (!pFnReadPlatformSpecificSessionInfoBySessionName)
	{
		pFnReadPlatformSpecificSessionInfoBySessionName = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");

	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, nullptr);
	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& DesiredGame, unsigned char& PlatformSpecificInfo)
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = nullptr;

	if (!pFnReadPlatformSpecificSessionInfo)
	{
		pFnReadPlatformSpecificSessionInfo = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");

	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, nullptr);

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;
	memcpy_s(&ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x10, &DesiredGame, 0x10);
	memcpy_s(&ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            StartAt                        (CPF_Parm)
// int                            NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static UFunction* pFnQueryNonAdvertisedData = nullptr;

	if (!pFnQueryNonAdvertisedData)
	{
		pFnQueryNonAdvertisedData = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");

	}

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	memcpy_s(&QueryNonAdvertisedData_Parms.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&QueryNonAdvertisedData_Parms.NumberToQuery, 0x4, &NumberToQuery, 0x4);

	this->ProcessEvent(pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, nullptr);

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearJoinMigratedOnlineGameCompleteDelegate)
	{
		pFnClearJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Parms ClearJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, 0x18, &JoinMigratedOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddJoinMigratedOnlineGameCompleteDelegate)
	{
		pFnAddJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Parms AddJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, 0x18, &JoinMigratedOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinMigratedOnlineGameComplete = nullptr;

	if (!pFnOnJoinMigratedOnlineGameComplete)
	{
		pFnOnJoinMigratedOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Parms OnJoinMigratedOnlineGameComplete_Parms;
	memcpy_s(&OnJoinMigratedOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnJoinMigratedOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame)
{
	static UFunction* pFnJoinMigratedOnlineGame = nullptr;

	if (!pFnJoinMigratedOnlineGame)
	{
		pFnJoinMigratedOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");

	}

	UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Parms JoinMigratedOnlineGame_Parms;
	JoinMigratedOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy_s(&JoinMigratedOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Parms, nullptr);
	memcpy_s(&JoinMigratedOnlineGame_Parms.DesiredGame, 0x10, &DesiredGame, 0x10);

	return JoinMigratedOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearMigrateOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearMigrateOnlineGameCompleteDelegate)
	{
		pFnClearMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Parms ClearMigrateOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, 0x18, &MigrateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddMigrateOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddMigrateOnlineGameCompleteDelegate)
	{
		pFnAddMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Parms AddMigrateOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, 0x18, &MigrateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnMigrateOnlineGameComplete = nullptr;

	if (!pFnOnMigrateOnlineGameComplete)
	{
		pFnOnMigrateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Parms OnMigrateOnlineGameComplete_Parms;
	memcpy_s(&OnMigrateOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnMigrateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  HostingPlayerNum               (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(unsigned char HostingPlayerNum, struct FName SessionName)
{
	static UFunction* pFnMigrateOnlineGame = nullptr;

	if (!pFnMigrateOnlineGame)
	{
		pFnMigrateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");

	}

	UOnlineGameInterfaceImpl_execMigrateOnlineGame_Parms MigrateOnlineGame_Parms;
	MigrateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy_s(&MigrateOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnMigrateOnlineGame, &MigrateOnlineGame_Parms, nullptr);

	return MigrateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate)
{
	static UFunction* pFnClearRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!pFnClearRecalculateSkillRatingCompleteDelegate)
	{
		pFnClearRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Parms ClearRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy_s(&ClearRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingGameCompleteDelegate, 0x18, &RecalculateSkillRatingGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingCompleteDelegate)
{
	static UFunction* pFnAddRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!pFnAddRecalculateSkillRatingCompleteDelegate)
	{
		pFnAddRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Parms AddRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy_s(&AddRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingCompleteDelegate, 0x18, &RecalculateSkillRatingCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRecalculateSkillRatingComplete = nullptr;

	if (!pFnOnRecalculateSkillRatingComplete)
	{
		pFnOnRecalculateSkillRatingComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");

	}

	UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Parms OnRecalculateSkillRatingComplete_Parms;
	memcpy_s(&OnRecalculateSkillRatingComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnRecalculateSkillRatingComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(struct FName SessionName, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnRecalculateSkillRating = nullptr;

	if (!pFnRecalculateSkillRating)
	{
		pFnRecalculateSkillRating = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");

	}

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy_s(&RecalculateSkillRating_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, nullptr);
	memcpy_s(&RecalculateSkillRating_Parms.Players, 0x10, &Players, 0x10);

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName)
{
	static UFunction* pFnAcceptGameInvite = nullptr;

	if (!pFnAcceptGameInvite)
	{
		pFnAcceptGameInvite = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");

	}

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AcceptGameInvite_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnAcceptGameInvite, &AcceptGameInvite_Parms, nullptr);

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = nullptr;

	if (!pFnClearGameInviteAcceptedDelegate)
	{
		pFnClearGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");

	}

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, 0x18, &GameInviteAcceptedDelegate, 0x18);

	this->ProcessEvent(pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = nullptr;

	if (!pFnAddGameInviteAcceptedDelegate)
	{
		pFnAddGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");

	}

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, 0x18, &GameInviteAcceptedDelegate, 0x18);

	this->ProcessEvent(pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ErrorString                    (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* pFnOnGameInviteAccepted = nullptr;

	if (!pFnOnGameInviteAccepted)
	{
		pFnOnGameInviteAccepted = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");

	}

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;
	memcpy_s(&OnGameInviteAccepted_Parms.ErrorString, 0x10, &ErrorString, 0x10);

	this->ProcessEvent(pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, nullptr);
	memcpy_s(&OnGameInviteAccepted_Parms.InviteResult, 0x10, &InviteResult, 0x10);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FName                   SessionName                    (CPF_Parm)

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers(struct FName SessionName)
{
	static UFunction* pFnGetArbitratedPlayers = nullptr;

	if (!pFnGetArbitratedPlayers)
	{
		pFnGetArbitratedPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");

	}

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy_s(&GetArbitratedPlayers_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, nullptr);

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = nullptr;

	if (!pFnClearArbitrationRegistrationCompleteDelegate)
	{
		pFnClearArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy_s(&ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, 0x18, &ArbitrationRegistrationCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = nullptr;

	if (!pFnAddArbitrationRegistrationCompleteDelegate)
	{
		pFnAddArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy_s(&AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, 0x18, &ArbitrationRegistrationCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnArbitrationRegistrationComplete = nullptr;

	if (!pFnOnArbitrationRegistrationComplete)
	{
		pFnOnArbitrationRegistrationComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");

	}

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy_s(&OnArbitrationRegistrationComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(struct FName SessionName)
{
	static UFunction* pFnRegisterForArbitration = nullptr;

	if (!pFnRegisterForArbitration)
	{
		pFnRegisterForArbitration = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");

	}

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy_s(&RegisterForArbitration_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnRegisterForArbitration, &RegisterForArbitration_Parms, nullptr);

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearEndOnlineGameCompleteDelegate)
	{
		pFnClearEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, 0x18, &EndOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddEndOnlineGameCompleteDelegate)
	{
		pFnAddEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, 0x18, &EndOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnEndOnlineGameComplete = nullptr;

	if (!pFnOnEndOnlineGameComplete)
	{
		pFnOnEndOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy_s(&OnEndOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::EndOnlineGame(struct FName SessionName)
{
	static UFunction* pFnEndOnlineGame = nullptr;

	if (!pFnEndOnlineGame)
	{
		pFnEndOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");

	}

	UOnlineGameInterfaceImpl_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy_s(&EndOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndOnlineGame, &EndOnlineGame_Parms, nullptr);

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearStartOnlineGameCompleteDelegate)
	{
		pFnClearStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, 0x18, &StartOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddStartOnlineGameCompleteDelegate)
	{
		pFnAddStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, 0x18, &StartOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnStartOnlineGameComplete = nullptr;

	if (!pFnOnStartOnlineGameComplete)
	{
		pFnOnStartOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy_s(&OnStartOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(struct FName SessionName)
{
	static UFunction* pFnStartOnlineGame = nullptr;

	if (!pFnStartOnlineGame)
	{
		pFnStartOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");

	}

	UOnlineGameInterfaceImpl_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy_s(&StartOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartOnlineGame, &StartOnlineGame_Parms, nullptr);

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!pFnClearUnregisterPlayerCompleteDelegate)
	{
		pFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!pFnAddUnregisterPlayerCompleteDelegate)
	{
		pFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnregisterPlayerComplete = nullptr;

	if (!pFnOnUnregisterPlayerComplete)
	{
		pFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");

	}

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy_s(&OnUnregisterPlayerComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnUnregisterPlayerComplete_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnUnregisterPlayers = nullptr;

	if (!pFnUnregisterPlayers)
	{
		pFnUnregisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");

	}

	UOnlineGameInterfaceImpl_execUnregisterPlayers_Parms UnregisterPlayers_Parms;
	memcpy_s(&UnregisterPlayers_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnUnregisterPlayers, &UnregisterPlayers_Parms, nullptr);
	memcpy_s(&UnregisterPlayers_Parms.Players, 0x10, &Players, 0x10);

	return UnregisterPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterPlayer = nullptr;

	if (!pFnUnregisterPlayer)
	{
		pFnUnregisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");

	}

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy_s(&UnregisterPlayer_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnUnregisterPlayer, &UnregisterPlayer_Parms, nullptr);

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!pFnClearRegisterPlayerCompleteDelegate)
	{
		pFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!pFnAddRegisterPlayerCompleteDelegate)
	{
		pFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterPlayerComplete = nullptr;

	if (!pFnOnRegisterPlayerComplete)
	{
		pFnOnRegisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");

	}

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy_s(&OnRegisterPlayerComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnRegisterPlayerComplete_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RegisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnRegisterPlayers = nullptr;

	if (!pFnRegisterPlayers)
	{
		pFnRegisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");

	}

	UOnlineGameInterfaceImpl_execRegisterPlayers_Parms RegisterPlayers_Parms;
	memcpy_s(&RegisterPlayers_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnRegisterPlayers, &RegisterPlayers_Parms, nullptr);
	memcpy_s(&RegisterPlayers_Parms.Players, 0x10, &Players, 0x10);

	return RegisterPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* pFnRegisterPlayer = nullptr;

	if (!pFnRegisterPlayer)
	{
		pFnRegisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");

	}

	UOnlineGameInterfaceImpl_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy_s(&RegisterPlayer_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent(pFnRegisterPlayer, &RegisterPlayer_Parms, nullptr);

	return RegisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FString                 ConnectInfo                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(struct FName SessionName, struct FString& ConnectInfo)
{
	static UFunction* pFnGetResolvedConnectString = nullptr;

	if (!pFnGetResolvedConnectString)
	{
		pFnGetResolvedConnectString = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");

	}

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy_s(&GetResolvedConnectString_Parms.SessionName, 0x8, &SessionName, 0x8);

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, nullptr);

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;
	memcpy_s(&GetResolvedConnectString_Parms.ConnectInfo, 0x10, &ConnectInfo, 0x10);

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearJoinOnlineGameCompleteDelegate)
	{
		pFnClearJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, 0x18, &JoinOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddJoinOnlineGameCompleteDelegate)
	{
		pFnAddJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, 0x18, &JoinOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinOnlineGameComplete = nullptr;

	if (!pFnOnJoinOnlineGameComplete)
	{
		pFnOnJoinOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy_s(&OnJoinOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGame(unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame)
{
	static UFunction* pFnJoinOnlineGame = nullptr;

	if (!pFnJoinOnlineGame)
	{
		pFnJoinOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");

	}

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy_s(&JoinOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnJoinOnlineGame, &JoinOnlineGame_Parms, nullptr);

	pFnJoinOnlineGame->FunctionFlags |= 0x400;
	memcpy_s(&JoinOnlineGame_Parms.DesiredGame, 0x10, &DesiredGame, 0x10);

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* pFnFreeSearchResults = nullptr;

	if (!pFnFreeSearchResults)
	{
		pFnFreeSearchResults = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");

	}

	UOnlineGameInterfaceImpl_execFreeSearchResults_Parms FreeSearchResults_Parms;
	memcpy_s(&FreeSearchResults_Parms.Search, 0x8, &Search, 0x8);

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFreeSearchResults, &FreeSearchResults_Parms, nullptr);

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!pFnClearCancelFindOnlineGamesCompleteDelegate)
	{
		pFnClearCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy_s(&ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, 0x18, &CancelFindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!pFnAddCancelFindOnlineGamesCompleteDelegate)
	{
		pFnAddCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy_s(&AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, 0x18, &CancelFindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = nullptr;

	if (!pFnOnCancelFindOnlineGamesComplete)
	{
		pFnOnCancelFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");

	}

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static UFunction* pFnCancelFindOnlineGames = nullptr;

	if (!pFnCancelFindOnlineGames)
	{
		pFnCancelFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");

	}

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	pFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, nullptr);

	pFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = nullptr;

	if (!pFnClearFindOnlineGamesCompleteDelegate)
	{
		pFnClearFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy_s(&ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, 0x18, &FindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = nullptr;

	if (!pFnAddFindOnlineGamesCompleteDelegate)
	{
		pFnAddFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy_s(&AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, 0x18, &FindOnlineGamesCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)

bool UOnlineGameInterfaceImpl::FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static UFunction* pFnFindOnlineGames = nullptr;

	if (!pFnFindOnlineGames)
	{
		pFnFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");

	}

	UOnlineGameInterfaceImpl_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	memcpy_s(&FindOnlineGames_Parms.SearchSettings, 0x8, &SearchSettings, 0x8);

	pFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindOnlineGames, &FindOnlineGames_Parms, nullptr);

	pFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearDestroyOnlineGameCompleteDelegate)
	{
		pFnClearDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, 0x18, &DestroyOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddDestroyOnlineGameCompleteDelegate)
	{
		pFnAddDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, 0x18, &DestroyOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDestroyOnlineGameComplete = nullptr;

	if (!pFnOnDestroyOnlineGameComplete)
	{
		pFnOnDestroyOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy_s(&OnDestroyOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(struct FName SessionName)
{
	static UFunction* pFnDestroyOnlineGame = nullptr;

	if (!pFnDestroyOnlineGame)
	{
		pFnDestroyOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");

	}

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy_s(&DestroyOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, nullptr);

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearUpdateOnlineGameCompleteDelegate)
	{
		pFnClearUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, 0x18, &UpdateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddUpdateOnlineGameCompleteDelegate)
	{
		pFnAddUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, 0x18, &UpdateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUpdateOnlineGameComplete = nullptr;

	if (!pFnOnUpdateOnlineGameComplete)
	{
		pFnOnUpdateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy_s(&OnUpdateOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* pFnUpdateOnlineGame = nullptr;

	if (!pFnUpdateOnlineGame)
	{
		pFnUpdateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");

	}

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy_s(&UpdateOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Parms.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, nullptr);

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = nullptr;

	if (!pFnClearCreateOnlineGameCompleteDelegate)
	{
		pFnClearCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy_s(&ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, 0x18, &CreateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = nullptr;

	if (!pFnAddCreateOnlineGameCompleteDelegate)
	{
		pFnAddCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");

	}

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy_s(&AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, 0x18, &CreateOnlineGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCreateOnlineGameComplete = nullptr;

	if (!pFnOnCreateOnlineGameComplete)
	{
		pFnOnCreateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");

	}

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy_s(&OnCreateOnlineGameComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  HostingPlayerNum               (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     NewGameSettings                (CPF_Parm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static UFunction* pFnCreateOnlineGame = nullptr;

	if (!pFnCreateOnlineGame)
	{
		pFnCreateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");

	}

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy_s(&CreateOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&CreateOnlineGame_Parms.NewGameSettings, 0x8, &NewGameSettings, 0x8);

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateOnlineGame, &CreateOnlineGame_Parms, nullptr);

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSearch*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static UFunction* pFnGetGameSearch = nullptr;

	if (!pFnGetGameSearch)
	{
		pFnGetGameSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch");

	}

	UOnlineGameInterfaceImpl_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent(pFnGetGameSearch, &GetGameSearch_Parms, nullptr);

	return GetGameSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(struct FName SessionName)
{
	static UFunction* pFnGetGameSettings = nullptr;

	if (!pFnGetGameSettings)
	{
		pFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings");

	}

	UOnlineGameInterfaceImpl_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy_s(&GetGameSettings_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnGetGameSettings, &GetGameSettings_Parms, nullptr);

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnFindOnlineGamesComplete = nullptr;

	if (!pFnOnFindOnlineGamesComplete)
	{
		pFnOnFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");

	}

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.GetImageType
// [0x00032401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ContentType                    (CPF_Parm | CPF_NeedCtorLink)

unsigned char UOnlineImageDownloaderWeb::GetImageType(struct FString ContentType)
{
	static UFunction* pFnGetImageType = nullptr;

	if (!pFnGetImageType)
	{
		pFnGetImageType = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetImageType");

	}

	UOnlineImageDownloaderWeb_execGetImageType_Parms GetImageType_Parms;
	memcpy_s(&GetImageType_Parms.ContentType, 0x10, &ContentType, 0x10);

	pFnGetImageType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetImageType, &GetImageType_Parms, nullptr);

	pFnGetImageType->FunctionFlags |= 0x400;

	return GetImageType_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownload
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 NewURL                         (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InternalCallbackOnComplete     (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ExternalCallback               (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bSupportSRGB                   (CPF_Parm)

void UOnlineImageDownloaderWeb::QueueURLForDownload(struct FString NewURL, struct FScriptDelegate InternalCallbackOnComplete, struct FScriptDelegate ExternalCallback, unsigned long bSupportSRGB)
{
	static UFunction* pFnQueueURLForDownload = nullptr;

	if (!pFnQueueURLForDownload)
	{
		pFnQueueURLForDownload = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownload");

	}

	UOnlineImageDownloaderWeb_execQueueURLForDownload_Parms QueueURLForDownload_Parms;
	memcpy_s(&QueueURLForDownload_Parms.NewURL, 0x10, &NewURL, 0x10);
	memcpy_s(&QueueURLForDownload_Parms.InternalCallbackOnComplete, 0x18, &InternalCallbackOnComplete, 0x18);
	memcpy_s(&QueueURLForDownload_Parms.ExternalCallback, 0x18, &ExternalCallback, 0x18);
	QueueURLForDownload_Parms.bSupportSRGB = bSupportSRGB;

	this->ProcessEvent(pFnQueueURLForDownload, &QueueURLForDownload_Parms, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UOnlineImageDownloaderWeb::DebugDraw(class UCanvas* Canvas)
{
	static UFunction* pFnDebugDraw = nullptr;

	if (!pFnDebugDraw)
	{
		pFnDebugDraw = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DebugDraw");

	}

	UOnlineImageDownloaderWeb_execDebugDraw_Parms DebugDraw_Parms;
	memcpy_s(&DebugDraw_Parms.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(pFnDebugDraw, &DebugDraw_Parms, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlineImageDownloaderWeb::OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnOnDownloadComplete = nullptr;

	if (!pFnOnDownloadComplete)
	{
		pFnOnDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete");

	}

	UOnlineImageDownloaderWeb_execOnDownloadComplete_Parms OnDownloadComplete_Parms;
	memcpy_s(&OnDownloadComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDownloadComplete_Parms.Response, 0x8, &Response, 0x8);
	OnDownloadComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnOnDownloadComplete, &OnDownloadComplete_Parms, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00050003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::DownloadNextImage()
{
	static UFunction* pFnDownloadNextImage = nullptr;

	if (!pFnDownloadNextImage)
	{
		pFnDownloadNextImage = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage");

	}

	UOnlineImageDownloaderWeb_execDownloadNextImage_Parms DownloadNextImage_Parms;

	this->ProcessEvent(pFnDownloadNextImage, &DownloadNextImage_Parms, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00434003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FinishedCallback               (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bSupportSRGB                   (CPF_OptionalParm | CPF_Parm)
// TArray<struct FString>         URLs                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::RequestOnlineImages(struct FScriptDelegate FinishedCallback, unsigned long bSupportSRGB, TArray<struct FString>& URLs)
{
	static UFunction* pFnRequestOnlineImages = nullptr;

	if (!pFnRequestOnlineImages)
	{
		pFnRequestOnlineImages = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages");

	}

	UOnlineImageDownloaderWeb_execRequestOnlineImages_Parms RequestOnlineImages_Parms;
	memcpy_s(&RequestOnlineImages_Parms.FinishedCallback, 0x18, &FinishedCallback, 0x18);
	RequestOnlineImages_Parms.bSupportSRGB = bSupportSRGB;

	this->ProcessEvent(pFnRequestOnlineImages, &RequestOnlineImages_Parms, nullptr);
	memcpy_s(&RequestOnlineImages_Parms.URLs, 0x10, &URLs, 0x10);
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture(struct FString URL)
{
	static UFunction* pFnGetOnlineImageTexture = nullptr;

	if (!pFnGetOnlineImageTexture)
	{
		pFnGetOnlineImageTexture = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture");

	}

	UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Parms GetOnlineImageTexture_Parms;
	memcpy_s(&GetOnlineImageTexture_Parms.URL, 0x10, &URL, 0x10);

	this->ProcessEvent(pFnGetOnlineImageTexture, &GetOnlineImageTexture_Parms, nullptr);

	return GetOnlineImageTexture_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearQueue
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearQueue()
{
	static UFunction* pFnClearQueue = nullptr;

	if (!pFnClearQueue)
	{
		pFnClearQueue = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearQueue");

	}

	UOnlineImageDownloaderWeb_execClearQueue_Parms ClearQueue_Parms;

	pFnClearQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearQueue, &ClearQueue_Parms, nullptr);

	pFnClearQueue->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.Dequeue
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineImageDownloaderWeb::Dequeue()
{
	static UFunction* pFnDequeue = nullptr;

	if (!pFnDequeue)
	{
		pFnDequeue = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.Dequeue");

	}

	UOnlineImageDownloaderWeb_execDequeue_Parms Dequeue_Parms;

	pFnDequeue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDequeue, &Dequeue_Parms, nullptr);

	pFnDequeue->FunctionFlags |= 0x400;

	return Dequeue_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.Enqueue
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::Enqueue(struct FString URL)
{
	static UFunction* pFnEnqueue = nullptr;

	if (!pFnEnqueue)
	{
		pFnEnqueue = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.Enqueue");

	}

	UOnlineImageDownloaderWeb_execEnqueue_Parms Enqueue_Parms;
	memcpy_s(&Enqueue_Parms.URL, 0x10, &URL, 0x10);

	pFnEnqueue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnqueue, &Enqueue_Parms, nullptr);

	pFnEnqueue->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearActiveDownloads
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearActiveDownloads()
{
	static UFunction* pFnClearActiveDownloads = nullptr;

	if (!pFnClearActiveDownloads)
	{
		pFnClearActiveDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearActiveDownloads");

	}

	UOnlineImageDownloaderWeb_execClearActiveDownloads_Parms ClearActiveDownloads_Parms;

	pFnClearActiveDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearActiveDownloads, &ClearActiveDownloads_Parms, nullptr);

	pFnClearActiveDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearCompletedDownloads
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearCompletedDownloads()
{
	static UFunction* pFnClearCompletedDownloads = nullptr;

	if (!pFnClearCompletedDownloads)
	{
		pFnClearCompletedDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearCompletedDownloads");

	}

	UOnlineImageDownloaderWeb_execClearCompletedDownloads_Parms ClearCompletedDownloads_Parms;

	pFnClearCompletedDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearCompletedDownloads, &ClearCompletedDownloads_Parms, nullptr);

	pFnClearCompletedDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequestedURL                   (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            DecodedImage                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::HandleImageDecoded(struct FString RequestedURL, struct FImageLayout& DecodedImage)
{
	static UFunction* pFnHandleImageDecoded = nullptr;

	if (!pFnHandleImageDecoded)
	{
		pFnHandleImageDecoded = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded");

	}

	UOnlineImageDownloaderWeb_execHandleImageDecoded_Parms HandleImageDecoded_Parms;
	memcpy_s(&HandleImageDecoded_Parms.RequestedURL, 0x10, &RequestedURL, 0x10);

	pFnHandleImageDecoded->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHandleImageDecoded, &HandleImageDecoded_Parms, nullptr);

	pFnHandleImageDecoded->FunctionFlags |= 0x400;
	memcpy_s(&HandleImageDecoded_Parms.DecodedImage, 0x18, &DecodedImage, 0x18);
};

// Function IpDrv.OnlineImageDownloaderWeb.RequeueFailedURL
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::RequeueFailedURL(struct FString URL)
{
	static UFunction* pFnRequeueFailedURL = nullptr;

	if (!pFnRequeueFailedURL)
	{
		pFnRequeueFailedURL = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.RequeueFailedURL");

	}

	UOnlineImageDownloaderWeb_execRequeueFailedURL_Parms RequeueFailedURL_Parms;
	memcpy_s(&RequeueFailedURL_Parms.URL, 0x10, &URL, 0x10);

	pFnRequeueFailedURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequeueFailedURL, &RequeueFailedURL_Parms, nullptr);

	pFnRequeueFailedURL->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextQueuedURL
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::DownloadNextQueuedURL()
{
	static UFunction* pFnDownloadNextQueuedURL = nullptr;

	if (!pFnDownloadNextQueuedURL)
	{
		pFnDownloadNextQueuedURL = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextQueuedURL");

	}

	UOnlineImageDownloaderWeb_execDownloadNextQueuedURL_Parms DownloadNextQueuedURL_Parms;

	pFnDownloadNextQueuedURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDownloadNextQueuedURL, &DownloadNextQueuedURL_Parms, nullptr);

	pFnDownloadNextQueuedURL->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.UpdateActiveDownloadFromResponse
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// struct FScriptDelegate         OnDecodedCallback              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::UpdateActiveDownloadFromResponse(struct FString URL, class UHttpResponseInterface* Response, struct FScriptDelegate OnDecodedCallback)
{
	static UFunction* pFnUpdateActiveDownloadFromResponse = nullptr;

	if (!pFnUpdateActiveDownloadFromResponse)
	{
		pFnUpdateActiveDownloadFromResponse = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.UpdateActiveDownloadFromResponse");

	}

	UOnlineImageDownloaderWeb_execUpdateActiveDownloadFromResponse_Parms UpdateActiveDownloadFromResponse_Parms;
	memcpy_s(&UpdateActiveDownloadFromResponse_Parms.URL, 0x10, &URL, 0x10);
	memcpy_s(&UpdateActiveDownloadFromResponse_Parms.Response, 0x8, &Response, 0x8);
	memcpy_s(&UpdateActiveDownloadFromResponse_Parms.OnDecodedCallback, 0x18, &OnDecodedCallback, 0x18);

	pFnUpdateActiveDownloadFromResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateActiveDownloadFromResponse, &UpdateActiveDownloadFromResponse_Parms, nullptr);

	pFnUpdateActiveDownloadFromResponse->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.MarkActiveDownloadFailed
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::MarkActiveDownloadFailed(struct FString URL)
{
	static UFunction* pFnMarkActiveDownloadFailed = nullptr;

	if (!pFnMarkActiveDownloadFailed)
	{
		pFnMarkActiveDownloadFailed = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.MarkActiveDownloadFailed");

	}

	UOnlineImageDownloaderWeb_execMarkActiveDownloadFailed_Parms MarkActiveDownloadFailed_Parms;
	memcpy_s(&MarkActiveDownloadFailed_Parms.URL, 0x10, &URL, 0x10);

	pFnMarkActiveDownloadFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMarkActiveDownloadFailed, &MarkActiveDownloadFailed_Parms, nullptr);

	pFnMarkActiveDownloadFailed->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownloadInternal
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 NewURL                         (CPF_Parm | CPF_NeedCtorLink)
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UTexture2DDynamic*       TextureHolder                  (CPF_Parm)
// struct FScriptDelegate         OnDecodedCallback              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::QueueURLForDownloadInternal(struct FString NewURL, class UHttpRequestInterface* Request, class UTexture2DDynamic* TextureHolder, struct FScriptDelegate OnDecodedCallback)
{
	static UFunction* pFnQueueURLForDownloadInternal = nullptr;

	if (!pFnQueueURLForDownloadInternal)
	{
		pFnQueueURLForDownloadInternal = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownloadInternal");

	}

	UOnlineImageDownloaderWeb_execQueueURLForDownloadInternal_Parms QueueURLForDownloadInternal_Parms;
	memcpy_s(&QueueURLForDownloadInternal_Parms.NewURL, 0x10, &NewURL, 0x10);
	memcpy_s(&QueueURLForDownloadInternal_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&QueueURLForDownloadInternal_Parms.TextureHolder, 0x8, &TextureHolder, 0x8);
	memcpy_s(&QueueURLForDownloadInternal_Parms.OnDecodedCallback, 0x18, &OnDecodedCallback, 0x18);

	pFnQueueURLForDownloadInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQueueURLForDownloadInternal, &QueueURLForDownloadInternal_Parms, nullptr);

	pFnQueueURLForDownloadInternal->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.AddCallbackToDownload
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         NewCallback                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::AddCallbackToDownload(struct FString URL, struct FScriptDelegate NewCallback)
{
	static UFunction* pFnAddCallbackToDownload = nullptr;

	if (!pFnAddCallbackToDownload)
	{
		pFnAddCallbackToDownload = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.AddCallbackToDownload");

	}

	UOnlineImageDownloaderWeb_execAddCallbackToDownload_Parms AddCallbackToDownload_Parms;
	memcpy_s(&AddCallbackToDownload_Parms.URL, 0x10, &URL, 0x10);
	memcpy_s(&AddCallbackToDownload_Parms.NewCallback, 0x18, &NewCallback, 0x18);

	pFnAddCallbackToDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddCallbackToDownload, &AddCallbackToDownload_Parms, nullptr);

	pFnAddCallbackToDownload->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.GetDownload
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FOnlineImageDownload    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

struct FOnlineImageDownload UOnlineImageDownloaderWeb::GetDownload(struct FString URL)
{
	static UFunction* pFnGetDownload = nullptr;

	if (!pFnGetDownload)
	{
		pFnGetDownload = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetDownload");

	}

	UOnlineImageDownloaderWeb_execGetDownload_Parms GetDownload_Parms;
	memcpy_s(&GetDownload_Parms.URL, 0x10, &URL, 0x10);

	pFnGetDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDownload, &GetDownload_Parms, nullptr);

	pFnGetDownload->FunctionFlags |= 0x400;

	return GetDownload_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLQueued
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::IsURLQueued(struct FString URL)
{
	static UFunction* pFnIsURLQueued = nullptr;

	if (!pFnIsURLQueued)
	{
		pFnIsURLQueued = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.IsURLQueued");

	}

	UOnlineImageDownloaderWeb_execIsURLQueued_Parms IsURLQueued_Parms;
	memcpy_s(&IsURLQueued_Parms.URL, 0x10, &URL, 0x10);

	pFnIsURLQueued->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsURLQueued, &IsURLQueued_Parms, nullptr);

	pFnIsURLQueued->FunctionFlags |= 0x400;

	return IsURLQueued_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLActive
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::IsURLActive(struct FString URL)
{
	static UFunction* pFnIsURLActive = nullptr;

	if (!pFnIsURLActive)
	{
		pFnIsURLActive = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.IsURLActive");

	}

	UOnlineImageDownloaderWeb_execIsURLActive_Parms IsURLActive_Parms;
	memcpy_s(&IsURLActive_Parms.URL, 0x10, &URL, 0x10);

	pFnIsURLActive->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsURLActive, &IsURLActive_Parms, nullptr);

	pFnIsURLActive->FunctionFlags |= 0x400;

	return IsURLActive_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLFail
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::DidURLFail(struct FString URL)
{
	static UFunction* pFnDidURLFail = nullptr;

	if (!pFnDidURLFail)
	{
		pFnDidURLFail = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DidURLFail");

	}

	UOnlineImageDownloaderWeb_execDidURLFail_Parms DidURLFail_Parms;
	memcpy_s(&DidURLFail_Parms.URL, 0x10, &URL, 0x10);

	pFnDidURLFail->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDidURLFail, &DidURLFail_Parms, nullptr);

	pFnDidURLFail->FunctionFlags |= 0x400;

	return DidURLFail_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLSucceed
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::DidURLSucceed(struct FString URL)
{
	static UFunction* pFnDidURLSucceed = nullptr;

	if (!pFnDidURLSucceed)
	{
		pFnDidURLSucceed = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DidURLSucceed");

	}

	UOnlineImageDownloaderWeb_execDidURLSucceed_Parms DidURLSucceed_Parms;
	memcpy_s(&DidURLSucceed_Parms.URL, 0x10, &URL, 0x10);

	pFnDidURLSucceed->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDidURLSucceed, &DidURLSucceed_Parms, nullptr);

	pFnDidURLSucceed->FunctionFlags |= 0x400;

	return DidURLSucceed_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLTracked
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineImageDownloaderWeb::IsURLTracked(struct FString URL)
{
	static UFunction* pFnIsURLTracked = nullptr;

	if (!pFnIsURLTracked)
	{
		pFnIsURLTracked = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.IsURLTracked");

	}

	UOnlineImageDownloaderWeb_execIsURLTracked_Parms IsURLTracked_Parms;
	memcpy_s(&IsURLTracked_Parms.URL, 0x10, &URL, 0x10);

	pFnIsURLTracked->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsURLTracked, &IsURLTracked_Parms, nullptr);

	pFnIsURLTracked->FunctionFlags |= 0x400;

	return IsURLTracked_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.AllValues
// [0x00444405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_NetMulticast | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int                            MaxValues                      (CPF_OptionalParm | CPF_Parm)
// struct FOnlineImageDownload    OutImage                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::AllValues(int StartIndex, int MaxValues, struct FOnlineImageDownload& OutImage)
{
	static UFunction* pFnAllValues = nullptr;

	if (!pFnAllValues)
	{
		pFnAllValues = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.AllValues");

	}

	UOnlineImageDownloaderWeb_execAllValues_Parms AllValues_Parms;
	memcpy_s(&AllValues_Parms.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&AllValues_Parms.MaxValues, 0x4, &MaxValues, 0x4);

	pFnAllValues->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllValues, &AllValues_Parms, nullptr);

	pFnAllValues->FunctionFlags |= 0x400;
	memcpy_s(&AllValues_Parms.OutImage, 0x40, &OutImage, 0x40);
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearPendingDownloads()
{
	static UFunction* pFnClearPendingDownloads = nullptr;

	if (!pFnClearPendingDownloads)
	{
		pFnClearPendingDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads");

	}

	UOnlineImageDownloaderWeb_execClearPendingDownloads_Parms ClearPendingDownloads_Parms;

	pFnClearPendingDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearPendingDownloads, &ClearPendingDownloads_Parms, nullptr);

	pFnClearPendingDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::ClearAllDownloads()
{
	static UFunction* pFnClearAllDownloads = nullptr;

	if (!pFnClearAllDownloads)
	{
		pFnClearAllDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads");

	}

	UOnlineImageDownloaderWeb_execClearAllDownloads_Parms ClearAllDownloads_Parms;

	pFnClearAllDownloads->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearAllDownloads, &ClearAllDownloads_Parms, nullptr);

	pFnClearAllDownloads->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineImageDownloaderWeb.EventImageDecoded
// [0x00540001] (FUNC_Final | FUNC_Private | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequestURL                     (CPF_Parm | CPF_NeedCtorLink)
// struct FImageLayout            Image                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::EventImageDecoded(struct FString RequestURL, struct FImageLayout& Image)
{
	static UFunction* pFnEventImageDecoded = nullptr;

	if (!pFnEventImageDecoded)
	{
		pFnEventImageDecoded = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.EventImageDecoded");

	}

	UOnlineImageDownloaderWeb_execEventImageDecoded_Parms EventImageDecoded_Parms;
	memcpy_s(&EventImageDecoded_Parms.RequestURL, 0x10, &RequestURL, 0x10);

	this->ProcessEvent(pFnEventImageDecoded, &EventImageDecoded_Parms, nullptr);
	memcpy_s(&EventImageDecoded_Parms.Image, 0x18, &Image, 0x18);
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageFinished
// [0x00140001] (FUNC_Final | FUNC_Private | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FOnlineImageDownload    ImageInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::OnOnlineImageFinished(struct FOnlineImageDownload ImageInfo)
{
	static UFunction* pFnOnOnlineImageFinished = nullptr;

	if (!pFnOnOnlineImageFinished)
	{
		pFnOnOnlineImageFinished = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageFinished");

	}

	UOnlineImageDownloaderWeb_execOnOnlineImageFinished_Parms OnOnlineImageFinished_Parms;
	memcpy_s(&OnOnlineImageFinished_Parms.ImageInfo, 0x40, &ImageInfo, 0x40);

	this->ProcessEvent(pFnOnOnlineImageFinished, &OnOnlineImageFinished_Parms, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.Construct
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineImageDownloaderWeb::eventConstruct()
{
	static UFunction* pFnConstruct = nullptr;

	if (!pFnConstruct)
	{
		pFnConstruct = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.Construct");

	}

	UOnlineImageDownloaderWeb_eventConstruct_Parms Construct_Parms;

	this->ProcessEvent(pFnConstruct, &Construct_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearHostStartPlayTogetherDelegate = nullptr;

	if (!pFnClearHostStartPlayTogetherDelegate)
	{
		pFnClearHostStartPlayTogetherDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearHostStartPlayTogetherDelegate_Parms ClearHostStartPlayTogetherDelegate_Parms;
	memcpy_s(&ClearHostStartPlayTogetherDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearHostStartPlayTogetherDelegate, &ClearHostStartPlayTogetherDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddHostStartPlayTogetherDelegate = nullptr;

	if (!pFnAddHostStartPlayTogetherDelegate)
	{
		pFnAddHostStartPlayTogetherDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddHostStartPlayTogetherDelegate_Parms AddHostStartPlayTogetherDelegate_Parms;
	memcpy_s(&AddHostStartPlayTogetherDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddHostStartPlayTogetherDelegate, &AddHostStartPlayTogetherDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineLobbyInterfaceImpl::OnHostStartPlayTogether(unsigned char LocalUserNum)
{
	static UFunction* pFnOnHostStartPlayTogether = nullptr;

	if (!pFnOnHostStartPlayTogether)
	{
		pFnOnHostStartPlayTogether = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether");

	}

	UOnlineLobbyInterfaceImpl_execOnHostStartPlayTogether_Parms OnHostStartPlayTogether_Parms;
	OnHostStartPlayTogether_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnHostStartPlayTogether, &OnHostStartPlayTogether_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyErrorDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate)
{
	static UFunction* pFnClearLobbyErrorDelegate = nullptr;

	if (!pFnClearLobbyErrorDelegate)
	{
		pFnClearLobbyErrorDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyErrorDelegate_Parms ClearLobbyErrorDelegate_Parms;
	memcpy_s(&ClearLobbyErrorDelegate_Parms.LobbyErrorDelegate, 0x18, &LobbyErrorDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyErrorDelegate, &ClearLobbyErrorDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyErrorDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate)
{
	static UFunction* pFnAddLobbyErrorDelegate = nullptr;

	if (!pFnAddLobbyErrorDelegate)
	{
		pFnAddLobbyErrorDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyErrorDelegate_Parms AddLobbyErrorDelegate_Parms;
	memcpy_s(&AddLobbyErrorDelegate_Parms.LobbyErrorDelegate, 0x18, &LobbyErrorDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyErrorDelegate, &AddLobbyErrorDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyError(struct FString Error)
{
	static UFunction* pFnOnLobbyError = nullptr;

	if (!pFnOnLobbyError)
	{
		pFnOnLobbyError = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyError_Parms OnLobbyError_Parms;
	memcpy_s(&OnLobbyError_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnLobbyError, &OnLobbyError_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<struct FLobbyMember>    Members                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::eventGetLobbyMembers(struct FUniqueLobbyId& LobbyId, TArray<struct FLobbyMember>& Members)
{
	static UFunction* pFnGetLobbyMembers = nullptr;

	if (!pFnGetLobbyMembers)
	{
		pFnGetLobbyMembers = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers");

	}

	UOnlineLobbyInterfaceImpl_eventGetLobbyMembers_Parms GetLobbyMembers_Parms;

	this->ProcessEvent(pFnGetLobbyMembers, &GetLobbyMembers_Parms, nullptr);
	memcpy_s(&GetLobbyMembers_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&GetLobbyMembers_Parms.Members, 0x10, &Members, 0x10);

	return GetLobbyMembers_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCretedeDelegate(struct FScriptDelegate LobbySessionCreatedDelegate)
{
	static UFunction* pFnClearLobbySessionCretedeDelegate = nullptr;

	if (!pFnClearLobbySessionCretedeDelegate)
	{
		pFnClearLobbySessionCretedeDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbySessionCretedeDelegate_Parms ClearLobbySessionCretedeDelegate_Parms;
	memcpy_s(&ClearLobbySessionCretedeDelegate_Parms.LobbySessionCreatedDelegate, 0x18, &LobbySessionCreatedDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbySessionCretedeDelegate, &ClearLobbySessionCretedeDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate)
{
	static UFunction* pFnClearLobbySessionCreatedDelegate = nullptr;

	if (!pFnClearLobbySessionCreatedDelegate)
	{
		pFnClearLobbySessionCreatedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbySessionCreatedDelegate_Parms ClearLobbySessionCreatedDelegate_Parms;
	memcpy_s(&ClearLobbySessionCreatedDelegate_Parms.LobbySessionCreatedDelegate, 0x18, &LobbySessionCreatedDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbySessionCreatedDelegate, &ClearLobbySessionCreatedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySessionCreatedDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate)
{
	static UFunction* pFnAddLobbySessionCreatedDelegate = nullptr;

	if (!pFnAddLobbySessionCreatedDelegate)
	{
		pFnAddLobbySessionCreatedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbySessionCreatedDelegate_Parms AddLobbySessionCreatedDelegate_Parms;
	memcpy_s(&AddLobbySessionCreatedDelegate_Parms.LobbySessionCreatedDelegate, 0x18, &LobbySessionCreatedDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbySessionCreatedDelegate, &AddLobbySessionCreatedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineLobbyInterfaceImpl::eventTriggerLobbySessionCreatedDelegates()
{
	static UFunction* pFnTriggerLobbySessionCreatedDelegates = nullptr;

	if (!pFnTriggerLobbySessionCreatedDelegates)
	{
		pFnTriggerLobbySessionCreatedDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbySessionCreatedDelegates_Parms TriggerLobbySessionCreatedDelegates_Parms;

	this->ProcessEvent(pFnTriggerLobbySessionCreatedDelegates, &TriggerLobbySessionCreatedDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineLobbyInterfaceImpl::OnLobbySessionCreated()
{
	static UFunction* pFnOnLobbySessionCreated = nullptr;

	if (!pFnOnLobbySessionCreated)
	{
		pFnOnLobbySessionCreated = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbySessionCreated_Parms OnLobbySessionCreated_Parms;

	this->ProcessEvent(pFnOnLobbySessionCreated, &OnLobbySessionCreated_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

int UOnlineLobbyInterfaceImpl::eventGetLobbyIndex(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnGetLobbyIndex = nullptr;

	if (!pFnGetLobbyIndex)
	{
		pFnGetLobbyIndex = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex");

	}

	UOnlineLobbyInterfaceImpl_eventGetLobbyIndex_Parms GetLobbyIndex_Parms;

	this->ProcessEvent(pFnGetLobbyIndex, &GetLobbyIndex_Parms, nullptr);
	memcpy_s(&GetLobbyIndex_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return GetLobbyIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PartyMember                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::RemoveLocalPlayerFromSession(struct FUniqueNetId& PartyMember)
{
	static UFunction* pFnRemoveLocalPlayerFromSession = nullptr;

	if (!pFnRemoveLocalPlayerFromSession)
	{
		pFnRemoveLocalPlayerFromSession = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession");

	}

	UOnlineLobbyInterfaceImpl_execRemoveLocalPlayerFromSession_Parms RemoveLocalPlayerFromSession_Parms;

	this->ProcessEvent(pFnRemoveLocalPlayerFromSession, &RemoveLocalPlayerFromSession_Parms, nullptr);
	memcpy_s(&RemoveLocalPlayerFromSession_Parms.PartyMember, 0x48, &PartyMember, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
// [0x00430000] (FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NewPartyMember                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLocalPartyMemberToSession(struct FUniqueNetId& NewPartyMember)
{
	static UFunction* pFnAddLocalPartyMemberToSession = nullptr;

	if (!pFnAddLocalPartyMemberToSession)
	{
		pFnAddLocalPartyMemberToSession = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession");

	}

	UOnlineLobbyInterfaceImpl_execAddLocalPartyMemberToSession_Parms AddLocalPartyMemberToSession_Parms;

	this->ProcessEvent(pFnAddLocalPartyMemberToSession, &AddLocalPartyMemberToSession_Parms, nullptr);
	memcpy_s(&AddLocalPartyMemberToSession_Parms.NewPartyMember, 0x48, &NewPartyMember, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::KickPlayer(unsigned char Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnKickPlayer = nullptr;

	if (!pFnKickPlayer)
	{
		pFnKickPlayer = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer");

	}

	UOnlineLobbyInterfaceImpl_execKickPlayer_Parms KickPlayer_Parms;
	KickPlayer_Parms.Reason = Reason;

	this->ProcessEvent(pFnKickPlayer, &KickPlayer_Parms, nullptr);
	memcpy_s(&KickPlayer_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&KickPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return KickPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Const | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnShowInviteUI = nullptr;

	if (!pFnShowInviteUI)
	{
		pFnShowInviteUI = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI");

	}

	UOnlineLobbyInterfaceImpl_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowInviteUI, &ShowInviteUI_Parms, nullptr);
	memcpy_s(&ShowInviteUI_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return ShowInviteUI_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)
// unsigned char                  Reason                         (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyDestroyedDelegates(int LobbyIndex, unsigned char Reason)
{
	static UFunction* pFnTriggerLobbyDestroyedDelegates = nullptr;

	if (!pFnTriggerLobbyDestroyedDelegates)
	{
		pFnTriggerLobbyDestroyedDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyDestroyedDelegates_Parms TriggerLobbyDestroyedDelegates_Parms;
	memcpy_s(&TriggerLobbyDestroyedDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	TriggerLobbyDestroyedDelegates_Parms.Reason = Reason;

	this->ProcessEvent(pFnTriggerLobbyDestroyedDelegates, &TriggerLobbyDestroyedDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyDestroyedDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate)
{
	static UFunction* pFnClearLobbyDestroyedDelegate = nullptr;

	if (!pFnClearLobbyDestroyedDelegate)
	{
		pFnClearLobbyDestroyedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyDestroyedDelegate_Parms ClearLobbyDestroyedDelegate_Parms;
	memcpy_s(&ClearLobbyDestroyedDelegate_Parms.LobbyDestroyedDelegate, 0x18, &LobbyDestroyedDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyDestroyedDelegate, &ClearLobbyDestroyedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyDestroyedDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate)
{
	static UFunction* pFnAddLobbyDestroyedDelegate = nullptr;

	if (!pFnAddLobbyDestroyedDelegate)
	{
		pFnAddLobbyDestroyedDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyDestroyedDelegate_Parms AddLobbyDestroyedDelegate_Parms;
	memcpy_s(&AddLobbyDestroyedDelegate_Parms.LobbyDestroyedDelegate, 0x18, &LobbyDestroyedDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyDestroyedDelegate, &AddLobbyDestroyedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::OnLobbyDestroyed(unsigned char Reason, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnOnLobbyDestroyed = nullptr;

	if (!pFnOnLobbyDestroyed)
	{
		pFnOnLobbyDestroyed = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyDestroyed_Parms OnLobbyDestroyed_Parms;
	OnLobbyDestroyed_Parms.Reason = Reason;

	this->ProcessEvent(pFnOnLobbyDestroyed, &OnLobbyDestroyed_Parms, nullptr);
	memcpy_s(&OnLobbyDestroyed_Parms.LobbyId, 0x10, &LobbyId, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate)
{
	static UFunction* pFnClearLobbyInviteDelegate = nullptr;

	if (!pFnClearLobbyInviteDelegate)
	{
		pFnClearLobbyInviteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyInviteDelegate_Parms ClearLobbyInviteDelegate_Parms;
	memcpy_s(&ClearLobbyInviteDelegate_Parms.LobbyInviteDelegate, 0x18, &LobbyInviteDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyInviteDelegate, &ClearLobbyInviteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate)
{
	static UFunction* pFnAddLobbyInviteDelegate = nullptr;

	if (!pFnAddLobbyInviteDelegate)
	{
		pFnAddLobbyInviteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyInviteDelegate_Parms AddLobbyInviteDelegate_Parms;
	memcpy_s(&AddLobbyInviteDelegate_Parms.LobbyInviteDelegate, 0x18, &LobbyInviteDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyInviteDelegate, &AddLobbyInviteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAccepted                      (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            FriendId                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyInvite(unsigned long bAccepted, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& FriendId)
{
	static UFunction* pFnOnLobbyInvite = nullptr;

	if (!pFnOnLobbyInvite)
	{
		pFnOnLobbyInvite = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyInvite_Parms OnLobbyInvite_Parms;
	OnLobbyInvite_Parms.bAccepted = bAccepted;

	this->ProcessEvent(pFnOnLobbyInvite, &OnLobbyInvite_Parms, nullptr);
	memcpy_s(&OnLobbyInvite_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&OnLobbyInvite_Parms.FriendId, 0x48, &FriendId, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnInviteToLobby = nullptr;

	if (!pFnInviteToLobby)
	{
		pFnInviteToLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby");

	}

	UOnlineLobbyInterfaceImpl_execInviteToLobby_Parms InviteToLobby_Parms;

	this->ProcessEvent(pFnInviteToLobby, &InviteToLobby_Parms, nullptr);
	memcpy_s(&InviteToLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&InviteToLobby_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return InviteToLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CanInviteToLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnCanInviteToLobby = nullptr;

	if (!pFnCanInviteToLobby)
	{
		pFnCanInviteToLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.CanInviteToLobby");

	}

	UOnlineLobbyInterfaceImpl_execCanInviteToLobby_Parms CanInviteToLobby_Parms;

	this->ProcessEvent(pFnCanInviteToLobby, &CanInviteToLobby_Parms, nullptr);
	memcpy_s(&CanInviteToLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&CanInviteToLobby_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return CanInviteToLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner)
{
	static UFunction* pFnSetLobbyOwner = nullptr;

	if (!pFnSetLobbyOwner)
	{
		pFnSetLobbyOwner = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner");

	}

	UOnlineLobbyInterfaceImpl_execSetLobbyOwner_Parms SetLobbyOwner_Parms;

	this->ProcessEvent(pFnSetLobbyOwner, &SetLobbyOwner_Parms, nullptr);
	memcpy_s(&SetLobbyOwner_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyOwner_Parms.NewOwner, 0x48, &NewOwner, 0x48);

	return SetLobbyOwner_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bLocked                        (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbyLock = nullptr;

	if (!pFnSetLobbyLock)
	{
		pFnSetLobbyLock = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock");

	}

	UOnlineLobbyInterfaceImpl_execSetLobbyLock_Parms SetLobbyLock_Parms;
	SetLobbyLock_Parms.bLocked = bLocked;

	this->ProcessEvent(pFnSetLobbyLock, &SetLobbyLock_Parms, nullptr);
	memcpy_s(&SetLobbyLock_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbyLock_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID)
{
	static UFunction* pFnSetLobbyServer = nullptr;

	if (!pFnSetLobbyServer)
	{
		pFnSetLobbyServer = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer");

	}

	UOnlineLobbyInterfaceImpl_execSetLobbyServer_Parms SetLobbyServer_Parms;
	memcpy_s(&SetLobbyServer_Parms.ServerIP, 0x10, &ServerIP, 0x10);

	this->ProcessEvent(pFnSetLobbyServer, &SetLobbyServer_Parms, nullptr);
	memcpy_s(&SetLobbyServer_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyServer_Parms.ServerUID, 0x48, &ServerUID, 0x48);

	return SetLobbyServer_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnRemoveLobbySetting = nullptr;

	if (!pFnRemoveLobbySetting)
	{
		pFnRemoveLobbySetting = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting");

	}

	UOnlineLobbyInterfaceImpl_execRemoveLobbySetting_Parms RemoveLobbySetting_Parms;
	memcpy_s(&RemoveLobbySetting_Parms.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(pFnRemoveLobbySetting, &RemoveLobbySetting_Parms, nullptr);
	memcpy_s(&RemoveLobbySetting_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return RemoveLobbySetting_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbySetting = nullptr;

	if (!pFnSetLobbySetting)
	{
		pFnSetLobbySetting = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting");

	}

	UOnlineLobbyInterfaceImpl_execSetLobbySetting_Parms SetLobbySetting_Parms;
	memcpy_s(&SetLobbySetting_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbySetting_Parms.Value, 0x10, &Value, 0x10);

	this->ProcessEvent(pFnSetLobbySetting, &SetLobbySetting_Parms, nullptr);
	memcpy_s(&SetLobbySetting_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbySetting_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId)
{
	static UFunction* pFnGetLobbyAdmin = nullptr;

	if (!pFnGetLobbyAdmin)
	{
		pFnGetLobbyAdmin = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin");

	}

	UOnlineLobbyInterfaceImpl_execGetLobbyAdmin_Parms GetLobbyAdmin_Parms;

	this->ProcessEvent(pFnGetLobbyAdmin, &GetLobbyAdmin_Parms, nullptr);
	memcpy_s(&GetLobbyAdmin_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&GetLobbyAdmin_Parms.AdminId, 0x48, &AdminId, 0x48);

	return GetLobbyAdmin_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate)
{
	static UFunction* pFnClearLobbyJoinGameDelegate = nullptr;

	if (!pFnClearLobbyJoinGameDelegate)
	{
		pFnClearLobbyJoinGameDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyJoinGameDelegate_Parms ClearLobbyJoinGameDelegate_Parms;
	memcpy_s(&ClearLobbyJoinGameDelegate_Parms.LobbyJoinGameDelegate, 0x18, &LobbyJoinGameDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyJoinGameDelegate, &ClearLobbyJoinGameDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate)
{
	static UFunction* pFnAddLobbyJoinGameDelegate = nullptr;

	if (!pFnAddLobbyJoinGameDelegate)
	{
		pFnAddLobbyJoinGameDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyJoinGameDelegate_Parms AddLobbyJoinGameDelegate_Parms;
	memcpy_s(&AddLobbyJoinGameDelegate_Parms.LobbyJoinGameDelegate, 0x18, &LobbyJoinGameDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyJoinGameDelegate, &AddLobbyJoinGameDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)
// struct FString                 ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            ServerId                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyJoinGameDelegates(int LobbyIndex, struct FString ServerIP, struct FUniqueNetId& ServerId)
{
	static UFunction* pFnTriggerLobbyJoinGameDelegates = nullptr;

	if (!pFnTriggerLobbyJoinGameDelegates)
	{
		pFnTriggerLobbyJoinGameDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyJoinGameDelegates_Parms TriggerLobbyJoinGameDelegates_Parms;
	memcpy_s(&TriggerLobbyJoinGameDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyJoinGameDelegates_Parms.ServerIP, 0x10, &ServerIP, 0x10);

	this->ProcessEvent(pFnTriggerLobbyJoinGameDelegates, &TriggerLobbyJoinGameDelegates_Parms, nullptr);
	memcpy_s(&TriggerLobbyJoinGameDelegates_Parms.ServerId, 0x48, &ServerId, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FUniqueNetId            ServerId                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyJoinGame(struct FString ServerIP, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueNetId& ServerId)
{
	static UFunction* pFnOnLobbyJoinGame = nullptr;

	if (!pFnOnLobbyJoinGame)
	{
		pFnOnLobbyJoinGame = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyJoinGame_Parms OnLobbyJoinGame_Parms;
	memcpy_s(&OnLobbyJoinGame_Parms.ServerIP, 0x10, &ServerIP, 0x10);

	this->ProcessEvent(pFnOnLobbyJoinGame, &OnLobbyJoinGame_Parms, nullptr);
	memcpy_s(&OnLobbyJoinGame_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&OnLobbyJoinGame_Parms.ServerId, 0x48, &ServerId, 0x48);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate)
{
	static UFunction* pFnClearLobbyReceiveBinaryDataDelegate = nullptr;

	if (!pFnClearLobbyReceiveBinaryDataDelegate)
	{
		pFnClearLobbyReceiveBinaryDataDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyReceiveBinaryDataDelegate_Parms ClearLobbyReceiveBinaryDataDelegate_Parms;
	memcpy_s(&ClearLobbyReceiveBinaryDataDelegate_Parms.LobbyReceiveBinaryDataDelegate, 0x18, &LobbyReceiveBinaryDataDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyReceiveBinaryDataDelegate, &ClearLobbyReceiveBinaryDataDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate)
{
	static UFunction* pFnAddLobbyReceiveBinaryDataDelegate = nullptr;

	if (!pFnAddLobbyReceiveBinaryDataDelegate)
	{
		pFnAddLobbyReceiveBinaryDataDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyReceiveBinaryDataDelegate_Parms AddLobbyReceiveBinaryDataDelegate_Parms;
	memcpy_s(&AddLobbyReceiveBinaryDataDelegate_Parms.LobbyReceiveBinaryDataDelegate, 0x18, &LobbyReceiveBinaryDataDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyReceiveBinaryDataDelegate, &AddLobbyReceiveBinaryDataDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyReceiveBinaryDataDelegates(int LobbyIndex, int MemberIndex)
{
	static UFunction* pFnTriggerLobbyReceiveBinaryDataDelegates = nullptr;

	if (!pFnTriggerLobbyReceiveBinaryDataDelegates)
	{
		pFnTriggerLobbyReceiveBinaryDataDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveBinaryDataDelegates_Parms TriggerLobbyReceiveBinaryDataDelegates_Parms;
	memcpy_s(&TriggerLobbyReceiveBinaryDataDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyReceiveBinaryDataDelegates_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);

	this->ProcessEvent(pFnTriggerLobbyReceiveBinaryDataDelegates, &TriggerLobbyReceiveBinaryDataDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            MemberIndex                    (CPF_Parm)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveBinaryData(int MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<unsigned char>& Data)
{
	static UFunction* pFnOnLobbyReceiveBinaryData = nullptr;

	if (!pFnOnLobbyReceiveBinaryData)
	{
		pFnOnLobbyReceiveBinaryData = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyReceiveBinaryData_Parms OnLobbyReceiveBinaryData_Parms;
	memcpy_s(&OnLobbyReceiveBinaryData_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);

	this->ProcessEvent(pFnOnLobbyReceiveBinaryData, &OnLobbyReceiveBinaryData_Parms, nullptr);
	memcpy_s(&OnLobbyReceiveBinaryData_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&OnLobbyReceiveBinaryData_Parms.Data, 0x10, &Data, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<unsigned char>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<unsigned char>& Data)
{
	static UFunction* pFnSendLobbyBinaryData = nullptr;

	if (!pFnSendLobbyBinaryData)
	{
		pFnSendLobbyBinaryData = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData");

	}

	UOnlineLobbyInterfaceImpl_execSendLobbyBinaryData_Parms SendLobbyBinaryData_Parms;

	this->ProcessEvent(pFnSendLobbyBinaryData, &SendLobbyBinaryData_Parms, nullptr);
	memcpy_s(&SendLobbyBinaryData_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SendLobbyBinaryData_Parms.Data, 0x10, &Data, 0x10);

	return SendLobbyBinaryData_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate)
{
	static UFunction* pFnClearLobbyReceiveMessageDelegate = nullptr;

	if (!pFnClearLobbyReceiveMessageDelegate)
	{
		pFnClearLobbyReceiveMessageDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyReceiveMessageDelegate_Parms ClearLobbyReceiveMessageDelegate_Parms;
	memcpy_s(&ClearLobbyReceiveMessageDelegate_Parms.LobbyReceiveMessageDelegate, 0x18, &LobbyReceiveMessageDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyReceiveMessageDelegate, &ClearLobbyReceiveMessageDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate)
{
	static UFunction* pFnAddLobbyReceiveMessageDelegate = nullptr;

	if (!pFnAddLobbyReceiveMessageDelegate)
	{
		pFnAddLobbyReceiveMessageDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyReceiveMessageDelegate_Parms AddLobbyReceiveMessageDelegate_Parms;
	memcpy_s(&AddLobbyReceiveMessageDelegate_Parms.LobbyReceiveMessageDelegate, 0x18, &LobbyReceiveMessageDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyReceiveMessageDelegate, &AddLobbyReceiveMessageDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)
// struct FString                 Type                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyReceiveMessageDelegates(int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message)
{
	static UFunction* pFnTriggerLobbyReceiveMessageDelegates = nullptr;

	if (!pFnTriggerLobbyReceiveMessageDelegates)
	{
		pFnTriggerLobbyReceiveMessageDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveMessageDelegates_Parms TriggerLobbyReceiveMessageDelegates_Parms;
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Parms.Type, 0x10, &Type, 0x10);
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnTriggerLobbyReceiveMessageDelegates, &TriggerLobbyReceiveMessageDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            MemberIndex                    (CPF_Parm)
// struct FString                 Type                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveMessage(int MemberIndex, struct FString Type, struct FString Message, struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* pFnOnLobbyReceiveMessage = nullptr;

	if (!pFnOnLobbyReceiveMessage)
	{
		pFnOnLobbyReceiveMessage = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyReceiveMessage_Parms OnLobbyReceiveMessage_Parms;
	memcpy_s(&OnLobbyReceiveMessage_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&OnLobbyReceiveMessage_Parms.Type, 0x10, &Type, 0x10);
	memcpy_s(&OnLobbyReceiveMessage_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Parms, nullptr);
	memcpy_s(&OnLobbyReceiveMessage_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SendLobbyMessage(struct FString Message, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSendLobbyMessage = nullptr;

	if (!pFnSendLobbyMessage)
	{
		pFnSendLobbyMessage = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage");

	}

	UOnlineLobbyInterfaceImpl_execSendLobbyMessage_Parms SendLobbyMessage_Parms;
	memcpy_s(&SendLobbyMessage_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnSendLobbyMessage, &SendLobbyMessage_Parms, nullptr);
	memcpy_s(&SendLobbyMessage_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SendLobbyMessage_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate)
{
	static UFunction* pFnClearLobbyMemberStatusUpdateDelegate = nullptr;

	if (!pFnClearLobbyMemberStatusUpdateDelegate)
	{
		pFnClearLobbyMemberStatusUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyMemberStatusUpdateDelegate_Parms ClearLobbyMemberStatusUpdateDelegate_Parms;
	memcpy_s(&ClearLobbyMemberStatusUpdateDelegate_Parms.LobbyMemberStatusUpdateDelegate, 0x18, &LobbyMemberStatusUpdateDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyMemberStatusUpdateDelegate, &ClearLobbyMemberStatusUpdateDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate)
{
	static UFunction* pFnAddLobbyMemberStatusUpdateDelegate = nullptr;

	if (!pFnAddLobbyMemberStatusUpdateDelegate)
	{
		pFnAddLobbyMemberStatusUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyMemberStatusUpdateDelegate_Parms AddLobbyMemberStatusUpdateDelegate_Parms;
	memcpy_s(&AddLobbyMemberStatusUpdateDelegate_Parms.LobbyMemberStatusUpdateDelegate, 0x18, &LobbyMemberStatusUpdateDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyMemberStatusUpdateDelegate, &AddLobbyMemberStatusUpdateDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)
// int                            InstigatorIndex                (CPF_Parm)
// struct FString                 Status                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyMemberStatusUpdateDelegates(int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status)
{
	static UFunction* pFnTriggerLobbyMemberStatusUpdateDelegates = nullptr;

	if (!pFnTriggerLobbyMemberStatusUpdateDelegates)
	{
		pFnTriggerLobbyMemberStatusUpdateDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberStatusUpdateDelegates_Parms TriggerLobbyMemberStatusUpdateDelegates_Parms;
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Parms.InstigatorIndex, 0x4, &InstigatorIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Parms.Status, 0x10, &Status, 0x10);

	this->ProcessEvent(pFnTriggerLobbyMemberStatusUpdateDelegates, &TriggerLobbyMemberStatusUpdateDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            MemberIndex                    (CPF_Parm)
// int                            InstigatorIndex                (CPF_Parm)
// struct FString                 Status                         (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyMemberStatusUpdate(int MemberIndex, int InstigatorIndex, struct FString Status, struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* pFnOnLobbyMemberStatusUpdate = nullptr;

	if (!pFnOnLobbyMemberStatusUpdate)
	{
		pFnOnLobbyMemberStatusUpdate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyMemberStatusUpdate_Parms OnLobbyMemberStatusUpdate_Parms;
	memcpy_s(&OnLobbyMemberStatusUpdate_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);
	memcpy_s(&OnLobbyMemberStatusUpdate_Parms.InstigatorIndex, 0x4, &InstigatorIndex, 0x4);
	memcpy_s(&OnLobbyMemberStatusUpdate_Parms.Status, 0x10, &Status, 0x10);

	this->ProcessEvent(pFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Parms, nullptr);
	memcpy_s(&OnLobbyMemberStatusUpdate_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate)
{
	static UFunction* pFnClearLobbyMemberSettingsUpdateDelegate = nullptr;

	if (!pFnClearLobbyMemberSettingsUpdateDelegate)
	{
		pFnClearLobbyMemberSettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbyMemberSettingsUpdateDelegate_Parms ClearLobbyMemberSettingsUpdateDelegate_Parms;
	memcpy_s(&ClearLobbyMemberSettingsUpdateDelegate_Parms.LobbyMemberSettingsUpdateDelegate, 0x18, &LobbyMemberSettingsUpdateDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbyMemberSettingsUpdateDelegate, &ClearLobbyMemberSettingsUpdateDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate)
{
	static UFunction* pFnAddLobbyMemberSettingsUpdateDelegate = nullptr;

	if (!pFnAddLobbyMemberSettingsUpdateDelegate)
	{
		pFnAddLobbyMemberSettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbyMemberSettingsUpdateDelegate_Parms AddLobbyMemberSettingsUpdateDelegate_Parms;
	memcpy_s(&AddLobbyMemberSettingsUpdateDelegate_Parms.LobbyMemberSettingsUpdateDelegate, 0x18, &LobbyMemberSettingsUpdateDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbyMemberSettingsUpdateDelegate, &AddLobbyMemberSettingsUpdateDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)
// int                            MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyMemberSettingsUpdateDelegates(int LobbyIndex, int MemberIndex)
{
	static UFunction* pFnTriggerLobbyMemberSettingsUpdateDelegates = nullptr;

	if (!pFnTriggerLobbyMemberSettingsUpdateDelegates)
	{
		pFnTriggerLobbyMemberSettingsUpdateDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberSettingsUpdateDelegates_Parms TriggerLobbyMemberSettingsUpdateDelegates_Parms;
	memcpy_s(&TriggerLobbyMemberSettingsUpdateDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);
	memcpy_s(&TriggerLobbyMemberSettingsUpdateDelegates_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);

	this->ProcessEvent(pFnTriggerLobbyMemberSettingsUpdateDelegates, &TriggerLobbyMemberSettingsUpdateDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            MemberIndex                    (CPF_Parm)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbyMemberSettingsUpdate(int MemberIndex, struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* pFnOnLobbyMemberSettingsUpdate = nullptr;

	if (!pFnOnLobbyMemberSettingsUpdate)
	{
		pFnOnLobbyMemberSettingsUpdate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbyMemberSettingsUpdate_Parms OnLobbyMemberSettingsUpdate_Parms;
	memcpy_s(&OnLobbyMemberSettingsUpdate_Parms.MemberIndex, 0x4, &MemberIndex, 0x4);

	this->ProcessEvent(pFnOnLobbyMemberSettingsUpdate, &OnLobbyMemberSettingsUpdate_Parms, nullptr);
	memcpy_s(&OnLobbyMemberSettingsUpdate_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate)
{
	static UFunction* pFnClearLobbySettingsUpdateDelegate = nullptr;

	if (!pFnClearLobbySettingsUpdateDelegate)
	{
		pFnClearLobbySettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearLobbySettingsUpdateDelegate_Parms ClearLobbySettingsUpdateDelegate_Parms;
	memcpy_s(&ClearLobbySettingsUpdateDelegate_Parms.LobbySettingsUpdateDelegate, 0x18, &LobbySettingsUpdateDelegate, 0x18);

	this->ProcessEvent(pFnClearLobbySettingsUpdateDelegate, &ClearLobbySettingsUpdateDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate)
{
	static UFunction* pFnAddLobbySettingsUpdateDelegate = nullptr;

	if (!pFnAddLobbySettingsUpdateDelegate)
	{
		pFnAddLobbySettingsUpdateDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddLobbySettingsUpdateDelegate_Parms AddLobbySettingsUpdateDelegate_Parms;
	memcpy_s(&AddLobbySettingsUpdateDelegate_Parms.LobbySettingsUpdateDelegate, 0x18, &LobbySettingsUpdateDelegate, 0x18);

	this->ProcessEvent(pFnAddLobbySettingsUpdateDelegate, &AddLobbySettingsUpdateDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LobbyIndex                     (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerLobbySettingsUpdateDelegates(int LobbyIndex)
{
	static UFunction* pFnTriggerLobbySettingsUpdateDelegates = nullptr;

	if (!pFnTriggerLobbySettingsUpdateDelegates)
	{
		pFnTriggerLobbySettingsUpdateDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerLobbySettingsUpdateDelegates_Parms TriggerLobbySettingsUpdateDelegates_Parms;
	memcpy_s(&TriggerLobbySettingsUpdateDelegates_Parms.LobbyIndex, 0x4, &LobbyIndex, 0x4);

	this->ProcessEvent(pFnTriggerLobbySettingsUpdateDelegates, &TriggerLobbySettingsUpdateDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnLobbySettingsUpdate(struct FActiveLobbyInfo& LobbyInfo)
{
	static UFunction* pFnOnLobbySettingsUpdate = nullptr;

	if (!pFnOnLobbySettingsUpdate)
	{
		pFnOnLobbySettingsUpdate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate");

	}

	UOnlineLobbyInterfaceImpl_execOnLobbySettingsUpdate_Parms OnLobbySettingsUpdate_Parms;

	this->ProcessEvent(pFnOnLobbySettingsUpdate, &OnLobbySettingsUpdate_Parms, nullptr);
	memcpy_s(&OnLobbySettingsUpdate_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbyUserSetting = nullptr;

	if (!pFnSetLobbyUserSetting)
	{
		pFnSetLobbyUserSetting = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting");

	}

	UOnlineLobbyInterfaceImpl_execSetLobbyUserSetting_Parms SetLobbyUserSetting_Parms;
	memcpy_s(&SetLobbyUserSetting_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbyUserSetting_Parms.Value, 0x10, &Value, 0x10);

	this->ProcessEvent(pFnSetLobbyUserSetting, &SetLobbyUserSetting_Parms, nullptr);
	memcpy_s(&SetLobbyUserSetting_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbyUserSetting_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::LeaveLobby(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnLeaveLobby = nullptr;

	if (!pFnLeaveLobby)
	{
		pFnLeaveLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby");

	}

	UOnlineLobbyInterfaceImpl_execLeaveLobby_Parms LeaveLobby_Parms;

	this->ProcessEvent(pFnLeaveLobby, &LeaveLobby_Parms, nullptr);
	memcpy_s(&LeaveLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return LeaveLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate)
{
	static UFunction* pFnClearJoinLobbyCompleteDelegate = nullptr;

	if (!pFnClearJoinLobbyCompleteDelegate)
	{
		pFnClearJoinLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearJoinLobbyCompleteDelegate_Parms ClearJoinLobbyCompleteDelegate_Parms;
	memcpy_s(&ClearJoinLobbyCompleteDelegate_Parms.JoinLobbyCompleteDelegate, 0x18, &JoinLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearJoinLobbyCompleteDelegate, &ClearJoinLobbyCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate)
{
	static UFunction* pFnAddJoinLobbyCompleteDelegate = nullptr;

	if (!pFnAddJoinLobbyCompleteDelegate)
	{
		pFnAddJoinLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddJoinLobbyCompleteDelegate_Parms AddJoinLobbyCompleteDelegate_Parms;
	memcpy_s(&AddJoinLobbyCompleteDelegate_Parms.JoinLobbyCompleteDelegate, 0x18, &JoinLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddJoinLobbyCompleteDelegate, &AddJoinLobbyCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
// [0x00420803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyUID                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::eventTriggerJoinLobbyCompleteDelegates(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID)
{
	static UFunction* pFnTriggerJoinLobbyCompleteDelegates = nullptr;

	if (!pFnTriggerJoinLobbyCompleteDelegates)
	{
		pFnTriggerJoinLobbyCompleteDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerJoinLobbyCompleteDelegates_Parms TriggerJoinLobbyCompleteDelegates_Parms;
	TriggerJoinLobbyCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnTriggerJoinLobbyCompleteDelegates, &TriggerJoinLobbyCompleteDelegates_Parms, nullptr);
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Parms.LobbyUID, 0x10, &LobbyUID, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)
// struct FActiveLobbyInfo        LobbyInfo                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyUID                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::OnJoinLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID)
{
	static UFunction* pFnOnJoinLobbyComplete = nullptr;

	if (!pFnOnJoinLobbyComplete)
	{
		pFnOnJoinLobbyComplete = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete");

	}

	UOnlineLobbyInterfaceImpl_execOnJoinLobbyComplete_Parms OnJoinLobbyComplete_Parms;
	OnJoinLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnJoinLobbyComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Parms, nullptr);
	memcpy_s(&OnJoinLobbyComplete_Parms.LobbyInfo, 0x30, &LobbyInfo, 0x30);
	memcpy_s(&OnJoinLobbyComplete_Parms.LobbyUID, 0x10, &LobbyUID, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceImpl::JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnJoinLobby = nullptr;

	if (!pFnJoinLobby)
	{
		pFnJoinLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby");

	}

	UOnlineLobbyInterfaceImpl_execJoinLobby_Parms JoinLobby_Parms;
	memcpy_s(&JoinLobby_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnJoinLobby, &JoinLobby_Parms, nullptr);
	memcpy_s(&JoinLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return JoinLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate)
{
	static UFunction* pFnClearFindLobbiesCompleteDelegate = nullptr;

	if (!pFnClearFindLobbiesCompleteDelegate)
	{
		pFnClearFindLobbiesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearFindLobbiesCompleteDelegate_Parms ClearFindLobbiesCompleteDelegate_Parms;
	memcpy_s(&ClearFindLobbiesCompleteDelegate_Parms.FindLobbiesCompleteDelegate, 0x18, &FindLobbiesCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearFindLobbiesCompleteDelegate, &ClearFindLobbiesCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate)
{
	static UFunction* pFnAddFindLobbiesCompleteDelegate = nullptr;

	if (!pFnAddFindLobbiesCompleteDelegate)
	{
		pFnAddFindLobbiesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddFindLobbiesCompleteDelegate_Parms AddFindLobbiesCompleteDelegate_Parms;
	memcpy_s(&AddFindLobbiesCompleteDelegate_Parms.FindLobbiesCompleteDelegate, 0x18, &FindLobbiesCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddFindLobbiesCompleteDelegate, &AddFindLobbiesCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineLobbyInterfaceImpl::eventTriggerFindLobbiesCompleteDelegates(unsigned long bWasSuccessful)
{
	static UFunction* pFnTriggerFindLobbiesCompleteDelegates = nullptr;

	if (!pFnTriggerFindLobbiesCompleteDelegates)
	{
		pFnTriggerFindLobbiesCompleteDelegates = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates");

	}

	UOnlineLobbyInterfaceImpl_eventTriggerFindLobbiesCompleteDelegates_Parms TriggerFindLobbiesCompleteDelegates_Parms;
	TriggerFindLobbiesCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnTriggerFindLobbiesCompleteDelegates, &TriggerFindLobbiesCompleteDelegates_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// TArray<struct FBasicLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::OnFindLobbiesComplete(unsigned long bWasSuccessful, TArray<struct FBasicLobbyInfo>& LobbyList)
{
	static UFunction* pFnOnFindLobbiesComplete = nullptr;

	if (!pFnOnFindLobbiesComplete)
	{
		pFnOnFindLobbiesComplete = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete");

	}

	UOnlineLobbyInterfaceImpl_execOnFindLobbiesComplete_Parms OnFindLobbiesComplete_Parms;
	OnFindLobbiesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFindLobbiesComplete, &OnFindLobbiesComplete_Parms, nullptr);
	memcpy_s(&OnFindLobbiesComplete_Parms.LobbyList, 0x10, &LobbyList, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceImpl::UpdateFoundLobbies(struct FUniqueLobbyId LobbyId)
{
	static UFunction* pFnUpdateFoundLobbies = nullptr;

	if (!pFnUpdateFoundLobbies)
	{
		pFnUpdateFoundLobbies = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies");

	}

	UOnlineLobbyInterfaceImpl_execUpdateFoundLobbies_Parms UpdateFoundLobbies_Parms;
	memcpy_s(&UpdateFoundLobbies_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	this->ProcessEvent(pFnUpdateFoundLobbies, &UpdateFoundLobbies_Parms, nullptr);

	return UpdateFoundLobbies_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            MinSlots                       (CPF_OptionalParm | CPF_Parm)
// unsigned char                  Distance                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceImpl::FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, unsigned char Distance)
{
	static UFunction* pFnFindLobbies = nullptr;

	if (!pFnFindLobbies)
	{
		pFnFindLobbies = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies");

	}

	UOnlineLobbyInterfaceImpl_execFindLobbies_Parms FindLobbies_Parms;
	memcpy_s(&FindLobbies_Parms.MaxResults, 0x4, &MaxResults, 0x4);
	memcpy_s(&FindLobbies_Parms.Filters, 0x10, &Filters, 0x10);
	memcpy_s(&FindLobbies_Parms.SortFilters, 0x10, &SortFilters, 0x10);
	memcpy_s(&FindLobbies_Parms.MinSlots, 0x4, &MinSlots, 0x4);
	FindLobbies_Parms.Distance = Distance;

	this->ProcessEvent(pFnFindLobbies, &FindLobbies_Parms, nullptr);

	return FindLobbies_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::ClearCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate)
{
	static UFunction* pFnClearCreateLobbyCompleteDelegate = nullptr;

	if (!pFnClearCreateLobbyCompleteDelegate)
	{
		pFnClearCreateLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execClearCreateLobbyCompleteDelegate_Parms ClearCreateLobbyCompleteDelegate_Parms;
	memcpy_s(&ClearCreateLobbyCompleteDelegate_Parms.CreateLobbyCompleteDelegate, 0x18, &CreateLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearCreateLobbyCompleteDelegate, &ClearCreateLobbyCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceImpl::AddCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate)
{
	static UFunction* pFnAddCreateLobbyCompleteDelegate = nullptr;

	if (!pFnAddCreateLobbyCompleteDelegate)
	{
		pFnAddCreateLobbyCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate");

	}

	UOnlineLobbyInterfaceImpl_execAddCreateLobbyCompleteDelegate_Parms AddCreateLobbyCompleteDelegate_Parms;
	memcpy_s(&AddCreateLobbyCompleteDelegate_Parms.CreateLobbyCompleteDelegate, 0x18, &CreateLobbyCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddCreateLobbyCompleteDelegate, &AddCreateLobbyCompleteDelegate_Parms, nullptr);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineLobbyInterfaceImpl::OnCreateLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnOnCreateLobbyComplete = nullptr;

	if (!pFnOnCreateLobbyComplete)
	{
		pFnOnCreateLobbyComplete = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete");

	}

	UOnlineLobbyInterfaceImpl_execOnCreateLobbyComplete_Parms OnCreateLobbyComplete_Parms;
	OnCreateLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateLobbyComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Parms, nullptr);
	memcpy_s(&OnCreateLobbyComplete_Parms.LobbyId, 0x10, &LobbyId, 0x10);
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            MaxPlayers                     (CPF_Parm)
// unsigned char                  Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceImpl::CreateLobby(int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static UFunction* pFnCreateLobby = nullptr;

	if (!pFnCreateLobby)
	{
		pFnCreateLobby = UFunction::FindFunction("Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby");

	}

	UOnlineLobbyInterfaceImpl_execCreateLobby_Parms CreateLobby_Parms;
	memcpy_s(&CreateLobby_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&CreateLobby_Parms.MaxPlayers, 0x4, &MaxPlayers, 0x4);
	CreateLobby_Parms.Type = Type;
	memcpy_s(&CreateLobby_Parms.InitialSettings, 0x10, &InitialSettings, 0x10);

	this->ProcessEvent(pFnCreateLobby, &CreateLobby_Parms, nullptr);

	return CreateLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AuthWithNintendoAccountToken
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 NintendoAccountToken           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceImpl::AuthWithNintendoAccountToken(unsigned char LocalUserNum, struct FString& NintendoAccountToken)
{
	static UFunction* pFnAuthWithNintendoAccountToken = nullptr;

	if (!pFnAuthWithNintendoAccountToken)
	{
		pFnAuthWithNintendoAccountToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.AuthWithNintendoAccountToken");

	}

	UOnlinePersistentAuthInterfaceImpl_execAuthWithNintendoAccountToken_Parms AuthWithNintendoAccountToken_Parms;
	AuthWithNintendoAccountToken_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnAuthWithNintendoAccountToken, &AuthWithNintendoAccountToken_Parms, nullptr);
	memcpy_s(&AuthWithNintendoAccountToken_Parms.NintendoAccountToken, 0x10, &NintendoAccountToken, 0x10);

	return AuthWithNintendoAccountToken_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetAuthExpirationTimestamp
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDateTime*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

class UDateTime* UOnlinePersistentAuthInterfaceImpl::GetAuthExpirationTimestamp(unsigned char LocalUserNum)
{
	static UFunction* pFnGetAuthExpirationTimestamp = nullptr;

	if (!pFnGetAuthExpirationTimestamp)
	{
		pFnGetAuthExpirationTimestamp = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetAuthExpirationTimestamp");

	}

	UOnlinePersistentAuthInterfaceImpl_execGetAuthExpirationTimestamp_Parms GetAuthExpirationTimestamp_Parms;
	GetAuthExpirationTimestamp_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetAuthExpirationTimestamp, &GetAuthExpirationTimestamp_Parms, nullptr);

	return GetAuthExpirationTimestamp_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.LaunchAccountPortal
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceImpl::LaunchAccountPortal(unsigned char LocalUserNum)
{
	static UFunction* pFnLaunchAccountPortal = nullptr;

	if (!pFnLaunchAccountPortal)
	{
		pFnLaunchAccountPortal = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.LaunchAccountPortal");

	}

	UOnlinePersistentAuthInterfaceImpl_execLaunchAccountPortal_Parms LaunchAccountPortal_Parms;
	LaunchAccountPortal_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnLaunchAccountPortal, &LaunchAccountPortal_Parms, nullptr);

	return LaunchAccountPortal_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientCredentials
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlinePersistentAuthInterfaceImpl::GetClientCredentials()
{
	static UFunction* pFnGetClientCredentials = nullptr;

	if (!pFnGetClientCredentials)
	{
		pFnGetClientCredentials = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientCredentials");

	}

	UOnlinePersistentAuthInterfaceImpl_execGetClientCredentials_Parms GetClientCredentials_Parms;

	this->ProcessEvent(pFnGetClientCredentials, &GetClientCredentials_Parms, nullptr);

	return GetClientCredentials_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetContinuanceToken
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlinePersistentAuthInterfaceImpl::GetContinuanceToken(unsigned char LocalUserNum)
{
	static UFunction* pFnGetContinuanceToken = nullptr;

	if (!pFnGetContinuanceToken)
	{
		pFnGetContinuanceToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetContinuanceToken");

	}

	UOnlinePersistentAuthInterfaceImpl_execGetContinuanceToken_Parms GetContinuanceToken_Parms;
	GetContinuanceToken_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetContinuanceToken, &GetContinuanceToken_Parms, nullptr);

	return GetContinuanceToken_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.UseRefreshToken
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 RefreshToken                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceImpl::UseRefreshToken(unsigned char LocalUserNum, struct FString RefreshToken)
{
	static UFunction* pFnUseRefreshToken = nullptr;

	if (!pFnUseRefreshToken)
	{
		pFnUseRefreshToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.UseRefreshToken");

	}

	UOnlinePersistentAuthInterfaceImpl_execUseRefreshToken_Parms UseRefreshToken_Parms;
	UseRefreshToken_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UseRefreshToken_Parms.RefreshToken, 0x10, &RefreshToken, 0x10);

	this->ProcessEvent(pFnUseRefreshToken, &UseRefreshToken_Parms, nullptr);

	return UseRefreshToken_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetRefreshToken
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlinePersistentAuthInterfaceImpl::GetRefreshToken(unsigned char LocalUserNum)
{
	static UFunction* pFnGetRefreshToken = nullptr;

	if (!pFnGetRefreshToken)
	{
		pFnGetRefreshToken = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetRefreshToken");

	}

	UOnlinePersistentAuthInterfaceImpl_execGetRefreshToken_Parms GetRefreshToken_Parms;
	GetRefreshToken_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetRefreshToken, &GetRefreshToken_Parms, nullptr);

	return GetRefreshToken_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.RequestPinGrantCode
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceImpl::RequestPinGrantCode(unsigned char LocalUserNum)
{
	static UFunction* pFnRequestPinGrantCode = nullptr;

	if (!pFnRequestPinGrantCode)
	{
		pFnRequestPinGrantCode = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.RequestPinGrantCode");

	}

	UOnlinePersistentAuthInterfaceImpl_execRequestPinGrantCode_Parms RequestPinGrantCode_Parms;
	RequestPinGrantCode_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnRequestPinGrantCode, &RequestPinGrantCode_Parms, nullptr);

	return RequestPinGrantCode_Parms.ReturnValue;
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearUnderageUserDetectedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::ClearUnderageUserDetectedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnClearUnderageUserDetectedDelegate = nullptr;

	if (!pFnClearUnderageUserDetectedDelegate)
	{
		pFnClearUnderageUserDetectedDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearUnderageUserDetectedDelegate");

	}

	UOnlinePersistentAuthInterfaceImpl_execClearUnderageUserDetectedDelegate_Parms ClearUnderageUserDetectedDelegate_Parms;
	memcpy_s(&ClearUnderageUserDetectedDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnClearUnderageUserDetectedDelegate, &ClearUnderageUserDetectedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddUnderageUserDetectedDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::AddUnderageUserDetectedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnAddUnderageUserDetectedDelegate = nullptr;

	if (!pFnAddUnderageUserDetectedDelegate)
	{
		pFnAddUnderageUserDetectedDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddUnderageUserDetectedDelegate");

	}

	UOnlinePersistentAuthInterfaceImpl_execAddUnderageUserDetectedDelegate_Parms AddUnderageUserDetectedDelegate_Parms;
	memcpy_s(&AddUnderageUserDetectedDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnAddUnderageUserDetectedDelegate, &AddUnderageUserDetectedDelegate_Parms, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnUnderageUserDetected
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 ParentalConsentURL             (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::OnUnderageUserDetected(unsigned char LocalUserNum, struct FString ParentalConsentURL)
{
	static UFunction* pFnOnUnderageUserDetected = nullptr;

	if (!pFnOnUnderageUserDetected)
	{
		pFnOnUnderageUserDetected = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnUnderageUserDetected");

	}

	UOnlinePersistentAuthInterfaceImpl_execOnUnderageUserDetected_Parms OnUnderageUserDetected_Parms;
	OnUnderageUserDetected_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnUnderageUserDetected_Parms.ParentalConsentURL, 0x10, &ParentalConsentURL, 0x10);

	this->ProcessEvent(pFnOnUnderageUserDetected, &OnUnderageUserDetected_Parms, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearRequestPinGrantCodeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::ClearRequestPinGrantCodeDelegate(unsigned char LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* pFnClearRequestPinGrantCodeDelegate = nullptr;

	if (!pFnClearRequestPinGrantCodeDelegate)
	{
		pFnClearRequestPinGrantCodeDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearRequestPinGrantCodeDelegate");

	}

	UOnlinePersistentAuthInterfaceImpl_execClearRequestPinGrantCodeDelegate_Parms ClearRequestPinGrantCodeDelegate_Parms;
	ClearRequestPinGrantCodeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearRequestPinGrantCodeDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnClearRequestPinGrantCodeDelegate, &ClearRequestPinGrantCodeDelegate_Parms, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddRequestPinGrantCodeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePersistentAuthInterfaceImpl::AddRequestPinGrantCodeDelegate(unsigned char LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* pFnAddRequestPinGrantCodeDelegate = nullptr;

	if (!pFnAddRequestPinGrantCodeDelegate)
	{
		pFnAddRequestPinGrantCodeDelegate = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddRequestPinGrantCodeDelegate");

	}

	UOnlinePersistentAuthInterfaceImpl_execAddRequestPinGrantCodeDelegate_Parms AddRequestPinGrantCodeDelegate_Parms;
	AddRequestPinGrantCodeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddRequestPinGrantCodeDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnAddRequestPinGrantCodeDelegate, &AddRequestPinGrantCodeDelegate_Parms, nullptr);
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnReceievedPinGrantCode
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Result                         (CPF_Parm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 Code                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)
// int                            SecondsUntilExpiration         (CPF_Parm)

void UOnlinePersistentAuthInterfaceImpl::OnReceievedPinGrantCode(unsigned char Result, unsigned char LocalUserNum, struct FString Code, struct FString URL, int SecondsUntilExpiration)
{
	static UFunction* pFnOnReceievedPinGrantCode = nullptr;

	if (!pFnOnReceievedPinGrantCode)
	{
		pFnOnReceievedPinGrantCode = UFunction::FindFunction("Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnReceievedPinGrantCode");

	}

	UOnlinePersistentAuthInterfaceImpl_execOnReceievedPinGrantCode_Parms OnReceievedPinGrantCode_Parms;
	OnReceievedPinGrantCode_Parms.Result = Result;
	OnReceievedPinGrantCode_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnReceievedPinGrantCode_Parms.Code, 0x10, &Code, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Parms.URL, 0x10, &URL, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Parms.SecondsUntilExpiration, 0x4, &SecondsUntilExpiration, 0x4);

	this->ProcessEvent(pFnOnReceievedPinGrantCode, &OnReceievedPinGrantCode_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParseDataCenterId(TArray<unsigned char>& Data)
{
	static UFunction* pFnParseDataCenterId = nullptr;

	if (!pFnParseDataCenterId)
	{
		pFnParseDataCenterId = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ParseDataCenterId");

	}

	UOnlinePlaylistManager_execParseDataCenterId_Parms ParseDataCenterId_Parms;

	pFnParseDataCenterId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParseDataCenterId, &ParseDataCenterId_Parms, nullptr);

	pFnParseDataCenterId->FunctionFlags |= 0x400;
	memcpy_s(&ParseDataCenterId_Parms.Data, 0x10, &Data, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadDataCenterIdComplete = nullptr;

	if (!pFnOnReadDataCenterIdComplete)
	{
		pFnOnReadDataCenterIdComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete");

	}

	UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Parms OnReadDataCenterIdComplete_Parms;
	OnReadDataCenterIdComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadDataCenterIdComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadDataCenterIdComplete, &OnReadDataCenterIdComplete_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::ReadDataCenterId()
{
	static UFunction* pFnReadDataCenterId = nullptr;

	if (!pFnReadDataCenterId)
	{
		pFnReadDataCenterId = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ReadDataCenterId");

	}

	UOnlinePlaylistManager_execReadDataCenterId_Parms ReadDataCenterId_Parms;

	this->ProcessEvent(pFnReadDataCenterId, &ReadDataCenterId_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            NumPlayers                     (CPF_Parm)

void UOnlinePlaylistManager::eventSendPlaylistPopulationUpdate(int NumPlayers)
{
	static UFunction* pFnSendPlaylistPopulationUpdate = nullptr;

	if (!pFnSendPlaylistPopulationUpdate)
	{
		pFnSendPlaylistPopulationUpdate = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate");

	}

	UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Parms SendPlaylistPopulationUpdate_Parms;
	memcpy_s(&SendPlaylistPopulationUpdate_Parms.NumPlayers, 0x4, &NumPlayers, 0x4);

	this->ProcessEvent(pFnSendPlaylistPopulationUpdate, &SendPlaylistPopulationUpdate_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            PlaylistId                     (CPF_Parm)
// int                            WorldwideTotal                 (CPF_Parm | CPF_OutParm)
// int                            RegionTotal                    (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int PlaylistId, int& WorldwideTotal, int& RegionTotal)
{
	static UFunction* pFnGetPopulationInfoFromPlaylist = nullptr;

	if (!pFnGetPopulationInfoFromPlaylist)
	{
		pFnGetPopulationInfoFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist");

	}

	UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Parms GetPopulationInfoFromPlaylist_Parms;
	memcpy_s(&GetPopulationInfoFromPlaylist_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetPopulationInfoFromPlaylist, &GetPopulationInfoFromPlaylist_Parms, nullptr);
	memcpy_s(&GetPopulationInfoFromPlaylist_Parms.WorldwideTotal, 0x4, &WorldwideTotal, 0x4);
	memcpy_s(&GetPopulationInfoFromPlaylist_Parms.RegionTotal, 0x4, &RegionTotal, 0x4);
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParsePlaylistPopulationData(TArray<unsigned char>& Data)
{
	static UFunction* pFnParsePlaylistPopulationData = nullptr;

	if (!pFnParsePlaylistPopulationData)
	{
		pFnParsePlaylistPopulationData = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData");

	}

	UOnlinePlaylistManager_execParsePlaylistPopulationData_Parms ParsePlaylistPopulationData_Parms;

	pFnParsePlaylistPopulationData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParsePlaylistPopulationData, &ParsePlaylistPopulationData_Parms, nullptr);

	pFnParsePlaylistPopulationData->FunctionFlags |= 0x400;
	memcpy_s(&ParsePlaylistPopulationData_Parms.Data, 0x10, &Data, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static UFunction* pFnOnPlaylistPopulationDataUpdated = nullptr;

	if (!pFnOnPlaylistPopulationDataUpdated)
	{
		pFnOnPlaylistPopulationDataUpdated = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated");

	}

	UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Parms OnPlaylistPopulationDataUpdated_Parms;

	this->ProcessEvent(pFnOnPlaylistPopulationDataUpdated, &OnPlaylistPopulationDataUpdated_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadPlaylistPopulationComplete = nullptr;

	if (!pFnOnReadPlaylistPopulationComplete)
	{
		pFnOnReadPlaylistPopulationComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete");

	}

	UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Parms OnReadPlaylistPopulationComplete_Parms;
	OnReadPlaylistPopulationComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadPlaylistPopulationComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadPlaylistPopulationComplete, &OnReadPlaylistPopulationComplete_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::ReadPlaylistPopulation()
{
	static UFunction* pFnReadPlaylistPopulation = nullptr;

	if (!pFnReadPlaylistPopulation)
	{
		pFnReadPlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation");

	}

	UOnlinePlaylistManager_execReadPlaylistPopulation_Parms ReadPlaylistPopulation_Parms;

	this->ProcessEvent(pFnReadPlaylistPopulation, &ReadPlaylistPopulation_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::Reset()
{
	static UFunction* pFnReset = nullptr;

	if (!pFnReset)
	{
		pFnReset = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.Reset");

	}

	UOnlinePlaylistManager_execReset_Parms Reset_Parms;

	this->ProcessEvent(pFnReset, &Reset_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            PlaylistId                     (CPF_Parm)
// TArray<int>                    ContentIds                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int PlaylistId, TArray<int>& ContentIds)
{
	static UFunction* pFnGetContentIdsFromPlaylist = nullptr;

	if (!pFnGetContentIdsFromPlaylist)
	{
		pFnGetContentIdsFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist");

	}

	UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Parms GetContentIdsFromPlaylist_Parms;
	memcpy_s(&GetContentIdsFromPlaylist_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetContentIdsFromPlaylist, &GetContentIdsFromPlaylist_Parms, nullptr);
	memcpy_s(&GetContentIdsFromPlaylist_Parms.ContentIds, 0x10, &ContentIds, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            PlaylistId                     (CPF_Parm)
// TArray<struct FName>           MapCycle                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>& MapCycle)
{
	static UFunction* pFnGetMapCycleFromPlaylist = nullptr;

	if (!pFnGetMapCycleFromPlaylist)
	{
		pFnGetMapCycleFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist");

	}

	UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Parms GetMapCycleFromPlaylist_Parms;
	memcpy_s(&GetMapCycleFromPlaylist_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetMapCycleFromPlaylist, &GetMapCycleFromPlaylist_Parms, nullptr);
	memcpy_s(&GetMapCycleFromPlaylist_Parms.MapCycle, 0x10, &MapCycle, 0x10);
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            PlaylistId                     (CPF_Parm)

struct FString UOnlinePlaylistManager::GetUrlFromPlaylist(int PlaylistId)
{
	static UFunction* pFnGetUrlFromPlaylist = nullptr;

	if (!pFnGetUrlFromPlaylist)
	{
		pFnGetUrlFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist");

	}

	UOnlinePlaylistManager_execGetUrlFromPlaylist_Parms GetUrlFromPlaylist_Parms;
	memcpy_s(&GetUrlFromPlaylist_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetUrlFromPlaylist, &GetUrlFromPlaylist_Parms, nullptr);

	return GetUrlFromPlaylist_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)

int UOnlinePlaylistManager::GetMatchType(int PlaylistId)
{
	static UFunction* pFnGetMatchType = nullptr;

	if (!pFnGetMatchType)
	{
		pFnGetMatchType = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetMatchType");

	}

	UOnlinePlaylistManager_execGetMatchType_Parms GetMatchType_Parms;
	memcpy_s(&GetMatchType_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetMatchType, &GetMatchType_Parms, nullptr);

	return GetMatchType_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int PlaylistId)
{
	static UFunction* pFnIsPlaylistArbitrated = nullptr;

	if (!pFnIsPlaylistArbitrated)
	{
		pFnIsPlaylistArbitrated = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated");

	}

	UOnlinePlaylistManager_execIsPlaylistArbitrated_Parms IsPlaylistArbitrated_Parms;
	memcpy_s(&IsPlaylistArbitrated_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnIsPlaylistArbitrated, &IsPlaylistArbitrated_Parms, nullptr);

	return IsPlaylistArbitrated_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            PlaylistId                     (CPF_Parm)
// int                            LoadBalanceId                  (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int PlaylistId, int& LoadBalanceId)
{
	static UFunction* pFnGetLoadBalanceIdFromPlaylist = nullptr;

	if (!pFnGetLoadBalanceIdFromPlaylist)
	{
		pFnGetLoadBalanceIdFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist");

	}

	UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Parms GetLoadBalanceIdFromPlaylist_Parms;
	memcpy_s(&GetLoadBalanceIdFromPlaylist_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetLoadBalanceIdFromPlaylist, &GetLoadBalanceIdFromPlaylist_Parms, nullptr);
	memcpy_s(&GetLoadBalanceIdFromPlaylist_Parms.LoadBalanceId, 0x4, &LoadBalanceId, 0x4);
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            PlaylistId                     (CPF_Parm)
// int                            TeamSize                       (CPF_Parm | CPF_OutParm)
// int                            TeamCount                      (CPF_Parm | CPF_OutParm)
// int                            MaxPartySize                   (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int PlaylistId, int& TeamSize, int& TeamCount, int& MaxPartySize)
{
	static UFunction* pFnGetTeamInfoFromPlaylist = nullptr;

	if (!pFnGetTeamInfoFromPlaylist)
	{
		pFnGetTeamInfoFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist");

	}

	UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Parms GetTeamInfoFromPlaylist_Parms;
	memcpy_s(&GetTeamInfoFromPlaylist_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetTeamInfoFromPlaylist, &GetTeamInfoFromPlaylist_Parms, nullptr);
	memcpy_s(&GetTeamInfoFromPlaylist_Parms.TeamSize, 0x4, &TeamSize, 0x4);
	memcpy_s(&GetTeamInfoFromPlaylist_Parms.TeamCount, 0x4, &TeamCount, 0x4);
	memcpy_s(&GetTeamInfoFromPlaylist_Parms.MaxPartySize, 0x4, &MaxPartySize, 0x4);
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int PlaylistId)
{
	static UFunction* pFnPlaylistSupportsDedicatedServers = nullptr;

	if (!pFnPlaylistSupportsDedicatedServers)
	{
		pFnPlaylistSupportsDedicatedServers = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers");

	}

	UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Parms PlaylistSupportsDedicatedServers_Parms;
	memcpy_s(&PlaylistSupportsDedicatedServers_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnPlaylistSupportsDedicatedServers, &PlaylistSupportsDedicatedServers_Parms, nullptr);

	return PlaylistSupportsDedicatedServers_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::HasAnyGameSettings(int PlaylistId)
{
	static UFunction* pFnHasAnyGameSettings = nullptr;

	if (!pFnHasAnyGameSettings)
	{
		pFnHasAnyGameSettings = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings");

	}

	UOnlinePlaylistManager_execHasAnyGameSettings_Parms HasAnyGameSettings_Parms;
	memcpy_s(&HasAnyGameSettings_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnHasAnyGameSettings, &HasAnyGameSettings_Parms, nullptr);

	return HasAnyGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)
// int                            GameSettingsId                 (CPF_Parm)

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings(int PlaylistId, int GameSettingsId)
{
	static UFunction* pFnGetGameSettings = nullptr;

	if (!pFnGetGameSettings)
	{
		pFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetGameSettings");

	}

	UOnlinePlaylistManager_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy_s(&GetGameSettings_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);
	memcpy_s(&GetGameSettings_Parms.GameSettingsId, 0x4, &GameSettingsId, 0x4);

	this->ProcessEvent(pFnGetGameSettings, &GetGameSettings_Parms, nullptr);

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static UFunction* pFnFinalizePlaylistObjects = nullptr;

	if (!pFnFinalizePlaylistObjects)
	{
		pFnFinalizePlaylistObjects = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects");

	}

	UOnlinePlaylistManager_execFinalizePlaylistObjects_Parms FinalizePlaylistObjects_Parms;

	pFnFinalizePlaylistObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFinalizePlaylistObjects, &FinalizePlaylistObjects_Parms, nullptr);

	pFnFinalizePlaylistObjects->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadTitleFileComplete = nullptr;

	if (!pFnOnReadTitleFileComplete)
	{
		pFnOnReadTitleFileComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete");

	}

	UOnlinePlaylistManager_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static UFunction* pFnShouldRefreshPlaylists = nullptr;

	if (!pFnShouldRefreshPlaylists)
	{
		pFnShouldRefreshPlaylists = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists");

	}

	UOnlinePlaylistManager_execShouldRefreshPlaylists_Parms ShouldRefreshPlaylists_Parms;

	pFnShouldRefreshPlaylists->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShouldRefreshPlaylists, &ShouldRefreshPlaylists_Parms, nullptr);

	pFnShouldRefreshPlaylists->FunctionFlags |= 0x400;

	return ShouldRefreshPlaylists_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static UFunction* pFnDetermineFilesToDownload = nullptr;

	if (!pFnDetermineFilesToDownload)
	{
		pFnDetermineFilesToDownload = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload");

	}

	UOnlinePlaylistManager_execDetermineFilesToDownload_Parms DetermineFilesToDownload_Parms;

	pFnDetermineFilesToDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDetermineFilesToDownload, &DetermineFilesToDownload_Parms, nullptr);

	pFnDetermineFilesToDownload->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlaylistManager::DownloadPlaylist()
{
	static UFunction* pFnDownloadPlaylist = nullptr;

	if (!pFnDownloadPlaylist)
	{
		pFnDownloadPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.DownloadPlaylist");

	}

	UOnlinePlaylistManager_execDownloadPlaylist_Parms DownloadPlaylist_Parms;

	this->ProcessEvent(pFnDownloadPlaylist, &DownloadPlaylist_Parms, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlaylistManager::OnReadPlaylistComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlaylistComplete = nullptr;

	if (!pFnOnReadPlaylistComplete)
	{
		pFnOnReadPlaylistComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete");

	}

	UOnlinePlaylistManager_execOnReadPlaylistComplete_Parms OnReadPlaylistComplete_Parms;
	OnReadPlaylistComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlaylistComplete, &OnReadPlaylistComplete_Parms, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceImpl::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* pFnClearMicroTxnResponseDelegate = nullptr;

	if (!pFnClearMicroTxnResponseDelegate)
	{
		pFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate");

	}

	UOnlinePurchaseInterfaceImpl_execClearMicroTxnResponseDelegate_Parms ClearMicroTxnResponseDelegate_Parms;
	memcpy_s(&ClearMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(pFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceImpl::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* pFnAddMicroTxnResponseDelegate = nullptr;

	if (!pFnAddMicroTxnResponseDelegate)
	{
		pFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate");

	}

	UOnlinePurchaseInterfaceImpl_execAddMicroTxnResponseDelegate_Parms AddMicroTxnResponseDelegate_Parms;
	memcpy_s(&AddMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(pFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Parms, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAuthorized                    (CPF_Parm)
// unsigned long long             OrderId                        (CPF_Parm)

void UOnlinePurchaseInterfaceImpl::OnMicroTxnResponse(unsigned long bAuthorized, unsigned long long OrderId)
{
	static UFunction* pFnOnMicroTxnResponse = nullptr;

	if (!pFnOnMicroTxnResponse)
	{
		pFnOnMicroTxnResponse = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse");

	}

	UOnlinePurchaseInterfaceImpl_execOnMicroTxnResponse_Parms OnMicroTxnResponse_Parms;
	OnMicroTxnResponse_Parms.bAuthorized = bAuthorized;
	OnMicroTxnResponse_Parms.OrderId = OrderId;

	this->ProcessEvent(pFnOnMicroTxnResponse, &OnMicroTxnResponse_Parms, nullptr);
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int                            Price                          (CPF_Parm)

struct FString UOnlinePurchaseInterfaceImpl::FormatCurrency(struct FString Currency, int Price)
{
	static UFunction* pFnFormatCurrency = nullptr;

	if (!pFnFormatCurrency)
	{
		pFnFormatCurrency = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency");

	}

	UOnlinePurchaseInterfaceImpl_execFormatCurrency_Parms FormatCurrency_Parms;
	memcpy_s(&FormatCurrency_Parms.Currency, 0x10, &Currency, 0x10);
	memcpy_s(&FormatCurrency_Parms.Price, 0x4, &Price, 0x4);

	this->ProcessEvent(pFnFormatCurrency, &FormatCurrency_Parms, nullptr);

	return FormatCurrency_Parms.ReturnValue;
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceImpl::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* pFnGetAppPriceInfo = nullptr;

	if (!pFnGetAppPriceInfo)
	{
		pFnGetAppPriceInfo = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo");

	}

	UOnlinePurchaseInterfaceImpl_execGetAppPriceInfo_Parms GetAppPriceInfo_Parms;
	memcpy_s(&GetAppPriceInfo_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnGetAppPriceInfo, &GetAppPriceInfo_Parms, nullptr);
	memcpy_s(&GetAppPriceInfo_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAppPriceInfo_Parms.AppNames, 0x10, &AppNames, 0x10);

	return GetAppPriceInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   AppName                        (CPF_Parm)
// struct FString                 Price                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DiscountPrice                  (CPF_Parm | CPF_NeedCtorLink)
// int                            DiscountPercentage             (CPF_Parm)

void UOnlinePurchaseInterfaceImpl::EventGetAppPriceInfoComplete(struct FName AppName, struct FString Price, struct FString DiscountPrice, int DiscountPercentage)
{
	static UFunction* pFnEventGetAppPriceInfoComplete = nullptr;

	if (!pFnEventGetAppPriceInfoComplete)
	{
		pFnEventGetAppPriceInfoComplete = UFunction::FindFunction("Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete");

	}

	UOnlinePurchaseInterfaceImpl_execEventGetAppPriceInfoComplete_Parms EventGetAppPriceInfoComplete_Parms;
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.AppName, 0x8, &AppName, 0x8);
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.Price, 0x10, &Price, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.DiscountPrice, 0x10, &DiscountPrice, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.DiscountPercentage, 0x4, &DiscountPercentage, 0x4);

	this->ProcessEvent(pFnEventGetAppPriceInfoComplete, &EventGetAppPriceInfoComplete_Parms, nullptr);
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeacon::OnDestroyComplete()
{
	static UFunction* pFnOnDestroyComplete = nullptr;

	if (!pFnOnDestroyComplete)
	{
		pFnOnDestroyComplete = UFunction::FindFunction("Function IpDrv.PartyBeacon.OnDestroyComplete");

	}

	UPartyBeacon_execOnDestroyComplete_Parms OnDestroyComplete_Parms;

	this->ProcessEvent(pFnOnDestroyComplete, &OnDestroyComplete_Parms, nullptr);
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UPartyBeacon::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = nullptr;

	if (!pFnDestroyBeacon)
	{
		pFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeacon.DestroyBeacon");

	}

	UPartyBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, nullptr);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UPartyBeaconClient::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = nullptr;

	if (!pFnDestroyBeacon)
	{
		pFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.DestroyBeacon");

	}

	UPartyBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	unsigned short NativeIndex = pFnDestroyBeacon->iNative;
	pFnDestroyBeacon->iNative = 0;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, nullptr);

	pFnDestroyBeacon->FunctionFlags |= 0x400;

	pFnDestroyBeacon->iNative = NativeIndex;
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            CancellingPartyLeader          (CPF_Parm | CPF_NeedCtorLink)

bool UPartyBeaconClient::CancelReservation(struct FUniqueNetId CancellingPartyLeader)
{
	static UFunction* pFnCancelReservation = nullptr;

	if (!pFnCancelReservation)
	{
		pFnCancelReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.CancelReservation");

	}

	UPartyBeaconClient_execCancelReservation_Parms CancelReservation_Parms;
	memcpy_s(&CancelReservation_Parms.CancellingPartyLeader, 0x48, &CancellingPartyLeader, 0x48);

	pFnCancelReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelReservation, &CancelReservation_Parms, nullptr);

	pFnCancelReservation->FunctionFlags |= 0x400;

	return CancelReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<struct FPlayerReservation> PlayersToAdd                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UPartyBeaconClient::RequestReservationUpdate(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& PlayersToAdd)
{
	static UFunction* pFnRequestReservationUpdate = nullptr;

	if (!pFnRequestReservationUpdate)
	{
		pFnRequestReservationUpdate = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.RequestReservationUpdate");

	}

	UPartyBeaconClient_execRequestReservationUpdate_Parms RequestReservationUpdate_Parms;
	memcpy_s(&RequestReservationUpdate_Parms.RequestingPartyLeader, 0x48, &RequestingPartyLeader, 0x48);

	pFnRequestReservationUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestReservationUpdate, &RequestReservationUpdate_Parms, nullptr);

	pFnRequestReservationUpdate->FunctionFlags |= 0x400;
	memcpy_s(&RequestReservationUpdate_Parms.DesiredHost, 0x10, &DesiredHost, 0x10);
	memcpy_s(&RequestReservationUpdate_Parms.PlayersToAdd, 0x10, &PlayersToAdd, 0x10);

	return RequestReservationUpdate_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<struct FPlayerReservation> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UPartyBeaconClient::RequestReservation(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& Players)
{
	static UFunction* pFnRequestReservation = nullptr;

	if (!pFnRequestReservation)
	{
		pFnRequestReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.RequestReservation");

	}

	UPartyBeaconClient_execRequestReservation_Parms RequestReservation_Parms;
	memcpy_s(&RequestReservation_Parms.RequestingPartyLeader, 0x48, &RequestingPartyLeader, 0x48);

	pFnRequestReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestReservation, &RequestReservation_Parms, nullptr);

	pFnRequestReservation->FunctionFlags |= 0x400;
	memcpy_s(&RequestReservation_Parms.DesiredHost, 0x10, &DesiredHost, 0x10);
	memcpy_s(&RequestReservation_Parms.Players, 0x10, &Players, 0x10);

	return RequestReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconClient::OnHostHasCancelled()
{
	static UFunction* pFnOnHostHasCancelled = nullptr;

	if (!pFnOnHostHasCancelled)
	{
		pFnOnHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostHasCancelled");

	}

	UPartyBeaconClient_execOnHostHasCancelled_Parms OnHostHasCancelled_Parms;

	this->ProcessEvent(pFnOnHostHasCancelled, &OnHostHasCancelled_Parms, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconClient::OnHostIsReady()
{
	static UFunction* pFnOnHostIsReady = nullptr;

	if (!pFnOnHostIsReady)
	{
		pFnOnHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostIsReady");

	}

	UPartyBeaconClient_execOnHostIsReady_Parms OnHostIsReady_Parms;

	this->ProcessEvent(pFnOnHostIsReady, &OnHostIsReady_Parms, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconClient::OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static UFunction* pFnOnTravelRequestReceived = nullptr;

	if (!pFnOnTravelRequestReceived)
	{
		pFnOnTravelRequestReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnTravelRequestReceived");

	}

	UPartyBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy_s(&OnTravelRequestReceived_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnTravelRequestReceived_Parms.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&OnTravelRequestReceived_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	this->ProcessEvent(pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            ReservationRemaining           (CPF_Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int ReservationRemaining)
{
	static UFunction* pFnOnReservationCountUpdated = nullptr;

	if (!pFnOnReservationCountUpdated)
	{
		pFnOnReservationCountUpdated = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationCountUpdated");

	}

	UPartyBeaconClient_execOnReservationCountUpdated_Parms OnReservationCountUpdated_Parms;
	memcpy_s(&OnReservationCountUpdated_Parms.ReservationRemaining, 0x4, &ReservationRemaining, 0x4);

	this->ProcessEvent(pFnOnReservationCountUpdated, &OnReservationCountUpdated_Parms, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReservationResult              (CPF_Parm)

void UPartyBeaconClient::OnReservationRequestComplete(unsigned char ReservationResult)
{
	static UFunction* pFnOnReservationRequestComplete = nullptr;

	if (!pFnOnReservationRequestComplete)
	{
		pFnOnReservationRequestComplete = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationRequestComplete");

	}

	UPartyBeaconClient_execOnReservationRequestComplete_Parms OnReservationRequestComplete_Parms;
	OnReservationRequestComplete_Parms.ReservationResult = ReservationResult;

	this->ProcessEvent(pFnOnReservationRequestComplete, &OnReservationRequestComplete_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static UFunction* pFnGetMaxAvailableTeamSize = nullptr;

	if (!pFnGetMaxAvailableTeamSize)
	{
		pFnGetMaxAvailableTeamSize = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize");

	}

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms GetMaxAvailableTeamSize_Parms;

	pFnGetMaxAvailableTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Parms, nullptr);

	pFnGetMaxAvailableTeamSize->FunctionFlags |= 0x400;

	return GetMaxAvailableTeamSize_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FUniqueNetId>    PartyLeaders                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UPartyBeaconHost::GetPartyLeaders(TArray<struct FUniqueNetId>& PartyLeaders)
{
	static UFunction* pFnGetPartyLeaders = nullptr;

	if (!pFnGetPartyLeaders)
	{
		pFnGetPartyLeaders = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetPartyLeaders");

	}

	UPartyBeaconHost_execGetPartyLeaders_Parms GetPartyLeaders_Parms;

	this->ProcessEvent(pFnGetPartyLeaders, &GetPartyLeaders_Parms, nullptr);
	memcpy_s(&GetPartyLeaders_Parms.PartyLeaders, 0x10, &PartyLeaders, 0x10);
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UPartyBeaconHost::GetPlayers(TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnGetPlayers = nullptr;

	if (!pFnGetPlayers)
	{
		pFnGetPlayers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetPlayers");

	}

	UPartyBeaconHost_execGetPlayers_Parms GetPlayers_Parms;

	this->ProcessEvent(pFnGetPlayers, &GetPlayers_Parms, nullptr);
	memcpy_s(&GetPlayers_Parms.Players, 0x10, &Players, 0x10);
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineGameSearch*       Search                         (CPF_Parm)

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static UFunction* pFnAppendReservationSkillsToSearch = nullptr;

	if (!pFnAppendReservationSkillsToSearch)
	{
		pFnAppendReservationSkillsToSearch = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch");

	}

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms AppendReservationSkillsToSearch_Parms;
	memcpy_s(&AppendReservationSkillsToSearch_Parms.Search, 0x8, &Search, 0x8);

	pFnAppendReservationSkillsToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Parms, nullptr);

	pFnAppendReservationSkillsToSearch->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)

void UPartyBeaconHost::eventUnregisterParty(struct FUniqueNetId PartyLeader)
{
	static UFunction* pFnUnregisterParty = nullptr;

	if (!pFnUnregisterParty)
	{
		pFnUnregisterParty = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UnregisterParty");

	}

	UPartyBeaconHost_eventUnregisterParty_Parms UnregisterParty_Parms;
	memcpy_s(&UnregisterParty_Parms.PartyLeader, 0x48, &PartyLeader, 0x48);

	this->ProcessEvent(pFnUnregisterParty, &UnregisterParty_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::eventUnregisterPartyMembers()
{
	static UFunction* pFnUnregisterPartyMembers = nullptr;

	if (!pFnUnregisterPartyMembers)
	{
		pFnUnregisterPartyMembers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UnregisterPartyMembers");

	}

	UPartyBeaconHost_eventUnregisterPartyMembers_Parms UnregisterPartyMembers_Parms;

	this->ProcessEvent(pFnUnregisterPartyMembers, &UnregisterPartyMembers_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::eventRegisterPartyMembers()
{
	static UFunction* pFnRegisterPartyMembers = nullptr;

	if (!pFnRegisterPartyMembers)
	{
		pFnRegisterPartyMembers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.RegisterPartyMembers");

	}

	UPartyBeaconHost_eventRegisterPartyMembers_Parms RegisterPartyMembers_Parms;

	this->ProcessEvent(pFnRegisterPartyMembers, &RegisterPartyMembers_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UPartyBeaconHost::AreReservationsFull()
{
	static UFunction* pFnAreReservationsFull = nullptr;

	if (!pFnAreReservationsFull)
	{
		pFnAreReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AreReservationsFull");

	}

	UPartyBeaconHost_execAreReservationsFull_Parms AreReservationsFull_Parms;

	this->ProcessEvent(pFnAreReservationsFull, &AreReservationsFull_Parms, nullptr);

	return AreReservationsFull_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static UFunction* pFnTellClientsHostHasCancelled = nullptr;

	if (!pFnTellClientsHostHasCancelled)
	{
		pFnTellClientsHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled");

	}

	UPartyBeaconHost_execTellClientsHostHasCancelled_Parms TellClientsHostHasCancelled_Parms;

	pFnTellClientsHostHasCancelled->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Parms, nullptr);

	pFnTellClientsHostHasCancelled->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static UFunction* pFnTellClientsHostIsReady = nullptr;

	if (!pFnTellClientsHostIsReady)
	{
		pFnTellClientsHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsHostIsReady");

	}

	UPartyBeaconHost_execTellClientsHostIsReady_Parms TellClientsHostIsReady_Parms;

	pFnTellClientsHostIsReady->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsHostIsReady, &TellClientsHostIsReady_Parms, nullptr);

	pFnTellClientsHostIsReady->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// unsigned char                  PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconHost::TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static UFunction* pFnTellClientsToTravel = nullptr;

	if (!pFnTellClientsToTravel)
	{
		pFnTellClientsToTravel = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsToTravel");

	}

	UPartyBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy_s(&TellClientsToTravel_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&TellClientsToTravel_Parms.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&TellClientsToTravel_Parms.PlatformSpecificInfo, 0x50, &PlatformSpecificInfo, 0x50);

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsToTravel, &TellClientsToTravel_Parms, nullptr);

	pFnTellClientsToTravel->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UPartyBeaconHost::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = nullptr;

	if (!pFnDestroyBeacon)
	{
		pFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.DestroyBeacon");

	}

	UPartyBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	unsigned short NativeIndex = pFnDestroyBeacon->iNative;
	pFnDestroyBeacon->iNative = 0;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, nullptr);

	pFnDestroyBeacon->FunctionFlags |= 0x400;

	pFnDestroyBeacon->iNative = NativeIndex;
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)

void UPartyBeaconHost::OnClientCancellationReceived(struct FUniqueNetId PartyLeader)
{
	static UFunction* pFnOnClientCancellationReceived = nullptr;

	if (!pFnOnClientCancellationReceived)
	{
		pFnOnClientCancellationReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnClientCancellationReceived");

	}

	UPartyBeaconHost_execOnClientCancellationReceived_Parms OnClientCancellationReceived_Parms;
	memcpy_s(&OnClientCancellationReceived_Parms.PartyLeader, 0x48, &PartyLeader, 0x48);

	this->ProcessEvent(pFnOnClientCancellationReceived, &OnClientCancellationReceived_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::OnReservationsFull()
{
	static UFunction* pFnOnReservationsFull = nullptr;

	if (!pFnOnReservationsFull)
	{
		pFnOnReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationsFull");

	}

	UPartyBeaconHost_execOnReservationsFull_Parms OnReservationsFull_Parms;

	this->ProcessEvent(pFnOnReservationsFull, &OnReservationsFull_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UPartyBeaconHost::OnReservationChange()
{
	static UFunction* pFnOnReservationChange = nullptr;

	if (!pFnOnReservationChange)
	{
		pFnOnReservationChange = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationChange");

	}

	UPartyBeaconHost_execOnReservationChange_Parms OnReservationChange_Parms;

	this->ProcessEvent(pFnOnReservationChange, &OnReservationChange_Parms, nullptr);
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bMaintainParty                 (CPF_Parm)

void UPartyBeaconHost::HandlePlayerLogout(struct FUniqueNetId PlayerID, unsigned long bMaintainParty)
{
	static UFunction* pFnHandlePlayerLogout = nullptr;

	if (!pFnHandlePlayerLogout)
	{
		pFnHandlePlayerLogout = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.HandlePlayerLogout");

	}

	UPartyBeaconHost_execHandlePlayerLogout_Parms HandlePlayerLogout_Parms;
	memcpy_s(&HandlePlayerLogout_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	HandlePlayerLogout_Parms.bMaintainParty = bMaintainParty;

	pFnHandlePlayerLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHandlePlayerLogout, &HandlePlayerLogout_Parms, nullptr);

	pFnHandlePlayerLogout->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId& PartyLeader)
{
	static UFunction* pFnGetExistingReservation = nullptr;

	if (!pFnGetExistingReservation)
	{
		pFnGetExistingReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetExistingReservation");

	}

	UPartyBeaconHost_execGetExistingReservation_Parms GetExistingReservation_Parms;

	pFnGetExistingReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetExistingReservation, &GetExistingReservation_Parms, nullptr);

	pFnGetExistingReservation->FunctionFlags |= 0x400;
	memcpy_s(&GetExistingReservation_Parms.PartyLeader, 0x48, &PartyLeader, 0x48);

	return GetExistingReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

unsigned char UPartyBeaconHost::UpdatePartyReservationEntry(struct FUniqueNetId PartyLeader, TArray<struct FPlayerReservation>& PlayerMembers)
{
	static UFunction* pFnUpdatePartyReservationEntry = nullptr;

	if (!pFnUpdatePartyReservationEntry)
	{
		pFnUpdatePartyReservationEntry = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry");

	}

	UPartyBeaconHost_execUpdatePartyReservationEntry_Parms UpdatePartyReservationEntry_Parms;
	memcpy_s(&UpdatePartyReservationEntry_Parms.PartyLeader, 0x48, &PartyLeader, 0x48);

	pFnUpdatePartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Parms, nullptr);

	pFnUpdatePartyReservationEntry->FunctionFlags |= 0x400;
	memcpy_s(&UpdatePartyReservationEntry_Parms.PlayerMembers, 0x10, &PlayerMembers, 0x10);

	return UpdatePartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Parm | CPF_NeedCtorLink)
// int                            TeamNum                        (CPF_Parm)
// unsigned long                  bIsHost                        (CPF_Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

unsigned char UPartyBeaconHost::AddPartyReservationEntry(struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray<struct FPlayerReservation>& PlayerMembers)
{
	static UFunction* pFnAddPartyReservationEntry = nullptr;

	if (!pFnAddPartyReservationEntry)
	{
		pFnAddPartyReservationEntry = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AddPartyReservationEntry");

	}

	UPartyBeaconHost_execAddPartyReservationEntry_Parms AddPartyReservationEntry_Parms;
	memcpy_s(&AddPartyReservationEntry_Parms.PartyLeader, 0x48, &PartyLeader, 0x48);
	memcpy_s(&AddPartyReservationEntry_Parms.TeamNum, 0x4, &TeamNum, 0x4);
	AddPartyReservationEntry_Parms.bIsHost = bIsHost;

	pFnAddPartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddPartyReservationEntry, &AddPartyReservationEntry_Parms, nullptr);

	pFnAddPartyReservationEntry->FunctionFlags |= 0x400;
	memcpy_s(&AddPartyReservationEntry_Parms.PlayerMembers, 0x10, &PlayerMembers, 0x10);

	return AddPartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            InNumTeams                     (CPF_Parm)
// int                            InNumPlayersPerTeam            (CPF_Parm)
// int                            InNumReservations              (CPF_Parm)
// struct FName                   InSessionName                  (CPF_Parm)
// int                            InForceTeamNum                 (CPF_OptionalParm | CPF_Parm)

bool UPartyBeaconHost::InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct FName InSessionName, int InForceTeamNum)
{
	static UFunction* pFnInitHostBeacon = nullptr;

	if (!pFnInitHostBeacon)
	{
		pFnInitHostBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.InitHostBeacon");

	}

	UPartyBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	memcpy_s(&InitHostBeacon_Parms.InNumTeams, 0x4, &InNumTeams, 0x4);
	memcpy_s(&InitHostBeacon_Parms.InNumPlayersPerTeam, 0x4, &InNumPlayersPerTeam, 0x4);
	memcpy_s(&InitHostBeacon_Parms.InNumReservations, 0x4, &InNumReservations, 0x4);
	memcpy_s(&InitHostBeacon_Parms.InSessionName, 0x8, &InSessionName, 0x8);
	memcpy_s(&InitHostBeacon_Parms.InForceTeamNum, 0x4, &InForceTeamNum, 0x4);

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInitHostBeacon, &InitHostBeacon_Parms, nullptr);

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPause                         (CPF_Parm)

void UPartyBeaconHost::PauseReservationRequests(unsigned long bPause)
{
	static UFunction* pFnPauseReservationRequests = nullptr;

	if (!pFnPauseReservationRequests)
	{
		pFnPauseReservationRequests = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.PauseReservationRequests");

	}

	UPartyBeaconHost_execPauseReservationRequests_Parms PauseReservationRequests_Parms;
	PauseReservationRequests_Parms.bPause = bPause;

	pFnPauseReservationRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPauseReservationRequests, &PauseReservationRequests_Parms, nullptr);

	pFnPauseReservationRequests->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 D                              (CPF_Parm | CPF_NeedCtorLink)

int UWebRequest::GetHexDigit(struct FString D)
{
	static UFunction* pFnGetHexDigit = nullptr;

	if (!pFnGetHexDigit)
	{
		pFnGetHexDigit = UFunction::FindFunction("Function IpDrv.WebRequest.GetHexDigit");

	}

	UWebRequest_execGetHexDigit_Parms GetHexDigit_Parms;
	memcpy_s(&GetHexDigit_Parms.D, 0x10, &D, 0x10);

	this->ProcessEvent(pFnGetHexDigit, &GetHexDigit_Parms, nullptr);

	return GetHexDigit_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Data                           (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::DecodeFormData(struct FString Data)
{
	static UFunction* pFnDecodeFormData = nullptr;

	if (!pFnDecodeFormData)
	{
		pFnDecodeFormData = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeFormData");

	}

	UWebRequest_execDecodeFormData_Parms DecodeFormData_Parms;
	memcpy_s(&DecodeFormData_Parms.Data, 0x10, &Data, 0x10);

	this->ProcessEvent(pFnDecodeFormData, &DecodeFormData_Parms, nullptr);
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::ProcessHeaderString(struct FString S)
{
	static UFunction* pFnProcessHeaderString = nullptr;

	if (!pFnProcessHeaderString)
	{
		pFnProcessHeaderString = UFunction::FindFunction("Function IpDrv.WebRequest.ProcessHeaderString");

	}

	UWebRequest_execProcessHeaderString_Parms ProcessHeaderString_Parms;
	memcpy_s(&ProcessHeaderString_Parms.S, 0x10, &S, 0x10);

	this->ProcessEvent(pFnProcessHeaderString, &ProcessHeaderString_Parms, nullptr);
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebRequest::Dump()
{
	static UFunction* pFnDump = nullptr;

	if (!pFnDump)
	{
		pFnDump = UFunction::FindFunction("Function IpDrv.WebRequest.Dump");

	}

	UWebRequest_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDump, &Dump_Parms, nullptr);

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         varNames                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetVariables(TArray<struct FString>& varNames)
{
	static UFunction* pFnGetVariables = nullptr;

	if (!pFnGetVariables)
	{
		pFnGetVariables = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariables");

	}

	UWebRequest_execGetVariables_Parms GetVariables_Parms;

	pFnGetVariables->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariables, &GetVariables_Parms, nullptr);

	pFnGetVariables->FunctionFlags |= 0x400;
	memcpy_s(&GetVariables_Parms.varNames, 0x10, &varNames, 0x10);
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// int                            Number                         (CPF_Parm)
// struct FString                 DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

struct FString UWebRequest::GetVariableNumber(struct FString VariableName, int Number, struct FString DefaultValue)
{
	static UFunction* pFnGetVariableNumber = nullptr;

	if (!pFnGetVariableNumber)
	{
		pFnGetVariableNumber = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableNumber");

	}

	UWebRequest_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy_s(&GetVariableNumber_Parms.VariableName, 0x10, &VariableName, 0x10);
	memcpy_s(&GetVariableNumber_Parms.Number, 0x4, &Number, 0x4);
	memcpy_s(&GetVariableNumber_Parms.DefaultValue, 0x10, &DefaultValue, 0x10);

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableNumber, &GetVariableNumber_Parms, nullptr);

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 VariableName                   (CPF_Parm | CPF_NeedCtorLink)

int UWebRequest::GetVariableCount(struct FString VariableName)
{
	static UFunction* pFnGetVariableCount = nullptr;

	if (!pFnGetVariableCount)
	{
		pFnGetVariableCount = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableCount");

	}

	UWebRequest_execGetVariableCount_Parms GetVariableCount_Parms;
	memcpy_s(&GetVariableCount_Parms.VariableName, 0x10, &VariableName, 0x10);

	pFnGetVariableCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableCount, &GetVariableCount_Parms, nullptr);

	pFnGetVariableCount->FunctionFlags |= 0x400;

	return GetVariableCount_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

struct FString UWebRequest::GetVariable(struct FString VariableName, struct FString DefaultValue)
{
	static UFunction* pFnGetVariable = nullptr;

	if (!pFnGetVariable)
	{
		pFnGetVariable = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariable");

	}

	UWebRequest_execGetVariable_Parms GetVariable_Parms;
	memcpy_s(&GetVariable_Parms.VariableName, 0x10, &VariableName, 0x10);
	memcpy_s(&GetVariable_Parms.DefaultValue, 0x10, &DefaultValue, 0x10);

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariable, &GetVariable_Parms, nullptr);

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddVariable(struct FString VariableName, struct FString Value)
{
	static UFunction* pFnAddVariable = nullptr;

	if (!pFnAddVariable)
	{
		pFnAddVariable = UFunction::FindFunction("Function IpDrv.WebRequest.AddVariable");

	}

	UWebRequest_execAddVariable_Parms AddVariable_Parms;
	memcpy_s(&AddVariable_Parms.VariableName, 0x10, &VariableName, 0x10);
	memcpy_s(&AddVariable_Parms.Value, 0x10, &Value, 0x10);

	pFnAddVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddVariable, &AddVariable_Parms, nullptr);

	pFnAddVariable->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         Headers                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetHeaders(TArray<struct FString>& Headers)
{
	static UFunction* pFnGetHeaders = nullptr;

	if (!pFnGetHeaders)
	{
		pFnGetHeaders = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeaders");

	}

	UWebRequest_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeaders, &GetHeaders_Parms, nullptr);

	pFnGetHeaders->FunctionFlags |= 0x400;
	memcpy_s(&GetHeaders_Parms.Headers, 0x10, &Headers, 0x10);
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

struct FString UWebRequest::GetHeader(struct FString HeaderName, struct FString DefaultValue)
{
	static UFunction* pFnGetHeader = nullptr;

	if (!pFnGetHeader)
	{
		pFnGetHeader = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeader");

	}

	UWebRequest_execGetHeader_Parms GetHeader_Parms;
	memcpy_s(&GetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&GetHeader_Parms.DefaultValue, 0x10, &DefaultValue, 0x10);

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeader, &GetHeader_Parms, nullptr);

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddHeader(struct FString HeaderName, struct FString Value)
{
	static UFunction* pFnAddHeader = nullptr;

	if (!pFnAddHeader)
	{
		pFnAddHeader = UFunction::FindFunction("Function IpDrv.WebRequest.AddHeader");

	}

	UWebRequest_execAddHeader_Parms AddHeader_Parms;
	memcpy_s(&AddHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&AddHeader_Parms.Value, 0x10, &Value, 0x10);

	pFnAddHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddHeader, &AddHeader_Parms, nullptr);

	pFnAddHeader->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00032401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Decoded                        (CPF_Parm | CPF_NeedCtorLink)

struct FString UWebRequest::EncodeBase64(struct FString Decoded)
{
	static UFunction* pFnEncodeBase64 = nullptr;

	if (!pFnEncodeBase64)
	{
		pFnEncodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.EncodeBase64");

	}

	UWebRequest_execEncodeBase64_Parms EncodeBase64_Parms;
	memcpy_s(&EncodeBase64_Parms.Decoded, 0x10, &Decoded, 0x10);

	pFnEncodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncodeBase64, &EncodeBase64_Parms, nullptr);

	pFnEncodeBase64->FunctionFlags |= 0x400;

	return EncodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Encoded                        (CPF_Parm | CPF_NeedCtorLink)

struct FString UWebRequest::DecodeBase64(struct FString Encoded)
{
	static UFunction* pFnDecodeBase64 = nullptr;

	if (!pFnDecodeBase64)
	{
		pFnDecodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeBase64");

	}

	UWebRequest_execDecodeBase64_Parms DecodeBase64_Parms;
	memcpy_s(&DecodeBase64_Parms.Encoded, 0x10, &Encoded, 0x10);

	pFnDecodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecodeBase64, &DecodeBase64_Parms, nullptr);

	pFnDecodeBase64->FunctionFlags |= 0x400;

	return DecodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentResponse()
{
	static UFunction* pFnSentResponse = nullptr;

	if (!pFnSentResponse)
	{
		pFnSentResponse = UFunction::FindFunction("Function IpDrv.WebResponse.SentResponse");

	}

	UWebResponse_execSentResponse_Parms SentResponse_Parms;

	this->ProcessEvent(pFnSentResponse, &SentResponse_Parms, nullptr);

	return SentResponse_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentText()
{
	static UFunction* pFnSentText = nullptr;

	if (!pFnSentText)
	{
		pFnSentText = UFunction::FindFunction("Function IpDrv.WebResponse.SentText");

	}

	UWebResponse_execSentText_Parms SentText_Parms;

	this->ProcessEvent(pFnSentText, &SentText_Parms, nullptr);

	return SentText_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::Redirect(struct FString URL)
{
	static UFunction* pFnRedirect = nullptr;

	if (!pFnRedirect)
	{
		pFnRedirect = UFunction::FindFunction("Function IpDrv.WebResponse.Redirect");

	}

	UWebResponse_execRedirect_Parms Redirect_Parms;
	memcpy_s(&Redirect_Parms.URL, 0x10, &URL, 0x10);

	this->ProcessEvent(pFnRedirect, &Redirect_Parms, nullptr);
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bCache                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::SendStandardHeaders(struct FString ContentType, unsigned long bCache)
{
	static UFunction* pFnSendStandardHeaders = nullptr;

	if (!pFnSendStandardHeaders)
	{
		pFnSendStandardHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendStandardHeaders");

	}

	UWebResponse_execSendStandardHeaders_Parms SendStandardHeaders_Parms;
	memcpy_s(&SendStandardHeaders_Parms.ContentType, 0x10, &ContentType, 0x10);
	SendStandardHeaders_Parms.bCache = bCache;

	this->ProcessEvent(pFnSendStandardHeaders, &SendStandardHeaders_Parms, nullptr);
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ErrorNum                       (CPF_Parm)
// struct FString                 Data                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPError(int ErrorNum, struct FString Data)
{
	static UFunction* pFnHTTPError = nullptr;

	if (!pFnHTTPError)
	{
		pFnHTTPError = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPError");

	}

	UWebResponse_execHTTPError_Parms HTTPError_Parms;
	memcpy_s(&HTTPError_Parms.ErrorNum, 0x4, &ErrorNum, 0x4);
	memcpy_s(&HTTPError_Parms.Data, 0x10, &Data, 0x10);

	this->ProcessEvent(pFnHTTPError, &HTTPError_Parms, nullptr);
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebResponse::SendHeaders()
{
	static UFunction* pFnSendHeaders = nullptr;

	if (!pFnSendHeaders)
	{
		pFnSendHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendHeaders");

	}

	UWebResponse_execSendHeaders_Parms SendHeaders_Parms;

	this->ProcessEvent(pFnSendHeaders, &SendHeaders_Parms, nullptr);
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Header                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bReplace                       (CPF_OptionalParm | CPF_Parm)

void UWebResponse::AddHeader(struct FString Header, unsigned long bReplace)
{
	static UFunction* pFnAddHeader = nullptr;

	if (!pFnAddHeader)
	{
		pFnAddHeader = UFunction::FindFunction("Function IpDrv.WebResponse.AddHeader");

	}

	UWebResponse_execAddHeader_Parms AddHeader_Parms;
	memcpy_s(&AddHeader_Parms.Header, 0x10, &Header, 0x10);
	AddHeader_Parms.bReplace = bReplace;

	this->ProcessEvent(pFnAddHeader, &AddHeader_Parms, nullptr);
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPHeader(struct FString Header)
{
	static UFunction* pFnHTTPHeader = nullptr;

	if (!pFnHTTPHeader)
	{
		pFnHTTPHeader = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPHeader");

	}

	UWebResponse_execHTTPHeader_Parms HTTPHeader_Parms;
	memcpy_s(&HTTPHeader_Parms.Header, 0x10, &Header, 0x10);

	this->ProcessEvent(pFnHTTPHeader, &HTTPHeader_Parms, nullptr);
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HttpResponse(struct FString Header)
{
	static UFunction* pFnHttpResponse = nullptr;

	if (!pFnHttpResponse)
	{
		pFnHttpResponse = UFunction::FindFunction("Function IpDrv.WebResponse.HttpResponse");

	}

	UWebResponse_execHttpResponse_Parms HttpResponse_Parms;
	memcpy_s(&HttpResponse_Parms.Header, 0x10, &Header, 0x10);

	this->ProcessEvent(pFnHttpResponse, &HttpResponse_Parms, nullptr);
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Realm                          (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::FailAuthentication(struct FString Realm)
{
	static UFunction* pFnFailAuthentication = nullptr;

	if (!pFnFailAuthentication)
	{
		pFnFailAuthentication = UFunction::FindFunction("Function IpDrv.WebResponse.FailAuthentication");

	}

	UWebResponse_execFailAuthentication_Parms FailAuthentication_Parms;
	memcpy_s(&FailAuthentication_Parms.Realm, 0x10, &Realm, 0x10);

	this->ProcessEvent(pFnFailAuthentication, &FailAuthentication_Parms, nullptr);
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::SendCachedFile(struct FString Filename, struct FString ContentType)
{
	static UFunction* pFnSendCachedFile = nullptr;

	if (!pFnSendCachedFile)
	{
		pFnSendCachedFile = UFunction::FindFunction("Function IpDrv.WebResponse.SendCachedFile");

	}

	UWebResponse_execSendCachedFile_Parms SendCachedFile_Parms;
	memcpy_s(&SendCachedFile_Parms.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&SendCachedFile_Parms.ContentType, 0x10, &ContentType, 0x10);

	this->ProcessEvent(pFnSendCachedFile, &SendCachedFile_Parms, nullptr);

	return SendCachedFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Count                          (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)

void UWebResponse::eventSendBinary(int Count, unsigned char B)
{
	static UFunction* pFnSendBinary = nullptr;

	if (!pFnSendBinary)
	{
		pFnSendBinary = UFunction::FindFunction("Function IpDrv.WebResponse.SendBinary");

	}

	UWebResponse_eventSendBinary_Parms SendBinary_Parms;
	memcpy_s(&SendBinary_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&SendBinary_Parms.B, 0xFF, &B, 0xFF);

	this->ProcessEvent(pFnSendBinary, &SendBinary_Parms, nullptr);
};

// Function IpDrv.WebResponse.SendText
// [0x00024803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Text                           (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bNoCRLF                        (CPF_OptionalParm | CPF_Parm)

void UWebResponse::eventSendText(struct FString Text, unsigned long bNoCRLF)
{
	static UFunction* pFnSendText = nullptr;

	if (!pFnSendText)
	{
		pFnSendText = UFunction::FindFunction("Function IpDrv.WebResponse.SendText");

	}

	UWebResponse_eventSendText_Parms SendText_Parms;
	memcpy_s(&SendText_Parms.Text, 0x10, &Text, 0x10);
	SendText_Parms.bNoCRLF = bNoCRLF;

	this->ProcessEvent(pFnSendText, &SendText_Parms, nullptr);
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebResponse::Dump()
{
	static UFunction* pFnDump = nullptr;

	if (!pFnDump)
	{
		pFnDump = UFunction::FindFunction("Function IpDrv.WebResponse.Dump");

	}

	UWebResponse_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDump, &Dump_Parms, nullptr);

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            OffsetSeconds                  (CPF_OptionalParm | CPF_Parm)

struct FString UWebResponse::GetHTTPExpiration(int OffsetSeconds)
{
	static UFunction* pFnGetHTTPExpiration = nullptr;

	if (!pFnGetHTTPExpiration)
	{
		pFnGetHTTPExpiration = UFunction::FindFunction("Function IpDrv.WebResponse.GetHTTPExpiration");

	}

	UWebResponse_execGetHTTPExpiration_Parms GetHTTPExpiration_Parms;
	memcpy_s(&GetHTTPExpiration_Parms.OffsetSeconds, 0x4, &OffsetSeconds, 0x4);

	pFnGetHTTPExpiration->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHTTPExpiration, &GetHTTPExpiration_Parms, nullptr);

	pFnGetHTTPExpiration->FunctionFlags |= 0x400;

	return GetHTTPExpiration_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UWebResponse::LoadParsedUHTM(struct FString Filename)
{
	static UFunction* pFnLoadParsedUHTM = nullptr;

	if (!pFnLoadParsedUHTM)
	{
		pFnLoadParsedUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.LoadParsedUHTM");

	}

	UWebResponse_execLoadParsedUHTM_Parms LoadParsedUHTM_Parms;
	memcpy_s(&LoadParsedUHTM_Parms.Filename, 0x10, &Filename, 0x10);

	pFnLoadParsedUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoadParsedUHTM, &LoadParsedUHTM_Parms, nullptr);

	pFnLoadParsedUHTM->FunctionFlags |= 0x400;

	return LoadParsedUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeBinaryFile(struct FString Filename)
{
	static UFunction* pFnIncludeBinaryFile = nullptr;

	if (!pFnIncludeBinaryFile)
	{
		pFnIncludeBinaryFile = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeBinaryFile");

	}

	UWebResponse_execIncludeBinaryFile_Parms IncludeBinaryFile_Parms;
	memcpy_s(&IncludeBinaryFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnIncludeBinaryFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIncludeBinaryFile, &IncludeBinaryFile_Parms, nullptr);

	pFnIncludeBinaryFile->FunctionFlags |= 0x400;

	return IncludeBinaryFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeUHTM(struct FString Filename)
{
	static UFunction* pFnIncludeUHTM = nullptr;

	if (!pFnIncludeUHTM)
	{
		pFnIncludeUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeUHTM");

	}

	UWebResponse_execIncludeUHTM_Parms IncludeUHTM_Parms;
	memcpy_s(&IncludeUHTM_Parms.Filename, 0x10, &Filename, 0x10);

	pFnIncludeUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIncludeUHTM, &IncludeUHTM_Parms, nullptr);

	pFnIncludeUHTM->FunctionFlags |= 0x400;

	return IncludeUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebResponse::ClearSubst()
{
	static UFunction* pFnClearSubst = nullptr;

	if (!pFnClearSubst)
	{
		pFnClearSubst = UFunction::FindFunction("Function IpDrv.WebResponse.ClearSubst");

	}

	UWebResponse_execClearSubst_Parms ClearSubst_Parms;

	pFnClearSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearSubst, &ClearSubst_Parms, nullptr);

	pFnClearSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Variable                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bClear                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::Subst(struct FString Variable, struct FString Value, unsigned long bClear)
{
	static UFunction* pFnSubst = nullptr;

	if (!pFnSubst)
	{
		pFnSubst = UFunction::FindFunction("Function IpDrv.WebResponse.Subst");

	}

	UWebResponse_execSubst_Parms Subst_Parms;
	memcpy_s(&Subst_Parms.Variable, 0x10, &Variable, 0x10);
	memcpy_s(&Subst_Parms.Value, 0x10, &Value, 0x10);
	Subst_Parms.bClear = bClear;

	pFnSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubst, &Subst_Parms, nullptr);

	pFnSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::FileExists(struct FString Filename)
{
	static UFunction* pFnFileExists = nullptr;

	if (!pFnFileExists)
	{
		pFnFileExists = UFunction::FindFunction("Function IpDrv.WebResponse.FileExists");

	}

	UWebResponse_execFileExists_Parms FileExists_Parms;
	memcpy_s(&FileExists_Parms.Filename, 0x10, &Filename, 0x10);

	pFnFileExists->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFileExists, &FileExists_Parms, nullptr);

	pFnFileExists->FunctionFlags |= 0x400;

	return FileExists_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            PlaylistId                     (CPF_Parm)

int UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId(int PlaylistId)
{
	static UFunction* pFnGetMatchTypeForPlaylistId = nullptr;

	if (!pFnGetMatchTypeForPlaylistId)
	{
		pFnGetMatchTypeForPlaylistId = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId");

	}

	UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Parms GetMatchTypeForPlaylistId_Parms;
	memcpy_s(&GetMatchTypeForPlaylistId_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetMatchTypeForPlaylistId, &GetMatchTypeForPlaylistId_Parms, nullptr);

	return GetMatchTypeForPlaylistId_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UOnlinePlaylistProvider* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderTag                    (CPF_Parm)
// int                            PlaylistId                     (CPF_Parm)
// int                            ProviderIndex                  (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider(struct FName ProviderTag, int PlaylistId, int& ProviderIndex)
{
	static UFunction* pFnGetOnlinePlaylistProvider = nullptr;

	if (!pFnGetOnlinePlaylistProvider)
	{
		pFnGetOnlinePlaylistProvider = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider");

	}

	UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Parms GetOnlinePlaylistProvider_Parms;
	memcpy_s(&GetOnlinePlaylistProvider_Parms.ProviderTag, 0x8, &ProviderTag, 0x8);
	memcpy_s(&GetOnlinePlaylistProvider_Parms.PlaylistId, 0x4, &PlaylistId, 0x4);

	this->ProcessEvent(pFnGetOnlinePlaylistProvider, &GetOnlinePlaylistProvider_Parms, nullptr);
	memcpy_s(&GetOnlinePlaylistProvider_Parms.ProviderIndex, 0x4, &ProviderIndex, 0x4);

	return GetOnlinePlaylistProvider_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderTag                    (CPF_Parm)
// int                            ProviderIndex                  (CPF_Parm)
// class UUIResourceDataProvider* out_Provider                   (CPF_Parm | CPF_OutParm)

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(struct FName ProviderTag, int ProviderIndex, class UUIResourceDataProvider*& out_Provider)
{
	static UFunction* pFnGetPlaylistProvider = nullptr;

	if (!pFnGetPlaylistProvider)
	{
		pFnGetPlaylistProvider = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider");

	}

	UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Parms GetPlaylistProvider_Parms;
	memcpy_s(&GetPlaylistProvider_Parms.ProviderTag, 0x8, &ProviderTag, 0x8);
	memcpy_s(&GetPlaylistProvider_Parms.ProviderIndex, 0x4, &ProviderIndex, 0x4);

	pFnGetPlaylistProvider->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPlaylistProvider, &GetPlaylistProvider_Parms, nullptr);

	pFnGetPlaylistProvider->FunctionFlags |= 0x400;
	memcpy_s(&GetPlaylistProvider_Parms.out_Provider, 0x8, &out_Provider, 0x8);

	return GetPlaylistProvider_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderTag                    (CPF_Parm)
// TArray<class UUIResourceDataProvider*> out_Providers                  (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UUIDataStore_OnlinePlaylists::GetResourceProviders(struct FName ProviderTag, TArray<class UUIResourceDataProvider*>& out_Providers)
{
	static UFunction* pFnGetResourceProviders = nullptr;

	if (!pFnGetResourceProviders)
	{
		pFnGetResourceProviders = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders");

	}

	UUIDataStore_OnlinePlaylists_execGetResourceProviders_Parms GetResourceProviders_Parms;
	memcpy_s(&GetResourceProviders_Parms.ProviderTag, 0x8, &ProviderTag, 0x8);

	pFnGetResourceProviders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResourceProviders, &GetResourceProviders_Parms, nullptr);

	pFnGetResourceProviders->FunctionFlags |= 0x400;
	memcpy_s(&GetResourceProviders_Parms.out_Providers, 0x10, &out_Providers, 0x10);

	return GetResourceProviders_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UUIDataStore_OnlinePlaylists::eventInit()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.Init");

	}

	UUIDataStore_OnlinePlaylists_eventInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnPostQuery = nullptr;

	if (!pFnPostQuery)
	{
		pFnPostQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PostQuery");

	}

	UWebApplication_execPostQuery_Parms PostQuery_Parms;
	memcpy_s(&PostQuery_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&PostQuery_Parms.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(pFnPostQuery, &PostQuery_Parms, nullptr);
};

// Function IpDrv.WebApplication.Query
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnQuery = nullptr;

	if (!pFnQuery)
	{
		pFnQuery = UFunction::FindFunction("Function IpDrv.WebApplication.Query");

	}

	UWebApplication_execQuery_Parms Query_Parms;
	memcpy_s(&Query_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&Query_Parms.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(pFnQuery, &Query_Parms, nullptr);
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnPreQuery = nullptr;

	if (!pFnPreQuery)
	{
		pFnPreQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PreQuery");

	}

	UWebApplication_execPreQuery_Parms PreQuery_Parms;
	memcpy_s(&PreQuery_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&PreQuery_Parms.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(pFnPreQuery, &PreQuery_Parms, nullptr);

	return PreQuery_Parms.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebApplication::CleanupApp()
{
	static UFunction* pFnCleanupApp = nullptr;

	if (!pFnCleanupApp)
	{
		pFnCleanupApp = UFunction::FindFunction("Function IpDrv.WebApplication.CleanupApp");

	}

	UWebApplication_execCleanupApp_Parms CleanupApp_Parms;

	this->ProcessEvent(pFnCleanupApp, &CleanupApp_Parms, nullptr);
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebApplication::Cleanup()
{
	static UFunction* pFnCleanup = nullptr;

	if (!pFnCleanup)
	{
		pFnCleanup = UFunction::FindFunction("Function IpDrv.WebApplication.Cleanup");

	}

	UWebApplication_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent(pFnCleanup, &Cleanup_Parms, nullptr);
};

// Function IpDrv.WebApplication.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UWebApplication::Init()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function IpDrv.WebApplication.Init");

	}

	UWebApplication_execInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);
};

// Function IpDrv.WebServer.GetApplication
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UWebApplication*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URI                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SubURI                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UWebApplication* AWebServer::GetApplication(struct FString URI, struct FString& SubURI)
{
	static UFunction* pFnGetApplication = nullptr;

	if (!pFnGetApplication)
	{
		pFnGetApplication = UFunction::FindFunction("Function IpDrv.WebServer.GetApplication");

	}

	AWebServer_execGetApplication_Parms GetApplication_Parms;
	memcpy_s(&GetApplication_Parms.URI, 0x10, &URI, 0x10);

	this->ProcessEvent(pFnGetApplication, &GetApplication_Parms, nullptr);
	memcpy_s(&GetApplication_Parms.SubURI, 0x10, &SubURI, 0x10);

	return GetApplication_Parms.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventLostChild(class AActor* C)
{
	static UFunction* pFnLostChild = nullptr;

	if (!pFnLostChild)
	{
		pFnLostChild = UFunction::FindFunction("Function IpDrv.WebServer.LostChild");

	}

	AWebServer_eventLostChild_Parms LostChild_Parms;
	memcpy_s(&LostChild_Parms.C, 0x8, &C, 0x8);

	this->ProcessEvent(pFnLostChild, &LostChild_Parms, nullptr);
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventGainedChild(class AActor* C)
{
	static UFunction* pFnGainedChild = nullptr;

	if (!pFnGainedChild)
	{
		pFnGainedChild = UFunction::FindFunction("Function IpDrv.WebServer.GainedChild");

	}

	AWebServer_eventGainedChild_Parms GainedChild_Parms;
	memcpy_s(&GainedChild_Parms.C, 0x8, &C, 0x8);

	this->ProcessEvent(pFnGainedChild, &GainedChild_Parms, nullptr);
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebServer::eventDestroyed()
{
	static UFunction* pFnDestroyed = nullptr;

	if (!pFnDestroyed)
	{
		pFnDestroyed = UFunction::FindFunction("Function IpDrv.WebServer.Destroyed");

	}

	AWebServer_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent(pFnDestroyed, &Destroyed_Parms, nullptr);
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AWebServer::PostBeginPlay()
{
	static UFunction* pFnPostBeginPlay = nullptr;

	if (!pFnPostBeginPlay)
	{
		pFnPostBeginPlay = UFunction::FindFunction("Function IpDrv.WebServer.PostBeginPlay");

	}

	AWebServer_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent(pFnPostBeginPlay, &PostBeginPlay_Parms, nullptr);
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UHelloWeb::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnQuery = nullptr;

	if (!pFnQuery)
	{
		pFnQuery = UFunction::FindFunction("Function IpDrv.HelloWeb.Query");

	}

	UHelloWeb_eventQuery_Parms Query_Parms;
	memcpy_s(&Query_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&Query_Parms.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(pFnQuery, &Query_Parms, nullptr);
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UHelloWeb::Init()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function IpDrv.HelloWeb.Init");

	}

	UHelloWeb_execInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);
};

// Function IpDrv.ImageServer.Query
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UImageServer::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnQuery = nullptr;

	if (!pFnQuery)
	{
		pFnQuery = UFunction::FindFunction("Function IpDrv.ImageServer.Query");

	}

	UImageServer_eventQuery_Parms Query_Parms;
	memcpy_s(&Query_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&Query_Parms.Response, 0x8, &Response, 0x8);

	this->ProcessEvent(pFnQuery, &Query_Parms, nullptr);
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

struct FString UMcpServiceConfig::GetUserAuthTicket(struct FString McpId)
{
	static UFunction* pFnGetUserAuthTicket = nullptr;

	if (!pFnGetUserAuthTicket)
	{
		pFnGetUserAuthTicket = UFunction::FindFunction("Function IpDrv.McpServiceConfig.GetUserAuthTicket");

	}

	UMcpServiceConfig_execGetUserAuthTicket_Parms GetUserAuthTicket_Parms;
	memcpy_s(&GetUserAuthTicket_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnGetUserAuthTicket, &GetUserAuthTicket_Parms, nullptr);

	return GetUserAuthTicket_Parms.ReturnValue;
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// int                            UserReward                     (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserReward(struct FString UniqueChallengeId, struct FString UniqueUserId, int UserReward)
{
	static UFunction* pFnUpdateChallengeUserReward = nullptr;

	if (!pFnUpdateChallengeUserReward)
	{
		pFnUpdateChallengeUserReward = UFunction::FindFunction("Function IpDrv.McpClashMobBase.UpdateChallengeUserReward");

	}

	UMcpClashMobBase_execUpdateChallengeUserReward_Parms UpdateChallengeUserReward_Parms;
	memcpy_s(&UpdateChallengeUserReward_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Parms.UserReward, 0x4, &UserReward, 0x4);

	this->ProcessEvent(pFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserRewardComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error)
{
	static UFunction* pFnOnUpdateChallengeUserRewardComplete = nullptr;

	if (!pFnOnUpdateChallengeUserRewardComplete)
	{
		pFnOnUpdateChallengeUserRewardComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete");

	}

	UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Parms OnUpdateChallengeUserRewardComplete_Parms;
	OnUpdateChallengeUserRewardComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnUpdateChallengeUserRewardComplete, &OnUpdateChallengeUserRewardComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bDidComplete                   (CPF_Parm)
// int                            GoalProgress                   (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserProgress(struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int GoalProgress)
{
	static UFunction* pFnUpdateChallengeUserProgress = nullptr;

	if (!pFnUpdateChallengeUserProgress)
	{
		pFnUpdateChallengeUserProgress = UFunction::FindFunction("Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress");

	}

	UMcpClashMobBase_execUpdateChallengeUserProgress_Parms UpdateChallengeUserProgress_Parms;
	memcpy_s(&UpdateChallengeUserProgress_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserProgress_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	UpdateChallengeUserProgress_Parms.bDidComplete = bDidComplete;
	memcpy_s(&UpdateChallengeUserProgress_Parms.GoalProgress, 0x4, &GoalProgress, 0x4);

	this->ProcessEvent(pFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserProgressComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error)
{
	static UFunction* pFnOnUpdateChallengeUserProgressComplete = nullptr;

	if (!pFnOnUpdateChallengeUserProgressComplete)
	{
		pFnOnUpdateChallengeUserProgressComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete");

	}

	UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Parms OnUpdateChallengeUserProgressComplete_Parms;
	OnUpdateChallengeUserProgressComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnUpdateChallengeUserProgressComplete, &OnUpdateChallengeUserProgressComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus)
{
	static UFunction* pFnGetChallengeUserStatus = nullptr;

	if (!pFnGetChallengeUserStatus)
	{
		pFnGetChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeUserStatus");

	}

	UMcpClashMobBase_execGetChallengeUserStatus_Parms GetChallengeUserStatus_Parms;
	memcpy_s(&GetChallengeUserStatus_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeUserStatus_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnGetChallengeUserStatus, &GetChallengeUserStatus_Parms, nullptr);
	memcpy_s(&GetChallengeUserStatus_Parms.OutChallengeUserStatus, 0x90, &OutChallengeUserStatus, 0x90);
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UserIdsToRead                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeMultiUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, TArray<struct FString>& UserIdsToRead)
{
	static UFunction* pFnQueryChallengeMultiUserStatus = nullptr;

	if (!pFnQueryChallengeMultiUserStatus)
	{
		pFnQueryChallengeMultiUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus");

	}

	UMcpClashMobBase_execQueryChallengeMultiUserStatus_Parms QueryChallengeMultiUserStatus_Parms;
	memcpy_s(&QueryChallengeMultiUserStatus_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeMultiUserStatus_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Parms, nullptr);
	memcpy_s(&QueryChallengeMultiUserStatus_Parms.UserIdsToRead, 0x10, &UserIdsToRead, 0x10);
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId)
{
	static UFunction* pFnQueryChallengeUserStatus = nullptr;

	if (!pFnQueryChallengeUserStatus)
	{
		pFnQueryChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeUserStatus");

	}

	UMcpClashMobBase_execQueryChallengeUserStatus_Parms QueryChallengeUserStatus_Parms;
	memcpy_s(&QueryChallengeUserStatus_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeUserStatus_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeUserStatusComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error)
{
	static UFunction* pFnOnQueryChallengeUserStatusComplete = nullptr;

	if (!pFnOnQueryChallengeUserStatusComplete)
	{
		pFnOnQueryChallengeUserStatusComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete");

	}

	UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Parms OnQueryChallengeUserStatusComplete_Parms;
	OnQueryChallengeUserStatusComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryChallengeUserStatusComplete_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnQueryChallengeUserStatusComplete_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnQueryChallengeUserStatusComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryChallengeUserStatusComplete, &OnQueryChallengeUserStatusComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::AcceptChallenge(struct FString UniqueChallengeId, struct FString UniqueUserId)
{
	static UFunction* pFnAcceptChallenge = nullptr;

	if (!pFnAcceptChallenge)
	{
		pFnAcceptChallenge = UFunction::FindFunction("Function IpDrv.McpClashMobBase.AcceptChallenge");

	}

	UMcpClashMobBase_execAcceptChallenge_Parms AcceptChallenge_Parms;
	memcpy_s(&AcceptChallenge_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&AcceptChallenge_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnAcceptChallenge, &AcceptChallenge_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnAcceptChallengeComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error)
{
	static UFunction* pFnOnAcceptChallengeComplete = nullptr;

	if (!pFnOnAcceptChallengeComplete)
	{
		pFnOnAcceptChallengeComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete");

	}

	UMcpClashMobBase_execOnAcceptChallengeComplete_Parms OnAcceptChallengeComplete_Parms;
	OnAcceptChallengeComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAcceptChallengeComplete_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnAcceptChallengeComplete_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&OnAcceptChallengeComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnAcceptChallengeComplete, &OnAcceptChallengeComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::DeleteCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName)
{
	static UFunction* pFnDeleteCachedChallengeFile = nullptr;

	if (!pFnDeleteCachedChallengeFile)
	{
		pFnDeleteCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile");

	}

	UMcpClashMobBase_execDeleteCachedChallengeFile_Parms DeleteCachedChallengeFile_Parms;
	memcpy_s(&DeleteCachedChallengeFile_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DeleteCachedChallengeFile_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::ClearCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName)
{
	static UFunction* pFnClearCachedChallengeFile = nullptr;

	if (!pFnClearCachedChallengeFile)
	{
		pFnClearCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.ClearCachedChallengeFile");

	}

	UMcpClashMobBase_execClearCachedChallengeFile_Parms ClearCachedChallengeFile_Parms;
	memcpy_s(&ClearCachedChallengeFile_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&ClearCachedChallengeFile_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnClearCachedChallengeFile, &ClearCachedChallengeFile_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileContents(struct FString UniqueChallengeId, struct FString DLName, TArray<unsigned char>& OutFileContents)
{
	static UFunction* pFnGetChallengeFileContents = nullptr;

	if (!pFnGetChallengeFileContents)
	{
		pFnGetChallengeFileContents = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeFileContents");

	}

	UMcpClashMobBase_execGetChallengeFileContents_Parms GetChallengeFileContents_Parms;
	memcpy_s(&GetChallengeFileContents_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeFileContents_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnGetChallengeFileContents, &GetChallengeFileContents_Parms, nullptr);
	memcpy_s(&GetChallengeFileContents_Parms.OutFileContents, 0x10, &OutFileContents, 0x10);
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::DownloadChallengeFile(struct FString UniqueChallengeId, struct FString DLName)
{
	static UFunction* pFnDownloadChallengeFile = nullptr;

	if (!pFnDownloadChallengeFile)
	{
		pFnDownloadChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.DownloadChallengeFile");

	}

	UMcpClashMobBase_execDownloadChallengeFile_Parms DownloadChallengeFile_Parms;
	memcpy_s(&DownloadChallengeFile_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DownloadChallengeFile_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnDownloadChallengeFile, &DownloadChallengeFile_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileList(struct FString UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles)
{
	static UFunction* pFnGetChallengeFileList = nullptr;

	if (!pFnGetChallengeFileList)
	{
		pFnGetChallengeFileList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeFileList");

	}

	UMcpClashMobBase_execGetChallengeFileList_Parms GetChallengeFileList_Parms;
	memcpy_s(&GetChallengeFileList_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);

	this->ProcessEvent(pFnGetChallengeFileList, &GetChallengeFileList_Parms, nullptr);
	memcpy_s(&GetChallengeFileList_Parms.OutChallengeFiles, 0x10, &OutChallengeFiles, 0x10);
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnDownloadChallengeFileComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString DLName, struct FString Filename, struct FString Error)
{
	static UFunction* pFnOnDownloadChallengeFileComplete = nullptr;

	if (!pFnOnDownloadChallengeFileComplete)
	{
		pFnOnDownloadChallengeFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete");

	}

	UMcpClashMobBase_execOnDownloadChallengeFileComplete_Parms OnDownloadChallengeFileComplete_Parms;
	OnDownloadChallengeFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadChallengeFileComplete_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&OnDownloadChallengeFileComplete_Parms.DLName, 0x10, &DLName, 0x10);
	memcpy_s(&OnDownloadChallengeFileComplete_Parms.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&OnDownloadChallengeFileComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDownloadChallengeFileComplete, &OnDownloadChallengeFileComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents)
{
	static UFunction* pFnGetChallengeList = nullptr;

	if (!pFnGetChallengeList)
	{
		pFnGetChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeList");

	}

	UMcpClashMobBase_execGetChallengeList_Parms GetChallengeList_Parms;

	this->ProcessEvent(pFnGetChallengeList, &GetChallengeList_Parms, nullptr);
	memcpy_s(&GetChallengeList_Parms.OutChallengeEvents, 0x10, &OutChallengeEvents, 0x10);
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpClashMobBase::QueryChallengeList()
{
	static UFunction* pFnQueryChallengeList = nullptr;

	if (!pFnQueryChallengeList)
	{
		pFnQueryChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeList");

	}

	UMcpClashMobBase_execQueryChallengeList_Parms QueryChallengeList_Parms;

	this->ProcessEvent(pFnQueryChallengeList, &QueryChallengeList_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeListComplete(unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryChallengeListComplete = nullptr;

	if (!pFnOnQueryChallengeListComplete)
	{
		pFnOnQueryChallengeListComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete");

	}

	UMcpClashMobBase_execOnQueryChallengeListComplete_Parms OnQueryChallengeListComplete_Parms;
	OnQueryChallengeListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryChallengeListComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryChallengeListComplete, &OnQueryChallengeListComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpClashMobBase*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpClashMobBase* UMcpClashMobBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpClashMobBase.CreateInstance");

	}

	UMcpClashMobBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UMcpClashMobFileDownload::GetUrlForFile(struct FString Filename)
{
	static UFunction* pFnGetUrlForFile = nullptr;

	if (!pFnGetUrlForFile)
	{
		pFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.McpClashMobFileDownload.GetUrlForFile");

	}

	UMcpClashMobFileDownload_execGetUrlForFile_Parms GetUrlForFile_Parms;
	memcpy_s(&GetUrlForFile_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetUrlForFile, &GetUrlForFile_Parms, nullptr);

	return GetUrlForFile_Parms.ReturnValue;
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUpdateChallengeUserRewardHTTPRequestComplete = nullptr;

	if (!pFnOnUpdateChallengeUserRewardHTTPRequestComplete)
	{
		pFnOnUpdateChallengeUserRewardHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete");

	}

	UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Parms OnUpdateChallengeUserRewardHTTPRequestComplete_Parms;
	memcpy_s(&OnUpdateChallengeUserRewardHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnUpdateChallengeUserRewardHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnUpdateChallengeUserRewardHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUpdateChallengeUserRewardHTTPRequestComplete, &OnUpdateChallengeUserRewardHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// int                            UserReward                     (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserReward(struct FString UniqueChallengeId, struct FString UniqueUserId, int UserReward)
{
	static UFunction* pFnUpdateChallengeUserReward = nullptr;

	if (!pFnUpdateChallengeUserReward)
	{
		pFnUpdateChallengeUserReward = UFunction::FindFunction("Function IpDrv.McpClashMobManager.UpdateChallengeUserReward");

	}

	UMcpClashMobManager_execUpdateChallengeUserReward_Parms UpdateChallengeUserReward_Parms;
	memcpy_s(&UpdateChallengeUserReward_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&UpdateChallengeUserReward_Parms.UserReward, 0x4, &UserReward, 0x4);

	this->ProcessEvent(pFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUpdateChallengeUserProgressHTTPRequestComplete = nullptr;

	if (!pFnOnUpdateChallengeUserProgressHTTPRequestComplete)
	{
		pFnOnUpdateChallengeUserProgressHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete");

	}

	UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Parms OnUpdateChallengeUserProgressHTTPRequestComplete_Parms;
	memcpy_s(&OnUpdateChallengeUserProgressHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnUpdateChallengeUserProgressHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnUpdateChallengeUserProgressHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUpdateChallengeUserProgressHTTPRequestComplete, &OnUpdateChallengeUserProgressHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bDidComplete                   (CPF_Parm)
// int                            GoalProgress                   (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserProgress(struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int GoalProgress)
{
	static UFunction* pFnUpdateChallengeUserProgress = nullptr;

	if (!pFnUpdateChallengeUserProgress)
	{
		pFnUpdateChallengeUserProgress = UFunction::FindFunction("Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress");

	}

	UMcpClashMobManager_execUpdateChallengeUserProgress_Parms UpdateChallengeUserProgress_Parms;
	memcpy_s(&UpdateChallengeUserProgress_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&UpdateChallengeUserProgress_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	UpdateChallengeUserProgress_Parms.bDidComplete = bDidComplete;
	memcpy_s(&UpdateChallengeUserProgress_Parms.GoalProgress, 0x4, &GoalProgress, 0x4);

	this->ProcessEvent(pFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus)
{
	static UFunction* pFnGetChallengeUserStatus = nullptr;

	if (!pFnGetChallengeUserStatus)
	{
		pFnGetChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeUserStatus");

	}

	UMcpClashMobManager_execGetChallengeUserStatus_Parms GetChallengeUserStatus_Parms;
	memcpy_s(&GetChallengeUserStatus_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeUserStatus_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnGetChallengeUserStatus, &GetChallengeUserStatus_Parms, nullptr);
	memcpy_s(&GetChallengeUserStatus_Parms.OutChallengeUserStatus, 0x90, &OutChallengeUserStatus, 0x90);
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryChallengeMultiStatusHTTPRequestComplete = nullptr;

	if (!pFnOnQueryChallengeMultiStatusHTTPRequestComplete)
	{
		pFnOnQueryChallengeMultiStatusHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete");

	}

	UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Parms OnQueryChallengeMultiStatusHTTPRequestComplete_Parms;
	memcpy_s(&OnQueryChallengeMultiStatusHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryChallengeMultiStatusHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryChallengeMultiStatusHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryChallengeMultiStatusHTTPRequestComplete, &OnQueryChallengeMultiStatusHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UserIdsToRead                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeMultiUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, TArray<struct FString>& UserIdsToRead)
{
	static UFunction* pFnQueryChallengeMultiUserStatus = nullptr;

	if (!pFnQueryChallengeMultiUserStatus)
	{
		pFnQueryChallengeMultiUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus");

	}

	UMcpClashMobManager_execQueryChallengeMultiUserStatus_Parms QueryChallengeMultiUserStatus_Parms;
	memcpy_s(&QueryChallengeMultiUserStatus_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeMultiUserStatus_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Parms, nullptr);
	memcpy_s(&QueryChallengeMultiUserStatus_Parms.UserIdsToRead, 0x10, &UserIdsToRead, 0x10);
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryChallengeStatusHTTPRequestComplete = nullptr;

	if (!pFnOnQueryChallengeStatusHTTPRequestComplete)
	{
		pFnOnQueryChallengeStatusHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete");

	}

	UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Parms OnQueryChallengeStatusHTTPRequestComplete_Parms;
	memcpy_s(&OnQueryChallengeStatusHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryChallengeStatusHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryChallengeStatusHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryChallengeStatusHTTPRequestComplete, &OnQueryChallengeStatusHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId)
{
	static UFunction* pFnQueryChallengeUserStatus = nullptr;

	if (!pFnQueryChallengeUserStatus)
	{
		pFnQueryChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeUserStatus");

	}

	UMcpClashMobManager_execQueryChallengeUserStatus_Parms QueryChallengeUserStatus_Parms;
	memcpy_s(&QueryChallengeUserStatus_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&QueryChallengeUserStatus_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAcceptChallengeHTTPRequestComplete = nullptr;

	if (!pFnOnAcceptChallengeHTTPRequestComplete)
	{
		pFnOnAcceptChallengeHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete");

	}

	UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Parms OnAcceptChallengeHTTPRequestComplete_Parms;
	memcpy_s(&OnAcceptChallengeHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnAcceptChallengeHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnAcceptChallengeHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAcceptChallengeHTTPRequestComplete, &OnAcceptChallengeHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::AcceptChallenge(struct FString UniqueChallengeId, struct FString UniqueUserId)
{
	static UFunction* pFnAcceptChallenge = nullptr;

	if (!pFnAcceptChallenge)
	{
		pFnAcceptChallenge = UFunction::FindFunction("Function IpDrv.McpClashMobManager.AcceptChallenge");

	}

	UMcpClashMobManager_execAcceptChallenge_Parms AcceptChallenge_Parms;
	memcpy_s(&AcceptChallenge_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&AcceptChallenge_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnAcceptChallenge, &AcceptChallenge_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::DeleteCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName)
{
	static UFunction* pFnDeleteCachedChallengeFile = nullptr;

	if (!pFnDeleteCachedChallengeFile)
	{
		pFnDeleteCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile");

	}

	UMcpClashMobManager_execDeleteCachedChallengeFile_Parms DeleteCachedChallengeFile_Parms;
	memcpy_s(&DeleteCachedChallengeFile_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DeleteCachedChallengeFile_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::ClearCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName)
{
	static UFunction* pFnClearCachedChallengeFile = nullptr;

	if (!pFnClearCachedChallengeFile)
	{
		pFnClearCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.ClearCachedChallengeFile");

	}

	UMcpClashMobManager_execClearCachedChallengeFile_Parms ClearCachedChallengeFile_Parms;
	memcpy_s(&ClearCachedChallengeFile_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&ClearCachedChallengeFile_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnClearCachedChallengeFile, &ClearCachedChallengeFile_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileContents(struct FString UniqueChallengeId, struct FString DLName, TArray<unsigned char>& OutFileContents)
{
	static UFunction* pFnGetChallengeFileContents = nullptr;

	if (!pFnGetChallengeFileContents)
	{
		pFnGetChallengeFileContents = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeFileContents");

	}

	UMcpClashMobManager_execGetChallengeFileContents_Parms GetChallengeFileContents_Parms;
	memcpy_s(&GetChallengeFileContents_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&GetChallengeFileContents_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnGetChallengeFileContents, &GetChallengeFileContents_Parms, nullptr);
	memcpy_s(&GetChallengeFileContents_Parms.OutFileContents, 0x10, &OutFileContents, 0x10);
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::OnDownloadMcpFileComplete(unsigned long bWasSuccessful, struct FString DLName)
{
	static UFunction* pFnOnDownloadMcpFileComplete = nullptr;

	if (!pFnOnDownloadMcpFileComplete)
	{
		pFnOnDownloadMcpFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete");

	}

	UMcpClashMobManager_execOnDownloadMcpFileComplete_Parms OnDownloadMcpFileComplete_Parms;
	OnDownloadMcpFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadMcpFileComplete_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnOnDownloadMcpFileComplete, &OnDownloadMcpFileComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::OnLoadCachedFileComplete(unsigned long bWasSuccessful, struct FString DLName)
{
	static UFunction* pFnOnLoadCachedFileComplete = nullptr;

	if (!pFnOnLoadCachedFileComplete)
	{
		pFnOnLoadCachedFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete");

	}

	UMcpClashMobManager_execOnLoadCachedFileComplete_Parms OnLoadCachedFileComplete_Parms;
	OnLoadCachedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadCachedFileComplete_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnOnLoadCachedFileComplete, &OnLoadCachedFileComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::DownloadChallengeFile(struct FString UniqueChallengeId, struct FString DLName)
{
	static UFunction* pFnDownloadChallengeFile = nullptr;

	if (!pFnDownloadChallengeFile)
	{
		pFnDownloadChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.DownloadChallengeFile");

	}

	UMcpClashMobManager_execDownloadChallengeFile_Parms DownloadChallengeFile_Parms;
	memcpy_s(&DownloadChallengeFile_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);
	memcpy_s(&DownloadChallengeFile_Parms.DLName, 0x10, &DLName, 0x10);

	this->ProcessEvent(pFnDownloadChallengeFile, &DownloadChallengeFile_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileList(struct FString UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles)
{
	static UFunction* pFnGetChallengeFileList = nullptr;

	if (!pFnGetChallengeFileList)
	{
		pFnGetChallengeFileList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeFileList");

	}

	UMcpClashMobManager_execGetChallengeFileList_Parms GetChallengeFileList_Parms;
	memcpy_s(&GetChallengeFileList_Parms.UniqueChallengeId, 0x10, &UniqueChallengeId, 0x10);

	this->ProcessEvent(pFnGetChallengeFileList, &GetChallengeFileList_Parms, nullptr);
	memcpy_s(&GetChallengeFileList_Parms.OutChallengeFiles, 0x10, &OutChallengeFiles, 0x10);
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents)
{
	static UFunction* pFnGetChallengeList = nullptr;

	if (!pFnGetChallengeList)
	{
		pFnGetChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeList");

	}

	UMcpClashMobManager_execGetChallengeList_Parms GetChallengeList_Parms;

	this->ProcessEvent(pFnGetChallengeList, &GetChallengeList_Parms, nullptr);
	memcpy_s(&GetChallengeList_Parms.OutChallengeEvents, 0x10, &OutChallengeEvents, 0x10);
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryChallengeListHTTPRequestComplete = nullptr;

	if (!pFnOnQueryChallengeListHTTPRequestComplete)
	{
		pFnOnQueryChallengeListHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete");

	}

	UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Parms OnQueryChallengeListHTTPRequestComplete_Parms;
	memcpy_s(&OnQueryChallengeListHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryChallengeListHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryChallengeListHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryChallengeListHTTPRequestComplete, &OnQueryChallengeListHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpClashMobManager::QueryChallengeList()
{
	static UFunction* pFnQueryChallengeList = nullptr;

	if (!pFnQueryChallengeList)
	{
		pFnQueryChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeList");

	}

	UMcpClashMobManager_execQueryChallengeList_Parms QueryChallengeList_Parms;

	this->ProcessEvent(pFnQueryChallengeList, &QueryChallengeList_Parms, nullptr);
};

// Function IpDrv.McpClashMobManager.Init
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpClashMobManager::Init()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function IpDrv.McpClashMobManager.Init");

	}

	UMcpClashMobManager_execInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnAcceptGroupInviteComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnAcceptGroupInviteComplete = nullptr;

	if (!pFnOnAcceptGroupInviteComplete)
	{
		pFnOnAcceptGroupInviteComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete");

	}

	UMcpGroupsBase_execOnAcceptGroupInviteComplete_Parms OnAcceptGroupInviteComplete_Parms;
	memcpy_s(&OnAcceptGroupInviteComplete_Parms.GroupId, 0x10, &GroupId, 0x10);
	OnAcceptGroupInviteComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAcceptGroupInviteComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnAcceptGroupInviteComplete, &OnAcceptGroupInviteComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldAccept                  (CPF_Parm)

void UMcpGroupsBase::AcceptGroupInvite(struct FString UniqueUserId, struct FString GroupId, unsigned long bShouldAccept)
{
	static UFunction* pFnAcceptGroupInvite = nullptr;

	if (!pFnAcceptGroupInvite)
	{
		pFnAcceptGroupInvite = UFunction::FindFunction("Function IpDrv.McpGroupsBase.AcceptGroupInvite");

	}

	UMcpGroupsBase_execAcceptGroupInvite_Parms AcceptGroupInvite_Parms;
	memcpy_s(&AcceptGroupInvite_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&AcceptGroupInvite_Parms.GroupId, 0x10, &GroupId, 0x10);
	AcceptGroupInvite_Parms.bShouldAccept = bShouldAccept;

	this->ProcessEvent(pFnAcceptGroupInvite, &AcceptGroupInvite_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           InviteList                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupInviteList(struct FString UserId, struct FMcpGroupList& InviteList)
{
	static UFunction* pFnGetGroupInviteList = nullptr;

	if (!pFnGetGroupInviteList)
	{
		pFnGetGroupInviteList = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupInviteList");

	}

	UMcpGroupsBase_execGetGroupInviteList_Parms GetGroupInviteList_Parms;
	memcpy_s(&GetGroupInviteList_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnGetGroupInviteList, &GetGroupInviteList_Parms, nullptr);
	memcpy_s(&GetGroupInviteList_Parms.InviteList, 0x20, &InviteList, 0x20);
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupInvitesComplete(unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryGroupInvitesComplete = nullptr;

	if (!pFnOnQueryGroupInvitesComplete)
	{
		pFnOnQueryGroupInvitesComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete");

	}

	UMcpGroupsBase_execOnQueryGroupInvitesComplete_Parms OnQueryGroupInvitesComplete_Parms;
	OnQueryGroupInvitesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupInvitesComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryGroupInvitesComplete, &OnQueryGroupInvitesComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupInvites(struct FString UniqueUserId)
{
	static UFunction* pFnQueryGroupInvites = nullptr;

	if (!pFnQueryGroupInvites)
	{
		pFnQueryGroupInvites = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroupInvites");

	}

	UMcpGroupsBase_execQueryGroupInvites_Parms QueryGroupInvites_Parms;
	memcpy_s(&QueryGroupInvites_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnQueryGroupInvites, &QueryGroupInvites_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequesterId                    (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteAllGroupsComplete(struct FString RequesterId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteAllGroupsComplete = nullptr;

	if (!pFnOnDeleteAllGroupsComplete)
	{
		pFnOnDeleteAllGroupsComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete");

	}

	UMcpGroupsBase_execOnDeleteAllGroupsComplete_Parms OnDeleteAllGroupsComplete_Parms;
	memcpy_s(&OnDeleteAllGroupsComplete_Parms.RequesterId, 0x10, &RequesterId, 0x10);
	OnDeleteAllGroupsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteAllGroupsComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteAllGroupsComplete, &OnDeleteAllGroupsComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 OwnerId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteAllGroups(struct FString OwnerId)
{
	static UFunction* pFnDeleteAllGroups = nullptr;

	if (!pFnDeleteAllGroups)
	{
		pFnDeleteAllGroups = UFunction::FindFunction("Function IpDrv.McpGroupsBase.DeleteAllGroups");

	}

	UMcpGroupsBase_execDeleteAllGroups_Parms DeleteAllGroups_Parms;
	memcpy_s(&DeleteAllGroups_Parms.OwnerId, 0x10, &OwnerId, 0x10);

	this->ProcessEvent(pFnDeleteAllGroups, &DeleteAllGroups_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnRemoveGroupMembersComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnRemoveGroupMembersComplete = nullptr;

	if (!pFnOnRemoveGroupMembersComplete)
	{
		pFnOnRemoveGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete");

	}

	UMcpGroupsBase_execOnRemoveGroupMembersComplete_Parms OnRemoveGroupMembersComplete_Parms;
	memcpy_s(&OnRemoveGroupMembersComplete_Parms.GroupId, 0x10, &GroupId, 0x10);
	OnRemoveGroupMembersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveGroupMembersComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnRemoveGroupMembersComplete, &OnRemoveGroupMembersComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::RemoveGroupMembers(struct FString OwnerId, struct FString GroupId, TArray<struct FString>& MemberIds)
{
	static UFunction* pFnRemoveGroupMembers = nullptr;

	if (!pFnRemoveGroupMembers)
	{
		pFnRemoveGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.RemoveGroupMembers");

	}

	UMcpGroupsBase_execRemoveGroupMembers_Parms RemoveGroupMembers_Parms;
	memcpy_s(&RemoveGroupMembers_Parms.OwnerId, 0x10, &OwnerId, 0x10);
	memcpy_s(&RemoveGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnRemoveGroupMembers, &RemoveGroupMembers_Parms, nullptr);
	memcpy_s(&RemoveGroupMembers_Parms.MemberIds, 0x10, &MemberIds, 0x10);
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnAddGroupMembersComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnAddGroupMembersComplete = nullptr;

	if (!pFnOnAddGroupMembersComplete)
	{
		pFnOnAddGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete");

	}

	UMcpGroupsBase_execOnAddGroupMembersComplete_Parms OnAddGroupMembersComplete_Parms;
	memcpy_s(&OnAddGroupMembersComplete_Parms.GroupId, 0x10, &GroupId, 0x10);
	OnAddGroupMembersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAddGroupMembersComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnAddGroupMembersComplete, &OnAddGroupMembersComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bRequiresAcceptance            (CPF_Parm)
// TArray<struct FString>         MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::AddGroupMembers(struct FString OwnerId, struct FString GroupId, unsigned long bRequiresAcceptance, TArray<struct FString>& MemberIds)
{
	static UFunction* pFnAddGroupMembers = nullptr;

	if (!pFnAddGroupMembers)
	{
		pFnAddGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.AddGroupMembers");

	}

	UMcpGroupsBase_execAddGroupMembers_Parms AddGroupMembers_Parms;
	memcpy_s(&AddGroupMembers_Parms.OwnerId, 0x10, &OwnerId, 0x10);
	memcpy_s(&AddGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);
	AddGroupMembers_Parms.bRequiresAcceptance = bRequiresAcceptance;

	this->ProcessEvent(pFnAddGroupMembers, &AddGroupMembers_Parms, nullptr);
	memcpy_s(&AddGroupMembers_Parms.MemberIds, 0x10, &MemberIds, 0x10);
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupMembers(struct FString GroupId, TArray<struct FMcpGroupMember>& GroupMembers)
{
	static UFunction* pFnGetGroupMembers = nullptr;

	if (!pFnGetGroupMembers)
	{
		pFnGetGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupMembers");

	}

	UMcpGroupsBase_execGetGroupMembers_Parms GetGroupMembers_Parms;
	memcpy_s(&GetGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnGetGroupMembers, &GetGroupMembers_Parms, nullptr);
	memcpy_s(&GetGroupMembers_Parms.GroupMembers, 0x10, &GroupMembers, 0x10);
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupMembersComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryGroupMembersComplete = nullptr;

	if (!pFnOnQueryGroupMembersComplete)
	{
		pFnOnQueryGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete");

	}

	UMcpGroupsBase_execOnQueryGroupMembersComplete_Parms OnQueryGroupMembersComplete_Parms;
	memcpy_s(&OnQueryGroupMembersComplete_Parms.GroupId, 0x10, &GroupId, 0x10);
	OnQueryGroupMembersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupMembersComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryGroupMembersComplete, &OnQueryGroupMembersComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupMembers(struct FString UniqueUserId, struct FString GroupId)
{
	static UFunction* pFnQueryGroupMembers = nullptr;

	if (!pFnQueryGroupMembers)
	{
		pFnQueryGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroupMembers");

	}

	UMcpGroupsBase_execQueryGroupMembers_Parms QueryGroupMembers_Parms;
	memcpy_s(&QueryGroupMembers_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&QueryGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnQueryGroupMembers, &QueryGroupMembers_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupList(struct FString UserId, struct FMcpGroupList& GroupList)
{
	static UFunction* pFnGetGroupList = nullptr;

	if (!pFnGetGroupList)
	{
		pFnGetGroupList = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupList");

	}

	UMcpGroupsBase_execGetGroupList_Parms GetGroupList_Parms;
	memcpy_s(&GetGroupList_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnGetGroupList, &GetGroupList_Parms, nullptr);
	memcpy_s(&GetGroupList_Parms.GroupList, 0x20, &GroupList, 0x20);
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupsComplete(struct FString UserId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryGroupsComplete = nullptr;

	if (!pFnOnQueryGroupsComplete)
	{
		pFnOnQueryGroupsComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupsComplete");

	}

	UMcpGroupsBase_execOnQueryGroupsComplete_Parms OnQueryGroupsComplete_Parms;
	memcpy_s(&OnQueryGroupsComplete_Parms.UserId, 0x10, &UserId, 0x10);
	OnQueryGroupsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupsComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryGroupsComplete, &OnQueryGroupsComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequesterId                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroups(struct FString RequesterId)
{
	static UFunction* pFnQueryGroups = nullptr;

	if (!pFnQueryGroups)
	{
		pFnQueryGroups = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroups");

	}

	UMcpGroupsBase_execQueryGroups_Parms QueryGroups_Parms;
	memcpy_s(&QueryGroups_Parms.RequesterId, 0x10, &RequesterId, 0x10);

	this->ProcessEvent(pFnQueryGroups, &QueryGroups_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteGroupComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteGroupComplete = nullptr;

	if (!pFnOnDeleteGroupComplete)
	{
		pFnOnDeleteGroupComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnDeleteGroupComplete");

	}

	UMcpGroupsBase_execOnDeleteGroupComplete_Parms OnDeleteGroupComplete_Parms;
	memcpy_s(&OnDeleteGroupComplete_Parms.GroupId, 0x10, &GroupId, 0x10);
	OnDeleteGroupComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteGroupComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteGroupComplete, &OnDeleteGroupComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteGroup(struct FString UniqueUserId, struct FString GroupId)
{
	static UFunction* pFnDeleteGroup = nullptr;

	if (!pFnDeleteGroup)
	{
		pFnDeleteGroup = UFunction::FindFunction("Function IpDrv.McpGroupsBase.DeleteGroup");

	}

	UMcpGroupsBase_execDeleteGroup_Parms DeleteGroup_Parms;
	memcpy_s(&DeleteGroup_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&DeleteGroup_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnDeleteGroup, &DeleteGroup_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FMcpGroup               Group                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnCreateGroupComplete(struct FMcpGroup Group, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnCreateGroupComplete = nullptr;

	if (!pFnOnCreateGroupComplete)
	{
		pFnOnCreateGroupComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnCreateGroupComplete");

	}

	UMcpGroupsBase_execOnCreateGroupComplete_Parms OnCreateGroupComplete_Parms;
	memcpy_s(&OnCreateGroupComplete_Parms.Group, 0x48, &Group, 0x48);
	OnCreateGroupComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateGroupComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnCreateGroupComplete, &OnCreateGroupComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::CreateGroup(struct FString OwnerId, struct FString GroupName)
{
	static UFunction* pFnCreateGroup = nullptr;

	if (!pFnCreateGroup)
	{
		pFnCreateGroup = UFunction::FindFunction("Function IpDrv.McpGroupsBase.CreateGroup");

	}

	UMcpGroupsBase_execCreateGroup_Parms CreateGroup_Parms;
	memcpy_s(&CreateGroup_Parms.OwnerId, 0x10, &OwnerId, 0x10);
	memcpy_s(&CreateGroup_Parms.GroupName, 0x10, &GroupName, 0x10);

	this->ProcessEvent(pFnCreateGroup, &CreateGroup_Parms, nullptr);
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpGroupsBase*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpGroupsBase* UMcpGroupsBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpGroupsBase.CreateInstance");

	}

	UMcpGroupsBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 MemberId                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  AcceptState                    (CPF_Parm)

void UMcpGroupsManager::CacheGroupMember(struct FString MemberId, struct FString GroupId, unsigned char AcceptState)
{
	static UFunction* pFnCacheGroupMember = nullptr;

	if (!pFnCacheGroupMember)
	{
		pFnCacheGroupMember = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CacheGroupMember");

	}

	UMcpGroupsManager_execCacheGroupMember_Parms CacheGroupMember_Parms;
	memcpy_s(&CacheGroupMember_Parms.MemberId, 0x10, &MemberId, 0x10);
	memcpy_s(&CacheGroupMember_Parms.GroupId, 0x10, &GroupId, 0x10);
	CacheGroupMember_Parms.AcceptState = AcceptState;

	this->ProcessEvent(pFnCacheGroupMember, &CacheGroupMember_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequesterId                    (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroup               Group                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::CacheGroup(struct FString RequesterId, struct FMcpGroup Group)
{
	static UFunction* pFnCacheGroup = nullptr;

	if (!pFnCacheGroup)
	{
		pFnCacheGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CacheGroup");

	}

	UMcpGroupsManager_execCacheGroup_Parms CacheGroup_Parms;
	memcpy_s(&CacheGroup_Parms.RequesterId, 0x10, &RequesterId, 0x10);
	memcpy_s(&CacheGroup_Parms.Group, 0x48, &Group, 0x48);

	this->ProcessEvent(pFnCacheGroup, &CacheGroup_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAcceptGroupInviteRequestComplete = nullptr;

	if (!pFnOnAcceptGroupInviteRequestComplete)
	{
		pFnOnAcceptGroupInviteRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete");

	}

	UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Parms OnAcceptGroupInviteRequestComplete_Parms;
	memcpy_s(&OnAcceptGroupInviteRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnAcceptGroupInviteRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnAcceptGroupInviteRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAcceptGroupInviteRequestComplete, &OnAcceptGroupInviteRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldAccept                  (CPF_Parm)

void UMcpGroupsManager::AcceptGroupInvite(struct FString UniqueUserId, struct FString GroupId, unsigned long bShouldAccept)
{
	static UFunction* pFnAcceptGroupInvite = nullptr;

	if (!pFnAcceptGroupInvite)
	{
		pFnAcceptGroupInvite = UFunction::FindFunction("Function IpDrv.McpGroupsManager.AcceptGroupInvite");

	}

	UMcpGroupsManager_execAcceptGroupInvite_Parms AcceptGroupInvite_Parms;
	memcpy_s(&AcceptGroupInvite_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&AcceptGroupInvite_Parms.GroupId, 0x10, &GroupId, 0x10);
	AcceptGroupInvite_Parms.bShouldAccept = bShouldAccept;

	this->ProcessEvent(pFnAcceptGroupInvite, &AcceptGroupInvite_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteAllGroupsRequestComplete = nullptr;

	if (!pFnOnDeleteAllGroupsRequestComplete)
	{
		pFnOnDeleteAllGroupsRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete");

	}

	UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Parms OnDeleteAllGroupsRequestComplete_Parms;
	memcpy_s(&OnDeleteAllGroupsRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDeleteAllGroupsRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnDeleteAllGroupsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteAllGroupsRequestComplete, &OnDeleteAllGroupsRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteAllGroups(struct FString UniqueUserId)
{
	static UFunction* pFnDeleteAllGroups = nullptr;

	if (!pFnDeleteAllGroups)
	{
		pFnDeleteAllGroups = UFunction::FindFunction("Function IpDrv.McpGroupsManager.DeleteAllGroups");

	}

	UMcpGroupsManager_execDeleteAllGroups_Parms DeleteAllGroups_Parms;
	memcpy_s(&DeleteAllGroups_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);

	this->ProcessEvent(pFnDeleteAllGroups, &DeleteAllGroups_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRemoveGroupMembersRequestComplete = nullptr;

	if (!pFnOnRemoveGroupMembersRequestComplete)
	{
		pFnOnRemoveGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete");

	}

	UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Parms OnRemoveGroupMembersRequestComplete_Parms;
	memcpy_s(&OnRemoveGroupMembersRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnRemoveGroupMembersRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnRemoveGroupMembersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRemoveGroupMembersRequestComplete, &OnRemoveGroupMembersRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::RemoveGroupMembers(struct FString UniqueUserId, struct FString GroupId, TArray<struct FString>& MemberIds)
{
	static UFunction* pFnRemoveGroupMembers = nullptr;

	if (!pFnRemoveGroupMembers)
	{
		pFnRemoveGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.RemoveGroupMembers");

	}

	UMcpGroupsManager_execRemoveGroupMembers_Parms RemoveGroupMembers_Parms;
	memcpy_s(&RemoveGroupMembers_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&RemoveGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnRemoveGroupMembers, &RemoveGroupMembers_Parms, nullptr);
	memcpy_s(&RemoveGroupMembers_Parms.MemberIds, 0x10, &MemberIds, 0x10);
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAddGroupMembersRequestComplete = nullptr;

	if (!pFnOnAddGroupMembersRequestComplete)
	{
		pFnOnAddGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete");

	}

	UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Parms OnAddGroupMembersRequestComplete_Parms;
	memcpy_s(&OnAddGroupMembersRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnAddGroupMembersRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnAddGroupMembersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAddGroupMembersRequestComplete, &OnAddGroupMembersRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bRequiresAcceptance            (CPF_Parm)
// TArray<struct FString>         MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::AddGroupMembers(struct FString UniqueUserId, struct FString GroupId, unsigned long bRequiresAcceptance, TArray<struct FString>& MemberIds)
{
	static UFunction* pFnAddGroupMembers = nullptr;

	if (!pFnAddGroupMembers)
	{
		pFnAddGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.AddGroupMembers");

	}

	UMcpGroupsManager_execAddGroupMembers_Parms AddGroupMembers_Parms;
	memcpy_s(&AddGroupMembers_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&AddGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);
	AddGroupMembers_Parms.bRequiresAcceptance = bRequiresAcceptance;

	this->ProcessEvent(pFnAddGroupMembers, &AddGroupMembers_Parms, nullptr);
	memcpy_s(&AddGroupMembers_Parms.MemberIds, 0x10, &MemberIds, 0x10);
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupMembers(struct FString GroupId, TArray<struct FMcpGroupMember>& GroupMembers)
{
	static UFunction* pFnGetGroupMembers = nullptr;

	if (!pFnGetGroupMembers)
	{
		pFnGetGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.GetGroupMembers");

	}

	UMcpGroupsManager_execGetGroupMembers_Parms GetGroupMembers_Parms;
	memcpy_s(&GetGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnGetGroupMembers, &GetGroupMembers_Parms, nullptr);
	memcpy_s(&GetGroupMembers_Parms.GroupMembers, 0x10, &GroupMembers, 0x10);
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryGroupMembersRequestComplete = nullptr;

	if (!pFnOnQueryGroupMembersRequestComplete)
	{
		pFnOnQueryGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete");

	}

	UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Parms OnQueryGroupMembersRequestComplete_Parms;
	memcpy_s(&OnQueryGroupMembersRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryGroupMembersRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryGroupMembersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryGroupMembersRequestComplete, &OnQueryGroupMembersRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroupMembers(struct FString UniqueUserId, struct FString GroupId)
{
	static UFunction* pFnQueryGroupMembers = nullptr;

	if (!pFnQueryGroupMembers)
	{
		pFnQueryGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.QueryGroupMembers");

	}

	UMcpGroupsManager_execQueryGroupMembers_Parms QueryGroupMembers_Parms;
	memcpy_s(&QueryGroupMembers_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&QueryGroupMembers_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnQueryGroupMembers, &QueryGroupMembers_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupList(struct FString UserId, struct FMcpGroupList& GroupList)
{
	static UFunction* pFnGetGroupList = nullptr;

	if (!pFnGetGroupList)
	{
		pFnGetGroupList = UFunction::FindFunction("Function IpDrv.McpGroupsManager.GetGroupList");

	}

	UMcpGroupsManager_execGetGroupList_Parms GetGroupList_Parms;
	memcpy_s(&GetGroupList_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnGetGroupList, &GetGroupList_Parms, nullptr);
	memcpy_s(&GetGroupList_Parms.GroupList, 0x20, &GroupList, 0x20);
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryGroupsRequestComplete = nullptr;

	if (!pFnOnQueryGroupsRequestComplete)
	{
		pFnOnQueryGroupsRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete");

	}

	UMcpGroupsManager_execOnQueryGroupsRequestComplete_Parms OnQueryGroupsRequestComplete_Parms;
	memcpy_s(&OnQueryGroupsRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnQueryGroupsRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnQueryGroupsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryGroupsRequestComplete, &OnQueryGroupsRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 RequesterId                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroups(struct FString RequesterId)
{
	static UFunction* pFnQueryGroups = nullptr;

	if (!pFnQueryGroups)
	{
		pFnQueryGroups = UFunction::FindFunction("Function IpDrv.McpGroupsManager.QueryGroups");

	}

	UMcpGroupsManager_execQueryGroups_Parms QueryGroups_Parms;
	memcpy_s(&QueryGroups_Parms.RequesterId, 0x10, &RequesterId, 0x10);

	this->ProcessEvent(pFnQueryGroups, &QueryGroups_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteGroupRequestComplete = nullptr;

	if (!pFnOnDeleteGroupRequestComplete)
	{
		pFnOnDeleteGroupRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete");

	}

	UMcpGroupsManager_execOnDeleteGroupRequestComplete_Parms OnDeleteGroupRequestComplete_Parms;
	memcpy_s(&OnDeleteGroupRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnDeleteGroupRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnDeleteGroupRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteGroupRequestComplete, &OnDeleteGroupRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteGroup(struct FString UniqueUserId, struct FString GroupId)
{
	static UFunction* pFnDeleteGroup = nullptr;

	if (!pFnDeleteGroup)
	{
		pFnDeleteGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.DeleteGroup");

	}

	UMcpGroupsManager_execDeleteGroup_Parms DeleteGroup_Parms;
	memcpy_s(&DeleteGroup_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&DeleteGroup_Parms.GroupId, 0x10, &GroupId, 0x10);

	this->ProcessEvent(pFnDeleteGroup, &DeleteGroup_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   CreateGroupRequest             (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCreateGroupRequestComplete = nullptr;

	if (!pFnOnCreateGroupRequestComplete)
	{
		pFnOnCreateGroupRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete");

	}

	UMcpGroupsManager_execOnCreateGroupRequestComplete_Parms OnCreateGroupRequestComplete_Parms;
	memcpy_s(&OnCreateGroupRequestComplete_Parms.CreateGroupRequest, 0x8, &CreateGroupRequest, 0x8);
	memcpy_s(&OnCreateGroupRequestComplete_Parms.HttpResponse, 0x8, &HttpResponse, 0x8);
	OnCreateGroupRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCreateGroupRequestComplete, &OnCreateGroupRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::CreateGroup(struct FString UniqueUserId, struct FString GroupName)
{
	static UFunction* pFnCreateGroup = nullptr;

	if (!pFnCreateGroup)
	{
		pFnCreateGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CreateGroup");

	}

	UMcpGroupsManager_execCreateGroup_Parms CreateGroup_Parms;
	memcpy_s(&CreateGroup_Parms.UniqueUserId, 0x10, &UniqueUserId, 0x10);
	memcpy_s(&CreateGroup_Parms.GroupName, 0x10, &GroupName, 0x10);

	this->ProcessEvent(pFnCreateGroup, &CreateGroup_Parms, nullptr);
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingBase::GetIdMappings(struct FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings)
{
	static UFunction* pFnGetIdMappings = nullptr;

	if (!pFnGetIdMappings)
	{
		pFnGetIdMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.GetIdMappings");

	}

	UMcpIdMappingBase_execGetIdMappings_Parms GetIdMappings_Parms;
	memcpy_s(&GetIdMappings_Parms.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(pFnGetIdMappings, &GetIdMappings_Parms, nullptr);
	memcpy_s(&GetIdMappings_Parms.IDMappings, 0x10, &IDMappings, 0x10);
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::OnQueryMappingsComplete(struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryMappingsComplete = nullptr;

	if (!pFnOnQueryMappingsComplete)
	{
		pFnOnQueryMappingsComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete");

	}

	UMcpIdMappingBase_execOnQueryMappingsComplete_Parms OnQueryMappingsComplete_Parms;
	memcpy_s(&OnQueryMappingsComplete_Parms.ExternalType, 0x10, &ExternalType, 0x10);
	OnQueryMappingsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMappingsComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryMappingsComplete, &OnQueryMappingsComplete_Parms, nullptr);
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         ExternalIds                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingBase::QueryMappings(struct FString ExternalType, TArray<struct FString>& ExternalIds)
{
	static UFunction* pFnQueryMappings = nullptr;

	if (!pFnQueryMappings)
	{
		pFnQueryMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.QueryMappings");

	}

	UMcpIdMappingBase_execQueryMappings_Parms QueryMappings_Parms;
	memcpy_s(&QueryMappings_Parms.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(pFnQueryMappings, &QueryMappings_Parms, nullptr);
	memcpy_s(&QueryMappings_Parms.ExternalIds, 0x10, &ExternalIds, 0x10);
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::OnAddMappingComplete(struct FString McpId, struct FString ExternalId, struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnAddMappingComplete = nullptr;

	if (!pFnOnAddMappingComplete)
	{
		pFnOnAddMappingComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.OnAddMappingComplete");

	}

	UMcpIdMappingBase_execOnAddMappingComplete_Parms OnAddMappingComplete_Parms;
	memcpy_s(&OnAddMappingComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnAddMappingComplete_Parms.ExternalId, 0x10, &ExternalId, 0x10);
	memcpy_s(&OnAddMappingComplete_Parms.ExternalType, 0x10, &ExternalType, 0x10);
	OnAddMappingComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAddMappingComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnAddMappingComplete, &OnAddMappingComplete_Parms, nullptr);
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::AddMapping(struct FString McpId, struct FString ExternalId, struct FString ExternalType)
{
	static UFunction* pFnAddMapping = nullptr;

	if (!pFnAddMapping)
	{
		pFnAddMapping = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.AddMapping");

	}

	UMcpIdMappingBase_execAddMapping_Parms AddMapping_Parms;
	memcpy_s(&AddMapping_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AddMapping_Parms.ExternalId, 0x10, &ExternalId, 0x10);
	memcpy_s(&AddMapping_Parms.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(pFnAddMapping, &AddMapping_Parms, nullptr);
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpIdMappingBase*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpIdMappingBase* UMcpIdMappingBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.CreateInstance");

	}

	UMcpIdMappingBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingManager::GetIdMappings(struct FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings)
{
	static UFunction* pFnGetIdMappings = nullptr;

	if (!pFnGetIdMappings)
	{
		pFnGetIdMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.GetIdMappings");

	}

	UMcpIdMappingManager_execGetIdMappings_Parms GetIdMappings_Parms;
	memcpy_s(&GetIdMappings_Parms.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(pFnGetIdMappings, &GetIdMappings_Parms, nullptr);
	memcpy_s(&GetIdMappings_Parms.IDMappings, 0x10, &IDMappings, 0x10);
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryMappingsRequestComplete = nullptr;

	if (!pFnOnQueryMappingsRequestComplete)
	{
		pFnOnQueryMappingsRequestComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete");

	}

	UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Parms OnQueryMappingsRequestComplete_Parms;
	memcpy_s(&OnQueryMappingsRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryMappingsRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryMappingsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryMappingsRequestComplete, &OnQueryMappingsRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         ExternalIds                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingManager::QueryMappings(struct FString ExternalType, TArray<struct FString>& ExternalIds)
{
	static UFunction* pFnQueryMappings = nullptr;

	if (!pFnQueryMappings)
	{
		pFnQueryMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.QueryMappings");

	}

	UMcpIdMappingManager_execQueryMappings_Parms QueryMappings_Parms;
	memcpy_s(&QueryMappings_Parms.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(pFnQueryMappings, &QueryMappings_Parms, nullptr);
	memcpy_s(&QueryMappings_Parms.ExternalIds, 0x10, &ExternalIds, 0x10);
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAddMappingRequestComplete = nullptr;

	if (!pFnOnAddMappingRequestComplete)
	{
		pFnOnAddMappingRequestComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete");

	}

	UMcpIdMappingManager_execOnAddMappingRequestComplete_Parms OnAddMappingRequestComplete_Parms;
	memcpy_s(&OnAddMappingRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnAddMappingRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnAddMappingRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAddMappingRequestComplete, &OnAddMappingRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ExternalType                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingManager::AddMapping(struct FString McpId, struct FString ExternalId, struct FString ExternalType)
{
	static UFunction* pFnAddMapping = nullptr;

	if (!pFnAddMapping)
	{
		pFnAddMapping = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.AddMapping");

	}

	UMcpIdMappingManager_execAddMapping_Parms AddMapping_Parms;
	memcpy_s(&AddMapping_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AddMapping_Parms.ExternalId, 0x10, &ExternalId, 0x10);
	memcpy_s(&AddMapping_Parms.ExternalType, 0x10, &ExternalType, 0x10);

	this->ProcessEvent(pFnAddMapping, &AddMapping_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnDeleteValueComplete(struct FString McpId, struct FString SaveSlot, struct FName ValueId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteValueComplete = nullptr;

	if (!pFnOnDeleteValueComplete)
	{
		pFnOnDeleteValueComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete");

	}

	UMcpManagedValueManagerBase_execOnDeleteValueComplete_Parms OnDeleteValueComplete_Parms;
	memcpy_s(&OnDeleteValueComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnDeleteValueComplete_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&OnDeleteValueComplete_Parms.ValueId, 0x8, &ValueId, 0x8);
	OnDeleteValueComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteValueComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteValueComplete, &OnDeleteValueComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

void UMcpManagedValueManagerBase::DeleteValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId)
{
	static UFunction* pFnDeleteValue = nullptr;

	if (!pFnDeleteValue)
	{
		pFnDeleteValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.DeleteValue");

	}

	UMcpManagedValueManagerBase_execDeleteValue_Parms DeleteValue_Parms;
	memcpy_s(&DeleteValue_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteValue_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&DeleteValue_Parms.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(pFnDeleteValue, &DeleteValue_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            Value                          (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnUpdateValueComplete(struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnUpdateValueComplete = nullptr;

	if (!pFnOnUpdateValueComplete)
	{
		pFnOnUpdateValueComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete");

	}

	UMcpManagedValueManagerBase_execOnUpdateValueComplete_Parms OnUpdateValueComplete_Parms;
	memcpy_s(&OnUpdateValueComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnUpdateValueComplete_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&OnUpdateValueComplete_Parms.ValueId, 0x8, &ValueId, 0x8);
	memcpy_s(&OnUpdateValueComplete_Parms.Value, 0x4, &Value, 0x4);
	OnUpdateValueComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateValueComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnUpdateValueComplete, &OnUpdateValueComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            Value                          (CPF_Parm)

void UMcpManagedValueManagerBase::UpdateValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value)
{
	static UFunction* pFnUpdateValue = nullptr;

	if (!pFnUpdateValue)
	{
		pFnUpdateValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.UpdateValue");

	}

	UMcpManagedValueManagerBase_execUpdateValue_Parms UpdateValue_Parms;
	memcpy_s(&UpdateValue_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&UpdateValue_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&UpdateValue_Parms.ValueId, 0x8, &ValueId, 0x8);
	memcpy_s(&UpdateValue_Parms.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(pFnUpdateValue, &UpdateValue_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

int UMcpManagedValueManagerBase::GetValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId)
{
	static UFunction* pFnGetValue = nullptr;

	if (!pFnGetValue)
	{
		pFnGetValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.GetValue");

	}

	UMcpManagedValueManagerBase_execGetValue_Parms GetValue_Parms;
	memcpy_s(&GetValue_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValue_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&GetValue_Parms.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(pFnGetValue, &GetValue_Parms, nullptr);

	return GetValue_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FManagedValue>   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManagerBase::GetValues(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnGetValues = nullptr;

	if (!pFnGetValues)
	{
		pFnGetValues = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.GetValues");

	}

	UMcpManagedValueManagerBase_execGetValues_Parms GetValues_Parms;
	memcpy_s(&GetValues_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValues_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnGetValues, &GetValues_Parms, nullptr);

	return GetValues_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnReadSaveSlotComplete(struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnReadSaveSlotComplete = nullptr;

	if (!pFnOnReadSaveSlotComplete)
	{
		pFnOnReadSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete");

	}

	UMcpManagedValueManagerBase_execOnReadSaveSlotComplete_Parms OnReadSaveSlotComplete_Parms;
	memcpy_s(&OnReadSaveSlotComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnReadSaveSlotComplete_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	OnReadSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSaveSlotComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnReadSaveSlotComplete, &OnReadSaveSlotComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::ReadSaveSlot(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnReadSaveSlot = nullptr;

	if (!pFnReadSaveSlot)
	{
		pFnReadSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot");

	}

	UMcpManagedValueManagerBase_execReadSaveSlot_Parms ReadSaveSlot_Parms;
	memcpy_s(&ReadSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ReadSaveSlot_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnReadSaveSlot, &ReadSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::OnCreateSaveSlotComplete(struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnCreateSaveSlotComplete = nullptr;

	if (!pFnOnCreateSaveSlotComplete)
	{
		pFnOnCreateSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete");

	}

	UMcpManagedValueManagerBase_execOnCreateSaveSlotComplete_Parms OnCreateSaveSlotComplete_Parms;
	memcpy_s(&OnCreateSaveSlotComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnCreateSaveSlotComplete_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	OnCreateSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateSaveSlotComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnCreateSaveSlotComplete, &OnCreateSaveSlotComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManagerBase::CreateSaveSlot(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnCreateSaveSlot = nullptr;

	if (!pFnCreateSaveSlot)
	{
		pFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot");

	}

	UMcpManagedValueManagerBase_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy_s(&CreateSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnCreateSaveSlot, &CreateSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpManagedValueManagerBase* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpManagedValueManagerBase* UMcpManagedValueManagerBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpManagedValueManagerBase.CreateInstance");

	}

	UMcpManagedValueManagerBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteValueRequestComplete = nullptr;

	if (!pFnOnDeleteValueRequestComplete)
	{
		pFnOnDeleteValueRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete");

	}

	UMcpManagedValueManager_execOnDeleteValueRequestComplete_Parms OnDeleteValueRequestComplete_Parms;
	memcpy_s(&OnDeleteValueRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteValueRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnDeleteValueRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteValueRequestComplete, &OnDeleteValueRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.DeleteValue
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

void UMcpManagedValueManager::DeleteValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId)
{
	static UFunction* pFnDeleteValue = nullptr;

	if (!pFnDeleteValue)
	{
		pFnDeleteValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.DeleteValue");

	}

	UMcpManagedValueManager_execDeleteValue_Parms DeleteValue_Parms;
	memcpy_s(&DeleteValue_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteValue_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&DeleteValue_Parms.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(pFnDeleteValue, &DeleteValue_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUpdateValueRequestComplete = nullptr;

	if (!pFnOnUpdateValueRequestComplete)
	{
		pFnOnUpdateValueRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete");

	}

	UMcpManagedValueManager_execOnUpdateValueRequestComplete_Parms OnUpdateValueRequestComplete_Parms;
	memcpy_s(&OnUpdateValueRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnUpdateValueRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnUpdateValueRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUpdateValueRequestComplete, &OnUpdateValueRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.UpdateValue
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)
// int                            Value                          (CPF_Parm)

void UMcpManagedValueManager::UpdateValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value)
{
	static UFunction* pFnUpdateValue = nullptr;

	if (!pFnUpdateValue)
	{
		pFnUpdateValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.UpdateValue");

	}

	UMcpManagedValueManager_execUpdateValue_Parms UpdateValue_Parms;
	memcpy_s(&UpdateValue_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&UpdateValue_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&UpdateValue_Parms.ValueId, 0x8, &ValueId, 0x8);
	memcpy_s(&UpdateValue_Parms.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(pFnUpdateValue, &UpdateValue_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.GetValue
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FName                   ValueId                        (CPF_Parm)

int UMcpManagedValueManager::GetValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId)
{
	static UFunction* pFnGetValue = nullptr;

	if (!pFnGetValue)
	{
		pFnGetValue = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.GetValue");

	}

	UMcpManagedValueManager_execGetValue_Parms GetValue_Parms;
	memcpy_s(&GetValue_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValue_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&GetValue_Parms.ValueId, 0x8, &ValueId, 0x8);

	this->ProcessEvent(pFnGetValue, &GetValue_Parms, nullptr);

	return GetValue_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.GetValues
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FManagedValue>   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManager::GetValues(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnGetValues = nullptr;

	if (!pFnGetValues)
	{
		pFnGetValues = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.GetValues");

	}

	UMcpManagedValueManager_execGetValues_Parms GetValues_Parms;
	memcpy_s(&GetValues_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetValues_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnGetValues, &GetValues_Parms, nullptr);

	return GetValues_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadSaveSlotRequestComplete = nullptr;

	if (!pFnOnReadSaveSlotRequestComplete)
	{
		pFnOnReadSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete");

	}

	UMcpManagedValueManager_execOnReadSaveSlotRequestComplete_Parms OnReadSaveSlotRequestComplete_Parms;
	memcpy_s(&OnReadSaveSlotRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnReadSaveSlotRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnReadSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadSaveSlotRequestComplete, &OnReadSaveSlotRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManager::ReadSaveSlot(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnReadSaveSlot = nullptr;

	if (!pFnReadSaveSlot)
	{
		pFnReadSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.ReadSaveSlot");

	}

	UMcpManagedValueManager_execReadSaveSlot_Parms ReadSaveSlot_Parms;
	memcpy_s(&ReadSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ReadSaveSlot_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnReadSaveSlot, &ReadSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManager::ParseValuesForSaveSlot(struct FString McpId, struct FString SaveSlot, struct FString JsonPayload)
{
	static UFunction* pFnParseValuesForSaveSlot = nullptr;

	if (!pFnParseValuesForSaveSlot)
	{
		pFnParseValuesForSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot");

	}

	UMcpManagedValueManager_execParseValuesForSaveSlot_Parms ParseValuesForSaveSlot_Parms;
	memcpy_s(&ParseValuesForSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ParseValuesForSaveSlot_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);
	memcpy_s(&ParseValuesForSaveSlot_Parms.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(pFnParseValuesForSaveSlot, &ParseValuesForSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

int UMcpManagedValueManager::FindSaveSlotIndex(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnFindSaveSlotIndex = nullptr;

	if (!pFnFindSaveSlotIndex)
	{
		pFnFindSaveSlotIndex = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.FindSaveSlotIndex");

	}

	UMcpManagedValueManager_execFindSaveSlotIndex_Parms FindSaveSlotIndex_Parms;
	memcpy_s(&FindSaveSlotIndex_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindSaveSlotIndex_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnFindSaveSlotIndex, &FindSaveSlotIndex_Parms, nullptr);

	return FindSaveSlotIndex_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpManagedValueManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCreateSaveSlotRequestComplete = nullptr;

	if (!pFnOnCreateSaveSlotRequestComplete)
	{
		pFnOnCreateSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete");

	}

	UMcpManagedValueManager_execOnCreateSaveSlotRequestComplete_Parms OnCreateSaveSlotRequestComplete_Parms;
	memcpy_s(&OnCreateSaveSlotRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnCreateSaveSlotRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnCreateSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCreateSaveSlotRequestComplete, &OnCreateSaveSlotRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlot                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpManagedValueManager::CreateSaveSlot(struct FString McpId, struct FString SaveSlot)
{
	static UFunction* pFnCreateSaveSlot = nullptr;

	if (!pFnCreateSaveSlot)
	{
		pFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpManagedValueManager.CreateSaveSlot");

	}

	UMcpManagedValueManager_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy_s(&CreateSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Parms.SaveSlot, 0x10, &SaveSlot, 0x10);

	this->ProcessEvent(pFnCreateSaveSlot, &CreateSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UMcpServerTimeBase::GetLastServerTime()
{
	static UFunction* pFnGetLastServerTime = nullptr;

	if (!pFnGetLastServerTime)
	{
		pFnGetLastServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.GetLastServerTime");

	}

	UMcpServerTimeBase_execGetLastServerTime_Parms GetLastServerTime_Parms;

	this->ProcessEvent(pFnGetLastServerTime, &GetLastServerTime_Parms, nullptr);

	return GetLastServerTime_Parms.ReturnValue;
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 DateTimeStr                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpServerTimeBase::OnQueryServerTimeComplete(unsigned long bWasSuccessful, struct FString DateTimeStr, struct FString Error)
{
	static UFunction* pFnOnQueryServerTimeComplete = nullptr;

	if (!pFnOnQueryServerTimeComplete)
	{
		pFnOnQueryServerTimeComplete = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete");

	}

	UMcpServerTimeBase_execOnQueryServerTimeComplete_Parms OnQueryServerTimeComplete_Parms;
	OnQueryServerTimeComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryServerTimeComplete_Parms.DateTimeStr, 0x10, &DateTimeStr, 0x10);
	memcpy_s(&OnQueryServerTimeComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryServerTimeComplete, &OnQueryServerTimeComplete_Parms, nullptr);
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpServerTimeBase::QueryServerTime()
{
	static UFunction* pFnQueryServerTime = nullptr;

	if (!pFnQueryServerTime)
	{
		pFnQueryServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.QueryServerTime");

	}

	UMcpServerTimeBase_execQueryServerTime_Parms QueryServerTime_Parms;

	this->ProcessEvent(pFnQueryServerTime, &QueryServerTime_Parms, nullptr);
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpServerTimeBase*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpServerTimeBase* UMcpServerTimeBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.CreateInstance");

	}

	UMcpServerTimeBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UMcpServerTimeManager::GetLastServerTime()
{
	static UFunction* pFnGetLastServerTime = nullptr;

	if (!pFnGetLastServerTime)
	{
		pFnGetLastServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.GetLastServerTime");

	}

	UMcpServerTimeManager_execGetLastServerTime_Parms GetLastServerTime_Parms;

	this->ProcessEvent(pFnGetLastServerTime, &GetLastServerTime_Parms, nullptr);

	return GetLastServerTime_Parms.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpServerTimeManager::OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryServerTimeHTTPRequestComplete = nullptr;

	if (!pFnOnQueryServerTimeHTTPRequestComplete)
	{
		pFnOnQueryServerTimeHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete");

	}

	UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Parms OnQueryServerTimeHTTPRequestComplete_Parms;
	memcpy_s(&OnQueryServerTimeHTTPRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryServerTimeHTTPRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryServerTimeHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryServerTimeHTTPRequestComplete, &OnQueryServerTimeHTTPRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpServerTimeManager::QueryServerTime()
{
	static UFunction* pFnQueryServerTime = nullptr;

	if (!pFnQueryServerTime)
	{
		pFnQueryServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.QueryServerTime");

	}

	UMcpServerTimeManager_execQueryServerTime_Parms QueryServerTime_Parms;

	this->ProcessEvent(pFnQueryServerTime, &QueryServerTime_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnRecordIapComplete(struct FString McpId, struct FString SaveSlotId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnRecordIapComplete = nullptr;

	if (!pFnOnRecordIapComplete)
	{
		pFnOnRecordIapComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnRecordIapComplete");

	}

	UMcpUserInventoryBase_execOnRecordIapComplete_Parms OnRecordIapComplete_Parms;
	memcpy_s(&OnRecordIapComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnRecordIapComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnRecordIapComplete_Parms.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnRecordIapComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRecordIapComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnRecordIapComplete, &OnRecordIapComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.RecordIap
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Receipt                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::RecordIap(struct FString McpId, struct FString SaveSlotId, struct FString Receipt)
{
	static UFunction* pFnRecordIap = nullptr;

	if (!pFnRecordIap)
	{
		pFnRecordIap = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.RecordIap");

	}

	UMcpUserInventoryBase_execRecordIap_Parms RecordIap_Parms;
	memcpy_s(&RecordIap_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&RecordIap_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&RecordIap_Parms.Receipt, 0x10, &Receipt, 0x10);

	this->ProcessEvent(pFnRecordIap, &RecordIap_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteItemComplete = nullptr;

	if (!pFnOnDeleteItemComplete)
	{
		pFnOnDeleteItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete");

	}

	UMcpUserInventoryBase_execOnDeleteItemComplete_Parms OnDeleteItemComplete_Parms;
	memcpy_s(&OnDeleteItemComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnDeleteItemComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnDeleteItemComplete_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	OnDeleteItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteItemComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteItemComplete, &OnDeleteItemComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::DeleteItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int StoreVersion)
{
	static UFunction* pFnDeleteItem = nullptr;

	if (!pFnDeleteItem)
	{
		pFnDeleteItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.DeleteItem");

	}

	UMcpUserInventoryBase_execDeleteItem_Parms DeleteItem_Parms;
	memcpy_s(&DeleteItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&DeleteItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&DeleteItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnDeleteItem, &DeleteItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnConsumeItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnConsumeItemComplete = nullptr;

	if (!pFnOnConsumeItemComplete)
	{
		pFnOnConsumeItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete");

	}

	UMcpUserInventoryBase_execOnConsumeItemComplete_Parms OnConsumeItemComplete_Parms;
	memcpy_s(&OnConsumeItemComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnConsumeItemComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnConsumeItemComplete_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&OnConsumeItemComplete_Parms.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnConsumeItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnConsumeItemComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnConsumeItemComplete, &OnConsumeItemComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::ConsumeItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion)
{
	static UFunction* pFnConsumeItem = nullptr;

	if (!pFnConsumeItem)
	{
		pFnConsumeItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.ConsumeItem");

	}

	UMcpUserInventoryBase_execConsumeItem_Parms ConsumeItem_Parms;
	memcpy_s(&ConsumeItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ConsumeItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&ConsumeItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&ConsumeItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&ConsumeItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnConsumeItem, &ConsumeItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnEarnItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnEarnItemComplete = nullptr;

	if (!pFnOnEarnItemComplete)
	{
		pFnOnEarnItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnEarnItemComplete");

	}

	UMcpUserInventoryBase_execOnEarnItemComplete_Parms OnEarnItemComplete_Parms;
	memcpy_s(&OnEarnItemComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnEarnItemComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnEarnItemComplete_Parms.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&OnEarnItemComplete_Parms.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnEarnItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEarnItemComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnEarnItemComplete, &OnEarnItemComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.EarnItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryBase::EarnItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int Quantity, int StoreVersion)
{
	static UFunction* pFnEarnItem = nullptr;

	if (!pFnEarnItem)
	{
		pFnEarnItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.EarnItem");

	}

	UMcpUserInventoryBase_execEarnItem_Parms EarnItem_Parms;
	memcpy_s(&EarnItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&EarnItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&EarnItem_Parms.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&EarnItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&EarnItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnEarnItem, &EarnItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnSellItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnSellItemComplete = nullptr;

	if (!pFnOnSellItemComplete)
	{
		pFnOnSellItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnSellItemComplete");

	}

	UMcpUserInventoryBase_execOnSellItemComplete_Parms OnSellItemComplete_Parms;
	memcpy_s(&OnSellItemComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnSellItemComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnSellItemComplete_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&OnSellItemComplete_Parms.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnSellItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnSellItemComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnSellItemComplete, &OnSellItemComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.SellItem
// [0x00424000] (FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::SellItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>& ExpectedResultItems)
{
	static UFunction* pFnSellItem = nullptr;

	if (!pFnSellItem)
	{
		pFnSellItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.SellItem");

	}

	UMcpUserInventoryBase_execSellItem_Parms SellItem_Parms;
	memcpy_s(&SellItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&SellItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&SellItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&SellItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&SellItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnSellItem, &SellItem_Parms, nullptr);
	memcpy_s(&SellItem_Parms.ExpectedResultItems, 0x10, &ExpectedResultItems, 0x10);
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnPurchaseItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnPurchaseItemComplete = nullptr;

	if (!pFnOnPurchaseItemComplete)
	{
		pFnOnPurchaseItemComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete");

	}

	UMcpUserInventoryBase_execOnPurchaseItemComplete_Parms OnPurchaseItemComplete_Parms;
	memcpy_s(&OnPurchaseItemComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnPurchaseItemComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&OnPurchaseItemComplete_Parms.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&OnPurchaseItemComplete_Parms.UpdatedItemIds, 0x10, &UpdatedItemIds, 0x10);
	OnPurchaseItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnPurchaseItemComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnPurchaseItemComplete, &OnPurchaseItemComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         PurchaseItemIds                (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// float                          Scalar                         (CPF_Parm)

void UMcpUserInventoryBase::PurchaseItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar)
{
	static UFunction* pFnPurchaseItem = nullptr;

	if (!pFnPurchaseItem)
	{
		pFnPurchaseItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.PurchaseItem");

	}

	UMcpUserInventoryBase_execPurchaseItem_Parms PurchaseItem_Parms;
	memcpy_s(&PurchaseItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&PurchaseItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&PurchaseItem_Parms.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&PurchaseItem_Parms.PurchaseItemIds, 0x10, &PurchaseItemIds, 0x10);
	memcpy_s(&PurchaseItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&PurchaseItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);
	memcpy_s(&PurchaseItem_Parms.Scalar, 0x4, &Scalar, 0x4);

	this->ProcessEvent(pFnPurchaseItem, &PurchaseItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserInventoryBase::GetInventoryItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem& OutInventoryItem)
{
	static UFunction* pFnGetInventoryItem = nullptr;

	if (!pFnGetInventoryItem)
	{
		pFnGetInventoryItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.GetInventoryItem");

	}

	UMcpUserInventoryBase_execGetInventoryItem_Parms GetInventoryItem_Parms;
	memcpy_s(&GetInventoryItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&GetInventoryItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);

	this->ProcessEvent(pFnGetInventoryItem, &GetInventoryItem_Parms, nullptr);
	memcpy_s(&GetInventoryItem_Parms.OutInventoryItem, 0x50, &OutInventoryItem, 0x50);

	return GetInventoryItem_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::GetInventoryItems(struct FString McpId, struct FString SaveSlotId, TArray<struct FMcpInventoryItem>& OutInventoryItems)
{
	static UFunction* pFnGetInventoryItems = nullptr;

	if (!pFnGetInventoryItems)
	{
		pFnGetInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.GetInventoryItems");

	}

	UMcpUserInventoryBase_execGetInventoryItems_Parms GetInventoryItems_Parms;
	memcpy_s(&GetInventoryItems_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItems_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnGetInventoryItems, &GetInventoryItems_Parms, nullptr);
	memcpy_s(&GetInventoryItems_Parms.OutInventoryItems, 0x10, &OutInventoryItems, 0x10);
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnQueryInventoryItemsComplete(struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryInventoryItemsComplete = nullptr;

	if (!pFnOnQueryInventoryItemsComplete)
	{
		pFnOnQueryInventoryItemsComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete");

	}

	UMcpUserInventoryBase_execOnQueryInventoryItemsComplete_Parms OnQueryInventoryItemsComplete_Parms;
	memcpy_s(&OnQueryInventoryItemsComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnQueryInventoryItemsComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	OnQueryInventoryItemsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryInventoryItemsComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryInventoryItemsComplete, &OnQueryInventoryItemsComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::QueryInventoryItems(struct FString McpId, struct FString SaveSlotId)
{
	static UFunction* pFnQueryInventoryItems = nullptr;

	if (!pFnQueryInventoryItems)
	{
		pFnQueryInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.QueryInventoryItems");

	}

	UMcpUserInventoryBase_execQueryInventoryItems_Parms QueryInventoryItems_Parms;
	memcpy_s(&QueryInventoryItems_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&QueryInventoryItems_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnQueryInventoryItems, &QueryInventoryItems_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnQuerySaveSlotListComplete(struct FString McpId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQuerySaveSlotListComplete = nullptr;

	if (!pFnOnQuerySaveSlotListComplete)
	{
		pFnOnQuerySaveSlotListComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete");

	}

	UMcpUserInventoryBase_execOnQuerySaveSlotListComplete_Parms OnQuerySaveSlotListComplete_Parms;
	memcpy_s(&OnQuerySaveSlotListComplete_Parms.McpId, 0x10, &McpId, 0x10);
	OnQuerySaveSlotListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQuerySaveSlotListComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQuerySaveSlotListComplete, &OnQuerySaveSlotListComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FString> UMcpUserInventoryBase::GetSaveSlotList(struct FString McpId)
{
	static UFunction* pFnGetSaveSlotList = nullptr;

	if (!pFnGetSaveSlotList)
	{
		pFnGetSaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.GetSaveSlotList");

	}

	UMcpUserInventoryBase_execGetSaveSlotList_Parms GetSaveSlotList_Parms;
	memcpy_s(&GetSaveSlotList_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnGetSaveSlotList, &GetSaveSlotList_Parms, nullptr);

	return GetSaveSlotList_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::QuerySaveSlotList(struct FString McpId)
{
	static UFunction* pFnQuerySaveSlotList = nullptr;

	if (!pFnQuerySaveSlotList)
	{
		pFnQuerySaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.QuerySaveSlotList");

	}

	UMcpUserInventoryBase_execQuerySaveSlotList_Parms QuerySaveSlotList_Parms;
	memcpy_s(&QuerySaveSlotList_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnQuerySaveSlotList, &QuerySaveSlotList_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteSaveSlotComplete(struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteSaveSlotComplete = nullptr;

	if (!pFnOnDeleteSaveSlotComplete)
	{
		pFnOnDeleteSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete");

	}

	UMcpUserInventoryBase_execOnDeleteSaveSlotComplete_Parms OnDeleteSaveSlotComplete_Parms;
	memcpy_s(&OnDeleteSaveSlotComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnDeleteSaveSlotComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	OnDeleteSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteSaveSlotComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteSaveSlotComplete, &OnDeleteSaveSlotComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::DeleteSaveSlot(struct FString McpId, struct FString SaveSlotId)
{
	static UFunction* pFnDeleteSaveSlot = nullptr;

	if (!pFnDeleteSaveSlot)
	{
		pFnDeleteSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.DeleteSaveSlot");

	}

	UMcpUserInventoryBase_execDeleteSaveSlot_Parms DeleteSaveSlot_Parms;
	memcpy_s(&DeleteSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteSaveSlot_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnDeleteSaveSlot, &DeleteSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::OnCreateSaveSlotComplete(struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnCreateSaveSlotComplete = nullptr;

	if (!pFnOnCreateSaveSlotComplete)
	{
		pFnOnCreateSaveSlotComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete");

	}

	UMcpUserInventoryBase_execOnCreateSaveSlotComplete_Parms OnCreateSaveSlotComplete_Parms;
	memcpy_s(&OnCreateSaveSlotComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnCreateSaveSlotComplete_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	OnCreateSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateSaveSlotComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnCreateSaveSlotComplete, &OnCreateSaveSlotComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ParentSaveSlotId               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryBase::CreateSaveSlot(struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId)
{
	static UFunction* pFnCreateSaveSlot = nullptr;

	if (!pFnCreateSaveSlot)
	{
		pFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.CreateSaveSlot");

	}

	UMcpUserInventoryBase_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy_s(&CreateSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&CreateSaveSlot_Parms.ParentSaveSlotId, 0x10, &ParentSaveSlotId, 0x10);

	this->ProcessEvent(pFnCreateSaveSlot, &CreateSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpUserInventoryBase*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpUserInventoryBase* UMcpUserInventoryBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpUserInventoryBase.CreateInstance");

	}

	UMcpUserInventoryBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRecordIapRequestComplete = nullptr;

	if (!pFnOnRecordIapRequestComplete)
	{
		pFnOnRecordIapRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete");

	}

	UMcpUserInventoryManager_execOnRecordIapRequestComplete_Parms OnRecordIapRequestComplete_Parms;
	memcpy_s(&OnRecordIapRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnRecordIapRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnRecordIapRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRecordIapRequestComplete, &OnRecordIapRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.RecordIap
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Receipt                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::RecordIap(struct FString McpId, struct FString SaveSlotId, struct FString Receipt)
{
	static UFunction* pFnRecordIap = nullptr;

	if (!pFnRecordIap)
	{
		pFnRecordIap = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.RecordIap");

	}

	UMcpUserInventoryManager_execRecordIap_Parms RecordIap_Parms;
	memcpy_s(&RecordIap_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&RecordIap_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&RecordIap_Parms.Receipt, 0x10, &Receipt, 0x10);

	this->ProcessEvent(pFnRecordIap, &RecordIap_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteItemRequestComplete = nullptr;

	if (!pFnOnDeleteItemRequestComplete)
	{
		pFnOnDeleteItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete");

	}

	UMcpUserInventoryManager_execOnDeleteItemRequestComplete_Parms OnDeleteItemRequestComplete_Parms;
	memcpy_s(&OnDeleteItemRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteItemRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnDeleteItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteItemRequestComplete, &OnDeleteItemRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::DeleteItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int StoreVersion)
{
	static UFunction* pFnDeleteItem = nullptr;

	if (!pFnDeleteItem)
	{
		pFnDeleteItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.DeleteItem");

	}

	UMcpUserInventoryManager_execDeleteItem_Parms DeleteItem_Parms;
	memcpy_s(&DeleteItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&DeleteItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&DeleteItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnDeleteItem, &DeleteItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnConsumeItemRequestComplete = nullptr;

	if (!pFnOnConsumeItemRequestComplete)
	{
		pFnOnConsumeItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete");

	}

	UMcpUserInventoryManager_execOnConsumeItemRequestComplete_Parms OnConsumeItemRequestComplete_Parms;
	memcpy_s(&OnConsumeItemRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnConsumeItemRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnConsumeItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnConsumeItemRequestComplete, &OnConsumeItemRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::ConsumeItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion)
{
	static UFunction* pFnConsumeItem = nullptr;

	if (!pFnConsumeItem)
	{
		pFnConsumeItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.ConsumeItem");

	}

	UMcpUserInventoryManager_execConsumeItem_Parms ConsumeItem_Parms;
	memcpy_s(&ConsumeItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ConsumeItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&ConsumeItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&ConsumeItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&ConsumeItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnConsumeItem, &ConsumeItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnEarnItemRequestComplete = nullptr;

	if (!pFnOnEarnItemRequestComplete)
	{
		pFnOnEarnItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete");

	}

	UMcpUserInventoryManager_execOnEarnItemRequestComplete_Parms OnEarnItemRequestComplete_Parms;
	memcpy_s(&OnEarnItemRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnEarnItemRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnEarnItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnEarnItemRequestComplete, &OnEarnItemRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.EarnItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)

void UMcpUserInventoryManager::EarnItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int Quantity, int StoreVersion)
{
	static UFunction* pFnEarnItem = nullptr;

	if (!pFnEarnItem)
	{
		pFnEarnItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.EarnItem");

	}

	UMcpUserInventoryManager_execEarnItem_Parms EarnItem_Parms;
	memcpy_s(&EarnItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&EarnItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&EarnItem_Parms.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&EarnItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&EarnItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnEarnItem, &EarnItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnSellItemRequestComplete = nullptr;

	if (!pFnOnSellItemRequestComplete)
	{
		pFnOnSellItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete");

	}

	UMcpUserInventoryManager_execOnSellItemRequestComplete_Parms OnSellItemRequestComplete_Parms;
	memcpy_s(&OnSellItemRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnSellItemRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnSellItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnSellItemRequestComplete, &OnSellItemRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.SellItem
// [0x00424002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::SellItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>& ExpectedResultItems)
{
	static UFunction* pFnSellItem = nullptr;

	if (!pFnSellItem)
	{
		pFnSellItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.SellItem");

	}

	UMcpUserInventoryManager_execSellItem_Parms SellItem_Parms;
	memcpy_s(&SellItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&SellItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&SellItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);
	memcpy_s(&SellItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&SellItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);

	this->ProcessEvent(pFnSellItem, &SellItem_Parms, nullptr);
	memcpy_s(&SellItem_Parms.ExpectedResultItems, 0x10, &ExpectedResultItems, 0x10);
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnPurchaseItemRequestComplete = nullptr;

	if (!pFnOnPurchaseItemRequestComplete)
	{
		pFnOnPurchaseItemRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete");

	}

	UMcpUserInventoryManager_execOnPurchaseItemRequestComplete_Parms OnPurchaseItemRequestComplete_Parms;
	memcpy_s(&OnPurchaseItemRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnPurchaseItemRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnPurchaseItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnPurchaseItemRequestComplete, &OnPurchaseItemRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GlobalItemId                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         PurchaseItemIds                (CPF_Parm | CPF_NeedCtorLink)
// int                            Quantity                       (CPF_Parm)
// int                            StoreVersion                   (CPF_Parm)
// float                          Scalar                         (CPF_Parm)

void UMcpUserInventoryManager::PurchaseItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar)
{
	static UFunction* pFnPurchaseItem = nullptr;

	if (!pFnPurchaseItem)
	{
		pFnPurchaseItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.PurchaseItem");

	}

	UMcpUserInventoryManager_execPurchaseItem_Parms PurchaseItem_Parms;
	memcpy_s(&PurchaseItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&PurchaseItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&PurchaseItem_Parms.GlobalItemId, 0x10, &GlobalItemId, 0x10);
	memcpy_s(&PurchaseItem_Parms.PurchaseItemIds, 0x10, &PurchaseItemIds, 0x10);
	memcpy_s(&PurchaseItem_Parms.Quantity, 0x4, &Quantity, 0x4);
	memcpy_s(&PurchaseItem_Parms.StoreVersion, 0x4, &StoreVersion, 0x4);
	memcpy_s(&PurchaseItem_Parms.Scalar, 0x4, &Scalar, 0x4);

	this->ProcessEvent(pFnPurchaseItem, &PurchaseItem_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ItemID                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FInventoryItemRequestState> InItemRequests                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int UMcpUserInventoryManager::FindItemRequest(struct FString McpId, struct FString SaveSlotId, struct FString ItemID, TArray<struct FInventoryItemRequestState>& InItemRequests)
{
	static UFunction* pFnFindItemRequest = nullptr;

	if (!pFnFindItemRequest)
	{
		pFnFindItemRequest = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.FindItemRequest");

	}

	UMcpUserInventoryManager_execFindItemRequest_Parms FindItemRequest_Parms;
	memcpy_s(&FindItemRequest_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindItemRequest_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&FindItemRequest_Parms.ItemID, 0x10, &ItemID, 0x10);

	this->ProcessEvent(pFnFindItemRequest, &FindItemRequest_Parms, nullptr);
	memcpy_s(&FindItemRequest_Parms.InItemRequests, 0x10, &InItemRequests, 0x10);

	return FindItemRequest_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int UMcpUserInventoryManager::FindSaveSlotRequest(struct FString McpId, struct FString SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>& InSaveSlotRequests)
{
	static UFunction* pFnFindSaveSlotRequest = nullptr;

	if (!pFnFindSaveSlotRequest)
	{
		pFnFindSaveSlotRequest = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest");

	}

	UMcpUserInventoryManager_execFindSaveSlotRequest_Parms FindSaveSlotRequest_Parms;
	memcpy_s(&FindSaveSlotRequest_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindSaveSlotRequest_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnFindSaveSlotRequest, &FindSaveSlotRequest_Parms, nullptr);
	memcpy_s(&FindSaveSlotRequest_Parms.InSaveSlotRequests, 0x10, &InSaveSlotRequests, 0x10);

	return FindSaveSlotRequest_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

int UMcpUserInventoryManager::FindSaveSlotIndex(struct FString McpId, struct FString SaveSlotId)
{
	static UFunction* pFnFindSaveSlotIndex = nullptr;

	if (!pFnFindSaveSlotIndex)
	{
		pFnFindSaveSlotIndex = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex");

	}

	UMcpUserInventoryManager_execFindSaveSlotIndex_Parms FindSaveSlotIndex_Parms;
	memcpy_s(&FindSaveSlotIndex_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&FindSaveSlotIndex_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnFindSaveSlotIndex, &FindSaveSlotIndex_Parms, nullptr);

	return FindSaveSlotIndex_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::ParseSaveSlotList(struct FString McpId, struct FString JsonPayload)
{
	static UFunction* pFnParseSaveSlotList = nullptr;

	if (!pFnParseSaveSlotList)
	{
		pFnParseSaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.ParseSaveSlotList");

	}

	UMcpUserInventoryManager_execParseSaveSlotList_Parms ParseSaveSlotList_Parms;
	memcpy_s(&ParseSaveSlotList_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ParseSaveSlotList_Parms.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(pFnParseSaveSlotList, &ParseSaveSlotList_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FString> UMcpUserInventoryManager::ParseInventoryForSaveSlot(struct FString McpId, struct FString SaveSlotId, struct FString JsonPayload)
{
	static UFunction* pFnParseInventoryForSaveSlot = nullptr;

	if (!pFnParseInventoryForSaveSlot)
	{
		pFnParseInventoryForSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot");

	}

	UMcpUserInventoryManager_execParseInventoryForSaveSlot_Parms ParseInventoryForSaveSlot_Parms;
	memcpy_s(&ParseInventoryForSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&ParseInventoryForSaveSlot_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&ParseInventoryForSaveSlot_Parms.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(pFnParseInventoryForSaveSlot, &ParseInventoryForSaveSlot_Parms, nullptr);

	return ParseInventoryForSaveSlot_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 InstanceItemId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserInventoryManager::GetInventoryItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem& OutInventoryItem)
{
	static UFunction* pFnGetInventoryItem = nullptr;

	if (!pFnGetInventoryItem)
	{
		pFnGetInventoryItem = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.GetInventoryItem");

	}

	UMcpUserInventoryManager_execGetInventoryItem_Parms GetInventoryItem_Parms;
	memcpy_s(&GetInventoryItem_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItem_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&GetInventoryItem_Parms.InstanceItemId, 0x10, &InstanceItemId, 0x10);

	this->ProcessEvent(pFnGetInventoryItem, &GetInventoryItem_Parms, nullptr);
	memcpy_s(&GetInventoryItem_Parms.OutInventoryItem, 0x50, &OutInventoryItem, 0x50);

	return GetInventoryItem_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::GetInventoryItems(struct FString McpId, struct FString SaveSlotId, TArray<struct FMcpInventoryItem>& OutInventoryItems)
{
	static UFunction* pFnGetInventoryItems = nullptr;

	if (!pFnGetInventoryItems)
	{
		pFnGetInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.GetInventoryItems");

	}

	UMcpUserInventoryManager_execGetInventoryItems_Parms GetInventoryItems_Parms;
	memcpy_s(&GetInventoryItems_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&GetInventoryItems_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnGetInventoryItems, &GetInventoryItems_Parms, nullptr);
	memcpy_s(&GetInventoryItems_Parms.OutInventoryItems, 0x10, &OutInventoryItems, 0x10);
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryInventoryItemsRequestComplete = nullptr;

	if (!pFnOnQueryInventoryItemsRequestComplete)
	{
		pFnOnQueryInventoryItemsRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete");

	}

	UMcpUserInventoryManager_execOnQueryInventoryItemsRequestComplete_Parms OnQueryInventoryItemsRequestComplete_Parms;
	memcpy_s(&OnQueryInventoryItemsRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryInventoryItemsRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryInventoryItemsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryInventoryItemsRequestComplete, &OnQueryInventoryItemsRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::QueryInventoryItems(struct FString McpId, struct FString SaveSlotId)
{
	static UFunction* pFnQueryInventoryItems = nullptr;

	if (!pFnQueryInventoryItems)
	{
		pFnQueryInventoryItems = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.QueryInventoryItems");

	}

	UMcpUserInventoryManager_execQueryInventoryItems_Parms QueryInventoryItems_Parms;
	memcpy_s(&QueryInventoryItems_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&QueryInventoryItems_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnQueryInventoryItems, &QueryInventoryItems_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

TArray<struct FString> UMcpUserInventoryManager::GetSaveSlotList(struct FString McpId)
{
	static UFunction* pFnGetSaveSlotList = nullptr;

	if (!pFnGetSaveSlotList)
	{
		pFnGetSaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.GetSaveSlotList");

	}

	UMcpUserInventoryManager_execGetSaveSlotList_Parms GetSaveSlotList_Parms;
	memcpy_s(&GetSaveSlotList_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnGetSaveSlotList, &GetSaveSlotList_Parms, nullptr);

	return GetSaveSlotList_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQuerySaveSlotListRequestComplete = nullptr;

	if (!pFnOnQuerySaveSlotListRequestComplete)
	{
		pFnOnQuerySaveSlotListRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete");

	}

	UMcpUserInventoryManager_execOnQuerySaveSlotListRequestComplete_Parms OnQuerySaveSlotListRequestComplete_Parms;
	memcpy_s(&OnQuerySaveSlotListRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQuerySaveSlotListRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQuerySaveSlotListRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQuerySaveSlotListRequestComplete, &OnQuerySaveSlotListRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::QuerySaveSlotList(struct FString McpId)
{
	static UFunction* pFnQuerySaveSlotList = nullptr;

	if (!pFnQuerySaveSlotList)
	{
		pFnQuerySaveSlotList = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.QuerySaveSlotList");

	}

	UMcpUserInventoryManager_execQuerySaveSlotList_Parms QuerySaveSlotList_Parms;
	memcpy_s(&QuerySaveSlotList_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnQuerySaveSlotList, &QuerySaveSlotList_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteSaveSlotRequestComplete = nullptr;

	if (!pFnOnDeleteSaveSlotRequestComplete)
	{
		pFnOnDeleteSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete");

	}

	UMcpUserInventoryManager_execOnDeleteSaveSlotRequestComplete_Parms OnDeleteSaveSlotRequestComplete_Parms;
	memcpy_s(&OnDeleteSaveSlotRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteSaveSlotRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnDeleteSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteSaveSlotRequestComplete, &OnDeleteSaveSlotRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::DeleteSaveSlot(struct FString McpId, struct FString SaveSlotId)
{
	static UFunction* pFnDeleteSaveSlot = nullptr;

	if (!pFnDeleteSaveSlot)
	{
		pFnDeleteSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.DeleteSaveSlot");

	}

	UMcpUserInventoryManager_execDeleteSaveSlot_Parms DeleteSaveSlot_Parms;
	memcpy_s(&DeleteSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&DeleteSaveSlot_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);

	this->ProcessEvent(pFnDeleteSaveSlot, &DeleteSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserInventoryManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCreateSaveSlotRequestComplete = nullptr;

	if (!pFnOnCreateSaveSlotRequestComplete)
	{
		pFnOnCreateSaveSlotRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete");

	}

	UMcpUserInventoryManager_execOnCreateSaveSlotRequestComplete_Parms OnCreateSaveSlotRequestComplete_Parms;
	memcpy_s(&OnCreateSaveSlotRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnCreateSaveSlotRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnCreateSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCreateSaveSlotRequestComplete, &OnCreateSaveSlotRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SaveSlotId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ParentSaveSlotId               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserInventoryManager::CreateSaveSlot(struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId)
{
	static UFunction* pFnCreateSaveSlot = nullptr;

	if (!pFnCreateSaveSlot)
	{
		pFnCreateSaveSlot = UFunction::FindFunction("Function IpDrv.McpUserInventoryManager.CreateSaveSlot");

	}

	UMcpUserInventoryManager_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy_s(&CreateSaveSlot_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&CreateSaveSlot_Parms.SaveSlotId, 0x10, &SaveSlotId, 0x10);
	memcpy_s(&CreateSaveSlot_Parms.ParentSaveSlotId, 0x10, &ParentSaveSlotId, 0x10);

	this->ProcessEvent(pFnCreateSaveSlot, &CreateSaveSlot_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnDeleteUserComplete(unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnDeleteUserComplete = nullptr;

	if (!pFnOnDeleteUserComplete)
	{
		pFnOnDeleteUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnDeleteUserComplete");

	}

	UMcpUserManagerBase_execOnDeleteUserComplete_Parms OnDeleteUserComplete_Parms;
	OnDeleteUserComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnDeleteUserComplete, &OnDeleteUserComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::DeleteUser(struct FString McpId)
{
	static UFunction* pFnDeleteUser = nullptr;

	if (!pFnDeleteUser)
	{
		pFnDeleteUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.DeleteUser");

	}

	UMcpUserManagerBase_execDeleteUser_Parms DeleteUser_Parms;
	memcpy_s(&DeleteUser_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnDeleteUser, &DeleteUser_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.GetUser
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpUserStatus          User                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserManagerBase::GetUser(struct FString McpId, struct FMcpUserStatus& User)
{
	static UFunction* pFnGetUser = nullptr;

	if (!pFnGetUser)
	{
		pFnGetUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.GetUser");

	}

	UMcpUserManagerBase_execGetUser_Parms GetUser_Parms;
	memcpy_s(&GetUser_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnGetUser, &GetUser_Parms, nullptr);
	memcpy_s(&GetUser_Parms.User, 0x68, &User, 0x68);

	return GetUser_Parms.ReturnValue;
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpUserStatus>  Users                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManagerBase::GetUsers(TArray<struct FMcpUserStatus>& Users)
{
	static UFunction* pFnGetUsers = nullptr;

	if (!pFnGetUsers)
	{
		pFnGetUsers = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.GetUsers");

	}

	UMcpUserManagerBase_execGetUsers_Parms GetUsers_Parms;

	this->ProcessEvent(pFnGetUsers, &GetUsers_Parms, nullptr);
	memcpy_s(&GetUsers_Parms.Users, 0x10, &Users, 0x10);
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnQueryUsersComplete(unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnQueryUsersComplete = nullptr;

	if (!pFnOnQueryUsersComplete)
	{
		pFnOnQueryUsersComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnQueryUsersComplete");

	}

	UMcpUserManagerBase_execOnQueryUsersComplete_Parms OnQueryUsersComplete_Parms;
	OnQueryUsersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUsersComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnQueryUsersComplete, &OnQueryUsersComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         McpIds                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManagerBase::QueryUsers(TArray<struct FString>& McpIds)
{
	static UFunction* pFnQueryUsers = nullptr;

	if (!pFnQueryUsers)
	{
		pFnQueryUsers = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.QueryUsers");

	}

	UMcpUserManagerBase_execQueryUsers_Parms QueryUsers_Parms;

	this->ProcessEvent(pFnQueryUsers, &QueryUsers_Parms, nullptr);
	memcpy_s(&QueryUsers_Parms.McpIds, 0x10, &McpIds, 0x10);
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldUpdateLastActive        (CPF_OptionalParm | CPF_Parm)

void UMcpUserManagerBase::QueryUser(struct FString McpId, unsigned long bShouldUpdateLastActive)
{
	static UFunction* pFnQueryUser = nullptr;

	if (!pFnQueryUser)
	{
		pFnQueryUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.QueryUser");

	}

	UMcpUserManagerBase_execQueryUser_Parms QueryUser_Parms;
	memcpy_s(&QueryUser_Parms.McpId, 0x10, &McpId, 0x10);
	QueryUser_Parms.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent(pFnQueryUser, &QueryUser_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Token                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnAuthenticateUserComplete(struct FString McpId, struct FString Token, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnAuthenticateUserComplete = nullptr;

	if (!pFnOnAuthenticateUserComplete)
	{
		pFnOnAuthenticateUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete");

	}

	UMcpUserManagerBase_execOnAuthenticateUserComplete_Parms OnAuthenticateUserComplete_Parms;
	memcpy_s(&OnAuthenticateUserComplete_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&OnAuthenticateUserComplete_Parms.Token, 0x10, &Token, 0x10);
	OnAuthenticateUserComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAuthenticateUserComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnAuthenticateUserComplete, &OnAuthenticateUserComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ClientSecret                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::AuthenticateUserMcp(struct FString McpId, struct FString ClientSecret, struct FString UDID)
{
	static UFunction* pFnAuthenticateUserMcp = nullptr;

	if (!pFnAuthenticateUserMcp)
	{
		pFnAuthenticateUserMcp = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.AuthenticateUserMcp");

	}

	UMcpUserManagerBase_execAuthenticateUserMcp_Parms AuthenticateUserMcp_Parms;
	memcpy_s(&AuthenticateUserMcp_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AuthenticateUserMcp_Parms.ClientSecret, 0x10, &ClientSecret, 0x10);
	memcpy_s(&AuthenticateUserMcp_Parms.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(pFnAuthenticateUserMcp, &AuthenticateUserMcp_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 FacebookToken                  (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::AuthenticateUserFacebook(struct FString FacebookId, struct FString FacebookToken, struct FString UDID)
{
	static UFunction* pFnAuthenticateUserFacebook = nullptr;

	if (!pFnAuthenticateUserFacebook)
	{
		pFnAuthenticateUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook");

	}

	UMcpUserManagerBase_execAuthenticateUserFacebook_Parms AuthenticateUserFacebook_Parms;
	memcpy_s(&AuthenticateUserFacebook_Parms.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Parms.FacebookToken, 0x10, &FacebookToken, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Parms.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(pFnAuthenticateUserFacebook, &AuthenticateUserFacebook_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnRegisterUserComplete(struct FString McpId, unsigned long bWasSuccessful, struct FString Error)
{
	static UFunction* pFnOnRegisterUserComplete = nullptr;

	if (!pFnOnRegisterUserComplete)
	{
		pFnOnRegisterUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnRegisterUserComplete");

	}

	UMcpUserManagerBase_execOnRegisterUserComplete_Parms OnRegisterUserComplete_Parms;
	memcpy_s(&OnRegisterUserComplete_Parms.McpId, 0x10, &McpId, 0x10);
	OnRegisterUserComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRegisterUserComplete_Parms.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(pFnOnRegisterUserComplete, &OnRegisterUserComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 FacebookAuthToken              (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::RegisterUserFacebook(struct FString FacebookId, struct FString FacebookAuthToken)
{
	static UFunction* pFnRegisterUserFacebook = nullptr;

	if (!pFnRegisterUserFacebook)
	{
		pFnRegisterUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserFacebook");

	}

	UMcpUserManagerBase_execRegisterUserFacebook_Parms RegisterUserFacebook_Parms;
	memcpy_s(&RegisterUserFacebook_Parms.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&RegisterUserFacebook_Parms.FacebookAuthToken, 0x10, &FacebookAuthToken, 0x10);

	this->ProcessEvent(pFnRegisterUserFacebook, &RegisterUserFacebook_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpUserManagerBase::RegisterUserGenerated()
{
	static UFunction* pFnRegisterUserGenerated = nullptr;

	if (!pFnRegisterUserGenerated)
	{
		pFnRegisterUserGenerated = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserGenerated");

	}

	UMcpUserManagerBase_execRegisterUserGenerated_Parms RegisterUserGenerated_Parms;

	this->ProcessEvent(pFnRegisterUserGenerated, &RegisterUserGenerated_Parms, nullptr);
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMcpUserManagerBase*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpUserManagerBase* UMcpUserManagerBase::CreateInstance()
{
	static UFunction* pFnCreateInstance = nullptr;

	if (!pFnCreateInstance)
	{
		pFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.CreateInstance");

	}

	UMcpUserManagerBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent(pFnCreateInstance, &CreateInstance_Parms, nullptr);

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeleteUserRequestComplete = nullptr;

	if (!pFnOnDeleteUserRequestComplete)
	{
		pFnOnDeleteUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnDeleteUserRequestComplete");

	}

	UMcpUserManager_execOnDeleteUserRequestComplete_Parms OnDeleteUserRequestComplete_Parms;
	memcpy_s(&OnDeleteUserRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnDeleteUserRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnDeleteUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeleteUserRequestComplete, &OnDeleteUserRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::DeleteUser(struct FString McpId)
{
	static UFunction* pFnDeleteUser = nullptr;

	if (!pFnDeleteUser)
	{
		pFnDeleteUser = UFunction::FindFunction("Function IpDrv.McpUserManager.DeleteUser");

	}

	UMcpUserManager_execDeleteUser_Parms DeleteUser_Parms;
	memcpy_s(&DeleteUser_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnDeleteUser, &DeleteUser_Parms, nullptr);
};

// Function IpDrv.McpUserManager.GetUser
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpUserStatus          User                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserManager::GetUser(struct FString McpId, struct FMcpUserStatus& User)
{
	static UFunction* pFnGetUser = nullptr;

	if (!pFnGetUser)
	{
		pFnGetUser = UFunction::FindFunction("Function IpDrv.McpUserManager.GetUser");

	}

	UMcpUserManager_execGetUser_Parms GetUser_Parms;
	memcpy_s(&GetUser_Parms.McpId, 0x10, &McpId, 0x10);

	this->ProcessEvent(pFnGetUser, &GetUser_Parms, nullptr);
	memcpy_s(&GetUser_Parms.User, 0x68, &User, 0x68);

	return GetUser_Parms.ReturnValue;
};

// Function IpDrv.McpUserManager.GetUsers
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FMcpUserStatus>  Users                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManager::GetUsers(TArray<struct FMcpUserStatus>& Users)
{
	static UFunction* pFnGetUsers = nullptr;

	if (!pFnGetUsers)
	{
		pFnGetUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.GetUsers");

	}

	UMcpUserManager_execGetUsers_Parms GetUsers_Parms;

	this->ProcessEvent(pFnGetUsers, &GetUsers_Parms, nullptr);
	memcpy_s(&GetUsers_Parms.Users, 0x10, &Users, 0x10);
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryUsersRequestComplete = nullptr;

	if (!pFnOnQueryUsersRequestComplete)
	{
		pFnOnQueryUsersRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnQueryUsersRequestComplete");

	}

	UMcpUserManager_execOnQueryUsersRequestComplete_Parms OnQueryUsersRequestComplete_Parms;
	memcpy_s(&OnQueryUsersRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryUsersRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryUsersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryUsersRequestComplete, &OnQueryUsersRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManager.ParseUsers
// [0x00080003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// struct FString                 JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::ParseUsers(struct FString JsonPayload)
{
	static UFunction* pFnParseUsers = nullptr;

	if (!pFnParseUsers)
	{
		pFnParseUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.ParseUsers");

	}

	UMcpUserManager_execParseUsers_Parms ParseUsers_Parms;
	memcpy_s(&ParseUsers_Parms.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(pFnParseUsers, &ParseUsers_Parms, nullptr);
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         McpIds                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManager::QueryUsers(TArray<struct FString>& McpIds)
{
	static UFunction* pFnQueryUsers = nullptr;

	if (!pFnQueryUsers)
	{
		pFnQueryUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.QueryUsers");

	}

	UMcpUserManager_execQueryUsers_Parms QueryUsers_Parms;

	this->ProcessEvent(pFnQueryUsers, &QueryUsers_Parms, nullptr);
	memcpy_s(&QueryUsers_Parms.McpIds, 0x10, &McpIds, 0x10);
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryUserRequestComplete = nullptr;

	if (!pFnOnQueryUserRequestComplete)
	{
		pFnOnQueryUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnQueryUserRequestComplete");

	}

	UMcpUserManager_execOnQueryUserRequestComplete_Parms OnQueryUserRequestComplete_Parms;
	memcpy_s(&OnQueryUserRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnQueryUserRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnQueryUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryUserRequestComplete, &OnQueryUserRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManager.QueryUser
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldUpdateLastActive        (CPF_OptionalParm | CPF_Parm)

void UMcpUserManager::QueryUser(struct FString McpId, unsigned long bShouldUpdateLastActive)
{
	static UFunction* pFnQueryUser = nullptr;

	if (!pFnQueryUser)
	{
		pFnQueryUser = UFunction::FindFunction("Function IpDrv.McpUserManager.QueryUser");

	}

	UMcpUserManager_execQueryUser_Parms QueryUser_Parms;
	memcpy_s(&QueryUser_Parms.McpId, 0x10, &McpId, 0x10);
	QueryUser_Parms.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent(pFnQueryUser, &QueryUser_Parms, nullptr);
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAuthenticateUserRequestComplete = nullptr;

	if (!pFnOnAuthenticateUserRequestComplete)
	{
		pFnOnAuthenticateUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete");

	}

	UMcpUserManager_execOnAuthenticateUserRequestComplete_Parms OnAuthenticateUserRequestComplete_Parms;
	memcpy_s(&OnAuthenticateUserRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnAuthenticateUserRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnAuthenticateUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAuthenticateUserRequestComplete, &OnAuthenticateUserRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 McpId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ClientSecret                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::AuthenticateUserMcp(struct FString McpId, struct FString ClientSecret, struct FString UDID)
{
	static UFunction* pFnAuthenticateUserMcp = nullptr;

	if (!pFnAuthenticateUserMcp)
	{
		pFnAuthenticateUserMcp = UFunction::FindFunction("Function IpDrv.McpUserManager.AuthenticateUserMcp");

	}

	UMcpUserManager_execAuthenticateUserMcp_Parms AuthenticateUserMcp_Parms;
	memcpy_s(&AuthenticateUserMcp_Parms.McpId, 0x10, &McpId, 0x10);
	memcpy_s(&AuthenticateUserMcp_Parms.ClientSecret, 0x10, &ClientSecret, 0x10);
	memcpy_s(&AuthenticateUserMcp_Parms.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(pFnAuthenticateUserMcp, &AuthenticateUserMcp_Parms, nullptr);
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 FacebookToken                  (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 UDID                           (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::AuthenticateUserFacebook(struct FString FacebookId, struct FString FacebookToken, struct FString UDID)
{
	static UFunction* pFnAuthenticateUserFacebook = nullptr;

	if (!pFnAuthenticateUserFacebook)
	{
		pFnAuthenticateUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManager.AuthenticateUserFacebook");

	}

	UMcpUserManager_execAuthenticateUserFacebook_Parms AuthenticateUserFacebook_Parms;
	memcpy_s(&AuthenticateUserFacebook_Parms.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Parms.FacebookToken, 0x10, &FacebookToken, 0x10);
	memcpy_s(&AuthenticateUserFacebook_Parms.UDID, 0x10, &UDID, 0x10);

	this->ProcessEvent(pFnAuthenticateUserFacebook, &AuthenticateUserFacebook_Parms, nullptr);
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterUserRequestComplete = nullptr;

	if (!pFnOnRegisterUserRequestComplete)
	{
		pFnOnRegisterUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnRegisterUserRequestComplete");

	}

	UMcpUserManager_execOnRegisterUserRequestComplete_Parms OnRegisterUserRequestComplete_Parms;
	memcpy_s(&OnRegisterUserRequestComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&OnRegisterUserRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnRegisterUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterUserRequestComplete, &OnRegisterUserRequestComplete_Parms, nullptr);
};

// Function IpDrv.McpUserManager.ParseUser
// [0x00080003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 JsonPayload                    (CPF_Parm | CPF_NeedCtorLink)

int UMcpUserManager::ParseUser(struct FString JsonPayload)
{
	static UFunction* pFnParseUser = nullptr;

	if (!pFnParseUser)
	{
		pFnParseUser = UFunction::FindFunction("Function IpDrv.McpUserManager.ParseUser");

	}

	UMcpUserManager_execParseUser_Parms ParseUser_Parms;
	memcpy_s(&ParseUser_Parms.JsonPayload, 0x10, &JsonPayload, 0x10);

	this->ProcessEvent(pFnParseUser, &ParseUser_Parms, nullptr);

	return ParseUser_Parms.ReturnValue;
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 FacebookAuthToken              (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::RegisterUserFacebook(struct FString FacebookId, struct FString FacebookAuthToken)
{
	static UFunction* pFnRegisterUserFacebook = nullptr;

	if (!pFnRegisterUserFacebook)
	{
		pFnRegisterUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserFacebook");

	}

	UMcpUserManager_execRegisterUserFacebook_Parms RegisterUserFacebook_Parms;
	memcpy_s(&RegisterUserFacebook_Parms.FacebookId, 0x10, &FacebookId, 0x10);
	memcpy_s(&RegisterUserFacebook_Parms.FacebookAuthToken, 0x10, &FacebookAuthToken, 0x10);

	this->ProcessEvent(pFnRegisterUserFacebook, &RegisterUserFacebook_Parms, nullptr);
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMcpUserManager::RegisterUserGenerated()
{
	static UFunction* pFnRegisterUserGenerated = nullptr;

	if (!pFnRegisterUserGenerated)
	{
		pFnRegisterUserGenerated = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserGenerated");

	}

	UMcpUserManager_execRegisterUserGenerated_Parms RegisterUserGenerated_Parms;

	this->ProcessEvent(pFnRegisterUserGenerated, &RegisterUserGenerated_Parms, nullptr);
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AWebConnection::IsHanging()
{
	static UFunction* pFnIsHanging = nullptr;

	if (!pFnIsHanging)
	{
		pFnIsHanging = UFunction::FindFunction("Function IpDrv.WebConnection.IsHanging");

	}

	AWebConnection_execIsHanging_Parms IsHanging_Parms;

	this->ProcessEvent(pFnIsHanging, &IsHanging_Parms, nullptr);

	return IsHanging_Parms.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::Cleanup()
{
	static UFunction* pFnCleanup = nullptr;

	if (!pFnCleanup)
	{
		pFnCleanup = UFunction::FindFunction("Function IpDrv.WebConnection.Cleanup");

	}

	AWebConnection_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent(pFnCleanup, &Cleanup_Parms, nullptr);
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::CheckRawBytes()
{
	static UFunction* pFnCheckRawBytes = nullptr;

	if (!pFnCheckRawBytes)
	{
		pFnCheckRawBytes = UFunction::FindFunction("Function IpDrv.WebConnection.CheckRawBytes");

	}

	AWebConnection_execCheckRawBytes_Parms CheckRawBytes_Parms;

	this->ProcessEvent(pFnCheckRawBytes, &CheckRawBytes_Parms, nullptr);
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::EndOfHeaders()
{
	static UFunction* pFnEndOfHeaders = nullptr;

	if (!pFnEndOfHeaders)
	{
		pFnEndOfHeaders = UFunction::FindFunction("Function IpDrv.WebConnection.EndOfHeaders");

	}

	AWebConnection_execEndOfHeaders_Parms EndOfHeaders_Parms;

	this->ProcessEvent(pFnEndOfHeaders, &EndOfHeaders_Parms, nullptr);
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::CreateResponseObject()
{
	static UFunction* pFnCreateResponseObject = nullptr;

	if (!pFnCreateResponseObject)
	{
		pFnCreateResponseObject = UFunction::FindFunction("Function IpDrv.WebConnection.CreateResponseObject");

	}

	AWebConnection_execCreateResponseObject_Parms CreateResponseObject_Parms;

	this->ProcessEvent(pFnCreateResponseObject, &CreateResponseObject_Parms, nullptr);
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessPost(struct FString S)
{
	static UFunction* pFnProcessPost = nullptr;

	if (!pFnProcessPost)
	{
		pFnProcessPost = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessPost");

	}

	AWebConnection_execProcessPost_Parms ProcessPost_Parms;
	memcpy_s(&ProcessPost_Parms.S, 0x10, &S, 0x10);

	this->ProcessEvent(pFnProcessPost, &ProcessPost_Parms, nullptr);
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessGet(struct FString S)
{
	static UFunction* pFnProcessGet = nullptr;

	if (!pFnProcessGet)
	{
		pFnProcessGet = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessGet");

	}

	AWebConnection_execProcessGet_Parms ProcessGet_Parms;
	memcpy_s(&ProcessGet_Parms.S, 0x10, &S, 0x10);

	this->ProcessEvent(pFnProcessGet, &ProcessGet_Parms, nullptr);
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessHead(struct FString S)
{
	static UFunction* pFnProcessHead = nullptr;

	if (!pFnProcessHead)
	{
		pFnProcessHead = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessHead");

	}

	AWebConnection_execProcessHead_Parms ProcessHead_Parms;
	memcpy_s(&ProcessHead_Parms.S, 0x10, &S, 0x10);

	this->ProcessEvent(pFnProcessHead, &ProcessHead_Parms, nullptr);
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ReceivedLine(struct FString S)
{
	static UFunction* pFnReceivedLine = nullptr;

	if (!pFnReceivedLine)
	{
		pFnReceivedLine = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedLine");

	}

	AWebConnection_execReceivedLine_Parms ReceivedLine_Parms;
	memcpy_s(&ReceivedLine_Parms.S, 0x10, &S, 0x10);

	this->ProcessEvent(pFnReceivedLine, &ReceivedLine_Parms, nullptr);
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Text                           (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::eventReceivedText(struct FString Text)
{
	static UFunction* pFnReceivedText = nullptr;

	if (!pFnReceivedText)
	{
		pFnReceivedText = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedText");

	}

	AWebConnection_eventReceivedText_Parms ReceivedText_Parms;
	memcpy_s(&ReceivedText_Parms.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(pFnReceivedText, &ReceivedText_Parms, nullptr);
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::eventTimer()
{
	static UFunction* pFnTimer = nullptr;

	if (!pFnTimer)
	{
		pFnTimer = UFunction::FindFunction("Function IpDrv.WebConnection.Timer");

	}

	AWebConnection_eventTimer_Parms Timer_Parms;

	this->ProcessEvent(pFnTimer, &Timer_Parms, nullptr);
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::eventClosed()
{
	static UFunction* pFnClosed = nullptr;

	if (!pFnClosed)
	{
		pFnClosed = UFunction::FindFunction("Function IpDrv.WebConnection.Closed");

	}

	AWebConnection_eventClosed_Parms Closed_Parms;

	this->ProcessEvent(pFnClosed, &Closed_Parms, nullptr);
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AWebConnection::eventAccepted()
{
	static UFunction* pFnAccepted = nullptr;

	if (!pFnAccepted)
	{
		pFnAccepted = UFunction::FindFunction("Function IpDrv.WebConnection.Accepted");

	}

	AWebConnection_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent(pFnAccepted, &Accepted_Parms, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
