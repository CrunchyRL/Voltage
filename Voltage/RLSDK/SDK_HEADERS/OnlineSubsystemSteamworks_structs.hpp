/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData
// 0x00A0
struct FWorkshopItemData
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Content;                                          		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Preview;                                          		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Tags;                                             		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     AddPairs;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     RemovePairs;                                      		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Visibility;                                       		// 0x0080 (0x0004) [0x0000000000000000]               
	unsigned long long                                 ItemID;                                           		// 0x0088 (0x0008) [0x0000000000000000]               
	unsigned long                                      bIsUploading : 1;                                 		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 UpdateHandle;                                     		// 0x0098 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0010
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Response;                                         		// 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0040
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned char                                      KeyType;                                          		// 0x0004 (0x0001) [0x0000000000000000]               
	struct FString                                     RawKey;                                           		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     SteamKey;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bReverseFilter : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     IgnoreValue;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x0050
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                         		// 0x0000 (0x0050) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0010
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Response;                                         		// 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0078
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                           		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    ServerListResponse;                               		// 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
	unsigned char                                      CurrentMatchmakingType;                           		// 0x0030 (0x0001) [0x0000000000000000]               
	struct FPointer                                    CurrentMatchmakingQuery;                          		// 0x0038 (0x0008) [0x0000000000001000] (CPF_Native)  
	TArray<struct FClientFilterORClause>               ActiveClientsideFilters;                          		// 0x0040 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	TArray<class UOnlineGameSettings*>                 PendingRulesSearchSettings;                       		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UOnlineGameSettings*>                 PendingPingSearchSettings;                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bIgnoreRefreshComplete : 1;                       		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastActivityTimestamp;                            		// 0x0074 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppPriceInfoRequest
// 0x0030
struct FAppPriceInfoRequest
{
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               AppNames;                                         		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	unsigned long long                                 Dud;                                              		// 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x002C
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      UpdateType;                                       		// 0x0010 (0x0001) [0x0000000000000000]               
	int                                                LeaderboardSize;                                  		// 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned char                                      SortType;                                         		// 0x0018 (0x0001) [0x0000000000000002] (CPF_Const)   
	unsigned char                                      DisplayFormat;                                    		// 0x0019 (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FLeaderboardHandle                          LeaderboardRef;                                   		// 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bLeaderboardInitializing : 1;                     		// 0x0028 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	unsigned long                                      bLeaderboardInitiated : 1;                        		// 0x0028 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0030
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      RequestType;                                      		// 0x0010 (0x0001) [0x0000000000000000]               
	int                                                Start;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	int                                                End;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	TArray<struct FUniqueNetId>                        PlayerList;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0028
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
	TArray<int>                                        LeaderboardData;                                  		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0060
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Rank;                                             		// 0x0048 (0x0004) [0x0000000000000000]               
	int                                                Score;                                            		// 0x004C (0x0004) [0x0000000000000000]               
	TArray<int>                                        LeaderboardData;                                  		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0018
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     LeaderboardName;                                  		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0020
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ClanTag;                                          		// 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0038
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     ReadDelegates;                                    		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                   		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                      		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0005(0x0051 - 0x004C)
struct FLocalTalkerSteam : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0050 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUnlock : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       AchievementName;                                  		// 0x0004 (0x0008) [0x0000000000000000]               
	int                                                ViewId;                                           		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                ProgressCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                MaxProgress;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      bAutoUnlock : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0070
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                        		// 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int                                                NumberOfAttempts;                                 		// 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0008 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int                                                Size;                                             		// 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0058 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0020
struct FSteamUserCloudMetadata
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserCloudMetadata;                                		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0020
struct FSteamUserCloud
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          UserCloudFileData;                                		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                           		// 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int                                                bLastIsControllerConnected;                       		// 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0018
struct FOnlineStatusMapping
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     StatusString;                                     		// 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x0030
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeviceSelectionDelegates;                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0018
struct FPlayerStat
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ColumnId;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                             		// 0x0008 (0x0010) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x00D8
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     StatGuid;                                         		// 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FPlayerStat>                         Stats;                                            		// 0x0068 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                            		// 0x0078 (0x0050) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     Place;                                            		// 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
