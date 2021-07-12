/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: ProjectX_structs.h
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK, Crunchy
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once
#include "../SdkConstants.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct ProjectX._SharedHelpers.Orientation
// 0x0018
struct FOrientation
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ClubColorSet
// 0x0008
struct FClubColorSet
{
	unsigned char                                      TeamColorID;                                      		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned char                                      CustomColorID;                                    		// 0x0001 (0x0001) [0x0000000000000000]               
	unsigned long                                      bTeamColorSet : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCustomColorSet : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct ProjectX._Types_X.CustomMatchTeamSettings
// 0x001C
struct FCustomMatchTeamSettings
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FClubColorSet                               Colors;                                           		// 0x0010 (0x0008) [0x0000000000000000]               
	int                                                GameScore;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.CustomMatchSettings
// 0x008C
struct FCustomMatchSettings
{
	struct FString                                     GameTags;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       MapName;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	unsigned char                                      GameMode;                                         		// 0x0018 (0x0001) [0x0000000000000000]               
	int                                                MaxPlayerCount;                                   		// 0x001C (0x0004) [0x0000000000000000]               
	struct FString                                     ServerName;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bPublic : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCustomMatchTeamSettings                    TeamSettings[0x2];                                		// 0x0048 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bClubServer : 1;                                  		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.JoinMatchSettings
// 0x0020
struct FJoinMatchSettings
{
	unsigned char                                      MatchType;                                        		// 0x0000 (0x0001) [0x0000000000000000]               
	int                                                PlaylistId;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      bFriendJoin : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMigration : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRankedReconnect : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.SkillMatchPlayer
// 0x005C
struct FSkillMatchPlayer
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              PctTimePlayed;                                    		// 0x0048 (0x0004) [0x0000000000000000]               
	unsigned long                                      bQuitter : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PartyID;                                          		// 0x0050 (0x0004) [0x0000000000000000]               
	int                                                Score;                                            		// 0x0054 (0x0004) [0x0000000000000000]               
	int                                                Team;                                             		// 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PartyJoinMatchSettings
// 0x0068
struct FPartyJoinMatchSettings
{
	struct FString                                     ServerName;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BeaconAddress;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
	unsigned long                                      bFriendJoin : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     CustomPassword;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinName;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                     		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ServerResult
// 0x00B0
struct FServerResult
{
	struct FString                                     Address;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                         		// 0x0020 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.OnlineStatus
// 0x0059
struct FOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceInfo;                                     		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      PresenceState;                                    		// 0x0058 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ServerReservationData
// 0x0080
struct FServerReservationData
{
	struct FString                                     BeaconURL;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Playlist;                                         		// 0x0020 (0x0004) [0x0000000000000000]               
	struct FString                                     Region;                                           		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     DSRToken;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                             		// 0x0058 (0x0008) [0x0000000000000000]               
	struct FString                                     JoinName;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                     		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CheckReservationResponse
// 0x007C
struct FCheckReservationResponse
{
	struct FString                                     IP;                                               		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Playlist;                                         		// 0x0020 (0x0004) [0x0000000000000000]               
	struct FString                                     Region;                                           		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Host;                                             		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x0048 (0x0004) [0x0000000000000000]               
	struct FString                                     ReservationID;                                    		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     DSConnectToken;                                   		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                             		// 0x0070 (0x0008) [0x0000000000000000]               
	unsigned long                                      IsServerKey : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.MapPrefs
// 0x0020
struct FMapPrefs
{
	TArray<struct FName>                               Likes;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.RegionSecret
// 0x0020
struct FRegionSecret
{
	struct FString                                     Region;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Secret;                                           		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PsyNetPersonaData
// 0x0090
struct FPsyNetPersonaData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceInfo;                                     		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceState;                                    		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                           		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.BumpAngleCheckConfig
// 0x0014
struct FBumpAngleCheckConfig
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BumpAngleYaw;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              BumpAnglePitch;                                   		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DemolishAngleYaw;                                 		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              DemolishAnglePitch;                               		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.BumpAngleCurveCheckConfig
// 0x0068
struct FBumpAngleCurveCheckConfig
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FInterpCurveFloat                           BumpAngleCurveYaw;                                		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           BumpAngleCurvePitch;                              		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurveYaw;                            		// 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurvePitch;                          		// 0x0050 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CarInteractionConfig
// 0x0104
struct FCarInteractionConfig
{
	float                                              PushFactor;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FInterpCurveFloat                           BumperPushFactorCurveGround;                      		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           BumperPushFactorCurveAir;                         		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FInterpCurveFloat                           ZPushFactorCurve;                                 		// 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BumpInterval;                                     		// 0x0050 (0x0004) [0x0000000000000000]               
	struct FBumpAngleCheckConfig                       COMAngleCheck;                                    		// 0x0054 (0x0014) [0x0000000000000000]               
	struct FBumpAngleCheckConfig                       VictimHitAngleCheck;                              		// 0x0068 (0x0014) [0x0000000000000000]               
	struct FBumpAngleCheckConfig                       AttackerHitAngleCheck;                            		// 0x007C (0x0014) [0x0000000000000000]               
	struct FBumpAngleCurveCheckConfig                  VictimHitAngleCurveCheck;                         		// 0x0090 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCheckImpactNormal : 1;                           		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ImpactNormalDotProductDemo;                       		// 0x00FC (0x0004) [0x0000000000000000]               
	float                                              ImpactNormalDotProductBump;                       		// 0x0100 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SuperSonicConfig
// 0x000C
struct FSuperSonicConfig
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TurnoffSpeedBuffer;                               		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TurnoffTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SkillRating
// 0x0008
struct FSkillRating
{
	float                                              Mu;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Sigma;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.MigrationReservationData
// 0x00E0
struct FMigrationReservationData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                          		// 0x0058 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Status;                                           		// 0x00A0 (0x0001) [0x0000000000000000]               
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Team;                                             		// 0x00A8 (0x0001) [0x0000000000000000]               
	struct FSkillRating                                Skill;                                            		// 0x00AC (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               MapLikes;                                         		// 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                      		// 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       SecurityKey;                                      		// 0x00D8 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ReservationData
// 0x0108
struct FReservationData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                          		// 0x0058 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Status;                                           		// 0x00A0 (0x0001) [0x0000000000000000]               
	float                                              TimeoutTime;                                      		// 0x00A4 (0x0004) [0x0000000000000000]               
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	class APlayerReplicationInfo*                      PRI;                                              		// 0x00B0 (0x0008) [0x0000000000000000]               
	unsigned char                                      Team;                                             		// 0x00B8 (0x0001) [0x0000000000000000]               
	class UAddReservationMessage_X*                    ReservationMessage;                               		// 0x00C0 (0x0008) [0x0000000000000000]               
	class UIReservationConnection_X*                   Connection;                                       		// 0x00C8 (0x0010) [0x0000000000000000]               
	unsigned char                                      UnknownData00[0x8];                               		// 0x00D0 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY
	unsigned long                                      bIgnoreBeaconDisconnect : 1;                      		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSkillRating                                Skill;                                            		// 0x00DC (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               MapLikes;                                         		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                      		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PlayerTitleData
// 0x0028
struct FPlayerTitleData
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Text;                                             		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FName                                       Category;                                         		// 0x0018 (0x0008) [0x0000000000000000]               
	struct FColor                                      Color;                                            		// 0x0020 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FColor                                      GlowColor;                                        		// 0x0024 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct ProjectX._Types_X.PlayerSeasonRewardProgress
// 0x0050
struct FPlayerSeasonRewardProgress
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Level;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
	int                                                Wins;                                             		// 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ActiveServerData
// 0x00C0
struct FActiveServerData
{
	struct FServerReservationData                      Reservation;                                      		// 0x0000 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BeaconURL;                                        		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PingURL;                                          		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     GameURL;                                          		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinCredentials;                                  		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CrossplayGroup
// 0x0010
struct FCrossplayGroup
{
	TArray<unsigned char>                              Platforms;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ServerConnectionInfo
// 0x0040
struct FServerConnectionInfo
{
	struct FString                                     ServerAddress;                                    		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BeaconAddress;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PingAddress;                                      		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                       		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.TierSkillRating
// 0x0014(0x001C - 0x0008)
struct FTierSkillRating : FSkillRating
{
	int                                                Tier;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Division;                                         		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                MatchesPlayed;                                    		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                PlacementMatchesPlayed;                           		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SkillMatchPartyRating
// 0x0004(0x0020 - 0x001C)
struct FSkillMatchPartyRating : FTierSkillRating
{
	int                                                PartyID;                                          		// 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.SkillMatchParty
// 0x0020
struct FSkillMatchParty
{
	int                                                PartyID;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PctTimePlayed;                                    		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      bQuitter : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.SkillMatchData
// 0x001C
struct FSkillMatchData
{
	unsigned long long                                 ServerId;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Playlist;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                WinningTeam;                                      		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                Team0Score;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                Team1Score;                                       		// 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      bOverTime : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.ReplicatedReservationData
// 0x0059
struct FReplicatedReservationData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Status;                                           		// 0x0058 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ReservationPlayerData
// 0x00A0
struct FReservationPlayerData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SkillMu;                                          		// 0x0058 (0x0004) [0x0000000000000000]               
	float                                              SkillSigma;                                       		// 0x005C (0x0004) [0x0000000000000000]               
	int                                                Tier;                                             		// 0x0060 (0x0004) [0x0000000000000000]               
	unsigned long                                      bRemotePlayer : 1;                                		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<int>                                        Loadout;                                          		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                         		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                      		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 ClubID;                                           		// 0x0098 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ReplicatedRBStateNoQuat
// 0x0038
struct FReplicatedRBStateNoQuat
{
	float                                              QuatX;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              QuatY;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              QuatZ;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              QuatW;                                            		// 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     LinearVelocity;                                   		// 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     AngularVelocity;                                  		// 0x0028 (0x000C) [0x0000000000000000]               
	unsigned long                                      bSleeping : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX._Types_X.ReplicatedRBState
// 0x003C
struct FReplicatedRBState
{
	struct FQuat                                       Quaternion;                                       		// 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     LinearVelocity;                                   		// 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     AngularVelocity;                                  		// 0x0028 (0x000C) [0x0000000000000000]               
	float                                              Time;                                             		// 0x0034 (0x0004) [0x0000000000000000]               
	unsigned long                                      bSleeping : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNewData : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct ProjectX._Types_X.PlayerBinding
// 0x002C
struct FPlayerBinding
{
	struct FName                                       Action;                                           		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned char                                      AxisSign;                                         		// 0x0010 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned char                                      PressType;                                        		// 0x0011 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              Speed;                                            		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bRequired : 1;                                    		// 0x0018 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned char                                      Remappable;                                       		// 0x001C (0x0001) [0x0000000000000000]               
	float                                              PressedTime;                                      		// 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ReleasedTime;                                     		// 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bTapped : 1;                                      		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bToggled : 1;                                     		// 0x0028 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct ProjectX._Types_X.BindingAction
// 0x0038
struct FBindingAction
{
	struct FName                                       Action;                                           		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Category;                                         		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Axis;                                             		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned char                                      AxisSign;                                         		// 0x0018 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Command;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bDisableRemapping : 1;                            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Priority;                                         		// 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlaylistTierSkillRating
// 0x0004(0x0020 - 0x001C)
struct FPlaylistTierSkillRating : FTierSkillRating
{
	int                                                Playlist;                                         		// 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerSkillRating
// 0x004C(0x0068 - 0x001C)
struct FPlayerSkillRating : FTierSkillRating
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0020 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PlaylistSkillRating
// 0x0004(0x006C - 0x0068)
struct FPlaylistSkillRating : FPlayerSkillRating
{
	int                                                Playlist;                                         		// 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.UpdatedPlayerSkillRating
// 0x0010(0x0078 - 0x0068)
struct FUpdatedPlayerSkillRating : FPlayerSkillRating
{
	float                                              PrevMu;                                           		// 0x0068 (0x0004) [0x0000000000000000]               
	float                                              PrevSigma;                                        		// 0x006C (0x0004) [0x0000000000000000]               
	int                                                PrevTier;                                         		// 0x0070 (0x0004) [0x0000000000000000]               
	int                                                PrevDivision;                                     		// 0x0074 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.RPCRewardLevelData
// 0x0008
struct FRPCRewardLevelData
{
	int                                                SeasonLevel;                                      		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                SeasonLevelWins;                                  		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.RPCPlayerRewardLevelData
// 0x0048(0x0050 - 0x0008)
struct FRPCPlayerRewardLevelData : FRPCRewardLevelData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.CachedRegionPing
// 0x000C
struct FCachedRegionPing
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Ping;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PartyMemberServer
// 0x0054
struct FPartyMemberServer
{
	struct FString                                     ServerName;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BeaconAddress;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomPassword;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinName;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                     		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PartyMember
// 0x0178
struct FPartyMember
{
	struct FUniqueNetId                                PrimaryMemberId;                                  		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                MemberId;                                         		// 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MemberName;                                       		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                MatchmakeRestrictions;                            		// 0x00A0 (0x0004) [0x0000000000000000]               
	int                                                LocalControllerId;                                		// 0x00A4 (0x0004) [0x0000000000000000]               
	unsigned char                                      CrossChatState;                                   		// 0x00A8 (0x0001) [0x0000000000000000]               
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x00B0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FGuid                                       TradeId;                                          		// 0x00F8 (0x0010) [0x0000000000000000]               
	unsigned long                                      bReadyToTrade : 1;                                		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPartyMemberServer                          Server;                                           		// 0x0110 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PlatformParty;                                    		// 0x0168 (0x0010) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.PlayerTitleCategory
// 0x0028
struct FPlayerTitleCategory
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Color;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     GlowColor;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.RenderProfile
// 0x0028
struct FRenderProfile
{
	float                                              GameThreadTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              RenderThreadTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              GPUTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              FrameTime;                                        		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              FPS;                                              		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AccumGameThreadTime;                              		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AccumRenderThreadTime;                            		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AccumGPUTime;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	float                                              AccumFrameTime;                                   		// 0x0020 (0x0004) [0x0000000000000000]               
	int                                                NumSamples;                                       		// 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.MetricsEvent
// 0x0070
struct FMetricsEvent
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeSeconds;                                      		// 0x0048 (0x0004) [0x0000000000000000]               
	int                                                Version;                                          		// 0x004C (0x0004) [0x0000000000000000]               
	struct FString                                     EventName;                                        		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     EventData;                                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.IntVector3
// 0x000C
struct FIntVector3
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Z;                                                		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX._Types_X.DownloadedImage
// 0x0018
struct FDownloadedImage
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture2DDynamic*                           Texture;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX._Types_X.ClubMember
// 0x0058
struct FClubMember
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PlayerPermissionsList
// 0x0058
struct FPlayerPermissionsList
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              Permissions;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.NetStats
// 0x000C
struct FNetStats
{
	float                                              PingMin;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Jitter;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LossPct;                                          		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.AddReservationMessagePublic_X.OnlinePlayerMapPrefs
// 0x0068
struct FOnlinePlayerMapPrefs
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                      		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedParam
// 0x0008
struct FAnimatedParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedFloatParam
// 0x0018(0x0020 - 0x0008)
struct FAnimatedFloatParam : FAnimatedParam
{
	struct FInterpCurveFloat                           ValueOverTime;                                    		// 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedVectorParam
// 0x0018(0x0020 - 0x0008)
struct FAnimatedVectorParam : FAnimatedParam
{
	struct FInterpCurveVector                          ValueOverTime;                                    		// 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedLinearColorParam
// 0x0018(0x0020 - 0x0008)
struct FAnimatedLinearColorParam : FAnimatedParam
{
	struct FInterpCurveLinearColor                     ValueOverTime;                                    		// 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.BugReport_X.BugReportSubmitterData
// 0x0030
struct FBugReportSubmitterData
{
	class APlayerController*                           Submitter;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     Location;                                         		// 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct ProjectX.BugReport_X.BugReportSystemData
// 0x0034
struct FBugReportSystemData
{
	struct FString                                     ComputerName;                                     		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     GameName;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NetMode;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bClient : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.BugReport_X.BugReportPathData
// 0x0040
struct FBugReportPathData
{
	struct FString                                     OutputPath;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     LogName;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     LogPath;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ScreenShotPath;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.BugReport_X.BugReportDescriptionData
// 0x0050
struct FBugReportDescriptionData
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ShortTitle;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MetaTitle;                                        		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Email;                                            		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.BugReport_X.FileUploadData
// 0x0039
struct FFileUploadData
{
	class UBugReport_X*                                BugReport;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     BugID;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Folder;                                           		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     FilePath;                                         		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      TruncateType;                                     		// 0x0038 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.BugReport_X.BugReportUploadTask
// 0x00A0
struct FBugReportUploadTask
{
	struct FFileUploadData                             Data;                                             		// 0x0000 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                       		// 0x0040 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0078 (0x0008) [0x0000000000000000]               
	struct FString                                     TaskName;                                         		// 0x0080 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0090 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Camera_X.CameraKnockBase
// 0x0010
struct FCameraKnockBase
{
	float                                              BlendInTime;                                      		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                     		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                          		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.Camera_X.CameraOrientation
// 0x002C
struct FCameraOrientation
{
	struct FVector                                     Focus;                                            		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]               
	float                                              Distance;                                         		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              FOV;                                              		// 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     CalculatedLocation;                               		// 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct ProjectX.CameraStateBlender_X.CameraTransition
// 0x004C
struct FCameraTransition
{
	class UCameraState_X*                              CameraState;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FViewTargetTransitionParams                 BlendParams;                                      		// 0x0008 (0x0010) [0x0000000000000000]               
	float                                              RemainingTime;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	struct FCameraOrientation                          SnapshotPOV;                                      		// 0x001C (0x002C) [0x0000000000000000]               
	unsigned long                                      bStarted : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.Camera_X.RotationCameraKnock
// 0x000C(0x001C - 0x0010)
struct FRotationCameraKnock : FCameraKnockBase
{
	struct FRotator                                    Amount;                                           		// 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.Camera_X.LocationCameraKnock
// 0x000C(0x001C - 0x0010)
struct FLocationCameraKnock : FCameraKnockBase
{
	struct FVector                                     Amount;                                           		// 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.Camera_X.VectorInterpRate
// 0x0018
struct FVectorInterpRate
{
	float                                              MaxDistance;                                      		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              InterpRate;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ForwardScale;                                     		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BackwardScale;                                    		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              SideScale;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              UpDownScale;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.CheatManager_X.TestStructEvent
// 0x0018
struct FTestStructEvent
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EffectsMap_X.EffectsMapping
// 0x0010
struct FEffectsMapping
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Particle;                                         		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.EngineShare_X.DynamicallyLoadedPackage
// 0x0020
struct FDynamicallyLoadedPackage
{
	struct FString                                     Tag;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PackageName;                                      		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ParameterDispenser_X.NameParamPair
// 0x0010
struct FNameParamPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.FloatParamPair
// 0x000C
struct FFloatParamPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.VectorParamPair
// 0x0014
struct FVectorParamPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.ColorParamPair
// 0x0018
struct FColorParamPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.ParameterDispenser_X.ActorParamPair
// 0x0010
struct FActorParamPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      Value;                                            		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.FXActor_X.FXEventSubscription
// 0x0038
struct FFXEventSubscription
{
	class UFXActorEvent_X*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             OnPushed;                                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnPopped;                                         		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FXActor_X.AttachToParameterWithUnlockAxes
// 0x0009
struct FAttachToParameterWithUnlockAxes
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      IgnoredAxis;                                      		// 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.FXActor_X.FXAttachment
// 0x010C
struct FFXAttachment
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SkeletalMeshAttachName;                           		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SocketOrBoneName;                                 		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachToParameter;                                		// 0x0018 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              AttachDelay;                                      		// 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DetachDelay;                                      		// 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LifeTime;                                         		// 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Target;                                           		// 0x002C (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UActorComponent*                             Component;                                        		// 0x0030 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UFXActorEvent_X*>                     AttachAny;                                        		// 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                        		// 0x0048 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     AttachAll;                                        		// 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class URuntimeParameterBase_X*>             RuntimeParameters;                                		// 0x0068 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UFXAttachmentTraitBase_X*>            Traits;                                           		// 0x0078 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	struct FAttachToParameterWithUnlockAxes            AttachToParameterActor;                           		// 0x0088 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bCreateDuplicates : 1;                            		// 0x0094 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	unsigned long                                      bWantsAttachment : 1;                             		// 0x0094 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bInitializedTraits : 1;                           		// 0x0094 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bExistingComponent : 1;                           		// 0x0094 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bExistingAttachment : 1;                          		// 0x0094 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              AttachedTime;                                     		// 0x0098 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      State;                                            		// 0x009C (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              WantsAttachmentChangeTime;                        		// 0x00A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	class USkeletalMeshComponent*                      AttachedToMesh;                                   		// 0x00A8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FMatrix                                     RelativeTransform;                                		// 0x00B0 (0x0040) [0x0000000000002000] (CPF_Transient)
	int                                                BoneIndex;                                        		// 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      AttachToActor;                                    		// 0x00F8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OffsetToAttachActor;                              		// 0x0100 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.FXActor_X.FXActorEventCheck
// 0x000C
struct FFXActorEventCheck
{
	class UFXActorEvent_X*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      bHasTicked : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.GameInfo_X.PauserData
// 0x000C
struct FPauserData
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                PauseNum;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreColumn
// 0x000C
struct FGFxDataStoreColumn
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreRow
// 0x0018
struct FGFxDataStoreRow
{
	TArray<struct FASValue>                            Values;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGFxDataRow_X*                               BoundObject;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreTable
// 0x0080
struct FGFxDataStoreTable
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FGFxDataStoreColumn>                 Columns;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGFxDataStoreRow>                    Rows;                                             		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bLevelTransitionPersistent : 1;                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FMap_Mirror                                 PrimaryKeyMap;                                    		// 0x0030 (0x0050) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyRow
// 0x0018
struct FGFxDirtyRow
{
	int                                                RowNum;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               DirtyValues;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyTable
// 0x0018
struct FGFxDirtyTable
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FGFxDirtyRow>                        DirtyRows;                                        		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.GFxEngine_X.DirtyObject
// 0x0014
struct FDirtyObject
{
	class UObject*                                     Object;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	class UProperty*                                   Property;                                         		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.GFxSoundPack_X.SoundPackSoundRef
// 0x0010
struct FSoundPackSoundRef
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Name;                                             		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.OnlineMessageComponent_X.OnlineMessageHandler
// 0x0018
struct FOnlineMessageHandler
{
	class UClass*                                      MessageClass;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Delegates;                                        		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LensFlareComponent_X.LensFlareFloatParamCurve
// 0x0038
struct FLensFlareFloatParamCurve
{
	struct FName                                       MaterialParamName;                                		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int                                                MaterialParamIndex;                               		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       ValueOverTime;                                    		// 0x0010 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineConfig_X.ModifierSubscription
// 0x0038
struct FModifierSubscription
{
	class UClass*                                      ObjClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             OnAdd;                                            		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnRemove;                                         		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PresetMutators_X.CategorySettingPair
// 0x0010
struct FCategorySettingPair
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Setting;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_CheckReplacementDedicatedServer_X.CheckReplacementDedicatedServerData
// 0x002C
struct FCheckReplacementDedicatedServerData
{
	unsigned long long                                 ServerId;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     IP;                                               		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Host;                                             		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3
// 0x0028
struct FSteamJsonResponseGetPublisherAppOwnership3
{
	unsigned long long                                 AppID;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long long                                 OwnerSteamID;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned long                                      OwnsApp : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Permanent : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     TimeStamp;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership2
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership2
{
	TArray<struct FSteamJsonResponseGetPublisherAppOwnership3> Apps;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership
{
	struct FSteamJsonResponseGetPublisherAppOwnership2 AppOwnership;                                     		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState
// 0x0011
struct FSteamPlayerDLCOwnershipState
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long long                                 AppID;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned char                                      State;                                            		// 0x0010 (0x0001) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.PlayerDLCInfo
// 0x0074
struct FPlayerDLCInfo
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamPlayerDLCOwnershipState>       DLCs;                                             		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ValidationReadyDelegate;                          		// 0x0058 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeLastOwnershipRequest;                         		// 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamWebRequestData
// 0x0050
struct FSteamWebRequestData
{
	class UWebRequest_X*                               Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNet_X.PsyNetKeys
// 0x0030
struct FPsyNetKeys
{
	struct FString                                     Environment;                                      		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PsyNetAuth;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     SteamPublisher;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ReservationBeacon_X.BeaconMessageHandler
// 0x0018
struct FBeaconMessageHandler
{
	class UClass*                                      MessageClass;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Delegates;                                        		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconPlayerReservation
// 0x0060
struct FPsyNetBeaconPlayerReservation
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                             		// 0x0048 (0x0008) [0x0000000000000000]               
	struct FString                                     DSConnectToken;                                   		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconPartyReservation
// 0x0010
struct FPsyNetBeaconPartyReservation
{
	TArray<struct FUniqueNetId>                        Members;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconReservation
// 0x0048
struct FPsyNetBeaconReservation
{
	struct FString                                     ReservationID;                                    		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Playlist;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	unsigned long                                      IsBackfill : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsBotMatch : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<struct FString>                             BotNames;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                          		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.LeaderboardData
// 0x0080
struct FLeaderboardData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     UnSanitizedPlayerName;                            		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bPsyNetUser : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	int                                                Rank;                                             		// 0x006C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Value;                                            		// 0x0070 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              MMR;                                              		// 0x0074 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Division;                                         		// 0x0078 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bIsPrimaryPlayer : 1;                             		// 0x007C (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData
// 0x0020
struct FCachedLeaderboardData
{
	struct FName                                       LeaderboardId;                                    		// 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<struct FLeaderboardData>                    DataList;                                         		// 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long long                                 LastLeaderboardSyncTime;                          		// 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.RPC_GetLeaderboardRankForUsersBase_X.GetLeaderboardRankForUserData
// 0x0060
struct FGetLeaderboardRankForUserData
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Value;                                            		// 0x0058 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                              		// 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardBaseData
// 0x0060
struct FGetLeaderboardBaseData
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Value;                                            		// 0x0058 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                              		// 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardPlatformBaseData
// 0x0020
struct FGetLeaderboardPlatformBaseData
{
	struct FString                                     Platform;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardBaseData>             Players;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PartyMessage_LocalPlayers_X.SimplePartyMember
// 0x0058
struct FSimplePartyMember
{
	struct FUniqueNetId                                MemberId;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MemberName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameParty_X.PlaylistRestrictionPlayer
// 0x004C
struct FPlaylistRestrictionPlayer
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Tier;                                             		// 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetPopulation_X.GetPopulationData
// 0x0008
struct FGetPopulationData
{
	int                                                Playlist;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                PlayerCount;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetGameServerPingList_X.GetGameServerPingListData
// 0x0048
struct FGetGameServerPingListData
{
	struct FString                                     Region;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     IP;                                               		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Host;                                             		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x0030 (0x0004) [0x0000000000000000]               
	struct FString                                     Address;                                          		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameReservations_AssignTeamsByParty_X.PartyByTeam
// 0x0050
struct FPartyByTeam
{
	struct FUniqueNetId                                PartyID;                                          		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Team;                                             		// 0x0048 (0x0001) [0x0000000000000000]               
	int                                                Size;                                             		// 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameReservations_X.TeamPairHistory
// 0x0094
struct FTeamPairHistory
{
	struct FUniqueNetId                                PartyA;                                           		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyB;                                           		// 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Count;                                            		// 0x0090 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameReservations_X.PendingReservation
// 0x0018
struct FPendingReservation
{
	class UIReservationConnection_X*                   Connection;                                       		// 0x0000 (0x0010) [0x0000000000000000]               
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY
	class UAddReservationMessage_X*                    Message;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameSkill_X.SkillSyncRequest
// 0x0068
struct FSkillSyncRequest
{
	class URPC_GetPlayerSkill_X*                       RPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0050 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetPlayerSkill_X.GetPlayerSkillData
// 0x0024
struct FGetPlayerSkillData
{
	int                                                Playlist;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Mu;                                               		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Sigma;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                Division;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                MatchesPlayed;                                    		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MMR;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	int                                                WinStreak;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	int                                                PlacementMatchesPlayed;                           		// 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatData
// 0x004C
struct FUploadStatData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Value;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatDataSet
// 0x0018
struct FUploadStatDataSet
{
	struct FName                                       StatId;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FUploadStatData>                     Data;                                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.WordFilterTypes_X.WordFilterPair
// 0x0078
struct FWordFilterPair
{
	struct FString                                     Id;                                               		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Key;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Usage;                                            		// 0x0030 (0x0001) [0x0000000000000000]               
	unsigned long                                      bPending : 1;                                     		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastRequestTime;                                  		// 0x0038 (0x0004) [0x0000000000000000]               
	class UError*                                      Error;                                            		// 0x0040 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                    		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameWordFilterProcessor_X.WordFilterRequest
// 0x0040
struct FWordFilterRequest
{
	class UWebRequest_X*                               Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Comment;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Sanitized;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0028 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PlayerInput_X.GamepadDeadzoneSettings
// 0x0010
struct FGamepadDeadzoneSettings
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Deadzone;                                         		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.PlayerInput_X.RawAxisValue
// 0x0010
struct FRawAxisValue
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long long                                 LastFrameChanged;                                 		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PlayerInput_X.KeyboardAxisBlendSettings
// 0x000C
struct FKeyboardAxisBlendSettings
{
	struct FName                                       Axis;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                        		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.PostProcessManager_X.PPEffectDefaults
// 0x000C
struct FPPEffectDefaults
{
	struct FName                                       EffectName;                                       		// 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bEnabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPPersistentEffectDefaults
// 0x001C
struct FPPPersistentEffectDefaults
{
	struct FName                                       EffectName;                                       		// 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       MaterialEffectName;                               		// 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       MaterialParamName;                                		// 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DefaultValue;                                     		// 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPChainInfo
// 0x0010
struct FPPChainInfo
{
	struct FName                                       ChainName;                                        		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPostProcessChain*                           ChainReference;                                   		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct ProjectX.PostProcessManager_X.PostProcessOverride
// 0x0184
struct FPostProcessOverride
{
	struct FPostProcessSettings                        Settings;                                         		// 0x0000 (0x0168) [0x0000000000400000] (CPF_NeedCtorLink)
	class APostProcessVolume*                          Volume;                                           		// 0x0168 (0x0008) [0x0000000000000000]               
	struct FName                                       Id;                                               		// 0x0170 (0x0008) [0x0000000000000000]               
	float                                              BlendInTime;                                      		// 0x0178 (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                     		// 0x017C (0x0004) [0x0000000000000000]               
	unsigned long                                      bEnabled : 1;                                     		// 0x0180 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bDefaultEnabled : 1;                              		// 0x0180 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct ProjectX.RPCQueue_X.PendingRPC
// 0x0020
struct FPendingRPC
{
	class URPC_X*                                      RPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                UniqueId;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CreationTime;                                     		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                Failures;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              NextSendTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	class UError*                                      PendingError;                                     		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPCQueue_X.RPCError
// 0x0020
struct FRPCError
{
	struct FString                                     Type;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPCQueue_X.RPCResponse
// 0x0030
struct FRPCResponse
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FRPCError                                   Error;                                            		// 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class URPC_X*                                      Result;                                           		// 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetServiceSubscriptions_X.ServiceSubscription
// 0x0020
struct FServiceSubscription
{
	class UClass*                                      Class;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RandomStream_X.RandomStream_Mirror
// 0x0004
struct FRandomStream_Mirror
{
	int                                                Seed;                                             		// 0x0000 (0x0004) [0x0000000000001001] (CPF_Edit | CPF_Native)
};

// ScriptStruct ProjectX.RenderProfiler_X.PrimitiveComponentProfile
// 0x0070
struct FPrimitiveComponentProfile
{
	struct FString                                     ContentName;                                      		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UPrimitiveComponent*>                 Components;                                       		// 0x0010 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	struct FRenderProfile                              InclusiveProfile;                                 		// 0x0020 (0x0028) [0x0000000000000000]               
	struct FRenderProfile                              ExclusiveProfile;                                 		// 0x0048 (0x0028) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestItem
// 0x0078
struct FRPCTestItem
{
	unsigned long                                      BoolItem : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                IntItem;                                          		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              FloatItem;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
	struct FString                                     StringItem;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerItem;                                       		// 0x0020 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             StringItems;                                      		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestParam
// 0x0088
struct FRPCTestParam
{
	struct FRPCTestItem                                TestItem;                                         		// 0x0000 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FRPCTestItem>                        TestItems;                                        		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ShakeComponent_X.ShakeReceiver
// 0x000C
struct FShakeReceiver
{
	class APlayerController*                           Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_CustomGameServerGet_X.FindPrivateServerResult
// 0x00C4
struct FFindPrivateServerResult
{
	struct FString                                     IP;                                               		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                         		// 0x0020 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Host;                                             		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x00C0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.LocalCache_X.CacheImportCallbackData
// 0x0020
struct FCacheImportCallbackData
{
	struct FPointer                                    Task;                                             		// 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheIOTaskBase
// 0x0030
struct FCacheIOTaskBase
{
	class UObject*                                     CacheObject;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<unsigned char>                              Data;                                             		// 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FString                                     Path;                                             		// 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                            		// 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.LocalCache_X.CacheExportTask
// 0x0000(0x0030 - 0x0030)
struct FCacheExportTask : FCacheIOTaskBase
{
};

// ScriptStruct ProjectX.LocalCache_X.CacheExportCallbackData
// 0x0020
struct FCacheExportCallbackData
{
	struct FPointer                                    Task;                                             		// 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheImportTask
// 0x0000(0x0030 - 0x0030)
struct FCacheImportTask : FCacheIOTaskBase
{
};

// ScriptStruct ProjectX.PartyMetrics_X.PartyMetricsData
// 0x000C
struct FPartyMetricsData
{
	int                                                LocalPlayers;                                     		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                RemotePlayers;                                    		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      bPartyLeader : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.WebCache_X.CachedDataRequest
// 0x0050
struct FCachedDataRequest
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Path;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UStringMap*                                  Headers;                                          		// 0x0020 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UCachedWebData_X*                            CachedWebData;                                    		// 0x0028 (0x0008) [0x0000000000000000]               
	unsigned long                                      bZipResponse : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             Callback;                                         		// 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData1
// 0x0035
struct FFakeData1
{
	struct FString                                     string1;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                            		// 0x0010 (0x0008) [0x0000000000000000]               
	unsigned long                                      bool1 : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 qword1;                                           		// 0x0020 (0x0008) [0x0000000000000000]               
	float                                              float1;                                           		// 0x0028 (0x0004) [0x0000000000000000]               
	unsigned char                                      byte1;                                            		// 0x002C (0x0001) [0x0000000000000000]               
	int                                                int1;                                             		// 0x0030 (0x0004) [0x0000000000000000]               
	unsigned char                                      enum1;                                            		// 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.FakeData_X.FakeData2
// 0x0090
struct FFakeData2
{
	struct FFakeData1                                  struct1;                                          		// 0x0000 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     string1;                                          		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                            		// 0x0048 (0x0008) [0x0000000000000000]               
	unsigned long                                      bool1 : 1;                                        		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 qword1;                                           		// 0x0058 (0x0008) [0x0000000000000000]               
	float                                              float1;                                           		// 0x0060 (0x0004) [0x0000000000000000]               
	unsigned char                                      byte1;                                            		// 0x0064 (0x0001) [0x0000000000000000]               
	int                                                int1;                                             		// 0x0068 (0x0004) [0x0000000000000000]               
	unsigned char                                      enum1;                                            		// 0x006C (0x0001) [0x0000000000000000]               
	TArray<struct FFakeData1>                          array1;                                           		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             array2;                                           		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData3
// 0x0130
struct FFakeData3
{
	TArray<struct FFakeData2>                          array1;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     string1;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData1                                  struct1;                                          		// 0x0020 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                            		// 0x0058 (0x0008) [0x0000000000000000]               
	TArray<struct FFakeData2>                          array2;                                           		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFakeData2>                          array3;                                           		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bool1 : 1;                                        		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 qword1;                                           		// 0x0088 (0x0008) [0x0000000000000000]               
	float                                              float1;                                           		// 0x0090 (0x0004) [0x0000000000000000]               
	unsigned char                                      byte1;                                            		// 0x0094 (0x0001) [0x0000000000000000]               
	int                                                int1;                                             		// 0x0098 (0x0004) [0x0000000000000000]               
	unsigned char                                      enum1;                                            		// 0x009C (0x0001) [0x0000000000000000]               
	struct FFakeData2                                  struct2;                                          		// 0x00A0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData4
// 0x011D
struct FFakeData4
{
	struct FFakeData2                                  struct2;                                          		// 0x0000 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFakeData3>                          array1;                                           		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData1                                  struct1;                                          		// 0x00A0 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFakeData2>                          array2;                                           		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     string1;                                          		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       name1;                                            		// 0x00F8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bool1 : 1;                                        		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 qword1;                                           		// 0x0108 (0x0008) [0x0000000000000000]               
	float                                              float1;                                           		// 0x0110 (0x0004) [0x0000000000000000]               
	unsigned char                                      byte1;                                            		// 0x0114 (0x0001) [0x0000000000000000]               
	int                                                int1;                                             		// 0x0118 (0x0004) [0x0000000000000000]               
	unsigned char                                      enum1;                                            		// 0x011C (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetGenericDataAll_X.GetGenericDataAllData
// 0x0018
struct FGetGenericDataAllData
{
	struct FName                                       DataKey;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     DataValue;                                        		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetPlayerPermissions_X.PlayerPermissionsReponse
// 0x0058
struct FPlayerPermissionsReponse
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               Permissions;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PartyMessageQueue_X.PendingMessage
// 0x0020
struct FPendingMessage
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000000]               
	TArray<struct FString>                             Messages;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Parties_X.PsyNetPartyInfo
// 0x0070
struct FPsyNetPartyInfo
{
	struct FString                                     PartyID;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 CreatedAt;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                CreatedByUserId;                                  		// 0x0018 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinID;                                           		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Parties_X.PsyNetPartyMember
// 0x0080
struct FPsyNetPartyMember
{
	struct FString                                     PartyID;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                UserId;                                           		// 0x0010 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Username;                                         		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 JoinedAt;                                         		// 0x0068 (0x0008) [0x0000000000000000]               
	struct FString                                     Role;                                             		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.Parties_X.PartyInvite
// 0x0078
struct FPartyInvite
{
	struct FUniqueNetId                                UserId;                                           		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Username;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PartyID;                                          		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 InvitedAt;                                        		// 0x0068 (0x0008) [0x0000000000000000]               
	unsigned long long                                 AcceptedAt;                                       		// 0x0070 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetChannel_X.PendingChannelService
// 0x001C
struct FPendingChannelService
{
	class UPsyNetClientService_X*                      Service;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                MessageId;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                             		// 0x0010 (0x0008) [0x0000000000000000]               
	float                                              ReceiveTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetMessengerWebSocket_X.QueuedPsyNetMessage
// 0x0014
struct FQueuedPsyNetMessage
{
	class UPsyNetMessage_X*                            Message;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeoutTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceMetricsData
// 0x0024
struct FServiceMetricsData
{
	struct FString                                     Service;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Attempts;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                Failures;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MinLatency;                                       		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MaxLatency;                                       		// 0x001C (0x0004) [0x0000000000000000]               
	float                                              AvgLatency;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceErrorData
// 0x000C
struct FServiceErrorData
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetRequestQue_X.PsyNetRequest
// 0x0018
struct FPsyNetRequest
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	class UTAsyncResult__PsyNetMessage_X*              Task;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeoutTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SendTime;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.PsyNetService_PersonaInfo_X.OnlinePersonaData
// 0x0090
struct FOnlinePersonaData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceInfo;                                     		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceState;                                    		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                           		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PsyNetService_FriendStatusUpdate_X.PsyNetOnlineStatus
// 0x0068
struct FPsyNetOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceInfo;                                     		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceState;                                    		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.SystemMetrics_X.OSMetrics
// 0x0020
struct FOSMetrics
{
	struct FString                                     Type;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Bits;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.SystemMetrics_X.CpuMetrics
// 0x0040
struct FCpuMetrics
{
	struct FString                                     Type;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Desc;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Cores;                                            		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Threads;                                          		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.SystemMetrics_X.MemoryMetrics
// 0x0004
struct FMemoryMetrics
{
	float                                              Physical;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.SystemMetrics_X.VideoCardMetrics
// 0x0014
struct FVideoCardMetrics
{
	struct FString                                     Type;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                RAM;                                              		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.SystemMetrics_X.NetworkAdapterMetrics
// 0x0010
struct FNetworkAdapterMetrics
{
	TArray<struct FString>                             Types;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.SetPlayerStorageResult_X.SetPlayerStorageResultItem
// 0x0010
struct FSetPlayerStorageResultItem
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Tick;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bOutOfSync : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.PendingStorage
// 0x0014
struct FPendingStorage
{
	class UObject*                                     Data;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      DataClass;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                Tick;                                             		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerStorageManifest_X.StorageMetadata
// 0x000D
struct FStorageMetadata
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Checksum;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned char                                      Encoding;                                         		// 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.StorageMaxSize
// 0x000C
struct FStorageMaxSize
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                MaxSizeBytes;                                     		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_PlayerStorageSet_X.SetPlayerStorageRequestItem
// 0x0021
struct FSetPlayerStorageRequestItem
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Tick;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Checksum;                                         		// 0x000C (0x0004) [0x0000000000000000]               
	struct FString                                     Data;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Encoding;                                         		// 0x0020 (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncResult
// 0x001D
struct FOnlinePlayerStorageSyncResult
{
	class UClass*                                      DataClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     RemoteData;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                ServerTick;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                Checksum;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      bChecksumMatch : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Encoding;                                         		// 0x001C (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncRequest
// 0x000D
struct FOnlinePlayerStorageSyncRequest
{
	class UObject*                                     DataObj;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                ClientTick;                                       		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned char                                      Encoding;                                         		// 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_PlayerStorageGet_X.GetPlayerStorageRequestItem
// 0x0018
struct FGetPlayerStorageRequestItem
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Tick;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Checksum;                                         		// 0x000C (0x0004) [0x0000000000000000]               
	class UObject*                                     LocalRef;                                         		// 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.ColorPalette_X.ColorPosition
// 0x0008
struct FColorPosition
{
	int                                                Row;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Column;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.LocalClubData_X.PlayerClubPair
// 0x0050
struct FPlayerClubPair
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 ClubID;                                           		// 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.MatchPlayerData_X.MatchSkillUpdate
// 0x0024
struct FMatchSkillUpdate
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Mu;                                               		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Sigma;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                Division;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              PrevMu;                                           		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              PrevSigma;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	int                                                PrevTier;                                         		// 0x001C (0x0004) [0x0000000000000000]               
	int                                                PrevDivision;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX._NetworkNextTypes_X.NetworkNextStats
// 0x0018
struct FNetworkNextStats
{
	struct FNetStats                                   Direct;                                           		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FNetStats                                   Next;                                             		// 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct ProjectX.OnlineClubProvider_X.PlayerClubSyncResult
// 0x0050
struct FPlayerClubSyncResult
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.RPC_GetBlockList_X.BlockedListRequestData
// 0x0058
struct FBlockedListRequestData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ClientNetMetrics_X.PingStats
// 0x0010
struct FPingStats
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Average;                                          		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Median;                                           		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct ProjectX.ContentConfig_X.ContentPair
// 0x001C
struct FContentPair
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Content;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FEncryptedKeyIndex                          Index;                                            		// 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.ExplosionHitHandler_X.ContactInformation
// 0x001C
struct FContactInformation
{
	struct FVector                                     ContactLocation;                                  		// 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ContactVelocity;                                  		// 0x000C (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              ContactTime;                                      		// 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct ProjectX.EOS_GetAccountsResponse.EOSAccountInfo
// 0x0038
struct FEOSAccountInfo
{
	struct FString                                     AccountId;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Created;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      Favorite : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     NickName;                                         		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EOS_AccountSummaryResponse.PrivacySettings
// 0x0010
struct FPrivacySettings
{
	struct FString                                     ReceiveInvites;                                   		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EOS_AccountSummaryResponse.AccountSettings
// 0x0010
struct FAccountSettings
{
	struct FPrivacySettings                            Privacy;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EpochTimerTick_X.EpochTimer
// 0x0020
struct FEpochTimer
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 EpochTime;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct ProjectX.EOSMetrics_X.MetricEventJsonStruct
// 0x0010
struct FMetricEventJsonStruct
{
	TArray<class UEOSMetricEvent_X*>                   Events;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalizationConfig_X.LocOverride
// 0x0040
struct FLocOverride
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Key;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Package;                                          		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
