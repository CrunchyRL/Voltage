/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK, Crunchy
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemEOS.OnlineSubsystemEOS
// 0x02C8 (0x0370 - 0x0638)
class UOnlineSubsystemEOS : public UOnlineSubsystemCommonImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x0370 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                                 		// 0x0378 (0x0008) [0x0000000000000000]               
	class UOnlineStatsInterfaceEOS*                    StatsInterfaceEOS;                                		// 0x0380 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceEOS*                     AuthInterfaceEOS;                                 		// 0x0388 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                       		// 0x0390 (0x0008) [0x0000000000000000]               
	class UOnlineFriendsInterfaceEOS*                  FriendsInterfaceEOS;                              		// 0x0398 (0x0008) [0x0000000000000000]               
	class UOnlineUserCloudFileInterfaceEOS*            UserCloudFileInterfaceEOS;                        		// 0x03A0 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;               		// 0x03A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AuthHandle;                                       		// 0x03B8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                    		// 0x03C0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                   		// 0x03C8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                   		// 0x03D0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                    		// 0x03D8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionsHandle;                                   		// 0x03E0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                        		// 0x03E8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    StatsHandle;                                      		// 0x03F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    AchievementsHandle;                               		// 0x03F8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                       		// 0x0400 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UIHandle;                                         		// 0x0408 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FName>                               UnlockedDLC;                                      		// 0x0410 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                             		// 0x0420 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                        		// 0x0430 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                   		// 0x0440 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;         		// 0x0458 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalking__Delegate;                      		// 0x0470 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0488 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x04A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x04B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x04D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x04E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0500 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0518 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x0530 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x0548 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x0560 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0578 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;              		// 0x0590 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;               		// 0x05A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;                  		// 0x05C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;                  		// 0x05D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;      		// 0x05F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                       		// 0x0608 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                       		// 0x0620 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineSubsystemEOS");
		}

		return uClassPointer;
	};

	bool ManuallyTickEOSPlatform();
	struct FString eventFormatCurrency(struct FString Currency, int Price);
	void ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	bool GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames);
	bool HandleBootMessage();
	bool GetOverlayEnabled();
	bool RefreshNetworkErrorToggle();
	void ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void OnUserRestored(unsigned char ControllerId);
	void ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void OnUserOrphaned(unsigned char ControllerId);
	void OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets);
	void OpenStoreForDLC(unsigned char LocalUserNum, struct FName DLC);
	void OpenErrorDialog(unsigned char LocalUserNum, unsigned char ErrorCode);
	void OpenPS4DisplayMode(unsigned char LocalUserNum, unsigned char DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int ControllerId);
	void SetControllerColor(int ControllerId, struct FColor NewColor);
	void InitializeTrophyAPI();
	bool AnyPlayerChatRestricted();
	void ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	void AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	void UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers);
	void ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnErrorDialogClosed(int LocalUserNum);
	void ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnCommerceDialogClosed();
	unsigned char GetCurrentConnectionStatus();
	void ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void OnCloseKickPlayerDialog();
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	int GetDLCPurchaseTime(struct FName AppName);
	bool SaveKey(struct FString ProductKey);
	bool GetLocalAccountNames(TArray<struct FString>& Accounts);
	bool DeleteLocalAccount(struct FString Username, struct FString Password);
	bool RenameLocalAccount(struct FString NewUserName, struct FString OldUserName, struct FString Password);
	bool CreateLocalAccount(struct FString Username, struct FString Password);
	void ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(unsigned char ErrorStatus);
	bool CreateOnlineAccount(struct FString Username, struct FString Password, struct FString EmailAddress, struct FString ProductKey);
	bool IsKeyValid();
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	unsigned char GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(unsigned char ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, unsigned long bIsConnected);
	void SetNetworkNotificationPosition(unsigned char NewPos);
	unsigned char GetNetworkNotificationPosition();
	void NotifyExternalUIChanged(unsigned long bIsOpening);
	void ClearExternalUIChangeDelegate(struct FScriptDelegate InDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate InDelegate);
	void OnExternalUIChange(unsigned long bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(unsigned long bIsConnected);
	bool HasLinkConnection();
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	bool RegisterHostStatGuid(struct FString& HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>& PlayerScores);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(unsigned long bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void OnPlayerTalking(struct FUniqueNetId Player);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool MuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString eventGetPlayerNicknameFromIndex(int UserIndex);
	bool eventInit();
	bool InitEOS(struct FString& SandboxId, struct FString& DeploymentId);
	void EventGetAppPriceInfoComplete(struct FName AppName, struct FString Price, struct FString DiscountPrice, int DiscountPercentage);
	void OnMicroTxnResponse(unsigned long bAuthorized, unsigned long long OrderId);
};

// Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS
// 0x0008 (0x03C8 - 0x03D0)
class UOnlineAuthInterfaceEOS : public UOnlineAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x03C8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS");
		}

		return uClassPointer;
	};

	bool RequiresAuthTicket();
	bool RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
};

// Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS
// 0x0008 (0x0080 - 0x0088)
class UOnlineFriendsInterfaceEOS : public UOnlineFriendsInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x0080 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS");
		}

		return uClassPointer;
	};

	bool GetActivePlatformId(unsigned char LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId);
	bool RequestLinkedAccounts(unsigned char LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback);
};

// Class OnlineSubsystemEOS.OnlineGameInterfaceEOS
// 0x001C (0x0318 - 0x0334)
class UOnlineGameInterfaceEOS : public UOnlineGameInterfaceImpl
{
public:
	struct FPointer                                    SessionsHandle;                                   		// 0x0318 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    CurrentSearchHandle;                              		// 0x0320 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x0328 (0x0008) [0x0000000000000000]               
	unsigned long                                      bGameSessionUpdateInProgress : 1;                 		// 0x0330 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineGameInterfaceEOS");
		}

		return uClassPointer;
	};

	bool AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
};

// Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS
// 0x0008 (0x00B8 - 0x00C0)
class UOnlinePersistentAuthInterfaceEOS : public UOnlinePersistentAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x00B8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS");
		}

		return uClassPointer;
	};

	bool AuthWithNintendoAccountToken(unsigned char LocalUserNum, struct FString& NintendoAccountToken);
	class UDateTime* GetAuthExpirationTimestamp(unsigned char LocalUserNum);
	bool LaunchAccountPortal(unsigned char LocalUserNum);
	struct FString GetClientCredentials();
	struct FString GetContinuanceToken(unsigned char LocalUserNum);
	bool UseRefreshToken(unsigned char LocalUserNum, struct FString RefreshToken);
	struct FString GetRefreshToken(unsigned char LocalUserNum);
	bool RequestPinGrantCode(unsigned char LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS
// 0x05B8 (0x0060 - 0x0618)
class UOnlinePlayerInterfaceEOS : public UObject
{
public:
	struct FPointer                                    AuthHandle;                                       		// 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                    		// 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                   		// 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                   		// 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                    		// 0x0080 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                        		// 0x0088 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                       		// 0x0090 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x0098 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                                 		// 0x00A0 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                       		// 0x00A8 (0x0008) [0x0000000000000000]               
	int                                                DefaultLocalUser;                                 		// 0x00B0 (0x0004) [0x0000000000000000]               
	struct FString                                     ProfileDataDirectory;                             		// 0x00B8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ProfileDataExtension;                             		// 0x00C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadProfileSettingsDelegates;                     		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                    		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x00F8 (0x0008) [0x0000000000000000]               
	TArray<struct FOnlineProfileSetting>               LastProfileSettings;                              		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                             		// 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      FriendsReadState;                                 		// 0x0120 (0x0001) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                           		// 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                             		// 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginCancelledDelegates;                          		// 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                         		// 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                            		// 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMappingEOS>             StatusMappings;                                   		// 0x0178 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DefaultStatus;                                    		// 0x0188 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                      		// 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                             		// 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                  		// 0x01B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                             		// 0x01C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                         		// 0x01D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AchievementsHandle;                               		// 0x01E8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                             		// 0x01F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedPinGrantDelegates;                        		// 0x0200 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;              		// 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendComplete__Delegate;                  		// 0x0318 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUserByDisplayName__Delegate;             		// 0x0330 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0348 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptFriendInviteComplete__Delegate;         		// 0x0360 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDenyFriendInviteComplete__Delegate;           		// 0x0378 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveFriendComplete__Delegate;               		// 0x0390 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x03A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteCanceled__Delegate;               		// 0x03C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x03D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x03F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0408 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestNativePlatformAuthTicketComplete__Delegate;		// 0x0420 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0438 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0450 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0468 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x0480 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;                 		// 0x0498 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;                 		// 0x04B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;      		// 0x04C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisteredController__Delegate;               		// 0x04E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;             		// 0x04F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                    		// 0x0510 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;                 		// 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0558 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0570 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0588 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x05A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                       		// 0x05B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;                 		// 0x05D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerCountryRetrieved__Delegate;             		// 0x05E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;             		// 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS");
		}

		return uClassPointer;
	};

	bool ShowInviteUI(unsigned char LocalUserNum, struct FString InviteText);
	bool ShowGamerCardUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	void SetRichPresence(unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void GetFriendPresence(struct FOnlineFriend& FriendData);
	bool RecordPlayersRecentlyMet(unsigned char LocalUserNum, struct FString GameDescription, TArray<struct FUniqueNetId>& Players);
	bool WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
	void OnSanitizeStringComplete(struct FWordFilterResult Result);
	bool HideKeyboardUI(unsigned char LocalUserNum);
	void ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, struct FString Country);
	void GetPlayerCountry(unsigned char LocalUserNum);
	void ClearAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void AddAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void eventAddFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void FriendPresenceChange(struct FUniqueNetId PlayerID);
	void OnAvatarChange(struct FUniqueNetId PlayerID);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages);
	unsigned char GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>& Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadAchievementsComplete(int TitleId);
	void OnUnlockAchievementComplete(unsigned long bWasSuccessful);
	bool ShowControllerUI();
	struct FString GetPlayerLanguage(unsigned char LocalUserNum);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	bool IsDeviceValid(int DeviceID);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString& DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(unsigned long bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray<struct FUniqueNetId>& Players);
	bool IsUserSwitchActive();
	void SetKickPlayerDialogActive(unsigned long Active);
	void SetKickPreviousUser(unsigned char LocalUserNum);
	bool ShowLoginUIForOrphanedUser(unsigned char LocalUserNum);
	TArray<bool> GetSyncedAchievements(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	void RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, unsigned char RestrictedFeature);
	bool CanCommunicateVoice(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanCommunicateVideo(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanCommunicateText(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShareUserCreatedContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanAccessPremiumContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanUseCloudStorage(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanRecordDVRClips(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanBrowseInternet(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShareKinectContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanUploadFitnessData(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	void SetPrimaryPlayerGamepadToLastInput();
	void ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void OnUserSwitchComplete(unsigned char LocalUserNum);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId);
	bool GetPlayHistoryRegistrationKey(TArray<unsigned char>& Key);
	bool CheckParentalControlInfo(unsigned long bShowUi);
	TArray<struct FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription);
	int GetControllerID(int LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int LocalPlayerNum);
	void UnregisterController(int LocalPlayerNum);
	void RegisterController(int LocalPlayerNum, int ControllerId);
	bool CanRegisterController(int LocalPlayerNum);
	bool ShowBindings(int ControllerId);
	void SetControllerLayout(int ControllerId, struct FName LayoutName);
	void SetInputAPI(unsigned char TargetAPI);
	void ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void OnInputAPIChanged(unsigned char TargetAPI);
	void ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void OnUnregisteredController(int LocalPlayerNum);
	void OnRegisteredController(int LocalPlayerNum, int ControllerId);
	bool AddInGamePost(struct FString InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList);
	bool UpdateStat(unsigned char LocalUserNum, struct FName StatName, int Points);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave);
	bool RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys);
	bool IsAchievementUnlocked(int AchievementId);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowFeedbackUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void CanPlayOnlineChanged(unsigned char LocalUserNum);
	void ClearUserSignInCompleteDelegate(struct FScriptDelegate InDelegate);
	void AddUserSignInCompleteDelegate(struct FScriptDelegate InDelegate);
	void OnUserSignInComplete(unsigned char LocalUserNum);
	bool ShowCustomMessageUI(unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray<struct FUniqueNetId>& Recipients);
	void ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful);
	bool ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void RequestNativePlatformAuthTicket(int LocalUserNum, struct FScriptDelegate Callback);
	void OnRequestNativePlatformAuthTicketComplete(int LocalUserNum, struct FString PlatformAuthTicket);
	void eventLinkedAccount(int LocalUserNum);
	void RefreshConnectLogin(int LocalUserNum);
	void ConnectLogin(int LocalUserNum);
	bool HasIncomingFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId InviteFrom);
	bool SupportInGameLogin();
	bool HasFriendsFunctionality();
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(unsigned long bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, struct FUniqueNetId Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, struct FString InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, struct FString Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message);
	void ClearFriendInviteCanceledDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteCanceledDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteCanceled(unsigned char LocalUserNum, struct FUniqueNetId CanceledUserId);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message);
	bool RemoveFriend(unsigned char LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID);
	bool DenyFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool AcceptFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendByNameComplete(unsigned long bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, struct FString FriendName, struct FString Message);
	bool QueryUserByDisplayName(unsigned char LocalUserNum, struct FString DisplayName);
	void ClearQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate QueryDelegate);
	void AddQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate QueryDelegate);
	void OnQueryUserByDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId UserId);
	bool AddFriend(unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message);
	void ClearAddFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error);
	struct FString GetKeyboardInputResults(unsigned char& bWasCanceled);
	void ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void OnKeyboardInputComplete(unsigned long bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties);
	unsigned char GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>& Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(unsigned long bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void eventAddFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	bool IsMuted(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>& Query);
	bool IsFriend(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool CanShowPresenceInformation(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanViewPlayerProfiles(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanPurchaseContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanDownloadUserContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	unsigned char CanCommunicate(unsigned char LocalUserNum, unsigned char CommMethod, unsigned long bAttemptToResolve);
	bool CanPlayOnline(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId& PlayerID);
	unsigned char GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(unsigned long bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnReceievedPinGrantCode(unsigned char Result, unsigned char LocalUserNum, struct FString Code, struct FString URL, int SecondsUntilExpiration);
	void OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly);
	bool ShowLoginUI(unsigned char LocalUserNum, unsigned long bShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS
// 0x0068 (0x0060 - 0x00C8)
class UOnlineStatsInterfaceEOS : public UObject
{
public:
	struct FPointer                                    StatsHandle;                                      		// 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x0068 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     ReadStatsDelegates;                               		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS");
		}

		return uClassPointer;
	};

	bool RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	bool RegisterHostStatGuid(struct FString& HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(struct FName SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool FlushOnlineStats(struct FName SessionName);
	bool WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(unsigned long bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
};

// Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS
// 0x00B0 (0x0060 - 0x0110)
class UOnlineUserCloudFileInterfaceEOS : public UObject
{
public:
	struct FPointer                                    PDSHandle;                                        		// 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                               		// 0x0068 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     EnumerateUserFileCompleteDelegates;               		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                    		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                   		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                  		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete);
	void OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	bool WriteUserFile(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents);
	void OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	bool ReadUserFile(struct FString UserId, struct FString Filename);
	void OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(struct FString UserId);
	void OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId);
	bool ClearFile(struct FString UserId, struct FString Filename);
	bool ClearFiles(struct FString UserId);
	bool GetFileContents(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE
// 0x0004 (0x0060 - 0x0064)
class U__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE : public UObject
{
public:
	int                                                LocalUserNum;                                     		// 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE");
		}

		return uClassPointer;
	};

	void __OnlinePlayerInterfaceEOS__LinkedAccount_35478360455FC0803A7CA081E5B560AE(int _, struct FString PlatformAuthTicket);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05
// 0x0020 (0x0060 - 0x0080)
class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05 : public UObject
{
public:
	int                                                LocalUserNum;                                     		// 0x0060 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05");
		}

		return uClassPointer;
	};

	void __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_220AAF194826E64582E7DEA5AA114C05(unsigned long bSuccess, struct FString Code);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
