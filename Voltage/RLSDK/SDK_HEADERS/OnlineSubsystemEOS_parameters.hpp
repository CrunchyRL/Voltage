/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: OnlineSubsystemEOS_parameters.h
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK, Crunchy
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Function Parameters
# ========================================================================================= #
*/

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ManuallyTickEOSPlatform
// [0x00020401] 
struct UOnlineSubsystemEOS_execManuallyTickEOSPlatform_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FormatCurrency
// [0x00020803] 
struct UOnlineSubsystemEOS_eventFormatCurrency_Parms
{
	struct FString                                     Currency;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Price;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FString                                  formattedPrice;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  tempPrice;                                        		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  currencySymbol;                                   		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          priceArray;                                       		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0068 (0x0004) [0x0000000000000000]               
	// int                                             decimals;                                         		// 0x006C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearMicroTxnResponseDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearMicroTxnResponseDelegate_Parms
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddMicroTxnResponseDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddMicroTxnResponseDelegate_Parms
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetAppPriceInfo
// [0x00420401] 
struct UOnlineSubsystemEOS_execGetAppPriceInfo_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               AppNames;                                         		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0058 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HandleBootMessage
// [0x00020401] 
struct UOnlineSubsystemEOS_execHandleBootMessage_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetOverlayEnabled
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetOverlayEnabled_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RefreshNetworkErrorToggle
// [0x00020001] 
struct UOnlineSubsystemEOS_execRefreshNetworkErrorToggle_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserRestoredDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearUserRestoredDelegate_Parms
{
	struct FScriptDelegate                             UserRestoredDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserRestoredDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddUserRestoredDelegate_Parms
{
	struct FScriptDelegate                             UserRestoredDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserRestored
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnUserRestored_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUserOrphanedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearUserOrphanedDelegate_Parms
{
	struct FScriptDelegate                             UserOrphanedDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUserOrphanedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddUserOrphanedDelegate_Parms
{
	struct FScriptDelegate                             UserOrphanedDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUserOrphaned
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnUserOrphaned_Parms
{
	unsigned char                                      ControllerId;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItemsAsync
// [0x00020001] 
struct UOnlineSubsystemEOS_execOpenStoreForItemsAsync_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FString>                             Targets;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStorePurchaseCompleteDelegate;                  		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorePurchaseCompleteDelegate
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnStorePurchaseCompleteDelegate_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForItems
// [0x00020401] 
struct UOnlineSubsystemEOS_execOpenStoreForItems_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FString>                             Targets;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenStoreForDLC
// [0x00020001] 
struct UOnlineSubsystemEOS_execOpenStoreForDLC_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       DLC;                                              		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenErrorDialog
// [0x00020001] 
struct UOnlineSubsystemEOS_execOpenErrorDialog_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OpenPS4DisplayMode
// [0x00024001] 
struct UOnlineSubsystemEOS_execOpenPS4DisplayMode_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      DisplayMode;                                      		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FString>                             Targets;                                          		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int                                                ServiceLabel;                                     		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ResetControllerColor
// [0x00020001] 
struct UOnlineSubsystemEOS_execResetControllerColor_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetControllerColor
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetControllerColor_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      NewColor;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitializeTrophyAPI
// [0x00020001] 
struct UOnlineSubsystemEOS_execInitializeTrophyAPI_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AnyPlayerChatRestricted
// [0x00020001] 
struct UOnlineSubsystemEOS_execAnyPlayerChatRestricted_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearUnlockedDLCChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execClearUnlockedDLCChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddUnlockedDLCChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execAddUnlockedDLCChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetUnlockedDLC
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetUnlockedDLC_Parms
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnUnlockedDLCChange
// [0x00130001] 
struct UOnlineSubsystemEOS_execOnUnlockedDLCChange_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UpdateSessionStatusFromPlayers
// [0x00020001] 
struct UOnlineSubsystemEOS_execUpdateSessionStatusFromPlayers_Parms
{
	int                                                CurrentPlayerCount;                               		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                numBotPlayers;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearErrorDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearErrorDialogClosedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddErrorDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddErrorDialogClosedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnErrorDialogClosed
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnErrorDialogClosed_Parms
{
	int                                                LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCommerceDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearCommerceDialogClosedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCommerceDialogClosedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddCommerceDialogClosedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCommerceDialogClosed
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnCommerceDialogClosed_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetCurrentConnectionStatus
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetCurrentConnectionStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCloseKickPlayerDialogDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearCloseKickPlayerDialogDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCloseKickPlayerDialogDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddCloseKickPlayerDialogDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCloseKickPlayerDialog
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnCloseKickPlayerDialog_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalkingStateChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnPlayerTalkingStateChange_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bIsTalking : 1;                                   		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetVoiceReceiveVolume
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetVoiceReceiveVolume_Parms
{
	float                                              VoiceVolume;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetDLCPurchaseTime
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetDLCPurchaseTime_Parms
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SaveKey
// [0x00020001] 
struct UOnlineSubsystemEOS_execSaveKey_Parms
{
	struct FString                                     ProductKey;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetLocalAccountNames
// [0x00420001] 
struct UOnlineSubsystemEOS_execGetLocalAccountNames_Parms
{
	TArray<struct FString>                             Accounts;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.DeleteLocalAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execDeleteLocalAccount_Parms
{
	struct FString                                     Username;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RenameLocalAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execRenameLocalAccount_Parms
{
	struct FString                                     NewUserName;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     OldUserName;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateLocalAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execCreateLocalAccount_Parms
{
	struct FString                                     Username;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearCreateOnlineAccountCompletedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearCreateOnlineAccountCompletedDelegate_Parms
{
	struct FScriptDelegate                             AccountCreateDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddCreateOnlineAccountCompletedDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddCreateOnlineAccountCompletedDelegate_Parms
{
	struct FScriptDelegate                             AccountCreateDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnCreateOnlineAccountCompleted
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnCreateOnlineAccountCompleted_Parms
{
	unsigned char                                      ErrorStatus;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.CreateOnlineAccount
// [0x00024001] 
struct UOnlineSubsystemEOS_execCreateOnlineAccount_Parms
{
	struct FString                                     Username;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     EmailAddress;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ProductKey;                                       		// 0x0030 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsKeyValid
// [0x00020003] 
struct UOnlineSubsystemEOS_execIsKeyValid_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearStorageDeviceChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddStorageDeviceChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnStorageDeviceChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnStorageDeviceChange_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNATType
// [0x00020003] 
struct UOnlineSubsystemEOS_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearConnectionStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddConnectionStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnConnectionStatusChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsControllerConnected
// [0x00020003] 
struct UOnlineSubsystemEOS_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearControllerChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddControllerChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnControllerChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetNetworkNotificationPosition
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetNetworkNotificationPosition
// [0x00020001] 
struct UOnlineSubsystemEOS_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.NotifyExternalUIChanged
// [0x00020401] 
struct UOnlineSubsystemEOS_execNotifyExternalUIChanged_Parms
{
	bool                                               bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearExternalUIChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddExternalUIChangeDelegate
// [0x00030003] 
struct UOnlineSubsystemEOS_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnExternalUIChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnExternalUIChange_Parms
{
	bool                                               bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearLinkStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddLinkStatusChangeDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnLinkStatusChange
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnLinkStatusChange_Parms
{
	bool                                               bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.HasLinkConnection
// [0x00020003] 
struct UOnlineSubsystemEOS_execHasLinkConnection_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterStatGuid
// [0x00420001] 
struct UOnlineSubsystemEOS_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ClientStatGuid;                                   		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetClientStatGuid
// [0x00020001] 
struct UOnlineSubsystemEOS_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnFlushOnlineStatsComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRegisterHostStatGuidComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnRegisterHostStatGuidComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterHostStatGuid
// [0x00420001] 
struct UOnlineSubsystemEOS_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetHostStatGuid
// [0x00020001] 
struct UOnlineSubsystemEOS_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.WriteOnlinePlayerScores
// [0x00420001] 
struct UOnlineSubsystemEOS_execWriteOnlinePlayerScores_Parms
{
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.FreeStats
// [0x00020001] 
struct UOnlineSubsystemEOS_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnReadOnlineStatsComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnReadOnlineStatsComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024001] 
struct UOnlineSubsystemEOS_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                NumRows;                                          		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsByRank
// [0x00024001] 
struct UOnlineSubsystemEOS_execReadOnlineStatsByRank_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                StartIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int                                                NumToRead;                                        		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStatsForFriends
// [0x00020001] 
struct UOnlineSubsystemEOS_execReadOnlineStatsForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ReadOnlineStats
// [0x00420001] 
struct UOnlineSubsystemEOS_execReadOnlineStats_Parms
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteAll
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnmuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteAll
// [0x00020001] 
struct UOnlineSubsystemEOS_execMuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetSpeechRecognitionObject
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetSpeechRecognitionObject_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SelectVocabulary
// [0x00020001] 
struct UOnlineSubsystemEOS_execSelectVocabulary_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execClearRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemEOS_execAddRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnRecognitionComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnRecognitionComplete_Parms
{
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetRecognitionResults
// [0x00420001] 
struct UOnlineSubsystemEOS_execGetRecognitionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FSpeechRecognizedWord>               Words;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopSpeechRecognition
// [0x00020001] 
struct UOnlineSubsystemEOS_execStopSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartSpeechRecognition
// [0x00020001] 
struct UOnlineSubsystemEOS_execStartSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StopNetworkedVoice
// [0x00020001] 
struct UOnlineSubsystemEOS_execStopNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.StartNetworkedVoice
// [0x00020001] 
struct UOnlineSubsystemEOS_execStartNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.ClearPlayerTalkingDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execClearPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.AddPlayerTalkingDelegate
// [0x00020001] 
struct UOnlineSubsystemEOS_execAddPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnPlayerTalking
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnPlayerTalking_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnmuteRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnmuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.MuteRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execMuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.SetRemoteTalkerPriority
// [0x00020001] 
struct UOnlineSubsystemEOS_execSetRemoteTalkerPriority_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Priority;                                         		// 0x0050 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsHeadsetPresent
// [0x00020001] 
struct UOnlineSubsystemEOS_execIsHeadsetPresent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsRemotePlayerTalking
// [0x00020001] 
struct UOnlineSubsystemEOS_execIsRemotePlayerTalking_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.IsLocalPlayerTalking
// [0x00020001] 
struct UOnlineSubsystemEOS_execIsLocalPlayerTalking_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnregisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterRemoteTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execRegisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.UnregisterLocalTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.RegisterLocalTalker
// [0x00020001] 
struct UOnlineSubsystemEOS_execRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerUniqueNetIdFromIndex
// [0x00820802] 
struct UOnlineSubsystemEOS_eventGetPlayerUniqueNetIdFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0008 (0x0048) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0050 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.GetPlayerNicknameFromIndex
// [0x00020802] 
struct UOnlineSubsystemEOS_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.Init
// [0x00020C00]  iNative [0x0004]
struct UOnlineSubsystemEOS_eventInit_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.InitEOS
// [0x00420401] 
struct UOnlineSubsystemEOS_execInitEOS_Parms
{
	struct FString                                     SandboxId;                                        		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     DeploymentId;                                     		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.EventGetAppPriceInfoComplete
// [0x00120001] 
struct UOnlineSubsystemEOS_execEventGetAppPriceInfoComplete_Parms
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Price;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DiscountPrice;                                    		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                DiscountPercentage;                               		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineSubsystemEOS.OnMicroTxnResponse
// [0x00120001] 
struct UOnlineSubsystemEOS_execOnMicroTxnResponse_Parms
{
	bool                                               bAuthorized : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	unsigned long long                                 OrderId;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequiresAuthTicket
// [0x00020002] 
struct UOnlineAuthInterfaceEOS_execRequiresAuthTicket_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestAuthTicket
// [0x00030400]  iNative [0x0004]
struct UOnlineAuthInterfaceEOS_execRequestAuthTicket_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineAuthInterfaceEOS.RequestMtxCode
// [0x00020400]  iNative [0x0004]
struct UOnlineAuthInterfaceEOS_execRequestMtxCode_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.GetActivePlatformId
// [0x00420400]  iNative [0x0004]
struct UOnlineFriendsInterfaceEOS_execGetActivePlatformId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                AccountId;                                        		// 0x0008 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlatformId;                                       		// 0x0050 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineFriendsInterfaceEOS.RequestLinkedAccounts
// [0x00030400]  iNative [0x0004]
struct UOnlineFriendsInterfaceEOS_execRequestLinkedAccounts_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        AccountIds;                                       		// 0x0008 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.AcceptGameInvite
// [0x00020400]  iNative [0x0004]
struct UOnlineGameInterfaceEOS_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.FreeSearchResults
// [0x00020400]  iNative [0x0004]
struct UOnlineGameInterfaceEOS_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineGameInterfaceEOS.UpdateOnlineGame
// [0x00024400]  iNative [0x0004]
struct UOnlineGameInterfaceEOS_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.AuthWithNintendoAccountToken
// [0x00420400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execAuthWithNintendoAccountToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     NintendoAccountToken;                             		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetAuthExpirationTimestamp
// [0x00030400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execGetAuthExpirationTimestamp_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UDateTime*                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.LaunchAccountPortal
// [0x00020400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execLaunchAccountPortal_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetClientCredentials
// [0x00020400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execGetClientCredentials_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetContinuanceToken
// [0x00020400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execGetContinuanceToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.UseRefreshToken
// [0x00020400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execUseRefreshToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     RefreshToken;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.GetRefreshToken
// [0x00020400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execGetRefreshToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS.RequestPinGrantCode
// [0x00020400]  iNative [0x0004]
struct UOnlinePersistentAuthInterfaceEOS_execRequestPinGrantCode_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowInviteUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     InviteText;                                       		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowGamerCardUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowGamerCardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetRichPresence
// [0x00030401] 
struct UOnlinePlayerInterfaceEOS_execSetRichPresence_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     PresenceString;                                   		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GameDataString;                                   		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendPresence
// [0x00430401] 
struct UOnlinePlayerInterfaceEOS_execGetFriendPresence_Parms
{
	struct FOnlineFriend                               FriendData;                                       		// 0x0000 (0x0130) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMet
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMet_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     GameDescription;                                  		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WordFilterSanitizeString
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execWordFilterSanitizeString_Parms
{
	struct FString                                     Comment;                                          		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                 		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0028 (0x0048) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSanitizeStringComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnSanitizeStringComplete_Parms
{
	struct FWordFilterResult                           Result;                                           		// 0x0000 (0x0038) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HideKeyboardUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execHideKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerCountryDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadPlayerCountryDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                        		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerCountryDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadPlayerCountryDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                        		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnPlayerCountryRetrieved
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnPlayerCountryRetrieved_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Country;                                          		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerCountry
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerCountry_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAvatarChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearAvatarChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             AvatarDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAvatarChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddAvatarChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             AvatarDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendPresenceChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendPresenceChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             PresenceDelegate;                                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendPresenceChangeDelegate
// [0x00030803] 
struct UOnlinePlayerInterfaceEOS_eventAddFriendPresenceChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             PresenceDelegate;                                 		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.FriendPresenceChange
// [0x00130001] 
struct UOnlinePlayerInterfaceEOS_execFriendPresenceChange_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAvatarChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAvatarChange_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockAchievement
// [0x00024401] 
struct UOnlinePlayerInterfaceEOS_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadAchievements
// [0x00024401] 
struct UOnlinePlayerInterfaceEOS_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetAchievements
// [0x00424401] 
struct UOnlinePlayerInterfaceEOS_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FAchievementDetails>                 Achievements;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                TitleId;                                          		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadAchievementsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnlockAchievementComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUnlockAchievementComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowControllerUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowControllerUI_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerLanguage
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerLanguage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowPlayersUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearProfileDataChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddProfileDataChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnProfileDataChanged
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnProfileDataChanged_Parms
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnlockGamerPicture
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execUnlockGamerPicture_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsDeviceValid
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsDeviceValid_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetDeviceSelectionResults
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execGetDeviceSelectionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     DeviceName;                                       		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDeviceSelectionDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDeviceSelectionDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDeviceSelectionComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnDeviceSelectionComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowDeviceSelectionUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowDeviceSelectionUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bForceShowUI : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomPlayersUI
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execShowCustomPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     Title;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsUserSwitchActive
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsUserSwitchActive_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPlayerDialogActive
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetKickPlayerDialogActive_Parms
{
	bool                                               Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetKickPreviousUser
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetKickPreviousUser_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUIForOrphanedUser
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowLoginUIForOrphanedUser_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetSyncedAchievements
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetSyncedAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<bool>                                       ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsGuestLogin
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestRestrictedFeatureMessaging
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRequestRestrictedFeatureMessaging_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      RestrictedFeature;                                		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVoice
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicateVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateVideo
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicateVideo_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicateText
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicateText_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareUserCreatedContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanShareUserCreatedContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumVideoContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanAccessPremiumVideoContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanAccessPremiumContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanAccessPremiumContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUseCloudStorage
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanUseCloudStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRecordDVRClips
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanRecordDVRClips_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanBrowseInternet
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanBrowseInternet_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareWithSocialNetwork
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanShareWithSocialNetwork_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShareKinectContent
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanShareKinectContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanUploadFitnessData
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execCanUploadFitnessData_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetPrimaryPlayerGamepadToLastInput_Parms
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSwitchCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearUserSwitchCompleteDelegate_Parms
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSwitchCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddUserSwitchCompleteDelegate_Parms
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSwitchComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUserSwitchComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginStatusChangeDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginStatusChangeDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginStatusChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayHistoryRegistrationKey
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayHistoryRegistrationKey_Parms
{
	TArray<unsigned char>                              Key;                                              		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CheckParentalControlInfo
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execCheckParentalControlInfo_Parms
{
	bool                                               bShowUi : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetActiveDiscDLC
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetActiveDiscDLC_Parms
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineSubscriptionRequirement
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetOnlineSubscriptionRequirement_Parms
{
	bool                                               bRequiresOnlineSubscription : 1;                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetControllerID
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetControllerID_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetConnectedControllerNames
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetConnectedControllerNames_Parms
{
	TArray<struct FName>                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLocalPlayerRemoved
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execOnLocalPlayerRemoved_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UnregisterController
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execUnregisterController_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RegisterController
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execRegisterController_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanRegisterController
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execCanRegisterController_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowBindings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowBindings_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetControllerLayout
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetControllerLayout_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       LayoutName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetInputAPI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSetInputAPI_Parms
{
	unsigned char                                      TargetAPI;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearInputAPIChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearInputAPIChangedDelegate_Parms
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInputAPIChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddInputAPIChangedDelegate_Parms
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnInputAPIChanged
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnInputAPIChanged_Parms
{
	unsigned char                                      TargetAPI;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUnregisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearUnregisteredControllerDelegate_Parms
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRegisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearRegisteredControllerDelegate_Parms
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUnregisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddUnregisteredControllerDelegate_Parms
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRegisteredControllerDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddRegisteredControllerDelegate_Parms
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUnregisteredController
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUnregisteredController_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRegisteredController
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnRegisteredController_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddInGamePost
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddInGamePost_Parms
{
	struct FString                                     InPostID;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FString>                             StringReplaceList;                                		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.UpdateStat
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execUpdateStat_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       StatName;                                         		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                Points;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearSaveDataNoSpaceDialogCompleteDelegate_Parms
{
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddSaveDataNoSpaceDialogCompleteDelegate_Parms
{
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnSaveDataNoSpaceDialogComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnSaveDataNoSpaceDialogComplete_Parms
{
	bool                                               bContinueWithoutSave : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RecordPlayersRecentlyMetKeys
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRecordPlayersRecentlyMetKeys_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendHistoryKey>                   PlayerKeys;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsAchievementUnlocked
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsAchievementUnlocked_Parms
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowContentMarketplaceUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsInviteUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowFriendsInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowAchievementsUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowAchievementsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowMessagesUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowMessagesUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFeedbackUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowFeedbackUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRemoveCanPlayOnlineChangedDelegate_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddCanPlayOnlineChangedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddCanPlayOnlineChangedDelegate_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnlineChanged
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execCanPlayOnlineChanged_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearUserSignInCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearUserSignInCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddUserSignInCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddUserSignInCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnUserSignInComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnUserSignInComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowCustomMessageUI
// [0x00424001] 
struct UOnlinePlayerInterfaceEOS_execShowCustomMessageUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Recipients;                                       		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     MessageTitle;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     NonEditableMessage;                               		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     EditableMessage;                                  		// 0x0038 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearCrossTitleProfileSettings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearCrossTitleProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetCrossTitleProfileSettings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetCrossTitleProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadCrossTitleProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadCrossTitleProfileSettings
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execReadCrossTitleProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWritePlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWritePlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWritePlayerStorageComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WritePlayerStorage
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                DeviceID;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             InDelegate;                                       		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             InDelegate;                                       		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageForNetIdComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorageForNetId
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execReadPlayerStorageForNetId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadPlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadPlayerStorageCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InDelegate;                                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadPlayerStorageComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadPlayerStorage
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                DeviceID;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerStorage
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RequestNativePlatformAuthTicket
// [0x00840003] 
struct UOnlinePlayerInterfaceEOS_execRequestNativePlatformAuthTicket_Parms
{
	int                                                LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlineSubsystem*                         NativeOnlineSubsystem;                            		// 0x0020 (0x0008) [0x0000000000000000]               
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05* _E37DF6B0421C27A03C3270B8281EC2CB;                		// 0x0070 (0x0008) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRequestNativePlatformAuthTicketComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnRequestNativePlatformAuthTicketComplete_Parms
{
	int                                                LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     PlatformAuthTicket;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.LinkedAccount
// [0x00040803] 
struct UOnlinePlayerInterfaceEOS_eventLinkedAccount_Parms
{
	int                                                LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class U__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE* _46EFBAC94F1942BFB02239A60831D09C;                		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RefreshConnectLogin
// [0x00040401] 
struct UOnlinePlayerInterfaceEOS_execRefreshConnectLogin_Parms
{
	int                                                LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ConnectLogin
// [0x00040401] 
struct UOnlinePlayerInterfaceEOS_execConnectLogin_Parms
{
	int                                                LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasIncomingFriendInvite
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execHasIncomingFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                InviteFrom;                                       		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SupportInGameLogin
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execSupportInGameLogin_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.HasFriendsFunctionality
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execHasFriendsFunctionality_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DeleteMessage
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendMessageReceivedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendMessageReceivedDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendMessageReceived
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SendingNick;                                      		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendMessages
// [0x00420003] 
struct UOnlinePlayerInterfaceEOS_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                   		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnJoinFriendGameComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnJoinFriendGameComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.JoinFriendGame
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceivedGameInvite
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     InviterName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriends
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Friends;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Text;                                             		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendGameInviteToFriend
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Text;                                             		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SendMessageToFriend
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteCanceledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendInviteCanceledDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteCanceledDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddFriendInviteCanceledDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteCanceled
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendInviteCanceled_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                CanceledUserId;                                   		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendInviteReceivedDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendInviteReceived
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     RequestingNick;                                   		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.RemoveFriend
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearRemoveFriendCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearRemoveFriendCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RemoveFriendDelegate;                             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddRemoveFriendCompleteDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddRemoveFriendCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RemoveFriendDelegate;                             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnRemoveFriendComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnRemoveFriendComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                RemovedID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.DenyFriendInvite
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearDenyFriendInviteCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearDenyFriendInviteCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddDenyFriendInviteCompleteDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddDenyFriendInviteCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnDenyFriendInviteComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnDenyFriendInviteComplete_Parms
{
	struct FUniqueNetId                                FriendId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AcceptFriendInvite
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAcceptFriendInviteCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearAcceptFriendInviteCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAcceptFriendInviteCompleteDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddAcceptFriendInviteCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAcceptFriendInviteComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAcceptFriendInviteComplete_Parms
{
	struct FUniqueNetId                                FriendId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendByNameCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendByNameCompleteDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendByNameComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAddFriendByNameComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendByName
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     FriendName;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.QueryUserByDisplayName
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execQueryUserByDisplayName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     DisplayName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearQueryUserByDisplayNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             QueryDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddQueryUserByDisplayNameCompleteDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddQueryUserByDisplayNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             QueryDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnQueryUserByDisplayName
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnQueryUserByDisplayName_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     QueriedDisplayName;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                UserId;                                           		// 0x0018 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriend
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewFriend;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0050 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearAddFriendCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearAddFriendCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddAddFriendCompleteDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddAddFriendCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnAddFriendComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnAddFriendComplete_Parms
{
	struct FUniqueNetId                                NewFriendId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetKeyboardInputResults
// [0x00420001] 
struct UOnlinePlayerInterfaceEOS_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearKeyboardInputDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddKeyboardInputDoneDelegate
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnKeyboardInputComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnKeyboardInputComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowKeyboardUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     TitleText;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DescriptionText;                                  		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bIsPassword : 1;                                  		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               bShouldValidate : 1;                              		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     DefaultText;                                      		// 0x0030 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int                                                MaxResultLength;                                  		// 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.SetOnlineStatus
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                       		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetFriendsList
// [0x00434401] 
struct UOnlinePlayerInterfaceEOS_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       Friends;                                          		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                Count;                                            		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int                                                StartingAt;                                       		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	unsigned char                                      ReturnValue;                                      		// 0x0020 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadFriendsCompleteDelegate
// [0x00030003] 
struct UOnlinePlayerInterfaceEOS_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadFriendsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadFriendsComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadFriendsList
// [0x00034401] 
struct UOnlinePlayerInterfaceEOS_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnWriteProfileSettingsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.WriteProfileSettings
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetProfileSettings
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReadProfileSettingsComplete
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ReadProfileSettings
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearFriendsChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddFriendsChangeDelegate
// [0x00030803] 
struct UOnlinePlayerInterfaceEOS_eventAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearMutingChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddMutingChangeDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginCancelledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginCancelledDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginChangeDelegate
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginChangeDelegate
// [0x00030401] 
struct UOnlinePlayerInterfaceEOS_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowFriendsUI
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsMuted
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AreAnyFriends
// [0x00420401] 
struct UOnlinePlayerInterfaceEOS_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendsQuery>                       Query;                                            		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.IsFriend
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanShowPresenceInformation
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanViewPlayerProfiles
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPurchaseContent
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanDownloadUserContent
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanCommunicate
// [0x00024003] 
struct UOnlinePlayerInterfaceEOS_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      CommMethod;                                       		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.CanPlayOnline
// [0x00424003] 
struct UOnlinePlayerInterfaceEOS_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetPlayerNickname
// [0x00030401] 
struct UOnlinePlayerInterfaceEOS_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetUniquePlayerId
// [0x00430401] 
struct UOnlinePlayerInterfaceEOS_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.GetLoginStatus
// [0x00030401] 
struct UOnlinePlayerInterfaceEOS_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLogoutCompletedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLogoutCompletedDelegate
// [0x00020003] 
struct UOnlinePlayerInterfaceEOS_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLogoutCompleted
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLogoutCompleted_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Logout
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ClearLoginFailedDelegate
// [0x00020401] 
struct UOnlinePlayerInterfaceEOS_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AddLoginFailedDelegate
// [0x00030401] 
struct UOnlinePlayerInterfaceEOS_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnReceievedPinGrantCode
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnReceievedPinGrantCode_Parms
{
	unsigned char                                      Result;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      LocalUserNum;                                     		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     URL;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                SecondsUntilExpiration;                           		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginFailed
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.AutoLogin
// [0x00020001] 
struct UOnlinePlayerInterfaceEOS_execAutoLogin_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.Login
// [0x00034401] 
struct UOnlinePlayerInterfaceEOS_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     LoginName;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWantsLocalOnly : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.ShowLoginUI
// [0x00024001] 
struct UOnlinePlayerInterfaceEOS_execShowLoginUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bShowOnlineOnly : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnFriendsChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnFriendsChange_Parms
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnMutingChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnMutingChange_Parms
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginCancelled
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginCancelled_Parms
{
};

// Function OnlineSubsystemEOS.OnlinePlayerInterfaceEOS.OnLoginChange
// [0x00120001] 
struct UOnlinePlayerInterfaceEOS_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterStatGuid
// [0x00420001] 
struct UOnlineStatsInterfaceEOS_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ClientStatGuid;                                   		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetClientStatGuid
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnRegisterHostStatGuidComplete
// [0x00120001] 
struct UOnlineStatsInterfaceEOS_execOnRegisterHostStatGuidComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.RegisterHostStatGuid
// [0x00420001] 
struct UOnlineStatsInterfaceEOS_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.GetHostStatGuid
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlinePlayerScores
// [0x00420001] 
struct UOnlineStatsInterfaceEOS_execWriteOnlinePlayerScores_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                     		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearFlushOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddFlushOnlineStatsCompleteDelegate
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnFlushOnlineStatsComplete
// [0x00120001] 
struct UOnlineStatsInterfaceEOS_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FlushOnlineStats
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.WriteOnlineStats
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execWriteOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.FreeStats
// [0x00020001] 
struct UOnlineStatsInterfaceEOS_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineStatsInterfaceEOS_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.AddReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineStatsInterfaceEOS_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.OnReadOnlineStatsComplete
// [0x00120001] 
struct UOnlineStatsInterfaceEOS_execOnReadOnlineStatsComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                NumRows;                                          		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsByRank
// [0x00024401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStatsByRank_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                StartIndex;                                       		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int                                                NumToRead;                                        		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStatsForFriends
// [0x00020401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStatsForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineStatsInterfaceEOS.ReadOnlineStats
// [0x00420401] 
struct UOnlineStatsInterfaceEOS_execReadOnlineStats_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearAllDelegates
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearAllDelegates_Parms
{
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearDeleteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddDeleteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.DeleteUserFile
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execDeleteUserFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnDeleteUserFileComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnDeleteUserFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearWriteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddWriteUserFileCompleteDelegate
// [0x00030003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddWriteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.WriteUserFile
// [0x00430401] 
struct UOnlineUserCloudFileInterfaceEOS_execWriteUserFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnWriteUserFileComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnWriteUserFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearReadUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddReadUserFileCompleteDelegate
// [0x00030003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddReadUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ReadUserFile
// [0x00030401] 
struct UOnlineUserCloudFileInterfaceEOS_execReadUserFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnReadUserFileComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnReadUserFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetUserFileList
// [0x00430401] 
struct UOnlineUserCloudFileInterfaceEOS_execGetUserFileList_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineUserCloudFileInterfaceEOS_execClearEnumerateUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.AddEnumerateUserFileCompleteDelegate
// [0x00030003] 
struct UOnlineUserCloudFileInterfaceEOS_execAddEnumerateUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.EnumerateUserFiles
// [0x00030401] 
struct UOnlineUserCloudFileInterfaceEOS_execEnumerateUserFiles_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.OnEnumerateUserFilesComplete
// [0x00120001] 
struct UOnlineUserCloudFileInterfaceEOS_execOnEnumerateUserFilesComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFile
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execClearFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.ClearFiles
// [0x00020401] 
struct UOnlineUserCloudFileInterfaceEOS_execClearFiles_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS.GetFileContents
// [0x00430401] 
struct UOnlineUserCloudFileInterfaceEOS_execGetFileContents_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE.__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE
// [0x00020003] 
struct U__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE_exec__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE_Parms
{
	int                                                _;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     PlatformAuthTicket;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05
// [0x00020003] 
struct U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05_exec__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
