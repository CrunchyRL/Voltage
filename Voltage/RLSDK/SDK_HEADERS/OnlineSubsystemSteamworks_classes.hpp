/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.hpp
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

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : int
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : int
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : int
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : int
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_END                                             = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : int
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : int
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0018 (0x03C8 - 0x03E0)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	TArray<unsigned char>                              EncryptedTicket;                                  		// 0x03C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	unsigned long long                                 EncryptedTicketHandle;                            		// 0x03D8 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
		}

		return uClassPointer;
	};

	bool RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequiresAuthTicket();
	bool GetServerAddr(struct FIpAddr& OutServerIP, int& OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& OutServerUID);
	bool VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID);
	bool CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int& OutAuthTicketUID);
	bool VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID);
	bool CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int& OutAuthTicketUID);
	bool SendServerAuthRequest(struct FUniqueNetId ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID);
};

// Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks
// 0x0138 (0x0060 - 0x0198)
class UOnlineCommunityContentInterfaceSteamworks : public UObject
{
public:
	class UOnlineSubsystemSteamworks*                  OwningSubsystem;                                  		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FWorkshopItemData                           WorkshopItem;                                     		// 0x0068 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadedWorkshopData__Delegate;             		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadContentListComplete__Delegate;            		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsContentListComplete__Delegate;     		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUploadContentComplete__Delegate;              		// 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadContentComplete__Delegate;            		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetContentPayloadComplete__Delegate;          		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINECOMMUNITYCONTENTINTERFACESTEAMWORKS));
		}

		return uClassPointer;
	};

	void UpdateWorkshopItemUploadProgress();
	void DownloadAllWorkshopData(struct FScriptDelegate Callback);
	void CreateWorkshopItem();
	void RateContent(unsigned char PlayerNum, int NewRating, struct FCommunityContentFile& FileToRate);
	void ClearGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate);
	void AddGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate);
	void OnGetContentPayloadComplete(unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<unsigned char>& Payload);
	bool GetContentPayload(unsigned char PlayerNum, struct FCommunityContentFile& FileDownloaded);
	void ClearDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate);
	void AddDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate);
	void OnDownloadContentComplete(unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<unsigned char> Payload);
	bool DownloadContent(unsigned char PlayerNum, struct FCommunityContentFile& FileToDownload);
	void ClearUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate);
	void AddUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate);
	void OnUploadContentComplete(unsigned long bWasSuccessful, struct FCommunityContentFile UploadedFile);
	bool UploadContent(unsigned char PlayerNum, TArray<unsigned char>& Payload, struct FCommunityContentMetadata& MetaData);
	bool GetFriendsContentList(unsigned char PlayerNum, struct FOnlineFriend& Friend, TArray<struct FCommunityContentFile>& ContentFiles);
	void ClearReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate);
	void AddReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate);
	void OnReadFriendsContentListComplete(unsigned long bWasSuccessful);
	bool ReadFriendsContentList(unsigned char PlayerNum, int StartAt, int NumToRead, TArray<struct FOnlineFriend>& Friends);
	bool GetContentList(unsigned char PlayerNum, TArray<struct FCommunityContentFile>& ContentFiles);
	void ClearReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate);
	void AddReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate);
	void OnReadContentListComplete(unsigned long bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles);
	bool ReadContentList(unsigned char PlayerNum, struct FUniqueNetId NetId, struct FString Path, int StartAt, int NumToRead);
	void Exit();
	bool Init();
	void OnDownloadedWorkshopData(unsigned long bSuccess, TArray<struct FDownloadedWorkshopData>& Items);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0190 (0x0318 - 0x04A8)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                         		// 0x0318 (0x0078) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FMatchmakingQueryState                      InviteSearchQuery;                                		// 0x0390 (0x0078) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              ServerBrowserTimeout;                             		// 0x0408 (0x0004) [0x0000000000000000]               
	float                                              InviteTimeout;                                    		// 0x040C (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                InviteServerUID;                                  		// 0x0410 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x0458 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FString                                     InviteLocationUrl;                                		// 0x0460 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                  		// 0x0470 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                		// 0x0480 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bFilterEngineBuild : 1;                           		// 0x0490 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FFilterKeyToSteamKeyMapping>         FilterKeyToSteamKeyMap;                           		// 0x0498 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
		}

		return uClassPointer;
	};

	void PrintDebugInfoNative(class UDebugDrawer* Drawer);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited);
	bool AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName);
	void OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet
// 0x0020 (0x0318 - 0x0338)
class UOnlineGameInterfaceSteamworks_PsyNet : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                  		// 0x0318 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                		// 0x0328 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS_PSYNET));
		}

		return uClassPointer;
	};

	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	bool AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
	void SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, unsigned char Visibility);
};

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0050 (0x02C0 - 0x0310)
class UOnlineLobbyInterfaceSteamworks : public UOnlineLobbyInterfaceImpl
{
public:
	TArray<struct FLobbyMetaData>                      CreateLobbySettings;                              		// 0x02C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PendingCreateLobbyResult;                         		// 0x02D0 (0x0010) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bLobbySearchInProgress : 1;                       		// 0x02E0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	TArray<struct FString>                             LobbyMemberKeys;                                  		// 0x02E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                        		// 0x02F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
		}

		return uClassPointer;
	};

	bool KickPlayer(unsigned char Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool GetLobbyFromCommandline(unsigned long bMarkAsJoined, struct FUniqueLobbyId& LobbyId);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId& LobbyId);
	bool InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner);
	bool SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyType(unsigned char Type, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID);
	bool RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId);
	bool SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId);
	void OnLobbyKicked(int AdminIndex, struct FActiveLobbyInfo& Lobby);
	bool SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<unsigned char>& Data);
	bool SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId& LobbyId);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId& LobbyId);
	bool UpdateFoundLobbies(struct FUniqueLobbyId LobbyId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, unsigned char Distance);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray<struct FLobbyMetaData> InitialSettings);
};

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0BC8 (0x0370 - 0x0F38)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    Discord;                                          		// 0x0370 (0x0008) [0x0000000000001000] (CPF_Native)  
	TArray<struct FName>                               UnlockedDLC;                                      		// 0x0378 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                             		// 0x0388 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bStoringAchievement : 1;                          		// 0x0398 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientStatsStorePending : 1;                     		// 0x0398 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x0398 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x0398 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	unsigned long                                      bLastHasConnection : 1;                           		// 0x0398 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x0398 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x0398 (0x0004) [0x0000000000004002] [0x00000040] (CPF_Const | CPF_Config)
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x0398 (0x0004) [0x0000000000004002] [0x00000080] (CPF_Const | CPF_Config)
	unsigned long                                      bShowIPCCount : 1;                                		// 0x0398 (0x0004) [0x0000000000004002] [0x00000100] (CPF_Const | CPF_Config)
	unsigned long                                      bInterceptFriendMessages : 1;                     		// 0x0398 (0x0004) [0x0000000000004000] [0x00000200] (CPF_Config)
	int                                                TotalGSStatsStoresPending;                        		// 0x039C (0x0004) [0x0000000000000000]               
	unsigned char                                      UserStatsReceivedState;                           		// 0x03A0 (0x0001) [0x0000000000000000]               
	unsigned char                                      LoggedInStatus;                                   		// 0x03A1 (0x0001) [0x0000000000000002] (CPF_Const)   
	unsigned char                                      KeyboardInputWasCanceled;                         		// 0x03A2 (0x0001) [0x0000000000000000]               
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x03A3 (0x0001) [0x0000000000000002] (CPF_Const)   
	unsigned char                                      CurrentNotificationPosition;                      		// 0x03A4 (0x0001) [0x0000000000004000] (CPF_Config)  
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x03A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FString                                     LocalProfileName;                                 		// 0x03B0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                               		// 0x03C0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x03D0 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int                                                LoggedInPlayerNum;                                		// 0x0418 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FString                                     LoggedInCountry;                                  		// 0x0420 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<int>                                        AvatarSizes;                                      		// 0x0430 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                    		// 0x0440 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0450 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                  		// 0x0458 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                 		// 0x0468 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                 		// 0x0478 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;               		// 0x0488 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                             		// 0x0498 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                           		// 0x04A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                            		// 0x04B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                             		// 0x04C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                             		// 0x04D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                 		// 0x04E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                 		// 0x04F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                        		// 0x0508 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                  		// 0x0518 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                              		// 0x0528 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                   		// 0x0538 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                             		// 0x0548 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                         		// 0x0558 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;              		// 0x0568 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                    		// 0x0578 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                   		// 0x0588 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                  		// 0x0598 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileReadCompleteDelegates;                  		// 0x05A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileWriteCompleteDelegates;                 		// 0x05B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                        		// 0x05C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputCompleteDelegates;                   		// 0x05D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     KeyboardInputResults;                             		// 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x05F8 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastLocalTalkerNotificationTime;                  		// 0x0650 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              MaxTalkerNotificationTime;                        		// 0x0654 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FUniqueNetId>                        PendingRequestUserInformation;                    		// 0x0658 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                    		// 0x0668 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                AppID;                                            		// 0x0678 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x0680 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FPendingPlayerStats>                 PendingStats;                                     		// 0x0688 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     KeyboardResultsString;                            		// 0x0698 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                           		// 0x06A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                    		// 0x06B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                   		// 0x06C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                 		// 0x06D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x06E8 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x0720 (0x0008) [0x0000000000000000]               
	struct FString                                     CachedFriendMessage;                              		// 0x0728 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x0738 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             LocationUrlsForInvites;                           		// 0x0768 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     LocationUrl;                                      		// 0x0778 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                      		// 0x0788 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                  		// 0x0798 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x07A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;            		// 0x07B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                             		// 0x07C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                   		// 0x07D8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DefaultStatus;                                    		// 0x07E8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     GameInviteMessage;                                		// 0x07F8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4] ;                           		// 0x0808 (0x0020) [0x0000000000000000]               
	float                                              ConnectionPresenceTimeInterval;                   		// 0x0828 (0x0004) [0x0000000000000000]               
	float                                              ConnectionPresenceElapsedTime;                    		// 0x082C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FString                                     EncryptedProductKey;                              		// 0x0830 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        MuteList;                                         		// 0x0840 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FSteamUserCloud>                     UserCloudFiles;                                   		// 0x0850 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamUserCloudMetadata>             UserCloudMetadata;                                		// 0x0860 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          SharedFileCache;                                  		// 0x0870 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                             		// 0x0880 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                              		// 0x0890 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                       		// 0x08A0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                  		// 0x08B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                         		// 0x08C0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                        		// 0x08D0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                          		// 0x08E0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                          		// 0x08F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<int>                                        GameServerStatsMappings;                          		// 0x0900 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UOnlinePurchaseInterfaceSteamworks*          CachedPurchaseInt;                                		// 0x0910 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                    		// 0x0918 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FIpAddr>                             PendingRedirects;                                 		// 0x0920 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterfaceImpl;                               		// 0x0930 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;                 		// 0x0938 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;                 		// 0x0950 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;                 		// 0x0968 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0980 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0998 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x09B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x09C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;                 		// 0x09E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                       		// 0x09F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0A10 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x0A28 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0A40 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0A58 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0A70 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0A88 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0AA0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0AB8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0AD0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0AE8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0B00 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0B18 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0B30 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0B48 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0B60 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0B78 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                       		// 0x0B90 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                       		// 0x0BA8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x0BC0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x0BD8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0BF0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0C08 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendComplete__Delegate;                  		// 0x0C20 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUserByDisplayName__Delegate;             		// 0x0C38 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0C50 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveFriendComplete__Delegate;               		// 0x0C68 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptFriendInviteComplete__Delegate;         		// 0x0C80 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDenyFriendInviteComplete__Delegate;           		// 0x0C98 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0CB0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteCanceled__Delegate;               		// 0x0CC8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0CE0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0CF8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0D10 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0D28 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0D40 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0D58 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0D70 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0D88 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x0DA0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x0DB8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x0DD0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x0DE8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x0E00 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x0E18 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;             		// 0x0E30 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;            		// 0x0E48 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;      		// 0x0E60 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;                  		// 0x0E78 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;      		// 0x0E90 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;               		// 0x0EA8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;              		// 0x0EC0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;                  		// 0x0ED8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisteredController__Delegate;               		// 0x0EF0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;             		// 0x0F08 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                    		// 0x0F20 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
		}

		return uClassPointer;
	};

	bool RefreshNetworkErrorToggle();
	bool TriggerScreenshot();
	void OnControllerConnectionStatusChanged(int LocalPlayerNum, unsigned long bConnected);
	void OnControllerInputAPIChanged(int LocalPlayerNum, unsigned char InputAPI);
	unsigned char GetControllerPlatform(int LocalPlayerNum);
	int GetControllerID(int LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int LocalPlayerNum);
	void UnregisterController(int LocalPlayerNum);
	void RegisterController(int LocalPlayerNum, int ControllerId);
	bool CanRegisterController(int LocalPlayerNum);
	bool ShowBindings(int ControllerId);
	void SetControllerLayout(int ControllerId, struct FName LayoutName);
	void SetInputAPI(unsigned char TargetAPI);
	TArray<struct FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription);
	void HandleGamepadConnectionStatusChanged(class UGameViewportClient* GVC, int LocalPlayerNum, unsigned long bConnected);
	void HandleGamepadInputAPIChanged(class UGameViewportClient* GVC, int LocalPlayerNum, unsigned char InputAPI);
	void ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void OnInputAPIChanged(unsigned char TargetAPI);
	void OnUnregisteredController(int LocalPlayerNum);
	void OnRegisteredController(int LocalPlayerNum, int ControllerId);
	bool HasIncomingFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId InviteFrom);
	bool HasFriendsFunctionality();
	bool CanSendOfflinePartyInvite(struct FUniqueNetId PlayerID);
	bool CheckParentalControlInfo(unsigned long bShowUi);
	bool RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys);
	bool GetPlayHistoryRegistrationKey(TArray<unsigned char>& Key);
	bool IsOriginalAppOwner();
	void UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers);
	bool IsAchievementUnlocked(unsigned char LocalUserNum, int AchievementId);
	void UpdateGameProgress(unsigned char LocalPlayerNum, float Progress);
	void FinishOnlineGameSession(struct FString ServerId);
	void StartOnlineGameSession(struct FString ServerId);
	void ClearSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate);
	void AddSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate);
	void OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum);
	void ClearAccountPickerInput();
	void LookForAccountPickerInput();
	void AddPlayerToSession(unsigned char ControllerId);
	void ClearPrimaryPlayer();
	void RemoveUserAssociation(unsigned char ControllerId);
	void MapEnd();
	void MapStart();
	void OnlineMatchEnd();
	void OnlineMatchStart(struct FString MapName);
	void SetSessionDifficultyLevel(int DifficultyLevel);
	void SetSessionGameplayModeName(struct FName GameplayModeName);
	void SetSessionGameplayMode(int GameplayMode);
	TArray<bool> GetSyncedAchievements(unsigned char LocalUserNum);
	void SetPlayedWith(struct FUniqueNetId PlayerNetId);
	bool HandleBootMessage();
	void ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnErrorDialogClosed(int LocalUserNum);
	void ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void OnCloseKickPlayerDialog();
	void ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnCommerceDialogClosed();
	bool WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	bool RecordPlayersRecentlyMet(unsigned char LocalUserNum, struct FString GameDescription, TArray<struct FUniqueNetId>& Players);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave);
	void ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	void AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	bool GetOverlayEnabled();
	int GetDLCPurchaseTime(struct FName AppName);
	void HandleGetUserInfoComplete(struct FName NewCurrency, struct FString NewCountry);
	void GetPlayerCountry(unsigned char LocalUserNum);
	struct FString GetPlayerLanguage(unsigned char LocalUserNum);
	void ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	bool AnyPlayerChatRestricted();
	void InitializeTrophyAPI();
	void OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets);
	void OpenStoreForDLC(unsigned char LocalUserNum, struct FName DLC);
	void OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenErrorDialog(unsigned char LocalUserNum, unsigned char ErrorCode);
	void OpenPS4DisplayMode(unsigned char LocalUserNum, unsigned char DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int ControllerId);
	void SetControllerColor(int ControllerId, struct FColor NewColor);
	bool AddInGamePost(struct FString InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList);
	bool IsEnabled();
	void SetRichPresence(unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void ClearAllDelegates();
	void ClearWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate);
	void AddWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate);
	bool WriteSharedFile(struct FString UserId, struct FString Filename, TArray<unsigned char>& Contents);
	void OnWriteSharedFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle);
	void ClearReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate);
	void AddReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate);
	bool ReadSharedFile(struct FString SharedHandle);
	void OnReadSharedFileComplete(unsigned long bWasSuccessful, struct FString SharedHandle);
	bool ClearSharedFile(struct FString SharedHandle);
	bool ClearSharedFiles();
	bool GetSharedFileContents(struct FString SharedHandle, TArray<unsigned char>& FileContents);
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
	bool WriteUserFileInternal(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	bool GetFriendJoinURL(struct FUniqueNetId FriendUID, struct FString& ServerURL, struct FString& ServerUID);
	bool GetCommandlineJoinURL(unsigned long bMarkAsJoined, struct FString& ServerURL, struct FString& ServerUID);
	bool Int64ToUniqueNetId(struct FString UIDString, struct FUniqueNetId& OutUID);
	struct FString UniqueNetIdToInt64(struct FUniqueNetId& Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID);
	struct FString UniqueNetIdToPlayerName(struct FUniqueNetId& Uid);
	bool DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress);
	bool CreateLeaderboard(struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat);
	bool ResetStats(unsigned long bResetAchievements);
	bool ShowCustomMessageUI(unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray<struct FUniqueNetId>& Recipients);
	void ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful);
	bool ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	void GetSteamClanData(TArray<struct FSteamPlayerClanData>& Results);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatars(unsigned char Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& PlayerNetIds);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray<struct FUniqueNetId>& Players);
	unsigned char GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>& Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(unsigned long bWasSuccessful);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool UpdateStat(unsigned char LocalUserNum, struct FName StatName, int Points);
	bool IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString& DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(unsigned long bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FString InviteText);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowGamerCardUI(unsigned char LocalUserNum, struct FUniqueNetId UniqueId, struct FString PlayerName);
	bool ShowFeedbackUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends);
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	bool RegisterHostStatGuid(struct FString& HostStatGuid);
	struct FString GetHostStatGuid();
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
	bool DenyFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool AcceptFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool RemoveFriend(unsigned char LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID);
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
	bool HideKeyboardUI(unsigned char LocalUserNum);
	bool ShowKeyboardUI(unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties);
	unsigned char GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray<unsigned char>& FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(struct FString FileToRead);
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	unsigned char GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(unsigned char ConnectionStatus);
	unsigned char GetCurrentConnectionStatus();
	bool IsControllerConnected(int ControllerId);
	void ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void OnUserRestored(unsigned char ControllerId);
	void ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void OnUserOrphaned(unsigned char ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, unsigned long bIsConnected);
	void SetNetworkNotificationPosition(unsigned char NewPos);
	unsigned char GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void OnExternalUIChange(unsigned long bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(unsigned long bIsConnected);
	bool HasLinkConnection();
	struct FString eventGetPlayerNicknameFromIndex(int UserIndex);
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
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	unsigned char GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>& Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(unsigned long bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
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
	void ClearAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void AddAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void GetFriendPresence(struct FOnlineFriend& FriendData);
	void ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void ClearUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate);
	void AddUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate);
	void ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void SetPrimaryPlayerGamepadToLastInput();
	bool IsMuted(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>& Query);
	bool IsFriend(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	void RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, unsigned char RestrictedFeature);
	bool CanUploadFitnessData(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShareKinectContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanBrowseInternet(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanAccessPremiumContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanUseCloudStorage(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanRecordDVRClips(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShowPresenceInformation(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanViewPlayerProfiles(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanPurchaseContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanDownloadUserContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanShareUserCreatedContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanCommunicateVoice(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanCommunicateVideo(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	bool CanCommunicateText(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	unsigned char CanCommunicate(unsigned char LocalUserNum, unsigned char CommMethod, unsigned long bAttemptToResolve);
	bool CanPlayOnline(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId& PlayerID);
	bool IsGuestLogin(unsigned char LocalUserNum);
	unsigned char GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(unsigned long bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly);
	void SetKickPlayerDialogActive(unsigned long Active);
	bool IsUserSwitchActive();
	void SetKickPreviousUser(unsigned char LocalUserNum);
	bool SupportInGameLogin();
	bool ShowControllerUI();
	bool ShowLoginUIForOrphanedUser(unsigned char LocalUserNum);
	bool ShowLoginUI(unsigned char LocalUserNum, unsigned long bShowOnlineOnly);
	void OnAvatarChange(struct FUniqueNetId PlayerID);
	void FriendPresenceChange(struct FUniqueNetId PlayerID);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	void OnUserSignInComplete(unsigned char LocalUserNum);
	void OnUserSwitchComplete(unsigned char LocalUserNum);
	void eventExit();
	bool eventPostInit();
	bool eventInit();
	void CanPlayOnlineChanged(unsigned char LocalUserNum);
};

// Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks
// 0x0020 (0x0090 - 0x00B0)
class UOnlinePurchaseInterfaceSteamworks : public UOnlinePurchaseInterfaceImpl
{
public:
	TArray<struct FAppPriceInfoRequest>                AppPriceInfoRequests;                             		// 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MicroTxnResponseDelegates;                        		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEPURCHASEINTERFACESTEAMWORKS));
		}

		return uClassPointer;
	};

	void ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	struct FString FormatCurrency(struct FString Currency, int Price);
	void HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	bool GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames);
	bool AppIdToName(struct FString AppID, unsigned long bOptional, struct FName& AppName);
	bool AppNameToId(struct FName AppName, unsigned long bOptional, struct FString& AppID);
};

// Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet
// 0x000C (0x00B4 - 0x00C0)
class USteamWorkshopCommandlet : public UCommandlet
{
public:
	class UOnlineSubsystemCommonImpl*                  OnlineSub;                                        		// 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_STEAMWORKSHOPCOMMANDLET));
		}

		return uClassPointer;
	};

	bool eventInit();
};

// Class OnlineSubsystemSteamworks.SteamWorkshopEngine
// 0x0004 (0x0B48 - 0x0B4C)
class USteamWorkshopEngine : public UGameEngine
{
public:
	unsigned long                                      bHasFinsihed : 1;                                 		// 0x0B48 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_STEAMWORKSHOPENGINE));
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0018 (0x0288 - 0x02A0)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned long                                      bSteamSocketsOnly : 1;                            		// 0x0288 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned char                                      UnknownData00[0x14];                              		// 0x028C (0x0014) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_IPNETDRIVERSTEAMWORKS));
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xB210 - 0xB210)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_IPNETCONNECTIONSTEAMWORKS));
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
