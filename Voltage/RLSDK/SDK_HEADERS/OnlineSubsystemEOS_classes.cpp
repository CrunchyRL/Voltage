/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.cpp
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

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::ManuallyTickEOSPlatform()
{
	static UFunction* pFnManuallyTickEOSPlatform = nullptr;

	if (!pFnManuallyTickEOSPlatform)
	{
		pFnManuallyTickEOSPlatform = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform");

	}

	UOnlineSubsystemEOS_execManuallyTickEOSPlatform_Parms ManuallyTickEOSPlatform_Parms;

	pFnManuallyTickEOSPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnManuallyTickEOSPlatform, &ManuallyTickEOSPlatform_Parms, nullptr);

	pFnManuallyTickEOSPlatform->FunctionFlags |= 0x400;

	return ManuallyTickEOSPlatform_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int                            Price                          (CPF_Parm)

struct FString UOnlineSubsystemEOS::eventFormatCurrency(struct FString Currency, int Price)
{
	static UFunction* pFnFormatCurrency = nullptr;

	if (!pFnFormatCurrency)
	{
		pFnFormatCurrency = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency");

	}

	UOnlineSubsystemEOS_eventFormatCurrency_Parms FormatCurrency_Parms;
	memcpy_s(&FormatCurrency_Parms.Currency, 0x10, &Currency, 0x10);
	memcpy_s(&FormatCurrency_Parms.Price, 0x4, &Price, 0x4);

	this->ProcessEvent(pFnFormatCurrency, &FormatCurrency_Parms, nullptr);

	return FormatCurrency_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* pFnClearMicroTxnResponseDelegate = nullptr;

	if (!pFnClearMicroTxnResponseDelegate)
	{
		pFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate");

	}

	UOnlineSubsystemEOS_execClearMicroTxnResponseDelegate_Parms ClearMicroTxnResponseDelegate_Parms;
	memcpy_s(&ClearMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(pFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* pFnAddMicroTxnResponseDelegate = nullptr;

	if (!pFnAddMicroTxnResponseDelegate)
	{
		pFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate");

	}

	UOnlineSubsystemEOS_execAddMicroTxnResponseDelegate_Parms AddMicroTxnResponseDelegate_Parms;
	memcpy_s(&AddMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(pFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* pFnGetAppPriceInfo = nullptr;

	if (!pFnGetAppPriceInfo)
	{
		pFnGetAppPriceInfo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo");

	}

	UOnlineSubsystemEOS_execGetAppPriceInfo_Parms GetAppPriceInfo_Parms;
	memcpy_s(&GetAppPriceInfo_Parms.Callback, 0x18, &Callback, 0x18);

	pFnGetAppPriceInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAppPriceInfo, &GetAppPriceInfo_Parms, nullptr);

	pFnGetAppPriceInfo->FunctionFlags |= 0x400;
	memcpy_s(&GetAppPriceInfo_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAppPriceInfo_Parms.AppNames, 0x10, &AppNames, 0x10);

	return GetAppPriceInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::HandleBootMessage()
{
	static UFunction* pFnHandleBootMessage = nullptr;

	if (!pFnHandleBootMessage)
	{
		pFnHandleBootMessage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage");

	}

	UOnlineSubsystemEOS_execHandleBootMessage_Parms HandleBootMessage_Parms;

	pFnHandleBootMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHandleBootMessage, &HandleBootMessage_Parms, nullptr);

	pFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::GetOverlayEnabled()
{
	static UFunction* pFnGetOverlayEnabled = nullptr;

	if (!pFnGetOverlayEnabled)
	{
		pFnGetOverlayEnabled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled");

	}

	UOnlineSubsystemEOS_execGetOverlayEnabled_Parms GetOverlayEnabled_Parms;

	this->ProcessEvent(pFnGetOverlayEnabled, &GetOverlayEnabled_Parms, nullptr);

	return GetOverlayEnabled_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::RefreshNetworkErrorToggle()
{
	static UFunction* pFnRefreshNetworkErrorToggle = nullptr;

	if (!pFnRefreshNetworkErrorToggle)
	{
		pFnRefreshNetworkErrorToggle = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle");

	}

	UOnlineSubsystemEOS_execRefreshNetworkErrorToggle_Parms RefreshNetworkErrorToggle_Parms;

	this->ProcessEvent(pFnRefreshNetworkErrorToggle, &RefreshNetworkErrorToggle_Parms, nullptr);

	return RefreshNetworkErrorToggle_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* pFnClearUserRestoredDelegate = nullptr;

	if (!pFnClearUserRestoredDelegate)
	{
		pFnClearUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate");

	}

	UOnlineSubsystemEOS_execClearUserRestoredDelegate_Parms ClearUserRestoredDelegate_Parms;
	memcpy_s(&ClearUserRestoredDelegate_Parms.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(pFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* pFnAddUserRestoredDelegate = nullptr;

	if (!pFnAddUserRestoredDelegate)
	{
		pFnAddUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate");

	}

	UOnlineSubsystemEOS_execAddUserRestoredDelegate_Parms AddUserRestoredDelegate_Parms;
	memcpy_s(&AddUserRestoredDelegate_Parms.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(pFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::OnUserRestored(unsigned char ControllerId)
{
	static UFunction* pFnOnUserRestored = nullptr;

	if (!pFnOnUserRestored)
	{
		pFnOnUserRestored = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored");

	}

	UOnlineSubsystemEOS_execOnUserRestored_Parms OnUserRestored_Parms;
	OnUserRestored_Parms.ControllerId = ControllerId;

	this->ProcessEvent(pFnOnUserRestored, &OnUserRestored_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* pFnClearUserOrphanedDelegate = nullptr;

	if (!pFnClearUserOrphanedDelegate)
	{
		pFnClearUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate");

	}

	UOnlineSubsystemEOS_execClearUserOrphanedDelegate_Parms ClearUserOrphanedDelegate_Parms;
	memcpy_s(&ClearUserOrphanedDelegate_Parms.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(pFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* pFnAddUserOrphanedDelegate = nullptr;

	if (!pFnAddUserOrphanedDelegate)
	{
		pFnAddUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate");

	}

	UOnlineSubsystemEOS_execAddUserOrphanedDelegate_Parms AddUserOrphanedDelegate_Parms;
	memcpy_s(&AddUserOrphanedDelegate_Parms.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(pFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::OnUserOrphaned(unsigned char ControllerId)
{
	static UFunction* pFnOnUserOrphaned = nullptr;

	if (!pFnOnUserOrphaned)
	{
		pFnOnUserOrphaned = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned");

	}

	UOnlineSubsystemEOS_execOnUserOrphaned_Parms OnUserOrphaned_Parms;
	OnUserOrphaned_Parms.ControllerId = ControllerId;

	this->ProcessEvent(pFnOnUserOrphaned, &OnUserOrphaned_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate)
{
	static UFunction* pFnOpenStoreForItemsAsync = nullptr;

	if (!pFnOpenStoreForItemsAsync)
	{
		pFnOpenStoreForItemsAsync = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync");

	}

	UOnlineSubsystemEOS_execOpenStoreForItemsAsync_Parms OpenStoreForItemsAsync_Parms;
	OpenStoreForItemsAsync_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OpenStoreForItemsAsync_Parms.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenStoreForItemsAsync_Parms.OnStorePurchaseCompleteDelegate, 0x18, &OnStorePurchaseCompleteDelegate, 0x18);

	this->ProcessEvent(pFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnStorePurchaseCompleteDelegate()
{
	static UFunction* pFnOnStorePurchaseCompleteDelegate = nullptr;

	if (!pFnOnStorePurchaseCompleteDelegate)
	{
		pFnOnStorePurchaseCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate");

	}

	UOnlineSubsystemEOS_execOnStorePurchaseCompleteDelegate_Parms OnStorePurchaseCompleteDelegate_Parms;

	this->ProcessEvent(pFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets)
{
	static UFunction* pFnOpenStoreForItems = nullptr;

	if (!pFnOpenStoreForItems)
	{
		pFnOpenStoreForItems = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems");

	}

	UOnlineSubsystemEOS_execOpenStoreForItems_Parms OpenStoreForItems_Parms;
	OpenStoreForItems_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OpenStoreForItems_Parms.Targets, 0x10, &Targets, 0x10);

	pFnOpenStoreForItems->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOpenStoreForItems, &OpenStoreForItems_Parms, nullptr);

	pFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemEOS::OpenStoreForDLC(unsigned char LocalUserNum, struct FName DLC)
{
	static UFunction* pFnOpenStoreForDLC = nullptr;

	if (!pFnOpenStoreForDLC)
	{
		pFnOpenStoreForDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC");

	}

	UOnlineSubsystemEOS_execOpenStoreForDLC_Parms OpenStoreForDLC_Parms;
	OpenStoreForDLC_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OpenStoreForDLC_Parms.DLC, 0x8, &DLC, 0x8);

	this->ProcessEvent(pFnOpenStoreForDLC, &OpenStoreForDLC_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemEOS::OpenErrorDialog(unsigned char LocalUserNum, unsigned char ErrorCode)
{
	static UFunction* pFnOpenErrorDialog = nullptr;

	if (!pFnOpenErrorDialog)
	{
		pFnOpenErrorDialog = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog");

	}

	UOnlineSubsystemEOS_execOpenErrorDialog_Parms OpenErrorDialog_Parms;
	OpenErrorDialog_Parms.LocalUserNum = LocalUserNum;
	OpenErrorDialog_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent(pFnOpenErrorDialog, &OpenErrorDialog_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  DisplayMode                    (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            ServiceLabel                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemEOS::OpenPS4DisplayMode(unsigned char LocalUserNum, unsigned char DisplayMode, TArray<struct FString> Targets, int ServiceLabel)
{
	static UFunction* pFnOpenPS4DisplayMode = nullptr;

	if (!pFnOpenPS4DisplayMode)
	{
		pFnOpenPS4DisplayMode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode");

	}

	UOnlineSubsystemEOS_execOpenPS4DisplayMode_Parms OpenPS4DisplayMode_Parms;
	OpenPS4DisplayMode_Parms.LocalUserNum = LocalUserNum;
	OpenPS4DisplayMode_Parms.DisplayMode = DisplayMode;
	memcpy_s(&OpenPS4DisplayMode_Parms.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenPS4DisplayMode_Parms.ServiceLabel, 0x4, &ServiceLabel, 0x4);

	this->ProcessEvent(pFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)

void UOnlineSubsystemEOS::ResetControllerColor(int ControllerId)
{
	static UFunction* pFnResetControllerColor = nullptr;

	if (!pFnResetControllerColor)
	{
		pFnResetControllerColor = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor");

	}

	UOnlineSubsystemEOS_execResetControllerColor_Parms ResetControllerColor_Parms;
	memcpy_s(&ResetControllerColor_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnResetControllerColor, &ResetControllerColor_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemEOS::SetControllerColor(int ControllerId, struct FColor NewColor)
{
	static UFunction* pFnSetControllerColor = nullptr;

	if (!pFnSetControllerColor)
	{
		pFnSetControllerColor = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor");

	}

	UOnlineSubsystemEOS_execSetControllerColor_Parms SetControllerColor_Parms;
	memcpy_s(&SetControllerColor_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerColor_Parms.NewColor, 0x4, &NewColor, 0x4);

	this->ProcessEvent(pFnSetControllerColor, &SetControllerColor_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::InitializeTrophyAPI()
{
	static UFunction* pFnInitializeTrophyAPI = nullptr;

	if (!pFnInitializeTrophyAPI)
	{
		pFnInitializeTrophyAPI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI");

	}

	UOnlineSubsystemEOS_execInitializeTrophyAPI_Parms InitializeTrophyAPI_Parms;

	this->ProcessEvent(pFnInitializeTrophyAPI, &InitializeTrophyAPI_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::AnyPlayerChatRestricted()
{
	static UFunction* pFnAnyPlayerChatRestricted = nullptr;

	if (!pFnAnyPlayerChatRestricted)
	{
		pFnAnyPlayerChatRestricted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted");

	}

	UOnlineSubsystemEOS_execAnyPlayerChatRestricted_Parms AnyPlayerChatRestricted_Parms;

	this->ProcessEvent(pFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Parms, nullptr);

	return AnyPlayerChatRestricted_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearUnlockedDLCChangeDelegate = nullptr;

	if (!pFnClearUnlockedDLCChangeDelegate)
	{
		pFnClearUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate");

	}

	UOnlineSubsystemEOS_execClearUnlockedDLCChangeDelegate_Parms ClearUnlockedDLCChangeDelegate_Parms;
	memcpy_s(&ClearUnlockedDLCChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddUnlockedDLCChangeDelegate = nullptr;

	if (!pFnAddUnlockedDLCChangeDelegate)
	{
		pFnAddUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate");

	}

	UOnlineSubsystemEOS_execAddUnlockedDLCChangeDelegate_Parms AddUnlockedDLCChangeDelegate_Parms;
	memcpy_s(&AddUnlockedDLCChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemEOS::GetUnlockedDLC()
{
	static UFunction* pFnGetUnlockedDLC = nullptr;

	if (!pFnGetUnlockedDLC)
	{
		pFnGetUnlockedDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC");

	}

	UOnlineSubsystemEOS_execGetUnlockedDLC_Parms GetUnlockedDLC_Parms;

	this->ProcessEvent(pFnGetUnlockedDLC, &GetUnlockedDLC_Parms, nullptr);

	return GetUnlockedDLC_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnUnlockedDLCChange()
{
	static UFunction* pFnOnUnlockedDLCChange = nullptr;

	if (!pFnOnUnlockedDLCChange)
	{
		pFnOnUnlockedDLCChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange");

	}

	UOnlineSubsystemEOS_execOnUnlockedDLCChange_Parms OnUnlockedDLCChange_Parms;

	this->ProcessEvent(pFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            CurrentPlayerCount             (CPF_Parm)
// int                            numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemEOS::UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers)
{
	static UFunction* pFnUpdateSessionStatusFromPlayers = nullptr;

	if (!pFnUpdateSessionStatusFromPlayers)
	{
		pFnUpdateSessionStatusFromPlayers = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers");

	}

	UOnlineSubsystemEOS_execUpdateSessionStatusFromPlayers_Parms UpdateSessionStatusFromPlayers_Parms;
	memcpy_s(&UpdateSessionStatusFromPlayers_Parms.CurrentPlayerCount, 0x4, &CurrentPlayerCount, 0x4);
	memcpy_s(&UpdateSessionStatusFromPlayers_Parms.numBotPlayers, 0x4, &numBotPlayers, 0x4);

	this->ProcessEvent(pFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearErrorDialogClosedDelegate = nullptr;

	if (!pFnClearErrorDialogClosedDelegate)
	{
		pFnClearErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate");

	}

	UOnlineSubsystemEOS_execClearErrorDialogClosedDelegate_Parms ClearErrorDialogClosedDelegate_Parms;
	memcpy_s(&ClearErrorDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddErrorDialogClosedDelegate = nullptr;

	if (!pFnAddErrorDialogClosedDelegate)
	{
		pFnAddErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate");

	}

	UOnlineSubsystemEOS_execAddErrorDialogClosedDelegate_Parms AddErrorDialogClosedDelegate_Parms;
	memcpy_s(&AddErrorDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::OnErrorDialogClosed(int LocalUserNum)
{
	static UFunction* pFnOnErrorDialogClosed = nullptr;

	if (!pFnOnErrorDialogClosed)
	{
		pFnOnErrorDialogClosed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed");

	}

	UOnlineSubsystemEOS_execOnErrorDialogClosed_Parms OnErrorDialogClosed_Parms;
	memcpy_s(&OnErrorDialogClosed_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	this->ProcessEvent(pFnOnErrorDialogClosed, &OnErrorDialogClosed_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearCommerceDialogClosedDelegate = nullptr;

	if (!pFnClearCommerceDialogClosedDelegate)
	{
		pFnClearCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate");

	}

	UOnlineSubsystemEOS_execClearCommerceDialogClosedDelegate_Parms ClearCommerceDialogClosedDelegate_Parms;
	memcpy_s(&ClearCommerceDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddCommerceDialogClosedDelegate = nullptr;

	if (!pFnAddCommerceDialogClosedDelegate)
	{
		pFnAddCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate");

	}

	UOnlineSubsystemEOS_execAddCommerceDialogClosedDelegate_Parms AddCommerceDialogClosedDelegate_Parms;
	memcpy_s(&AddCommerceDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnCommerceDialogClosed()
{
	static UFunction* pFnOnCommerceDialogClosed = nullptr;

	if (!pFnOnCommerceDialogClosed)
	{
		pFnOnCommerceDialogClosed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed");

	}

	UOnlineSubsystemEOS_execOnCommerceDialogClosed_Parms OnCommerceDialogClosed_Parms;

	this->ProcessEvent(pFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UOnlineSubsystemEOS::GetCurrentConnectionStatus()
{
	static UFunction* pFnGetCurrentConnectionStatus = nullptr;

	if (!pFnGetCurrentConnectionStatus)
	{
		pFnGetCurrentConnectionStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus");

	}

	UOnlineSubsystemEOS_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent(pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, nullptr);

	return GetCurrentConnectionStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearCloseKickPlayerDialogDelegate = nullptr;

	if (!pFnClearCloseKickPlayerDialogDelegate)
	{
		pFnClearCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate");

	}

	UOnlineSubsystemEOS_execClearCloseKickPlayerDialogDelegate_Parms ClearCloseKickPlayerDialogDelegate_Parms;
	memcpy_s(&ClearCloseKickPlayerDialogDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddCloseKickPlayerDialogDelegate = nullptr;

	if (!pFnAddCloseKickPlayerDialogDelegate)
	{
		pFnAddCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate");

	}

	UOnlineSubsystemEOS_execAddCloseKickPlayerDialogDelegate_Parms AddCloseKickPlayerDialogDelegate_Parms;
	memcpy_s(&AddCloseKickPlayerDialogDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnCloseKickPlayerDialog()
{
	static UFunction* pFnOnCloseKickPlayerDialog = nullptr;

	if (!pFnOnCloseKickPlayerDialog)
	{
		pFnOnCloseKickPlayerDialog = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog");

	}

	UOnlineSubsystemEOS_execOnCloseKickPlayerDialog_Parms OnCloseKickPlayerDialog_Parms;

	this->ProcessEvent(pFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsTalking                     (CPF_Parm)

void UOnlineSubsystemEOS::OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking)
{
	static UFunction* pFnOnPlayerTalkingStateChange = nullptr;

	if (!pFnOnPlayerTalkingStateChange)
	{
		pFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange");

	}

	UOnlineSubsystemEOS_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy_s(&OnPlayerTalkingStateChange_Parms.Player, 0x48, &Player, 0x48);
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent(pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineSubsystemEOS::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* pFnSetVoiceReceiveVolume = nullptr;

	if (!pFnSetVoiceReceiveVolume)
	{
		pFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume");

	}

	UOnlineSubsystemEOS_execSetVoiceReceiveVolume_Parms SetVoiceReceiveVolume_Parms;
	memcpy_s(&SetVoiceReceiveVolume_Parms.VoiceVolume, 0x4, &VoiceVolume, 0x4);

	this->ProcessEvent(pFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Parms, nullptr);

	return SetVoiceReceiveVolume_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)

int UOnlineSubsystemEOS::GetDLCPurchaseTime(struct FName AppName)
{
	static UFunction* pFnGetDLCPurchaseTime = nullptr;

	if (!pFnGetDLCPurchaseTime)
	{
		pFnGetDLCPurchaseTime = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime");

	}

	UOnlineSubsystemEOS_execGetDLCPurchaseTime_Parms GetDLCPurchaseTime_Parms;
	memcpy_s(&GetDLCPurchaseTime_Parms.AppName, 0x8, &AppName, 0x8);

	this->ProcessEvent(pFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Parms, nullptr);

	return GetDLCPurchaseTime_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ProductKey                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::SaveKey(struct FString ProductKey)
{
	static UFunction* pFnSaveKey = nullptr;

	if (!pFnSaveKey)
	{
		pFnSaveKey = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey");

	}

	UOnlineSubsystemEOS_execSaveKey_Parms SaveKey_Parms;
	memcpy_s(&SaveKey_Parms.ProductKey, 0x10, &ProductKey, 0x10);

	this->ProcessEvent(pFnSaveKey, &SaveKey_Parms, nullptr);

	return SaveKey_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FString>         Accounts                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetLocalAccountNames(TArray<struct FString>& Accounts)
{
	static UFunction* pFnGetLocalAccountNames = nullptr;

	if (!pFnGetLocalAccountNames)
	{
		pFnGetLocalAccountNames = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames");

	}

	UOnlineSubsystemEOS_execGetLocalAccountNames_Parms GetLocalAccountNames_Parms;

	this->ProcessEvent(pFnGetLocalAccountNames, &GetLocalAccountNames_Parms, nullptr);
	memcpy_s(&GetLocalAccountNames_Parms.Accounts, 0x10, &Accounts, 0x10);

	return GetLocalAccountNames_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Username                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::DeleteLocalAccount(struct FString Username, struct FString Password)
{
	static UFunction* pFnDeleteLocalAccount = nullptr;

	if (!pFnDeleteLocalAccount)
	{
		pFnDeleteLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount");

	}

	UOnlineSubsystemEOS_execDeleteLocalAccount_Parms DeleteLocalAccount_Parms;
	memcpy_s(&DeleteLocalAccount_Parms.Username, 0x10, &Username, 0x10);
	memcpy_s(&DeleteLocalAccount_Parms.Password, 0x10, &Password, 0x10);

	this->ProcessEvent(pFnDeleteLocalAccount, &DeleteLocalAccount_Parms, nullptr);

	return DeleteLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 NewUserName                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 OldUserName                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RenameLocalAccount(struct FString NewUserName, struct FString OldUserName, struct FString Password)
{
	static UFunction* pFnRenameLocalAccount = nullptr;

	if (!pFnRenameLocalAccount)
	{
		pFnRenameLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount");

	}

	UOnlineSubsystemEOS_execRenameLocalAccount_Parms RenameLocalAccount_Parms;
	memcpy_s(&RenameLocalAccount_Parms.NewUserName, 0x10, &NewUserName, 0x10);
	memcpy_s(&RenameLocalAccount_Parms.OldUserName, 0x10, &OldUserName, 0x10);
	memcpy_s(&RenameLocalAccount_Parms.Password, 0x10, &Password, 0x10);

	this->ProcessEvent(pFnRenameLocalAccount, &RenameLocalAccount_Parms, nullptr);

	return RenameLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Username                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::CreateLocalAccount(struct FString Username, struct FString Password)
{
	static UFunction* pFnCreateLocalAccount = nullptr;

	if (!pFnCreateLocalAccount)
	{
		pFnCreateLocalAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount");

	}

	UOnlineSubsystemEOS_execCreateLocalAccount_Parms CreateLocalAccount_Parms;
	memcpy_s(&CreateLocalAccount_Parms.Username, 0x10, &Username, 0x10);
	memcpy_s(&CreateLocalAccount_Parms.Password, 0x10, &Password, 0x10);

	this->ProcessEvent(pFnCreateLocalAccount, &CreateLocalAccount_Parms, nullptr);

	return CreateLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* pFnClearCreateOnlineAccountCompletedDelegate = nullptr;

	if (!pFnClearCreateOnlineAccountCompletedDelegate)
	{
		pFnClearCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate");

	}

	UOnlineSubsystemEOS_execClearCreateOnlineAccountCompletedDelegate_Parms ClearCreateOnlineAccountCompletedDelegate_Parms;
	memcpy_s(&ClearCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, 0x18, &AccountCreateDelegate, 0x18);

	this->ProcessEvent(pFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* pFnAddCreateOnlineAccountCompletedDelegate = nullptr;

	if (!pFnAddCreateOnlineAccountCompletedDelegate)
	{
		pFnAddCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate");

	}

	UOnlineSubsystemEOS_execAddCreateOnlineAccountCompletedDelegate_Parms AddCreateOnlineAccountCompletedDelegate_Parms;
	memcpy_s(&AddCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, 0x18, &AccountCreateDelegate, 0x18);

	this->ProcessEvent(pFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ErrorStatus                    (CPF_Parm)

void UOnlineSubsystemEOS::OnCreateOnlineAccountCompleted(unsigned char ErrorStatus)
{
	static UFunction* pFnOnCreateOnlineAccountCompleted = nullptr;

	if (!pFnOnCreateOnlineAccountCompleted)
	{
		pFnOnCreateOnlineAccountCompleted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted");

	}

	UOnlineSubsystemEOS_execOnCreateOnlineAccountCompleted_Parms OnCreateOnlineAccountCompleted_Parms;
	OnCreateOnlineAccountCompleted_Parms.ErrorStatus = ErrorStatus;

	this->ProcessEvent(pFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Username                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 EmailAddress                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ProductKey                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::CreateOnlineAccount(struct FString Username, struct FString Password, struct FString EmailAddress, struct FString ProductKey)
{
	static UFunction* pFnCreateOnlineAccount = nullptr;

	if (!pFnCreateOnlineAccount)
	{
		pFnCreateOnlineAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount");

	}

	UOnlineSubsystemEOS_execCreateOnlineAccount_Parms CreateOnlineAccount_Parms;
	memcpy_s(&CreateOnlineAccount_Parms.Username, 0x10, &Username, 0x10);
	memcpy_s(&CreateOnlineAccount_Parms.Password, 0x10, &Password, 0x10);
	memcpy_s(&CreateOnlineAccount_Parms.EmailAddress, 0x10, &EmailAddress, 0x10);
	memcpy_s(&CreateOnlineAccount_Parms.ProductKey, 0x10, &ProductKey, 0x10);

	this->ProcessEvent(pFnCreateOnlineAccount, &CreateOnlineAccount_Parms, nullptr);

	return CreateOnlineAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::IsKeyValid()
{
	static UFunction* pFnIsKeyValid = nullptr;

	if (!pFnIsKeyValid)
	{
		pFnIsKeyValid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid");

	}

	UOnlineSubsystemEOS_execIsKeyValid_Parms IsKeyValid_Parms;

	this->ProcessEvent(pFnIsKeyValid, &IsKeyValid_Parms, nullptr);

	return IsKeyValid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = nullptr;

	if (!pFnClearStorageDeviceChangeDelegate)
	{
		pFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate");

	}

	UOnlineSubsystemEOS_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy_s(&ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = nullptr;

	if (!pFnAddStorageDeviceChangeDelegate)
	{
		pFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate");

	}

	UOnlineSubsystemEOS_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy_s(&AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnStorageDeviceChange()
{
	static UFunction* pFnOnStorageDeviceChange = nullptr;

	if (!pFnOnStorageDeviceChange)
	{
		pFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange");

	}

	UOnlineSubsystemEOS_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent(pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UOnlineSubsystemEOS::GetNATType()
{
	static UFunction* pFnGetNATType = nullptr;

	if (!pFnGetNATType)
	{
		pFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType");

	}

	UOnlineSubsystemEOS_execGetNATType_Parms GetNATType_Parms;

	this->ProcessEvent(pFnGetNATType, &GetNATType_Parms, nullptr);

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = nullptr;

	if (!pFnClearConnectionStatusChangeDelegate)
	{
		pFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate");

	}

	UOnlineSubsystemEOS_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy_s(&ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = nullptr;

	if (!pFnAddConnectionStatusChangeDelegate)
	{
		pFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate");

	}

	UOnlineSubsystemEOS_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy_s(&AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemEOS::OnConnectionStatusChange(unsigned char ConnectionStatus)
{
	static UFunction* pFnOnConnectionStatusChange = nullptr;

	if (!pFnOnConnectionStatusChange)
	{
		pFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange");

	}

	UOnlineSubsystemEOS_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent(pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            ControllerId                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsControllerConnected(int ControllerId)
{
	static UFunction* pFnIsControllerConnected = nullptr;

	if (!pFnIsControllerConnected)
	{
		pFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected");

	}

	UOnlineSubsystemEOS_execIsControllerConnected_Parms IsControllerConnected_Parms;
	memcpy_s(&IsControllerConnected_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnIsControllerConnected, &IsControllerConnected_Parms, nullptr);

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* pFnClearControllerChangeDelegate = nullptr;

	if (!pFnClearControllerChangeDelegate)
	{
		pFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate");

	}

	UOnlineSubsystemEOS_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy_s(&ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* pFnAddControllerChangeDelegate = nullptr;

	if (!pFnAddControllerChangeDelegate)
	{
		pFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate");

	}

	UOnlineSubsystemEOS_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy_s(&AddControllerChangeDelegate_Parms.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemEOS::OnControllerChange(int ControllerId, unsigned long bIsConnected)
{
	static UFunction* pFnOnControllerChange = nullptr;

	if (!pFnOnControllerChange)
	{
		pFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange");

	}

	UOnlineSubsystemEOS_execOnControllerChange_Parms OnControllerChange_Parms;
	memcpy_s(&OnControllerChange_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent(pFnOnControllerChange, &OnControllerChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  NewPos                         (CPF_Parm)

void UOnlineSubsystemEOS::SetNetworkNotificationPosition(unsigned char NewPos)
{
	static UFunction* pFnSetNetworkNotificationPosition = nullptr;

	if (!pFnSetNetworkNotificationPosition)
	{
		pFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition");

	}

	UOnlineSubsystemEOS_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	this->ProcessEvent(pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UOnlineSubsystemEOS::GetNetworkNotificationPosition()
{
	static UFunction* pFnGetNetworkNotificationPosition = nullptr;

	if (!pFnGetNetworkNotificationPosition)
	{
		pFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition");

	}

	UOnlineSubsystemEOS_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent(pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, nullptr);

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void UOnlineSubsystemEOS::NotifyExternalUIChanged(unsigned long bIsOpening)
{
	static UFunction* pFnNotifyExternalUIChanged = nullptr;

	if (!pFnNotifyExternalUIChanged)
	{
		pFnNotifyExternalUIChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged");

	}

	UOnlineSubsystemEOS_execNotifyExternalUIChanged_Parms NotifyExternalUIChanged_Parms;
	NotifyExternalUIChanged_Parms.bIsOpening = bIsOpening;

	pFnNotifyExternalUIChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyExternalUIChanged, &NotifyExternalUIChanged_Parms, nullptr);

	pFnNotifyExternalUIChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearExternalUIChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearExternalUIChangeDelegate = nullptr;

	if (!pFnClearExternalUIChangeDelegate)
	{
		pFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate");

	}

	UOnlineSubsystemEOS_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy_s(&ClearExternalUIChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddExternalUIChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddExternalUIChangeDelegate = nullptr;

	if (!pFnAddExternalUIChangeDelegate)
	{
		pFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate");

	}

	UOnlineSubsystemEOS_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy_s(&AddExternalUIChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void UOnlineSubsystemEOS::OnExternalUIChange(unsigned long bIsOpening)
{
	static UFunction* pFnOnExternalUIChange = nullptr;

	if (!pFnOnExternalUIChange)
	{
		pFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange");

	}

	UOnlineSubsystemEOS_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent(pFnOnExternalUIChange, &OnExternalUIChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* pFnClearLinkStatusChangeDelegate = nullptr;

	if (!pFnClearLinkStatusChangeDelegate)
	{
		pFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate");

	}

	UOnlineSubsystemEOS_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy_s(&ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* pFnAddLinkStatusChangeDelegate = nullptr;

	if (!pFnAddLinkStatusChangeDelegate)
	{
		pFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate");

	}

	UOnlineSubsystemEOS_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy_s(&AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemEOS::OnLinkStatusChange(unsigned long bIsConnected)
{
	static UFunction* pFnOnLinkStatusChange = nullptr;

	if (!pFnOnLinkStatusChange)
	{
		pFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange");

	}

	UOnlineSubsystemEOS_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent(pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::HasLinkConnection()
{
	static UFunction* pFnHasLinkConnection = nullptr;

	if (!pFnHasLinkConnection)
	{
		pFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection");

	}

	UOnlineSubsystemEOS_execHasLinkConnection_Parms HasLinkConnection_Parms;

	this->ProcessEvent(pFnHasLinkConnection, &HasLinkConnection_Parms, nullptr);

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid)
{
	static UFunction* pFnRegisterStatGuid = nullptr;

	if (!pFnRegisterStatGuid)
	{
		pFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid");

	}

	UOnlineSubsystemEOS_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy_s(&RegisterStatGuid_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnRegisterStatGuid, &RegisterStatGuid_Parms, nullptr);
	memcpy_s(&RegisterStatGuid_Parms.ClientStatGuid, 0x10, &ClientStatGuid, 0x10);

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemEOS::GetClientStatGuid()
{
	static UFunction* pFnGetClientStatGuid = nullptr;

	if (!pFnGetClientStatGuid)
	{
		pFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid");

	}

	UOnlineSubsystemEOS_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent(pFnGetClientStatGuid, &GetClientStatGuid_Parms, nullptr);

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!pFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	}

	UOnlineSubsystemEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!pFnAddRegisterHostStatGuidCompleteDelegate)
	{
		pFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate");

	}

	UOnlineSubsystemEOS_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnFlushOnlineStatsComplete = nullptr;

	if (!pFnOnFlushOnlineStatsComplete)
	{
		pFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete");

	}

	UOnlineSubsystemEOS_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy_s(&OnFlushOnlineStatsComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = nullptr;

	if (!pFnOnRegisterHostStatGuidComplete)
	{
		pFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete");

	}

	UOnlineSubsystemEOS_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterHostStatGuid(struct FString& HostStatGuid)
{
	static UFunction* pFnRegisterHostStatGuid = nullptr;

	if (!pFnRegisterHostStatGuid)
	{
		pFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid");

	}

	UOnlineSubsystemEOS_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent(pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, nullptr);
	memcpy_s(&RegisterHostStatGuid_Parms.HostStatGuid, 0x10, &HostStatGuid, 0x10);

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemEOS::GetHostStatGuid()
{
	static UFunction* pFnGetHostStatGuid = nullptr;

	if (!pFnGetHostStatGuid)
	{
		pFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid");

	}

	UOnlineSubsystemEOS_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent(pFnGetHostStatGuid, &GetHostStatGuid_Parms, nullptr);

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* pFnWriteOnlinePlayerScores = nullptr;

	if (!pFnWriteOnlinePlayerScores)
	{
		pFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores");

	}

	UOnlineSubsystemEOS_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;

	this->ProcessEvent(pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, nullptr);
	memcpy_s(&WriteOnlinePlayerScores_Parms.PlayerScores, 0x10, &PlayerScores, 0x10);

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnFreeStats = nullptr;

	if (!pFnFreeStats)
	{
		pFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats");

	}

	UOnlineSubsystemEOS_execFreeStats_Parms FreeStats_Parms;
	memcpy_s(&FreeStats_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(pFnFreeStats, &FreeStats_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!pFnClearReadOnlineStatsCompleteDelegate)
	{
		pFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate");

	}

	UOnlineSubsystemEOS_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!pFnAddReadOnlineStatsCompleteDelegate)
	{
		pFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate");

	}

	UOnlineSubsystemEOS_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemEOS::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadOnlineStatsComplete = nullptr;

	if (!pFnOnReadOnlineStatsComplete)
	{
		pFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete");

	}

	UOnlineSubsystemEOS_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!pFnReadOnlineStatsByRankAroundPlayer)
	{
		pFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer");

	}

	UOnlineSubsystemEOS_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Parms.NumRows, 0x4, &NumRows, 0x4);

	this->ProcessEvent(pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, nullptr);

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static UFunction* pFnReadOnlineStatsByRank = nullptr;

	if (!pFnReadOnlineStatsByRank)
	{
		pFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank");

	}

	UOnlineSubsystemEOS_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	memcpy_s(&ReadOnlineStatsByRank_Parms.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRank_Parms.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&ReadOnlineStatsByRank_Parms.NumToRead, 0x4, &NumToRead, 0x4);

	this->ProcessEvent(pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, nullptr);

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemEOS::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnReadOnlineStatsForFriends = nullptr;

	if (!pFnReadOnlineStatsForFriends)
	{
		pFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends");

	}

	UOnlineSubsystemEOS_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsForFriends_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, nullptr);

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnReadOnlineStats = nullptr;

	if (!pFnReadOnlineStats)
	{
		pFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats");

	}

	UOnlineSubsystemEOS_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	memcpy_s(&ReadOnlineStats_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(pFnReadOnlineStats, &ReadOnlineStats_Parms, nullptr);
	memcpy_s(&ReadOnlineStats_Parms.Players, 0x10, &Players, 0x10);

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::UnmuteAll(unsigned char LocalUserNum)
{
	static UFunction* pFnUnmuteAll = nullptr;

	if (!pFnUnmuteAll)
	{
		pFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll");

	}

	UOnlineSubsystemEOS_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnUnmuteAll, &UnmuteAll_Parms, nullptr);

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemEOS::MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends)
{
	static UFunction* pFnMuteAll = nullptr;

	if (!pFnMuteAll)
	{
		pFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll");

	}

	UOnlineSubsystemEOS_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent(pFnMuteAll, &MuteAll_Parms, nullptr);

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemEOS::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* pFnSetSpeechRecognitionObject = nullptr;

	if (!pFnSetSpeechRecognitionObject)
	{
		pFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject");

	}

	UOnlineSubsystemEOS_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetSpeechRecognitionObject_Parms.SpeechRecogObj, 0x8, &SpeechRecogObj, 0x8);

	this->ProcessEvent(pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, nullptr);

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemEOS::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static UFunction* pFnSelectVocabulary = nullptr;

	if (!pFnSelectVocabulary)
	{
		pFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary");

	}

	UOnlineSubsystemEOS_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SelectVocabulary_Parms.VocabularyId, 0x4, &VocabularyId, 0x4);

	this->ProcessEvent(pFnSelectVocabulary, &SelectVocabulary_Parms, nullptr);

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* pFnClearRecognitionCompleteDelegate = nullptr;

	if (!pFnClearRecognitionCompleteDelegate)
	{
		pFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate");

	}

	UOnlineSubsystemEOS_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* pFnAddRecognitionCompleteDelegate = nullptr;

	if (!pFnAddRecognitionCompleteDelegate)
	{
		pFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate");

	}

	UOnlineSubsystemEOS_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemEOS::OnRecognitionComplete()
{
	static UFunction* pFnOnRecognitionComplete = nullptr;

	if (!pFnOnRecognitionComplete)
	{
		pFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete");

	}

	UOnlineSubsystemEOS_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent(pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* pFnGetRecognitionResults = nullptr;

	if (!pFnGetRecognitionResults)
	{
		pFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults");

	}

	UOnlineSubsystemEOS_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetRecognitionResults, &GetRecognitionResults_Parms, nullptr);
	memcpy_s(&GetRecognitionResults_Parms.Words, 0x10, &Words, 0x10);

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static UFunction* pFnStopSpeechRecognition = nullptr;

	if (!pFnStopSpeechRecognition)
	{
		pFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition");

	}

	UOnlineSubsystemEOS_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, nullptr);

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static UFunction* pFnStartSpeechRecognition = nullptr;

	if (!pFnStartSpeechRecognition)
	{
		pFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition");

	}

	UOnlineSubsystemEOS_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, nullptr);

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static UFunction* pFnStopNetworkedVoice = nullptr;

	if (!pFnStopNetworkedVoice)
	{
		pFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice");

	}

	UOnlineSubsystemEOS_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemEOS::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static UFunction* pFnStartNetworkedVoice = nullptr;

	if (!pFnStartNetworkedVoice)
	{
		pFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice");

	}

	UOnlineSubsystemEOS_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* pFnClearPlayerTalkingDelegate = nullptr;

	if (!pFnClearPlayerTalkingDelegate)
	{
		pFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate");

	}

	UOnlineSubsystemEOS_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy_s(&ClearPlayerTalkingDelegate_Parms.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* pFnAddPlayerTalkingDelegate = nullptr;

	if (!pFnAddPlayerTalkingDelegate)
	{
		pFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate");

	}

	UOnlineSubsystemEOS_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy_s(&AddPlayerTalkingDelegate_Parms.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemEOS::OnPlayerTalking(struct FUniqueNetId Player)
{
	static UFunction* pFnOnPlayerTalking = nullptr;

	if (!pFnOnPlayerTalking)
	{
		pFnOnPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking");

	}

	UOnlineSubsystemEOS_execOnPlayerTalking_Parms OnPlayerTalking_Parms;
	memcpy_s(&OnPlayerTalking_Parms.Player, 0x48, &Player, 0x48);

	this->ProcessEvent(pFnOnPlayerTalking, &OnPlayerTalking_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::UnmuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnmuteRemoteTalker = nullptr;

	if (!pFnUnmuteRemoteTalker)
	{
		pFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker");

	}

	UOnlineSubsystemEOS_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UnmuteRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, nullptr);

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::MuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnMuteRemoteTalker = nullptr;

	if (!pFnMuteRemoteTalker)
	{
		pFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker");

	}

	UOnlineSubsystemEOS_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&MuteRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, nullptr);

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int                            Priority                       (CPF_Parm)

bool UOnlineSubsystemEOS::SetRemoteTalkerPriority(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority)
{
	static UFunction* pFnSetRemoteTalkerPriority = nullptr;

	if (!pFnSetRemoteTalkerPriority)
	{
		pFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority");

	}

	UOnlineSubsystemEOS_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetRemoteTalkerPriority_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&SetRemoteTalkerPriority_Parms.Priority, 0x4, &Priority, 0x4);

	this->ProcessEvent(pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, nullptr);

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static UFunction* pFnIsHeadsetPresent = nullptr;

	if (!pFnIsHeadsetPresent)
	{
		pFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent");

	}

	UOnlineSubsystemEOS_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, nullptr);

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsRemotePlayerTalking = nullptr;

	if (!pFnIsRemotePlayerTalking)
	{
		pFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking");

	}

	UOnlineSubsystemEOS_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy_s(&IsRemotePlayerTalking_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, nullptr);

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static UFunction* pFnIsLocalPlayerTalking = nullptr;

	if (!pFnIsLocalPlayerTalking)
	{
		pFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking");

	}

	UOnlineSubsystemEOS_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, nullptr);

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterRemoteTalker = nullptr;

	if (!pFnUnregisterRemoteTalker)
	{
		pFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker");

	}

	UOnlineSubsystemEOS_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy_s(&UnregisterRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, nullptr);

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnRegisterRemoteTalker = nullptr;

	if (!pFnRegisterRemoteTalker)
	{
		pFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker");

	}

	UOnlineSubsystemEOS_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy_s(&RegisterRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, nullptr);

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static UFunction* pFnUnregisterLocalTalker = nullptr;

	if (!pFnUnregisterLocalTalker)
	{
		pFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker");

	}

	UOnlineSubsystemEOS_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, nullptr);

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemEOS::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static UFunction* pFnRegisterLocalTalker = nullptr;

	if (!pFnRegisterLocalTalker)
	{
		pFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker");

	}

	UOnlineSubsystemEOS_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, nullptr);

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            UserIndex                      (CPF_Parm)

struct FUniqueNetId UOnlineSubsystemEOS::eventGetPlayerUniqueNetIdFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = nullptr;

	if (!pFnGetPlayerUniqueNetIdFromIndex)
	{
		pFnGetPlayerUniqueNetIdFromIndex = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex");

	}

	UOnlineSubsystemEOS_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	memcpy_s(&GetPlayerUniqueNetIdFromIndex_Parms.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, nullptr);

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            UserIndex                      (CPF_Parm)

struct FString UOnlineSubsystemEOS::eventGetPlayerNicknameFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerNicknameFromIndex = nullptr;

	if (!pFnGetPlayerNicknameFromIndex)
	{
		pFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex");

	}

	UOnlineSubsystemEOS_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	memcpy_s(&GetPlayerNicknameFromIndex_Parms.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, nullptr);

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemEOS::eventInit()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init");

	}

	UOnlineSubsystemEOS_eventInit_Parms Init_Parms;

	unsigned short NativeIndex = pFnInit->iNative;
	pFnInit->iNative = 0;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);

	pFnInit->FunctionFlags |= 0x400;

	pFnInit->iNative = NativeIndex;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SandboxId                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 DeploymentId                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemEOS::InitEOS(struct FString& SandboxId, struct FString& DeploymentId)
{
	static UFunction* pFnInitEOS = nullptr;

	if (!pFnInitEOS)
	{
		pFnInitEOS = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS");

	}

	UOnlineSubsystemEOS_execInitEOS_Parms InitEOS_Parms;

	pFnInitEOS->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInitEOS, &InitEOS_Parms, nullptr);

	pFnInitEOS->FunctionFlags |= 0x400;
	memcpy_s(&InitEOS_Parms.SandboxId, 0x10, &SandboxId, 0x10);
	memcpy_s(&InitEOS_Parms.DeploymentId, 0x10, &DeploymentId, 0x10);

	return InitEOS_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   AppName                        (CPF_Parm)
// struct FString                 Price                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DiscountPrice                  (CPF_Parm | CPF_NeedCtorLink)
// int                            DiscountPercentage             (CPF_Parm)

void UOnlineSubsystemEOS::EventGetAppPriceInfoComplete(struct FName AppName, struct FString Price, struct FString DiscountPrice, int DiscountPercentage)
{
	static UFunction* pFnEventGetAppPriceInfoComplete = nullptr;

	if (!pFnEventGetAppPriceInfoComplete)
	{
		pFnEventGetAppPriceInfoComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete");

	}

	UOnlineSubsystemEOS_execEventGetAppPriceInfoComplete_Parms EventGetAppPriceInfoComplete_Parms;
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.AppName, 0x8, &AppName, 0x8);
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.Price, 0x10, &Price, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.DiscountPrice, 0x10, &DiscountPrice, 0x10);
	memcpy_s(&EventGetAppPriceInfoComplete_Parms.DiscountPercentage, 0x4, &DiscountPercentage, 0x4);

	this->ProcessEvent(pFnEventGetAppPriceInfoComplete, &EventGetAppPriceInfoComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAuthorized                    (CPF_Parm)
// unsigned long long             OrderId                        (CPF_Parm)

void UOnlineSubsystemEOS::OnMicroTxnResponse(unsigned long bAuthorized, unsigned long long OrderId)
{
	static UFunction* pFnOnMicroTxnResponse = nullptr;

	if (!pFnOnMicroTxnResponse)
	{
		pFnOnMicroTxnResponse = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse");

	}

	UOnlineSubsystemEOS_execOnMicroTxnResponse_Parms OnMicroTxnResponse_Parms;
	OnMicroTxnResponse_Parms.bAuthorized = bAuthorized;
	OnMicroTxnResponse_Parms.OrderId = OrderId;

	this->ProcessEvent(pFnOnMicroTxnResponse, &OnMicroTxnResponse_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceEOS::RequiresAuthTicket()
{
	static UFunction* pFnRequiresAuthTicket = nullptr;

	if (!pFnRequiresAuthTicket)
	{
		pFnRequiresAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket");

	}

	UOnlineAuthInterfaceEOS_execRequiresAuthTicket_Parms RequiresAuthTicket_Parms;

	this->ProcessEvent(pFnRequiresAuthTicket, &RequiresAuthTicket_Parms, nullptr);

	return RequiresAuthTicket_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceEOS::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestAuthTicket = nullptr;

	if (!pFnRequestAuthTicket)
	{
		pFnRequestAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket");

	}

	UOnlineAuthInterfaceEOS_execRequestAuthTicket_Parms RequestAuthTicket_Parms;
	memcpy_s(&RequestAuthTicket_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAuthTicket_Parms.Callback, 0x18, &Callback, 0x18);

	unsigned short NativeIndex = pFnRequestAuthTicket->iNative;
	pFnRequestAuthTicket->iNative = 0;

	pFnRequestAuthTicket->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestAuthTicket, &RequestAuthTicket_Parms, nullptr);

	pFnRequestAuthTicket->FunctionFlags |= 0x400;

	pFnRequestAuthTicket->iNative = NativeIndex;

	return RequestAuthTicket_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceEOS::RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestMtxCode = nullptr;

	if (!pFnRequestMtxCode)
	{
		pFnRequestMtxCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode");

	}

	UOnlineAuthInterfaceEOS_execRequestMtxCode_Parms RequestMtxCode_Parms;
	memcpy_s(&RequestMtxCode_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestMtxCode_Parms.Callback, 0x18, &Callback, 0x18);

	unsigned short NativeIndex = pFnRequestMtxCode->iNative;
	pFnRequestMtxCode->iNative = 0;

	pFnRequestMtxCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestMtxCode, &RequestMtxCode_Parms, nullptr);

	pFnRequestMtxCode->FunctionFlags |= 0x400;

	pFnRequestMtxCode->iNative = NativeIndex;

	return RequestMtxCode_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            AccountId                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceEOS::GetActivePlatformId(unsigned char LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId)
{
	static UFunction* pFnGetActivePlatformId = nullptr;

	if (!pFnGetActivePlatformId)
	{
		pFnGetActivePlatformId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId");

	}

	UOnlineFriendsInterfaceEOS_execGetActivePlatformId_Parms GetActivePlatformId_Parms;
	GetActivePlatformId_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetActivePlatformId_Parms.AccountId, 0x48, &AccountId, 0x48);

	unsigned short NativeIndex = pFnGetActivePlatformId->iNative;
	pFnGetActivePlatformId->iNative = 0;

	pFnGetActivePlatformId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetActivePlatformId, &GetActivePlatformId_Parms, nullptr);

	pFnGetActivePlatformId->FunctionFlags |= 0x400;

	pFnGetActivePlatformId->iNative = NativeIndex;
	memcpy_s(&GetActivePlatformId_Parms.PlatformId, 0x48, &PlatformId, 0x48);

	return GetActivePlatformId_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    AccountIds                     (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineFriendsInterfaceEOS::RequestLinkedAccounts(unsigned char LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestLinkedAccounts = nullptr;

	if (!pFnRequestLinkedAccounts)
	{
		pFnRequestLinkedAccounts = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts");

	}

	UOnlineFriendsInterfaceEOS_execRequestLinkedAccounts_Parms RequestLinkedAccounts_Parms;
	RequestLinkedAccounts_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RequestLinkedAccounts_Parms.AccountIds, 0x10, &AccountIds, 0x10);
	memcpy_s(&RequestLinkedAccounts_Parms.Callback, 0x18, &Callback, 0x18);

	unsigned short NativeIndex = pFnRequestLinkedAccounts->iNative;
	pFnRequestLinkedAccounts->iNative = 0;

	pFnRequestLinkedAccounts->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestLinkedAccounts, &RequestLinkedAccounts_Parms, nullptr);

	pFnRequestLinkedAccounts->FunctionFlags |= 0x400;

	pFnRequestLinkedAccounts->iNative = NativeIndex;

	return RequestLinkedAccounts_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceEOS::AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName)
{
	static UFunction* pFnAcceptGameInvite = nullptr;

	if (!pFnAcceptGameInvite)
	{
		pFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite");

	}

	UOnlineGameInterfaceEOS_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AcceptGameInvite_Parms.SessionName, 0x8, &SessionName, 0x8);

	unsigned short NativeIndex = pFnAcceptGameInvite->iNative;
	pFnAcceptGameInvite->iNative = 0;

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcceptGameInvite, &AcceptGameInvite_Parms, nullptr);

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	pFnAcceptGameInvite->iNative = NativeIndex;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceEOS::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* pFnFreeSearchResults = nullptr;

	if (!pFnFreeSearchResults)
	{
		pFnFreeSearchResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults");

	}

	UOnlineGameInterfaceEOS_execFreeSearchResults_Parms FreeSearchResults_Parms;
	memcpy_s(&FreeSearchResults_Parms.Search, 0x8, &Search, 0x8);

	unsigned short NativeIndex = pFnFreeSearchResults->iNative;
	pFnFreeSearchResults->iNative = 0;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFreeSearchResults, &FreeSearchResults_Parms, nullptr);

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	pFnFreeSearchResults->iNative = NativeIndex;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceEOS::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* pFnUpdateOnlineGame = nullptr;

	if (!pFnUpdateOnlineGame)
	{
		pFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame");

	}

	UOnlineGameInterfaceEOS_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy_s(&UpdateOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Parms.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	unsigned short NativeIndex = pFnUpdateOnlineGame->iNative;
	pFnUpdateOnlineGame->iNative = 0;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, nullptr);

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	pFnUpdateOnlineGame->iNative = NativeIndex;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 NintendoAccountToken           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceEOS::AuthWithNintendoAccountToken(unsigned char LocalUserNum, struct FString& NintendoAccountToken)
{
	static UFunction* pFnAuthWithNintendoAccountToken = nullptr;

	if (!pFnAuthWithNintendoAccountToken)
	{
		pFnAuthWithNintendoAccountToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken");

	}

	UOnlinePersistentAuthInterfaceEOS_execAuthWithNintendoAccountToken_Parms AuthWithNintendoAccountToken_Parms;
	AuthWithNintendoAccountToken_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnAuthWithNintendoAccountToken->iNative;
	pFnAuthWithNintendoAccountToken->iNative = 0;

	pFnAuthWithNintendoAccountToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAuthWithNintendoAccountToken, &AuthWithNintendoAccountToken_Parms, nullptr);

	pFnAuthWithNintendoAccountToken->FunctionFlags |= 0x400;

	pFnAuthWithNintendoAccountToken->iNative = NativeIndex;
	memcpy_s(&AuthWithNintendoAccountToken_Parms.NintendoAccountToken, 0x10, &NintendoAccountToken, 0x10);

	return AuthWithNintendoAccountToken_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UDateTime*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

class UDateTime* UOnlinePersistentAuthInterfaceEOS::GetAuthExpirationTimestamp(unsigned char LocalUserNum)
{
	static UFunction* pFnGetAuthExpirationTimestamp = nullptr;

	if (!pFnGetAuthExpirationTimestamp)
	{
		pFnGetAuthExpirationTimestamp = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp");

	}

	UOnlinePersistentAuthInterfaceEOS_execGetAuthExpirationTimestamp_Parms GetAuthExpirationTimestamp_Parms;
	GetAuthExpirationTimestamp_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnGetAuthExpirationTimestamp->iNative;
	pFnGetAuthExpirationTimestamp->iNative = 0;

	pFnGetAuthExpirationTimestamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAuthExpirationTimestamp, &GetAuthExpirationTimestamp_Parms, nullptr);

	pFnGetAuthExpirationTimestamp->FunctionFlags |= 0x400;

	pFnGetAuthExpirationTimestamp->iNative = NativeIndex;

	return GetAuthExpirationTimestamp_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceEOS::LaunchAccountPortal(unsigned char LocalUserNum)
{
	static UFunction* pFnLaunchAccountPortal = nullptr;

	if (!pFnLaunchAccountPortal)
	{
		pFnLaunchAccountPortal = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal");

	}

	UOnlinePersistentAuthInterfaceEOS_execLaunchAccountPortal_Parms LaunchAccountPortal_Parms;
	LaunchAccountPortal_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnLaunchAccountPortal->iNative;
	pFnLaunchAccountPortal->iNative = 0;

	pFnLaunchAccountPortal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLaunchAccountPortal, &LaunchAccountPortal_Parms, nullptr);

	pFnLaunchAccountPortal->FunctionFlags |= 0x400;

	pFnLaunchAccountPortal->iNative = NativeIndex;

	return LaunchAccountPortal_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlinePersistentAuthInterfaceEOS::GetClientCredentials()
{
	static UFunction* pFnGetClientCredentials = nullptr;

	if (!pFnGetClientCredentials)
	{
		pFnGetClientCredentials = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials");

	}

	UOnlinePersistentAuthInterfaceEOS_execGetClientCredentials_Parms GetClientCredentials_Parms;

	unsigned short NativeIndex = pFnGetClientCredentials->iNative;
	pFnGetClientCredentials->iNative = 0;

	pFnGetClientCredentials->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetClientCredentials, &GetClientCredentials_Parms, nullptr);

	pFnGetClientCredentials->FunctionFlags |= 0x400;

	pFnGetClientCredentials->iNative = NativeIndex;

	return GetClientCredentials_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlinePersistentAuthInterfaceEOS::GetContinuanceToken(unsigned char LocalUserNum)
{
	static UFunction* pFnGetContinuanceToken = nullptr;

	if (!pFnGetContinuanceToken)
	{
		pFnGetContinuanceToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken");

	}

	UOnlinePersistentAuthInterfaceEOS_execGetContinuanceToken_Parms GetContinuanceToken_Parms;
	GetContinuanceToken_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnGetContinuanceToken->iNative;
	pFnGetContinuanceToken->iNative = 0;

	pFnGetContinuanceToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContinuanceToken, &GetContinuanceToken_Parms, nullptr);

	pFnGetContinuanceToken->FunctionFlags |= 0x400;

	pFnGetContinuanceToken->iNative = NativeIndex;

	return GetContinuanceToken_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 RefreshToken                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePersistentAuthInterfaceEOS::UseRefreshToken(unsigned char LocalUserNum, struct FString RefreshToken)
{
	static UFunction* pFnUseRefreshToken = nullptr;

	if (!pFnUseRefreshToken)
	{
		pFnUseRefreshToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken");

	}

	UOnlinePersistentAuthInterfaceEOS_execUseRefreshToken_Parms UseRefreshToken_Parms;
	UseRefreshToken_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UseRefreshToken_Parms.RefreshToken, 0x10, &RefreshToken, 0x10);

	unsigned short NativeIndex = pFnUseRefreshToken->iNative;
	pFnUseRefreshToken->iNative = 0;

	pFnUseRefreshToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUseRefreshToken, &UseRefreshToken_Parms, nullptr);

	pFnUseRefreshToken->FunctionFlags |= 0x400;

	pFnUseRefreshToken->iNative = NativeIndex;

	return UseRefreshToken_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlinePersistentAuthInterfaceEOS::GetRefreshToken(unsigned char LocalUserNum)
{
	static UFunction* pFnGetRefreshToken = nullptr;

	if (!pFnGetRefreshToken)
	{
		pFnGetRefreshToken = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken");

	}

	UOnlinePersistentAuthInterfaceEOS_execGetRefreshToken_Parms GetRefreshToken_Parms;
	GetRefreshToken_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnGetRefreshToken->iNative;
	pFnGetRefreshToken->iNative = 0;

	pFnGetRefreshToken->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetRefreshToken, &GetRefreshToken_Parms, nullptr);

	pFnGetRefreshToken->FunctionFlags |= 0x400;

	pFnGetRefreshToken->iNative = NativeIndex;

	return GetRefreshToken_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePersistentAuthInterfaceEOS::RequestPinGrantCode(unsigned char LocalUserNum)
{
	static UFunction* pFnRequestPinGrantCode = nullptr;

	if (!pFnRequestPinGrantCode)
	{
		pFnRequestPinGrantCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode");

	}

	UOnlinePersistentAuthInterfaceEOS_execRequestPinGrantCode_Parms RequestPinGrantCode_Parms;
	RequestPinGrantCode_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnRequestPinGrantCode->iNative;
	pFnRequestPinGrantCode->iNative = 0;

	pFnRequestPinGrantCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestPinGrantCode, &RequestPinGrantCode_Parms, nullptr);

	pFnRequestPinGrantCode->FunctionFlags |= 0x400;

	pFnRequestPinGrantCode->iNative = NativeIndex;

	return RequestPinGrantCode_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowInviteUI(unsigned char LocalUserNum, struct FString InviteText)
{
	static UFunction* pFnShowInviteUI = nullptr;

	if (!pFnShowInviteUI)
	{
		pFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI");

	}

	UOnlinePlayerInterfaceEOS_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowInviteUI_Parms.InviteText, 0x10, &InviteText, 0x10);

	this->ProcessEvent(pFnShowInviteUI, &ShowInviteUI_Parms, nullptr);

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowGamerCardUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowGamerCardUI = nullptr;

	if (!pFnShowGamerCardUI)
	{
		pFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI");

	}

	UOnlinePlayerInterfaceEOS_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowGamerCardUI_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnShowGamerCardUI, &ShowGamerCardUI_Parms, nullptr);

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 PresenceString                 (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GameDataString                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::SetRichPresence(unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString)
{
	static UFunction* pFnSetRichPresence = nullptr;

	if (!pFnSetRichPresence)
	{
		pFnSetRichPresence = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence");

	}

	UOnlinePlayerInterfaceEOS_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetRichPresence_Parms.PresenceString, 0x10, &PresenceString, 0x10);
	memcpy_s(&SetRichPresence_Parms.GameDataString, 0x10, &GameDataString, 0x10);

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRichPresence, &SetRichPresence_Parms, nullptr);

	pFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FOnlineFriend           FriendData                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetFriendPresence(struct FOnlineFriend& FriendData)
{
	static UFunction* pFnGetFriendPresence = nullptr;

	if (!pFnGetFriendPresence)
	{
		pFnGetFriendPresence = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence");

	}

	UOnlinePlayerInterfaceEOS_execGetFriendPresence_Parms GetFriendPresence_Parms;

	pFnGetFriendPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendPresence, &GetFriendPresence_Parms, nullptr);

	pFnGetFriendPresence->FunctionFlags |= 0x400;
	memcpy_s(&GetFriendPresence_Parms.FriendData, 0x130, &FriendData, 0x130);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMet(unsigned char LocalUserNum, struct FString GameDescription, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnRecordPlayersRecentlyMet = nullptr;

	if (!pFnRecordPlayersRecentlyMet)
	{
		pFnRecordPlayersRecentlyMet = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet");

	}

	UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMet_Parms RecordPlayersRecentlyMet_Parms;
	RecordPlayersRecentlyMet_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RecordPlayersRecentlyMet_Parms.GameDescription, 0x10, &GameDescription, 0x10);

	this->ProcessEvent(pFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Parms, nullptr);
	memcpy_s(&RecordPlayersRecentlyMet_Parms.Players, 0x10, &Players, 0x10);

	return RecordPlayersRecentlyMet_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Comment                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnWordFilterSanitizeString = nullptr;

	if (!pFnWordFilterSanitizeString)
	{
		pFnWordFilterSanitizeString = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString");

	}

	UOnlinePlayerInterfaceEOS_execWordFilterSanitizeString_Parms WordFilterSanitizeString_Parms;
	memcpy_s(&WordFilterSanitizeString_Parms.Comment, 0x10, &Comment, 0x10);
	memcpy_s(&WordFilterSanitizeString_Parms.SanitizeDelegate, 0x18, &SanitizeDelegate, 0x18);
	memcpy_s(&WordFilterSanitizeString_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnWordFilterSanitizeString, &WordFilterSanitizeString_Parms, nullptr);

	return WordFilterSanitizeString_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FWordFilterResult       Result                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnSanitizeStringComplete(struct FWordFilterResult Result)
{
	static UFunction* pFnOnSanitizeStringComplete = nullptr;

	if (!pFnOnSanitizeStringComplete)
	{
		pFnOnSanitizeStringComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnSanitizeStringComplete_Parms OnSanitizeStringComplete_Parms;
	memcpy_s(&OnSanitizeStringComplete_Parms.Result, 0x38, &Result, 0x38);

	this->ProcessEvent(pFnOnSanitizeStringComplete, &OnSanitizeStringComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::HideKeyboardUI(unsigned char LocalUserNum)
{
	static UFunction* pFnHideKeyboardUI = nullptr;

	if (!pFnHideKeyboardUI)
	{
		pFnHideKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI");

	}

	UOnlinePlayerInterfaceEOS_execHideKeyboardUI_Parms HideKeyboardUI_Parms;
	HideKeyboardUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnHideKeyboardUI, &HideKeyboardUI_Parms, nullptr);

	return HideKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* pFnClearReadPlayerCountryDelegate = nullptr;

	if (!pFnClearReadPlayerCountryDelegate)
	{
		pFnClearReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerCountryDelegate_Parms ClearReadPlayerCountryDelegate_Parms;
	ClearReadPlayerCountryDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadPlayerCountryDelegate_Parms.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(pFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* pFnAddReadPlayerCountryDelegate = nullptr;

	if (!pFnAddReadPlayerCountryDelegate)
	{
		pFnAddReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerCountryDelegate_Parms AddReadPlayerCountryDelegate_Parms;
	AddReadPlayerCountryDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadPlayerCountryDelegate_Parms.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(pFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Country                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, struct FString Country)
{
	static UFunction* pFnOnPlayerCountryRetrieved = nullptr;

	if (!pFnOnPlayerCountryRetrieved)
	{
		pFnOnPlayerCountryRetrieved = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved");

	}

	UOnlinePlayerInterfaceEOS_execOnPlayerCountryRetrieved_Parms OnPlayerCountryRetrieved_Parms;
	memcpy_s(&OnPlayerCountryRetrieved_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&OnPlayerCountryRetrieved_Parms.Country, 0x10, &Country, 0x10);

	this->ProcessEvent(pFnOnPlayerCountryRetrieved, &OnPlayerCountryRetrieved_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::GetPlayerCountry(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerCountry = nullptr;

	if (!pFnGetPlayerCountry)
	{
		pFnGetPlayerCountry = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry");

	}

	UOnlinePlayerInterfaceEOS_execGetPlayerCountry_Parms GetPlayerCountry_Parms;
	GetPlayerCountry_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerCountry, &GetPlayerCountry_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* pFnClearAvatarChangeDelegate = nullptr;

	if (!pFnClearAvatarChangeDelegate)
	{
		pFnClearAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearAvatarChangeDelegate_Parms ClearAvatarChangeDelegate_Parms;
	ClearAvatarChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAvatarChangeDelegate_Parms.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(pFnClearAvatarChangeDelegate, &ClearAvatarChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* pFnAddAvatarChangeDelegate = nullptr;

	if (!pFnAddAvatarChangeDelegate)
	{
		pFnAddAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddAvatarChangeDelegate_Parms AddAvatarChangeDelegate_Parms;
	AddAvatarChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAvatarChangeDelegate_Parms.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(pFnAddAvatarChangeDelegate, &AddAvatarChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* pFnClearFriendPresenceChangeDelegate = nullptr;

	if (!pFnClearFriendPresenceChangeDelegate)
	{
		pFnClearFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearFriendPresenceChangeDelegate_Parms ClearFriendPresenceChangeDelegate_Parms;
	ClearFriendPresenceChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendPresenceChangeDelegate_Parms.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::eventAddFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* pFnAddFriendPresenceChangeDelegate = nullptr;

	if (!pFnAddFriendPresenceChangeDelegate)
	{
		pFnAddFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_eventAddFriendPresenceChangeDelegate_Parms AddFriendPresenceChangeDelegate_Parms;
	AddFriendPresenceChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendPresenceChangeDelegate_Parms.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::FriendPresenceChange(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnFriendPresenceChange = nullptr;

	if (!pFnFriendPresenceChange)
	{
		pFnFriendPresenceChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange");

	}

	UOnlinePlayerInterfaceEOS_execFriendPresenceChange_Parms FriendPresenceChange_Parms;
	memcpy_s(&FriendPresenceChange_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnFriendPresenceChange, &FriendPresenceChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnAvatarChange(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnOnAvatarChange = nullptr;

	if (!pFnOnAvatarChange)
	{
		pFnOnAvatarChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange");

	}

	UOnlinePlayerInterfaceEOS_execOnAvatarChange_Parms OnAvatarChange_Parms;
	memcpy_s(&OnAvatarChange_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnOnAvatarChange, &OnAvatarChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static UFunction* pFnUnlockAchievement = nullptr;

	if (!pFnUnlockAchievement)
	{
		pFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement");

	}

	UOnlinePlayerInterfaceEOS_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UnlockAchievement_Parms.AchievementId, 0x4, &AchievementId, 0x4);
	memcpy_s(&UnlockAchievement_Parms.PercentComplete, 0x4, &PercentComplete, 0x4);

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnlockAchievement, &UnlockAchievement_Parms, nullptr);

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages)
{
	static UFunction* pFnReadAchievements = nullptr;

	if (!pFnReadAchievements)
	{
		pFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements");

	}

	UOnlinePlayerInterfaceEOS_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadAchievements_Parms.TitleId, 0x4, &TitleId, 0x4);
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadAchievements, &ReadAchievements_Parms, nullptr);

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_OptionalParm | CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

unsigned char UOnlinePlayerInterfaceEOS::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* pFnGetAchievements = nullptr;

	if (!pFnGetAchievements)
	{
		pFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements");

	}

	UOnlinePlayerInterfaceEOS_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetAchievements_Parms.TitleId, 0x4, &TitleId, 0x4);

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAchievements, &GetAchievements_Parms, nullptr);

	pFnGetAchievements->FunctionFlags |= 0x400;
	memcpy_s(&GetAchievements_Parms.Achievements, 0x10, &Achievements, 0x10);

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!pFnClearReadAchievementsCompleteDelegate)
	{
		pFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!pFnClearUnlockAchievementCompleteDelegate)
	{
		pFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!pFnAddReadAchievementsCompleteDelegate)
	{
		pFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadAchievementsCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!pFnAddUnlockAchievementCompleteDelegate)
	{
		pFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            TitleId                        (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadAchievementsComplete(int TitleId)
{
	static UFunction* pFnOnReadAchievementsComplete = nullptr;

	if (!pFnOnReadAchievementsComplete)
	{
		pFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	memcpy_s(&OnReadAchievementsComplete_Parms.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUnlockAchievementComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnlockAchievementComplete = nullptr;

	if (!pFnOnUnlockAchievementComplete)
	{
		pFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::ShowControllerUI()
{
	static UFunction* pFnShowControllerUI = nullptr;

	if (!pFnShowControllerUI)
	{
		pFnShowControllerUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI");

	}

	UOnlinePlayerInterfaceEOS_execShowControllerUI_Parms ShowControllerUI_Parms;

	this->ProcessEvent(pFnShowControllerUI, &ShowControllerUI_Parms, nullptr);

	return ShowControllerUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlinePlayerInterfaceEOS::GetPlayerLanguage(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerLanguage = nullptr;

	if (!pFnGetPlayerLanguage)
	{
		pFnGetPlayerLanguage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage");

	}

	UOnlinePlayerInterfaceEOS_execGetPlayerLanguage_Parms GetPlayerLanguage_Parms;
	GetPlayerLanguage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerLanguage, &GetPlayerLanguage_Parms, nullptr);

	return GetPlayerLanguage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowPlayersUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowPlayersUI = nullptr;

	if (!pFnShowPlayersUI)
	{
		pFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI");

	}

	UOnlinePlayerInterfaceEOS_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowPlayersUI, &ShowPlayersUI_Parms, nullptr);

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* pFnClearProfileDataChangedDelegate = nullptr;

	if (!pFnClearProfileDataChangedDelegate)
	{
		pFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* pFnAddProfileDataChangedDelegate = nullptr;

	if (!pFnAddProfileDataChangedDelegate)
	{
		pFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnProfileDataChanged()
{
	static UFunction* pFnOnProfileDataChanged = nullptr;

	if (!pFnOnProfileDataChanged)
	{
		pFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged");

	}

	UOnlinePlayerInterfaceEOS_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent(pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            PictureId                      (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static UFunction* pFnUnlockGamerPicture = nullptr;

	if (!pFnUnlockGamerPicture)
	{
		pFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture");

	}

	UOnlinePlayerInterfaceEOS_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UnlockGamerPicture_Parms.PictureId, 0x4, &PictureId, 0x4);

	this->ProcessEvent(pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, nullptr);

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            DeviceID                       (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsDeviceValid(int DeviceID)
{
	static UFunction* pFnIsDeviceValid = nullptr;

	if (!pFnIsDeviceValid)
	{
		pFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid");

	}

	UOnlinePlayerInterfaceEOS_execIsDeviceValid_Parms IsDeviceValid_Parms;
	memcpy_s(&IsDeviceValid_Parms.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(pFnIsDeviceValid, &IsDeviceValid_Parms, nullptr);

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int UOnlinePlayerInterfaceEOS::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString& DeviceName)
{
	static UFunction* pFnGetDeviceSelectionResults = nullptr;

	if (!pFnGetDeviceSelectionResults)
	{
		pFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults");

	}

	UOnlinePlayerInterfaceEOS_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, nullptr);
	memcpy_s(&GetDeviceSelectionResults_Parms.DeviceName, 0x10, &DeviceName, 0x10);

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!pFnClearDeviceSelectionDoneDelegate)
	{
		pFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!pFnAddDeviceSelectionDoneDelegate)
	{
		pFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeviceSelectionComplete = nullptr;

	if (!pFnOnDeviceSelectionComplete)
	{
		pFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            SizeNeeded                     (CPF_Parm)
// unsigned long                  bForceShowUI                   (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI)
{
	static UFunction* pFnShowDeviceSelectionUI = nullptr;

	if (!pFnShowDeviceSelectionUI)
	{
		pFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI");

	}

	UOnlinePlayerInterfaceEOS_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowDeviceSelectionUI_Parms.SizeNeeded, 0x4, &SizeNeeded, 0x4);
	ShowDeviceSelectionUI_Parms.bForceShowUI = bForceShowUI;

	this->ProcessEvent(pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, nullptr);

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 Title                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Description                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowCustomPlayersUI(unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnShowCustomPlayersUI = nullptr;

	if (!pFnShowCustomPlayersUI)
	{
		pFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI");

	}

	UOnlinePlayerInterfaceEOS_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowCustomPlayersUI_Parms.Title, 0x10, &Title, 0x10);
	memcpy_s(&ShowCustomPlayersUI_Parms.Description, 0x10, &Description, 0x10);

	this->ProcessEvent(pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, nullptr);
	memcpy_s(&ShowCustomPlayersUI_Parms.Players, 0x10, &Players, 0x10);

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::IsUserSwitchActive()
{
	static UFunction* pFnIsUserSwitchActive = nullptr;

	if (!pFnIsUserSwitchActive)
	{
		pFnIsUserSwitchActive = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive");

	}

	UOnlinePlayerInterfaceEOS_execIsUserSwitchActive_Parms IsUserSwitchActive_Parms;

	this->ProcessEvent(pFnIsUserSwitchActive, &IsUserSwitchActive_Parms, nullptr);

	return IsUserSwitchActive_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Active                         (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetKickPlayerDialogActive(unsigned long Active)
{
	static UFunction* pFnSetKickPlayerDialogActive = nullptr;

	if (!pFnSetKickPlayerDialogActive)
	{
		pFnSetKickPlayerDialogActive = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive");

	}

	UOnlinePlayerInterfaceEOS_execSetKickPlayerDialogActive_Parms SetKickPlayerDialogActive_Parms;
	SetKickPlayerDialogActive_Parms.Active = Active;

	this->ProcessEvent(pFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetKickPreviousUser(unsigned char LocalUserNum)
{
	static UFunction* pFnSetKickPreviousUser = nullptr;

	if (!pFnSetKickPreviousUser)
	{
		pFnSetKickPreviousUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser");

	}

	UOnlinePlayerInterfaceEOS_execSetKickPreviousUser_Parms SetKickPreviousUser_Parms;
	SetKickPreviousUser_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnSetKickPreviousUser, &SetKickPreviousUser_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowLoginUIForOrphanedUser(unsigned char LocalUserNum)
{
	static UFunction* pFnShowLoginUIForOrphanedUser = nullptr;

	if (!pFnShowLoginUIForOrphanedUser)
	{
		pFnShowLoginUIForOrphanedUser = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser");

	}

	UOnlinePlayerInterfaceEOS_execShowLoginUIForOrphanedUser_Parms ShowLoginUIForOrphanedUser_Parms;
	ShowLoginUIForOrphanedUser_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Parms, nullptr);

	return ShowLoginUIForOrphanedUser_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<bool>                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

TArray<bool> UOnlinePlayerInterfaceEOS::GetSyncedAchievements(unsigned char LocalUserNum)
{
	static UFunction* pFnGetSyncedAchievements = nullptr;

	if (!pFnGetSyncedAchievements)
	{
		pFnGetSyncedAchievements = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements");

	}

	UOnlinePlayerInterfaceEOS_execGetSyncedAchievements_Parms GetSyncedAchievements_Parms;
	GetSyncedAchievements_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetSyncedAchievements, &GetSyncedAchievements_Parms, nullptr);

	return GetSyncedAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsGuestLogin(unsigned char LocalUserNum)
{
	static UFunction* pFnIsGuestLogin = nullptr;

	if (!pFnIsGuestLogin)
	{
		pFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin");

	}

	UOnlinePlayerInterfaceEOS_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnIsGuestLogin, &IsGuestLogin_Parms, nullptr);

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  RestrictedFeature              (CPF_Parm)

void UOnlinePlayerInterfaceEOS::RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, unsigned char RestrictedFeature)
{
	static UFunction* pFnRequestRestrictedFeatureMessaging = nullptr;

	if (!pFnRequestRestrictedFeatureMessaging)
	{
		pFnRequestRestrictedFeatureMessaging = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging");

	}

	UOnlinePlayerInterfaceEOS_execRequestRestrictedFeatureMessaging_Parms RequestRestrictedFeatureMessaging_Parms;
	RequestRestrictedFeatureMessaging_Parms.LocalUserNum = LocalUserNum;
	RequestRestrictedFeatureMessaging_Parms.RestrictedFeature = RestrictedFeature;

	this->ProcessEvent(pFnRequestRestrictedFeatureMessaging, &RequestRestrictedFeatureMessaging_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateVoice(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanCommunicateVoice = nullptr;

	if (!pFnCanCommunicateVoice)
	{
		pFnCanCommunicateVoice = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice");

	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVoice_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVoice_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, nullptr);
	PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateVideo(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanCommunicateVideo = nullptr;

	if (!pFnCanCommunicateVideo)
	{
		pFnCanCommunicateVideo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo");

	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;
	CanCommunicateVideo_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVideo_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVideo_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, nullptr);
	PrivilegeLevelHint = CanCommunicateVideo_Parms.PrivilegeLevelHint;

	return CanCommunicateVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanCommunicateText(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanCommunicateText = nullptr;

	if (!pFnCanCommunicateText)
	{
		pFnCanCommunicateText = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText");

	}

	UOnlinePlayerInterfaceEOS_execCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateText_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanCommunicateText, &CanCommunicateText_Parms, nullptr);
	PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareUserCreatedContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShareUserCreatedContent = nullptr;

	if (!pFnCanShareUserCreatedContent)
	{
		pFnCanShareUserCreatedContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent");

	}

	UOnlinePlayerInterfaceEOS_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;
	CanShareUserCreatedContent_Parms.LocalUserNum = LocalUserNum;
	CanShareUserCreatedContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareUserCreatedContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, nullptr);
	PrivilegeLevelHint = CanShareUserCreatedContent_Parms.PrivilegeLevelHint;

	return CanShareUserCreatedContent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanAccessPremiumVideoContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanAccessPremiumVideoContent = nullptr;

	if (!pFnCanAccessPremiumVideoContent)
	{
		pFnCanAccessPremiumVideoContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent");

	}

	UOnlinePlayerInterfaceEOS_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;
	CanAccessPremiumVideoContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumVideoContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumVideoContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, nullptr);
	PrivilegeLevelHint = CanAccessPremiumVideoContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumVideoContent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanAccessPremiumContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanAccessPremiumContent = nullptr;

	if (!pFnCanAccessPremiumContent)
	{
		pFnCanAccessPremiumContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent");

	}

	UOnlinePlayerInterfaceEOS_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;
	CanAccessPremiumContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, nullptr);
	PrivilegeLevelHint = CanAccessPremiumContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumContent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanUseCloudStorage(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanUseCloudStorage = nullptr;

	if (!pFnCanUseCloudStorage)
	{
		pFnCanUseCloudStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage");

	}

	UOnlinePlayerInterfaceEOS_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;
	CanUseCloudStorage_Parms.LocalUserNum = LocalUserNum;
	CanUseCloudStorage_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUseCloudStorage_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, nullptr);
	PrivilegeLevelHint = CanUseCloudStorage_Parms.PrivilegeLevelHint;

	return CanUseCloudStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanRecordDVRClips(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanRecordDVRClips = nullptr;

	if (!pFnCanRecordDVRClips)
	{
		pFnCanRecordDVRClips = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips");

	}

	UOnlinePlayerInterfaceEOS_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;
	CanRecordDVRClips_Parms.LocalUserNum = LocalUserNum;
	CanRecordDVRClips_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanRecordDVRClips_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, nullptr);
	PrivilegeLevelHint = CanRecordDVRClips_Parms.PrivilegeLevelHint;

	return CanRecordDVRClips_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanBrowseInternet(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanBrowseInternet = nullptr;

	if (!pFnCanBrowseInternet)
	{
		pFnCanBrowseInternet = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet");

	}

	UOnlinePlayerInterfaceEOS_execCanBrowseInternet_Parms CanBrowseInternet_Parms;
	CanBrowseInternet_Parms.LocalUserNum = LocalUserNum;
	CanBrowseInternet_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanBrowseInternet_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanBrowseInternet, &CanBrowseInternet_Parms, nullptr);
	PrivilegeLevelHint = CanBrowseInternet_Parms.PrivilegeLevelHint;

	return CanBrowseInternet_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareWithSocialNetwork(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShareWithSocialNetwork = nullptr;

	if (!pFnCanShareWithSocialNetwork)
	{
		pFnCanShareWithSocialNetwork = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork");

	}

	UOnlinePlayerInterfaceEOS_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;
	CanShareWithSocialNetwork_Parms.LocalUserNum = LocalUserNum;
	CanShareWithSocialNetwork_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareWithSocialNetwork_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, nullptr);
	PrivilegeLevelHint = CanShareWithSocialNetwork_Parms.PrivilegeLevelHint;

	return CanShareWithSocialNetwork_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShareKinectContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShareKinectContent = nullptr;

	if (!pFnCanShareKinectContent)
	{
		pFnCanShareKinectContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent");

	}

	UOnlinePlayerInterfaceEOS_execCanShareKinectContent_Parms CanShareKinectContent_Parms;
	CanShareKinectContent_Parms.LocalUserNum = LocalUserNum;
	CanShareKinectContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareKinectContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShareKinectContent, &CanShareKinectContent_Parms, nullptr);
	PrivilegeLevelHint = CanShareKinectContent_Parms.PrivilegeLevelHint;

	return CanShareKinectContent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanUploadFitnessData(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanUploadFitnessData = nullptr;

	if (!pFnCanUploadFitnessData)
	{
		pFnCanUploadFitnessData = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData");

	}

	UOnlinePlayerInterfaceEOS_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;
	CanUploadFitnessData_Parms.LocalUserNum = LocalUserNum;
	CanUploadFitnessData_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUploadFitnessData_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, nullptr);
	PrivilegeLevelHint = CanUploadFitnessData_Parms.PrivilegeLevelHint;

	return CanUploadFitnessData_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::SetPrimaryPlayerGamepadToLastInput()
{
	static UFunction* pFnSetPrimaryPlayerGamepadToLastInput = nullptr;

	if (!pFnSetPrimaryPlayerGamepadToLastInput)
	{
		pFnSetPrimaryPlayerGamepadToLastInput = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput");

	}

	UOnlinePlayerInterfaceEOS_execSetPrimaryPlayerGamepadToLastInput_Parms SetPrimaryPlayerGamepadToLastInput_Parms;

	this->ProcessEvent(pFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* pFnClearUserSwitchCompleteDelegate = nullptr;

	if (!pFnClearUserSwitchCompleteDelegate)
	{
		pFnClearUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearUserSwitchCompleteDelegate_Parms ClearUserSwitchCompleteDelegate_Parms;
	memcpy_s(&ClearUserSwitchCompleteDelegate_Parms.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* pFnAddUserSwitchCompleteDelegate = nullptr;

	if (!pFnAddUserSwitchCompleteDelegate)
	{
		pFnAddUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddUserSwitchCompleteDelegate_Parms AddUserSwitchCompleteDelegate_Parms;
	memcpy_s(&AddUserSwitchCompleteDelegate_Parms.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUserSwitchComplete(unsigned char LocalUserNum)
{
	static UFunction* pFnOnUserSwitchComplete = nullptr;

	if (!pFnOnUserSwitchComplete)
	{
		pFnOnUserSwitchComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnUserSwitchComplete_Parms OnUserSwitchComplete_Parms;
	OnUserSwitchComplete_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnUserSwitchComplete, &OnUserSwitchComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ClearLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnClearLoginStatusChangeDelegate = nullptr;

	if (!pFnClearLoginStatusChangeDelegate)
	{
		pFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy_s(&ClearLoginStatusChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::AddLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnAddLoginStatusChangeDelegate = nullptr;

	if (!pFnAddLoginStatusChangeDelegate)
	{
		pFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy_s(&AddLoginStatusChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* pFnOnLoginStatusChange = nullptr;

	if (!pFnOnLoginStatusChange)
	{
		pFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange");

	}

	UOnlinePlayerInterfaceEOS_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy_s(&OnLoginStatusChange_Parms.NewId, 0x48, &NewId, 0x48);

	this->ProcessEvent(pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<unsigned char>          Key                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::GetPlayHistoryRegistrationKey(TArray<unsigned char>& Key)
{
	static UFunction* pFnGetPlayHistoryRegistrationKey = nullptr;

	if (!pFnGetPlayHistoryRegistrationKey)
	{
		pFnGetPlayHistoryRegistrationKey = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey");

	}

	UOnlinePlayerInterfaceEOS_execGetPlayHistoryRegistrationKey_Parms GetPlayHistoryRegistrationKey_Parms;

	this->ProcessEvent(pFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Parms, nullptr);
	memcpy_s(&GetPlayHistoryRegistrationKey_Parms.Key, 0x10, &Key, 0x10);

	return GetPlayHistoryRegistrationKey_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bShowUi                        (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::CheckParentalControlInfo(unsigned long bShowUi)
{
	static UFunction* pFnCheckParentalControlInfo = nullptr;

	if (!pFnCheckParentalControlInfo)
	{
		pFnCheckParentalControlInfo = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo");

	}

	UOnlinePlayerInterfaceEOS_execCheckParentalControlInfo_Parms CheckParentalControlInfo_Parms;
	CheckParentalControlInfo_Parms.bShowUi = bShowUi;

	this->ProcessEvent(pFnCheckParentalControlInfo, &CheckParentalControlInfo_Parms, nullptr);

	return CheckParentalControlInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlinePlayerInterfaceEOS::GetActiveDiscDLC()
{
	static UFunction* pFnGetActiveDiscDLC = nullptr;

	if (!pFnGetActiveDiscDLC)
	{
		pFnGetActiveDiscDLC = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC");

	}

	UOnlinePlayerInterfaceEOS_execGetActiveDiscDLC_Parms GetActiveDiscDLC_Parms;

	this->ProcessEvent(pFnGetActiveDiscDLC, &GetActiveDiscDLC_Parms, nullptr);

	return GetActiveDiscDLC_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRequiresOnlineSubscription    (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription)
{
	static UFunction* pFnSetOnlineSubscriptionRequirement = nullptr;

	if (!pFnSetOnlineSubscriptionRequirement)
	{
		pFnSetOnlineSubscriptionRequirement = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement");

	}

	UOnlinePlayerInterfaceEOS_execSetOnlineSubscriptionRequirement_Parms SetOnlineSubscriptionRequirement_Parms;
	SetOnlineSubscriptionRequirement_Parms.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	this->ProcessEvent(pFnSetOnlineSubscriptionRequirement, &SetOnlineSubscriptionRequirement_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)

int UOnlinePlayerInterfaceEOS::GetControllerID(int LocalPlayerNum)
{
	static UFunction* pFnGetControllerID = nullptr;

	if (!pFnGetControllerID)
	{
		pFnGetControllerID = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID");

	}

	UOnlinePlayerInterfaceEOS_execGetControllerID_Parms GetControllerID_Parms;
	memcpy_s(&GetControllerID_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnGetControllerID, &GetControllerID_Parms, nullptr);

	return GetControllerID_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlinePlayerInterfaceEOS::GetConnectedControllerNames()
{
	static UFunction* pFnGetConnectedControllerNames = nullptr;

	if (!pFnGetConnectedControllerNames)
	{
		pFnGetConnectedControllerNames = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames");

	}

	UOnlinePlayerInterfaceEOS_execGetConnectedControllerNames_Parms GetConnectedControllerNames_Parms;

	this->ProcessEvent(pFnGetConnectedControllerNames, &GetConnectedControllerNames_Parms, nullptr);

	return GetConnectedControllerNames_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLocalPlayerRemoved(int LocalPlayerNum)
{
	static UFunction* pFnOnLocalPlayerRemoved = nullptr;

	if (!pFnOnLocalPlayerRemoved)
	{
		pFnOnLocalPlayerRemoved = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved");

	}

	UOnlinePlayerInterfaceEOS_execOnLocalPlayerRemoved_Parms OnLocalPlayerRemoved_Parms;
	memcpy_s(&OnLocalPlayerRemoved_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnOnLocalPlayerRemoved, &OnLocalPlayerRemoved_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::UnregisterController(int LocalPlayerNum)
{
	static UFunction* pFnUnregisterController = nullptr;

	if (!pFnUnregisterController)
	{
		pFnUnregisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController");

	}

	UOnlinePlayerInterfaceEOS_execUnregisterController_Parms UnregisterController_Parms;
	memcpy_s(&UnregisterController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnUnregisterController, &UnregisterController_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            ControllerId                   (CPF_OptionalParm | CPF_Parm)

void UOnlinePlayerInterfaceEOS::RegisterController(int LocalPlayerNum, int ControllerId)
{
	static UFunction* pFnRegisterController = nullptr;

	if (!pFnRegisterController)
	{
		pFnRegisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController");

	}

	UOnlinePlayerInterfaceEOS_execRegisterController_Parms RegisterController_Parms;
	memcpy_s(&RegisterController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&RegisterController_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnRegisterController, &RegisterController_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::CanRegisterController(int LocalPlayerNum)
{
	static UFunction* pFnCanRegisterController = nullptr;

	if (!pFnCanRegisterController)
	{
		pFnCanRegisterController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController");

	}

	UOnlinePlayerInterfaceEOS_execCanRegisterController_Parms CanRegisterController_Parms;
	memcpy_s(&CanRegisterController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnCanRegisterController, &CanRegisterController_Parms, nullptr);

	return CanRegisterController_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            ControllerId                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowBindings(int ControllerId)
{
	static UFunction* pFnShowBindings = nullptr;

	if (!pFnShowBindings)
	{
		pFnShowBindings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings");

	}

	UOnlinePlayerInterfaceEOS_execShowBindings_Parms ShowBindings_Parms;
	memcpy_s(&ShowBindings_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnShowBindings, &ShowBindings_Parms, nullptr);

	return ShowBindings_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   LayoutName                     (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetControllerLayout(int ControllerId, struct FName LayoutName)
{
	static UFunction* pFnSetControllerLayout = nullptr;

	if (!pFnSetControllerLayout)
	{
		pFnSetControllerLayout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout");

	}

	UOnlinePlayerInterfaceEOS_execSetControllerLayout_Parms SetControllerLayout_Parms;
	memcpy_s(&SetControllerLayout_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerLayout_Parms.LayoutName, 0x8, &LayoutName, 0x8);

	this->ProcessEvent(pFnSetControllerLayout, &SetControllerLayout_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  TargetAPI                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::SetInputAPI(unsigned char TargetAPI)
{
	static UFunction* pFnSetInputAPI = nullptr;

	if (!pFnSetInputAPI)
	{
		pFnSetInputAPI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI");

	}

	UOnlinePlayerInterfaceEOS_execSetInputAPI_Parms SetInputAPI_Parms;
	SetInputAPI_Parms.TargetAPI = TargetAPI;

	this->ProcessEvent(pFnSetInputAPI, &SetInputAPI_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* pFnClearInputAPIChangedDelegate = nullptr;

	if (!pFnClearInputAPIChangedDelegate)
	{
		pFnClearInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearInputAPIChangedDelegate_Parms ClearInputAPIChangedDelegate_Parms;
	memcpy_s(&ClearInputAPIChangedDelegate_Parms.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(pFnClearInputAPIChangedDelegate, &ClearInputAPIChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* pFnAddInputAPIChangedDelegate = nullptr;

	if (!pFnAddInputAPIChangedDelegate)
	{
		pFnAddInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddInputAPIChangedDelegate_Parms AddInputAPIChangedDelegate_Parms;
	memcpy_s(&AddInputAPIChangedDelegate_Parms.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(pFnAddInputAPIChangedDelegate, &AddInputAPIChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  TargetAPI                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnInputAPIChanged(unsigned char TargetAPI)
{
	static UFunction* pFnOnInputAPIChanged = nullptr;

	if (!pFnOnInputAPIChanged)
	{
		pFnOnInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged");

	}

	UOnlinePlayerInterfaceEOS_execOnInputAPIChanged_Parms OnInputAPIChanged_Parms;
	OnInputAPIChanged_Parms.TargetAPI = TargetAPI;

	this->ProcessEvent(pFnOnInputAPIChanged, &OnInputAPIChanged_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* pFnClearUnregisteredControllerDelegate = nullptr;

	if (!pFnClearUnregisteredControllerDelegate)
	{
		pFnClearUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearUnregisteredControllerDelegate_Parms ClearUnregisteredControllerDelegate_Parms;
	memcpy_s(&ClearUnregisteredControllerDelegate_Parms.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnClearUnregisteredControllerDelegate, &ClearUnregisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* pFnClearRegisteredControllerDelegate = nullptr;

	if (!pFnClearRegisteredControllerDelegate)
	{
		pFnClearRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearRegisteredControllerDelegate_Parms ClearRegisteredControllerDelegate_Parms;
	memcpy_s(&ClearRegisteredControllerDelegate_Parms.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisteredControllerDelegate, &ClearRegisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* pFnAddUnregisteredControllerDelegate = nullptr;

	if (!pFnAddUnregisteredControllerDelegate)
	{
		pFnAddUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddUnregisteredControllerDelegate_Parms AddUnregisteredControllerDelegate_Parms;
	memcpy_s(&AddUnregisteredControllerDelegate_Parms.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnAddUnregisteredControllerDelegate, &AddUnregisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* pFnAddRegisteredControllerDelegate = nullptr;

	if (!pFnAddRegisteredControllerDelegate)
	{
		pFnAddRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddRegisteredControllerDelegate_Parms AddRegisteredControllerDelegate_Parms;
	memcpy_s(&AddRegisteredControllerDelegate_Parms.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisteredControllerDelegate, &AddRegisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUnregisteredController(int LocalPlayerNum)
{
	static UFunction* pFnOnUnregisteredController = nullptr;

	if (!pFnOnUnregisteredController)
	{
		pFnOnUnregisteredController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController");

	}

	UOnlinePlayerInterfaceEOS_execOnUnregisteredController_Parms OnUnregisteredController_Parms;
	memcpy_s(&OnUnregisteredController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnOnUnregisteredController, &OnUnregisteredController_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            ControllerId                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnRegisteredController(int LocalPlayerNum, int ControllerId)
{
	static UFunction* pFnOnRegisteredController = nullptr;

	if (!pFnOnRegisteredController)
	{
		pFnOnRegisteredController = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController");

	}

	UOnlinePlayerInterfaceEOS_execOnRegisteredController_Parms OnRegisteredController_Parms;
	memcpy_s(&OnRegisteredController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&OnRegisteredController_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnOnRegisteredController, &OnRegisteredController_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 InPostID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         StringReplaceList              (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddInGamePost(struct FString InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList)
{
	static UFunction* pFnAddInGamePost = nullptr;

	if (!pFnAddInGamePost)
	{
		pFnAddInGamePost = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost");

	}

	UOnlinePlayerInterfaceEOS_execAddInGamePost_Parms AddInGamePost_Parms;
	memcpy_s(&AddInGamePost_Parms.InPostID, 0x10, &InPostID, 0x10);
	AddInGamePost_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddInGamePost_Parms.StringReplaceList, 0x10, &StringReplaceList, 0x10);

	this->ProcessEvent(pFnAddInGamePost, &AddInGamePost_Parms, nullptr);

	return AddInGamePost_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int                            Points                         (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::UpdateStat(unsigned char LocalUserNum, struct FName StatName, int Points)
{
	static UFunction* pFnUpdateStat = nullptr;

	if (!pFnUpdateStat)
	{
		pFnUpdateStat = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat");

	}

	UOnlinePlayerInterfaceEOS_execUpdateStat_Parms UpdateStat_Parms;
	UpdateStat_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UpdateStat_Parms.StatName, 0x8, &StatName, 0x8);
	memcpy_s(&UpdateStat_Parms.Points, 0x4, &Points, 0x4);

	this->ProcessEvent(pFnUpdateStat, &UpdateStat_Parms, nullptr);

	return UpdateStat_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnClearSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!pFnClearSaveDataNoSpaceDialogCompleteDelegate)
	{
		pFnClearSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearSaveDataNoSpaceDialogCompleteDelegate_Parms ClearSaveDataNoSpaceDialogCompleteDelegate_Parms;
	memcpy_s(&ClearSaveDataNoSpaceDialogCompleteDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnAddSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!pFnAddSaveDataNoSpaceDialogCompleteDelegate)
	{
		pFnAddSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddSaveDataNoSpaceDialogCompleteDelegate_Parms AddSaveDataNoSpaceDialogCompleteDelegate_Parms;
	memcpy_s(&AddSaveDataNoSpaceDialogCompleteDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bContinueWithoutSave           (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave)
{
	static UFunction* pFnOnSaveDataNoSpaceDialogComplete = nullptr;

	if (!pFnOnSaveDataNoSpaceDialogComplete)
	{
		pFnOnSaveDataNoSpaceDialogComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnSaveDataNoSpaceDialogComplete_Parms OnSaveDataNoSpaceDialogComplete_Parms;
	OnSaveDataNoSpaceDialogComplete_Parms.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent(pFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys)
{
	static UFunction* pFnRecordPlayersRecentlyMetKeys = nullptr;

	if (!pFnRecordPlayersRecentlyMetKeys)
	{
		pFnRecordPlayersRecentlyMetKeys = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys");

	}

	UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMetKeys_Parms RecordPlayersRecentlyMetKeys_Parms;
	RecordPlayersRecentlyMetKeys_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RecordPlayersRecentlyMetKeys_Parms.PlayerKeys, 0x10, &PlayerKeys, 0x10);

	this->ProcessEvent(pFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Parms, nullptr);

	return RecordPlayersRecentlyMetKeys_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            AchievementId                  (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::IsAchievementUnlocked(int AchievementId)
{
	static UFunction* pFnIsAchievementUnlocked = nullptr;

	if (!pFnIsAchievementUnlocked)
	{
		pFnIsAchievementUnlocked = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked");

	}

	UOnlinePlayerInterfaceEOS_execIsAchievementUnlocked_Parms IsAchievementUnlocked_Parms;
	memcpy_s(&IsAchievementUnlocked_Parms.AchievementId, 0x4, &AchievementId, 0x4);

	this->ProcessEvent(pFnIsAchievementUnlocked, &IsAchievementUnlocked_Parms, nullptr);

	return IsAchievementUnlocked_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowContentMarketplaceUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowContentMarketplaceUI = nullptr;

	if (!pFnShowContentMarketplaceUI)
	{
		pFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI");

	}

	UOnlinePlayerInterfaceEOS_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, nullptr);

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowFriendsInviteUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowFriendsInviteUI = nullptr;

	if (!pFnShowFriendsInviteUI)
	{
		pFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI");

	}

	UOnlinePlayerInterfaceEOS_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowFriendsInviteUI_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, nullptr);

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowAchievementsUI = nullptr;

	if (!pFnShowAchievementsUI)
	{
		pFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI");

	}

	UOnlinePlayerInterfaceEOS_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowAchievementsUI, &ShowAchievementsUI_Parms, nullptr);

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowMessagesUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowMessagesUI = nullptr;

	if (!pFnShowMessagesUI)
	{
		pFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI");

	}

	UOnlinePlayerInterfaceEOS_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowMessagesUI, &ShowMessagesUI_Parms, nullptr);

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowFeedbackUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowFeedbackUI = nullptr;

	if (!pFnShowFeedbackUI)
	{
		pFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI");

	}

	UOnlinePlayerInterfaceEOS_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowFeedbackUI_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnShowFeedbackUI, &ShowFeedbackUI_Parms, nullptr);

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnRemoveCanPlayOnlineChangedDelegate = nullptr;

	if (!pFnRemoveCanPlayOnlineChangedDelegate)
	{
		pFnRemoveCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execRemoveCanPlayOnlineChangedDelegate_Parms RemoveCanPlayOnlineChangedDelegate_Parms;
	memcpy_s(&RemoveCanPlayOnlineChangedDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnAddCanPlayOnlineChangedDelegate = nullptr;

	if (!pFnAddCanPlayOnlineChangedDelegate)
	{
		pFnAddCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddCanPlayOnlineChangedDelegate_Parms AddCanPlayOnlineChangedDelegate_Parms;
	memcpy_s(&AddCanPlayOnlineChangedDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::CanPlayOnlineChanged(unsigned char LocalUserNum)
{
	static UFunction* pFnCanPlayOnlineChanged = nullptr;

	if (!pFnCanPlayOnlineChanged)
	{
		pFnCanPlayOnlineChanged = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged");

	}

	UOnlinePlayerInterfaceEOS_execCanPlayOnlineChanged_Parms CanPlayOnlineChanged_Parms;
	CanPlayOnlineChanged_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearUserSignInCompleteDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearUserSignInCompleteDelegate = nullptr;

	if (!pFnClearUserSignInCompleteDelegate)
	{
		pFnClearUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearUserSignInCompleteDelegate_Parms ClearUserSignInCompleteDelegate_Parms;
	memcpy_s(&ClearUserSignInCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddUserSignInCompleteDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddUserSignInCompleteDelegate = nullptr;

	if (!pFnAddUserSignInCompleteDelegate)
	{
		pFnAddUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddUserSignInCompleteDelegate_Parms AddUserSignInCompleteDelegate_Parms;
	memcpy_s(&AddUserSignInCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnUserSignInComplete(unsigned char LocalUserNum)
{
	static UFunction* pFnOnUserSignInComplete = nullptr;

	if (!pFnOnUserSignInComplete)
	{
		pFnOnUserSignInComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnUserSignInComplete_Parms OnUserSignInComplete_Parms;
	OnUserSignInComplete_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnUserSignInComplete, &OnUserSignInComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::ShowCustomMessageUI(unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* pFnShowCustomMessageUI = nullptr;

	if (!pFnShowCustomMessageUI)
	{
		pFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI");

	}

	UOnlinePlayerInterfaceEOS_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowCustomMessageUI_Parms.MessageTitle, 0x10, &MessageTitle, 0x10);
	memcpy_s(&ShowCustomMessageUI_Parms.NonEditableMessage, 0x10, &NonEditableMessage, 0x10);
	memcpy_s(&ShowCustomMessageUI_Parms.EditableMessage, 0x10, &EditableMessage, 0x10);

	this->ProcessEvent(pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, nullptr);
	memcpy_s(&ShowCustomMessageUI_Parms.Recipients, 0x10, &Recipients, 0x10);

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static UFunction* pFnClearCrossTitleProfileSettings = nullptr;

	if (!pFnClearCrossTitleProfileSettings)
	{
		pFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings");

	}

	UOnlinePlayerInterfaceEOS_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearCrossTitleProfileSettings_Parms.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static UFunction* pFnGetCrossTitleProfileSettings = nullptr;

	if (!pFnGetCrossTitleProfileSettings)
	{
		pFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings");

	}

	UOnlinePlayerInterfaceEOS_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetCrossTitleProfileSettings_Parms.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, nullptr);

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!pFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!pFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!pFnOnReadCrossTitleProfileSettingsComplete)
	{
		pFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Parms.TitleId, 0x4, &TitleId, 0x4);
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnReadCrossTitleProfileSettings = nullptr;

	if (!pFnReadCrossTitleProfileSettings)
	{
		pFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings");

	}

	UOnlinePlayerInterfaceEOS_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadCrossTitleProfileSettings_Parms.TitleId, 0x4, &TitleId, 0x4);
	memcpy_s(&ReadCrossTitleProfileSettings_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	this->ProcessEvent(pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, nullptr);

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!pFnClearWritePlayerStorageCompleteDelegate)
	{
		pFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!pFnAddWritePlayerStorageCompleteDelegate)
	{
		pFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnWritePlayerStorageComplete = nullptr;

	if (!pFnOnWritePlayerStorageComplete)
	{
		pFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int                            DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static UFunction* pFnWritePlayerStorage = nullptr;

	if (!pFnWritePlayerStorage)
	{
		pFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage");

	}

	UOnlinePlayerInterfaceEOS_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&WritePlayerStorage_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&WritePlayerStorage_Parms.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(pFnWritePlayerStorage, &WritePlayerStorage_Parms, nullptr);

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!pFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!pFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!pFnOnReadPlayerStorageForNetIdComplete)
	{
		pFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Parms.NetId, 0x48, &NetId, 0x48);
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadPlayerStorageForNetId(unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* pFnReadPlayerStorageForNetId = nullptr;

	if (!pFnReadPlayerStorageForNetId)
	{
		pFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId");

	}

	UOnlinePlayerInterfaceEOS_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadPlayerStorageForNetId_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ReadPlayerStorageForNetId_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);

	this->ProcessEvent(pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, nullptr);

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!pFnClearReadPlayerStorageCompleteDelegate)
	{
		pFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!pFnAddReadPlayerStorageCompleteDelegate)
	{
		pFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlayerStorageComplete = nullptr;

	if (!pFnOnReadPlayerStorageComplete)
	{
		pFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int                            DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static UFunction* pFnReadPlayerStorage = nullptr;

	if (!pFnReadPlayerStorage)
	{
		pFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage");

	}

	UOnlinePlayerInterfaceEOS_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadPlayerStorage_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&ReadPlayerStorage_Parms.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(pFnReadPlayerStorage, &ReadPlayerStorage_Parms, nullptr);

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlinePlayerInterfaceEOS::GetPlayerStorage(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerStorage = nullptr;

	if (!pFnGetPlayerStorage)
	{
		pFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage");

	}

	UOnlinePlayerInterfaceEOS_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerStorage, &GetPlayerStorage_Parms, nullptr);

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::RequestNativePlatformAuthTicket(int LocalUserNum, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestNativePlatformAuthTicket = nullptr;

	if (!pFnRequestNativePlatformAuthTicket)
	{
		pFnRequestNativePlatformAuthTicket = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket");

	}

	UOnlinePlayerInterfaceEOS_execRequestNativePlatformAuthTicket_Parms RequestNativePlatformAuthTicket_Parms;
	memcpy_s(&RequestNativePlatformAuthTicket_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);
	memcpy_s(&RequestNativePlatformAuthTicket_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRequestNativePlatformAuthTicket, &RequestNativePlatformAuthTicket_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)
// struct FString                 PlatformAuthTicket             (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnRequestNativePlatformAuthTicketComplete(int LocalUserNum, struct FString PlatformAuthTicket)
{
	static UFunction* pFnOnRequestNativePlatformAuthTicketComplete = nullptr;

	if (!pFnOnRequestNativePlatformAuthTicketComplete)
	{
		pFnOnRequestNativePlatformAuthTicketComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnRequestNativePlatformAuthTicketComplete_Parms OnRequestNativePlatformAuthTicketComplete_Parms;
	memcpy_s(&OnRequestNativePlatformAuthTicketComplete_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);
	memcpy_s(&OnRequestNativePlatformAuthTicketComplete_Parms.PlatformAuthTicket, 0x10, &PlatformAuthTicket, 0x10);

	this->ProcessEvent(pFnOnRequestNativePlatformAuthTicketComplete, &OnRequestNativePlatformAuthTicketComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
// [0x00040803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::eventLinkedAccount(int LocalUserNum)
{
	static UFunction* pFnLinkedAccount = nullptr;

	if (!pFnLinkedAccount)
	{
		pFnLinkedAccount = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount");

	}

	UOnlinePlayerInterfaceEOS_eventLinkedAccount_Parms LinkedAccount_Parms;
	memcpy_s(&LinkedAccount_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	this->ProcessEvent(pFnLinkedAccount, &LinkedAccount_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RefreshConnectLogin
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::RefreshConnectLogin(int LocalUserNum)
{
	static UFunction* pFnRefreshConnectLogin = nullptr;

	if (!pFnRefreshConnectLogin)
	{
		pFnRefreshConnectLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RefreshConnectLogin");

	}

	UOnlinePlayerInterfaceEOS_execRefreshConnectLogin_Parms RefreshConnectLogin_Parms;
	memcpy_s(&RefreshConnectLogin_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	pFnRefreshConnectLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRefreshConnectLogin, &RefreshConnectLogin_Parms, nullptr);

	pFnRefreshConnectLogin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::ConnectLogin(int LocalUserNum)
{
	static UFunction* pFnConnectLogin = nullptr;

	if (!pFnConnectLogin)
	{
		pFnConnectLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin");

	}

	UOnlinePlayerInterfaceEOS_execConnectLogin_Parms ConnectLogin_Parms;
	memcpy_s(&ConnectLogin_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	pFnConnectLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnConnectLogin, &ConnectLogin_Parms, nullptr);

	pFnConnectLogin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            InviteFrom                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::HasIncomingFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId InviteFrom)
{
	static UFunction* pFnHasIncomingFriendInvite = nullptr;

	if (!pFnHasIncomingFriendInvite)
	{
		pFnHasIncomingFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite");

	}

	UOnlinePlayerInterfaceEOS_execHasIncomingFriendInvite_Parms HasIncomingFriendInvite_Parms;
	HasIncomingFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&HasIncomingFriendInvite_Parms.InviteFrom, 0x48, &InviteFrom, 0x48);

	pFnHasIncomingFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasIncomingFriendInvite, &HasIncomingFriendInvite_Parms, nullptr);

	pFnHasIncomingFriendInvite->FunctionFlags |= 0x400;

	return HasIncomingFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::SupportInGameLogin()
{
	static UFunction* pFnSupportInGameLogin = nullptr;

	if (!pFnSupportInGameLogin)
	{
		pFnSupportInGameLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin");

	}

	UOnlinePlayerInterfaceEOS_execSupportInGameLogin_Parms SupportInGameLogin_Parms;

	this->ProcessEvent(pFnSupportInGameLogin, &SupportInGameLogin_Parms, nullptr);

	return SupportInGameLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::HasFriendsFunctionality()
{
	static UFunction* pFnHasFriendsFunctionality = nullptr;

	if (!pFnHasFriendsFunctionality)
	{
		pFnHasFriendsFunctionality = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality");

	}

	UOnlinePlayerInterfaceEOS_execHasFriendsFunctionality_Parms HasFriendsFunctionality_Parms;

	this->ProcessEvent(pFnHasFriendsFunctionality, &HasFriendsFunctionality_Parms, nullptr);

	return HasFriendsFunctionality_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            MessageIndex                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static UFunction* pFnDeleteMessage = nullptr;

	if (!pFnDeleteMessage)
	{
		pFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage");

	}

	UOnlinePlayerInterfaceEOS_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&DeleteMessage_Parms.MessageIndex, 0x4, &MessageIndex, 0x4);

	this->ProcessEvent(pFnDeleteMessage, &DeleteMessage_Parms, nullptr);

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = nullptr;

	if (!pFnClearFriendMessageReceivedDelegate)
	{
		pFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = nullptr;

	if (!pFnAddFriendMessageReceivedDelegate)
	{
		pFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendMessageReceivedDelegate_Parms.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendMessageReceived(unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message)
{
	static UFunction* pFnOnFriendMessageReceived = nullptr;

	if (!pFnOnFriendMessageReceived)
	{
		pFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived");

	}

	UOnlinePlayerInterfaceEOS_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnFriendMessageReceived_Parms.SendingPlayer, 0x48, &SendingPlayer, 0x48);
	memcpy_s(&OnFriendMessageReceived_Parms.SendingNick, 0x10, &SendingNick, 0x10);
	memcpy_s(&OnFriendMessageReceived_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* pFnGetFriendMessages = nullptr;

	if (!pFnGetFriendMessages)
	{
		pFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages");

	}

	UOnlinePlayerInterfaceEOS_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetFriendMessages, &GetFriendMessages_Parms, nullptr);
	memcpy_s(&GetFriendMessages_Parms.FriendMessages, 0x10, &FriendMessages, 0x10);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!pFnClearJoinFriendGameCompleteDelegate)
	{
		pFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!pFnAddJoinFriendGameCompleteDelegate)
	{
		pFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnJoinFriendGameComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinFriendGameComplete = nullptr;

	if (!pFnOnJoinFriendGameComplete)
	{
		pFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::JoinFriendGame(unsigned char LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* pFnJoinFriendGame = nullptr;

	if (!pFnJoinFriendGame)
	{
		pFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame");

	}

	UOnlinePlayerInterfaceEOS_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&JoinFriendGame_Parms.Friend, 0x48, &Friend, 0x48);

	this->ProcessEvent(pFnJoinFriendGame, &JoinFriendGame_Parms, nullptr);

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* pFnClearReceivedGameInviteDelegate = nullptr;

	if (!pFnClearReceivedGameInviteDelegate)
	{
		pFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* pFnAddReceivedGameInviteDelegate = nullptr;

	if (!pFnAddReceivedGameInviteDelegate)
	{
		pFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnReceivedGameInvite(unsigned char LocalUserNum, struct FString InviterName)
{
	static UFunction* pFnOnReceivedGameInvite = nullptr;

	if (!pFnOnReceivedGameInvite)
	{
		pFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite");

	}

	UOnlinePlayerInterfaceEOS_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnReceivedGameInvite_Parms.InviterName, 0x10, &InviterName, 0x10);

	this->ProcessEvent(pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, struct FString Text)
{
	static UFunction* pFnSendGameInviteToFriends = nullptr;

	if (!pFnSendGameInviteToFriends)
	{
		pFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends");

	}

	UOnlinePlayerInterfaceEOS_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SendGameInviteToFriends_Parms.Friends, 0x10, &Friends, 0x10);
	memcpy_s(&SendGameInviteToFriends_Parms.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, nullptr);

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendGameInviteToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text)
{
	static UFunction* pFnSendGameInviteToFriend = nullptr;

	if (!pFnSendGameInviteToFriend)
	{
		pFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend");

	}

	UOnlinePlayerInterfaceEOS_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SendGameInviteToFriend_Parms.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendGameInviteToFriend_Parms.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, nullptr);

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::SendMessageToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message)
{
	static UFunction* pFnSendMessageToFriend = nullptr;

	if (!pFnSendMessageToFriend)
	{
		pFnSendMessageToFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend");

	}

	UOnlinePlayerInterfaceEOS_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SendMessageToFriend_Parms.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendMessageToFriend_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnSendMessageToFriend, &SendMessageToFriend_Parms, nullptr);

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendInviteCanceledDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnClearFriendInviteCanceledDelegate = nullptr;

	if (!pFnClearFriendInviteCanceledDelegate)
	{
		pFnClearFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearFriendInviteCanceledDelegate_Parms ClearFriendInviteCanceledDelegate_Parms;
	ClearFriendInviteCanceledDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendInviteCanceledDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendInviteCanceledDelegate, &ClearFriendInviteCanceledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteCanceledDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnAddFriendInviteCanceledDelegate = nullptr;

	if (!pFnAddFriendInviteCanceledDelegate)
	{
		pFnAddFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteCanceledDelegate_Parms AddFriendInviteCanceledDelegate_Parms;
	AddFriendInviteCanceledDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendInviteCanceledDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendInviteCanceledDelegate, &AddFriendInviteCanceledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            CanceledUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteCanceled(unsigned char LocalUserNum, struct FUniqueNetId CanceledUserId)
{
	static UFunction* pFnOnFriendInviteCanceled = nullptr;

	if (!pFnOnFriendInviteCanceled)
	{
		pFnOnFriendInviteCanceled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled");

	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteCanceled_Parms OnFriendInviteCanceled_Parms;
	OnFriendInviteCanceled_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnFriendInviteCanceled_Parms.CanceledUserId, 0x48, &CanceledUserId, 0x48);

	this->ProcessEvent(pFnOnFriendInviteCanceled, &OnFriendInviteCanceled_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = nullptr;

	if (!pFnClearFriendInviteReceivedDelegate)
	{
		pFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = nullptr;

	if (!pFnAddFriendInviteReceivedDelegate)
	{
		pFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendInviteReceivedDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnFriendInviteReceived(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message)
{
	static UFunction* pFnOnFriendInviteReceived = nullptr;

	if (!pFnOnFriendInviteReceived)
	{
		pFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived");

	}

	UOnlinePlayerInterfaceEOS_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnFriendInviteReceived_Parms.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);
	memcpy_s(&OnFriendInviteReceived_Parms.RequestingNick, 0x10, &RequestingNick, 0x10);
	memcpy_s(&OnFriendInviteReceived_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::RemoveFriend(unsigned char LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* pFnRemoveFriend = nullptr;

	if (!pFnRemoveFriend)
	{
		pFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend");

	}

	UOnlinePlayerInterfaceEOS_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RemoveFriend_Parms.FormerFriend, 0x48, &FormerFriend, 0x48);

	this->ProcessEvent(pFnRemoveFriend, &RemoveFriend_Parms, nullptr);

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* pFnClearRemoveFriendCompleteDelegate = nullptr;

	if (!pFnClearRemoveFriendCompleteDelegate)
	{
		pFnClearRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearRemoveFriendCompleteDelegate_Parms ClearRemoveFriendCompleteDelegate_Parms;
	ClearRemoveFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Parms.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(pFnClearRemoveFriendCompleteDelegate, &ClearRemoveFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* pFnAddRemoveFriendCompleteDelegate = nullptr;

	if (!pFnAddRemoveFriendCompleteDelegate)
	{
		pFnAddRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddRemoveFriendCompleteDelegate_Parms AddRemoveFriendCompleteDelegate_Parms;
	AddRemoveFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddRemoveFriendCompleteDelegate_Parms.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(pFnAddRemoveFriendCompleteDelegate, &AddRemoveFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            RemovedID                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID)
{
	static UFunction* pFnOnRemoveFriendComplete = nullptr;

	if (!pFnOnRemoveFriendComplete)
	{
		pFnOnRemoveFriendComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnRemoveFriendComplete_Parms OnRemoveFriendComplete_Parms;
	OnRemoveFriendComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveFriendComplete_Parms.RemovedID, 0x48, &RemovedID, 0x48);

	this->ProcessEvent(pFnOnRemoveFriendComplete, &OnRemoveFriendComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::DenyFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* pFnDenyFriendInvite = nullptr;

	if (!pFnDenyFriendInvite)
	{
		pFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite");

	}

	UOnlinePlayerInterfaceEOS_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&DenyFriendInvite_Parms.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	this->ProcessEvent(pFnDenyFriendInvite, &DenyFriendInvite_Parms, nullptr);

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearDenyFriendInviteCompleteDelegate = nullptr;

	if (!pFnClearDenyFriendInviteCompleteDelegate)
	{
		pFnClearDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearDenyFriendInviteCompleteDelegate_Parms ClearDenyFriendInviteCompleteDelegate_Parms;
	ClearDenyFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearDenyFriendInviteCompleteDelegate, &ClearDenyFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddDenyFriendInviteCompleteDelegate = nullptr;

	if (!pFnAddDenyFriendInviteCompleteDelegate)
	{
		pFnAddDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddDenyFriendInviteCompleteDelegate_Parms AddDenyFriendInviteCompleteDelegate_Parms;
	AddDenyFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddDenyFriendInviteCompleteDelegate, &AddDenyFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* pFnOnDenyFriendInviteComplete = nullptr;

	if (!pFnOnDenyFriendInviteComplete)
	{
		pFnOnDenyFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnDenyFriendInviteComplete_Parms OnDenyFriendInviteComplete_Parms;
	memcpy_s(&OnDenyFriendInviteComplete_Parms.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnDenyFriendInviteComplete_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnOnDenyFriendInviteComplete, &OnDenyFriendInviteComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AcceptFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* pFnAcceptFriendInvite = nullptr;

	if (!pFnAcceptFriendInvite)
	{
		pFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite");

	}

	UOnlinePlayerInterfaceEOS_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AcceptFriendInvite_Parms.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	this->ProcessEvent(pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, nullptr);

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAcceptFriendInviteCompleteDelegate = nullptr;

	if (!pFnClearAcceptFriendInviteCompleteDelegate)
	{
		pFnClearAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearAcceptFriendInviteCompleteDelegate_Parms ClearAcceptFriendInviteCompleteDelegate_Parms;
	ClearAcceptFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearAcceptFriendInviteCompleteDelegate, &ClearAcceptFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAcceptFriendInviteCompleteDelegate = nullptr;

	if (!pFnAddAcceptFriendInviteCompleteDelegate)
	{
		pFnAddAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddAcceptFriendInviteCompleteDelegate_Parms AddAcceptFriendInviteCompleteDelegate_Parms;
	AddAcceptFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddAcceptFriendInviteCompleteDelegate, &AddAcceptFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* pFnOnAcceptFriendInviteComplete = nullptr;

	if (!pFnOnAcceptFriendInviteComplete)
	{
		pFnOnAcceptFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnAcceptFriendInviteComplete_Parms OnAcceptFriendInviteComplete_Parms;
	memcpy_s(&OnAcceptFriendInviteComplete_Parms.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnAcceptFriendInviteComplete_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnOnAcceptFriendInviteComplete, &OnAcceptFriendInviteComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!pFnClearAddFriendByNameCompleteDelegate)
	{
		pFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!pFnAddAddFriendByNameCompleteDelegate)
	{
		pFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAddFriendByNameComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAddFriendByNameComplete = nullptr;

	if (!pFnOnAddFriendByNameComplete)
	{
		pFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddFriendByName(unsigned char LocalUserNum, struct FString FriendName, struct FString Message)
{
	static UFunction* pFnAddFriendByName = nullptr;

	if (!pFnAddFriendByName)
	{
		pFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName");

	}

	UOnlinePlayerInterfaceEOS_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendByName_Parms.FriendName, 0x10, &FriendName, 0x10);
	memcpy_s(&AddFriendByName_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnAddFriendByName, &AddFriendByName_Parms, nullptr);

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::QueryUserByDisplayName(unsigned char LocalUserNum, struct FString DisplayName)
{
	static UFunction* pFnQueryUserByDisplayName = nullptr;

	if (!pFnQueryUserByDisplayName)
	{
		pFnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName");

	}

	UOnlinePlayerInterfaceEOS_execQueryUserByDisplayName_Parms QueryUserByDisplayName_Parms;
	QueryUserByDisplayName_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&QueryUserByDisplayName_Parms.DisplayName, 0x10, &DisplayName, 0x10);

	pFnQueryUserByDisplayName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQueryUserByDisplayName, &QueryUserByDisplayName_Parms, nullptr);

	pFnQueryUserByDisplayName->FunctionFlags |= 0x400;

	return QueryUserByDisplayName_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* pFnClearQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!pFnClearQueryUserByDisplayNameCompleteDelegate)
	{
		pFnClearQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearQueryUserByDisplayNameCompleteDelegate_Parms ClearQueryUserByDisplayNameCompleteDelegate_Parms;
	ClearQueryUserByDisplayNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Parms.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(pFnClearQueryUserByDisplayNameCompleteDelegate, &ClearQueryUserByDisplayNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* pFnAddQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!pFnAddQueryUserByDisplayNameCompleteDelegate)
	{
		pFnAddQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddQueryUserByDisplayNameCompleteDelegate_Parms AddQueryUserByDisplayNameCompleteDelegate_Parms;
	AddQueryUserByDisplayNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Parms.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(pFnAddQueryUserByDisplayNameCompleteDelegate, &AddQueryUserByDisplayNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 QueriedDisplayName             (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::OnQueryUserByDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId UserId)
{
	static UFunction* pFnOnQueryUserByDisplayName = nullptr;

	if (!pFnOnQueryUserByDisplayName)
	{
		pFnOnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName");

	}

	UOnlinePlayerInterfaceEOS_execOnQueryUserByDisplayName_Parms OnQueryUserByDisplayName_Parms;
	OnQueryUserByDisplayName_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUserByDisplayName_Parms.QueriedDisplayName, 0x10, &QueriedDisplayName, 0x10);
	memcpy_s(&OnQueryUserByDisplayName_Parms.UserId, 0x48, &UserId, 0x48);

	this->ProcessEvent(pFnOnQueryUserByDisplayName, &OnQueryUserByDisplayName_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AddFriend(unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message)
{
	static UFunction* pFnAddFriend = nullptr;

	if (!pFnAddFriend)
	{
		pFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend");

	}

	UOnlinePlayerInterfaceEOS_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriend_Parms.NewFriend, 0x48, &NewFriend, 0x48);
	memcpy_s(&AddFriend_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnAddFriend, &AddFriend_Parms, nullptr);

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearAddFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAddFriendCompleteDelegate = nullptr;

	if (!pFnClearAddFriendCompleteDelegate)
	{
		pFnClearAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearAddFriendCompleteDelegate_Parms ClearAddFriendCompleteDelegate_Parms;
	ClearAddFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAddFriendCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearAddFriendCompleteDelegate, &ClearAddFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddAddFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAddFriendCompleteDelegate = nullptr;

	if (!pFnAddAddFriendCompleteDelegate)
	{
		pFnAddAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddAddFriendCompleteDelegate_Parms AddAddFriendCompleteDelegate_Parms;
	AddAddFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAddFriendCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddAddFriendCompleteDelegate, &AddAddFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NewFriendId                    (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error)
{
	static UFunction* pFnOnAddFriendComplete = nullptr;

	if (!pFnOnAddFriendComplete)
	{
		pFnOnAddFriendComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnAddFriendComplete_Parms OnAddFriendComplete_Parms;
	memcpy_s(&OnAddFriendComplete_Parms.NewFriendId, 0x48, &NewFriendId, 0x48);
	memcpy_s(&OnAddFriendComplete_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnOnAddFriendComplete, &OnAddFriendComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  bWasCanceled                   (CPF_Parm | CPF_OutParm)

struct FString UOnlinePlayerInterfaceEOS::GetKeyboardInputResults(unsigned char& bWasCanceled)
{
	static UFunction* pFnGetKeyboardInputResults = nullptr;

	if (!pFnGetKeyboardInputResults)
	{
		pFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults");

	}

	UOnlinePlayerInterfaceEOS_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent(pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, nullptr);
	bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = nullptr;

	if (!pFnClearKeyboardInputDoneDelegate)
	{
		pFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy_s(&ClearKeyboardInputDoneDelegate_Parms.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = nullptr;

	if (!pFnAddKeyboardInputDoneDelegate)
	{
		pFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy_s(&AddKeyboardInputDoneDelegate_Parms.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnKeyboardInputComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnKeyboardInputComplete = nullptr;

	if (!pFnOnKeyboardInputComplete)
	{
		pFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// struct FString                 DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowKeyboardUI(unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength)
{
	static UFunction* pFnShowKeyboardUI = nullptr;

	if (!pFnShowKeyboardUI)
	{
		pFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI");

	}

	UOnlinePlayerInterfaceEOS_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowKeyboardUI_Parms.TitleText, 0x10, &TitleText, 0x10);
	memcpy_s(&ShowKeyboardUI_Parms.DescriptionText, 0x10, &DescriptionText, 0x10);
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Parms.DefaultText, 0x10, &DefaultText, 0x10);
	memcpy_s(&ShowKeyboardUI_Parms.MaxResultLength, 0x4, &MaxResultLength, 0x4);

	this->ProcessEvent(pFnShowKeyboardUI, &ShowKeyboardUI_Parms, nullptr);

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* pFnSetOnlineStatus = nullptr;

	if (!pFnSetOnlineStatus)
	{
		pFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus");

	}

	UOnlinePlayerInterfaceEOS_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetOnlineStatus_Parms.StatusId, 0x4, &StatusId, 0x4);

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetOnlineStatus, &SetOnlineStatus_Parms, nullptr);

	pFnSetOnlineStatus->FunctionFlags |= 0x400;
	memcpy_s(&SetOnlineStatus_Parms.LocalizedStringSettings, 0x10, &LocalizedStringSettings, 0x10);
	memcpy_s(&SetOnlineStatus_Parms.Properties, 0x10, &Properties, 0x10);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            Count                          (CPF_OptionalParm | CPF_Parm)
// int                            StartingAt                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

unsigned char UOnlinePlayerInterfaceEOS::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* pFnGetFriendsList = nullptr;

	if (!pFnGetFriendsList)
	{
		pFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList");

	}

	UOnlinePlayerInterfaceEOS_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetFriendsList_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&GetFriendsList_Parms.StartingAt, 0x4, &StartingAt, 0x4);

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendsList, &GetFriendsList_Parms, nullptr);

	pFnGetFriendsList->FunctionFlags |= 0x400;
	memcpy_s(&GetFriendsList_Parms.Friends, 0x10, &Friends, 0x10);

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = nullptr;

	if (!pFnClearReadFriendsCompleteDelegate)
	{
		pFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = nullptr;

	if (!pFnAddReadFriendsCompleteDelegate)
	{
		pFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadFriendsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadFriendsComplete = nullptr;

	if (!pFnOnReadFriendsComplete)
	{
		pFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            Count                          (CPF_OptionalParm | CPF_Parm)
// int                            StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static UFunction* pFnReadFriendsList = nullptr;

	if (!pFnReadFriendsList)
	{
		pFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList");

	}

	UOnlinePlayerInterfaceEOS_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadFriendsList_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReadFriendsList_Parms.StartingAt, 0x4, &StartingAt, 0x4);

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadFriendsList, &ReadFriendsList_Parms, nullptr);

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!pFnClearWriteProfileSettingsCompleteDelegate)
	{
		pFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!pFnAddWriteProfileSettingsCompleteDelegate)
	{
		pFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnWriteProfileSettingsComplete = nullptr;

	if (!pFnOnWriteProfileSettingsComplete)
	{
		pFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnWriteProfileSettings = nullptr;

	if (!pFnWriteProfileSettings)
	{
		pFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings");

	}

	UOnlinePlayerInterfaceEOS_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&WriteProfileSettings_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteProfileSettings, &WriteProfileSettings_Parms, nullptr);

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlinePlayerInterfaceEOS::GetProfileSettings(unsigned char LocalUserNum)
{
	static UFunction* pFnGetProfileSettings = nullptr;

	if (!pFnGetProfileSettings)
	{
		pFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings");

	}

	UOnlinePlayerInterfaceEOS_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetProfileSettings, &GetProfileSettings_Parms, nullptr);

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!pFnClearReadProfileSettingsCompleteDelegate)
	{
		pFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!pFnAddReadProfileSettingsCompleteDelegate)
	{
		pFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReadProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadProfileSettingsComplete = nullptr;

	if (!pFnOnReadProfileSettingsComplete)
	{
		pFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete");

	}

	UOnlinePlayerInterfaceEOS_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnReadProfileSettings = nullptr;

	if (!pFnReadProfileSettings)
	{
		pFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings");

	}

	UOnlinePlayerInterfaceEOS_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadProfileSettings_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadProfileSettings, &ReadProfileSettings_Parms, nullptr);

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* pFnClearFriendsChangeDelegate = nullptr;

	if (!pFnClearFriendsChangeDelegate)
	{
		pFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendsChangeDelegate_Parms.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::eventAddFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* pFnAddFriendsChangeDelegate = nullptr;

	if (!pFnAddFriendsChangeDelegate)
	{
		pFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_eventAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendsChangeDelegate_Parms.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* pFnClearMutingChangeDelegate = nullptr;

	if (!pFnClearMutingChangeDelegate)
	{
		pFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy_s(&ClearMutingChangeDelegate_Parms.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* pFnAddMutingChangeDelegate = nullptr;

	if (!pFnAddMutingChangeDelegate)
	{
		pFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy_s(&AddMutingChangeDelegate_Parms.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* pFnClearLoginCancelledDelegate = nullptr;

	if (!pFnClearLoginCancelledDelegate)
	{
		pFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy_s(&ClearLoginCancelledDelegate_Parms.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* pFnAddLoginCancelledDelegate = nullptr;

	if (!pFnAddLoginCancelledDelegate)
	{
		pFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy_s(&AddLoginCancelledDelegate_Parms.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* pFnClearLoginChangeDelegate = nullptr;

	if (!pFnClearLoginChangeDelegate)
	{
		pFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy_s(&ClearLoginChangeDelegate_Parms.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	pFnClearLoginChangeDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, nullptr);

	pFnClearLoginChangeDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* pFnAddLoginChangeDelegate = nullptr;

	if (!pFnAddLoginChangeDelegate)
	{
		pFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy_s(&AddLoginChangeDelegate_Parms.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	pFnAddLoginChangeDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, nullptr);

	pFnAddLoginChangeDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowFriendsUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowFriendsUI = nullptr;

	if (!pFnShowFriendsUI)
	{
		pFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI");

	}

	UOnlinePlayerInterfaceEOS_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowFriendsUI, &ShowFriendsUI_Parms, nullptr);

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::IsMuted(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsMuted = nullptr;

	if (!pFnIsMuted)
	{
		pFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted");

	}

	UOnlinePlayerInterfaceEOS_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&IsMuted_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnIsMuted, &IsMuted_Parms, nullptr);

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>& Query)
{
	static UFunction* pFnAreAnyFriends = nullptr;

	if (!pFnAreAnyFriends)
	{
		pFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends");

	}

	UOnlinePlayerInterfaceEOS_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAreAnyFriends, &AreAnyFriends_Parms, nullptr);

	pFnAreAnyFriends->FunctionFlags |= 0x400;
	memcpy_s(&AreAnyFriends_Parms.Query, 0x10, &Query, 0x10);

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::IsFriend(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsFriend = nullptr;

	if (!pFnIsFriend)
	{
		pFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend");

	}

	UOnlinePlayerInterfaceEOS_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&IsFriend_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsFriend, &IsFriend_Parms, nullptr);

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanShowPresenceInformation(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShowPresenceInformation = nullptr;

	if (!pFnCanShowPresenceInformation)
	{
		pFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation");

	}

	UOnlinePlayerInterfaceEOS_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;
	CanShowPresenceInformation_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShowPresenceInformation_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, nullptr);
	PrivilegeLevelHint = CanShowPresenceInformation_Parms.PrivilegeLevelHint;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanViewPlayerProfiles(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanViewPlayerProfiles = nullptr;

	if (!pFnCanViewPlayerProfiles)
	{
		pFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles");

	}

	UOnlinePlayerInterfaceEOS_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;
	CanViewPlayerProfiles_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanViewPlayerProfiles_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, nullptr);
	PrivilegeLevelHint = CanViewPlayerProfiles_Parms.PrivilegeLevelHint;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanPurchaseContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanPurchaseContent = nullptr;

	if (!pFnCanPurchaseContent)
	{
		pFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent");

	}

	UOnlinePlayerInterfaceEOS_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;
	CanPurchaseContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPurchaseContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanPurchaseContent, &CanPurchaseContent_Parms, nullptr);
	PrivilegeLevelHint = CanPurchaseContent_Parms.PrivilegeLevelHint;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanDownloadUserContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanDownloadUserContent = nullptr;

	if (!pFnCanDownloadUserContent)
	{
		pFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent");

	}

	UOnlinePlayerInterfaceEOS_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;
	CanDownloadUserContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanDownloadUserContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, nullptr);
	PrivilegeLevelHint = CanDownloadUserContent_Parms.PrivilegeLevelHint;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  CommMethod                     (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)

unsigned char UOnlinePlayerInterfaceEOS::CanCommunicate(unsigned char LocalUserNum, unsigned char CommMethod, unsigned long bAttemptToResolve)
{
	static UFunction* pFnCanCommunicate = nullptr;

	if (!pFnCanCommunicate)
	{
		pFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate");

	}

	UOnlinePlayerInterfaceEOS_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;
	CanCommunicate_Parms.CommMethod = CommMethod;
	CanCommunicate_Parms.bAttemptToResolve = bAttemptToResolve;

	this->ProcessEvent(pFnCanCommunicate, &CanCommunicate_Parms, nullptr);

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlinePlayerInterfaceEOS::CanPlayOnline(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanPlayOnline = nullptr;

	if (!pFnCanPlayOnline)
	{
		pFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline");

	}

	UOnlinePlayerInterfaceEOS_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;
	CanPlayOnline_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPlayOnline_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanPlayOnline, &CanPlayOnline_Parms, nullptr);
	PrivilegeLevelHint = CanPlayOnline_Parms.PrivilegeLevelHint;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlinePlayerInterfaceEOS::GetPlayerNickname(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerNickname = nullptr;

	if (!pFnGetPlayerNickname)
	{
		pFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname");

	}

	UOnlinePlayerInterfaceEOS_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	pFnGetPlayerNickname->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPlayerNickname, &GetPlayerNickname_Parms, nullptr);

	pFnGetPlayerNickname->FunctionFlags |= 0x400;

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePlayerInterfaceEOS::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnGetUniquePlayerId = nullptr;

	if (!pFnGetUniquePlayerId)
	{
		pFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId");

	}

	UOnlinePlayerInterfaceEOS_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	pFnGetUniquePlayerId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, nullptr);

	pFnGetUniquePlayerId->FunctionFlags |= 0x400;
	memcpy_s(&GetUniquePlayerId_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

unsigned char UOnlinePlayerInterfaceEOS::GetLoginStatus(unsigned char LocalUserNum)
{
	static UFunction* pFnGetLoginStatus = nullptr;

	if (!pFnGetLoginStatus)
	{
		pFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus");

	}

	UOnlinePlayerInterfaceEOS_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLoginStatus, &GetLoginStatus_Parms, nullptr);

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* pFnClearLogoutCompletedDelegate = nullptr;

	if (!pFnClearLogoutCompletedDelegate)
	{
		pFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearLogoutCompletedDelegate_Parms.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* pFnAddLogoutCompletedDelegate = nullptr;

	if (!pFnAddLogoutCompletedDelegate)
	{
		pFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddLogoutCompletedDelegate_Parms.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLogoutCompleted(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnLogoutCompleted = nullptr;

	if (!pFnOnLogoutCompleted)
	{
		pFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted");

	}

	UOnlinePlayerInterfaceEOS_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlinePlayerInterfaceEOS::Logout(unsigned char LocalUserNum)
{
	static UFunction* pFnLogout = nullptr;

	if (!pFnLogout)
	{
		pFnLogout = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout");

	}

	UOnlinePlayerInterfaceEOS_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogout, &Logout_Parms, nullptr);

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::ClearLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* pFnClearLoginFailedDelegate = nullptr;

	if (!pFnClearLoginFailedDelegate)
	{
		pFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearLoginFailedDelegate_Parms.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	pFnClearLoginFailedDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, nullptr);

	pFnClearLoginFailedDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlayerInterfaceEOS::AddLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* pFnAddLoginFailedDelegate = nullptr;

	if (!pFnAddLoginFailedDelegate)
	{
		pFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate");

	}

	UOnlinePlayerInterfaceEOS_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddLoginFailedDelegate_Parms.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	pFnAddLoginFailedDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, nullptr);

	pFnAddLoginFailedDelegate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Result                         (CPF_Parm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 Code                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)
// int                            SecondsUntilExpiration         (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnReceievedPinGrantCode(unsigned char Result, unsigned char LocalUserNum, struct FString Code, struct FString URL, int SecondsUntilExpiration)
{
	static UFunction* pFnOnReceievedPinGrantCode = nullptr;

	if (!pFnOnReceievedPinGrantCode)
	{
		pFnOnReceievedPinGrantCode = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode");

	}

	UOnlinePlayerInterfaceEOS_execOnReceievedPinGrantCode_Parms OnReceievedPinGrantCode_Parms;
	OnReceievedPinGrantCode_Parms.Result = Result;
	OnReceievedPinGrantCode_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnReceievedPinGrantCode_Parms.Code, 0x10, &Code, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Parms.URL, 0x10, &URL, 0x10);
	memcpy_s(&OnReceievedPinGrantCode_Parms.SecondsUntilExpiration, 0x4, &SecondsUntilExpiration, 0x4);

	this->ProcessEvent(pFnOnReceievedPinGrantCode, &OnReceievedPinGrantCode_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  ErrorCode                      (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode)
{
	static UFunction* pFnOnLoginFailed = nullptr;

	if (!pFnOnLoginFailed)
	{
		pFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed");

	}

	UOnlinePlayerInterfaceEOS_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent(pFnOnLoginFailed, &OnLoginFailed_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlayerInterfaceEOS::AutoLogin()
{
	static UFunction* pFnAutoLogin = nullptr;

	if (!pFnAutoLogin)
	{
		pFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin");

	}

	UOnlinePlayerInterfaceEOS_execAutoLogin_Parms AutoLogin_Parms;

	this->ProcessEvent(pFnAutoLogin, &AutoLogin_Parms, nullptr);

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::Login(unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly)
{
	static UFunction* pFnLogin = nullptr;

	if (!pFnLogin)
	{
		pFnLogin = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login");

	}

	UOnlinePlayerInterfaceEOS_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&Login_Parms.LoginName, 0x10, &LoginName, 0x10);
	memcpy_s(&Login_Parms.Password, 0x10, &Password, 0x10);
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogin, &Login_Parms, nullptr);

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlinePlayerInterfaceEOS::ShowLoginUI(unsigned char LocalUserNum, unsigned long bShowOnlineOnly)
{
	static UFunction* pFnShowLoginUI = nullptr;

	if (!pFnShowLoginUI)
	{
		pFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI");

	}

	UOnlinePlayerInterfaceEOS_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.LocalUserNum = LocalUserNum;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent(pFnShowLoginUI, &ShowLoginUI_Parms, nullptr);

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnFriendsChange()
{
	static UFunction* pFnOnFriendsChange = nullptr;

	if (!pFnOnFriendsChange)
	{
		pFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange");

	}

	UOnlinePlayerInterfaceEOS_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent(pFnOnFriendsChange, &OnFriendsChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnMutingChange()
{
	static UFunction* pFnOnMutingChange = nullptr;

	if (!pFnOnMutingChange)
	{
		pFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange");

	}

	UOnlinePlayerInterfaceEOS_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent(pFnOnMutingChange, &OnMutingChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlinePlayerInterfaceEOS::OnLoginCancelled()
{
	static UFunction* pFnOnLoginCancelled = nullptr;

	if (!pFnOnLoginCancelled)
	{
		pFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled");

	}

	UOnlinePlayerInterfaceEOS_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent(pFnOnLoginCancelled, &OnLoginCancelled_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlinePlayerInterfaceEOS::OnLoginChange(unsigned char LocalUserNum)
{
	static UFunction* pFnOnLoginChange = nullptr;

	if (!pFnOnLoginChange)
	{
		pFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange");

	}

	UOnlinePlayerInterfaceEOS_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnLoginChange, &OnLoginChange_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid)
{
	static UFunction* pFnRegisterStatGuid = nullptr;

	if (!pFnRegisterStatGuid)
	{
		pFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid");

	}

	UOnlineStatsInterfaceEOS_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy_s(&RegisterStatGuid_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnRegisterStatGuid, &RegisterStatGuid_Parms, nullptr);
	memcpy_s(&RegisterStatGuid_Parms.ClientStatGuid, 0x10, &ClientStatGuid, 0x10);

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineStatsInterfaceEOS::GetClientStatGuid()
{
	static UFunction* pFnGetClientStatGuid = nullptr;

	if (!pFnGetClientStatGuid)
	{
		pFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid");

	}

	UOnlineStatsInterfaceEOS_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent(pFnGetClientStatGuid, &GetClientStatGuid_Parms, nullptr);

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!pFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	}

	UOnlineStatsInterfaceEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!pFnAddRegisterHostStatGuidCompleteDelegate)
	{
		pFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate");

	}

	UOnlineStatsInterfaceEOS_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = nullptr;

	if (!pFnOnRegisterHostStatGuidComplete)
	{
		pFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete");

	}

	UOnlineStatsInterfaceEOS_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::RegisterHostStatGuid(struct FString& HostStatGuid)
{
	static UFunction* pFnRegisterHostStatGuid = nullptr;

	if (!pFnRegisterHostStatGuid)
	{
		pFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid");

	}

	UOnlineStatsInterfaceEOS_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent(pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, nullptr);
	memcpy_s(&RegisterHostStatGuid_Parms.HostStatGuid, 0x10, &HostStatGuid, 0x10);

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineStatsInterfaceEOS::GetHostStatGuid()
{
	static UFunction* pFnGetHostStatGuid = nullptr;

	if (!pFnGetHostStatGuid)
	{
		pFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid");

	}

	UOnlineStatsInterfaceEOS_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent(pFnGetHostStatGuid, &GetHostStatGuid_Parms, nullptr);

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// int                            LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::WriteOnlinePlayerScores(struct FName SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* pFnWriteOnlinePlayerScores = nullptr;

	if (!pFnWriteOnlinePlayerScores)
	{
		pFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores");

	}

	UOnlineStatsInterfaceEOS_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy_s(&WriteOnlinePlayerScores_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlinePlayerScores_Parms.LeaderboardId, 0x4, &LeaderboardId, 0x4);

	this->ProcessEvent(pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, nullptr);
	memcpy_s(&WriteOnlinePlayerScores_Parms.PlayerScores, 0x10, &PlayerScores, 0x10);

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!pFnClearFlushOnlineStatsCompleteDelegate)
	{
		pFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate");

	}

	UOnlineStatsInterfaceEOS_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!pFnAddFlushOnlineStatsCompleteDelegate)
	{
		pFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate");

	}

	UOnlineStatsInterfaceEOS_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnFlushOnlineStatsComplete = nullptr;

	if (!pFnOnFlushOnlineStatsComplete)
	{
		pFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete");

	}

	UOnlineStatsInterfaceEOS_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy_s(&OnFlushOnlineStatsComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineStatsInterfaceEOS::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* pFnFlushOnlineStats = nullptr;

	if (!pFnFlushOnlineStats)
	{
		pFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats");

	}

	UOnlineStatsInterfaceEOS_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy_s(&FlushOnlineStats_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnFlushOnlineStats, &FlushOnlineStats_Parms, nullptr);

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineStatsInterfaceEOS::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* pFnWriteOnlineStats = nullptr;

	if (!pFnWriteOnlineStats)
	{
		pFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats");

	}

	UOnlineStatsInterfaceEOS_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy_s(&WriteOnlineStats_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlineStats_Parms.Player, 0x48, &Player, 0x48);
	memcpy_s(&WriteOnlineStats_Parms.StatsWrite, 0x8, &StatsWrite, 0x8);

	this->ProcessEvent(pFnWriteOnlineStats, &WriteOnlineStats_Parms, nullptr);

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineStatsInterfaceEOS::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnFreeStats = nullptr;

	if (!pFnFreeStats)
	{
		pFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats");

	}

	UOnlineStatsInterfaceEOS_execFreeStats_Parms FreeStats_Parms;
	memcpy_s(&FreeStats_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	this->ProcessEvent(pFnFreeStats, &FreeStats_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!pFnClearReadOnlineStatsCompleteDelegate)
	{
		pFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate");

	}

	UOnlineStatsInterfaceEOS_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineStatsInterfaceEOS::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!pFnAddReadOnlineStatsCompleteDelegate)
	{
		pFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate");

	}

	UOnlineStatsInterfaceEOS_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineStatsInterfaceEOS::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadOnlineStatsComplete = nullptr;

	if (!pFnOnReadOnlineStatsComplete)
	{
		pFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete");

	}

	UOnlineStatsInterfaceEOS_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!pFnReadOnlineStatsByRankAroundPlayer)
	{
		pFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer");

	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Parms.NumRows, 0x4, &NumRows, 0x4);

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, nullptr);

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static UFunction* pFnReadOnlineStatsByRank = nullptr;

	if (!pFnReadOnlineStatsByRank)
	{
		pFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank");

	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsByRank_Parms.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRank_Parms.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&ReadOnlineStatsByRank_Parms.NumToRead, 0x4, &NumToRead, 0x4);

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, nullptr);

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineStatsInterfaceEOS::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnReadOnlineStatsForFriends = nullptr;

	if (!pFnReadOnlineStatsForFriends)
	{
		pFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends");

	}

	UOnlineStatsInterfaceEOS_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsForFriends_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, nullptr);

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineStatsInterfaceEOS::ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnReadOnlineStats = nullptr;

	if (!pFnReadOnlineStats)
	{
		pFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats");

	}

	UOnlineStatsInterfaceEOS_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStats_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStats, &ReadOnlineStats_Parms, nullptr);

	pFnReadOnlineStats->FunctionFlags |= 0x400;
	memcpy_s(&ReadOnlineStats_Parms.Players, 0x10, &Players, 0x10);

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineUserCloudFileInterfaceEOS::ClearAllDelegates()
{
	static UFunction* pFnClearAllDelegates = nullptr;

	if (!pFnClearAllDelegates)
	{
		pFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent(pFnClearAllDelegates, &ClearAllDelegates_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!pFnClearDeleteUserFileCompleteDelegate)
	{
		pFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!pFnAddDeleteUserFileCompleteDelegate)
	{
		pFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldCloudDelete             (CPF_Parm)
// unsigned long                  bShouldLocallyDelete           (CPF_Parm)

bool UOnlineUserCloudFileInterfaceEOS::DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete)
{
	static UFunction* pFnDeleteUserFile = nullptr;

	if (!pFnDeleteUserFile)
	{
		pFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile");

	}

	UOnlineUserCloudFileInterfaceEOS_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy_s(&DeleteUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&DeleteUserFile_Parms.Filename, 0x10, &Filename, 0x10);
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	pFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteUserFile, &DeleteUserFile_Parms, nullptr);

	pFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnDeleteUserFileComplete = nullptr;

	if (!pFnOnDeleteUserFileComplete)
	{
		pFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete");

	}

	UOnlineUserCloudFileInterfaceEOS_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnDeleteUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!pFnClearWriteUserFileCompleteDelegate)
	{
		pFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!pFnAddWriteUserFileCompleteDelegate)
	{
		pFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy_s(&AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::WriteUserFile(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnWriteUserFile = nullptr;

	if (!pFnWriteUserFile)
	{
		pFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile");

	}

	UOnlineUserCloudFileInterfaceEOS_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy_s(&WriteUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteUserFile, &WriteUserFile_Parms, nullptr);

	pFnWriteUserFile->FunctionFlags |= 0x400;
	memcpy_s(&WriteUserFile_Parms.FileContents, 0x10, &FileContents, 0x10);

	return WriteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnWriteUserFileComplete = nullptr;

	if (!pFnOnWriteUserFileComplete)
	{
		pFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete");

	}

	UOnlineUserCloudFileInterfaceEOS_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = nullptr;

	if (!pFnClearReadUserFileCompleteDelegate)
	{
		pFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = nullptr;

	if (!pFnAddReadUserFileCompleteDelegate)
	{
		pFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy_s(&AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ReadUserFile(struct FString UserId, struct FString Filename)
{
	static UFunction* pFnReadUserFile = nullptr;

	if (!pFnReadUserFile)
	{
		pFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile");

	}

	UOnlineUserCloudFileInterfaceEOS_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy_s(&ReadUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ReadUserFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadUserFile, &ReadUserFile_Parms, nullptr);

	pFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnReadUserFileComplete = nullptr;

	if (!pFnOnReadUserFileComplete)
	{
		pFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete");

	}

	UOnlineUserCloudFileInterfaceEOS_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnReadUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* pFnGetUserFileList = nullptr;

	if (!pFnGetUserFileList)
	{
		pFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList");

	}

	UOnlineUserCloudFileInterfaceEOS_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy_s(&GetUserFileList_Parms.UserId, 0x10, &UserId, 0x10);

	pFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUserFileList, &GetUserFileList_Parms, nullptr);

	pFnGetUserFileList->FunctionFlags |= 0x400;
	memcpy_s(&GetUserFileList_Parms.UserFiles, 0x10, &UserFiles, 0x10);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!pFnClearEnumerateUserFileCompleteDelegate)
	{
		pFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!pFnAddEnumerateUserFileCompleteDelegate)
	{
		pFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate");

	}

	UOnlineUserCloudFileInterfaceEOS_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::EnumerateUserFiles(struct FString UserId)
{
	static UFunction* pFnEnumerateUserFiles = nullptr;

	if (!pFnEnumerateUserFiles)
	{
		pFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles");

	}

	UOnlineUserCloudFileInterfaceEOS_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy_s(&EnumerateUserFiles_Parms.UserId, 0x10, &UserId, 0x10);

	pFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, nullptr);

	pFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineUserCloudFileInterfaceEOS::OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId)
{
	static UFunction* pFnOnEnumerateUserFilesComplete = nullptr;

	if (!pFnOnEnumerateUserFilesComplete)
	{
		pFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete");

	}

	UOnlineUserCloudFileInterfaceEOS_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, nullptr);
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ClearFile(struct FString UserId, struct FString Filename)
{
	static UFunction* pFnClearFile = nullptr;

	if (!pFnClearFile)
	{
		pFnClearFile = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearFile_Parms ClearFile_Parms;
	memcpy_s(&ClearFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ClearFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearFile, &ClearFile_Parms, nullptr);

	pFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::ClearFiles(struct FString UserId)
{
	static UFunction* pFnClearFiles = nullptr;

	if (!pFnClearFiles)
	{
		pFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles");

	}

	UOnlineUserCloudFileInterfaceEOS_execClearFiles_Parms ClearFiles_Parms;
	memcpy_s(&ClearFiles_Parms.UserId, 0x10, &UserId, 0x10);

	pFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearFiles, &ClearFiles_Parms, nullptr);

	pFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineUserCloudFileInterfaceEOS::GetFileContents(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetFileContents = nullptr;

	if (!pFnGetFileContents)
	{
		pFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents");

	}

	UOnlineUserCloudFileInterfaceEOS_execGetFileContents_Parms GetFileContents_Parms;
	memcpy_s(&GetFileContents_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFileContents, &GetFileContents_Parms, nullptr);

	pFnGetFileContents->FunctionFlags |= 0x400;
	memcpy_s(&GetFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            _                              (CPF_Parm)
// struct FString                 PlatformAuthTicket             (CPF_Parm | CPF_NeedCtorLink)

void U__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6::__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6(int _, struct FString PlatformAuthTicket)
{
	static UFunction* pFn__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6 = nullptr;

	if (!pFn__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6)
	{
		pFn__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6 = UFunction::FindFunction("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6.__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6");

	}

	U__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_exec__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Parms __OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Parms;
	memcpy_s(&__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Parms._, 0x4, &_, 0x4);
	memcpy_s(&__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Parms.PlatformAuthTicket, 0x10, &PlatformAuthTicket, 0x10);

	this->ProcessEvent(pFn__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6, &__OnlinePlayerInterfaceEOS__LinkedAccount_15383A164BD9B314E1F3DA9B19FC17E6_Parms, nullptr);
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// struct FString                 Code                           (CPF_Parm | CPF_NeedCtorLink)

void U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD::__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD(unsigned long bSuccess, struct FString Code)
{
	static UFunction* pFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD = nullptr;

	if (!pFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD)
	{
		pFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD = UFunction::FindFunction("Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD");

	}

	U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_exec__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Parms __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Parms;
	__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Parms.bSuccess = bSuccess;
	memcpy_s(&__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Parms.Code, 0x10, &Code, 0x10);

	this->ProcessEvent(pFn__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD, &__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_867DCD4A4F250CAFA4F7D4B2787D7ABD_Parms, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
