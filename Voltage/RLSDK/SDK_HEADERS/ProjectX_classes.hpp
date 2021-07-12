/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: ProjectX_classes.hpp
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

#define CONST_ReservationType_Reconnect                          'Reconnect'
#define CONST_ReservationType_FriendJoin                         'FriendJoin'
#define CONST_ReservationType_JoinPrivateMatch                   'JoinPrivate'
#define CONST_MaxPrivateMatchPasswordLength                      16
#define CONST_MaxPrivateMatchNameLength                          16
#define CONST_InMatchmakingID                                    -2
#define CONST_NumFriendsPerRequest                               100
#define CONST_LocalPlayersBroadcastDelay                         0.1f
#define CONST_ClosedReason_DuplicateLogin                        "DuplicateLogin"
#define CONST_QueueMax                                           100
#define CONST_HttpContentType                                    "plain/text"
#define CONST_XpTitleID                                          'XP'
#define CONST_MaxPing                                            1.0f

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum ProjectX._Types_X.EJoinMatchType
enum class EJoinMatchType : int
{
	JMT_Public                                         = 0,
	JMT_Private                                        = 1,
	JMT_LanHost                                        = 2,
	JMT_LanGuest                                       = 3,
	JMT_END                                            = 4
};

// Enum ProjectX._Types_X.EAuthResult
enum class EAuthResult : int
{
	AuthResult_OK                                      = 0,
	AuthResult_Unauthorized                            = 1,
	AuthResult_END                                     = 2
};

// Enum ProjectX._Types_X.EBanType
enum class EBanType : int
{
	BanType_None                                       = 0,
	BanType_Auth                                       = 1,
	BanType_Chat                                       = 2,
	BanType_Parental                                   = 3,
	BanType_Club                                       = 4,
	BanType_Trade                                      = 5,
	BanType_END                                        = 6
};

// Enum ProjectX._Types_X.EConsoleQualityMode
enum class EConsoleQualityMode : int
{
	ConsoleQualityMode_Performance                     = 0,
	ConsoleQualityMode_Quality                         = 1,
	ConsoleQualityMode_END                             = 2
};

// Enum ProjectX._Types_X.EReservationStatus
enum class EReservationStatus : int
{
	ReservationStatus_None                             = 0,
	ReservationStatus_Reserved                         = 1,
	ReservationStatus_Joining                          = 2,
	ReservationStatus_InGame                           = 3,
	ReservationStatus_END                              = 4
};

// Enum ProjectX._Types_X.EDatabaseEnvironment
enum class EDatabaseEnvironment : int
{
	DBE_DevLocal                                       = 0,
	DBE_Dev                                            = 1,
	DBE_Test                                           = 2,
	DBE_Production                                     = 3,
	DBE_END                                            = 4
};

// Enum ProjectX._Types_X.EAxisSign
enum class EAxisSign : int
{
	AxisSign_None                                      = 0,
	AxisSign_Positive                                  = 1,
	AxisSign_Negative                                  = 2,
	AxisSign_END                                       = 3
};

// Enum ProjectX._Types_X.EButtonPressType
enum class EButtonPressType : int
{
	BPT_Normal                                         = 0,
	BPT_Tap                                            = 1,
	BPT_Hold                                           = 2,
	BPT_DoubleTap                                      = 3,
	BPT_Toggle                                         = 4,
	BPT_END                                            = 5
};

// Enum ProjectX._Types_X.ERemappable
enum class ERemappable : int
{
	Remappable_All                                     = 0,
	Remappable_Key                                     = 1,
	Remappable_Axis                                    = 2,
	Remappable_KeyTriggerAxis                          = 3,
	Remappable_None                                    = 4,
	Remappable_END                                     = 5
};

// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
enum class EPartyMatchmakingRestriction : int
{
	PMR_NotOriginalAppOwner                            = 0,
	PMR_PendingLicenseAgreement                        = 1,
	PMR_InMainMenu                                     = 2,
	PMR_NotLoggedInPsyNet                              = 3,
	PMR_END                                            = 4
};

// Enum ProjectX._Types_X.EOnlinePlayerPermission
enum class EOnlinePlayerPermission : int
{
	OPP_PrivateMatchAdmin                              = 0,
	OPP_SuperPrivateMatchAdmin                         = 1,
	OPP_END                                            = 2
};

// Enum ProjectX._Types_X.EOnlinePlayerRole
enum class EOnlinePlayerRole : int
{
	OPR_PrivateMatchAdmin                              = 0,
	OPR_SuperPrivateMatchAdmin                         = 1,
	OPR_END                                            = 2
};

// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
enum class EAnimNodeSeriesChild : int
{
	AnimNodeSeries_Idle                                = 0,
	AnimNodeSeries_Intro                               = 1,
	AnimNodeSeries_Loop                                = 2,
	AnimNodeSeries_Outro                               = 3,
	AnimNodeSeries_END                                 = 4
};

// Enum ProjectX.BugReport_X.EFileTruncateType
enum class EFileTruncateType : int
{
	FileTruncate_None                                  = 0,
	FileTruncate_KeepStart                             = 1,
	FileTruncate_KeepEnd                               = 2,
	FileTruncate_END                                   = 3
};

// Enum ProjectX.FXActor_X.EFXComponentTarget
enum class EFXComponentTarget : int
{
	FXComponentTarget_All                              = 0,
	FXComponentTarget_Local                            = 1,
	FXComponentTarget_NonLocal                         = 2,
	FXComponentTarget_END                              = 3
};

// Enum ProjectX.FXActor_X.EFXComponentState
enum class EFXComponentState : int
{
	FXComponentState_Detached                          = 0,
	FXComponentState_Attached                          = 1,
	FXComponentState_PendingDetach                     = 2,
	FXComponentState_END                               = 3
};

// Enum ProjectX.FXActor_X.EAttachActorLocationUnlockFlags
enum class EAttachActorLocationUnlockFlags : int
{
	EAALUF_None                                        = 0,
	EAALUF_X                                           = 1,
	EAALUF_Y                                           = 2,
	EAALUF_Z                                           = 3,
	EAALUF_END                                         = 4
};

// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
enum class EDataCallbackType : int
{
	DataCallbackType_All                               = 0,
	DataCallbackType_Table                             = 1,
	DataCallbackType_Row                               = 2,
	DataCallbackType_Value                             = 3,
	DataCallbackType_END                               = 4
};

// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
enum class EMaterialEffectStage : int
{
	EFFECT_INACTIVE                                    = 0,
	EFFECT_FADE_IN                                     = 1,
	EFFECT_ACTIVE                                      = 2,
	EFFECT_FADE_OUT                                    = 3,
	EFFECT_END                                         = 4
};

// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
enum class EDLCOwnershipState : int
{
	DLCOwnershipState_Unknown                          = 0,
	DLCOwnershipState_Owned                            = 1,
	DLCOwnershipState_NotOwned                         = 2,
	DLCOwnershipState_Error                            = 3,
	DLCOwnershipState_END                              = 4
};

// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
enum class EPartyProcessingStatus : int
{
	PPS_None                                           = 0,
	PPS_Create                                         = 1,
	PPS_Join                                           = 2,
	PPS_END                                            = 3
};

// Enum ProjectX.WordFilterTypes_X.EWordFilterUsage
enum class EWordFilterUsage : int
{
	WordFilterUsage_PlayerName                         = 0,
	WordFilterUsage_TrainingName                       = 1,
	WordFilterUsage_LanServerName                      = 2,
	WordFilterUsage_CustomTeamName                     = 3,
	WordFilterUsage_TourName                           = 4,
	WordFilterUsage_TourTeamName                       = 5,
	WordFilterUsage_ClubName                           = 6,
	WordFilterUsage_ClubTag                            = 7,
	WordFilterUsage_ClubMotD                           = 8,
	WordFilterUsage_ClubTagPlayerName                  = 9,
	WordFilterUsage_MatchChat                          = 10,
	WordFilterUsage_PartyChat                          = 11,
	WordFilterUsage_END                                = 12
};

// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
enum class EPasswordFailureReason : int
{
	PFR_Empty                                          = 0,
	PFR_Mismatch                                       = 1,
	PFR_END                                            = 2
};

// Enum ProjectX.RPC_X.ERPCPriority
enum class ERPCPriority : int
{
	RPC_Low                                            = 0,
	RPC_Medium                                         = 1,
	RPC_High                                           = 2,
	RPC_END                                            = 3
};

// Enum ProjectX.ShakeComponent_X.EShakeReceiver
enum class EShakeReceiver : int
{
	ShakeReceiver_All                                  = 0,
	ShakeReceiver_Local                                = 1,
	ShakeReceiver_NonLocal                             = 2,
	ShakeReceiver_END                                  = 3
};

// Enum ProjectX.TcpConnection.EWebSocketState
enum class EWebSocketState : int
{
	WebSocketState_NotRequired                         = 0,
	WebSocketState_NeedsHandshake                      = 1,
	WebSocketState_Connected                           = 2,
	WebSocketState_END                                 = 3
};

// Enum ProjectX.TcpConnection.ETcpConnectionState
enum class ETcpConnectionState : int
{
	TcpConnectionState_Invalid                         = 0,
	TcpConnectionState_Connecting                      = 1,
	TcpConnectionState_Connected                       = 2,
	TcpConnectionState_Disconnected                    = 3,
	TcpConnectionState_END                             = 4
};

// Enum ProjectX.WebRequest_X.EWebRequestState
enum class EWebRequestState : int
{
	WebRequestState_PendingSend                        = 0,
	WebRequestState_PendingResponse                    = 1,
	WebRequestState_Success                            = 2,
	WebRequestState_Error                              = 3,
	WebRequestState_END                                = 4
};

// Enum ProjectX.FakeData_X.FakeDataEnum
enum class EFakeDataEnum : int
{
	FakeData                                           = 0,
	FakeData01                                         = 1,
	FakeData02                                         = 2,
	FakeData_Count                                     = 3,
	FakeData_END                                       = 4
};

// Enum ProjectX.ClanforgeReservation_X.EReserveState
enum class EReserveState : int
{
	ReserveState_Unitialized                           = 0,
	ReserveState_Unreserved                            = 1,
	ReserveState_Reserved                              = 2,
	ReserveState_END                                   = 3
};

// Enum ProjectX.BlogTile_X.ELinkType
enum class ELinkType : int
{
	LinkType_None                                      = 0,
	LinkType_RocketPass                                = 1,
	LinkType_Event                                     = 2,
	LinkType_END                                       = 3
};

// Enum ProjectX.PerCon_X.EPerConStatus
enum class EPerConStatus : int
{
	PerConStatus_Disabled                              = 0,
	PerConStatus_Enabled                               = 1,
	PerConStatus_END                                   = 2
};

// Enum ProjectX.DynamicValue_X.EDynamicValueModType
enum class EDynamicValueModType : int
{
	ModType_Add                                        = 0,
	ModType_Multiply                                   = 1,
	ModType_MultiplyAdd                                = 2,
	ModType_Set                                        = 3,
	ModType_END                                        = 4
};

// Enum ProjectX.EncodeObject_X.EObjectEncoding
enum class EObjectEncoding : int
{
	OPSE_UObject                                       = 0,
	OPSE_Json                                          = 1,
	OPSE_END                                           = 2
};

// Enum ProjectX.ClubUtil_X.EClubColorChange
enum class EClubColorChange : int
{
	ClubColorChange_None                               = 0,
	ClubColorChange_SwapTeams                          = 1,
	ClubColorChange_SwapPrimaryAccent0                 = 2,
	ClubColorChange_SwapPrimaryAccent1                 = 3,
	ClubColorChange_SwapPrimaryAccent                  = 4,
	ClubColorChange_WhiteVsBlack                       = 5,
	ClubColorChange_Gray1                              = 6,
	ClubColorChange_END                                = 7
};

// Enum ProjectX._NetworkNextTypes_X.ENetworkNextState
enum class ENetworkNextState : int
{
	NetworkNextState_Disabled                          = 0,
	NetworkNextState_ForceDirect                       = 1,
	NetworkNextState_UseDirect                         = 2,
	NetworkNextState_UseRoute                          = 3,
	NetworkNextState_END                               = 4
};

// Enum ProjectX.OnlinePlayerRegionRestrictions_X.ERegionRestriction
enum class ERegionRestriction : int
{
	RegionRestriction_Unknown                          = 0,
	RegionRestriction_KeyCrate                         = 1,
	RegionRestriction_Trade                            = 2,
	RegionRestriction_KeyRocketPassTier                = 3,
	RegionRestriction_END                              = 4
};

// Enum ProjectX.RegionPing_X.RegionPingResult
enum class ERegionPingResult : int
{
	PingResult_NotUsable                               = 0,
	PingResult_UsingCache                              = 1,
	PingResult_UsingSuccessfulPing                     = 2,
	PingResult_END                                     = 3
};

// Enum ProjectX.EpicLogin_X.ELoginMethod
enum class ELoginMethod : int
{
	LoginMethod_RefreshToken                           = 0,
	LoginMethod_PlatformAuthTicket                     = 1,
	LoginMethod_END                                    = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class ProjectX._NetworkNextTypes_X
// 0x0000 (0x0060 - 0x0060)
class U_NetworkNextTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX__NETWORKNEXTTYPES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX._SharedHelpers
// 0x0000 (0x0060 - 0x0060)
class U_SharedHelpers : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX__SHAREDHELPERS));
		}

		return uClassPointer;
	};

	int ScoreDeltaFromDefault(class UObject* Object);
	void DrawShadowedText(class UCanvas* Canvas, struct FString Text, int ShadowOffsetX, int ShadowOffsetY, int ShadowAlpha);
	bool IsInTransientPackage(class UObject* Obj);
	class APlayerController* GetAPlayerController(class UClass* PlayerControllerClass);
	class UObject* GetDefaultObject(class UClass* ObjClass);
	void DumpUnreferencedAnims();
	struct FString GetLanguageExtension();
};

// Class ProjectX._Types_X
// 0x0048 (0x0060 - 0x00A8)
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;                  		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;             		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTimer__Delegate;                              		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX__TYPES_X));
		}

		return uClassPointer;
	};

	void JoinCredentialsFromString(struct FString Credentials, struct FString& JoinName, struct FString& JoinPassword);
	struct FString JoinCredentialsToString(struct FString JoinName, struct FString JoinPassword);
	struct FString GenerateRandomPrivateMatchPassword();
	struct FString GenerateRandomPrivateMatchName();
	struct FString GenerateRandomName(int Length);
	void OnTimer();
	struct FServerReservationData GetServerReservationData(struct FCheckReservationResponse& Response);
	void ServiceExecutionDelegate(class UPsyNetClientService_X* Service);
	void OnPriviledgeChecked(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.ActorComponent_X
// 0x0007 (0x009D - 0x00A4)
class UActorComponent_X : public UActorComponent
{
public:
	unsigned long                                      bTick : 1;                                        		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreScriptAttach : 1;                          		// 0x00A0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ACTORCOMPONENT_X));
		}

		return uClassPointer;
	};

	void Reattach();
	void eventTick(float DeltaTime);
	void eventDetached();
	void eventAttached();
	void eventBeginPlay();
};

// Class ProjectX.ExplosionComponent_X
// 0x003C (0x00A4 - 0x00E0)
class UExplosionComponent_X : public UActorComponent_X
{
public:
	float                                              RBVelocityChange;                                 		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartRadius;                                      		// 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndRadius;                                        		// 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                            		// 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                          		// 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bPassThroughWorldGeometry : 1;                    		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIgnoreInstigator : 1;                            		// 0x00BC (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bDebug : 1;                                       		// 0x00BC (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FVector                                     MomentumOffset;                                   		// 0x00C0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              LifeTime;                                         		// 0x00CC (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<class AActor*>                              DamagedActors;                                    		// 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EXPLOSIONCOMPONENT_X));
		}

		return uClassPointer;
	};

	void eventProcessHit(class AActor* Victim, struct FVector HitLocation, struct FTraceHitInfo ExtraHitInfo, float DamageScale);
	void eventDetached();
};

// Class ProjectX.ExplosionHitHandler_X
// 0x0050 (0x00A4 - 0x00F4)
class UExplosionHitHandler_X : public UActorComponent_X
{
public:
	float                                              StartTime;                                        		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndTime;                                          		// 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UExplosionCollisionShapes_X*                 CollisionInformation;                             		// 0x00B0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bIgnoreInstigator : 1;                            		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bPassThroughWorldGeometry : 1;                    		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bOnlyApplyImpulseOnce : 1;                        		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bDebug : 1;                                       		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bPullTowardHitLocation : 1;                       		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	float                                              Falloff;                                          		// 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RBVelocityChange;                                 		// 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                            		// 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MomentumOffset;                                   		// 0x00C8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FBox                                        GoalWorldBox;                                     		// 0x00D4 (0x001C) [0x0000000000002000] (CPF_Transient)
	float                                              LifeTime;                                         		// 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EXPLOSIONHITHANDLER_X));
		}

		return uClassPointer;
	};

	void Destroy();
	void Init(class UActorComponent_X* ExplosionGoal);
	void eventProcessHit(class AActor* Victim, struct FVector HitLocation, float DamageScale, struct FContactInformation& ContactInfo);
};

// Class ProjectX.MICParamDispenserComponent_X
// 0x0024 (0x00A4 - 0x00C8)
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x00A8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int                                                MaterialIndex;                                    		// 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachedComponentName;                            		// 0x00B4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMeshComponent*                              MeshComp;                                         		// 0x00C0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MICPARAMDISPENSERCOMPONENT_X));
		}

		return uClassPointer;
	};

	bool __MICParamDispenserComponent_X__Attached_75A255B0427FFE801B51119A7ECDFACB(struct FFXAttachment A);
	void eventAttached();
	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
};

// Class ProjectX.ShakeComponent_X
// 0x0114 (0x00A4 - 0x01B8)
class UShakeComponent_X : public UActorComponent_X
{
public:
	float                                              InnerRadius;                                      		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OuterRadius;                                      		// 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                          		// 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAutoPlay : 1;                                    		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAutoDetach : 1;                                  		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bOnlyAffectPlayersWithPawns : 1;                  		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bAttenuate : 1;                                   		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bPlaying : 1;                                     		// 0x00B4 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bStopping : 1;                                    		// 0x00B4 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	unsigned char                                      Receiver;                                         		// 0x00B8 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              RadiusScale;                                      		// 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                      		// 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                     		// 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UCameraShake*                                ShakeParams;                                      		// 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       AmplitudeScale;                                   		// 0x00D0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       FrequencyScale;                                   		// 0x00F8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DurationScale;                                    		// 0x0120 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	float                                              CurrentAmplitudeScale;                            		// 0x0148 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              CurrentFrequencyScale;                            		// 0x014C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                            		// 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceFeedbackScale;                               		// 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceFeedbackBalance;                             		// 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FParticleSysParam>                   InstanceParameters;                               		// 0x0160 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	float                                              PlayTime;                                         		// 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              StopTime;                                         		// 0x0174 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ShakeLocTimeOffset;                               		// 0x0178 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ShakeRotTimeOffset;                               		// 0x0184 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              ShakeFOVTimeOffset;                               		// 0x0190 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CameraShakeDuration;                              		// 0x0194 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ForceFeedbackDuration;                            		// 0x0198 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ForceFeedbackSamplesTime;                         		// 0x019C (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      PrevOwner;                                        		// 0x01A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<struct FShakeReceiver>                      Receivers;                                        		// 0x01A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SHAKECOMPONENT_X));
		}

		return uClassPointer;
	};

	bool GetColorParameter(struct FName InName, struct FColor& OutColor);
	bool GetVectorParameter(struct FName InName, struct FVector& OutVector);
	bool GetFloatParameter(struct FName InName, float& OutFloat);
	void SetColorParameter(struct FName ParameterName, struct FColor Param);
	void SetVectorRandParameter(struct FName ParameterName, struct FVector& Param, struct FVector& ParamLow);
	void SetVectorParameter(struct FName ParameterName, struct FVector Param);
	void SetFloatRandParameter(struct FName ParameterName, float Param, float ParamLow);
	void SetFloatParameter(struct FName ParameterName, float Param);
	bool IsPlaying();
	void eventStopShake(float InBlendOutTime);
	void InitParams();
	void eventPlayShake();
	void eventDetached();
	void eventAttached();
};

// Class ProjectX.AdHocBeacon_X
// 0x0010 (0x0060 - 0x0070)
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    pAdHoc;                                           		// 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ADHOCBEACON_X));
		}

		return uClassPointer;
	};

	int GetNodeCountMax();
	void AdHocJoinMatch();
	void AdHocCreateMatch();
	bool AdHocIsActive();
	void AdHocDisconnectFromAccessPoint();
	void AdHocConnectToAccessPoint(int ScanResultIndex);
	void AdHocScanForAccessPoints();
	void AdHocBecomeStation();
	void AdHocRejectStation(int NetworkNodeIndex);
	void AdHocBecomeAccessPoint();
	void AdHocSetAdvertiseData(struct FString AdvertiseData);
	void AdHocDestroy();
	void AdHocCreate();
	void AdHocCreateWithUsername(struct FString Username);
	void eventConstruct();
};

// Class ProjectX.FXActor_X
// 0x00C0 (0x0268 - 0x0328)
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                       		// 0x0268 (0x0008) [0x0000000000000000]               
	class UFXActorEvent_X*                             ActivationState;                                  		// 0x0270 (0x0008) [0x0000000000000000]               
	TArray<struct FFXAttachment>                       Attachments;                                      		// 0x0278 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FName                                       SocketOrBoneName;                                 		// 0x0288 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bDeactivateWhenOwnerDestroyed : 1;                		// 0x0290 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAllowShadowCasting : 1;                          		// 0x0290 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bAutoActivate : 1;                                		// 0x0290 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bRenderInactive : 1;                              		// 0x0290 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bActive : 1;                                      		// 0x0290 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bHadOwner : 1;                                    		// 0x0290 (0x0004) [0x0000000000002002] [0x00000020] (CPF_Const | CPF_Transient)
	class AFXActor_X*                                  Parent;                                           		// 0x0298 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      AttachmentActor;                                  		// 0x02A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class UFXActorEvent_X*>                     FXStates;                                         		// 0x02A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FFXActorEventCheck>                  FXEvents;                                         		// 0x02B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              DestroyWaitTime;                                  		// 0x02C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DestroyTime;                                      		// 0x02CC (0x0004) [0x0000000000000000]               
	class UParameterDispenser_X*                       Parameters;                                       		// 0x02D0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int                                                EditID;                                           		// 0x02D8 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	TArray<struct FFXEventSubscription>                EventSubscriptions;                               		// 0x02E0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UFXActorEvent_X*                             AnimationEndState;                                		// 0x02F0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                   		// 0x02F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                   		// 0x0310 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_FXACTOR_X));
		}

		return uClassPointer;
	};

	void eventDumpDebugInfo();
	class UFXAttachmentTraitBase_X* GetTrait(class UClass* TraitClass, int AttachmentIdx);
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void eventOnAnimPlay(class UAnimNodeSequence* SeqNode);
	void eventDestroyed();
	void SubscribeState(class UFXActorEvent_X* FXEvent, struct FScriptDelegate OnPushed, struct FScriptDelegate OnPopped);
	void SetStateEnabled(class UFXActorEvent_X* State, unsigned long bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void OnTriggerFXActor_X(class USeqAct_TriggerFXActor_X* SeqAct);
	void Inherit(class AFXActor_X* Other);
	void ResetParticles();
	void StopAllEffects();
	void eventDeactivateAndDestroy();
	void eventOnDetached(class UActorComponent* AC);
	void eventDeactivateFXComponent(class UActorComponent* AC);
	void eventActivateFXComponent(class UActorComponent* AC);
	void eventOnAttached(class UActorComponent* AC);
	int GetComponentsAttachmentIndex(class UActorComponent* ComponentToFind);
	void UpdateFXStates();
	bool IsLocallyControlled();
	class AController* GetControllerOwner();
	void ToggleState(class UFXActorEvent_X* NewState);
	bool RemoveStateForceUpdate(class UFXActorEvent_X* OldState);
	bool RemoveEvent(class UFXActorEvent_X* OldEvent);
	bool RemoveState(class UFXActorEvent_X* OldState);
	void AddEvent(class UFXActorEvent_X* NewEvent);
	void AddState(class UFXActorEvent_X* NewState);
	bool CanRemoveEvent(struct FFXActorEventCheck& InEvent);
	bool IsStateActive(class UFXActorEvent_X* InState);
	void Deactivate();
	void Activate();
	void HandleParentStatePopped(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void HandleParentStatePushed(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void BindTo(class AFXActor_X* ParentFXActor);
	void SetAttachmentActor(class AActor* AttachToActor);
	void PostBeginPlay();
	void AllAttachments(class UClass* ComponentClass, class UActorComponent*& OutComponent, int& OutAttachmentIdx);
	class UActorComponent* GetComponentByName(class UClass* ComponentClass, struct FName ComponentName);
	void EventFXStatePopped(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
	void EventFXStatePushed(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
};

// Class ProjectX.AnimateParametersComponent_X
// 0x003F (0x009D - 0x00DC)
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	TArray<struct FAnimatedFloatParam>                 FloatParameters;                                  		// 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FAnimatedVectorParam>                VectorParameters;                                 		// 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FAnimatedLinearColorParam>           ColorParameters;                                  		// 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bResetMaterialsOnComplete : 1;                    		// 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              AnimTime;                                         		// 0x00D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EndTime;                                          		// 0x00D8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ANIMATEPARAMETERSCOMPONENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ArchetypePrefab_X
// 0x0020 (0x0268 - 0x0288)
class AArchetypePrefab_X : public AActor
{
public:
	TArray<class AActor*>                              PrefabArchetypes;                                 		// 0x0268 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class AActor*>                              ArchetypeInstances;                               		// 0x0278 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ARCHETYPEPREFAB_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ArchetypeSpawnPoint_X
// 0x0070 (0x0268 - 0x02D8)
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;             		// 0x0268 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     ArchetypePath;                                    		// 0x0270 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bSeedNavMesh : 1;                                 		// 0x0280 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSpawnOnLevelStart : 1;                           		// 0x0280 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bOnlyAllowOneInstance : 1;                        		// 0x0280 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class AActor*                                      ActorArchetype;                                   		// 0x0288 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USpriteComponent*                            PlacementSprite;                                  		// 0x0290 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                            		// 0x0298 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                              		// 0x02A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class AActor*>                              SpawnedActors;                                    		// 0x02A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class AActor*                                      SpawnedActor;                                     		// 0x02B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x02C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ARCHETYPESPAWNPOINT_X));
		}

		return uClassPointer;
	};

	void OnSpawned(class AActor* Spawned);
	class AActor* DoSpawn();
	void OnToggle(class USeqAct_Toggle* Action);
	void OnDestroy(class USeqAct_Destroy* Action);
	void eventPostBeginPlay();
	void EventSpawned(class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned);
};

// Class ProjectX.Aws4Signature_X
// 0x0000 (0x0060 - 0x0060)
class UAws4Signature_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_AWS4SIGNATURE_X));
		}

		return uClassPointer;
	};

	void SignRequest(class UHttpRequestInterface* HTTPRequest);
};

// Class ProjectX.ReservationBeacon_X
// 0x0068 (0x0070 - 0x00D8)
class UReservationBeacon_X : public UComponent
{
public:
	TArray<struct FBeaconMessageHandler>               MessageHandlers;                                  		// 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UTcpMessageBeacon*                           TcpBeacon;                                        		// 0x0080 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetBeacon_X*                             PsyNetBeacon;                                     		// 0x0088 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;              		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONBEACON_X));
		}

		return uClassPointer;
	};

	void __ReservationBeacon_X__Construct_96AF30D64FB1289EE837B3A551DB7B6C();
	void __ReservationBeacon_X__Construct_05458B7443422BE1FF6C518AF122BBAB(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_FD6257874D3243A14DC1DC8BD8D5883F(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_D5F0EC784940E22BE8972B8924163E1F(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_ABADD5654AD378BE15CF588CED773405(class UTcpConnection* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_EB9B1B864C8C4C9067C111859D43FAF2(class UTcpBeacon* _, class UTcpConnection* Connection);
	void __ReservationBeacon_X__Construct_51B1AA3F406A26992EBF6EB523F3F7F8(class UTcpBeacon* _, class UTcpConnection* Connection);
	class UIReservationConnection_X* ServerReserveConnection(struct FString ReservationID, struct FUniqueNetId PlayerID, float ConnectionTimeoutSeconds);
	class UIReservationConnection_X* BeginPsyNetConnect(struct FString ReservationID, struct FString DSRToken);
	class UIReservationConnection_X* BeginTcpConnect(struct FString BeaconURL);
	class UIReservationConnection_X* BeginConnect(struct FServerReservationData Reservation);
	void Close();
	void CloseConnection(class UIReservationConnection_X* Connection);
	void eventBroadcastMessage(class UObject* Message);
	void eventSendMessage(class UIReservationConnection_X* Connection, class UObject* Message);
	class UBeaconMessage_X* CreateMessage(class UClass* MessageClass);
	void ReceiveMessage(class UIReservationConnection_X* Connection, class UObject* Message);
	void RemoveMessageHandler(struct FScriptDelegate Callback);
	void AddMessageHandler(class UClass* MessageClass, struct FScriptDelegate Callback);
	void BeginListen();
	void eventConstruct();
	void EventDisconnected(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void EventConnected(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void MessageReceivedDelegate(class UIReservationConnection_X* Connection, class UObject* Message);
};

// Class ProjectX.BeaconMessage_X
// 0x0000 (0x0060 - 0x0060)
class UBeaconMessage_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BEACONMESSAGE_X));
		}

		return uClassPointer;
	};

	class UBeaconMessage_X* Broadcast();
	class UBeaconMessage_X* Send(class UIReservationConnection_X* Connection);
};

// Class ProjectX.BugReport_X
// 0x0154 (0x0060 - 0x01B4)
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     BugReportClassName;                               		// 0x0068 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	struct FString                                     URL;                                              		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                MaxFileSizeMegabytes;                             		// 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     BugID;                                            		// 0x0090 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportSubmitterData                     SubmitterData;                                    		// 0x00A0 (0x0030) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                       		// 0x00D0 (0x0038) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportPathData                          PathData;                                         		// 0x0108 (0x0040) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportDescriptionData                   DescriptionData;                                  		// 0x0148 (0x0050) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FPointer                                    LogFile;                                          		// 0x0198 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FFileUploadData>                     FileUploads;                                      		// 0x01A0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bUploadNextFile : 1;                              		// 0x01B0 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
	unsigned long                                      bSubmitted : 1;                                   		// 0x01B0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BUGREPORT_X));
		}

		return uClassPointer;
	};

	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
	void LogText(struct FString Str);
	void eventPDIReport();
	void CancelBugReport();
	void SubmitBugReport(struct FString Title, struct FString Description, struct FString Email);
	void StartBugReport();
	void StaticSubmitBugReport(struct FString Title);
	class UBugReport_X* CreateBugReport();
};

// Class ProjectX.CachedWebData_X
// 0x005C (0x0060 - 0x00BC)
class UCachedWebData_X : public UObject
{
public:
	TArray<unsigned char>                              Data;                                             		// 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int                                                DataCRC;                                          		// 0x0070 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FString                                     ETag;                                             		// 0x0078 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ContentType;                                      		// 0x0088 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     Signature;                                        		// 0x0098 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UError*                                      LoadError;                                        		// 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UError*                                      DownloadError;                                    		// 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bNewData : 1;                                     		// 0x00B8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CACHEDWEBDATA_X));
		}

		return uClassPointer;
	};

	struct FString GetText();
	void SetData(TArray<unsigned char> NewData, struct FString NewETag, struct FString NewContentType, struct FString NewSignature);
};

// Class ProjectX.Camera_X
// 0x0110 (0x05B8 - 0x06C8)
class ACamera_X : public ACamera
{
public:
	TArray<class UCameraState_X*>                      States;                                           		// 0x05B8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRotator                                    PCDeltaRotation;                                  		// 0x05C8 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    OldControllerRotation;                            		// 0x05D4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     PCDeltaLocation;                                  		// 0x05E0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OldControllerLocation;                            		// 0x05EC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FCameraOrientation                          PreProcessPOV;                                    		// 0x05F8 (0x002C) [0x0000000000002000] (CPF_Transient)
	struct FCameraOrientation                          PostProcessPOV;                                   		// 0x0624 (0x002C) [0x0000000000002000] (CPF_Transient)
	class UCameraStateBlender_X*                       Blender;                                          		// 0x0650 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     ShakeLocationOffset;                              		// 0x0658 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FRotator                                    ShakeRotationOffset;                              		// 0x0664 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              ShakeFOVOffset;                                   		// 0x0670 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FColor                                      StartFadeColor;                                   		// 0x0674 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FColor                                      EndFadeColor;                                     		// 0x0678 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ClipOffset;                                       		// 0x067C (0x000C) [0x0000000000002000] (CPF_Transient)
	TArray<struct FLocationCameraKnock>                LocationKnocks;                                   		// 0x0688 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRotationCameraKnock>                RotationKnocks;                                   		// 0x0698 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bDisableCameraShake : 1;                          		// 0x06A8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bSnapNextTransition : 1;                          		// 0x06A8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;              		// 0x06B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERA_X));
		}

		return uClassPointer;
	};

	void __Camera_X__Destroyed_9DEAE3624414DB0C00850D8F3E6FC559(class UCameraState_X* S);
	void Destroyed();
	void eventOnViewTargetChanged();
	void SetViewTarget(class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams);
	bool IsTransitioning();
	void HandleBlenderStateChanged(class UCameraStateBlender_X* CameraBlender);
	void SnapTransition();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ApplyCameraModifiers(float DeltaTime, struct FTPOV& OutPOV);
	bool CameraTrace(struct FVector End, struct FVector Start, struct FVector Extent, struct FVector& HitLoc, class AActor*& HitActor);
	class UCameraState_X* InstanceCameraState(class UCameraState_X* Archetype);
	void eventModifyPostProcessSettings(struct FPostProcessSettings& PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator& OutViewRotation, struct FRotator& OutDeltaRot);
	void PostProcessCameraState(float DeltaTime, struct FCameraOrientation& OutPOV);
	void ProcessCameraState(float DeltaTime, struct FCameraOrientation& OutPOV);
	void CheckViewTarget(struct FTViewTarget& VT);
	void CopyFade(class ACamera_X* Other);
	void SetCameraFade(unsigned long bNewEnableFading, struct FColor NewFadeColor, struct FVector2D NewFadeAlpha, float NewFadeTime, unsigned long bNewFadeAudio);
	void UpdateFade(float DeltaTime);
	void eventUpdateCamera(float DeltaTime);
	void ClampPOV(struct FCameraOrientation& OutPOV);
	struct FRotator RemoveRoll(struct FRotator InRot);
	class UCameraState_X* GetCameraState();
	class UCameraState_X* SelectCameraState();
	void UpdateCameraState();
	void UpdateCameraKnocks(float DeltaTime, struct FCameraOrientation& OutPOV);
	void AddRotationKnock(struct FRotationCameraKnock Knock, float Scale);
	void AddLocationKnock(struct FLocationCameraKnock Knock, float Scale, struct FRotator Transform);
	void InstanceCameraStates();
	void InitializeFor(class APlayerController* PC);
	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void OnLoadingMovieClosesd();
	void eventPostBeginPlay();
	struct FVector InterpVector(struct FVector OldValue, struct FVector NewValue, struct FVectorInterpRate Rate, struct FRotator Orientation, float DeltaTime);
	void FinalizeOrientation(struct FCameraOrientation& OutPOV);
	struct FCameraOrientation BlendCameraOrientations(float Alpha, struct FCameraOrientation& A, struct FCameraOrientation& B);
	void EventCameraStateChanged(class ACamera_X* Camera, class UCameraState_X* CameraState);
};

// Class ProjectX.CameraAttachmentComponent_X
// 0x0017 (0x009D - 0x00B4)
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	TArray<class UActorComponent*>                     Attachments;                                      		// 0x00A0 (0x0010) [0x0000000004480009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	unsigned long                                      bDirtyTransform : 1;                              		// 0x00B0 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERAATTACHMENTCOMPONENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.CanvasTexture_X
// 0x0018 (0x0190 - 0x01A8)
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                                 		// 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CANVASTEXTURE_X));
		}

		return uClassPointer;
	};

	void Draw(class UCanvas* C);
};

// Class ProjectX.CanvasTextureComponent_X
// 0x0023 (0x009D - 0x00C0)
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	class UMeshComponent*                              Mesh;                                             		// 0x00A0 (0x0008) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int                                                MaterialIndex;                                    		// 0x00A8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       MaterialParamName;                                		// 0x00AC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UCanvasTexture_X*                            Texture;                                          		// 0x00B8 (0x0008) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CANVASTEXTURECOMPONENT_X));
		}

		return uClassPointer;
	};

	void OnDraw(class UCanvas* C);
};

// Class ProjectX.PlayerController_X
// 0x00A8 (0x07B8 - 0x0860)
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                                  		// 0x07B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AHUD*                                        HUDArchetype;                                     		// 0x07C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class APawn*                                       OldPawnReference;                                 		// 0x07C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      LockedDebugActor;                                 		// 0x07D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bPausedForExternalUI : 1;                         		// 0x07D8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UNetConnection*                              NetConnection;                                    		// 0x07E0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                     		// 0x07E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPawnChange__Delegate;                      		// 0x0800 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;                  		// 0x0818 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x0830 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;              		// 0x0848 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLAYERCONTROLLER_X));
		}

		return uClassPointer;
	};

	void ToggleDebugCamera();
	void DebugCrosshair();
	void DebugKill();
	void DebugKillAllExcept();
	bool GetAutoAimTarget(class AActor*& HitActor, struct FVector& HitLoc);
	void __PlayerController_X__ReceivedPlayer_9DBB36A0482BAEC16D50AB87DF18ABF3(class UObject* _);
	void ClientSetSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void ServerUpdateCustomMatchSettings(struct FCustomMatchSettings Settings);
	void ServerSetParty(struct FUniqueNetId MemberId, struct FUniqueNetId NewPartyID);
	void DisconnectSplitScreenPlayer(class UPlayer* P);
	void ServerDestroy();
	void KickPlayerForReason(struct FString Reason, struct FString Title);
	void ClientNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void ServerNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void Pause();
	void RemoveOptionFromLastURL(struct FString OptName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventClearOnlineDelegates();
	void RegisterOnlineDelegates();
	void eventClientPlayForceFeedbackWaveform(class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator);
	void ClientCommand(struct FString Command);
	void ServerCommand(struct FString Command);
	void eventUnPossess();
	void eventPossess(class APawn* aPawn);
	void OnPawnChange(class APawn* OldPawn, class APawn* NewPawn);
	void PawnReferenceUpdated();
	void ClientRestart(class APawn* NewPawn);
	void GivePawn(class APawn* NewPawn);
	void eventInitInputSystem();
	class ACamera* GetCameraArchetype();
	void eventSpawnPlayerCamera();
	void SetPlayerCamera(class ACamera* NewCamera);
	void AddCheats(unsigned long bForce);
	class UOnlineGameAccount_X* GetOnlineAccount();
	class UOnlinePlayer_X* GetOnlinePlayer();
	void OnReceivedPlayerAndPRI();
	void InitPlayerReplicationInfo();
	void eventDestroyed();
	void OnExternalUIChanged(unsigned long bIsOpening);
	void SetPaused(unsigned long bPaused);
	void eventReceivedPlayer();
	class UOnlineGame_X* GetOnlineGame();
	class UIOnlineGameHost_X* GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	void SpawnDefaultHUD();
	void SetPRI(class APlayerReplicationInfo* PRI);
	void eventReplicatedEvent(struct FName VarName);
	void EventPlayerCameraChange(class APlayerController_X* PC);
	void EventDestroyed(class APlayerController_X* PC);
	void EventReceivedPlayer(class APlayerController_X* PC);
	void EventPawnChange(class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn);
	void EventReceivedPRI(class APlayerController_X* PC);
};

// Class ProjectX.CheatManager_X
// 0x0018 (0x0080 - 0x0098)
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                    		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CHEATMANAGER_X));
		}

		return uClassPointer;
	};

	void HandleImageDownloaded(struct FOnlineImageDownload Image);
	void DownloadImage(struct FString URL);
	void RandomSleep(float MinDelay, float MaxDelay, float MinSleep, float MaxSleep);
	void Sleep(float Seconds);
	void LoadKismetLevel(struct FName LeveFileName);
	void DrawBulletContacts(float LifeTime);
	void PrintReproPhysics(struct FString Command, class AActor* A);
	void ReproPhysics(class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ, float AX, float AY, float AZ);
	void DisableCCD();
	void SimulateInputKey(struct FName KeyName);
	void SetNetServerMaxTickRate(float Rate);
	void ScreenShotDir(struct FString Directory);
	void ListVisiblePrimitives();
	void HideVisiblePrimitives(struct FString NameMatch, struct FString NameIgnore);
	void ToggleReplicateVoiceToSelf();
	void ToggleReplicateVoiceToSender();
	void ShutdownCheatManager();
	void InitCheatManager();
	void EventDelegateTest();
};

// Class ProjectX.CheatObject_X
// 0x0000 (0x0060 - 0x0060)
class UCheatObject_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CHEATOBJECT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ColorPalette_X
// 0x0020 (0x0060 - 0x0080)
class UColorPalette_X : public UObject
{
public:
	int                                                DefaultId;                                        		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                HueCount;                                         		// 0x0064 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int                                                ValueCount;                                       		// 0x0068 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	TArray<struct FLinearColor>                        Colors;                                           		// 0x0070 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_COLORPALETTE_X));
		}

		return uClassPointer;
	};

	int IntColorToID(int ColorInt);
	int IdToColorInt(int ColorID);
	struct FColorPosition GetColorPosition(int ColorID);
	struct FLinearColor GetValidColor(struct FLinearColor InColor);
	int GetClosestID(struct FLinearColor InColor);
	struct FLinearColor GetColor(int ColorID);
};

// Class ProjectX.Compression_X
// 0x0000 (0x0060 - 0x0060)
class UCompression_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_COMPRESSION_X));
		}

		return uClassPointer;
	};

	bool Uncompress(TArray<unsigned char>& Compressed, TArray<unsigned char>& Uncompressed);
	bool Compress(TArray<unsigned char>& Uncompressed, TArray<unsigned char>& Compressed);
};

// Class ProjectX.ControlPreset_X
// 0x0048 (0x0060 - 0x00A8)
class UControlPreset_X : public UObject
{
public:
	TArray<struct FPlayerBinding>                      PCBindings;                                       		// 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                  		// 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	unsigned long                                      bRemovedPCOverrides : 1;                          		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRemovedGamepadOverrides : 1;                     		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<struct FPlayerBinding>                      SteamInputBindings;                               		// 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FName                                       CustomPresetName;                                 		// 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       DefaultPresetName;                                		// 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CONTROLPRESET_X));
		}

		return uClassPointer;
	};

	TArray<struct FPlayerBinding> GetGamepadBindings();
	TArray<struct FPlayerBinding> GetPCBindings();
};

// Class ProjectX.CrashReport_X
// 0x0000 (0x0060 - 0x0060)
class UCrashReport_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CRASHREPORT_X));
		}

		return uClassPointer;
	};

	void eventHandleHttpRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bSuccess);
};

// Class ProjectX.CRC_X
// 0x0000 (0x0060 - 0x0060)
class UCRC_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CRC_X));
		}

		return uClassPointer;
	};

	int CrcBytes(TArray<unsigned char>& Bytes);
	int CrcString(struct FString Text);
};

// Class ProjectX.CycleLog_X
// 0x001C (0x0070 - 0x008C)
class UCycleLog_X : public UComponent
{
public:
	int                                                MaxLogs;                                          		// 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FString>                             Logs;                                             		// 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                LogIndex;                                         		// 0x0088 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CYCLELOG_X));
		}

		return uClassPointer;
	};

	void AllLogs(struct FString& S);
};

// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0007 (0x00A1 - 0x00A8)
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DISTRIBUTIONFLOATSHAKEPARAMETER_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EffectsMap_X
// 0x0010 (0x0060 - 0x0070)
class UEffectsMap_X : public UObject
{
public:
	TArray<struct FEffectsMapping>                     Effects;                                          		// 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EFFECTSMAP_X));
		}

		return uClassPointer;
	};

	struct FEffectsMapping GetEffects(class UPhysicalMaterial* PhysMat);
};

// Class ProjectX.EngineShare_X
// 0x0120 (0x0060 - 0x0180)
class UEngineShare_X : public UEngineShare
{
public:
	class UOnlineGame_Base_X*                          OnlineGame;                                       		// 0x0060 (0x0008) [0x0000000000002000] (CPF_Transient)
	class ULocalCache_X*                               LocalCache;                                       		// 0x0068 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     ArchetypeString_OnlineGame;                       		// 0x0070 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;        		// 0x0080 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameLanServer;              		// 0x0090 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bDisableSaving : 1;                               		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bIsShowingLoadmapMovie : 1;                       		// 0x00A0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	unsigned long                                      bUndocked : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	struct FScriptDelegate                             __EventPreExit__Delegate;                         		// 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;              		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;              		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;             		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;           		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                      		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                     		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCrashed__Delegate;                         		// 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUndockedChanged__Delegate;                 		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ENGINESHARE_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventPreExit();
	bool IsRequestingExit();
	struct FString GetUserAgentHeader();
	struct FString GetRegionString();
	struct FString GetPlatformString();
	bool ConfigGetString(struct FString SectionName, struct FString KeyName, struct FString& OutValue);
	bool ParseCommandlineString(struct FString Param, struct FString& OutValue);
	bool ParseCommandlineQWORD(struct FString Param, unsigned long long& OutValue);
	bool ParseCommandlineFloat(struct FString Param, float& OutValue);
	bool ParseCommandlineInt(struct FString Param, int& OutValue);
	bool ParseCommandlineParam(struct FString Param);
	void InitOnlineGame(class UOnlineSubsystem* NewOnlineSubsystem);
	bool IsUsingNullRHI();
	bool IsAuthoritative();
	bool IsNetServer();
	bool IsNetClient();
	bool IsHeadlessGameClient();
	bool IsGameClient();
	bool IsLanServer();
	bool IsDedicatedServer();
	void EventUndockedChanged();
	void EventCrashed();
	void EventPostLoadMap();
	void EventPreLoadMap(struct FString MapName);
	void EventOnlineGameInitialized();
	void EventPostScriptsReloaded();
	void EventPreScriptsReloaded();
	void EventLoadingMovieClosed();
	void EventPreExit();
};

// Class ProjectX.EOS_ErrorResponse
// 0x0038 (0x0060 - 0x0098)
class UEOS_ErrorResponse : public UObject
{
public:
	struct FString                                     ErrorMessage;                                     		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                NumericErrorCode;                                 		// 0x0070 (0x0004) [0x0000000000000000]               
	struct FString                                     ErrorCode;                                        		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             MessageVars;                                      		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOS_ERRORRESPONSE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_GetAccountsResponse
// 0x0010 (0x0060 - 0x0070)
class UEOS_GetAccountsResponse : public UObject
{
public:
	TArray<struct FEOSAccountInfo>                     Accounts;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOS_GETACCOUNTSRESPONSE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_AccountSummaryResponse
// 0x0050 (0x0070 - 0x00C0)
class UEOS_AccountSummaryResponse : public UEOS_GetAccountsResponse
{
public:
	TArray<struct FEOSAccountInfo>                     Friends;                                          		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     Incoming;                                         		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     Outgoing;                                         		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     BlockList;                                        		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FAccountSettings                            Settings;                                         		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOS_ACCOUNTSUMMARYRESPONSE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_ManageBlockListResponse
// 0x0020 (0x0060 - 0x0080)
class UEOS_ManageBlockListResponse : public UObject
{
public:
	struct FString                                     AccountId;                                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Created;                                          		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOS_MANAGEBLOCKLISTRESPONSE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_ManageFriendsListResponse
// 0x0010 (0x0060 - 0x0070)
class UEOS_ManageFriendsListResponse : public UObject
{
public:
	struct FString                                     Status;                                           		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOS_MANAGEFRIENDSLISTRESPONSE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOSMetricEvent_X
// 0x0008 (0x0060 - 0x0068)
class UEOSMetricEvent_X : public UObject
{
public:
	struct FName                                       EventName;                                        		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOSMETRICEVENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOSMetrics_X
// 0x0058 (0x0060 - 0x00B8)
class UEOSMetrics_X : public UObject
{
public:
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
	class UEOSMetricsConfig_X*                         EOSMetricsConfig;                                 		// 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ULocalPlayer_X*                              LocalPlayer;                                      		// 0x0070 (0x0008) [0x0000000000000000]               
	unsigned long                                      bCrashing : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     EMGuid;                                           		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     QueryParamsTemplate;                              		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMetricEventJsonStruct                      CurrentEvents;                                    		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UEOSMetricEvent_X*                           LatestPresenceEvent;                              		// 0x00B0 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOSMETRICS_X));
		}

		return uClassPointer;
	};

	void __EOSMetrics_X__Init_D5B9949E402AEF2359B604AA31449FAD(class UEOSMetricsConfig_X* EpicMetric);
	struct FString GetUserIdNative(struct FUniqueNetId LocalId, struct FString EpicId);
	void AddPresenceEvent(class UEOSMetricEvent_X* InEvent);
	void AddEvent(class UEOSMetricEvent_X* InEvent);
	void HandleCrash();
	struct FString GetUploadType();
	struct FString GetUserId();
	struct FString GetURL();
	void SendPing();
	void Init(class ULocalPlayer_X* InLocalPlayer);
};

// Class ProjectX.LocalPlayer_X
// 0x0008 (0x04D0 - 0x04D8)
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                     		// 0x04D0 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOCALPLAYER_X));
		}

		return uClassPointer;
	};

	bool SpawnPlayActor(struct FString URL, struct FString& OutError);
	void eventNotifyServerConnectionOpen();
	void NotifyOnValidPlayerController(struct FScriptDelegate Callback, class UClass* PCClass);
	void OnRemoved();
	void OnCreated();
};

// Class ProjectX.StateObject_X
// 0x0004 (0x0060 - 0x0064)
class UStateObject_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_STATEOBJECT_X));
		}

		return uClassPointer;
	};

	void InitExecution();
	void eventDestroyed();
	void Destroy();
};

// Class ProjectX.Online_X
// 0x0034 (0x0064 - 0x0098)
class UOnline_X : public UStateObject_X
{
public:
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0068 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0070 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineSubsystem*                            EOS;                                              		// 0x0078 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventEOSInitialized__Delegate;                  		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINE_X));
		}

		return uClassPointer;
	};

	void __Online_X__InitializeEOS_4B84F6EA47F6323EE4A9338B142CFFBC(class UEpicConfig_X* EpicConfig);
	class UOnlineSubsystem* GetOrCreateEOS(struct FString& SandboxId, struct FString& DeploymentId);
	void NotifyWhenEOSInitialized(struct FScriptDelegate Callback);
	void HandleLinkStatusChangedEOSInit(unsigned long bHasInternetConnection);
	void InitializeEOS();
	struct FString BuildAddress(struct FString Host, int Port, struct FString IP);
	bool IsInOnlineGame();
	bool IsInMainMenu();
	class AGRI_X* GetGRI();
	class AWorldInfo* GetWorldInfo();
	struct FUniqueNetId CreateUniqueNetID(unsigned char Platform, struct FString PlatformName, unsigned long long PlatformUID);
	bool UniqueLobbyIDIsSet(struct FUniqueLobbyId InID);
	struct FUniqueLobbyId StringToUniqueLobbyId(struct FString InID);
	struct FString UniqueLobbyIdToString(struct FUniqueLobbyId InID);
	struct FUniqueNetId GetUniqueNetIDWithoutSplitscreenID(struct FUniqueNetId Id);
	struct FUniqueNetId GetPrimaryIDForGuest(struct FUniqueNetId InGuestID);
	bool UniqueNetIDIsGuest(struct FUniqueNetId InID);
	bool UniqueNetIDIsValid(struct FUniqueNetId InID);
	struct FUniqueNetId StringToUniqueNetId(struct FString InID);
	struct FString PlatformIdToString(struct FUniqueNetId& InID);
	struct FString UniqueNetIdToString(struct FUniqueNetId InID);
	struct FUniqueNetId CleanUniqueNetID(struct FUniqueNetId InID);
	int FindUniqueNetID(TArray<struct FUniqueNetId>& List, struct FUniqueNetId& Search);
	class UError* GetConnectionStatusError(int ErrorCode, class UError* FallbackError);
	void OnExit();
	void OnNewGame();
	void OnMainMenuOpened();
	void HandleGRISpawned(class AGRI_X* GRI);
	void OnInit();
	void Init(class UOnlineSubsystem* NewOnlineSubsystem);
	void EventEOSInitialized();
};

// Class ProjectX.OnlinePlayer_X
// 0x01C0 (0x0098 - 0x0258)
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                          		// 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlinePlayerAuthentication_X*               Authentication;                                   		// 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlinePlayerStorage_X*                      Storage;                                          		// 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlinePlayerRegionRestrictions_X*           RegionRestrictions;                               		// 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     PlayerName;                                       		// 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                         		// 0x00D0 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                CleanPlayerID;                                    		// 0x0118 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned char                                      LoginStatus;                                      		// 0x0160 (0x0001) [0x0000000000002000] (CPF_Transient)
	int                                                LocalPlayerNum;                                   		// 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bLoggingIn : 1;                                   		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoggingOut : 1;                                  		// 0x0168 (0x0004) [0x0000000000000000] [0x00000002] 
	class UError*                                      LoginError;                                       		// 0x0170 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     CachedEpicID;                                     		// 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UError*                                      LoginStatusError;                                 		// 0x0188 (0x0008) [0x0000000000000000]               
	class UError*                                      BannedError;                                      		// 0x0190 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                   		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                  		// 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;              		// 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;                  		// 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;            		// 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;            		// 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOnlineNameChanged__Delegate;               		// 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemoved__Delegate;                         		// 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYER_X));
		}

		return uClassPointer;
	};

	void __OnlinePlayer_X__OnInit_627FA9F84CDFB79B57FC70A13F95374A(class UOnlinePlayerAuthentication_X* _);
	void __OnlinePlayer_X__UpdatePsyNetEnabled_CC0EC0E041285210DED2458F7D238FE1(class UBanMessage_X* _);
	void GetPlayersLikesDislikes(class UGameSettingPlaylist_X* Playlist, TArray<struct FName>& PlayerLikes, TArray<struct FName>& PlayerDislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsGuestAccount();
	void SetPlayerName(struct FString InName);
	void UpdateSplitscreenId();
	bool IsUpdateRequired();
	struct FString GetOnlineName();
	struct FString GetLocalName();
	struct FString GetRemoteName(int LocalPlayerIndex);
	void HandleCanPlayOnlineChanged(unsigned char LocalUserNum);
	unsigned char CanPlayOnline();
	void HandlePlayerCountryReceived(struct FUniqueNetId InPlayerId, struct FString Country);
	void GetPlayerCountry(struct FScriptDelegate Handler);
	unsigned char CanCommunicateText(unsigned long bTryToResolve);
	void OpenErrorDialog(unsigned char ErrorCode);
	void OpenPS4DisplayMode(unsigned char DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int InControllerID);
	void SetControllerColor(int InControllerID, struct FColor NewColor);
	void PostActivityFeedMessage(struct FString Id, TArray<struct FString> StringReplaceList);
	TArray<bool> GetSyncedAchievements(unsigned char LocalUserNum);
	void UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	void UpdateStat(struct FName StatName, int Points);
	void HandleShowKeyboardComplete(unsigned long bWasSuccessful);
	void HideKeyboard();
	bool ShowKeyboard(struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, struct FString DefaultText, int MaxLength, struct FScriptDelegate OnCompleteDelegate, int LocalPlayerNumOverride);
	void OnNewGame();
	void HandleControllerChange(int InControllerID, unsigned long bIsConnected);
	void HandleUserLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId);
	bool IsLoggedIn(unsigned long bRequireOnlineLogin);
	void HandleLogoutComplete(unsigned long bWasSuccessful);
	void HandleLoginChanged(unsigned char PlayerNum);
	struct FString GetEpicAccountId();
	struct FString GetSanitizedPlayerName();
	void HandleLoginFailed(unsigned char PlayerNum, unsigned char ErrorCode);
	void Logout(struct FScriptDelegate Callback);
	void Login(struct FString LoginName, struct FString LoginPassword, struct FScriptDelegate Callback);
	void OnRemoved();
	void InitPlayer();
	bool eventIsPrimaryPlayer();
	void HandlePsyNetDisconnect(class UPsyNetConnection_X* Connection);
	void UpdatePsyNetEnabled();
	void HandleBanned(class UOnlinePlayerAuthentication_X* Auth);
	void HandleAuthLoginChange(class UOnlinePlayerAuthentication_X* Auth);
	void OnInit();
	void eventConstruct();
	class UOnlineGame_X* GetOnlineGame();
	void EventRemoved(class UOnlinePlayer_X* Player);
	void EventOnlineNameChanged(class UOnlinePlayer_X* Player);
	void EventShowKeyboardComplete(struct FString NewText, unsigned long bCanceled);
	void EventCanPlayOnlineChanged(class UOnlinePlayer_X* Player);
	void EventCountryUpdated(struct FString Country);
	void EventLoginStatusChanged(class UOnlinePlayer_X* Player);
	void EventLogoutComplete(class UOnlinePlayer_X* Player);
	void EventLoginComplete(class UOnlinePlayer_X* Player, class UError* Error);
};

// Class ProjectX.EpicFriendsPlugin_X
// 0x00D8 (0x0060 - 0x0138)
class UEpicFriendsPlugin_X : public UObject
{
public:
	struct FString                                     ServerURL;                                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ProductionServerURL;                              		// 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AddFriendURL;                                     		// 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RemoveFriendURL;                                  		// 0x0090 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     OutgoingFriendRequestsURL;                        		// 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     IncomingFriendRequestsURL;                        		// 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     BlockPlayerURL;                                   		// 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     BlockListURL;                                     		// 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AccountSummaryURL;                                		// 0x00E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __HTTPRequestCallback__Delegate;                  		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __AddFriendCallback__Delegate;                    		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __GetOutgoingFriendsCallback__Delegate;           		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPICFRIENDSPLUGIN_X));
		}

		return uClassPointer;
	};

	class UError* ConvertError(class UEOS_ErrorResponse* ErrorResponse);
	bool SendHTTPRequest(struct FString Verb, struct FString URL, unsigned long AddContentTypeHeader, class UClass* ResponseClass, struct FScriptDelegate Callback);
	bool GetAccountSummary();
	bool GetOutgoingFriendRequestsWithCustomCallback(struct FScriptDelegate Callback);
	bool GetOutgoingFriendRequests();
	bool GetIncomingFriendRequests();
	bool GetBlockList();
	bool Unblock(struct FUniqueNetId UserId);
	bool bLock(struct FUniqueNetId UserId);
	bool RejectFriendRequest(struct FUniqueNetId FriendId);
	bool AcceptFriendRequest(struct FUniqueNetId FriendId);
	bool RemoveFriend(struct FUniqueNetId FriendId);
	bool AddFriendWithCustomCallback(struct FUniqueNetId FriendId, struct FScriptDelegate Callback);
	bool AddFriend(struct FUniqueNetId FriendId);
	void eventConstruct();
	void GetOutgoingFriendsCallback(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void AddFriendCallback(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleAccountSummaryResponse(class UEOS_AccountSummaryResponse* Response, class UError* Error);
	void HandleGetOutgoingInvitesResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleGetIncomingInvitesResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleGetBlockListResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleUnblockPlayerResponse(class UEOS_ManageBlockListResponse* Response, class UError* Error);
	void HandleBlockPlayerResponse(class UEOS_ManageBlockListResponse* Response, class UError* Error);
	void HandleRejectFriendRequestResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleAcceptFriendRequestResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleRemoveFriendResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleAddFriendResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HTTPRequestCallback(class UObject* Response, class UError* Error);
};

// Class ProjectX.OnlinePlayerAuthentication_X
// 0x0140 (0x0098 - 0x01D8)
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                         		// 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	class URPC_LoginAuthPlayer_X*                      LoginSuccessRPC;                                  		// 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x00A8 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                               		// 0x00F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PlayerUID;                                        		// 0x0100 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     Platform;                                         		// 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bLoggedIn : 1;                                    		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlatformTokenAuthenticationFailed : 1;           		// 0x0120 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bSkipAuth : 1;                                    		// 0x0120 (0x0004) [0x0000000000000000] [0x00000004] 
	class UError*                                      AuthLoginError;                                   		// 0x0128 (0x0008) [0x0000000000000000]               
	class UBanMessage_X*                               BanMessage;                                       		// 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPsyTagComponent_X*                          PsyTagInfo;                                       		// 0x0138 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     EncryptedAuthTicket;                              		// 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     EpicAuthTicket;                                   		// 0x0150 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                AuthRequestFailureMax;                            		// 0x0160 (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                AuthRequestRetryTime;                             		// 0x0164 (0x0004) [0x0000000000000002] (CPF_Const)   
	int                                                AuthRequestFailureCount;                          		// 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FString                                     AuthenticatedName;                                		// 0x0170 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UEpicLogin_X*                                EpicLogin;                                        		// 0x0180 (0x0008) [0x0000000000000000]               
	class UError*                                      PrimaryAccountNotSetError;                        		// 0x0188 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                    		// 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBanned__Delegate;                          		// 0x01A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginResult__Delegate;                     		// 0x01C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERAUTHENTICATION_X));
		}

		return uClassPointer;
	};

	void OnEpicLoginInitialized();
	void OnEpicLoginInitializedTimeout();
	void RequestEpicAuthTicket();
	void HandleEpicAuthTicket(struct FString AuthTicket, struct FString EpicAccountId, class UError* Error);
	void __OnlinePlayerAuthentication_X__OnInit_B0D66B1B4B6B2035CD85E7B6E2820C50();
	struct FString GetDebugName();
	void GotoAuthState(struct FName AuthStateName);
	bool IsLoginAttemptActive();
	struct FName GetFeatureSet();
	struct FString GetBuildRegion();
	void OnChangeAuthenticatedName(struct FString NewName);
	void HandleAuthTicket(unsigned long bSuccess, struct FString AuthTicket);
	void RequestAuthTicket();
	bool RequiresEpicAuthTicket();
	bool RequiresAuthTicket();
	void ReLogin();
	void Logout();
	void SetAuthLoginError(class UError* E);
	void UpdateLoginState();
	class UError* GetAuthLoginError();
	void UpdateAuthLoginError();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLinkStatusChanged(unsigned long B);
	void HandleConnectionChanged(class UPsyNetConnection_X* C);
	void HandleLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnLoginFail(class UError* Error);
	void OnLoginFailRPC(class URPC_LoginAuthPlayer_X* RPC);
	void OnLoginSuccessRPC(class URPC_LoginAuthPlayer_X* RPC);
	void SendLoginRPC();
	void PsyNetLogin(struct FScriptDelegate Callback);
	void OnRemoved();
	void OnInit();
	void EventLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void EventBanned(class UOnlinePlayerAuthentication_X* Auth);
	void EventLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.EpicLogin_X
// 0x0118 (0x0060 - 0x0178)
class UEpicLogin_X : public UObject
{
public:
	struct FString                                     PinGrantCode;                                     		// 0x0060 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     PinGrantURL;                                      		// 0x0070 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long long                                 PinGrantExpiration;                               		// 0x0080 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bLoggedIn : 1;                                    		// 0x0088 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bSetAsPrimaryAccount : 1;                         		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPollDuringAccountLinking : 1;                    		// 0x0088 (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      bPinGrantRequestInProgress : 1;                   		// 0x0088 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLoginInProgress : 1;                             		// 0x0088 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAccountCreationInProgress : 1;                   		// 0x0088 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FString                                     ParentalConsentURL;                               		// 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                LoginFailureCount;                                		// 0x00A0 (0x0004) [0x0000000000000000]               
	class UError*                                      LoginError;                                       		// 0x00A8 (0x0008) [0x0000000000000000]               
	unsigned long long                                 LoginErrorTimestamp;                              		// 0x00B0 (0x0008) [0x0000000000000000]               
	class UEpicConfig_X*                               EpicConfig;                                       		// 0x00B8 (0x0008) [0x0000000000000000]               
	struct FString                                     CreateAccountURL;                                 		// 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginSucceeded__Delegate;                  		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginFailed__Delegate;                     		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedPinGrantCode__Delegate;            		// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginError__Delegate;                      		// 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedEpicAuthTicket__Delegate;          		// 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInitialized__Delegate;                     		// 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCreatedEpicGamesAccount__Delegate;         		// 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPICLOGIN_X));
		}

		return uClassPointer;
	};

	void __EpicLogin_X__HandleLoginChanged_0F5A1E974EA281D59364B3B5402C4741(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__HandleLoginFailed_EBCC0FB14F5AD7F29C7BE9A0DDFA6214(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__UpdateTwoFactorAuthenticationStatus_5EA39F83400AB17DC5A1AF97ABAA4096(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__CreateEpicGamesAccount_678479784E95DB6E406157BAF515DBC1(class UWebRequest_X* Response);
	void __EpicLogin_X__CreateEpicGamesAccount_99D49D934687A96759579BB54687FEDB(struct FString _, struct FString __, class UError* Error);
	void __EpicLogin_X__RequestNintendoAccountAuthorization_820E201842AF0BF6540BCD9E8A73D436(class UError* _);
	void HandleRequestPinGrantTimeout();
	void HandleLoginTimeout();
	void ClearRequestPinGrantCallbacks();
	void ClearLoginCallbacks();
	void HandleReceivedPinGrantCode(unsigned char Result, unsigned char InLocalPlayerNum, struct FString Code, struct FString URL, int SecondsUntilExpiration);
	void HandleCompletedPinGrant();
	void RequestPinGrantCode();
	void RequestNintendoAccountAuthorization(struct FScriptDelegate Callback);
	bool Login(struct FString PlatformAuthTicket);
	void CreateEpicGamesAccount();
	void UpdateTwoFactorAuthenticationStatus(struct FScriptDelegate Callback);
	void RetryAuth();
	void HandleInternetConnectionChanged(unsigned long bConnected);
	void HandleKickedByEpic();
	void HandleAuthTicketExpired();
	void HandleUnderageUserDetected(unsigned char InLocalPlayerNum, struct FString InParentalConsentURL);
	void HandleLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLoginFailed(unsigned char InLocalPlayerNum, unsigned char Error);
	void HandleLoginChanged(unsigned char InLocalPlayerNum);
	void ClearLoginError();
	void SetLoginError(class UErrorType* Error);
	void TriggerAuthTicketDelegate(struct FScriptDelegate Callback);
	void ClearReceivedAuthTicketDelegate(struct FScriptDelegate Callback);
	bool RequestEpicAuthTicket(struct FScriptDelegate Callback);
	bool RequiresEpicAuthTicket();
	bool IsLoggedIn();
	void NotifyWhenInitialized(struct FScriptDelegate Callback);
	void OnRemoved();
	void HandleEOSInitialized();
	void HandleEpicConfigSet();
	bool DevAssert(unsigned long bTrueStatement, struct FString ErrorMessage);
	void EventCreatedEpicGamesAccount();
	void EventInitialized();
	void EventReceivedEpicAuthTicket(struct FString AuthTicket, struct FString AccountId, class UError* Error);
	void EventLoginError(class UEpicLogin_X* EpicLogin, class UErrorType* Error);
	void EventReceivedPinGrantCode();
	void EventLoginFailed();
	void EventLoginSucceeded();
};

// Class ProjectX.EpochTimers_X
// 0x0000 (0x0060 - 0x0060)
class UEpochTimers_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPOCHTIMERS_X));
		}

		return uClassPointer;
	};

	bool IsActive(struct FScriptDelegate Callback);
	void ClearAll(class UObject* Obj);
	void Clear(struct FScriptDelegate Callback, struct FScriptDelegate Callback2);
	void SetWindow(struct FScriptDelegate StartCallback, unsigned long long EpochStartTime, struct FScriptDelegate EndCallback, unsigned long long EpochEndTime);
	void SetTime(struct FScriptDelegate Callback, unsigned long long EpochTime);
	void Set(struct FScriptDelegate Callback, unsigned long long DelaySeconds);
};

// Class ProjectX.EpochTimerTick_X
// 0x0018 (0x0060 - 0x0078)
class UEpochTimerTick_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FEpochTimer>                         Timers;                                           		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPOCHTIMERTICK_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Errors_X
// 0x02F8 (0x0080 - 0x0378)
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                     		// 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          RequestError;                                     		// 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  HTTPError;                                        		// 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SessionNotActive;                                 		// 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_NotConnected;                                		// 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_Connected;                                   		// 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_ConnectionDropped;                           		// 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_NoNetworkConnection;                         		// 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_ServiceUnavailable;                          		// 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_UpdateRequired;                              		// 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_ServersTooBusy;                              		// 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                      		// 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_InvalidUser;                                 		// 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_InvalidResponse;                             		// 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_EpicAccountRequired;                         		// 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_EpicAccountLinkingFailed;                    		// 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ConnectionStatusErrors[0xD] ;                     		// 0x0100 (0x0068) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  VersionMismatch;                                  		// 0x0168 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NoServers;                                        		// 0x0170 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileDoesNotExist;                                 		// 0x0178 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileLoadFail;                                     		// 0x0180 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileLoadCorrupt;                                  		// 0x0188 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileMountCorrupt;                                 		// 0x0190 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileSaveFail;                                     		// 0x0198 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileSaveNoSpace;                                  		// 0x01A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileSaveCorrupt;                                  		// 0x01A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UserAuthBanned;                                   		// 0x01B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotLoggedInToPsynet;                              		// 0x01B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendsList;                                      		// 0x01C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InviteLimitReached;                               		// 0x01C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OutOfRetries;                                     		// 0x01D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AuthenticationFailed;                             		// 0x01D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NoExportCountry;                                  		// 0x01E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UnauthorizedAccess;                               		// 0x01E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ServiceNotFound;                                  		// 0x01F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FeatureDisabled;                                  		// 0x01F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OtherPlayerFeatureDisabled;                       		// 0x0200 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MatchmakingDisabled;                              		// 0x0208 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NoValidPlaylistsSelected;                         		// 0x0210 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlaylistNotAvailable;                             		// 0x0218 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameNotSet;                                 		// 0x0220 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameAlreadyTaken;                           		// 0x0228 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameTooShort;                               		// 0x0230 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameTooLong;                                		// 0x0238 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameInappropriate;                          		// 0x0240 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameInvalidCharacter;                       		// 0x0248 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameFailed;                                 		// 0x0250 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotAuthorized;                                    		// 0x0258 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SessionAlreadyActive;                             		// 0x0260 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameServerPending;                                		// 0x0268 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CacheError;                                       		// 0x0270 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  WordFilterEvil;                                   		// 0x0278 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  WordFilterPlatformError;                          		// 0x0280 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  WordFilterPlatformChatError;                      		// 0x0288 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidSettings;                                  		// 0x0290 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  Maintenance;                                      		// 0x0298 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlatformAuthError;                                		// 0x02A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MicrotransactionAuthExpired;                      		// 0x02A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotFriendSelf;                                 		// 0x02B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidPlayer;                                    		// 0x02B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendRequestNotFound;                            		// 0x02C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendRequestFailed;                              		// 0x02C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AlreadyFriends;                                   		// 0x02D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendLimitReached;                               		// 0x02D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  LocalFriendLimitReached;                          		// 0x02E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RemoteFriendLimitReached;                         		// 0x02E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  LocalHostConnectionError;                         		// 0x02F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UGCRestricted;                                    		// 0x02F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MicrotransactionServiceMaintenance;               		// 0x0300 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GenericStorageOutOfSync;                          		// 0x0308 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GenericStorageSync_RequestNotFound;               		// 0x0310 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SignatureMismatch;                                		// 0x0318 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JsonDeserialization;                              		// 0x0320 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidPlatform;                                  		// 0x0328 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidPlatformForCodeRedemption;                 		// 0x0330 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidParameters;                                		// 0x0338 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          NotMatchmaking;                                   		// 0x0340 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AccessDenied;                                     		// 0x0348 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          PerConDisconnected;                               		// 0x0350 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AccountNotFound;                                  		// 0x0358 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ServerNotFound;                                   		// 0x0360 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          ExpiredDsConnectToken;                            		// 0x0368 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MatchmakingNoInternet;                            		// 0x0370 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ERRORS_X));
		}

		return uClassPointer;
	};

	bool DisplayPlatformError(class UErrorType* InErrorType);
};

// Class ProjectX.EventRecorder_X
// 0x0060 (0x0070 - 0x00D0)
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UEventRecorderConfig_X*                      Config;                                           		// 0x0078 (0x0008) [0x0000000000000000]               
	int                                                MaxQueuedEvents;                                  		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                MaxQueuedMinutes;                                 		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bPaused : 1;                                      		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FMetricsEvent>                       QueuedEvents;                                     		// 0x0090 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                     		// 0x00A0 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FGuid                                       LevelSessionID;                                   		// 0x00B0 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              NextSendTime;                                     		// 0x00C0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              FloodPreventionTimeSeconds;                       		// 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastFullSendTime;                                 		// 0x00C8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int                                                AppEventCount;                                    		// 0x00CC (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EVENTRECORDER_X));
		}

		return uClassPointer;
	};

	void eventMetricsNotSent(int Count);
	void eventMetricsFlood(struct FString LastEventName);
	void SetLevelSessionID(struct FGuid Id);
	bool Send();
	void RecordEvent(struct FString Category, struct FName Event, struct FUniqueNetId PlayerID, int Version, struct FString& Data);
	void RecordFunction(struct FString Category, int Version);
};

// Class ProjectX.MetricsSystem_X
// 0x0000 (0x00D0 - 0x00D0)
class UMetricsSystem_X : public UEventRecorder_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_METRICSSYSTEM_X));
		}

		return uClassPointer;
	};

	void eventConstruct();
	void HandleUnpause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
	void HandlePause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
};

// Class ProjectX.EventRecorderGroup_X
// 0x0010 (0x0070 - 0x0080)
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                         		// 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EVENTRECORDERGROUP_X));
		}

		return uClassPointer;
	};

	struct FString VectorToString(struct FVector V);
	void RecordFunction(int Version);
	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.MetricsGroup_X
// 0x0000 (0x0080 - 0x0080)
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_METRICSGROUP_X));
		}

		return uClassPointer;
	};

	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.NetMetrics_X
// 0x0018 (0x0080 - 0x0098)
class UNetMetrics_X : public UMetricsGroup_X
{
public:
	class UEventRecorderConfig_X*                      Config;                                           		// 0x0080 (0x0008) [0x0000000000000000]               
	TArray<struct FString>                             UnstableConnectionsQueue;                         		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMETRICS_X));
		}

		return uClassPointer;
	};

	void UnstableConnections(TArray<struct FString>& Addresses);
	void RecordUnstableConnections();
	void AddUnstableConnection(struct FString& Address);
	void eventStaticUnstableConnection(struct FString& Address);
	void ReliablePacketsBlocked();
	void UseInputBuffer(struct FUniqueNetId PlayerID, struct FName Type);
	void LaunchURL(struct FString URL);
	void ServerReported(struct FUniqueNetId PlayerID);
	void RpcSignatureMismatch(int ServiceID);
	void ConnectionChangedIP(struct FUniqueNetId PlayerID);
	void PlayerNetworkError(struct FUniqueNetId PlayerID, struct FString Reason);
	void PlayerTimeout(struct FUniqueNetId PlayerID);
	void NetStats(int PeriodMS, int PingMin, int PingMax, int PingAvg, int PingMed, int OutPackets, int InPackets, int OutLost, int InLost, int OutOfOrder, int OutBytes, int InBytes, int NNState, int DPingMin, int DJitter, float DLossPct, int NNPingMin, int NNJitter, float NNLossPct, int PsyPingMin, int PsyPingMax, int PsyPingAvg, int PsyPingMed, int PsyReceived, int PsyLost);
	void PlayerNetwork(struct FUniqueNetId PlayerID, int PingMin, int PingMax, int PingAvg, int PktLossRateMin, int PktLossRateMax, int PktLossAvg, int InBpsMax, int InBpsAvg, int InBytesTotal, int OutBpsMax, int OutBpsAvg, int OutBytesTotal);
	void RecordPlayerNetwork(class APlayerController* PC);
};

// Class ProjectX.NetworkNextMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UNetworkNextMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTMETRICS_X));
		}

		return uClassPointer;
	};

	void eventClientInitError();
	void eventServerInitError();
	void eventRouteEstablished(unsigned long long SessionId);
};

// Class ProjectX.ExplosionCollisionShapes_X
// 0x0010 (0x0070 - 0x0080)
class UExplosionCollisionShapes_X : public UComponent
{
public:
	struct FVector                                     Location;                                         		// 0x0070 (0x000C) [0x0000000000000000]               
	float                                              GrowthAmount;                                     		// 0x007C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EXPLOSIONCOLLISIONSHAPES_X));
		}

		return uClassPointer;
	};

	void Destroy();
	void Init();
};

// Class ProjectX.BoxCollisionShape_X
// 0x0018 (0x0080 - 0x0098)
class UBoxCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	struct FVector                                     StartSize;                                        		// 0x0080 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     EndSize;                                          		// 0x008C (0x000C) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BOXCOLLISIONSHAPE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GoalCollisionShape_X
// 0x0000 (0x0080 - 0x0080)
class UGoalCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GOALCOLLISIONSHAPE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.SphereCollisionShape_X
// 0x0008 (0x0080 - 0x0088)
class USphereCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	float                                              StartRadius;                                      		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndRadius;                                        		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SPHERECOLLISIONSHAPE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.FakeData_X
// 0x0320 (0x0060 - 0x0380)
class UFakeData_X : public UObject
{
public:
	int                                                RandomSeed;                                       		// 0x0060 (0x0004) [0x0000000000000000]               
	struct FFakeData1                                  Data1;                                            		// 0x0068 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData2                                  Data2;                                            		// 0x00A0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData3                                  Data3;                                            		// 0x0130 (0x0130) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData4                                  Data4;                                            		// 0x0260 (0x0120) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_FAKEDATA_X));
		}

		return uClassPointer;
	};

	int RandomizeValues(class UObject* Target, int InRandomSeed);
	class UFakeData_X* RandomizeFakeData(class UFakeData_X* FakeData, int InRandomSeed);
	class UFakeData_X* GenerateFakeData(int InRandomSeed);
};

// Class ProjectX.FXActorEvent_X
// 0x0000 (0x0060 - 0x0060)
class UFXActorEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_FXACTOREVENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.FXAttachmentTraitBase_X
// 0x0000 (0x0060 - 0x0060)
class UFXAttachmentTraitBase_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_FXATTACHMENTTRAITBASE_X));
		}

		return uClassPointer;
	};

	class UActorComponent* GetComponent();
	void eventInit();
};

// Class ProjectX.GameEngine_X
// 0x0000 (0x0B48 - 0x0B48)
class UGameEngine_X : public UGameEngine
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMEENGINE_X));
		}

		return uClassPointer;
	};

	void __GameEngine_X__Construct_6D15F9764B410AC9365BA9A98705F7EB(struct FString InURL);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventOnlineSubsystemInitialized();
	void eventConstruct();
};

// Class ProjectX.GameInfo_X
// 0x0058 (0x0470 - 0x04C8)
class AGameInfo_X : public AGameInfo
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                     		// 0x0470 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class APlayerController*                           PlayerControllerArchetype;                        		// 0x0478 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class APawn*                                       PawnArchetype;                                    		// 0x0480 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPauserData>                         PCPausers;                                        		// 0x0488 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x0498 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInit__Delegate;                            		// 0x04B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMEINFO_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventClientMapLoadFail(struct FUniqueNetId PlayerID, struct FString MapName);
	void RemovePauser(class APlayerController* PC, unsigned long bForceRemove);
	void AddPauser(class APlayerController* PC);
	void SetPaused(class APlayerController* PC, unsigned long bPause);
	void TogglePause(class APlayerController* PC);
	bool IsPaused(class APlayerController* PC);
	class UIOnlineGameHost_X* GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	class UOnlineGame_Base_X* GetOnlineGame();
	void EndOnlineGame();
	void Logout(class AController* Exiting);
	void GenericPlayerInitialization(class AController* C);
	void DisconnectExistingPlayer(struct FUniqueNetId& PlayerID);
	class APlayerController* eventLogin(struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString& ErrorMessage);
	void eventPreLoginSplitscreen(struct FUniqueNetId PrimaryPlayerUniqueId, struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString& ErrorMessage);
	void eventPreLogin(struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString& ErrorMessage);
	void UpdateGameSettingsCounts();
	void PostBeginPlay();
	bool ProcessServerLogin();
	void RegisterServer();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class ANavigationPoint* StartSpot);
	void eventPreBeginPlay();
	class APlayerController* SpawnPlayerController(struct FVector SpawnLocation, struct FRotator SpawnRotation);
	class UClass* eventSetGameType(struct FString MapName, struct FString Options, struct FString Portal);
	struct FString eventGetDefaultGameClassPath(struct FString MapName, struct FString Options, struct FString Portal);
	void PDI(class UClass* ActorClass, unsigned long bOnlybDebug);
	void eventInitGame(struct FString Options, struct FString& ErrorMessage);
	void EventInit(class AGameInfo_X* G, struct FString Options);
	void EventSpawned(class AGameInfo_X* G);
};

// Class ProjectX.GameSetting_X
// 0x0004 (0x0060 - 0x0064)
class UGameSetting_X : public UObject
{
public:
	unsigned long                                      bHidden : 1;                                      		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMESETTING_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsSetting(struct FName SettingName);
	void AddGameSettingToList(class UOnlineGameSettings_X* OnlineGameSettings, TArray<class UGameSetting_X*>& GameSettingsArray);
};

// Class ProjectX.GameSettingCategory_X
// 0x0028 (0x0060 - 0x0088)
class UGameSettingCategory_X : public UObject
{
public:
	TArray<struct FName>                               SelectedNames;                                    		// 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bHidden : 1;                                      		// 0x0070 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bUseableWhileHidden : 1;                          		// 0x0070 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	TArray<class UGameSetting_X*>                      GameSettings;                                     		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMESETTINGCATEGORY_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	int GetGameSettingIndex(struct FName SettingName);
	bool eventHasSetting(struct FName SettingName);
	void GetSelectedGameSettings(TArray<class UGameSetting_X*>& SelectedGameSettings);
	class UGameSetting_X* GetFirstSelectedGameSetting();
	void ClearSelected();
	void AddSelectedSetting(struct FName NewSelectedName);
	void SetGameSettings(TArray<class UGameSetting_X*> NewGameSettings);
};

// Class ProjectX.GameViewportClient_X
// 0x0068 (0x0248 - 0x02B0)
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned long                                      bHandCursor : 1;                                  		// 0x0248 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bMuteSoundOnFocusLost : 1;                        		// 0x0248 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int                                                MaxSplitScreenPlayers;                            		// 0x024C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;                 		// 0x0250 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;                		// 0x0268 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;           		// 0x0280 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;             		// 0x0298 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMEVIEWPORTCLIENT_X));
		}

		return uClassPointer;
	};

	void OnPrimaryPlayerSwitch(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	bool ForceRemovePlayer(class ULocalPlayer* ExPlayer);
	bool eventRemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayerByID(int ControllerId);
	void eventSetHardwareMouseCursorVisibility(unsigned long bIsVisible);
	void NotifyConnectionError(unsigned char MessageType, struct FString Message, struct FString Title);
	void eventSetProgressMessage(unsigned char MessageType, struct FString Message, struct FString Title, unsigned long bIgnoreFutureNetworkMessages);
	class ULocalPlayer* eventCreatePlayer(int ControllerId, unsigned long bSpawnActor, struct FString& OutError);
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	bool ShouldMuteAudioWhenUnfocused();
	bool PlatformSupportsMuteOnFocusLostOption();
	bool IsGameRecordingEnabled();
	float GetDefaultSafeZone();
	void FlashWindow();
	void SaveCurrentWindowState();
	void SaveWindowState(int ResX, int ResY, unsigned long bFullScreen, unsigned long bBorderless, unsigned long bVsync);
	bool GetAvailableRefreshRates(TArray<int>& RefreshRates);
	bool GetAvailableResolutions(TArray<struct FIntPoint>& Resolutions);
	bool GetAvailableResolutionsStr(TArray<struct FString>& Resolutions);
	bool IsBorderlessViewport();
	struct FIntPoint GetViewportSizePoint();
	struct FString GetViewportSizeStr();
	class UGameViewportClient_X* GetInstance();
	void EventPrimaryPlayerChange(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	void EventNotifyConnectionError(unsigned char MessageType, struct FString Title, struct FString Message);
	void EventLocalPlayerLeave(class ULocalPlayer* OldPlayer);
	void EventLocalPlayerJoin(class ULocalPlayer* NewPlayer);
};

// Class ProjectX.GFxDataRow_X
// 0x0034 (0x0060 - 0x0094)
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                        		// 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       PrimaryKeyName;                                   		// 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UClass*                                      ProxyClass;                                       		// 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bLevelTransitionPersistent : 1;                   		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UObject*                                     ProxyObject;                                      		// 0x0080 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGFxShell_X*                                 Shell;                                            		// 0x0088 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int                                                RowIndex;                                         		// 0x0090 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXDATAROW_X));
		}

		return uClassPointer;
	};

	class UGFxObject* FlashEventObject();
	struct FString FlashEventString();
	float FlashEventFloat();
	int FlashEventInt();
	void FlashEventVoid();
	void SetProxy(class UObject* InProxyObject);
	void eventOnRemoved();
	void eventOnShellSet();
};

// Class ProjectX.GFxDataSingleton_X
// 0x0004 (0x0094 - 0x0098)
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXDATASINGLETON_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxShell_X
// 0x0098 (0x0098 - 0x0130)
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                             		// 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ULocalPlayer_X*                              Player;                                           		// 0x00A0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	unsigned long                                      bGamePaused : 1;                                  		// 0x00A8 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bWasFullscreen : 1;                               		// 0x00A8 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	float                                              LeftX;                                            		// 0x00AC (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              LeftY;                                            		// 0x00B0 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              RightX;                                           		// 0x00B4 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              RightY;                                           		// 0x00B8 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<class UGFxMoviePlayer_X*>                   Movies;                                           		// 0x00C0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UGFxDataStore_X*                             DataStore;                                        		// 0x00D0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned char                                      InputType;                                        		// 0x00D8 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	unsigned char                                      OnlinePlatformType;                               		// 0x00D9 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;             		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;                		// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                   		// 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXSHELL_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMouseKeyPressed(struct FName Key, unsigned long bPressed);
	void HandleOnlineSubSet();
	void SetAllowAnyPlayerInput(unsigned long bAllow);
	void HandlePauseChanged();
	void OnShowKeyboardCanceled();
	void OnShowKeyboardComplete(struct FString NewText);
	void HandleShowKeyboardComplete(struct FString NewText, unsigned long bCanceled);
	struct FString PasteFromClipboard();
	void CopyToClipboard(struct FString ClipboardText);
	void HideKeyboard();
	bool ShowKeyboard(struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, struct FString DefaultText, int MaxLength);
	void SetGamePaused(unsigned long bPaused);
	void ExitToMainMenu();
	void ExitGame();
	void HandleMovieInputCaptureChanged(class UGFxMoviePlayer_X* MoviePlayer);
	void TriggerDataCallbacks();
	void eventTick(float DeltaTime);
	void eventOnMovieClosed(class UGFxMoviePlayer_X* Movie);
	void eventOnMovieStarted(class UGFxMoviePlayer_X* Movie);
	void StopMovie(class UGFxMoviePlayer_X* Movie);
	void StartMovie(class UGFxMoviePlayer_X* Movie);
	void eventStop();
	void eventOnStart();
	void eventStart(class ULocalPlayer_X* InPlayer);
	void EventReceivedInput(class UGFxShell_X* InShell);
	void EventInputTypeChanged(class UGFxShell_X* InShell);
	void EventInputCaptureChanged(class UGFxShell_X* InShell);
};

// Class ProjectX.GFxDataStore_X
// 0x0074 (0x0070 - 0x00E4)
class UGFxDataStore_X : public UComponent
{
public:
	TArray<struct FGFxDataStoreTable>                  Tables;                                           		// 0x0070 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGFxDirtyTable>                      DirtyTables;                                      		// 0x0080 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 ObjectNameToTable;                                		// 0x0090 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	unsigned long                                      bDebugGetValue : 1;                               		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXDATASTORE_X));
		}

		return uClassPointer;
	};

	void ExportFakeData(struct FName InTableName);
	void PrintData(struct FName InTableName);
	int GetObjectRowW(class UGFxDataRow_X* O);
	void AllObjectsOfType(class UClass* BaseClass, class UGFxDataRow_X*& OutObject);
	void AllObjects(class UClass* ObjClass, class UGFxDataRow_X*& OutObject, int& Row);
	class UGFxDataRow_X* GetObjectByPrimaryKeyW(class UClass* ObjClass, struct FString Value);
	class UGFxDataRow_X* GetObjectW(class UClass* ObjClass, int Row);
	void RemoveObject(class UGFxDataRow_X* O);
	void BindObject(class UGFxDataRow_X* Object, int Row);
	class UGFxDataRow_X* CreateObject(class UClass* ObjClass, int Row, int& PlacedRow);
	void RemoveAllObjects(class UClass* ObjClass);
	void SetObjectCount(class UClass* ObjClass, int Count);
	int GetObjectCountW(class UClass* ObjClass);
	void EmptyTables();
	void EmptyTable(struct FName Table);
	void RemoveRow(struct FName Table, int Row);
	void SetRowCount(struct FName Table, int Count);
	int GetRowCount(struct FName Table);
	struct FASValue GetValue(struct FName Table, int Row, struct FName Column);
	int GetObjectIndexW(class UGFxDataRow_X* TargetObject);
	void SetASValue(struct FName Table, int Row, struct FName Column, struct FASValue& Value);
	void SetTextureValue(struct FName Table, int Row, struct FName Column, class UTexture* Value);
	void SetStringValue(struct FName Table, int Row, struct FName Column, struct FString Value);
	void SetQWordValue(struct FName Table, int Row, struct FName Column, unsigned long long Value);
	void SetFloatValue(struct FName Table, int Row, struct FName Column, float Value);
	void SetIntValue(struct FName Table, int Row, struct FName Column, int Value);
	void SetBoolValue(struct FName Table, int Row, struct FName Column, unsigned long Value);
	void SetDirty(struct FName InTableName, int RowNum, struct FName Value);
};

// Class ProjectX.GFxEngine_X
// 0x0078 (0x0118 - 0x0190)
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                   		// 0x0118 (0x0008) [0x0000000000000000]               
	TArray<class UGFxShell_X*>                         Shells;                                           		// 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FDirtyObject>                        DirtyObjects;                                     		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bAnyShellHasInput : 1;                            		// 0x0140 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned char                                      AvailableGamepadType;                             		// 0x0144 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FScriptDelegate                             __EventShellCreated__Delegate;                    		// 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;     		// 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;                		// 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXENGINE_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventOnGameSessionEnded();
	void GetFlashKey(struct FName UnrealKey, int& KeyCode, int& MouseButton);
	void UpdateHardwareMouseCursorVisibility();
	void HandleShellInputTypeChanged(class UGFxShell_X* InShell);
	void HandleGFxEnabledChanged(class UGameViewportClient* GVC);
	void HandleShellInputCaptureChanged(class UGFxShell_X* InShell);
	void FlushDirtyObjects();
	void eventTick(float DeltaTime);
	class UGFxShell_X* FindShell(class ULocalPlayer_X* ForPlayer);
	void OnShellDestroyed(class UGFxShell_X* Shell);
	void DestroyShell(class ULocalPlayer* ForPlayer);
	class UGFxShell_X* eventCreateShell();
	class UGFxShell_X* GetShell(class ULocalPlayer_X* ForPlayer);
	void SetShellArchetype(class UGFxShell_X* InShellArchetype);
	class UGFxEngine_X* GetInstance(class UClass* Type);
	void EventGameSessionEnded();
	void EventAvailableGamepadTypeChanged(class UGFxEngine_X* Engine);
	void EventShellCreated(class UGFxEngine_X* Engine, class UGFxShell_X* Shell);
};

// Class ProjectX.GFxMoviePlayer_X
// 0x0120 (0x0218 - 0x0338)
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                            		// 0x0218 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGFxDataStore_X*                             DataStore;                                        		// 0x0220 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	TArray<class UGFxDataCallback_X*>                  DataCallbacks;                                    		// 0x0228 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<class UGFxObjectReference_X*>               ActionScriptClasses;                              		// 0x0238 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 ActionScriptClassMap;                             		// 0x0248 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FString>                             CursorScenes;                                     		// 0x0298 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             InputScenes;                                      		// 0x02A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             CaptureScenes;                                    		// 0x02B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FName                                       DebugTableCallback;                               		// 0x02C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       DebugColumnCallback;                              		// 0x02D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGFxObjectReference_X*                       ShellHooksClass;                                  		// 0x02D8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<class UGFxSoundPack_X*>                     LoadedSoundPacks;                                 		// 0x02E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStarted__Delegate;                         		// 0x02F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;             		// 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXMOVIEPLAYER_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetAllowAnyPlayerInput(unsigned long bAllow);
	bool PopString(struct FString Value, TArray<struct FString>& Items);
	void SetGlobalRTCP(struct FName Key, float Value);
	void eventStopAllSounds(class UGFxSoundPack_X* SoundPack);
	void StopSound(struct FName EventName);
	void PlaySound(struct FName EventName);
	void eventPlaySoundFromTheme(struct FName EventName, struct FName SoundThemeName);
	class AActor* GetSoundSource();
	void UpdateCursorVisibility();
	void eventSetCaptureAllInput(unsigned long bNewCaptureInput, struct FString SceneName);
	void eventSetReceiveInput(unsigned long bNewReceiveInput, struct FString SceneName);
	void eventSetCursorVisible(unsigned long bVisible, struct FString SceneName);
	void InitShellHooks();
	void InitDataHooks();
	void eventOnClose();
	bool eventStart(unsigned long StartPaused);
	void EventInputCaptureChanged(class UGFxMoviePlayer_X* Player);
	void EventClosed(class UGFxMoviePlayer_X* Player);
	void EventStarted(class UGFxMoviePlayer_X* Player);
};

// Class ProjectX.GFxObjectReference_X
// 0x0030 (0x0060 - 0x0090)
class UGFxObjectReference_X : public UObject
{
public:
	int                                                Value[0xC] ;                                      		// 0x0060 (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXOBJECTREFERENCE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxDataCallback_X
// 0x0015 (0x0090 - 0x00A5)
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                            		// 0x0090 (0x0008) [0x0000000000002000] (CPF_Transient)
	int                                                Row;                                              		// 0x0098 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       Column;                                           		// 0x009C (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      Type;                                             		// 0x00A4 (0x0001) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXDATACALLBACK_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxSoundPack_X
// 0x0024 (0x0060 - 0x0084)
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                                  		// 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FSoundPackSoundRef>                  Sounds;                                           		// 0x0070 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bHasSubtitles : 1;                                		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXSOUNDPACK_X));
		}

		return uClassPointer;
	};

	bool ToggleSound(int Idx, class AActor* Target, unsigned long bPlay);
	void StopAll(class AActor* Target);
	bool StopSound(struct FName SoundName, class AActor* Target);
	bool PlaySound(struct FName SoundName, class AActor* Target);
};

// Class ProjectX.InterpComponent_X
// 0x00DB (0x009D - 0x0178)
class UInterpComponent_X : public UActorComponent
{
public:
	struct FMatrix                                     InterpStart;                                      		// 0x00A0 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FMatrix                                     InterpEnd;                                        		// 0x00E0 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FMatrix                                     InterpLocalToWorld;                               		// 0x0120 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpStartTime;                                  		// 0x0160 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              InterpEndTime;                                    		// 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<struct FAttachment>                         Attachments;                                      		// 0x0168 (0x0010) [0x0000000000680002] (CPF_Const | CPF_Component | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_INTERPCOMPONENT_X));
		}

		return uClassPointer;
	};

	void DetachComponent(class UActorComponent* Component);
	void AttachComponent(class UActorComponent* Component, struct FVector RelativeLocation, struct FRotator RelativeRotation, struct FVector RelativeScale);
};

// Class ProjectX.IReservationConnection_X
// 0x0000 (0x0060 - 0x0060)
class UIReservationConnection_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_IRESERVATIONCONNECTION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.JsonTests_X
// 0x0000 (0x0060 - 0x0060)
class UJsonTests_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_JSONTESTS_X));
		}

		return uClassPointer;
	};

	bool ToJsonAndBack(class UObject* Target);
	void RunJsonTests(int RandomSeed);
};

// Class ProjectX.LanBeacon_X
// 0x0034 (0x0070 - 0x00A4)
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    LanBeacon;                                        		// 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int                                                LanAnnouncePort;                                  		// 0x0080 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	unsigned long long                                 QueryNonce;                                       		// 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	unsigned char                                      BeaconState;                                      		// 0x0090 (0x0001) [0x0000000000000002] (CPF_Const)   
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0098 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int                                                MaxPacketSize;                                    		// 0x00A0 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANBEACON_X));
		}

		return uClassPointer;
	};

	bool BroadcastMessage(class UObject* Message);
	bool BroadcastData(TArray<unsigned char>& Data);
	void Stop();
	bool Start(unsigned char InitialState);
};

// Class ProjectX.LensFlareComponent_X
// 0x0080 (0x02BC - 0x033C)
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x02C0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FRawDistributionFloat                       AlphaOverTime;                                    		// 0x02C8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      ColorOverTime;                                    		// 0x02F0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	TArray<struct FLensFlareFloatParamCurve>           MaterialFloatParamValuesOverTime;                 		// 0x0318 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FName                                       SourceColorParamName;                             		// 0x0328 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SourceColorAlphaParamName;                        		// 0x0330 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AttachTime;                                       		// 0x0338 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LENSFLARECOMPONENT_X));
		}

		return uClassPointer;
	};

	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
};

// Class ProjectX.LinkedAccountMap_X
// 0x0050 (0x0070 - 0x00C0)
class ULinkedAccountMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                        		// 0x0070 (0x0050) [0x0000000000001000] (CPF_Native)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LINKEDACCOUNTMAP_X));
		}

		return uClassPointer;
	};

	bool Contains(struct FUniqueNetId& Key);
	void Clear(int ExpectedElements);
	void Remove(struct FUniqueNetId& Key);
	struct FUniqueNetId Get(struct FUniqueNetId& Key);
	void Set(struct FUniqueNetId& Key, struct FUniqueNetId& Value);
	int Count();
	void AllValues(int StartIndex, int MaxValues, struct FUniqueNetId& OutFriend);
};

// Class ProjectX.LocalCache_X
// 0x0080 (0x0060 - 0x00E0)
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FPointer>                            ImportTasks;                                      		// 0x0068 (0x0010) [0x0000000000103000] (CPF_Native | CPF_Transient)
	TArray<struct FCacheImportCallbackData>            ImportCallbacks;                                  		// 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPointer>                            ExportTasks;                                      		// 0x0088 (0x0010) [0x0000000000103000] (CPF_Native | CPF_Transient)
	TArray<struct FCacheExportCallbackData>            ExportCallbacks;                                  		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bDebug : 1;                                       		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FScriptDelegate                             __EventImportFinished__Delegate;                  		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventExportFinished__Delegate;                  		// 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOCALCACHE_X));
		}

		return uClassPointer;
	};

	unsigned char Flush(float TimeoutSeconds);
	bool HasActiveTasks();
	void ExportObjectAsync(class UObject* CacheObject, struct FString Path, struct FScriptDelegate Callback);
	void ImportObjectAsync(class UObject* CacheObject, struct FString Path, struct FScriptDelegate Callback);
	class UError* ImportObject(class UObject* CacheObject, struct FString Path);
	void EventExportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void EventImportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
};

// Class ProjectX.MapFlythroughProfiler_X
// 0x0058 (0x0268 - 0x02C0)
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                            		// 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnRate;                                         		// 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ProfileTime;                                      		// 0x0270 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FinishTime;                                       		// 0x0274 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Speed;                                            		// 0x0278 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FRenderProfile                              Profile;                                          		// 0x027C (0x0028) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MAPFLYTHROUGHPROFILER_X));
		}

		return uClassPointer;
	};

	void SetupPlayers();
	void eventPostBeginPlay();
	void EventFinished(class AMapFlythroughProfiler_X* Profiler);
};

// Class ProjectX.NetworkNextClient_X
// 0x0000 (0x0060 - 0x0060)
class UNetworkNextClient_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTCLIENT_X));
		}

		return uClassPointer;
	};

	void FlagSession();
	struct FNetworkNextStats GetStats();
	unsigned char GetState();
};

// Class ProjectX.NetworkNextServer_X
// 0x0000 (0x0060 - 0x0060)
class UNetworkNextServer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTSERVER_X));
		}

		return uClassPointer;
	};

	void Upgrade(class UNetConnection* Connection, struct FString SessionTag);
	bool IsEnabled();
};

// Class ProjectX.NNXErrors_X
// 0x0008 (0x0080 - 0x0088)
class UNNXErrors_X : public UErrorList
{
public:
	class UErrorType*                                  SwitchServiceMaintenance;                         		// 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NNXERRORS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineConfig_X
// 0x0018 (0x0060 - 0x0078)
class UOnlineConfig_X : public UObject
{
public:
	unsigned long                                      bAllowOnServer : 1;                               		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<struct FModifierSubscription>               AllSubscriptions;                                 		// 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINECONFIG_X));
		}

		return uClassPointer;
	};

	void UnsubscribeModifiers();
	void ModifyObjects(class UClass* ObjClass, struct FScriptDelegate ApplyCallback, struct FScriptDelegate ResetCallback);
	void Undo();
	void Apply();
};

// Class ProjectX.BeaconConfig_X
// 0x0018 (0x0078 - 0x0090)
class UBeaconConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bUdpPingRegions : 1;                              		// 0x0078 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      bUdpPingMetrics : 1;                              		// 0x0078 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	int                                                MaxPingsPerAddress;                               		// 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                MaxPingsWindowSeconds;                            		// 0x0080 (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                StatsLogDelaySeconds;                             		// 0x0084 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WaitForPongSeconds;                               		// 0x0088 (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                PingsPerSecond;                                   		// 0x008C (0x0004) [0x0000000000004000] (CPF_Config)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BEACONCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ContentConfig_X
// 0x0010 (0x0078 - 0x0088)
class UContentConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FContentPair>                        ContentMap;                                       		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CONTENTCONFIG_X));
		}

		return uClassPointer;
	};

	void Undo();
	void Apply();
	bool IsEncryptionKeySetAtIndex(struct FEncryptedKeyIndex KeyIndex);
	bool EncryptedKeyIndexIsValid(struct FEncryptedKeyIndex KeyIndex);
	struct FEncryptedKeyIndex FindKeyIndex(struct FName ContentKeyName);
	void UndoNative();
	void ApplyNative();
};

// Class ProjectX.CrossplayConfig_X
// 0x0020 (0x0078 - 0x0098)
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FCrossplayGroup>                     Groups;                                           		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FCrossplayGroup>                     DisabledCrossplayGroups;                          		// 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CROSSPLAYCONFIG_X));
		}

		return uClassPointer;
	};

	bool CanInteractWithCrossplayDisabled(unsigned char Platform1, unsigned char Platform2);
	TArray<unsigned char> GetDisabledCrossplayGroup(unsigned char PlayerPlatform);
	bool PlatformsShareGroup(unsigned char Platform1, unsigned char Platform2);
};

// Class ProjectX.EventRecorderConfig_X
// 0x002C (0x0078 - 0x00A4)
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSeparatePlayerIDs : 1;                           		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bExcludePlayerIDs : 1;                            		// 0x0078 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	TArray<struct FName>                               DisabledEvents;                                   		// 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UClass*                                      EventRecorderClass;                               		// 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PlayerNetMetricsPeriod;                           		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                MaxUnstableConnections;                           		// 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                UnstableConnectionsTimePeriodSeconds;             		// 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EVENTRECORDERCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.LocalizationConfig_X
// 0x0010 (0x0078 - 0x0088)
class ULocalizationConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FLocOverride>                        Overrides;                                        		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOCALIZATIONCONFIG_X));
		}

		return uClassPointer;
	};

	void Apply();
};

// Class ProjectX.NetworkNextConfig_X
// 0x002C (0x0078 - 0x00A4)
class UNetworkNextConfig_X : public UOnlineConfig_X
{
public:
	float                                              ClientLibraryProbability;                         		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ClientDriverProbability;                          		// 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ServerLibraryProbability;                         		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SessionProbability;                               		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FString>                             UserCountryCodes;                                 		// 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                SocketSendBufferBytes;                            		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                SocketReceiveBufferBytes;                         		// 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bEnableDocsisTagging : 1;                         		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTCONFIG_X));
		}

		return uClassPointer;
	};

	void Undo();
	void Apply();
};

// Class ProjectX.PsyNetConfig_X
// 0x0014 (0x0078 - 0x008C)
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bAllowPerCon : 1;                                 		// 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	unsigned long                                      bRequiresPerCon : 1;                              		// 0x0078 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	unsigned long                                      bAllowPsyNetParty : 1;                            		// 0x0078 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bSendPingMessage : 1;                             		// 0x0078 (0x0004) [0x0000000000004001] [0x00000008] (CPF_Edit | CPF_Config)
	unsigned long                                      bUploadServerBugReports : 1;                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      bAllowServerBacktraceUploads : 1;                 		// 0x0078 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bAllowServerBacktraceLogUploads : 1;              		// 0x0078 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      bAllowClientBacktraceUploads : 1;                 		// 0x0078 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      bAllowClientBacktraceLogUploads : 1;              		// 0x0078 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      bUseMatchmakingNotifications : 1;                 		// 0x0078 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      bUsePsyNetBeacon : 1;                             		// 0x0078 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      bUseReservationsV3 : 1;                           		// 0x0078 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      bAllowPlayerCancelMatch : 1;                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	float                                              PerConTimeout;                                    		// 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              PerConPingInterval;                               		// 0x0080 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              FreshConnectionWindow;                            		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MatchmakingHeartbeatTimeSeconds;                  		// 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetRetryConfig_X
// 0x0030 (0x0078 - 0x00A8)
class UPsyNetRetryConfig_X : public UOnlineConfig_X
{
public:
	TArray<class URetryDelay_X*>                       RetryDelays;                                      		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URetryPolicy_X*>                      RetryPolicies;                                    		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URetryPolicy_X*>                      ReAuthPolicies;                                   		// 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETRETRYCONFIG_X));
		}

		return uClassPointer;
	};

	class URetryDelay_X* FindReAuthDelay(struct FString Service, struct FName Error);
	class URetryDelay_X* FindRetryDelay(struct FString Service, struct FName Error);
	class URetryPolicy_X* FindReAuthPolicy(struct FString Service, struct FName Error);
	class URetryPolicy_X* FindRetryPolicy(struct FString Service, struct FName Error);
};

// Class ProjectX.RPCConfig_X
// 0x0024 (0x0078 - 0x009C)
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UClass*>                              DisabledClasses;                                  		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FString>                             DisabledServices;                                 		// 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                MaxRPCsPerBatch;                                  		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPCCONFIG_X));
		}

		return uClassPointer;
	};

	bool IsRPCDisabled(class URPC_X* RPC);
};

// Class ProjectX.ServerConfig_X
// 0x0024 (0x0078 - 0x009C)
class UServerConfig_X : public UOnlineConfig_X
{
public:
	float                                              HeartbeatSeconds;                                 		// 0x0078 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              HeartbeatRetrySeconds;                            		// 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	unsigned long                                      bUploadLogFiles : 1;                              		// 0x0080 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	unsigned long                                      bUploadReplays : 1;                               		// 0x0080 (0x0004) [0x0000000000004001] [0x00000002] (CPF_Edit | CPF_Config)
	unsigned long                                      bFlatbufferRecordInput : 1;                       		// 0x0080 (0x0004) [0x0000000000004001] [0x00000004] (CPF_Edit | CPF_Config)
	int                                                MaxUploadLogFileSize;                             		// 0x0084 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              NetServerMaxTickRate;                             		// 0x0088 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              IdleNetServerMaxTickRate;                         		// 0x008C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              FlatbufferChance;                                 		// 0x0090 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	int                                                FlatbufferMaxRecordSizeMB;                        		// 0x0094 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	int                                                FlatbufferPacketSendRate;                         		// 0x0098 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SERVERCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineFriendMap_X
// 0x0050 (0x0070 - 0x00C0)
class UOnlineFriendMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                        		// 0x0070 (0x0050) [0x0000000000001000] (CPF_Native)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEFRIENDMAP_X));
		}

		return uClassPointer;
	};

	void ValueArray(TArray<struct FOnlineFriend>& OutArray);
	void AppendArray(TArray<struct FOnlineFriend>& InArray);
	void CopyArray(TArray<struct FOnlineFriend>& InArray);
	bool Contains(struct FUniqueNetId& Key);
	void Clear(int ExpectedElements);
	void Remove(struct FUniqueNetId& Key);
	bool TryGet(struct FUniqueNetId& Key, struct FOnlineFriend& OutValue);
	void Set(struct FUniqueNetId& Key, struct FOnlineFriend& Value);
	int Count();
	void AllValues(int StartIndex, int MaxValues, struct FOnlineFriend& OutFriend);
};

// Class ProjectX.OnlineGameSearch_X
// 0x0044 (0x0154 - 0x0198)
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	TArray<struct FString>                             InclusiveGameTagsArray;                           		// 0x0158 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             ExclusiveGameTagsArray;                           		// 0x0168 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MapName;                                          		// 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     GameTagsDelimiter;                                		// 0x0188 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMESEARCH_X));
		}

		return uClassPointer;
	};

	bool GetStringProperty(int PropertyId, struct FString& Value);
	struct FString eventGetExclusiveGameTags();
	struct FString eventGetInclusiveGameTags();
	void SetMap(struct FString inMapName);
	void SetExclusiveGameTags(TArray<struct FString> inGameTagsArray);
	void SetInclusiveGameTags(TArray<struct FString> inGameTagsArray);
};

// Class ProjectX.OnlineGameSettings_X
// 0x0048 (0x00A0 - 0x00E8)
class UOnlineGameSettings_X : public USettings
{
public:
	int                                                NumPublicConnections;                             		// 0x00A0 (0x0004) [0x0000000000000000]               
	int                                                NumOpenPublicConnections;                         		// 0x00A4 (0x0004) [0x0000000000000000]               
	TArray<class UGameSettingCategory_X*>              GameSettingCategories;                            		// 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bOffline : 1;                                     		// 0x00B8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	int                                                MinimumPlayersRequired;                           		// 0x00BC (0x0004) [0x0000000000000000]               
	int                                                NumSecondsWaitingForPlayers;                      		// 0x00C0 (0x0004) [0x0000000000000000]               
	int                                                SearchScore;                                      		// 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              LogTime;                                          		// 0x00C8 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;               		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMESETTINGS_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool Equals(class UOnlineGameSettings_X* OtherGameSettings);
	void CalculateMinAndMaxNumPlayers();
	void CopyFrom(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingPlaylist_X* GetPlaylist();
	bool IsValid();
	void RemoveMismatchedTags(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingCategory_X* GetGameSettingCategoryByName(struct FName CategoryName);
	void SetIntProperty(int PropertyId, int Value);
	void SetGameTag(struct FName NewGameTag);
	void UpdateFromURL(class AGameInfo* Game, struct FString& URL);
	bool HasSetting(struct FName SettingName);
	void GetActiveGameSettings(TArray<class UGameSetting_X*>& GameSettings);
	class UGameSetting_X* GetGameSetting(struct FString SettingName, class UGameSettingCategory_X*& Category);
	struct FString GetGameTags();
	bool GetStringProperty(int PropertyId, struct FString& Value);
	void Init();
	void EventNumPlayersUpdated(class UOnlineGameSettings_X* GameSettings, int NewMinimumPlayersRequired);
};

// Class ProjectX.OnlineLegalText_X
// 0x0040 (0x0070 - 0x00B0)
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                           		// 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UCachedWebData_X*                            CachedData;                                       		// 0x0080 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     AppendedPath;                                     		// 0x0088 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNewText__Delegate;                         		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINELEGALTEXT_X));
		}

		return uClassPointer;
	};

	void __OnlineLegalText_X__Sync_B905BAE5464DFB02CA941C9388F6B0DA(class UUrlConfig_X* UrlConfig);
	void HandleWebText(class UCachedWebData_X* InCachedData);
	struct FString GetWebUrl(class UUrlConfig_X* UrlConfig);
	struct FString GetPlatformString();
	struct FString GetRelativeUrl(unsigned long bUseAppendedPath);
	struct FString eventGetFileSystemUrl();
	struct FString GetText();
	void Sync(struct FString InAppendPath);
	void EventNewText(class UOnlineLegalText_X* Text);
};

// Class ProjectX.OnlineMessage_X
// 0x0000 (0x0060 - 0x0060)
class UOnlineMessage_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineMessageComponent_X
// 0x0038 (0x0070 - 0x00A8)
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                       		// 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UCompression_X*                              Compressor;                                       		// 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FOnlineMessageHandler>               MessageHandlers;                                  		// 0x0080 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;              		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEMESSAGECOMPONENT_X));
		}

		return uClassPointer;
	};

	class UOnlineMessageComponent_X* EnableCompression(unsigned long bEnabled);
	class UOnlineMessageComponent_X* SetSerializer(class USerializer_X* InSerializer);
	void InvokeHandlers(class UObject* Message);
	class UObject* DeserializeMessage(class UObject* MessageOuter, TArray<unsigned char>& Data);
	bool SerializeMessage(class UObject* Message, TArray<unsigned char>& OutData);
	class UOnlineMessage_X* CreateMessage(class UClass* MessageClass, class UObject* MessageOuter);
	void RemoveMessageHandler(struct FScriptDelegate Callback);
	void AddMessageHandler(class UClass* MessageClass, struct FScriptDelegate Callback);
	void MessageReceivedDelegate(class UOnlineMessageComponent_X* Component, class UObject* Message);
};

// Class ProjectX.ParameterDispenser_X
// 0x0068 (0x0070 - 0x00D8)
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FNameParamPair>                      NameParams;                                       		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FFloatParamPair>                     FloatParams;                                      		// 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FVectorParamPair>                    VectorParams;                                     		// 0x0098 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FColorParamPair>                     ColorParams;                                      		// 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FActorParamPair>                     ActorParams;                                      		// 0x00B8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UISetParameter*>                      AllComponents;                                    		// 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARAMETERDISPENSER_X));
		}

		return uClassPointer;
	};

	void Inherit(class UParameterDispenser_X* Other);
	void ResetMaterials();
	void ApplyAllParameters(class UISetParameter* ActorComp);
	class AActor* GetActorParameter(struct FName Key);
	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
	void RemoveComponent(class UISetParameter* ActorComp);
	void AddComponent(class UISetParameter* ActorComp);
};

// Class ProjectX.ParticleModuleBeamTarget_X
// 0x0004 (0x010C - 0x0110)
class UParticleModuleBeamTarget_X : public UParticleModuleBeamTarget
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTICLEMODULEBEAMTARGET_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleLocationBoneSocket_X
// 0x0004 (0x00AC - 0x00B0)
class UParticleModuleLocationBoneSocket_X : public UParticleModuleLocationBoneSocket
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTICLEMODULELOCATIONBONESOCKET_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleLocationSkelVertSurface_X
// 0x0000 (0x00D0 - 0x00D0)
class UParticleModuleLocationSkelVertSurface_X : public UParticleModuleLocationSkelVertSurface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTICLEMODULELOCATIONSKELVERTSURFACE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0034 (0x0074 - 0x00A8)
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	struct FName                                       MeshActorParamName;                               		// 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       VelocityMultiplier;                               		// 0x0080 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTICLEMODULEVELOCITYSURFACENORMAL_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (0x00A8 - 0x00A8)
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTICLEMODULEVELOCITYSURFACENORMALSTATIC_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleWind_X
// 0x0050 (0x0070 - 0x00C0)
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                            		// 0x0070 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       AccelerationOverLife;                             		// 0x0098 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTICLEMODULEWIND_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Pawn_X
// 0x0044 (0x0514 - 0x0558)
class APawn_X : public APawn
{
public:
	float                                              GravityScale;                                     		// 0x0518 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 PreviousController;                               		// 0x0520 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                         		// 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PAWN_X));
		}

		return uClassPointer;
	};

	bool eventIsSameTeam(class APawn* Other);
	void eventDestroyed();
	float GetGravityZ();
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void OnControllerChanged();
	void PossessedBy(class AController* C);
	void UpdateControllerRef();
	void eventReplicatedEvent(struct FName VarName);
	void EventAnimEnd(class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode);
	void EventDestroyed(class APawn_X* Pawn);
};

// Class ProjectX.PerCon_X
// 0x0038 (0x0060 - 0x0098)
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FString                                     URL;                                              		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Status;                                           		// 0x0078 (0x0001) [0x0000000000000000]               
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                   		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PERCON_X));
		}

		return uClassPointer;
	};

	bool UseWebSocket(unsigned long bRpcWebSocket);
	void HandleConfigChanged();
	void SetStatus(unsigned char InStatus);
	void SetEnabled(unsigned long bEnable);
	void EventStatusChanged(class UPerCon_X* PerCon);
};

// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (0x0060 - 0x0068)
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                      		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PHYSICALMATERIALPROPERTY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlayerInput_X
// 0x0180 (0x02F8 - 0x0478)
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                                  		// 0x02F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FGamepadDeadzoneSettings>            GamepadDeadzones;                                 		// 0x0300 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              KeyboardAxisBlendTime;                            		// 0x0310 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FKeyboardAxisBlendSettings>          KeyboardAxisBlendTimes;                           		// 0x0318 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FName                                       CurrentKey;                                       		// 0x0328 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       ActiveDPadButton;                                 		// 0x0330 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       LastDoubleTapKey;                                 		// 0x0338 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<struct FName>                               DisabledActions;                                  		// 0x0340 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FName>                               DisabledActionsUntilNextUse;                      		// 0x0350 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FBindingAction>                      Actions;                                          		// 0x0360 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UControlPreset_X*                            ControlPreset;                                    		// 0x0370 (0x0008) [0x0000000000000000]               
	TArray<struct FPlayerBinding>                      PCBindings;                                       		// 0x0378 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                  		// 0x0388 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      SteamInputBindings;                               		// 0x0398 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              TapTime;                                          		// 0x03A8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoubleTapTime;                                    		// 0x03AC (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FPointer>                            HeldBindings;                                     		// 0x03B0 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bDebugInput : 1;                                  		// 0x03C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bAbsorbCurrentKeyPress : 1;                       		// 0x03C0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	unsigned char                                      UnknownData00[0x50];                              		// 0x03C8 (0x0050) UNKNOWN PROPERTY: MapProperty ProjectX.PlayerInput_X.RawAxisValues
	struct FScriptDelegate                             __EventActionToggled__Delegate;                   		// 0x0418 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBindingsChanged__Delegate;                 		// 0x0430 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSetBindingsToUserBindings__Delegate;       		// 0x0448 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInitialized__Delegate;                     		// 0x0460 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLAYERINPUT_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FName GetKeyForActionArray(struct FName Action, TArray<struct FPlayerBinding>& PlayerBindings);
	void AbsorbCurrentKeyPress();
	void SetBindings(TArray<struct FPlayerBinding>& PC, TArray<struct FPlayerBinding>& Gamepad);
	void ClearDisableActionUntilNextUseList();
	void DisableActionUntilNextUse(struct FName ActionName);
	void ClearDisabledActions();
	void RemoveFromDisabledActions(struct FName ActionName);
	void AddToDisabledActions(struct FName ActionName);
	void ReleaseKey(struct FName Key, unsigned long bTriggerEvents);
	struct FString GetUIKey(struct FName KeyName);
	void ShutdownInputSystem();
	void InitInputSystem();
	void ResetInput();
	float GetRawSplitAxisValue(struct FName AxisNegative, struct FName AxisPositive);
	float GetRawAxisValue(struct FName AxisName);
	class UControlPreset_X* GetControlPreset(struct FName PresetName);
	void SetControlPreset(struct FName PresetName);
	void ResetActiveBindingsToProfileBindings();
	void ResetBindingsToDefault();
	void EventInitialized(class UPlayerInput_X* PlayerInput);
	void EventSetBindingsToUserBindings(class UPlayerInput_X* PlayerInput);
	void EventBindingsChanged(class UPlayerInput_X* PlayerInput);
	void EventActionToggled(class UPlayerInput_X* PlayerInput, struct FName ActionName, unsigned long bEnabled);
};

// Class ProjectX.PointLightComponent_X
// 0x0010 (0x0264 - 0x0274)
class UPointLightComponent_X : public UPointLightComponent
{
public:
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                               		// 0x0268 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              AttachTime;                                       		// 0x0270 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_POINTLIGHTCOMPONENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNet_X
// 0x00F0 (0x0060 - 0x0150)
class UPsyNet_X : public UObject
{
public:
	unsigned char                                      Environment;                                      		// 0x0060 (0x0001) [0x0000000000002000] (CPF_Transient)
	struct FString                                     EnvironmentName;                                  		// 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPsyNetKeys                                 Keys;                                             		// 0x0078 (0x0030) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UStringMap*                                  Headers;                                          		// 0x00A8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetServiceSubscriptions_X*               Services;                                         		// 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetConnection_X*                         PrimaryEnabledConnection;                         		// 0x00B8 (0x0008) [0x0000000000000000]               
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                          		// 0x00C0 (0x0008) [0x0000000000000000]               
	class UPsyNetConnection_X*                         AnonymousConnection;                              		// 0x00C8 (0x0008) [0x0000000000000000]               
	float                                              LastReportCheaterTime;                            		// 0x00D0 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUsePsynetEnvironment : 1;                        		// 0x00D4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	struct FScriptDelegate                             __EventPrimaryConnectionEnabled__Delegate;        		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryConnectionDisabled__Delegate;       		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;           		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;          		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCheaterReported__Delegate;                 		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNET_X));
		}

		return uClassPointer;
	};

	void ReportCheater(struct FUniqueNetId Id, struct FString Reason);
	struct FString AssignQWordToString(unsigned long long Q);
	unsigned long long AssignStringToQWord(struct FString S);
	float GetRetryDelay(int Failures, TArray<float> Delays);
	void eventConnectionChangedIP(struct FUniqueNetId PlayerID);
	void eventNetworkError(struct FUniqueNetId PlayerID, struct FString Reason);
	void InitHeaders();
	void NotifyWhenLoggedIn(struct FScriptDelegate LoginCallback, struct FScriptDelegate LogoutCallback);
	void NotifyWhenPrimaryConnectionEnabled(struct FScriptDelegate EnabledCallback, struct FScriptDelegate DisabledCallback);
	void SetPrimaryAuthedConnection(class UPsyNetConnection_X* Connection);
	void SetPrimaryEnabledConnection(class UPsyNetConnection_X* Connection);
	void HandleConnectionChanged(class UPsyNetConnection_X* Connection);
	class UPsyNetConnection_X* GetPrimaryConnection();
	void HandleServiceExecuted(class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service);
	void eventInit();
	void Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	class UPsyNet_X* GetInstance();
	void EventCheaterReported();
	void EventPrimaryPlayerLoggedOut();
	void EventPrimaryPlayerLoggedIn();
	void EventPrimaryConnectionDisabled();
	void EventPrimaryConnectionEnabled();
};

// Class ProjectX.PsyNetBeaconConnection_X
// 0x002C (0x0060 - 0x008C)
class UPsyNetBeaconConnection_X : public UObject
{
public:
	struct FPointer                                    VfTable_IIReservationConnection_X;                		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     ReservationID;                                    		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ConnectionID;                                     		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeoutTime;                                      		// 0x0088 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETBEACONCONNECTION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetClientService_X
// 0x0030 (0x0060 - 0x0090)
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                          		// 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int                                                Version;                                          		// 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UError*                                      Error;                                            		// 0x0078 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetConnection_X*                         Connection;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
	unsigned long long                                 Expiration;                                       		// 0x0088 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETCLIENTSERVICE_X));
		}

		return uClassPointer;
	};

	void Execute();
	void SetError(class UError* InError);
};

// Class ProjectX.PsyNetClientServiceCollection_X
// 0x0010 (0x0060 - 0x0070)
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray<class UPsyNetClientService_X*>              ServiceArchetypes;                                		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETCLIENTSERVICECOLLECTION_X));
		}

		return uClassPointer;
	};

	class UPsyNetClientService_X* GetServiceArchetype(struct FString ServiceName, int Version);
	void CollectServiceArchetypes();
	void eventConstruct();
};

// Class ProjectX.PsyNetConnection_X
// 0x0170 (0x0060 - 0x01D0)
class UPsyNetConnection_X : public UObject
{
public:
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0068 (0x0008) [0x0000000000000000]               
	class UPsyNetConfig_X*                             Config;                                           		// 0x0070 (0x0008) [0x0000000000000000]               
	class UPsyNetRetryConfig_X*                        RetryConfig;                                      		// 0x0078 (0x0008) [0x0000000000000000]               
	class UPsyNetUrl_X*                                URL;                                              		// 0x0080 (0x0008) [0x0000000000000000]               
	class UStringMap*                                  Headers;                                          		// 0x0088 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetRequestQue_X*                         RequestQue;                                       		// 0x0090 (0x0008) [0x0000000000000000]               
	class URPCQueue_X*                                 RPCQueue;                                         		// 0x0098 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetServiceProvider_X*                    ServiceProvider;                                  		// 0x00A0 (0x0008) [0x0000000000000000]               
	class UPsyNetMessengerHttp_X*                      HttpMessenger;                                    		// 0x00A8 (0x0008) [0x0000000000000000]               
	class UPsyNetMessengerWebSocket_X*                 PerConMessenger;                                  		// 0x00B0 (0x0008) [0x0000000000000000]               
	class UPerCon_X*                                   PerCon;                                           		// 0x00B8 (0x0008) [0x0000000000000000]               
	class UPerConMetrics_X*                            PerConMetrics;                                    		// 0x00C0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bAuthorized : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bConnected : 1;                                   		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFreshConnection : 1;                             		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPerConConnected : 1;                             		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              ConnectedChangeTime;                              		// 0x00CC (0x0004) [0x0000000000000000]               
	class UError*                                      DisabledError;                                    		// 0x00D0 (0x0008) [0x0000000000000000]               
	TArray<class UError*>                              DisabledErrorStack;                               		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UError*                                      MaintenanceError;                                 		// 0x00E8 (0x0008) [0x0000000000000000]               
	class UError*                                      DuplicateLoginError;                              		// 0x00F0 (0x0008) [0x0000000000000000]               
	class UError*                                      NoInternetError;                                  		// 0x00F8 (0x0008) [0x0000000000000000]               
	class UError*                                      NoUrlError;                                       		// 0x0100 (0x0008) [0x0000000000000000]               
	class UError*                                      AuthDisabledError;                                		// 0x0108 (0x0008) [0x0000000000000000]               
	TArray<float>                                      AuthRetryDelays;                                  		// 0x0110 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                ConsecutiveAuthFailures;                          		// 0x0120 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x0140 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnectFailed__Delegate;                   		// 0x0158 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConConnected__Delegate;                 		// 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;              		// 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEnabled__Delegate;                         		// 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisabled__Delegate;                        		// 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETCONNECTION_X));
		}

		return uClassPointer;
	};

	void eventSendPingMessage();
	void WatchPerConConnection(struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected);
	void StopWatchConnection(struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected);
	void WatchConnection(struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected);
	void WatchEnabled(struct FScriptDelegate OnEnabled, struct FScriptDelegate OnDisabled);
	void eventDispose();
	void UpdateLinkConnection(unsigned long bHasConnection);
	void ClearDuplicateLoginError();
	void OnDuplicateLogin();
	void HandleDuplicateLoginMessage(class UPsyNetClientService_X* Service);
	void HandleWebSocketDisconnect(class UPsyNetMessengerWebSocket_X* WS, int Code, struct FString Reason);
	void HandleWebSocketConnect(class UPsyNetMessengerWebSocket_X* WS);
	void HandleWebSocketStartConnectFail(class UPsyNetMessengerWebSocket_X* WS);
	void UpdateConnectionState();
	void ClearAuthDisabledError();
	void SetAuthDisabledError(class UError* Error);
	void ConditionalSetAuthRetryDelay(struct FString Service, class UError* Error);
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error);
	bool IsEnabled();
	void UpdateDisabledError(class UErrorType* Type, unsigned long bIsError, class UError*& Error);
	void eventAddDisabledError(class UError* Error);
	void RemoveDisabledError(class UError* Error);
	unsigned char Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	bool ProcessServiceCall(class UPsyNetMessage_X* Message);
	void ProcessMessage(class UPsyNetMessage_X* Message);
	void UpdatePsyTime(class UPsyNetMessage_X* Message);
	void ReceiveMessage(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetMessage_X* SendRequest(class UPsyNetMessage_X* Request);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void RemoveHeader(struct FString Key);
	void SetHeader(struct FString Key, struct FString Value);
	void SetAuthorized(unsigned long bAuth);
	class UStringMap* BuildHandshakeHeaders();
	class UPsyNetMessenger_X* eventGetMessenger();
	void CreatePerConMessenger();
	void CreateHttpMessenger(struct FString InURL);
	void KillPerConMessenger();
	void KillHttpMessenger();
	void KillMessengers();
	void CreateMessengers();
	void InitMessengers();
	void InitServiceProvider();
	void HandlePerConStatusChanged(class UPerCon_X* P);
	void InitPerCon();
	void InitRPCQueue();
	void InitRequestQue();
	void InitHeaders();
	void UpdateNoUrlError();
	void HandleUrlChanged();
	struct FString GetPsyNetURL();
	void eventConstruct();
	void EventDisabled(class UPsyNetConnection_X* Connection);
	void EventEnabled(class UPsyNetConnection_X* Connection);
	void EventPerConDisconnected(class UPsyNetConnection_X* Connection);
	void EventPerConConnected(class UPsyNetConnection_X* Connection);
	void EventConnectFailed(class UPsyNetConnection_X* Connection);
	void EventDisconnected(class UPsyNetConnection_X* Connection);
	void EventConnected(class UPsyNetConnection_X* Connection);
};

// Class ProjectX.PsyNetErrorType_X
// 0x0000 (0x0070 - 0x0070)
class UPsyNetErrorType_X : public UErrorType
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETERRORTYPE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetMessage_X
// 0x0018 (0x0060 - 0x0078)
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                          		// 0x0060 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<unsigned char>                              Body;                                             		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETMESSAGE_X));
		}

		return uClassPointer;
	};

	struct FString GetBodyText();
	void SetBodyText(struct FString Value);
	void SetBody(TArray<unsigned char>& Value);
};

// Class ProjectX.PsyNetMessenger_X
// 0x0018 (0x0060 - 0x0078)
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                 		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETMESSENGER_X));
		}

		return uClassPointer;
	};

	void eventDispose();
	void EventMessageReceived(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Connect();
};

// Class ProjectX.PsyNetMessengerHttp_X
// 0x0010 (0x0078 - 0x0088)
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                              		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETMESSENGERHTTP_X));
		}

		return uClassPointer;
	};

	void CopyHeadersToMessage(class UWebRequest_X* From, class UPsyNetMessage_X* To);
	void CopyHeadersToRequest(class UPsyNetMessage_X* From, class UWebRequest_X* To);
	void HandleWebRequestComplete(struct FString PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
};

// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x00B8 (0x0078 - 0x0130)
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                               		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStringMap*                                  HandshakeHeaders;                                 		// 0x0080 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     URL;                                              		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebSocketConnection_X*                      Connection;                                       		// 0x0098 (0x0008) [0x0000000000000000]               
	TArray<struct FQueuedPsyNetMessage>                QueuedMessages;                                   		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                     		// 0x00B0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventStartConnect__Delegate;                    		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;                		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;          		// 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETMESSENGERWEBSOCKET_X));
		}

		return uClassPointer;
	};

	void __PsyNetMessengerWebSocket_X__SendQueuedMessages_E508CB9749C5D34F001E75873C49ACC3(struct FQueuedPsyNetMessage QueuedMessage);
	void eventDispose();
	void HandleReceivedBunch(class UTcpConnection* C);
	void SerializeMessage(class UPsyNetMessage_X* Message);
	void FailQueuedMessages(class UError* Error);
	void TimeoutQueuedMessages();
	void SendMessageWithTask(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void SendQueuedMessages();
	void QueueMessage(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void StripHandshakeHeaders(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void HandleDisconnected(class UWebSocketConnection_X* InConnection);
	void HandleConnected(class UWebSocketConnection_X* InConnection);
	void Disconnect();
	void Connect();
	bool IsConnected();
	void Init(struct FString InURL, class UStringMap* InHandshakeHeaders);
	void EventInvalidMessageReceived(class UPsyNetMessengerWebSocket_X* Messenger, struct FString MessageSubstring);
	void EventDisconnected(class UPsyNetMessengerWebSocket_X* Messenger, int Code, struct FString Reason);
	void EventConnected(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnectFail(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnect(class UPsyNetMessengerWebSocket_X* Messenger);
};

// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (0x0060 - 0x0060)
class UPsyNetServiceSerializer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICESERIALIZER_X));
		}

		return uClassPointer;
	};

	struct FString SerializeResponse(class UPsyNetClientService_X* Service);
	void DeserializeRequest(struct FString JSON, class UPsyNetClientService_X* Service);
};

// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x0010 (0x0070 - 0x0080)
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray<struct FServiceSubscription>                Subscriptions;                                    		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICESUBSCRIPTIONS_X));
		}

		return uClassPointer;
	};

	void NotifyServiceExecuted(class UPsyNetClientService_X* Service);
	void UnsubscribeAll(class UObject* Listener);
	void Unsubscribe(struct FScriptDelegate Callback);
	void Subscribe(class UClass* ServiceClass, struct FScriptDelegate Callback);
};

// Class ProjectX.PsyNetStaticData_X
// 0x00C8 (0x0070 - 0x0138)
class UPsyNetStaticData_X : public UComponent
{
public:
	struct FString                                     PsyConfigTemplateURL;                             		// 0x0070 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	float                                              LocalCacheTimeoutSeconds;                         		// 0x0080 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              SyncDataTimeoutSeconds;                           		// 0x0084 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class UPsyNet_X*                                   PsyNet;                                           		// 0x0088 (0x0008) [0x0000000000000000]               
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0090 (0x0008) [0x0000000000000000]               
	class UWebConfig_X*                                WebConfig;                                        		// 0x0098 (0x0008) [0x0000000000000000]               
	unsigned long                                      bDebug : 1;                                       		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bLoaded : 1;                                      		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bBlockingSync : 1;                                		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	class UCacheTimer_X*                               CacheTimer;                                       		// 0x00A8 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineResource_X*                           WebData;                                          		// 0x00B0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UObject*>                             DefaultObjects;                                   		// 0x00B8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UObject*>                             DownloadedObjects;                                		// 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UObject*>                             RegisteredObjects;                                		// 0x00D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UStopwatch*                                  SyncDataStopwatch;                                		// 0x00E8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     PsyConfigQueryParams;                             		// 0x00F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PsyConfigSecret;                                  		// 0x0100 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     PsyConfigAltEnv;                                  		// 0x0110 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoaded__Delegate;                          		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSTATICDATA_X));
		}

		return uClassPointer;
	};

	void __PsyNetStaticData_X__Init_89C8F1E4401250A8443023876E59FDC1(class UObject* _);
	void __PsyNetStaticData_X__Init_D0822CFB41662C11D35415A03CE92028(class UObject* _);
	void __PsyNetStaticData_X__Init_88B6916D43C60B6232FDF49476124EC6();
	void __PsyNetStaticData_X__HandleGetURL_22BB1E6444AF4892FC6F8C8F744E2039(class UOnlineResource_X* _);
	class UPsyNetStaticDataMetrics_X* GetMetrics();
	void UpdateRegisteredObjects();
	bool LoadFromUTF8(TArray<unsigned char>& SignedData);
	bool LoadFromSignedUTF8WithSignature(struct FString Signature, TArray<unsigned char>& SignedData);
	bool LoadFromSignedUTF8(TArray<unsigned char>& SignedData);
	void InstantiateObjects();
	void HandleDataChanged(class UOnlineResource_X* Resource);
	struct FString GetPlatform();
	struct FString GetPsyConfigUrl(struct FString Template);
	void HandleGetURL(struct FString URL);
	void Sync();
	void HandleCacheExpired(class UCacheTimer_X* Timer);
	void UpdateLinkConnection(unsigned long bHasConnection);
	void UpdateCacheTimerEnabled();
	bool ShouldEnableCacheTimer();
	void HandleWebConfigChanged();
	void AddQueryParam(struct FString Param);
	void eventInit();
	void EventLoaded(class UPsyNetStaticData_X* Data);
};

// Class ProjectX.PsyNetUrl_X
// 0x0018 (0x0060 - 0x0078)
class UPsyNetUrl_X : public UObject
{
public:
	unsigned long                                      bUseSubsystemURL : 1;                             		// 0x0060 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	struct FString                                     URL;                                              		// 0x0068 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETURL_X));
		}

		return uClassPointer;
	};

	struct FString GetURL(unsigned char Environment);
};

// Class ProjectX.RadialBlurComponent_X
// 0x0008 (0x0110 - 0x0118)
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                         		// 0x0110 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeFalloff;                                      		// 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RADIALBLURCOMPONENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RandomStream_X
// 0x0008 (0x0060 - 0x0068)
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                           		// 0x0060 (0x0004) [0x0000000000001000] (CPF_Native)  
	int                                                CurrentSeed;                                      		// 0x0064 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RANDOMSTREAM_X));
		}

		return uClassPointer;
	};

	void SetCurrentSeed(int NewSeed);
	float GetNextValue();
};

// Class ProjectX.RenderProfiler_X
// 0x0040 (0x0268 - 0x02A8)
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                                 		// 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPrimitiveComponentProfile>          PrimitiveProfiles;                                		// 0x0270 (0x0010) [0x0000000000482000] (CPF_Transient | CPF_Component | CPF_NeedCtorLink)
	int                                                CurrentIndex;                                     		// 0x0280 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bInclusive : 1;                                   		// 0x0284 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              PrimitiveTime;                                    		// 0x0288 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RENDERPROFILER_X));
		}

		return uClassPointer;
	};

	void SetupPlayers();
	void eventPostBeginPlay();
	void EventFinished(class ARenderProfiler_X* Profiler);
};

// Class ProjectX.RetryDelay_X
// 0x0018 (0x0060 - 0x0078)
class URetryDelay_X : public UObject
{
public:
	struct FName                                       Id;                                               		// 0x0060 (0x0008) [0x0000000000000000]               
	TArray<float>                                      DelaySeconds;                                     		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RETRYDELAY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RetryPolicy_X
// 0x0028 (0x0060 - 0x0088)
class URetryPolicy_X : public UObject
{
public:
	TArray<struct FName>                               Errors;                                           		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       RetryDelay;                                       		// 0x0070 (0x0008) [0x0000000000000000]               
	TArray<struct FString>                             Services;                                         		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RETRYPOLICY_X));
		}

		return uClassPointer;
	};

	bool AppliesTo(struct FString Service, struct FName Error);
};

// Class ProjectX.RPC_X
// 0x0088 (0x0060 - 0x00E8)
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                          		// 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int                                                Version;                                          		// 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ServiceFailRetryDelay;                            		// 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bAllowBatching : 1;                               		// 0x0078 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bRequiresAuth : 1;                                		// 0x0078 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	unsigned long                                      bDisposed : 1;                                    		// 0x0078 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned char                                      Priority;                                         		// 0x007C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	TArray<struct FKeyValuePair>                       Headers;                                          		// 0x0080 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0090 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAsyncTask*                                  Task;                                             		// 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventSuccess__Delegate;                         		// 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFail__Delegate;                            		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventComplete__Delegate;                        		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_X));
		}

		return uClassPointer;
	};

	void NotifySuccess();
	void NotifyError(class UError* InError);
	bool eventShouldResendOnFail(class UError* InError);
	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	void eventOnComplete();
	void eventOnFail();
	void eventOnSuccess();
	void eventDispose();
	class UAsyncTask* CreateTask(struct FScriptDelegate InCallback);
	class URPC_X* NotifyOnComplete(struct FScriptDelegate Callback);
	class URPC_X* NotifyOnFail(struct FScriptDelegate Callback);
	class URPC_X* NotifyOnSuccess(struct FScriptDelegate Callback);
	class UObject* eventGetResponseObject();
	void EventComplete(class URPC_X* RPC);
	void EventFail(class URPC_X* RPC);
	void EventSuccess(class URPC_X* RPC);
};

// Class ProjectX.RPC_CrashReport_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_CrashReport_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CRASHREPORT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_RecordMetrics_X
// 0x0038 (0x00E8 - 0x0120)
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                     		// 0x00E8 (0x0010) [0x0000000000000000]               
	struct FGuid                                       LevelSessionID;                                   		// 0x00F8 (0x0010) [0x0000000000000000]               
	float                                              CurrentTimeSeconds;                               		// 0x0108 (0x0004) [0x0000000000000000]               
	int                                                FirstEventIndex;                                  		// 0x010C (0x0004) [0x0000000000000000]               
	TArray<struct FMetricsEvent>                       Events;                                           		// 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_RECORDMETRICS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPCBatch_X
// 0x0060 (0x0060 - 0x00C0)
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                         		// 0x0060 (0x0004) [0x0000000000000000]               
	TArray<struct FPendingRPC>                         Requests;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FRPCResponse>                        Responses;                                        		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRPCError                                   Error;                                            		// 0x0088 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetMessage_X*                            RequestMessage;                                   		// 0x00A8 (0x0008) [0x0000000000000000]               
	class UPsyNetMessage_X*                            ResponseMessage;                                  		// 0x00B0 (0x0008) [0x0000000000000000]               
	class UError*                                      ResponseError;                                    		// 0x00B8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPCBATCH_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPCQueue_X
// 0x00F8 (0x0070 - 0x0168)
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              AuthTimeoutSeconds;                               		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class URPCConfig_X*                                RPCConfig;                                        		// 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPsyNetRetryConfig_X*                        RetryConfig;                                      		// 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPendingRPC>                         PendingRPCs;                                      		// 0x0090 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class URPCBatch_X*>                         PendingBatches;                                   		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                         		// 0x00B0 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	unsigned long                                      bAuthorized : 1;                                  		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __EventRPCSuccess__Delegate;                      		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRPCError__Delegate;                        		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBatchError__Delegate;                      		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;                  		// 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPCQUEUE_X));
		}

		return uClassPointer;
	};

	void eventOnError(class URPC_X* RPC, class UError* Error);
	class UPsyNetMetrics_X* GetPsyNetMetrics();
	void RecordBatchMetrics(class URPCBatch_X* Batch);
	void HandleBatchComplete(class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error);
	void eventCreateBatch(class UPsyNetMessage_X* Message, TArray<struct FPendingRPC>& BatchRPCs);
	void eventSignatureMismatch(int ServiceID);
	void FailAllPending(class UError* Error);
	void FailPending(class URPC_X* RPC, class UError* Error);
	void TickReceive();
	void TickSend();
	void QueueRPC(class URPC_X* RPC);
	class UTAsyncResult__PsyNetMessage_X* SendRequestDelegate(class UPsyNetMessage_X* Message);
	void EventBatchError(class URPCQueue_X* RPCQueue, class UError* Error);
	void EventRPCError(class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error);
	void EventRPCSuccess(class URPCQueue_X* RPCQueue, class URPC_X* RPC);
};

// Class ProjectX.RuntimeParameterBase_X
// 0x0008 (0x0060 - 0x0068)
class URuntimeParameterBase_X : public UObject
{
public:
	struct FName                                       ParameterName;                                    		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RUNTIMEPARAMETERBASE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RuntimeParameter_Speed_X
// 0x0000 (0x0068 - 0x0068)
class URuntimeParameter_Speed_X : public URuntimeParameterBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RUNTIMEPARAMETER_SPEED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RuntimeParameters_X
// 0x0000 (0x0060 - 0x0060)
class URuntimeParameters_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RUNTIMEPARAMETERS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0000 (0x0160 - 0x0160)
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SEQACT_NONNATIVEUPDATE_X));
		}

		return uClassPointer;
	};

	bool eventUpdate(float dt);
};

// Class ProjectX.SequenceCondition_X
// 0x0000 (0x0140 - 0x0140)
class USequenceCondition_X : public USequenceCondition
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SEQUENCECONDITION_X));
		}

		return uClassPointer;
	};

	void eventActivated();
};

// Class ProjectX.Serializer_X
// 0x0000 (0x0060 - 0x0060)
class USerializer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SERIALIZER_X));
		}

		return uClassPointer;
	};

	void DeserializeObject(class UObject* Target, TArray<unsigned char>& InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>& OutData);
};

// Class ProjectX.JSONSerializer_X
// 0x0004 (0x0060 - 0x0064)
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_JSONSERIALIZER_X));
		}

		return uClassPointer;
	};

	bool Validate(struct FString Stream);
	struct FString func();
	void DecodeObject(class UObject* Target, struct FString& Stream);
	void EncodeObject(class UObject* Target, struct FString& Stream);
	void DeserializeObject(class UObject* Target, TArray<unsigned char>& InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>& OutData);
};

// Class ProjectX.ObjectSerializer_X
// 0x0004 (0x0060 - 0x0064)
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bPersistent : 1;                                  		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bDebug : 1;                                       		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_OBJECTSERIALIZER_X));
		}

		return uClassPointer;
	};

	void DeserializeObject(class UObject* Target, TArray<unsigned char>& InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>& OutData);
};

// Class ProjectX.OnlineGame_Base_X
// 0x00E0 (0x0098 - 0x0178)
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                     		// 0x0098 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     OnlineSubGameInterfaceName;                       		// 0x00A8 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                     		// 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameSettings_X*                       DefaultGameSettings;                              		// 0x00C0 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings_X*                       GameSettings;                                     		// 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGamePlaylists_X*                      Playlists;                                        		// 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                                  		// 0x00D8 (0x0008) [0x0000000000000000]               
	class UOnlineGameDLC_X*                            DLC;                                              		// 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameSkill_X*                          Skill;                                            		// 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     StartServerCommand;                               		// 0x00F0 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UWebCache_X*                                 WebCache;                                         		// 0x0100 (0x0008) [0x0000000000000000]               
	class UWebImageCache_X*                            WebImageCache;                                    		// 0x0108 (0x0008) [0x0000000000000000]               
	class UPsyNetStaticData_X*                         PsyNetStaticData;                                 		// 0x0110 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bLockGameSettings : 1;                            		// 0x0118 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bUseEnvironmentZone : 1;                          		// 0x0118 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	unsigned char                                      CurrentConnectionStatus;                          		// 0x011C (0x0001) [0x0000000000002000] (CPF_Transient)
	struct FString                                     ServerName;                                       		// 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     CachedOptions;                                    		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                           		// 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameWordFilter_X*                     WordFilter;                                       		// 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class UOnline_X*>                           OnlineComponents;                                 		// 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;       		// 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAME_BASE_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool HasInternetConnection();
	int GetBeaconPort();
	struct FString GetBeaconExternalHostAddress(unsigned long bWithPort);
	struct FString GetBeaconLocalHostAddress(unsigned long bWithPort);
	int GetUdpPort();
	struct FString GetUdpExternalHostAddress(unsigned long bWithPort);
	struct FString GetUdpLocalHostAddress(unsigned long bWithPort);
	void HandleInternetConnectionChanged(unsigned long bConnected);
	void HandleConnectionStatusChanged(unsigned char ConnectionStatus);
	void SetDefaultSearchType(class UClass* OnlineSearchClass);
	void KickAllPlayers(struct FString Reason);
	void DelayedShutdownServer();
	void OnExit();
	int GetPlaylistPlayerCount(class UGameSettingPlaylist_X* Playlist);
	void OnNewSettingsChosen(int PlaylistId);
	void UpdateGameSettingsPlayerCount(int NumPlayers);
	void UpdateGameSettings(class UOnlineGameSettings_X* InGameSettings, struct FString Options);
	class UOnlineGameSettings_X* CreateOnlineGameSettings(struct FString Options);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void InitOnlineSubsystemInterfaces();
	void OnInit();
	void eventConstruct();
	void EventInternetConnectionChanged(unsigned long bConnected);
};

// Class ProjectX.OnlineGame_X
// 0x0118 (0x0178 - 0x0290)
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                          		// 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                      		// 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                     		// 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                    		// 0x0190 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                       		// 0x0198 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                     		// 0x01A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGamePopulation_X*                     Population;                                       		// 0x01A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameVoice_X*                          Voice;                                            		// 0x01B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameParty_X*                          Party;                                            		// 0x01B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameInvite_X*                         GameInvite;                                       		// 0x01C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameJoinGame_X*                       JoinGame;                                         		// 0x01C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameRegions_X*                        Regions;                                          		// 0x01D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGamePrivileges_X*                     Privileges;                                       		// 0x01D8 (0x0008) [0x0000000000000000]               
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                              		// 0x01E0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameVersion_X*                        GameVersion;                                      		// 0x01E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlinePlayer_X*                             PlayerArchetype;                                  		// 0x01F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOnlinePlayer_X*>                     OnlinePlayers;                                    		// 0x01F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UOnlineLegalText_X*                          Eula;                                             		// 0x0208 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          PrivacyPolicy;                                    		// 0x0210 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          ToS;                                              		// 0x0218 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          SCT;                                              		// 0x0220 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          PaymentServices;                                  		// 0x0228 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bRequestPublicIP : 1;                             		// 0x0230 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	struct FString                                     PublicIP;                                         		// 0x0238 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnectionError__Delegate;                 		// 0x0248 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;               		// 0x0260 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;              		// 0x0278 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAME_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void HandlePublicIPComplete(class URPC_GetPublicIP_X* RPC);
	void HandlePsyNetLogin(class UPsyNetConnection_X* Connection);
	void NotifyPlayerPsyNetLogout(struct FScriptDelegate Callback);
	void NotifyPlayerPsyNetLogin(struct FScriptDelegate Callback);
	bool IsSignedIn(int ControllerId);
	bool CheckUpToDate(class UError*& Error);
	bool CheckNotTooYoung(class UError*& Error);
	class UError* GetPsyNetLoginError(class UOnlinePlayer_X* OnlinePlayer);
	void HandleLoginCompleted(class UOnlinePlayerAuthentication_X* Auth, class UAsyncTask* Task);
	class UAsyncTask* CheckPsyNetConnection();
	bool RequiresSystemNetworkErrorHandling();
	bool ValidateUserOnlineAccount(class UError*& Error);
	bool CheckInternetConnection(class UError*& Error);
	bool IsOnlinePlayerID(struct FUniqueNetId PlayerID);
	class UOnlinePlayer_X* eventGetOnlinePlayerByID(struct FUniqueNetId PlayerID);
	void OnNewSettingsChosen(int PlaylistId);
	struct FUniqueNetId eventGetPrimaryPlayerID();
	class UOnlinePlayer_X* eventGetPrimaryPlayer();
	void RemoveOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void AddOnlinePlayer(class UOnlinePlayer_X* OnlinePlayer);
	class UOnlinePlayer_X* CreateOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void SetPlayedWith(struct FUniqueNetId PlayerID);
	void GetPlayerAvatars(TArray<struct FUniqueNetId> PlayerIDs, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, unsigned char Size);
	void ClearPendingAvatarDownloads();
	void SetVoiceVolume(float NewValue);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnMainMenuOpened();
	void HandlePlayerLogin(class UOnlinePlayer_X* OnlinePlayer, class UError* Error);
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void SyncLegal(struct FString InAppendedPath);
	bool IsLoggedInToPsyNet(class UOnlinePlayer_X* OnlinePlayer);
	void OnInit();
	void EventPlayerPsyNetLogout(class UOnlinePlayer_X* Player);
	void EventPlayerPsyNetLogin(class UOnlinePlayer_X* Player);
	void EventConnectionError(class UError* Error, class UOnlinePlayer_X* Player);
};

// Class ProjectX.OnlineGameServer_X
// 0x0008 (0x0178 - 0x0180)
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x0178 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMESERVER_X));
		}

		return uClassPointer;
	};

	void OnInit();
};

// Class ProjectX.OnlineGameDedicatedServer_X
// 0x0230 (0x0180 - 0x03B0)
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	unsigned long long                                 GameServerID;                                     		// 0x0180 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     GameServerHost;                                   		// 0x0188 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                EnvironmentZone;                                  		// 0x0198 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameStats_X*                          GameStats;                                        		// 0x01A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                     		// 0x01A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameReservations_X*                   Reservations;                                     		// 0x01B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClanforgeReservation_X*                     Clanforge;                                        		// 0x01B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     Region;                                           		// 0x01C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                CurrentPlaylistId;                                		// 0x01D0 (0x0004) [0x0000000000000000]               
	int                                                MutatorIndex;                                     		// 0x01D4 (0x0004) [0x0000000000000000]               
	float                                              AverageMMR;                                       		// 0x01D8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AverageConservativeMMR;                           		// 0x01DC (0x0004) [0x0000000000002000] (CPF_Transient)
	int                                                MachineId;                                        		// 0x01E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x01E8 (0x0090) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                CustomMatchOwner;                                 		// 0x0278 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long long                                 CustomMatchClubID;                                		// 0x02C0 (0x0008) [0x0000000000000000]               
	unsigned long                                      bQueuedShutdown : 1;                              		// 0x02C8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bFindingReplacementServer : 1;                    		// 0x02C8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bHasValidMigrationServer : 1;                     		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisableMatchmakingBan : 1;                       		// 0x02C8 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	unsigned long                                      bBotTest : 1;                                     		// 0x02C8 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bUseNetworkNextDriver : 1;                        		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long long                                 ReplacementServerID;                              		// 0x02D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UServerPlayerTracker_X*                      PlayerTracker;                                    		// 0x02D8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UClass*                                      MatchRecorderClass;                               		// 0x02E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMatchRecorder_X*                            MatchRecorder;                                    		// 0x02E8 (0x0008) [0x0000000000000000]               
	class UMatchLog_X*                                 MatchLog;                                         		// 0x02F0 (0x0008) [0x0000000000000000]               
	class UServerConfig_X*                             Config;                                           		// 0x02F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPsyNetConfig_X*                             PsyNetConfig;                                     		// 0x0300 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;		// 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;               		// 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                     		// 0x0338 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;     		// 0x0350 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInactive__Delegate;                        		// 0x0368 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventActive__Delegate;                          		// 0x0380 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                		// 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEDEDICATEDSERVER_X));
		}

		return uClassPointer;
	};

	void HandlePsyNetDataLoaded(class UPsyNetStaticData_X* D);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class URPC_RecordMatch_X* SendRecordMatchRPC();
	void ReportMatch();
	void HandleTrackerPlayerRemoved(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
	void CreateMatchRecorder();
	void HandleTrackerPlayerAdded(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
	struct FString MatchGUID();
	struct FName GetCurrentMapName();
	void ClearMatchmakingBan(struct FUniqueNetId PlayerID);
	void IssueMatchmakingBan(struct FUniqueNetId PlayerID, struct FString Reason);
	unsigned char GetTeamNum(struct FUniqueNetId PlayerID);
	bool KickPlayersOnGameEventDestroyed();
	bool IsBotMatch();
	bool CanIssueMatchmakingBan();
	bool IsRankedMatch();
	class UGameSettingPlaylist_X* GetPlaylist();
	void OnExit();
	void OnMigrationStarted();
	bool DidRematchVotePass();
	void HandleNewServerIPRPC(class URPC_CheckReplacementDedicatedServer_X* RPC);
	void CheckNewServerIP();
	void CheckNewServerTimeout();
	void CheckStartShutdown(int GameTimeRemaining);
	bool AllowServerMigration();
	void UpdateGameTime(int TimeSeconds);
	void FindNewDedicatedServerForPlayers(struct FScriptDelegate InDelegate);
	bool IsInactive();
	int GetTeamScore(int TeamIdx);
	bool IsInPostGameLobby();
	void UpdateOnlineGame();
	bool AllowSplitscreenJoinRankedMatch();
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void TravelToMap(struct FString ServerCommand);
	void GotoPrivateMatchMap(struct FName MapName, int GameMode, struct FString GameTags);
	void GotoNextPrivateMatchMap();
	void OnPrivateEventDestroyed();
	struct FString GetStartServerCommand();
	struct FName GetNextRandomMapName(int GameMode, unsigned long bStandardOnly);
	struct FName GetNextMapName(int GameMode, unsigned long bStandardOnly);
	struct FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(struct FUniqueNetId NewOwner);
	void SetCustomSettings(struct FCustomMatchSettings Settings);
	void SetupPrivateMatch(struct FCustomMatchSettings Settings, struct FUniqueNetId Creator);
	void GoToNextMap();
	struct FName GetNextMutatorMapName();
	void GoToMap(struct FString MapName);
	struct FString GetPlaylistTags();
	void UpdateAverageMMR();
	void SetCustomMatchClubID(unsigned long long InClubID);
	void ClearSettings();
	void SetPlaylist(int PlaylistId);
	void HandleReservationsUpdated();
	void InitClanforge();
	void OnInit();
	void EventMatchGUIDChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventActive(class UOnlineGameDedicatedServer_X* Server);
	void EventInactive(class UOnlineGameDedicatedServer_X* Server);
	void EventPrivateMatchSettingsChanged(class UOnlineGameDedicatedServer_X* Server, struct FCustomMatchSettings NewSettings);
	void EventPlaylistSet(class UOnlineGameDedicatedServer_X* Server);
	void EventAverageMMRChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventFoundNewDedicatedServerForPlayers(class UConnectionInfoMessage_X* Message);
};

// Class ProjectX.OnlineGameDLC_X
// 0x0040 (0x0098 - 0x00D8)
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int                                                SyncInterval;                                     		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PlayerOwnershipSyncInterval;                      		// 0x009C (0x0004) [0x0000000000000000]               
	TArray<struct FPlayerDLCInfo>                      PlayerDLCInfos;                                   		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamWebRequestData>                SteamWebRequests;                                 		// 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventValidationReady__Delegate;                 		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEDLC_X));
		}

		return uClassPointer;
	};

	bool DoesPlayerOwnDLC(struct FUniqueNetId& PlayerID, struct FName& DLCName);
	void HandleGetPublisherAppOwnership(class UWebRequest_X* Request);
	bool PlatformRequiresDLCVerification(unsigned char Platform);
	void OnMatchFinished();
	void SyncPlayerDLC(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	void UpdatePlayerDLCInfo(int PlayerInfoIndex);
	int CreatePlayerDLCInfo(struct FUniqueNetId& PlayerID);
	bool IsPlayerReadyForValidation(struct FUniqueNetId& PlayerID);
	void EventValidationReady();
};

// Class ProjectX.OnlineGameLeaderboards_X
// 0x0090 (0x0098 - 0x0128)
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int                                                NumResults;                                       		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FCachedLeaderboardData>              CachedLeaderboards;                               		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                NumFriendsLeaderboardRequests;                    		// 0x00B0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       CurrentLeaderboardID;                             		// 0x00B4 (0x0008) [0x0000000000002000] (CPF_Transient)
	int                                                CurrentFriendIndex;                               		// 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bGlobalLeaderboards : 1;                          		// 0x00C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                     		// 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class URPC_X*>                              LeaderboardRequests;                              		// 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;          		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;                  		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;            		// 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMELEADERBOARDS_X));
		}

		return uClassPointer;
	};

	void __OnlineGameLeaderboards_X__ClearPreviousTasks_943D172B4ED8F79A2C99A5A44ED13D45(class URPC_X* RPC);
	void ClearPreviousTasks();
	bool IsSkillLeaderboard(struct FString NewLeaderboardID, int& Playlist);
	TArray<struct FLeaderboardData> SortLeaderboardDataMMR(TArray<struct FLeaderboardData> Leaderboard);
	TArray<struct FLeaderboardData> SortLeaderboardData(TArray<struct FLeaderboardData> Leaderboard);
	void HandleGetLeaderboardFriendsRPC(class URPC_GetLeaderboardRankForUsersBase_X* RPC);
	void DispatchLeaderboardFriendsRequest();
	void GetLeaderboardsForAllFriends(struct FName LeaderboardId);
	void GetLeaderboardFriends(class UOnlinePlayer_X* OnlinePlayer, struct FName NewLeaderboardID, struct FScriptDelegate NewDelegate, struct FScriptDelegate FailedDelegate);
	void RequestClearPendingAvatarDownloads();
	void HandleGetLeaderboardRPC(class URPC_GetLeaderboardBase_X* RPC);
	void GetLeaderboard(struct FName NewLeaderboardID, unsigned long bGlobal, struct FScriptDelegate NewDelegate, struct FScriptDelegate FailedDelegate);
	bool GetCachedLeaderboardData(struct FName LeaderboardId, TArray<struct FLeaderboardData>& LeaderboardDataList);
	int CalcDivision(float TopValue, float Value);
	void GetRankForPrimaryPlayer(struct FName LeaderboardId, int Value, int& Rank, int& Division);
	void HandleGetLeaderboardPlayerValueRPC(class URPC_GetLeaderboardValueForUserBase_X* RPC);
	void GetLeaderboardPlayerValue(struct FName NewLeaderboardID, struct FScriptDelegate NewDelegate);
	void EventGetLeaderboardFailed(class UError* Error);
	void EventNewLeaderboard(struct FName NewLeaderboardID, TArray<struct FLeaderboardData>& NewLeaderboardData);
	void OnGetLeaderboardPlayerValue(class UOnlineGameLeaderboards_X* LeaderboardsRef, struct FName LeaderboardId, class UError* Error, struct FLeaderboardData& PlayerLeaderboardData);
};

// Class ProjectX.OnlineGameReservations_X
// 0x0118 (0x0098 - 0x01B0)
class UOnlineGameReservations_X : public UOnline_X
{
public:
	float                                              ExtraMapLoadTime;                                 		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WaitForReservationsTimeout;                       		// 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InitialReservationTimeoutSeconds;                 		// 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InitialMigrationTimeoutSeconds;                   		// 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAllowPrivateMatchCrossPlayDisable : 1;           		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSkipReservationCheck : 1;                        		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bSinglePlayerMatchmaking : 1;                     		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bServerTraveling : 1;                             		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	unsigned long                                      bScrambleTeams : 1;                               		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bMatchStarted : 1;                                		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	unsigned long                                      bLockTeams : 1;                                   		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	unsigned long                                      bIsBotMatch : 1;                                  		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000080] (CPF_Transient)
	unsigned long                                      bMigrationInProgress : 1;                         		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000100] (CPF_Transient)
	class UReservationBeacon_X*                        Beacon;                                           		// 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UUdpPingBeaconServer_X*                      PingBeacon;                                       		// 0x00B8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<struct FReservationData>                    Players;                                          		// 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FTeamPairHistory>                    TeamPairHistories;                                		// 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             BotNames;                                         		// 0x00E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UCrossplayConfig_X*                          Crossplay;                                        		// 0x00F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                   		// 0x00F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UBeaconConfig_X*                             BeaconConfig;                                     		// 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPendingReservation>                 PendingReservations;                              		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTAsyncResult__ClubDetails_X*                GetClubTask;                                      		// 0x0118 (0x0008) [0x0000000000000000]               
	struct FString                                     RankedMatchReservationID;                         		// 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        RankedMatchPushedPlayerIDs;                       		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UOnlineClubProvider_X*                       Clubs;                                            		// 0x0140 (0x0008) [0x0000000000000000]               
	struct FString                                     JoinName;                                         		// 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                     		// 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;             		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;           		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __bMatchStarted__ChangeNotify;                    		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMERESERVATIONS_X));
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__OnInit_C585AC0C432AB696725FCFA20B532BAC(class UIReservationConnection_X* Connection, class UObject* Message);
	void __OnlineGameReservations_X__OnInit_741063124DE13F816EF059B8D395CABE(class UIReservationConnection_X* Connection, class UObject* Message);
	void __OnlineGameReservations_X__OnInit_BD9A8FA84DE6D609A31C6DBA62D567B9(class UIReservationConnection_X* Connection, class UObject* Message);
	bool __OnlineGameReservations_X__SetPlayersWithMigrationData_0FBEB5264CCB65E79C06A38AA6E89CE5(struct FMigrationReservationData P);
	struct FUniqueNetId __OnlineGameReservations_X__HandlePsyNetBeaconReservation_6060889D4AACBC8288751E92284E4539(struct FPsyNetBeaconPlayerReservation P);
	void __OnlineGameReservations_X__HandlePublicReservation_CBEC99FE4FF53FDC4344088854D666DE(struct FReservationData P);
	void __OnlineGameReservations_X__HandlePublicReservation_463523B946DD30F42CB8C09E0BADE4AA(struct FReservationData P);
	bool __OnlineGameReservations_X__HasTimeoutPlayers_FF3AD82C493DDE61DE80ECB6D8868FA1(struct FReservationData P);
	bool __OnlineGameReservations_X__HasMultipleReservedTeams_DE3484384765A5AB16119DBD07D8BF9B(int TeamID);
	int __OnlineGameReservations_X__HasMultipleReservedTeams_F6327AC846042E42BBF814B69CC4EDC1(struct FReservationData P);
	bool __OnlineGameReservations_X__AllPlayersReserved_325627C44A2A0CFEE98E208054876DF8(struct FReservationData P);
	bool __OnlineGameReservations_X__AllPlayersInGame_422E3C014569487F92B439B33CD575BA(struct FReservationData P);
	void __OnlineGameReservations_X__SetServerTraveling_2AA9C4CB40000EA5028F6BB137F2123F(struct FPendingReservation P);
	struct FUniqueNetId __OnlineGameReservations_X__GetPlayerIDs_F53556DC474E0D2C833983AA3ED6F89E(struct FReservationData Player);
	void __bMatchStarted__ChangeNotifyFunc();
	TArray<struct FUniqueNetId> GetPlayerIDs();
	float GetMapLoadTimeout(unsigned char Platform);
	void GetAccumulatedPrefs(TArray<struct FName>& Likes, TArray<struct FName>& Dislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UReservationsMetrics_X* GetMetrics();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	bool HasSplitscreenPlayers();
	void SetParty(struct FUniqueNetId MemberId, struct FUniqueNetId PartyID);
	struct FUniqueNetId GetPartyID(struct FUniqueNetId PlayerID);
	unsigned char GetTeamNum(struct FUniqueNetId PlayerID);
	struct FString GetPlayersPlatformsString();
	struct FString GetPlatformsString(TArray<unsigned char>& Platforms);
	TArray<unsigned char> GetPlayerPlatforms();
	bool CanPlayTogether(unsigned char Platform1, unsigned char Platform2);
	bool CanAcceptReservationsForPlatform(class UAddReservationMessagePublic_X* Message);
	bool ShouldCheckPlatformRestrictions(class UAddReservationMessagePublic_X* Message);
	unsigned char GetExclusivePlatform();
	bool CanAcceptReservations(class UAddReservationMessagePublic_X* Message);
	void GetPlayerCounts(int& Team0Reserved, int& Team0Joined, int& Team1Reserved, int& Team1Joined);
	void NotifyReservationsUpdated();
	void OnReservationsUpdated();
	void CheckMapLoadTimeout();
	void StartMapLoadTimeout();
	void SyncSkills();
	void HackForceNotServerTravelling();
	void SwapTeams();
	void SetServerTraveling(unsigned long bTraveling);
	void CloseConnection(int Index);
	void RemoveReservationIndex(int Index);
	int AddSpecialReservation(struct FUniqueNetId PlayerID, struct FString PlayerName, struct FUniqueNetId PartyID);
	void HandleTeamChanged(class APRI_X* PRI);
	void RemoveReservation(struct FUniqueNetId PlayerID);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	bool AllPlayersInGame();
	bool AllPlayersReserved();
	bool HasGameEnded();
	bool HasGameStarted();
	bool CanStartMatch();
	bool HasMultipleReservedTeams();
	bool HasTimeoutPlayers();
	bool HasJoiningPlayers();
	bool CanGoInactive();
	bool IsEmpty();
	bool IsNearlyFull();
	bool IsFull();
	int GetNumReservedPlayers();
	bool IsCustomMatch();
	void HandleReservationDisconnected(class UReservationBeacon_X* _, class UIReservationConnection_X* Connection);
	void ClearTeamHistory();
	void ClearReservations();
	void Reset();
	void RecordTeamHistory(TArray<struct FReservationData>& TestPlayers, TArray<struct FTeamPairHistory>& History);
	void ScrambleTeams();
	void UpdateTeams();
	void AssignTeamsByPartySize();
	bool AssignScrambledTeams(int TeamSize, TArray<struct FTeamPairHistory>& History, TArray<struct FReservationData>& TestPlayers);
	bool AssignTeams(int TeamSize, unsigned long bKeepTeams, TArray<struct FReservationData>& TestPlayers);
	void HandleSkillSynced(class UOnlineGameSkill_X* SkillSystem, struct FUniqueNetId PlayerID, class UError* Error);
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	bool IsCheatingSplitscreenReservation(class UAddReservationMessage_X* Message);
	bool IsCheatingSplitscreen(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId SplitscreenPlayerId);
	struct FReservationData CreateReservationData(struct FUniqueNetId PlayerID, struct FString PlayerName, struct FUniqueNetId PartyID, unsigned char Status);
	void HandlePlayerCancel(class UIReservationConnection_X* Connection, class UObject* Message);
	struct FUniqueNetId GetConnectionPlayerID(class UIReservationConnection_X* Connection);
	void InitialReservationTimeout();
	void NotAllPlayersJoined();
	void DisconnectExistingPlayers(class UAddReservationMessage_X* ReservationMessage);
	void SetPlayers(TArray<struct FReservationData>& TempPlayers);
	void HandleClubSyncComplete(class UOnlineClubProvider_X* _);
	TArray<struct FReservationData> AddPlayersFromReservationMessage(class UAddReservationMessage_X* ReservationMessage, class UIReservationConnection_X* Connection);
	bool IsUnique(TArray<struct FName>& Prefs);
	void ForcePrivateMatch(struct FCustomMatchSettings InSettings);
	void SetClubServer(class UClubDetails_X* Details);
	void StartPrivateMatch(struct FCustomMatchSettings MatchSettings, struct FUniqueNetId Creator);
	bool HandlePrivateReservation(class UIReservationConnection_X* Connection, class UAddReservationMessagePrivate_X* Message);
	void ProcessReservationMessage(class UIReservationConnection_X* Connection, class UAddReservationMessage_X* Message);
	void StartMatch();
	class UReservationsReadyMessage_X* CreateReadyMessage();
	void SendReadyMessage(struct FUniqueNetId PlayerID, class UReservationsReadyMessage_X* Message, class UIReservationConnection_X* Connection);
	void NotifyReady(struct FUniqueNetId PlayerID, class UIReservationConnection_X* Connection);
	void BroadcastReady();
	bool ShouldSyncSkills();
	bool IsSoloPlaylist(int PlaylistId);
	bool ShouldCheckRankedMatchReservationID();
	bool CheckRankedMatchReservation(struct FUniqueNetId PlayerID, struct FString& InReservationID);
	bool HandlePublicReservation(class UIReservationConnection_X* Connection, class UAddReservationMessagePublic_X* Message);
	void HandleBeaconReservationMessage(class UIReservationConnection_X* Connection, class UAddReservationMessage_X* Message);
	bool IsCheatingReservationMessage(class UIReservationConnection_X* Connection, class UAddReservationMessage_X* Message);
	void RecordReservation(class UAddReservationMessage_X* Message);
	void HandleRegionPingMessage(class UIReservationConnection_X* Connection, class URegionPingMessage_X* Message);
	void HandlePingMessage(class UIReservationConnection_X* Connection, class UPingMessage_X* Message);
	void HandleMatchStartedChanged();
	class UObject* CreateClientReservationMessage(struct FServerReservationData& Reservation, struct FUniqueNetId& PlayerID);
	void HandlePsyNetBeaconReservation(struct FPsyNetBeaconReservation Reservation, float ConnectionTimeoutSeconds);
	void NotifyMigrationStarted();
	void SetPlayersWithMigrationData(TArray<struct FMigrationReservationData> MigratedPlayers);
	TArray<struct FMigrationReservationData> GetMigrationReservationData();
	class UServerToServerMessage_X* GetMatchInfoMessage();
	void NotifyNewReplacementServer();
	void HandleNewServerConnectionInfo(class UConnectionInfoMessage_X* Message);
	void HandleMigrationStartedMessage(class UMigrationStartedMessage_X* Message);
	void SendMigratedServerConnectionInfo(unsigned long long ServerId);
	void SetJoinNameAndPassword(struct FString InJoinName, struct FString InJoinPassword);
	void HandleServerMigrationMessage(class UMatchInfoMessage_X* Message);
	void HandleReconnectReservation(class UPsyNetService_Reconnect_X* Notification);
	void HandleFriendJoinReservation(class UPsyNetService_FriendJoin_X* Notification);
	void HandleJoinPrivateReservation(class UPsyNetService_JoinPrivate_X* Notification);
	void HandleCreatePrivateReservation(class UPsyNetService_CreatePrivate_X* Notification);
	void HandleBackfillReservation(class UPsyNetService_Backfill_X* Notification);
	void HandleNewGameReservation(class UPsyNetService_NewGame_X* Notification);
	void HandlePsyNetReservation(class UPsyNetService_DSReservation_X* Notification);
	void InitUdpBeacon();
	void StartBeacons();
	void OnInit();
	void EventMigrationJoinOccurred();
	void EventReservationsUpdated();
};

// Class ProjectX.OnlineGameStats_X
// 0x0014 (0x0098 - 0x00AC)
class UOnlineGameStats_X : public UOnline_X
{
public:
	struct FString                                     MatchGUID;                                        		// 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x00A8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMESTATS_X));
		}

		return uClassPointer;
	};

	void UploadStats(struct FString StatType, TArray<struct FUploadStatDataSet>& DataSet);
	void SetPlaylistID(int InID);
	void SetMatchGUID(struct FString InGuid);
};

// Class ProjectX.TickableStateObject_X
// 0x0028 (0x0064 - 0x008C)
class UTickableStateObject_X : public UStateObject_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                          		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAutoTick : 1;                                    		// 0x0070 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	TArray<struct FTimerData>                          Timers;                                           		// 0x0078 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              LatentFloat;                                      		// 0x0088 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TICKABLESTATEOBJECT_X));
		}

		return uClassPointer;
	};

	void Sleep(float Seconds);
	void eventTick(float DeltaTime);
	void ProcessState(float DeltaSeconds);
	void UpdateTimers(float DeltaSeconds);
	void NativeTick(float DeltaTime);
	void Destroy();
	void SetTickable(unsigned long bTick);
	bool IsTimerActive(struct FName inTimerFunc, class UObject* inObj);
	void PauseTimer(unsigned long bPause, struct FName inTimerFunc, class UObject* inObj);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(struct FName inTimerFunc, class UObject* inObj);
	void SetStateTimer(float InRate, unsigned long inbLoop, struct FName inTimerFunc);
	void SetTimer(float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj);
};

// Class ProjectX.SystemInfo_X
// 0x0000 (0x0060 - 0x0060)
class USystemInfo_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SYSTEMINFO_X));
		}

		return uClassPointer;
	};

	struct FString GetComputerName();
	void GetNetworkInfo(TArray<struct FString>& Types);
	void GetOSInfo(struct FString& Type, struct FString& Bit);
	void GetVideoCardInfo(struct FString& CardName, int& RAM);
	void GetMemoryInfo(float& Physical, float& PageFile, float& Virtual, int& Used, int& Allocated);
	void GetCPUInfo(struct FString& Type, struct FString& Description, struct FString& Cores, struct FString& Threads);
	bool IsSupported();
};

// Class ProjectX.TickActorComponent_X
// 0x0033 (0x009D - 0x00D0)
class UTickActorComponent_X : public UActorComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                           		// 0x00A0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bTick : 1;                                        		// 0x00B0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FScriptDelegate                             __EventTick__Delegate;                            		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TICKACTORCOMPONENT_X));
		}

		return uClassPointer;
	};

	void SetTickable(unsigned long bWantsTick);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(struct FName inTimerFunc, class UObject* inObj);
	void SetTimer(float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj);
	void EventTick(float DeltaTime);
};

// Class ProjectX.Timers_X
// 0x0020 (0x0060 - 0x0080)
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                    		// 0x0060 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __TickDelegate__Delegate;                         		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TIMERS_X));
		}

		return uClassPointer;
	};

	void ClearTick(struct FScriptDelegate Callback);
	void SetTick(struct FScriptDelegate Callback);
	bool IsActive(struct FScriptDelegate Callback);
	float GetElapsedTime(struct FScriptDelegate Callback);
	float GetRemainingTime(struct FScriptDelegate Callback);
	float GetRate(struct FScriptDelegate Callback);
	void ClearAll(class UObject* Obj);
	void Clear(struct FScriptDelegate Callback);
	void SetStateTimer(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
	void Set(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.TimersComponent_X
// 0x0010 (0x0070 - 0x0080)
class UTimersComponent_X : public UComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                           		// 0x0070 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TIMERSCOMPONENT_X));
		}

		return uClassPointer;
	};

	void UpdateTimers(float DeltaSeconds);
	bool IsActive(struct FScriptDelegate Callback);
	float GetElapsedTime(struct FScriptDelegate Callback);
	float GetRemainingTime(struct FScriptDelegate Callback);
	float GetRate(struct FScriptDelegate Callback);
	void ClearAll(class UObject* Obj);
	void Clear(struct FScriptDelegate Callback);
	void SetStateTimer(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
	void Set(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
};

// Class ProjectX.TickComponent_X
// 0x0028 (0x0080 - 0x00A8)
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0080 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                          		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bTick : 1;                                        		// 0x0088 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	struct FScriptDelegate                             __TickDelegate__Delegate;                         		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TICKCOMPONENT_X));
		}

		return uClassPointer;
	};

	void SetTickable(unsigned long bWantsTick);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.UIStrings_X
// 0x0000 (0x0060 - 0x0060)
class UUIStrings_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_UISTRINGS_X));
		}

		return uClassPointer;
	};

	struct FString FormatAsNumber(int Number, struct FString Delimiter);
};

// Class ProjectX.WebRequest_X
// 0x0078 (0x0060 - 0x00D8)
class UWebRequest_X : public UObject
{
public:
	unsigned long                                      bZipRequest : 1;                                  		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bZipResponse : 1;                                 		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bLogRequest : 1;                                  		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bLogResponse : 1;                                 		// 0x0060 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bConnectionReset : 1;                             		// 0x0060 (0x0004) [0x0000000000002002] [0x00000010] (CPF_Const | CPF_Transient)
	unsigned char                                      RequestState;                                     		// 0x0064 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FString                                     URL;                                              		// 0x0068 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                      		// 0x0078 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0080 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<unsigned char>                              Content;                                          		// 0x0088 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     StringContent;                                    		// 0x0098 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              ResponseData;                                     		// 0x00A8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x00B8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FScriptDelegate                             __EventCompleted__Delegate;                       		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WEBREQUEST_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetError(class UError* InError);
	bool eventHasInternetConnection();
	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void eventConstructHttpRequest();
	struct FString GetResponseHeader(struct FString Key);
	struct FString GetResponseString();
	bool HasNewData();
	bool IsSuccess();
	bool IsError();
	bool IsComplete();
	bool IsSent();
	class UHttpRequestInterface* GetHttpRequest();
	class UWebRequest_X* Send(struct FString InURL, struct FScriptDelegate OnCompleteCallback);
	void PrepareRequest(struct FString InURL);
	void SetContentFromString(struct FString ContentString);
	void SetContent(TArray<unsigned char>& ContentBytes);
	struct FString GetETag();
	void SetETag(struct FString ETag);
	class UWebRequest_X* SetVerb(struct FString InVerb);
	class UWebRequest_X* SetHeader(struct FString Key, struct FString Value);
	class UWebRequest_X* AddPlayerIDParam(struct FUniqueNetId PlayerID);
	class UWebRequest_X* AddStringParam(struct FString Key, struct FString Value);
	class UWebRequest_X* AddFloatParam(struct FString Key, float Value);
	class UWebRequest_X* AddQwordParam(struct FString Key, unsigned long long Value);
	class UWebRequest_X* AddIntParam(struct FString Key, int Value);
	unsigned char FlushWebRequests(float TimeoutSeconds);
	class UWebRequest_X* Create();
	void EventCompleted(class UWebRequest_X* Request);
};

// Class ProjectX.WordFilterTypes_X
// 0x0030 (0x0060 - 0x0090)
class UWordFilterTypes_X : public UObject
{
public:
	struct FScriptDelegate                             __CommentSanitizedDelegate__Delegate;             		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CommentErrorDelegate__Delegate;                 		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WORDFILTERTYPES_X));
		}

		return uClassPointer;
	};

	void SortRequestTimeAscending(TArray<struct FWordFilterPair>& Filtered);
	void SortPendingFront(TArray<struct FWordFilterPair>& Filtered);
	void CommentErrorDelegate(struct FString OriginalPhrase, class UError* Error);
	void CommentSanitizedDelegate(struct FString Original, struct FString Sanitized);
};

// Class ProjectX.AnimNodeBlendBase_X
// 0x0020 (0x016C - 0x018C)
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                        		// 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<float>                                      ChildBlendTimes;                                  		// 0x0178 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bRebuildChildren : 1;                             		// 0x0188 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bChildrenUpdated : 1;                             		// 0x0188 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ANIMNODEBLENDBASE_X));
		}

		return uClassPointer;
	};

	void SetActiveChildNamed(struct FName ChildName, unsigned long bForce);
	float GetAnimDuration(int ChildIndex);
	float GetBlendTime(int ChildIndex, unsigned long bGetDefault);
};

// Class ProjectX.AnimNodeSeries_X
// 0x001C (0x018C - 0x01A8)
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned long                                      bActive : 1;                                      		// 0x0190 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bInitialized : 1;                                 		// 0x0190 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           IntroAnim;                                        		// 0x0198 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           OutroAnim;                                        		// 0x01A0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ANIMNODESERIES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.AnimNodeSequence_X
// 0x0018 (0x01A8 - 0x01C0)
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                                 		// 0x01A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bResetOnRelevant : 1;                             		// 0x01AC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UAnimSequence*                               PrevAnimSeq;                                      		// 0x01B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int                                                PrevAnimLinkupIndex;                              		// 0x01B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BlendTimeLeft;                                    		// 0x01BC (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ANIMNODESEQUENCE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.AnimNodePose_X
// 0x0000 (0x01C0 - 0x01C0)
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ANIMNODEPOSE_X));
		}

		return uClassPointer;
	};

	void PlayAnim(unsigned long bLoop, float InRate, float StartTime);
};

// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0010 (0x0098 - 0x00A8)
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                              		// 0x0098 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UAnimNodeSequence*                           CachedAnimSequence;                               		// 0x00A0 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ANIMNOTIFY_PLAYPARTICLEEFFECT_X));
		}

		return uClassPointer;
	};

	void OnParticleSystemFinished(class UParticleSystemComponent* Component);
	void eventNotifyEnd(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
	void eventNotify(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
};

// Class ProjectX.PsyNetBeacon_X
// 0x0080 (0x0070 - 0x00F0)
class UPsyNetBeacon_X : public UComponent
{
public:
	float                                              ConnectionTimeoutSeconds;                         		// 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x0078 (0x0008) [0x0000000000000000]               
	TArray<class UPsyNetBeaconConnection_X*>           Connections;                                      		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UDSPendingMessage_X*>                 PendingMessages;                                  		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                     		// 0x00A0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                 		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETBEACON_X));
		}

		return uClassPointer;
	};

	void SerializeMessage(class UObject* Message, struct FString& OutMessageType, struct FString& OutMessagePayload);
	class UObject* DeserializeMessage(struct FString MessageType, struct FString MessagePayload);
	void TimeoutPendingMessages();
	void TimeoutConnections();
	void Tick();
	bool IsGameClient();
	void IssuePendingMessages(class UPsyNetBeaconConnection_X* Connection);
	void AddPendingMessage(class UDSR_DSMessage_X* Message);
	void OnMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void ClientHandleMessage(class UDSR_ClientMessage_X* Message);
	void ServerProcessMessage(class UPsyNetBeaconConnection_X* Connection, class UDSR_DSMessage_X* Message);
	void ServerHandleServerMessage(class UDSR_DSToDSMessage_X* Message);
	void ServerHandleMessage(class UDSR_DSMessage_X* Message);
	void HandleClientRpcFail(class UError* Error, class UPsyNetBeaconConnection_X* Connection);
	void ServerSendMessageToServer(unsigned long long ServerId, class UObject* Message);
	void SendMessageToServer(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void SendMessageToClients(TArray<class UPsyNetBeaconConnection_X*> ToConnections, class UObject* Message);
	class UPsyNetBeaconConnection_X* FindConnection(struct FString ReservationID, struct FString ConnectionID);
	void ServerHandleReservation(class UPsyNetService_DSReservation_X* Notification);
	void Close();
	void CloseConnection(class UPsyNetBeaconConnection_X* Connection);
	void eventBroadcastMessage(class UObject* Message);
	void eventSendMessage(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	class UPsyNetBeaconConnection_X* ReserveConnection(struct FString ReservationID, struct FString ConnectionID, float OverrideConnectionTimeoutSeconds);
	void SetPsyNetConnection(class UPsyNetConnection_X* InPsyNetConnection);
	void EventMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void EventDisconnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
	void EventConnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
};

// Class ProjectX.TcpBeacon
// 0x0070 (0x0070 - 0x00E0)
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int                                                MaxConnections;                                   		// 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     ConnectionClassName;                              		// 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ConnectionClass;                                  		// 0x0090 (0x0008) [0x0000000000000000]               
	struct FPointer                                    ListenSocket;                                     		// 0x0098 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<class UTcpConnection*>                      Connections;                                      		// 0x00A0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TCPBEACON));
		}

		return uClassPointer;
	};

	void ReceivedBunch(class UTcpConnection* Connection);
	void OnDisconnected(class UTcpConnection* Connection);
	void OnConnected(class UTcpConnection* Connection);
	void eventOnConnectionRemoved(class UTcpConnection* Connection);
	void eventOnConnectionAdded(class UTcpConnection* Connection);
	class UTcpConnection* GetConnection(struct FString Address);
	void Close();
	bool BeginListen();
	class UTcpConnection* BeginConnect(struct FString Address);
	void EventDisconnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
	void EventConnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
};

// Class ProjectX.TcpMessageBeacon
// 0x0020 (0x00E0 - 0x0100)
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x00E0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                 		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TCPMESSAGEBEACON));
		}

		return uClassPointer;
	};

	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UTcpConnection* Connection, class UObject* Message);
	void EventMessageReceived(class UTcpConnection* Connection, class UObject* Message);
};

// Class ProjectX.TcpConnection
// 0x00E0 (0x0060 - 0x0140)
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIReservationConnection_X;                		// 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              InitialConnectionTimeout;                         		// 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionTimeout;                                		// 0x0074 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                           		// 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	unsigned char                                      ConnectionState;                                  		// 0x0080 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	unsigned char                                      WebSocketState;                                   		// 0x0081 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              LastReceiveTime;                                  		// 0x0084 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<unsigned char>                              InBytes;                                          		// 0x0088 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              OutBytes;                                         		// 0x0098 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<int>                                        OutMessageLengths;                                		// 0x00A8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              QueuedWebSocketBytes;                             		// 0x00B8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<int>                                        QueuedWebSocketMessageLengths;                    		// 0x00C8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              InBytesDecoded;                                   		// 0x00D8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              BunchBytes;                                       		// 0x00E8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                       		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                    		// 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                   		// 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TCPCONNECTION));
		}

		return uClassPointer;
	};

	void eventOnDisconnected();
	void eventOnConnected();
	void Close();
	struct FString GetRemoteAddress();
	struct FString GetAddress();
	void EventReceivedBunch(class UTcpConnection* Connection);
	void EventDisconnected(class UTcpConnection* Connection);
	void EventConnected(class UTcpConnection* Connection);
};

// Class ProjectX.WebSocketConnection_X
// 0x001C (0x0140 - 0x015C)
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                     		// 0x0140 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     ClosedReason;                                     		// 0x0148 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int                                                ClosedCode;                                       		// 0x0158 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WEBSOCKETCONNECTION_X));
		}

		return uClassPointer;
	};

	void PretendClose(int Code, struct FString Reason);
	void Close();
	bool BeginWebSocketConnect(struct FString Address, class UStringMap* HandshakeHeaders);
	bool BeginConnect(struct FString Address);
};

// Class ProjectX.UdpPingBeaconBase_X
// 0x0028 (0x0070 - 0x0098)
class UUdpPingBeaconBase_X : public UComponent
{
public:
	struct FPointer                                    Beacon;                                           		// 0x0070 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Thread;                                           		// 0x0078 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Runnable;                                         		// 0x0080 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                SocketErrorLogDelaySeconds;                       		// 0x0088 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      bThreaded : 1;                                    		// 0x008C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	class UBeaconConfig_X*                             Config;                                           		// 0x0090 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_UDPPINGBEACONBASE_X));
		}

		return uClassPointer;
	};

	void TickSocket(float DeltaTime);
	void eventSetTickSocket(unsigned long bTick);
	void Close();
};

// Class ProjectX.UdpPingBeaconClient_X
// 0x0030 (0x0098 - 0x00C8)
class UUdpPingBeaconClient_X : public UUdpPingBeaconBase_X
{
public:
	struct FScriptDelegate                             __EventPong__Delegate;                            		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLost__Delegate;                            		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_UDPPINGBEACONCLIENT_X));
		}

		return uClassPointer;
	};

	void TickPongs(float DeltaTime);
	void eventSetTickPongs(unsigned long bTick);
	void Close();
	void SendPing(struct FName Address);
	bool InitClient();
	class UUdpPingBeaconClient_X* GetInstance();
	void EventLost(class UUdpPingBeaconClient_X* TheBeacon, struct FName Address);
	void EventPong(class UUdpPingBeaconClient_X* TheBeacon, struct FName Address, float DeltaSeconds);
};

// Class ProjectX.UdpPingBeaconServer_X
// 0x0000 (0x0098 - 0x0098)
class UUdpPingBeaconServer_X : public UUdpPingBeaconBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_UDPPINGBEACONSERVER_X));
		}

		return uClassPointer;
	};

	bool InitServer(int Port);
};

// Class ProjectX.NetworkNextDriver_X
// 0x0058 (0x0210 - 0x0268)
class UNetworkNextDriver_X : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x58];                              		// 0x0210 (0x0058) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTDRIVER_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetworkNextConnection_X
// 0x0020 (0xB1E8 - 0xB208)
class UNetworkNextConnection_X : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0xB1E8 (0x0020) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTCONNECTION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetworkNextDriverProxy_X
// 0x0000 (0x0288 - 0x0288)
class UNetworkNextDriverProxy_X : public UTcpNetDriver
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTDRIVERPROXY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetworkNextConnectionProxy_X
// 0x0000 (0xB210 - 0xB210)
class UNetworkNextConnectionProxy_X : public UTcpipConnection
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKNEXTCONNECTIONPROXY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PrivilegeCheck_X
// 0x0088 (0x0060 - 0x00E8)
class UPrivilegeCheck_X : public UObject
{
public:
	TArray<int>                                        ControllerIDs;                                    		// 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bHasRestriction : 1;                              		// 0x0070 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bFinished : 1;                                    		// 0x0070 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UError*                                      FailReason;                                       		// 0x0078 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<unsigned char>                              PendingPrivileges;                                		// 0x0080 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                FailedControllerID;                               		// 0x0090 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      FailedPrivilege;                                  		// 0x0094 (0x0001) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      FailedPrivilegeLevel;                             		// 0x0095 (0x0001) [0x0000000000002000] (CPF_Transient)
	TArray<int>                                        PendingControllerIDs;                             		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     CheckDelegates;                                   		// 0x00A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             EventFinished;                                    		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CheckDelegate__Delegate;                        		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PRIVILEGECHECK_X));
		}

		return uClassPointer;
	};

	bool HasFeatureRestriction(int& OutControllerID, unsigned char& OutFailedPrivilege);
	void OnFinished();
	void Fail(struct FString Reason);
	void HandlePrivilege(unsigned char LocalUserNum, unsigned char Privilege, unsigned char Level, class UError* InFailReason);
	void CheckPrivilege();
	void CheckPsyNetComplete(class UError* ConnectionError);
	void CheckPsyNet();
	void ValidateUserOnlineAccount();
	void CheckInternet();
	class UPrivilegeCheck_X* RequirePrivilege(unsigned char Privilege);
	class UPrivilegeCheck_X* RequirePsyNet();
	class UPrivilegeCheck_X* RequireUserOnlineAccount();
	class UPrivilegeCheck_X* RequireInternet();
	void StartNextCheck();
	void Start();
	void Init(int ControllerId);
	void CheckDelegate();
};

// Class ProjectX.AddReservationMessage_X
// 0x006C (0x0060 - 0x00CC)
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray<struct FReservationPlayerData>              Players;                                          		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMarkSplitscreenAsRemote : 1;                     		// 0x00C8 (0x0004) [0x0000000000006000] [0x00000002] (CPF_Transient | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ADDRESERVATIONMESSAGE_X));
		}

		return uClassPointer;
	};

	struct FUniqueNetId __AddReservationMessage_X__GetPlayerIDs_A54F26ED4B962AB9D07217B671162491(struct FReservationPlayerData P);
	TArray<struct FUniqueNetId> GetPlayerIDs();
	void GetPlayerMapPrefs(struct FUniqueNetId PlayerID, TArray<struct FName>& Likes, TArray<struct FName>& Dislikes);
	class UAddReservationMessage_X* SetDisableCrossPlay(unsigned long bValue);
	class UAddReservationMessage_X* AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName, unsigned long bRemotePlayer);
	class UAddReservationMessage_X* AddOnlinePlayer(class UOnlinePlayer_X* Player, unsigned long bFriendJoin);
	class UAddReservationMessage_X* AddPlayers();
	class UAddReservationMessage_X* SetReservationID(struct FString Id);
};

// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x000C (0x00A4 - 0x00B0)
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	struct FName                                       AnimNodeName;                                     		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ACTIVATEANIMSERIESCOMPONENT_X));
		}

		return uClassPointer;
	};

	void SetAnimSeriesActiveInComponent(class USkeletalMeshComponent* SKC, unsigned long bActive);
	void SetAnimSeriesActive(unsigned long bActive);
	void eventDetached();
	void eventAttached();
};

// Class ProjectX.OnlineGameParty_X
// 0x0410 (0x0098 - 0x04A8)
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray<struct FPartyMember>                        PartyMembers;                                     		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PartyID;                                          		// 0x00A8 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                PartyLeader;                                      		// 0x00B8 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                MaxPartySize;                                     		// 0x0100 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UOnlineMessageComponent_X*                   MessageComponent;                                 		// 0x0108 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                              		// 0x0110 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                                 		// 0x0118 (0x0008) [0x0000000000000000]               
	int                                                PartyTimeout;                                     		// 0x0120 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int                                                CurrentPartySize;                                 		// 0x0124 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      LastbSearchingStatus : 1;                         		// 0x0128 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      LastLockStatus : 1;                               		// 0x0128 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FName                                       LastSearchState;                                  		// 0x012C (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FPartyJoinMatchSettings                     MatchSettings;                                    		// 0x0138 (0x0068) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned char                                      ProcessingStatus;                                 		// 0x01A0 (0x0001) [0x0000000000002000] (CPF_Transient)
	struct FString                                     NotInSameOnlineGameError;                         		// 0x01A8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     MissingLicenseAgreementError;                     		// 0x01B8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UPartySequence_InvitedToPlatformParty_X*     SequenceInvitedToPlatformParty;                   		// 0x01C8 (0x0008) [0x0000000000000000]               
	class UPartySequence_PsyNetPartyUpgrade_X*         SequencePsyNetPartyUpgrade;                       		// 0x01D0 (0x0008) [0x0000000000000000]               
	class UPartySequence_InvitedToPsyNetParty_X*       SequenceInvitedToPsyNetParty;                     		// 0x01D8 (0x0008) [0x0000000000000000]               
	class UPartyConfig_X*                              PartyConfig;                                      		// 0x01E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPsyNetConfig_X*                             Config;                                           		// 0x01E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineLobbyInterface*                       PlatformLobbyInterface;                           		// 0x01F0 (0x0010) [0x0000000000000000]               
	unsigned char                                      UnknownData00[0x8];                               		// 0x01F8 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY
	class UParties_X*                                  PsyNetLobbyInterface;                             		// 0x0200 (0x0008) [0x0000000000000000]               
	int                                                CreatePartyLocalPlayerNum;                        		// 0x0208 (0x0004) [0x0000000000000000]               
	class UCrossplayConfig_X*                          CrossplayConfig;                                  		// 0x0210 (0x0008) [0x0000000000000000]               
	class UFindServerTask_X*                           FindServerTask;                                   		// 0x0218 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                    		// 0x0220 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPartyInviteAccepted__Delegate;                		// 0x0238 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                   		// 0x0250 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInvitedSilent__Delegate;             		// 0x0268 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                    		// 0x0280 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;                		// 0x0298 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyLeaderChanged__Delegate;              		// 0x02B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;             		// 0x02C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyError__Delegate;                      		// 0x02E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;              		// 0x02F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;            		// 0x0310 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;                  		// 0x0328 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;          		// 0x0340 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;            		// 0x0358 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;         		// 0x0370 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;         		// 0x0388 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerTradingChanged__Delegate;            		// 0x03A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                   		// 0x03B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;           		// 0x03D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;              		// 0x03E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReadyToTrade__Delegate;                    		// 0x0400 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNotReadyToTrade__Delegate;                 		// 0x0418 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTradeReady__Delegate;                      		// 0x0430 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;            		// 0x0448 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;            		// 0x0460 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;        		// 0x0478 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartedJoinFriend__Delegate;               		// 0x0490 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEPARTY_X));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__UpdatePartyInfo_EBB86C904A39255C3995ACA62792847E(struct FPartyMember PM);
	bool __OnlineGameParty_X__UpdatePartyInfo_BDA739B948D04E622C5CA98AC548B54F(struct FLobbyMember LM);
	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_878A978145DFAD7DDE83D49A7002CA7B(struct FPartyMember PM);
	struct FUniqueNetId __OnlineGameParty_X__GetPlayersWithPrimaryMemberID_B3B8244A455BE226999C8381B36CA601(struct FPartyMember Member);
	void HandlePlatformPartyIdChanged(class UPartyPlatformSession_X* Session);
	void HandleSetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_SetPlatformParty_X* Message);
	void RequestRejoinPartyInfo();
	class UError* CheckForPlayerInviteError(struct FUniqueNetId PlayerID);
	void SendPartyInvite(struct FUniqueNetId PlayerID);
	void HandlePartyConfigChanged();
	void HandleMessageForMetrics(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandlePlayerTradeComplete(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SendPlayerTradeComplete();
	void SendPlayerTradeCompleteAndClear(unsigned long bWasCanceled);
	void HandleReadyToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToTrade(unsigned long bReadyToTrade);
	void SetPartyMessageHandlerTradeProductUpdate(unsigned long bAddHandler);
	void ClearLocalTradingPlayer(unsigned long bWasCanceled);
	bool ClearTradingPartyMember(struct FPartyMember& TradingMember);
	bool ClearTradingPlayer(struct FUniqueNetId PartyMemberID);
	void ClearAllTradingPlayers();
	void HandleAcceptInviteToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	bool CanAcceptTrade();
	void AcceptInviteToTrade(unsigned long bAccepted);
	struct FGuid ResolveGuids(struct FGuid& A, struct FGuid& B);
	struct FGuid GetTradingPlayerTradeID();
	struct FUniqueNetId GetTradingPlayerID();
	struct FString GetTradingPlayerName();
	void HandleInviteToTradeMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message);
	void InvitePlayerToTrade(struct FUniqueNetId InMemberId);
	bool IsPlayerTrading(struct FUniqueNetId InMemberId);
	void SetPlayersTrading(struct FUniqueNetId InMember1Id, struct FUniqueNetId InMember2Id, unsigned long bTrading);
	struct FString GetMemberName(struct FUniqueNetId InMemberId);
	TArray<struct FUniqueNetId> GetPlayersWithPrimaryMemberID(struct FUniqueNetId InPrimaryID);
	TArray<struct FUniqueNetId> GetLocalMemberIDs();
	TArray<struct FUniqueNetId> GetOrderedPartyMemberIDs();
	TArray<struct FUniqueNetId> GetPartyMemberIDs();
	void HandleSessionCreated();
	bool IsProcessing();
	void SetProcessingStatus(unsigned char Status);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetPlayerRatingString(struct FUniqueNetId PlayerID, int Playlist);
	void OnPartyError(class UError* Error);
	void HandlePartyError(struct FString Error);
	void OnPartyChanged(unsigned char NewProcessingStatus);
	bool TryGetValueInt(struct FString Key, TArray<struct FLobbyMetaData>& MetaData, int& Value);
	bool PartyHasDisableCrossPlay();
	void KickForCrossplayDisabled(struct FUniqueNetId MemberId);
	bool HasMultiplePlatforms();
	void KickCrossplayDisabledMembers();
	void SetCrossPlayTextChatForMember(struct FUniqueNetId PartyMemberID, unsigned char CrossChatState);
	void BroadcastCrossTextChatState();
	void HandleCrossPlatformTextChatMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SetDisableCrossPlayForMember(struct FUniqueNetId PartyMemberID, unsigned long bDisableCrossPlay);
	void HandleDisableCrossPlayMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastDisableCrossPlay();
	struct FString GetAnyLoggedInRestrictionPlayerName();
	struct FString GetAnyAppOwnerRestrictionPlayerName();
	struct FString GetMatchmakingRestrictionPlayerName(unsigned char Restriction);
	struct FString GetMatchmakingRestrictionError();
	bool IsPlayerInMainMenu(struct FUniqueNetId MemberId);
	bool IsPlayerInMatch(struct FUniqueNetId MemberId);
	void SetAvailableForMatchmakingForMember(struct FUniqueNetId PartyMemberID, int MatchmakeRestrictions);
	void HandleMatchmakingAvailability(class UOnlineMessageComponent_X* Component, class UObject* Message);
	int BuildMatchmakingRestrictions();
	void BroadcastMatchmakingAvailabilityDelayed();
	void BroadcastMatchmakingAvailability();
	void BroadcastAllLocalPlayers();
	void BroadcastLocalPlayersDelayed();
	void BroadcastLocalPlayers();
	bool ShouldLeavePartyOnDisconnect();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLocalPlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerLeave(class ULocalPlayer* Player);
	void UpdatePartyMember(class ULocalPlayer_X* Player);
	void HandleOnlinePlayerNameChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerJoin(class ULocalPlayer* Player);
	void ProcessLocalPlayersMessage(class UPartyMessage_LocalPlayers_X* Message);
	void HandleLocalPlayers(class UOnlineMessageComponent_X* Component, class UObject* ObjMessage);
	bool AllowSplitScreenPlayer(int ControllerId, class UError*& OutError);
	bool HasPartyMembers();
	int GetPartySize();
	void HandleClientReservationMessage_ConnectionValid(struct FServerReservationData Reservation, struct FJoinMatchSettings Settings);
	void HandleClientReservationMessage(class UIReservationConnection_X* Connection, class UClientReservationMessage_X* Message);
	void HandleSearchStatus(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastSearchStatus();
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage();
	bool TogglePartyLock();
	int GetMaxPartySize();
	bool AllowPartySize(int InSize);
	bool IsPartyOverFull();
	bool AllowNewMember();
	void UpdatePartyLock();
	void HandleFindGameStateChanged(struct FName NewState);
	void ClearLastServerAddress();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnNewSettingsChosen(int PlaylistId);
	void OnNewGame();
	void SetMatchmakingSearching(unsigned long bState);
	void SetSearchState(struct FName SearchState);
	struct FUniqueNetId GetLocalMemberId();
	bool IsMemberLocal(struct FUniqueNetId MemberId);
	bool HasRemoteMember();
	void OnPartyLeaderChanged();
	class UError* GetKickedFromPartyError(unsigned char Reason);
	void KickedFromParty(unsigned char Reason);
	void HandleKickMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandleLobbySettingsUpdateMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage);
	void HandleLobbyDestroyed(unsigned char Reason, struct FUniqueLobbyId& LobbyId);
	void HandleLobbyReceiveBinaryData(int MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<unsigned char>& Data);
	void RemoveAllPartyMembers();
	void RemovePartyMemberByLocalPlayer(class ULocalPlayer* Player);
	void RemovePartyMemberByIDWithNotify(struct FUniqueNetId MemberId);
	void RemovePartyMemberByID(struct FUniqueNetId MemberId);
	int AddPartyMember(struct FUniqueNetId PrimaryMemberId, struct FUniqueNetId MemberId, struct FString MemberName, int ControllerId);
	void OnEditExistingPartyMember(int PartyMemberIdx);
	void OnAddNewPartyMember(int PartyMemberIdx);
	void UpdatePartyInfo(struct FActiveLobbyInfo& Lobby);
	void UpdatePartyLeader(struct FActiveLobbyInfo& Lobby);
	void HandleLobbySettingsUpdated(struct FActiveLobbyInfo& Lobby);
	void OnNewLobby();
	void BroadcastPartyInfo();
	void HandleJoinLobby_ConnectionValid(struct FString LobbyError);
	void HandleJoinLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	class UError* GetJoinPartyError(struct FActiveLobbyInfo& LobbyInfo);
	class UError* CheckForJoinPartyError(struct FActiveLobbyInfo& LobbyInfo);
	void BroadcastStateDelayed();
	void BroadcastState();
	void CheckForJoiningPlayerKick(struct FUniqueNetId PlayerID);
	void HandleLobbyMemberStatusUpdate(int MemberIndex, int InstigatorIndex, struct FString Status, struct FActiveLobbyInfo& LobbyInfo);
	void CancelJoinGameFromPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void HandleFindServerError(class UError* Error);
	void HandleFindServer(struct FServerReservationData Reservation, struct FJoinMatchSettings Settings);
	void HandleConfirmJoinGame_ConnectionValid(struct FPartyJoinMatchSettings InSettings);
	void HandleConfirmJoinGame(struct FPartyJoinMatchSettings InSettings);
	bool JoinFriend(struct FUniqueNetId PartyMemberID);
	bool WantsToFollowTheLeaderOutOfGame();
	bool IsInSameMatch(struct FUniqueNetId PartyMemberA, struct FUniqueNetId PartymemberB);
	void HandlePartyJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_JoinGame_X* Message);
	bool CanBroadcastMatchmakingMessages();
	void BroadcastCancelJoinMessage();
	void BroadcastPartyServer();
	void HandleServerReserved();
	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	struct FPartyMemberServer GetPartyMemberServer();
	void HandlePartyMemberJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject);
	bool ClearServersForPostGameRankedMatch();
	bool SetPartyMemberJoinGame(struct FUniqueNetId& PlayerID, struct FPartyMemberServer& Server);
	void BroadcastPartyMemberServer(struct FUniqueNetId PlayerID, struct FPartyMemberServer Server);
	void BroadcastLobbySettings(struct FActiveLobbyInfo LobbyInfo);
	bool SetLeader(struct FUniqueNetId NewLeader);
	bool IsPrimaryPlayerIndex(int MemberIdx);
	bool IsPrimaryPlayer(struct FUniqueNetId& PlayerID);
	bool IsPlayerInParty(struct FUniqueNetId& PlayerID);
	bool KickPlayer(struct FUniqueNetId PlayerID, unsigned char Reason);
	bool ShowPlatformInviteUI(unsigned char LocalUserNum);
	struct FString GetShowPlatformInviteUIError();
	bool CanShowPlatformInviteUI();
	bool ShowInviteUI(unsigned char LocalUserNum);
	bool LeaveParty(struct FString Reason);
	bool IsInCurrentGame(struct FUniqueNetId MemberId);
	bool IsPartyLeader();
	bool IsInPartyID(struct FUniqueLobbyId InPartyId);
	bool IsInParty();
	void JoinParty(int LocalPlayerNum, struct FUniqueLobbyId& InPartyId);
	void CheckPartyTimeout();
	void StartPartyTimeout();
	void OnPartyCreated(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& InPartyId);
	void CreatePartyInternal_ConnectionChecked(class UError* ConnectionError, class UOnlineLobbyInterface* LobbyInterface, int LocalPlayerNum, struct FScriptDelegate Handler);
	void CreatePartyInternal(class UOnlineLobbyInterface* LobbyInterface, int LocalPlayerNum, struct FScriptDelegate Handler);
	void CreatePlatformParty(int LocalPlayerNum, struct FScriptDelegate Handler);
	void CreateParty(int LocalPlayerNum, struct FScriptDelegate Handler);
	class UOnlineLobbyInterface* GetCreatePartyLobbyInterface();
	bool ShouldCreatePsyNetParty();
	void SetLobbyInterfacePsyNet();
	void SetLobbyInterfacePlatform();
	void ShortCircuitPartyInvitedPrompt(struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void HandlePartySizeTracker(class UOnlineGameParty_X* PartyObject);
	void HandlePrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, struct FUniqueNetId PlayerID);
	class UPartyMetrics_X* GetMetrics();
	void SetLobbyInterface(class UOnlineLobbyInterface* Lobby);
	bool IsUsingPsyNetParty();
	void InitLobbyInterfaces();
	void OnExit();
	void OnInit();
	void EventStartedJoinFriend();
	void EventPlayerIsCurrentlyTrading(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventPlayerInMatchChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventAnotherInviteToTrade(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventTradeReady(class UOnlineGameParty_X* PartyObject);
	void EventNotReadyToTrade(class UOnlineGameParty_X* PartyObject);
	void EventReadyToTrade(class UOnlineGameParty_X* PartyObject);
	void EventCloseInviteToTrade(class UOnlineGameParty_X* PartyObject, unsigned long bWasCanceled);
	void EventAcceptedInviteToTrade(class UOnlineGameParty_X* PartyObject);
	void EventInviteToTrade(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventPlayerTradingChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId, unsigned long bIsPlayerTrading);
	void EventDisableCrossPlayChanged(class UOnlineGameParty_X* PartyObject);
	void EventProcessingStatusChanged(class UOnlineGameParty_X* PartyObject);
	void EventLeaderLeftOnlineGame(class UOnlineGameParty_X* PartyObject);
	void EventConfirmJoinGameMessage(class UOnlineGameParty_X* PartyObject);
	void EventPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameSuccess(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameError(class UOnlineGameParty_X* PartyObject, struct FString LocalizedErrorString);
	void EventPartyError(class UOnlineGameParty_X* PartyObject, class UError* Error);
	void EventSearchStatusChanged(class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage);
	void EventPartyLeaderChanged(class UOnlineGameParty_X* PartyObject);
	void EventPartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void EventPartyChanged(class UOnlineGameParty_X* PartyObject);
	void EventPlayerInvitedSilent(class UOnlineGameParty_X* PartyObject, struct FScriptDelegate Callback, struct FUniqueLobbyId& InPartyId, struct FUniqueNetId& InviterId);
	void EventPlayerInvited(class UOnlineGameParty_X* PartyObject, struct FScriptDelegate Callback, struct FUniqueLobbyId& InPartyId, struct FUniqueNetId& FriendId);
	void OnPartyInviteAccepted(int LocalPlayerNum, struct FUniqueLobbyId& InPartyId);
	void EventPartyCreated(class UOnlineGameParty_X* PartyObject, unsigned long bWasSuccessful);
};

// Class ProjectX.OnlineGameAccount_X
// 0x0040 (0x0098 - 0x00D8)
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                    		// 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              UpdateCurrentGameTaskTimer;                       		// 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                CurrentPlaylistId;                                		// 0x00A4 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;          		// 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;              		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEACCOUNT_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnMainMenuOpened();
	int GetNumLocalPlayers();
	void SendUpdatePlayerCurrentGameRPC();
	void SendUpdatePlayerCurrentGameRequest();
	void UpdateCurrentGame();
	void ClearCurrentPlaylist();
	void SetCurrentPlaylist(int PlaylistId);
	void HandleActiveServerChanged();
	void HandlePsyNetConnectionChanged(class UPsyNetConnection_X* C);
	void HandlePlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnPrimaryPlayerIdChanged();
	void SetPrimaryPlayer(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventCurrentPlaylistSet(class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist);
	void EventPrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, struct FUniqueNetId PlayerID);
};

// Class ProjectX.OnlineClubCache_X
// 0x0028 (0x0070 - 0x0098)
class UOnlineClubCache_X : public UComponent
{
public:
	TArray<class UClubDetails_X*>                      ClubDetailsCache;                                 		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClubUpdated__Delegate;                     		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINECLUBCACHE_X));
		}

		return uClassPointer;
	};

	unsigned long long __OnlineClubCache_X__ClearAllExcept_2F9532334E0889DDC287CDBA24EB8C47(class UClubDetails_X* C);
	void ClearAllExcept(TArray<unsigned long long>& KeepClubs);
	void Clear();
	void Destroy(unsigned long long ClubID);
	void Add(class UClubDetails_X* ClubDetails);
	unsigned long long GetPlayerClubID(struct FUniqueNetId PlayerID);
	class UClubDetails_X* GetPlayerClubDetails(struct FUniqueNetId PlayerID);
	class UClubDetails_X* GetClubDetails(unsigned long long ClubID);
	void NotifyWhenClubUpdated(struct FScriptDelegate Callback);
	void EventClubUpdated(class UOnlineClubCache_X* Cache, class UClubDetails_X* ClubDetails);
};

// Class ProjectX.AddReservationMessagePrivate_X
// 0x0094 (0x00CC - 0x0160)
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	struct FCustomMatchSettings                        Settings;                                         		// 0x00D0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ADDRESERVATIONMESSAGEPRIVATE_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugString();
	class UAddReservationMessagePrivate_X* SetSettings(struct FCustomMatchSettings& InSettings);
};

// Class ProjectX.AddReservationMessagePublic_X
// 0x0034 (0x00CC - 0x0100)
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	struct FJoinMatchSettings                          Settings;                                         		// 0x00D0 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlinePlayerMapPrefs>               MapPrefs;                                         		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ADDRESERVATIONMESSAGEPUBLIC_X));
		}

		return uClassPointer;
	};

	class UAddReservationMessage_X* AddPlayers();
	void SetPlayerPref(class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer);
	void GetPlayerMapPrefs(struct FUniqueNetId PlayerID, TArray<struct FName>& Likes, TArray<struct FName>& Dislikes);
	class UAddReservationMessage_X* AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName, unsigned long bRemotePlayer);
	struct FString GetDebugString();
	struct FString GetPlayerDebugString(struct FReservationPlayerData Player);
	class UAddReservationMessagePublic_X* SetSettings(struct FJoinMatchSettings& InSettings);
};

// Class ProjectX.OnlineGameSkill_X
// 0x0058 (0x0098 - 0x00F0)
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray<class UPlaylistSkillCache_X*>               Playlists;                                        		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPlayerSeasonRewardProgress>         SeasonRewards;                                    		// 0x00A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FSkillSyncRequest>                   SyncRequests;                                     		// 0x00B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        SkillsSyncedPlayers;                              		// 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                     		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMESKILL_X));
		}

		return uClassPointer;
	};

	bool SkillsSynced(struct FUniqueNetId PlayerID);
	int GetHighestSkillTier(struct FUniqueNetId PlayerID);
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress(struct FUniqueNetId PlayerID);
	class UPlaylistSkillCache_X* GetPlaylistSkillCache(int Playlist);
	void HandleSkillsUpdateFailed(class URPC_X* RPC);
	void SetPlayerSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void ReplicateSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void HandleSkillsUpdated(class URPC_UpdateSkills_X* RPC);
	void SubmitMatch(class UMatchData_X* Match, struct FString MatchGUID);
	void Clear();
	float GetConservativeMMR(float Mu, float Sigma);
	float GetPlayerConservativeMMR(struct FUniqueNetId PlayerID, int Playlist);
	float GetMMR(float Mu, float Sigma);
	float GetPlayerMMR(struct FUniqueNetId PlayerID, int Playlist);
	struct FUpdatedPlayerSkillRating GetUpdatedPlayerRating(struct FUniqueNetId PlayerID, int Playlist);
	struct FPlayerSkillRating GetPlayerRating(struct FUniqueNetId PlayerID, int Playlist);
	void OnSkillSynced(struct FUniqueNetId PlayerID, class UError* Error);
	void CacheSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void HandleSkillRequestCompleteRPC(class URPC_GetPlayerSkill_X* RPC);
	void SyncPlayerSkill(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	void CacheSkill(struct FUpdatedPlayerSkillRating Rating, int Playlist);
	void PreCacheSkill(struct FPlayerSkillRating Rating, int Playlist);
	int GetSkillPlaylistID(int PlaylistId);
	void EventSkillSynced(class UOnlineGameSkill_X* Skill, struct FUniqueNetId PlayerID, class UError* Error);
};

// Class ProjectX.OnlineGamePlaylists_X
// 0x0068 (0x0098 - 0x0100)
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                    		// 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UGameSettingPlaylist_X*>              DownloadedPlaylists;                              		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class URankedConfig_X*                             RankedConfig;                                     		// 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     CompetitiveCategory;                              		// 0x00B8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     CasualCategory;                                   		// 0x00C8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     ExtraModeCategory;                                		// 0x00D8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;                		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEPLAYLISTS_X));
		}

		return uClassPointer;
	};

	bool __OnlineGamePlaylists_X__GetPrivateMatch_ED8C4DFB4A179E3070B667903FE5955D(class UGameSettingPlaylist_X* P);
	bool __OnlineGamePlaylists_X__GetLanMatch_374E0CE5471AF2B5B018B7A387DD46B6(class UGameSettingPlaylist_X* P);
	struct FString GetLocalizedPlaylistIDCategory(int PlaylistId);
	class UGameSettingPlaylist_X* GetLanMatch();
	class UGameSettingPlaylist_X* GetPrivateMatch();
	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName>& SelectedPlaylists);
	bool IsRankedEnabled();
	bool IsRankedPlaylistID(int PlaylistId);
	bool IsRankedPlaylistName(struct FName PlaylistName);
	bool IsUnrankedPlaylistName(struct FName PlaylistName);
	bool IsStandardPlaylistID(int PlaylistId);
	bool IsStandardPlaylistName(struct FName PlaylistName);
	bool IsNonStandardPlaylistName(struct FName PlaylistName);
	void NamesToIDs(TArray<struct FName>& Names, TArray<int>& Ids);
	struct FString GetPlaylistFriendlyName(int PlaylistId);
	void CopyPlaylistGameTags();
	void UpdateORSPlaylistData();
	void HandlePlaylistsChanged(class UObjectProvider* Provider);
	int NameToID(struct FName PlaylistName);
	int GetTimeRemaining(int PlaylistId);
	bool IsTimeConstrained(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByID(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByName(struct FName PlaylistName);
	bool IsPlaylistEnabled(class UGameSettingPlaylist_X* Playlist);
	void NotifyWhenChanged(struct FScriptDelegate Callback);
	void OnInit();
	void EventPlaylistsChanged(class UOnlineGamePlaylists_X* PlaylistsObj);
};

// Class ProjectX.GameSettingPlaylist_X
// 0x00AC (0x0064 - 0x0110)
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	struct FString                                     Title;                                            		// 0x0068 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                PlayerCount;                                      		// 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bStandard : 1;                                    		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bRanked : 1;                                      		// 0x008C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bSolo : 1;                                        		// 0x008C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bExtraMode : 1;                                   		// 0x008C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bPrivate : 1;                                     		// 0x008C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      bTournament : 1;                                  		// 0x008C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                            		// 0x008C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      bAllowForfeit : 1;                                		// 0x008C (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      bDisableRankedReconnect : 1;                      		// 0x008C (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      bIgnoreAssignTeams : 1;                           		// 0x008C (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      bAllowBotFills : 1;                               		// 0x008C (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      bKickOnMigrate : 1;                               		// 0x008C (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      bCheckRankedMatchReservationID : 1;               		// 0x008C (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	unsigned long                                      bIsMicroEventPlaylist : 1;                        		// 0x008C (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	unsigned long                                      bHasVariablePlayerCount : 1;                      		// 0x008C (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	unsigned long                                      bNew : 1;                                         		// 0x008C (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	unsigned long                                      bAllowClubs : 1;                                  		// 0x008C (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	unsigned long                                      bAllowStayAsParty : 1;                            		// 0x008C (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	struct FString                                     PlaylistImageURL;                                 		// 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistImageTexture;                             		// 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconActiveURL;                            		// 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconInactiveURL;                          		// 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTimeWindow*                                 PlaylistTimeWindow;                               		// 0x00D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UPresetMutators_X*>                   PresetMutators;                                   		// 0x00E0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapName;                                          		// 0x00F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     ServerCommand;                                    		// 0x00F8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapSetName;                                       		// 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMESETTINGPLAYLIST_X));
		}

		return uClassPointer;
	};

	bool UseRandomizedNameAndPassword();
	bool ShouldAllowRankedReconnect();
	bool IsLanMatch();
	bool IsTournamentMatch();
	bool IsPrivateMatch();
	bool IsRankedMatch();
	bool ShouldUpdateSkills();
	bool IsValidID(int InPlaylistID);
	bool IsValid();
	struct FString GetLocalizedDescription();
	struct FString GetLocalizedName();
	void Setup(class UPlaylistSettings_X* Settings);
};

// Class ProjectX.SeqEvent_Spawned_X
// 0x000C (0x017C - 0x0188)
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	class AActor*                                      Spawned;                                          		// 0x0180 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SEQEVENT_SPAWNED_X));
		}

		return uClassPointer;
	};

	void TriggerFor(class AActor* A);
};

// Class ProjectX.CameraStateBlender_X
// 0x00A0 (0x0070 - 0x0110)
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                       		// 0x0070 (0x0050) [0x0000000000002000] (CPF_Transient)
	struct FCameraOrientation                          TransitionDelta;                                  		// 0x00C0 (0x002C) [0x0000000000002000] (CPF_Transient)
	class UCameraState_X*                              CameraState;                                      		// 0x00F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;             		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERASTATEBLENDER_X));
		}

		return uClassPointer;
	};

	bool IsTransitioning();
	void BlendCameraState(float DeltaTime, struct FCameraOrientation& OutPOV);
	void PostProcessPOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void Tick(float DeltaTime);
	void ClearTransitionDelta();
	void ClearTransition();
	bool TransitionToState(class UCameraState_X* NewState);
	void Snap();
	void EventBlenderStateChanged(class UCameraStateBlender_X* CameraBender);
};

// Class ProjectX.CameraState_X
// 0x0028 (0x0064 - 0x008C)
class UCameraState_X : public UStateObject_X
{
public:
	struct FViewTargetTransitionParams                 DefaultBlendParams;                               		// 0x0068 (0x0010) [0x0000000000000001] (CPF_Edit)    
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0078 (0x0008) [0x0000000000002000] (CPF_Transient)
	class ACamera_X*                                   Camera;                                           		// 0x0080 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bCanSwivel : 1;                                   		// 0x0088 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERASTATE_X));
		}

		return uClassPointer;
	};

	void OnSnap();
	void ModifyPostProcessSettings(struct FPostProcessSettings& PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator& OutViewRotation, struct FRotator& OutDeltaRot);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void Tick(float DeltaTime);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetEndBlendParams(class UCameraState_X* NewState);
	struct FViewTargetTransitionParams GetStartBlendParams(class UCameraState_X* PreviousState);
	bool ShouldKeepExecuting();
	bool ShouldExecute();
	void ShutDown();
	void Init(class ACamera_X* InCamera);
};

// Class ProjectX.CameraUtils_X
// 0x0000 (0x0060 - 0x0060)
class UCameraUtils_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERAUTILS_X));
		}

		return uClassPointer;
	};

	void UpdateAspectRatioFOV(float AspectRatio, struct FCameraOrientation& OutPOV);
	void BlendPOVs(struct FCameraOrientation FromPOV, struct FCameraOrientation ToPOV, float Percent, struct FCameraOrientation& OutPOV);
	float GetBlendPercent(struct FViewTargetTransitionParams BlendParams, float Time);
	bool IsPointInView(struct FVector Point, struct FVector ViewStart, struct FRotator ViewRotation, float FOV);
	float GetFrustumDistanceFromWidth(float FOV, float Width, float AspectRatio);
	float GetFrustumDistanceFromHeight(float FOV, float Height);
	void GetFrustumSize(float Dist, float FOV, float AspectRatio, float& OutWidth, float& OutHeight);
	void CalculateDistanceRotation(struct FVector Focus, struct FVector Origin, float& OutDistance, struct FRotator& OutRotation);
};

// Class ProjectX.CameraModifier_CameraShake_X
// 0x0004 (0x009C - 0x00A0)
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERAMODIFIER_CAMERASHAKE_X));
		}

		return uClassPointer;
	};

	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void RemoveCameraShake(class UCameraShake* Shake);
};

// Class ProjectX.CameraState_CamActor_X
// 0x0180 (0x008C - 0x020C)
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned long                                      bUseOverridePostProcess : 1;                      		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class ACameraActor*                                CamActor;                                         		// 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FPostProcessSettings                        PrevPost;                                         		// 0x00A0 (0x0168) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              PrevPostAlpha;                                    		// 0x0208 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERASTATE_CAMACTOR_X));
		}

		return uClassPointer;
	};

	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetBlendParams(class UCameraState_X* PrevState);
	bool ShouldExecute();
};

// Class ProjectX.CDN_X
// 0x0020 (0x0060 - 0x0080)
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                              		// 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     BlogURL;                                          		// 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CDN_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.HUD_X
// 0x0018 (0x0308 - 0x0320)
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                                  		// 0x0308 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDebugDrawer_X*                              DebugDrawer;                                      		// 0x0310 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTexture*                                    DebugTexture;                                     		// 0x0318 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_HUD_X));
		}

		return uClassPointer;
	};

	void SetShowDebugObject(class UObject* inObj);
	void ShowDebugInfo(float& out_YL, float& out_YPos);
	void ShowDebug(struct FName DebugType);
	void DebugCategory(struct FName DebugType);
	void DebugCategorySwitch(unsigned long bForward);
	void DrawPauseScreen();
	bool ShouldShowConsoleMessage(struct FConsoleMessage InConsoleMessage);
	void DrawDebugTexture();
	void DrawHUD();
};

// Class ProjectX.__CheatManager_X__RandomSleep_75FE9F6C45791A19D1B94AB8F65C595A
// 0x0010 (0x0060 - 0x0070)
class U__CheatManager_X__RandomSleep_75FE9F6C45791A19D1B94AB8F65C595A : public UObject
{
public:
	float                                              MinDelay;                                         		// 0x0060 (0x0004) [0x0000000000000000]               
	float                                              MaxDelay;                                         		// 0x0064 (0x0004) [0x0000000000000000]               
	float                                              MinSleep;                                         		// 0x0068 (0x0004) [0x0000000000000000]               
	float                                              MaxSleep;                                         		// 0x006C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___CHEATMANAGER_X__RANDOMSLEEP_75FE9F6C45791A19D1B94AB8F65C595A));
		}

		return uClassPointer;
	};

	void __CheatManager_X__RandomSleep_75FE9F6C45791A19D1B94AB8F65C595A();
};

// Class ProjectX.DebugDrawer_X
// 0x0040 (0x00C0 - 0x0100)
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              TextScale;                                        		// 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UCanvas*                                     Canvas;                                           		// 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<struct FName>                               DebugCategories;                                  		// 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FName>                               PossibleDebugCategories;                          		// 0x00E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              CharWidth;                                        		// 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastWidestElement;                                		// 0x00F4 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bHideDebug : 1;                                   		// 0x00F8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              OffsetX;                                          		// 0x00FC (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DEBUGDRAWER_X));
		}

		return uClassPointer;
	};

	void DrawHeader();
	void DrawSpacer(float Height);
	void DrawBackground(float Width, float Height);
	void FinishDrawDebug();
	void StartDrawDebug(class UCanvas* C);
	void PrintText(struct FString Text, struct FColor InColor);
	void PrintProperty(struct FString PropertyName, struct FString Value);
	void PrintSeperater();
	void UpdateCanvasIndentation();
	void EndSection();
	void StartSection();
	void SetPos(float X, float Y);
	bool ShouldDisplayDebug(struct FName Category);
};

// Class ProjectX.OnlineGameLanServer_X
// 0x00E0 (0x0180 - 0x0260)
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                     		// 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x0188 (0x0090) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                CustomMatchOwner;                                 		// 0x0218 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMELANSERVER_X));
		}

		return uClassPointer;
	};

	void StartReservationTimeout();
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	void TravelToMap(struct FString ServerCommand);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void GoToNextMap();
	void ClearSettings();
	void HandleReservationsTimeout();
	struct FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(struct FUniqueNetId NewOwner);
	void SetupPrivateMatch(struct FCustomMatchSettings Settings, struct FUniqueNetId Creator);
	void OnInit();
};

// Class ProjectX.IOnlineGameHost_X
// 0x0000 (0x0060 - 0x0060)
class UIOnlineGameHost_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_IONLINEGAMEHOST_X));
		}

		return uClassPointer;
	};

	struct FUniqueNetId GetCustomMatchOwner();
	struct FCustomMatchSettings GetCustomMatchSettings();
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
};

// Class ProjectX.OnlineGameJoinGame_X
// 0x03D8 (0x0098 - 0x0470)
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int                                                JoinCountdownTime;                                		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     FailCommand;                                      		// 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     LoadingScreenCommand;                             		// 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UShakeComponent_X*                           JoinGameShake;                                    		// 0x00C0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UReservationBeacon_X*                        ReservationBeacon;                                		// 0x00C8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     WaitingForPlayersString;                          		// 0x00D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     ReservationNotRespondingString;                   		// 0x00E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     ReservationFullString;                            		// 0x00F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     PartyTeamReservationFullString;                   		// 0x0100 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NoFriendJoinPrivateMatchString;                   		// 0x0110 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     BeaconTimedOutString;                             		// 0x0120 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NotAllPlayersJoinedString;                        		// 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     CanceledString;                                   		// 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SecurityKeyAcquisitionFailed;                     		// 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SecurityKeyVerificationFailed;                    		// 0x0160 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SendingReservationMessage;                        		// 0x0170 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     JoiningPartyLeadersGame;                          		// 0x0180 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     InvalidPassword;                                  		// 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     WrongPlaylistString;                              		// 0x01A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     WrongRankedMatchString;                           		// 0x01B0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     MatchEndedString;                                 		// 0x01C0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     CrossplayDisabled;                                		// 0x01D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     AnotherPlayerCanceled;                            		// 0x01E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FActiveServerData                           ActiveServer;                                     		// 0x01F0 (0x00C0) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bUseNetworkNextDriver : 1;                        		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FJoinMatchSettings                          Settings;                                         		// 0x02B8 (0x0020) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PendingFailMessage;                               		// 0x02D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UPlayer*>                             JoinedPlayers;                                    		// 0x02E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        CustomMatch;                                      		// 0x02F8 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URPC_GenerateKeys_X*>                 GenerateKeysRPCs;                                 		// 0x0388 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;                		// 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                    		// 0x03B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;                		// 0x03C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;                  		// 0x03E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventActiveServerChanged__Delegate;             		// 0x03F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerReserved__Delegate;                  		// 0x0410 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                		// 0x0428 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                     		// 0x0440 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;               		// 0x0458 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEJOINGAME_X));
		}

		return uClassPointer;
	};

	void HandleCanPlayOnline(class UPrivilegeCheck_X* PrivilegeCheck);
	void RemoveKeysRPC(class URPC_X* RPC);
	void SendGenerateKeysRPCs();
	void HandleGenerateKeys(class URPC_GenerateKeys_X* RPC);
	void SetNetworkKeys(class URPC_GenerateKeys_X* RPC);
	void GoToNextState();
	void HandleCancelJoin(class UIReservationConnection_X* Connection, class UObject* Message);
	void SendReservation();
	void SendReservationMessage();
	class UMatchmakingMetrics_X* GetMetrics();
	void HandleConnection(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void HandleDisconnection(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void JoinServer(class UReservationsReadyMessage_X* Message);
	void TravelToServer();
	class UAddReservationMessage_X* CreateReservationMessage();
	void SendServerReservedEvent();
	void StartConnectToServer();
	void CheckAllLocalPlayersHaveJoined(class UPlayer* JoinedPlayer);
	void HandleInternetConnectionChanged(unsigned long bConnected);
	void OnAllPlayersJoined();
	void MigrateToNewServer(struct FServerConnectionInfo ConnectionInfo);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsInTransition();
	void SendPing();
	void GotoJoinGameState(struct FName NewStateName);
	void HandleConnectionResponse(class UIReservationConnection_X* Connection, class UObject* Message);
	void HandleReservationResponse(class UIReservationConnection_X* Connection, class UObject* Message);
	void HandleConnectionFailed(unsigned char MessageType, struct FString Title, struct FString Message);
	void OnJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void SetActiveServerData(struct FActiveServerData& NewValue);
	void ClearActiveServerData();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	bool IsJoiningGame();
	void CancelJoin();
	bool StartJoinCustomMatch(struct FServerReservationData Reservation, struct FJoinMatchSettings JoinSettings, struct FCustomMatchSettings& InSettings);
	bool StartJoinPrivateMatch(struct FServerReservationData Reservation, struct FJoinMatchSettings JoinSettings, struct FCustomMatchSettings& InSettings);
	bool StartJoin(struct FServerReservationData Reservation, struct FJoinMatchSettings JoinSettings);
	void OnInit();
	void EventMaxPlayersChanged(class UOnlineGameJoinGame_X* OnlineGameJoinGame, int MaxPlayers);
	void EventJoiningGame(class UOnlineGameJoinGame_X* OnlineGameJoinGame);
	void EventPasswordRequired();
	void EventServerReserved();
	void EventActiveServerChanged();
	void EventCountdownEnded();
	void EventCountdownStarted();
	void EventStatusUpdate(struct FString NewStatus);
	void EventJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
};

// Class ProjectX.PreExitEvent_X
// 0x0000 (0x0060 - 0x0060)
class UPreExitEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PREEXITEVENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Explosion_X
// 0x0018 (0x0268 - 0x0280)
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                               		// 0x0268 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AFXActor_X*                                  FXActorArchetype;                                 		// 0x0270 (0x0008) [0x0000000000000021] (CPF_Edit | CPF_Net)
	class AFXActor_X*                                  FXActor;                                          		// 0x0278 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EXPLOSION_X));
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void eventForceNetRelevant();
	void SetFXActorArchetype(class AFXActor_X* A);
	void SpawnFX();
	void SetExplosionHandler(TArray<class UExplosionHitHandler_X*> InExplosionHandlers, struct FBox GoalBox, class UActorComponent_X* ExplosionGoal);
	void eventPostBeginPlay();
	void eventReplicatedEvent(struct FName VarName);
};

// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0010 (0x0160 - 0x0170)
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                            		// 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      AttachTo;                                         		// 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SEQACT_TRIGGERFXACTOR_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GameInfo_MapProfiler_X
// 0x0000 (0x04C8 - 0x04C8)
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMEINFO_MAPPROFILER_X));
		}

		return uClassPointer;
	};

	void GenericPlayerInitialization(class AController* C);
	class APlayerController* SpawnPlayerController(struct FVector SpawnLocation, struct FRotator SpawnRotation);
};

// Class ProjectX.PresetMutators_X
// 0x0038 (0x0060 - 0x0098)
class UPresetMutators_X : public UObject
{
public:
	TArray<struct FCategorySettingPair>                PresetTags;                                       		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               RequiresMaps;                                     		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bLockSettings : 1;                                		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHideSettings : 1;                                		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     OverrideName;                                     		// 0x0088 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PRESETMUTATORS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlaylistSettings_X
// 0x00A8 (0x0060 - 0x0108)
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                            		// 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                PlayerCount;                                      		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bStandard : 1;                                    		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bRanked : 1;                                      		// 0x0088 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bCheckRankedMatchReservationID : 1;               		// 0x0088 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bSolo : 1;                                        		// 0x0088 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bHidden : 1;                                      		// 0x0088 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      bExtraMode : 1;                                   		// 0x0088 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bPrivate : 1;                                     		// 0x0088 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      bTournament : 1;                                  		// 0x0088 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                            		// 0x0088 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      bAllowForfeit : 1;                                		// 0x0088 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      bDisableRankedReconnect : 1;                      		// 0x0088 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      bIgnoreAssignTeams : 1;                           		// 0x0088 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      bKickOnMigrate : 1;                               		// 0x0088 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	unsigned long                                      bAllowBotFills : 1;                               		// 0x0088 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	unsigned long                                      bIsMicroEventPlaylist : 1;                        		// 0x0088 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	unsigned long                                      bHasVariablePlayerCount : 1;                      		// 0x0088 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	unsigned long                                      bNew : 1;                                         		// 0x0088 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	unsigned long                                      bAllowClubs : 1;                                  		// 0x0088 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	unsigned long                                      bAllowStayAsParty : 1;                            		// 0x0088 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	struct FString                                     PlaylistImageURL;                                 		// 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistImageTexture;                             		// 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconActiveURL;                            		// 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconInactiveURL;                          		// 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTimeWindow*                                 PlaylistTimeWindow;                               		// 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UPresetMutators_X*>                   PresetMutators;                                   		// 0x00D8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapName;                                          		// 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     ServerCommand;                                    		// 0x00F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapSetName;                                       		// 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLAYLISTSETTINGS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxModal_X
// 0x0068 (0x0060 - 0x00C8)
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                            		// 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UGFxObject*                                  GFxPopup;                                         		// 0x0070 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Callbacks;                                        		// 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     ConfirmString;                                    		// 0x0088 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __ClickDelegate__Delegate;                        		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GFXMODAL_X));
		}

		return uClassPointer;
	};

	class UGFxModal_X* NotifyOnClosed(struct FScriptDelegate Callback);
	void Close();
	void FlashAddButton(struct FString Label);
	void FlashAddCancelButton(struct FString LocalizedText);
	void HandleButtonClicked(int Index);
	class UGFxModal_X* AddButtonCallback(int Index, struct FScriptDelegate OnClick);
	class UGFxModal_X* AddButton(struct FString Label, struct FScriptDelegate OnClick);
	class UGFxModal_X* AddCancelButton(struct FString LocalizedText, struct FScriptDelegate OnClick);
	class UGFxModal_X* SetCancellable(unsigned long bCancellable);
	class UGFxModal_X* SetDefaultSelectedButtonIndex(int buttonIndex);
	class UGFxModal_X* SetIcon(struct FString IconName);
	class UGFxModal_X* SetBody(struct FString LocalizedText);
	class UGFxModal_X* SetTitle(struct FString LocalizedText);
	void SetGFxObject(class UGFxObject* Obj);
	void EventClosed(class UGFxModal_X* Modal);
	void ClickDelegate(class UGFxModal_X* Modal);
};

// Class ProjectX.GRI_X
// 0x03B8 (0x02D8 - 0x0690)
class AGRI_X : public AGameReplicationInfo
{
public:
	int                                                ReplicatedGamePlaylist;                           		// 0x02D8 (0x0004) [0x0000000000002020] (CPF_Net | CPF_Transient)
	int                                                ReplicatedGameMutatorIndex;                       		// 0x02DC (0x0004) [0x0000000000002020] (CPF_Net | CPF_Transient)
	struct FReplicatedReservationData                  Reservations[0x8] ;                               		// 0x02E0 (0x0300) [0x0000000000402020] (CPF_Net | CPF_Transient | CPF_NeedCtorLink)
	unsigned long long                                 GameServerID;                                     		// 0x05E0 (0x0008) [0x0000000000002020] (CPF_Net | CPF_Transient)
	unsigned long                                      bGameStarted : 1;                                 		// 0x05E8 (0x0004) [0x0000000000002020] [0x00000001] (CPF_Net | CPF_Transient)
	unsigned long                                      bGameEnded : 1;                                   		// 0x05E8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FString                                     MatchGUID;                                        		// 0x05F0 (0x0010) [0x0000000000400020] (CPF_Net | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSpawned__Delegate;                         		// 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;                		// 0x0618 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;             		// 0x0630 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;               		// 0x0648 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameStarted__Delegate;                     		// 0x0660 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                		// 0x0678 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GRI_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMatchGUID(struct FString Id);
	void HandleMatchGUIDChanged(class UOnlineGameDedicatedServer_X* OnlineGameDS);
	bool IsPlaylistRanked();
	class UGameSettingPlaylist_X* GetPlaylist();
	bool PlayerIsInCurrentGame(struct FUniqueNetId MemberId);
	struct FString GetReservationDebugString(struct FReplicatedReservationData Data);
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated();
	class UOnlineGame_Base_X* GetOnlineGameBase();
	class UOnlineGame_X* GetOnlineGame();
	bool HasSelectedGameData();
	void SetGameStarted();
	void SetOfflineGameData(struct FName PlaylistName);
	void NotifyOnGameDataSelected(struct FScriptDelegate Callback);
	void SetGameData(int NewPlaylistID, int MutatorIndex);
	void HandleGamePlaylistSet(class UOnlineGameDedicatedServer_X* DedicatedServer);
	void OnReservationsUpdated();
	void SetReservations(TArray<struct FReplicatedReservationData> InReservations);
	struct FReplicatedReservationData ConvertReservation(struct FReservationData Data);
	void UpdateReservations();
	void eventReplicatedEvent(struct FName VarName);
	void eventPostBeginPlay();
	void EventMatchGUIDChanged(class AGRI_X* GRI);
	void EventGameStarted(class AGRI_X* GRI);
	void EventServerNameChanged(class AGRI_X* GRI);
	void EventReservationsUpdated(class AGRI_X* GRI);
	void EventGameDataSelected(int PlaylistId, int MutatorIndex);
	void EventSpawned(class AGRI_X* GRI);
};

// Class ProjectX.LanMessage_X
// 0x0008 (0x0060 - 0x0068)
class ULanMessage_X : public UOnlineMessage_X
{
public:
	unsigned long long                                 Nonce;                                            		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANMESSAGE_X));
		}

		return uClassPointer;
	};

	bool Broadcast();
	class ULanMessage_X* SetNonce(unsigned long long InNonce);
};

// Class ProjectX.LanMessage_HostQuery_X
// 0x0098 (0x0068 - 0x0100)
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct FCustomMatchSettings                        Filter;                                           		// 0x0068 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                BuildID;                                          		// 0x00F8 (0x0004) [0x0000000000000000]               
	unsigned long                                      bHost : 1;                                        		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANMESSAGE_HOSTQUERY_X));
		}

		return uClassPointer;
	};

	class ULanMessage_HostQuery_X* SetHost(unsigned long bValue);
	class ULanMessage_HostQuery_X* SetBuildID(int InBuildID);
	class ULanMessage_HostQuery_X* SetFilter(struct FCustomMatchSettings InFilter);
};

// Class ProjectX.LanMessage_HostResponse_X
// 0x00D0 (0x0068 - 0x0138)
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                           		// 0x0068 (0x00B0) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerId;                                         		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                         		// 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANMESSAGE_HOSTRESPONSE_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugString();
	class ULanMessage_HostResponse_X* SetMetaData(struct FString InMetaData);
	class ULanMessage_HostResponse_X* SetServerID(struct FString InServerID);
	class ULanMessage_HostResponse_X* SetResult(struct FServerResult InResult);
};

// Class ProjectX.LanMessage_Ping_X
// 0x0000 (0x0068 - 0x0068)
class ULanMessage_Ping_X : public ULanMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANMESSAGE_PING_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchEndedMessage_X
// 0x0000 (0x0060 - 0x0060)
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHENDEDMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.MaterialEffect_X
// 0x0038 (0x0090 - 0x00C8)
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                    		// 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInTime;                                       		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInFalloff;                                    		// 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                      		// 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutFalloff;                                   		// 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ActiveTime;                                       		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ValueMin;                                         		// 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ValueMax;                                         		// 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      Stage;                                            		// 0x00C0 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              StageTime;                                        		// 0x00C4 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATERIALEFFECT_X));
		}

		return uClassPointer;
	};

	struct FString GetActiveEffects();
	bool HasAnyEffectsActive();
	float GetMaterialParameterValue(struct FName MaterialParamName);
	void SetMaterialParameterLinearColorValue(struct FName MaterialParamName, struct FLinearColor NewValue);
	void SetMaterialParameterValue(struct FName MaterialParamName, float NewValue);
	void HandleParametersChanged();
	void UpdateFade(float Alpha);
	void SetStage(unsigned char NewStage);
	bool Tick(float dt);
	void End();
	void Start();
	void Init();
	bool IsInitialized();
};

// Class ProjectX.EpicConfig_X
// 0x0058 (0x0078 - 0x00D0)
class UEpicConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bPollDuringAccountLinking : 1;                    		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int                                                SecondsBetweenPolling;                            		// 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                SecondsBeforeRequestsTimeout;                     		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                SecondsToWaitBeforeRetryingAuth;                  		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                SecondsToWaitBeforeUpdatingFriendsList;           		// 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class ULocalizedAccountLinkURL*>            AccountLinkURLOverrides;                          		// 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     DefaultAccountLinkURL;                            		// 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     SandboxId;                                        		// 0x00B0 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeploymentId;                                     		// 0x00C0 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPICCONFIG_X));
		}

		return uClassPointer;
	};

	void Apply();
};

// Class ProjectX.OnlineClubProvider_X
// 0x0068 (0x0060 - 0x00C8)
class UOnlineClubProvider_X : public UObject
{
public:
	class UOnlineClubCache_X*                          Cache;                                            		// 0x0060 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class URPC_GetClubDetails_X*>               SyncingClubs;                                     		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URPC_GetPlayerClubDetails_X*>         SyncingPlayers;                                   		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerClubSyncResult>               PlayerClubSyncResults;                            		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                    		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerSynced__Delegate;                    		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINECLUBPROVIDER_X));
		}

		return uClassPointer;
	};

	void ClubSynced(class UClubDetails_X* Club);
	bool IsSyncing();
	void NotifyWhenSyncComplete(struct FScriptDelegate Callback);
	struct FPlayerClubSyncResult GetPlayerClubSyncResult(struct FUniqueNetId PlayerID);
	void SetPlayerClubSyncResult(struct FUniqueNetId PlayerID, class UError* Error);
	void HandlePlayerSynced(class URPC_GetPlayerClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncPlayerClubDetails(struct FUniqueNetId PlayerID);
	class UTAsyncResult__ClubDetails_X* GetPlayerClubDetails(struct FUniqueNetId PlayerID);
	void HandleClubSynced(class URPC_GetClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncClubDetails(unsigned long long ClubID);
	class UTAsyncResult__ClubDetails_X* GetClubDetails(unsigned long long ClubID);
	void EventPlayerSynced(class UOnlineClubProvider_X* Provider, struct FUniqueNetId PlayerID);
	void EventSyncComplete(class UOnlineClubProvider_X* Provider);
};

// Class ProjectX.OnlineConfigDispatcher_X
// 0x0004 (0x0060 - 0x0064)
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                       		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINECONFIGDISPATCHER_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugString(class UOnlineConfig_X* Config);
	void UndoConfigObject(class UOnlineConfig_X* Config);
	void ApplyConfigObject(class UOnlineConfig_X* Config);
	void eventConstruct();
};

// Class ProjectX.WebCache_X
// 0x0028 (0x0060 - 0x0088)
class UWebCache_X : public UObject
{
public:
	TArray<struct FCachedDataRequest>                  Requests;                                         		// 0x0060 (0x0010) [0x0000000000482000] (CPF_Transient | CPF_Component | CPF_NeedCtorLink)
	struct FScriptDelegate                             __CachedDataCallback__Delegate;                   		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WEBCACHE_X));
		}

		return uClassPointer;
	};

	struct FString GetRequestDebugString(struct FCachedDataRequest Request);
	void HandleWebRequest(class UWebRequest_X* WebRequest);
	void DownloadData(struct FString URL, struct FString ETag, class UStringMap* Headers, unsigned long bZipResponse);
	void HandleLoadFromCache(class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error);
	void RaiseUrlEmptyError(struct FScriptDelegate Callback);
	void SyncDataInternal(struct FString URL, struct FScriptDelegate Callback, unsigned long bZipResponse, class UStringMap* Headers);
	void SyncDataZipped(struct FString URL, struct FScriptDelegate Callback, class UStringMap* Headers);
	void SyncData(struct FString URL, struct FScriptDelegate Callback, class UStringMap* Headers);
	struct FString GetCachedPath(struct FString URL);
	void CachedDataCallback(class UCachedWebData_X* CachedData);
};

// Class ProjectX.WebImageCache_X
// 0x0028 (0x0060 - 0x0088)
class UWebImageCache_X : public UObject
{
public:
	class UImageDecoder*                               Decoder;                                          		// 0x0060 (0x0008) [0x0000000000000000]               
	class UStringObjectMap*                            Downloads;                                        		// 0x0068 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __ImageSyncCallback__Delegate;                    		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WEBIMAGECACHE_X));
		}

		return uClassPointer;
	};

	void SyncImageURL(struct FString URL, struct FScriptDelegate Callback);
	void HandleImageDecoded(class UWebImageDownload_X* Download, struct FImageLayout Image);
	void SetDownloadError(class UWebImageDownload_X* Download, class UError* Error);
	void HandleImageData(class UWebImageDownload_X* Download, class UCachedWebData_X* Data);
	class UWebImageDownload_X* StartSync(struct FString URL);
	void HandleUncachedImageDownload(class UTAsyncResult__Texture2DDynamic* Task, class UTexture2DDynamic* Texture);
	class UTAsyncResult__Texture2DDynamic* SyncUncachedImage(struct FString URL, unsigned long bSRGB);
	class UWebImageDownload_X* GetDownload(struct FString URL);
	class UTAsyncResult__Texture2DDynamic* SyncImageSRGB(struct FString URL);
	class UTAsyncResult__Texture2DDynamic* SyncImage(struct FString URL);
	void eventConstruct();
	void ImageSyncCallback(class UTexture2DDynamic* Texture);
};

// Class ProjectX.OnlineGameWordFilter_X
// 0x0020 (0x0098 - 0x00B8)
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray<struct FWordFilterPair>                     Filtered;                                         		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UWordFilterConfig_X*                         Config;                                           		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPsyNetWordFilter_X*                         PsyNetWordFilter;                                 		// 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEWORDFILTER_X));
		}

		return uClassPointer;
	};

	struct FString SanitizePhraseAndNotify(struct FString Comment, struct FScriptDelegate Callback);
	struct FString SanitizePhrase(struct FString Comment);
	class UError* CreateError(unsigned char Usage, struct FWordFilterResult& Result);
	bool IsChat(unsigned char Usage);
	void HandleCommentSanitized(struct FString Id, struct FWordFilterResult& Result);
	bool StartWordFilterTask(unsigned char Usage, struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
	struct FString InternalSanitize(struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, unsigned char Usage, struct FUniqueNetId PlayerID);
	bool IsPending(struct FString Comment);
	struct FString Sanitize(unsigned char Usage, struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, struct FUniqueNetId PlayerID);
	struct FString SanitizePlayerName(unsigned char PlayerPlatform, struct FString PlayerName, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, struct FUniqueNetId PlayerID);
	void OnMainMenuOpened();
};

// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0030 (0x0098 - 0x00C8)
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                    		// 0x0098 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FWordFilterRequest>                  SanitizeCallbacks;                                		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;             		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEWORDFILTERPROCESSOR_X));
		}

		return uClassPointer;
	};

	void TriggerCallbacks(int Index);
	void ProcessSanitizedDelayed();
	void HandleWordSanitized(class UWebRequest_X* Request);
	bool SanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate);
	void OnSanitizeStringComplete(struct FString Original, struct FString Sanitized);
};

// Class ProjectX.OnlineGamePrivileges_X
// 0x0048 (0x0098 - 0x00E0)
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray<class UPrivilegeCheck_X*>                   PendingChecks;                                    		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bIsCheckingPrivileges : 1;                        		// 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;       		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;       		// 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEPRIVILEGES_X));
		}

		return uClassPointer;
	};

	bool IsCheckingPrivileges();
	void RemoveCallback(struct FScriptDelegate Callback);
	void HandlePrivilegeCheckFinished(class UPrivilegeCheck_X* PrivilegeCheck);
	class UPrivilegeCheck_X* CreatePrivilegeCheck(int ControllerId, struct FScriptDelegate Callback);
	void TryToUseUGC(int ControllerId, struct FScriptDelegate Callback);
	void TryToPlayOnline(int ControllerId, struct FScriptDelegate Callback);
	void TryToUsePsyNet(int ControllerId, struct FScriptDelegate Callback);
	void TryToViewLeaderboards(int ControllerId, struct FScriptDelegate Callback);
	void TryToBrowseInternet(int ControllerId, struct FScriptDelegate Callback);
	void EventPrivilegeCheckRestriction(class UPrivilegeCheck_X* Check);
	void EventCheckingPrivilegesChanged(class UOnlineGamePrivileges_X* PrivilegesObject);
};

// Class ProjectX.OnlineGameRegions_X
// 0x0098 (0x0098 - 0x0130)
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                             		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastPingRegionsTime;                              		// 0x009C (0x0004) [0x0000000000002000] (CPF_Transient)
	int                                                RegionIdxPingCur;                                 		// 0x00A0 (0x0004) [0x0000000000000000]               
	class URegionConfig_X*                             Config;                                           		// 0x00A8 (0x0008) [0x0000000000000000]               
	TArray<class URegionPing_X*>                       RegionPings;                                      		// 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FCachedRegionPing>                   CachedRegionPings;                                		// 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UTcpMessageBeacon*                           Beacon;                                           		// 0x00D0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UBeaconConfig_X*                             BeaconConfig;                                     		// 0x00D8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bWaitingToPingRegions : 1;                        		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bPingingRegions : 1;                              		// 0x00E0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                   		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                   		// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsError__Delegate;                    		// 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEREGIONS_X));
		}

		return uClassPointer;
	};

	struct FString __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_BA194BBA42DC7B8BFA03BD9D83DA0643(class URegionPing_X* R);
	bool __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_784D72B24AD84A82BDB5FBAB13AD8FD1(class URegionPing_X* R);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_3042D4664F24BFDBD121E9AE4147DDB1(struct FGetGameServerPingListData Server);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_42890D534E3C99C61AA4929CDCF65CE6(class URegionPing_X* RegionPing);
	bool __OnlineGameRegions_X__HandlePingMessage_0206D4B0470D3DF972C471B8E7D32C49(class URegionPing_X* RegionPing);
	struct FString GetLocalizedName(struct FString RegionID);
	bool Exists(struct FString RegionID);
	void SetCachedRegionPings(TArray<struct FCachedRegionPing>& InCachedRegionPings);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void NotifyWhenSynced(struct FScriptDelegate Callback);
	struct FString GetRegionDebugString(class URegionPing_X* RegionPing);
	struct FString GetRegionsDebugString();
	int SortRegionDelegate(class URegionPing_X* A, class URegionPing_X* B);
	void FinalizeRegionPing(class URegionPing_X* RegionPing);
	void OnAllRegionsPinged();
	void HandlePingMessage(class UTcpConnection* Connection, class URegionPingMessage_X* PingMessage);
	void HandleBeaconMessage(class UTcpConnection* Connection, class UObject* Message);
	void PingRegionsPieceWise(int PingCount);
	void HandleRegionPinged(class URegionPingData_X* Data);
	void HandleRegionsPinged(class URegionPinger_X* Pinger);
	void HandleGetPingRegionPingsRPC(class URPC_GetGameServerPingList_X* RPC);
	void PingRegions(struct FScriptDelegate Callback);
	void UpdateRegionPings();
	void OnRegionsSynced();
	void AddRegionPing(class URegion_X* Region);
	class URegionPing_X* GetRegionPing(struct FString RegionID);
	void eventOnInit();
	void EventRegionsError(class UOnlineGameRegions_X* RegionsObj, class UError* Error);
	void EventRegionsPinged(class UOnlineGameRegions_X* RegionsObj);
	void EventRegionsSynced(class UOnlineGameRegions_X* RegionsObj);
};

// Class ProjectX.OnlineGameInvite_X
// 0x0118 (0x0098 - 0x01B0)
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                               		// 0x0098 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     UnableToFindFriendsGameString;                    		// 0x00E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     AlreadyInSameServerString;                        		// 0x00F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FriendNotJoinable;                                		// 0x0100 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     GameInviteBeaconAddress;                          		// 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     GameInviteCredentials;                            		// 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FName                                       ActionRequired;                                   		// 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;              		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;              		// 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;            		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPartyInviteAccepted__Delegate;       		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEINVITE_X));
		}

		return uClassPointer;
	};

	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void HandlePasswordRequired();
	void HandleTaskSuccess(struct FServerReservationData Reservation);
	void __OnlineGameInvite_X__BeginState_678121DA4A7FDB96C22413ACBD52163D(class UError* Error);
	void OnGameInviteComplete(unsigned long bSuccess, struct FString FailReason);
	void JoinGameInviteGame(struct FJoinMatchSettings Settings);
	void OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult);
	void OnInit();
	void EventPsyNetPartyInviteAccepted(struct FString PartyID);
	void EventPasswordRequired();
	void EventConfirmationRequired(struct FName ConfirmationReason);
	void EventGameInviteComplete(unsigned long bSuccess, struct FString FailReason);
	void EventGameInviteAccepted();
};

// Class ProjectX.OnlineGameVoice_X
// 0x0018 (0x0098 - 0x00B0)
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                   		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEVOICE_X));
		}

		return uClassPointer;
	};

	unsigned char GetControllerID(class APlayerReplicationInfo* PRI);
	int GetNumTalkers();
	bool IsRemotePlayerTalking(class APlayerReplicationInfo* PRI);
	void HandlePlayerTalkingStateChange(struct FUniqueNetId PlayerID, unsigned long bTalking);
	void UnregisterTalker(class UOnlinePlayer_X* Player);
	void RegisterTalker(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventPlayerTalking(class UOnlineGameVoice_X* SelfRef, struct FUniqueNetId PlayerID, unsigned long bTalking);
};

// Class ProjectX.OnlineGamePopulation_X
// 0x0040 (0x0098 - 0x00D8)
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                            		// 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastUpdatePopulationTime;                         		// 0x009C (0x0004) [0x0000000000002000] (CPF_Transient)
	class URPC_X*                                      GetPopulationRPC;                                 		// 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int                                                TotalPlayers;                                     		// 0x00A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<struct FGetPopulationData>                  Populations;                                      		// 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;          		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEPOPULATION_X));
		}

		return uClassPointer;
	};

	int __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_77E7DBFE4BC9539CB48C4DA9709EB4AB(struct FGetPopulationData P);
	bool __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_220C2E34416871AB0D7D4A9BB85888BF(struct FGetPopulationData P);
	void HandleGotAllPopulationPlaylistsRPC(class URPC_GetPopulation_X* RPC);
	void GetPlaylistPopulations(struct FScriptDelegate Callback);
	void EventGetPlaylistPopulations(class UOnlineGamePopulation_X* PopulationsObject);
};

// Class ProjectX.OnlineGameLanBrowser_X
// 0x0148 (0x0098 - 0x01E0)
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                            		// 0x0098 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SearchingString;                                  		// 0x00A8 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                                		// 0x00B8 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Filter;                                           		// 0x00C8 (0x0090) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bIsHostQuery : 1;                                 		// 0x0158 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              SearchTimeout;                                    		// 0x015C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0160 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;               		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                    		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;              		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                  		// 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchError__Delegate;                     		// 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMELANBROWSER_X));
		}

		return uClassPointer;
	};

	void HandleGameStarted(class AGRI_X* GRI);
	void PerformSearch();
	void UpdateStatusMessage();
	void HandleSearchTimeout();
	void HandleStatusUpdate(struct FString NewStatus);
	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void CreateLanGame(struct FCustomMatchSettings MatchSettings, struct FServerResult& HostResponse);
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnSearchComplete(unsigned long bCancelled);
	void OnSearchError(struct FString Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(struct FCustomMatchSettings InFilter, unsigned long bHostQuery);
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearStatusDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearErrorDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetCompleteDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetStatusDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetErrorDelegate(struct FScriptDelegate Callback);
	void OnInit();
	void EventSearchError(struct FString NewStatus);
	void EventSearchComplete(unsigned long bCancelled);
	void EventSearchStateChanged(struct FName SearchState);
	void EventSearchStatus(struct FString NewStatus);
	void EventSearchNewResponse(struct FServerResult& Result);
};

// Class ProjectX.OnlineGameServerBrowser_X
// 0x0130 (0x0098 - 0x01C8)
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                                  		// 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Filter;                                           		// 0x00A8 (0x0090) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                            		// 0x0138 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NoResultsFound;                                   		// 0x0148 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NotLoggedInToPsynet;                              		// 0x0158 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                  		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchError__Delegate;                     		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBrowserError__Delegate;                    		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchCompleteReservation__Delegate;       		// 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMESERVERBROWSER_X));
		}

		return uClassPointer;
	};

	void HandleGameStarted(class AGRI_X* GRI);
	void HandleGameServerList(class URPC_CustomGameServerGet_X* RPC);
	void HandleSearchError(class UError* Error);
	void PerformSearch();
	void HandleTaskFail(class UError* Error);
	void HandleTaskSuccess(struct FServerReservationData Reservation);
	struct FString GetRegionsString();
	void OnSearchComplete(TArray<struct FServerResult>& Results);
	void OnSearchError(struct FString Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(struct FCustomMatchSettings InFilter, struct FString InPreferredRegion);
	class UOnlineGameServerBrowser_X* SetCompleteReservationDelegate(struct FScriptDelegate Callback);
	class UOnlineGameServerBrowser_X* SetCompleteDelegate(struct FScriptDelegate Callback);
	class UOnlineGameServerBrowser_X* SetErrorDelegate(struct FScriptDelegate Callback);
	void EventSearchCompleteReservation(struct FServerReservationData& Reservation);
	void EventBrowserError(class UOnlineGameServerBrowser_X* Browser, class UError* Error);
	void EventSearchError(struct FString NewStatus);
	void EventSearchComplete(TArray<struct FServerResult>& Results);
};

// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0080 (0x0098 - 0x0118)
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                                 		// 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UAsyncTask*                                  StartMatchmakingTask;                             		// 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     PingingRegionsString;                             		// 0x00A8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;                		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;                  		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameError__Delegate;                   		// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;            		// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEMATCHMAKINGBASE_X));
		}

		return uClassPointer;
	};

	void HandleRegionsPinged(class UOnlineGameRegions_X* InRegions);
	void HandleGameStarted(class AGRI_X* GRI);
	void HandleStatusUpdate(struct FString NewStatus);
	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	struct FName GetMatchmakingStateName();
	class UMatchmakingMetrics_X* GetMetrics();
	class UCheckReservation_X* CreateCheckReservation();
	void GotoMatchmakingState(struct FName StateName);
	void ClearStartMatchmakingRPC();
	void ClearCheckReservation();
	void OnSearchComplete(unsigned long bCanceled);
	void Cancel();
	bool IsSearching();
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate(struct FScriptDelegate NewDelegate);
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate(struct FScriptDelegate HandleFindGameComplete);
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate(struct FScriptDelegate HandleFindGameError);
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate(struct FScriptDelegate HandleFindGameStatusChanged);
	void EventFindGameStateChanged(struct FName NewState);
	void EventFindGameError(struct FString NewStatus);
	void EventFindGameStatus(struct FString NewStatus);
	void EventFindGameComplete(unsigned long bCancelled);
};

// Class ProjectX.OnlineGamePrivateMatch_X
// 0x0120 (0x0118 - 0x0238)
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                                  		// 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     SearchingString;                                  		// 0x0128 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                            		// 0x0138 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                                		// 0x0148 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     AlreadyJoiningGameString;                         		// 0x0158 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     TimeoutString;                                    		// 0x0168 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     WrongRegionString;                                		// 0x0178 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                         		// 0x0188 (0x0090) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              SearchTimeout;                                    		// 0x0218 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;               		// 0x0220 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEPRIVATEMATCH_X));
		}

		return uClassPointer;
	};

	void UpdateStatusMessage();
	void HandleError(class UError* Error);
	void StartCheckingReservations();
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(struct FServerReservationData Reservation);
	void HandleSearchTimeout();
	void ResetPrivateMatchSettings();
	void UpdatePrivateMatchSettings(struct FCustomMatchSettings InSettings);
	void OnPrivateMatchError(struct FString Message);
	bool StartSearch(struct FString InPreferredRegion, struct FCustomMatchSettings InSettings);
	void EventPrivateMatchError(class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error);
};

// Class ProjectX.OnlineGameMatchmaking_X
// 0x00F0 (0x0118 - 0x0208)
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray<int>                                        PreferredPlaylists;                               		// 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             PreferredRegions;                                 		// 0x0128 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     SearchingString;                                  		// 0x0138 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                            		// 0x0148 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                                		// 0x0158 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     PlaylistsHaveChangedString;                       		// 0x0168 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     RegionsHaveChangedString;                         		// 0x0178 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     MatchmakingAttemptString;                         		// 0x0188 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              MatchmakingStartTime;                             		// 0x0198 (0x0004) [0x0000000000002000] (CPF_Transient)
	int                                                MatchmakingBanTime;                               		// 0x019C (0x0004) [0x0000000000000000]               
	unsigned long                                      bIgnoreSkill : 1;                                 		// 0x01A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              MatchmakingDisabledDuration;                      		// 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MatchmakingDisabledUntilTime;                     		// 0x01A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FString                                     LastReservationID;                                		// 0x01B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartSearch__Delegate;                     		// 0x01C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;                		// 0x01D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;		// 0x01F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEMATCHMAKING_X));
		}

		return uClassPointer;
	};

	bool AddRecommendedServers(float PingThreshold, float PingIncrement, float MaxPing);
	void RecordStart(unsigned long bUseRecommendedRegions);
	void StartMatchmaking();
	void UpdateMatchmaking();
	void SendMatchmakingState();
	void HandleError(class UError* Error);
	void HandleMatchmakingStartSuccessRPC(class URPC_StartMatchmaking_X* RPC);
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(struct FServerReservationData Reservation);
	void SetupForTimeConstraints();
	void OnPlaylistTimeEnded();
	struct FString __OnlineGameMatchmaking_X__StartSearch_86B9989046CCED8CC1C770A22EA658C7(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedPlaylistsString_3D871B0047738F4BAACF1DA5C6751719(int Playlist);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedRegionsString_E51A7E0F4F63090F7BD6EE8485F3341A(class USuperRegion_X* SuperRegion);
	class USuperRegion_X* __OnlineGameMatchmaking_X__GetLocalizedRegionsString_9D6E990A49B05539AC1BDA8F03234C5B(class URegion_X* R);
	struct FString __OnlineGameMatchmaking_X__GetDebugSuperRegionString_06AA122D4D1171E2823B14B13BCD98EF(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_1DBBC653465AFE4738925A8A6B19D801(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_31969C964F1E5BCED79A29AADF889819(class URegionPing_X* R);
	bool __OnlineGameMatchmaking_X__RecordStart_46510250438EFA726FCEE1869995186D(class URegionPing_X* R);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsMatchmakingDisabled();
	void SetSkillIgnored(unsigned long bIgnore);
	void ToggleSkill();
	void ClearMatchmakingBanTime();
	void SetMatchmakingBanTime(int Duration);
	void HandlePartyLeaderChanged(class UOnlineGameParty_X* PartyObject);
	void HandlePartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void OnFindGameWarning(struct FString FailReason);
	unsigned long long GetGameServerID();
	int SortPlaylists(int A, int B);
	struct FString GetPartyMembersString();
	TArray<class URegionPing_X*> GetSubRegionPings(struct FString SuperRegionID);
	struct FString GetDebugSuperRegionString(class USuperRegion_X* SuperRegion);
	struct FString GetLocalizedRegionsString();
	struct FString GetRegionsString();
	struct FString GetLocalizedPlaylistsString();
	struct FString GetPlaylistsString();
	void OnExit();
	void OnSearchComplete(unsigned long bCanceled);
	void HandleInternetConnectionChanged(unsigned long bConnected);
	class UError* StartSearch(TArray<int> InPreferredPlaylists, TArray<struct FString> InPreferredSuperRegions);
	bool VerifyPlaylist(int InPlaylistID);
	void OnInit();
	void EventMatchmakingCanceledOnPartySizeChanged(class UOnlineGameMatchmaking_X* InMatchMaking);
	void EventMatchmakingError(class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error);
	void EventStartSearch(class UOnlineGameMatchmakingBase_X* InMatchMaking);
};

// Class ProjectX.LanBrowser_X
// 0x0000 (0x0060 - 0x0060)
class ULanBrowser_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANBROWSER_X));
		}

		return uClassPointer;
	};

	class UAsyncTask* JoinServer(struct FString ServerId, struct FString Options);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(struct FString MetaData);
	class UAsyncTask* CreateServer(struct FString MetaData);
	void HandleGameInfoSpawned(class AGameInfo_X* G);
	void eventConstruct();
};

// Class ProjectX.UdpLanBrowser_X
// 0x0030 (0x0060 - 0x0090)
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                    		// 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0068 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                       		// 0x0070 (0x0008) [0x0000000000000000]               
	TArray<class ULanServerRecord_X*>                  SearchResults;                                    		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UUdpLanServer_X*                             LocalServer;                                      		// 0x0088 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_UDPLANBROWSER_X));
		}

		return uClassPointer;
	};

	class UAsyncTask* JoinServer(struct FString ServerId, struct FString Options);
	void HandleSearchTimeout();
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response);
	void SearchTaskDisposed();
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(struct FString MetaData);
	class UAsyncTask* CreateServer(struct FString MetaData);
};

// Class ProjectX.SystemMetrics_X
// 0x0000 (0x0080 - 0x0080)
class USystemMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SYSTEMMETRICS_X));
		}

		return uClassPointer;
	};

	void Specs(struct FOSMetrics OS, struct FCpuMetrics CPU, struct FMemoryMetrics Memory, struct FVideoCardMetrics Video, struct FNetworkAdapterMetrics Network);
	void RecordSpecs();
};

// Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_D0AA2383429A7FA1C79DA38DFC199D3C
// 0x0008 (0x0060 - 0x0068)
class U__OnlineGame_X__CheckPsyNetConnection_D0AA2383429A7FA1C79DA38DFC199D3C : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAME_X__CHECKPSYNETCONNECTION_D0AA2383429A7FA1C79DA38DFC199D3C));
		}

		return uClassPointer;
	};

	void __OnlineGame_X__CheckPsyNetConnection_D0AA2383429A7FA1C79DA38DFC199D3C(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.RPC_GetPublicIP_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetPublicIP_X : public URPC_X
{
public:
	struct FString                                     IP;                                               		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETPUBLICIP_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineGameVersion_X
// 0x0004 (0x0098 - 0x009C)
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned long                                      bUpdateRequired : 1;                              		// 0x0098 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEVERSION_X));
		}

		return uClassPointer;
	};

	void __OnlineGameVersion_X__OnInit_ADC2133F40C6F843C8EBA0A4AFB79F80(class UOnlineGameServerBrowser_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_6CD54CBB486366809071839CF8EB77A9(class UOnlineGamePrivateMatch_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_D49793B34D0AD2DF7380BE9C5E1D0AAD(class UOnlineGameRegions_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_05136A1F453B69BFEC03BEAA6A3E65B4(class UOnlineGameMatchmaking_X* _, class UError* Error);
	void HandleError(class UError* Error);
	void OnInit();
};

// Class ProjectX.UrlConfig_X
// 0x0050 (0x0060 - 0x00B0)
class UUrlConfig_X : public UObject
{
public:
	struct FString                                     CDN;                                              		// 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ESportsURL;                                       		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ChinaPaymentURL;                                  		// 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     CrossPlatformSupportURL;                          		// 0x0090 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     LegalTextWebFolder;                               		// 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_URLCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x00E8 (0x0004) [0x0000000000000000]               
	int                                                NumLocalPlayers;                                  		// 0x00EC (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATEPLAYERPLAYLIST_X));
		}

		return uClassPointer;
	};

	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers(int InNumLocalPlayers);
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x002C (0x0098 - 0x00C4)
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UServerConfig_X*                             MyConfig;                                         		// 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UCacheTimer_X*                               HeartbeatTimer;                                   		// 0x00A0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int                                                GameTimeTimer;                                    		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                GameTimeSeconds;                                  		// 0x00AC (0x0004) [0x0000000000002000] (CPF_Transient)
	class URPC_CreateGameServer_X*                     CreateGameServerRPC;                              		// 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class URPC_UpdateGameServer_X*                     UpdateGameServerRPC;                              		// 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              PsyNetDisconnectShutdownTime;                     		// 0x00C0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMEDEDICATEDSERVERREGISTRATION_X));
		}

		return uClassPointer;
	};

	void __OnlineGameDedicatedServerRegistration_X__OnInit_E4B9EAF34494CCA33A3629B26CF62454(struct FString _);
	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_8913B2F94B00220BD210498A4C5CCBAB(class UCacheTimer_X* Timer);
	void HandleCrashed();
	class UServerMetrics_X* GetServerMetrics();
	struct FString GetExclusivePlatformString(unsigned char Platform);
	void UpdateGameTime(int TimeSeconds);
	bool ShouldShutdownWhenEmpty();
	void TimerShutdownWhenEmpty();
	void HandleUpdateServerFailed(class URPC_UpdateGameServer_X* RPC);
	void HandleUpdateServerSucces(class URPC_UpdateGameServer_X* RPC);
	void HandleCreateServerFailed(class URPC_CreateGameServer_X* RPC);
	void HandlePerConDisconnect(class UPsyNetConnection_X* _);
	void HandlePerConConnect(class UPsyNetConnection_X* Connection);
	void ConnectToPerCon();
	void HandleCreateServerSucces(class URPC_CreateGameServer_X* RPC);
	void SetServerNotJoinable();
	void SendUpdateServerRPC();
	struct FString GetServerType();
	void SendCreateServerRPC();
	void SendUpdateRequest();
	void UpdateServer();
	void ForceUpdateServer();
	void HandleConfigUpdate();
	void UnregisterServer();
	void RegisterServer();
	void OnInit();
};

// Class ProjectX.ServerToServerMessage_X
// 0x0008 (0x0060 - 0x0068)
class UServerToServerMessage_X : public UObject
{
public:
	unsigned long long                                 ServerId;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SERVERTOSERVERMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ConnectionInfoMessage_X
// 0x0040 (0x0068 - 0x00A8)
class UConnectionInfoMessage_X : public UServerToServerMessage_X
{
public:
	struct FServerConnectionInfo                       ConnectionInfo;                                   		// 0x0068 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CONNECTIONINFOMESSAGE_X));
		}

		return uClassPointer;
	};

	bool IsConnectionInfoValid(struct FServerConnectionInfo& ServerInfo);
};

// Class ProjectX.ServerPlayerTracker_X
// 0x0058 (0x0070 - 0x00C8)
class UServerPlayerTracker_X : public UComponent
{
public:
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UAddReservationMessage_X*>            Messages;                                         		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameReservations_X*                   Reservations;                                     		// 0x0090 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventPlayerAdded__Delegate;                     		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerRemoved__Delegate;                   		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SERVERPLAYERTRACKER_X));
		}

		return uClassPointer;
	};

	TArray<struct FUniqueNetId> __ServerPlayerTracker_X__Refresh_63254E5B47638D0B539E8CBAF0F9AF9E(class UAddReservationMessage_X* Message);
	struct FUniqueNetId __ServerPlayerTracker_X__Refresh_588A4B524AFD71330E27D8AFDA4A9AAC(struct FReservationData P);
	bool __ServerPlayerTracker_X__Refresh_572E4EAD419D321C717507BD8BD809EC(struct FReservationData P);
	struct FString GetPlayerName(struct FUniqueNetId PlayerID);
	void Reset();
	void Refresh();
	void RemoveReservationMessage(class UAddReservationMessage_X* Message);
	void AddReservationMessage(class UAddReservationMessage_X* Message);
	void RemovePlayer(struct FUniqueNetId PlayerID);
	void AddPlayer(struct FUniqueNetId PlayerID);
	void EventPlayerRemoved(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
	void EventPlayerAdded(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
};

// Class ProjectX.OnlinePlayerPermissions_X
// 0x0040 (0x0060 - 0x00A0)
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                        		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FUniqueNetId>                        PendingPlayerRequests;                            		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsList>              PlayerPermissions;                                		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUpdated__Delegate;                         		// 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERPERMISSIONS_X));
		}

		return uClassPointer;
	};

	bool HasPermission(struct FUniqueNetId PlayerID, unsigned char Permission);
	void HandlePlayerPermissions(class URPC_GetPlayerPermissions_X* RPC);
	void SendRequest();
	void SyncPermissions(struct FUniqueNetId PlayerID);
	void EventUpdated(class UOnlinePlayerPermissions_X* Permissions);
};

// Class ProjectX.CacheTimer_X
// 0x0028 (0x0070 - 0x0098)
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                              		// 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CacheExpireTime;                                  		// 0x0074 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bEnabled : 1;                                     		// 0x0078 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __EventExpired__Delegate;                         		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CACHETIMER_X));
		}

		return uClassPointer;
	};

	float GetRandomCacheTimeoutTime();
	void OnExpired();
	void OnDisabled();
	void OnEnabled();
	void SetEnabled(unsigned long bEnableExpiration);
	void Reset(float TimeoutTime);
	bool IsExpired();
	void EventExpired(class UCacheTimer_X* Timer);
};

// Class ProjectX.MatchRecorder_X
// 0x0018 (0x0060 - 0x0078)
class UMatchRecorder_X : public UObject
{
public:
	class UClass*                                      MatchDataClass;                                   		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      PlayerDataClass;                                  		// 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMatchData_X*                                Match;                                            		// 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHRECORDER_X));
		}

		return uClassPointer;
	};

	void Finished();
	void UpdateServer(class UOnlineGameDedicatedServer_X* Server);
	class UMatchPlayerData_X* CreatePlayer(struct FUniqueNetId PlayerID, struct FString PlayerName);
	class UMatchPlayerData_X* GetPlayerData(struct FUniqueNetId PlayerID);
	void RemovePlayer(struct FUniqueNetId PlayerID);
	void ReservePlayer(struct FUniqueNetId PlayerID, struct FUniqueNetId PartyID);
	void AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName);
	struct FString MatchGUID();
	void eventConstruct();
};

// Class ProjectX.MatchData_X
// 0x00E8 (0x0060 - 0x0148)
class UMatchData_X : public UObject
{
public:
	struct FString                                     MatchGUID;                                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 RecordStartTimestamp;                             		// 0x0070 (0x0008) [0x0000000000000000]               
	unsigned long long                                 RecordEndTimestamp;                               		// 0x0078 (0x0008) [0x0000000000000000]               
	unsigned long long                                 MatchStartTimestamp;                              		// 0x0080 (0x0008) [0x0000000000000000]               
	unsigned long long                                 MatchEndTimestamp;                                		// 0x0088 (0x0008) [0x0000000000000000]               
	struct FName                                       MapName;                                          		// 0x0090 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Playlist;                                         		// 0x0098 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FName>                               Mutators;                                         		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bIsBotMatch : 1;                                  		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClubVsClub : 1;                                  		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverTime : 1;                                    		// 0x00B0 (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      bNoContest : 1;                                   		// 0x00B0 (0x0004) [0x0000000040000000] [0x00000008] (CPF_EditInlineNotify)
	unsigned long                                      bForfeit : 1;                                     		// 0x00B0 (0x0004) [0x0000000040000000] [0x00000010] (CPF_EditInlineNotify)
	int                                                ClubID;                                           		// 0x00B4 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                CustomMatchCreatorPlayerID;                       		// 0x00B8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerName;                                 		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerPassword;                             		// 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SecondsPlayed;                                    		// 0x0120 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              OvertimeSecondsPlayed;                            		// 0x0124 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                WinningTeam;                                      		// 0x0128 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Team0Score;                                       		// 0x012C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Team1Score;                                       		// 0x0130 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<class UMatchPlayerData_X*>                  Players;                                          		// 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHDATA_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerId;                                         		// 0x00E8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bFoundReplacement : 1;                            		// 0x00F0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FCheckReplacementDedicatedServerData        Server;                                           		// 0x00F8 (0x0030) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CHECKREPLACEMENTDEDICATEDSERVER_X));
		}

		return uClassPointer;
	};

	struct FString GetServerAddress();
	class URPC_CheckReplacementDedicatedServer_X* SetServerID(unsigned long long InServerID);
};

// Class ProjectX.RPC_AddQuitter_X
// 0x005C (0x00E8 - 0x0144)
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Reason;                                           		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x0140 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_ADDQUITTER_X));
		}

		return uClassPointer;
	};

	class URPC_AddQuitter_X* SetPlaylistID(int InPlaylistID);
	class URPC_AddQuitter_X* SetReason(struct FString InReason);
	class URPC_AddQuitter_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RemoveQuitter_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_REMOVEQUITTER_X));
		}

		return uClassPointer;
	};

	class URPC_RemoveQuitter_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RecordMatch_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UObject*                                     Match;                                            		// 0x00E8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_RECORDMATCH_X));
		}

		return uClassPointer;
	};

	class URPC_RecordMatch_X* SetMatch(class UObject* InMatch);
};

// Class ProjectX.MatchLog_X
// 0x0028 (0x0060 - 0x0088)
class UMatchLog_X : public UObject
{
public:
	int                                                LogFileStartSize;                                 		// 0x0060 (0x0004) [0x0000000000000000]               
	struct FString                                     URL;                                              		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              Content;                                          		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHLOG_X));
		}

		return uClassPointer;
	};

	void ConditionalSendWebRequest();
	void End(int MaxSize);
	void SetURL(struct FString InURL);
	struct FString GetLogFileName();
	int GetLogFileSize();
	void Start();
};

// Class ProjectX.ClanforgeReservation_X
// 0x0068 (0x0060 - 0x00C8)
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[0x3] ;                                		// 0x0060 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      ReserveState;                                     		// 0x0090 (0x0001) [0x0000000000002000] (CPF_Transient)
	TArray<float>                                      RetryDelays;                                      		// 0x0098 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                SendFailures;                                     		// 0x00A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<class UWebRequest_X*>                       QueuedRequests;                                   		// 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UWebRequest_X*                               PendingRequest;                                   		// 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLANFORGERESERVATION_X));
		}

		return uClassPointer;
	};

	void HandleRetry();
	void Retry();
	void HandleSendComplete(class UWebRequest_X* Request);
	void ProcessNextRequest();
	void Send(struct FString URL);
	void SetReserveState(unsigned char NewState);
	void HandleActivate(class UOnlineGameDedicatedServer_X* Server);
	void HandleInactive(class UOnlineGameDedicatedServer_X* Server);
	void Init(class UOnlineGameDedicatedServer_X* Server, struct FString ReserveURL, struct FString UnreserveURL);
};

// Class ProjectX.ServerMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UServerMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SERVERMETRICS_X));
		}

		return uClassPointer;
	};

	void CrashedError();
	void ShutDown();
	void Created(unsigned long long ServerId, struct FString Host);
};

// Class ProjectX.RPC_DeactivateGameServer_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerId;                                         		// 0x00E8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_DEACTIVATEGAMESERVER_X));
		}

		return uClassPointer;
	};

	class URPC_DeactivateGameServer_X* SetServerID(unsigned long long InServerID);
};

// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	unsigned long long                                 ServerId;                                         		// 0x00E8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETSERVERNOTJOINABLE_X));
		}

		return uClassPointer;
	};

	class URPC_SetServerNotJoinable_X* SetServerID(unsigned long long InServerID);
};

// Class ProjectX.RPC_UpdateGameServer_X
// 0x0084 (0x00E8 - 0x016C)
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerId;                                         		// 0x00E8 (0x0008) [0x0000000000000000]               
	int                                                Playlist;                                         		// 0x00F0 (0x0004) [0x0000000000000000]               
	int                                                MaxPlayers;                                       		// 0x00F4 (0x0004) [0x0000000000000000]               
	int                                                NumPlayersTeam1;                                  		// 0x00F8 (0x0004) [0x0000000000000000]               
	int                                                NumPlayersTeam2;                                  		// 0x00FC (0x0004) [0x0000000000000000]               
	int                                                ReservationsTeam1;                                		// 0x0100 (0x0004) [0x0000000000000000]               
	int                                                ReservationsTeam2;                                		// 0x0104 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsPostGame : 1;                                  		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsBotMatch : 1;                                  		// 0x0108 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                TimeRemaining;                                    		// 0x010C (0x0004) [0x0000000000000000]               
	struct FString                                     ExclusivePlatform;                                		// 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             PlayersPlatforms;                                 		// 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                        		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerName;                                 		// 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerPassword;                             		// 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                ScoreTeam1;                                       		// 0x0160 (0x0004) [0x0000000000000000]               
	int                                                ScoreTeam2;                                       		// 0x0164 (0x0004) [0x0000000000000000]               
	int                                                ClubID;                                           		// 0x0168 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATEGAMESERVER_X));
		}

		return uClassPointer;
	};

	class URPC_UpdateGameServer_X* SetTeam2Score(int TeamScore);
	class URPC_UpdateGameServer_X* SetTeam1Score(int TeamScore);
	class URPC_UpdateGameServer_X* SetIsBotMatch(unsigned long bBotMatch);
	class URPC_UpdateGameServer_X* SetClubID(unsigned long long InClubID);
	class URPC_UpdateGameServer_X* SetCustomServerPassword(struct FString InCustomServerPassword);
	class URPC_UpdateGameServer_X* SetCustomServerName(struct FString InCustomServerName);
	class URPC_UpdateGameServer_X* SetPlayersPlatforms(TArray<struct FString> InPlayersPlatforms);
	class URPC_UpdateGameServer_X* SetExclusivePlatform(struct FString InExclusivePlatform);
	class URPC_UpdateGameServer_X* SetTimeRemaining(int InTimeRemaining);
	class URPC_UpdateGameServer_X* SetIsPostGame(unsigned long bInIsPostGame);
	class URPC_UpdateGameServer_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetReservationsTeam2(int InReservationsTeam2);
	class URPC_UpdateGameServer_X* SetReservationsTeam1(int InReservationsTeam1);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2(int InNumPlayersTeam2);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1(int InNumPlayersTeam1);
	class URPC_UpdateGameServer_X* SetMaxPlayers(int InMaxPlayers);
	class URPC_UpdateGameServer_X* SetPlaylist(int InPlaylist);
	class URPC_UpdateGameServer_X* SetServerID(unsigned long long InServerID);
};

// Class ProjectX.RPC_CreateGameServer_X
// 0x0090 (0x00E8 - 0x0178)
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                       		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                MachineId;                                        		// 0x00F8 (0x0004) [0x0000000000000000]               
	struct FString                                     IP;                                               		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Region;                                           		// 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                BuildID;                                          		// 0x0120 (0x0004) [0x0000000000000000]               
	struct FString                                     ServerType;                                       		// 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 ServerId;                                         		// 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     Host;                                             		// 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                Zone;                                             		// 0x0150 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      UseWebSocket : 1;                                 		// 0x0154 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FString                                     PerConURL;                                        		// 0x0158 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PsyToken;                                         		// 0x0168 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CREATEGAMESERVER_X));
		}

		return uClassPointer;
	};

	class URPC_CreateGameServer_X* SetBuildID(int InBuildID);
	class URPC_CreateGameServer_X* SetRegion(struct FString InRegion);
	class URPC_CreateGameServer_X* SetIP(struct FString InIP);
	class URPC_CreateGameServer_X* SetMachineID(int InMachineID);
	class URPC_CreateGameServer_X* SetServerType(struct FString InServerType);
	class URPC_CreateGameServer_X* SetServerName(struct FString InServerName);
};

// Class ProjectX.PartyErrors_X
// 0x0128 (0x0080 - 0x01A8)
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                                		// 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CreatePartyFailedTeamFull;                        		// 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CreatePlayerFailedPartyFull;                      		// 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;               		// 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedPartyFull;                         		// 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;                  		// 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedPartyInGame;                       		// 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  KickedFromParty;                                  		// 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyDestroyedConnectionError;                    		// 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyDestroyedSignedOut;                          		// 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailed;                                  		// 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedNotAllowed;                        		// 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedNotJoinable;                       		// 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyBuildID;                                     		// 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyNotFound;                                    		// 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UserNotOwner;                                     		// 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyIsFull;                                      		// 0x0100 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotAddToParty;                                 		// 0x0108 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UserListInvalid;                                  		// 0x0110 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidOwner;                                     		// 0x0118 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ChatDisabled;                                     		// 0x0120 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MissingOrExpiredInvite;                           		// 0x0128 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MemberNotFound;                                   		// 0x0130 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyIdConflict;                                  		// 0x0138 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotKickSelf;                                   		// 0x0140 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RegionRestrictedTrade;                            		// 0x0148 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotCrossPlatformTrade;                         		// 0x0150 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotCrossPlayInvite;                            		// 0x0158 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RestrictedPlatformInvite;                         		// 0x0160 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlatformNotSupported;                             		// 0x0168 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  KickedCrossplayDisabled;                          		// 0x0170 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  KickedLeaderPartyUp;                              		// 0x0178 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  VoterDisconnected;                                		// 0x0180 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  VoteEnded;                                        		// 0x0188 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UsePlatformPartySystem;                           		// 0x0190 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvitationRejected;                               		// 0x0198 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SplitScreenNotAllowedInLan;                       		// 0x01A0 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYERRORS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.FindServerTask_X
// 0x0028 (0x00D0 - 0x00F8)
class UFindServerTask_X : public UAsyncTask
{
public:
	float                                              SearchTimeout;                                    		// 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class URPC_X*                                      RPC;                                              		// 0x00D8 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_FINDSERVERTASK_X));
		}

		return uClassPointer;
	};

	void HandleClientReservationMessage(class UIReservationConnection_X* Connection, class UClientReservationMessage_X* Message);
	void HandleSearchTimeout();
	void HandleJoinMatchError(class URPC_X* InRPC);
	void Cleanup();
	void Init(class URPC_X* InRPC);
	class UFindServerTask_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UFindServerTask_X* FindUsingRPC(class URPC_X* InRPC);
	class UFindServerTask_X* FindUsingNamePassword(struct FString JoinName, struct FString JoinPassword, struct FName ReservationType);
	void EventResult(struct FServerReservationData OutResult);
};

// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSFULLMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSTEAMFULLMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsWaitingMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSWAITINGMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsReadyMessage_X
// 0x004C (0x0060 - 0x00AC)
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                    		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BeaconAddress;                                    		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PingAddress;                                      		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        ProductIDs;                                       		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                             		// 0x00A0 (0x0008) [0x0000000000000000]               
	unsigned long                                      bUseNetworkNextDriver : 1;                        		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSREADYMESSAGE_X));
		}

		return uClassPointer;
	};

	class UReservationsReadyMessage_X* SetKeys(class UNetworkEncryptionKey* InKeys);
	class UReservationsReadyMessage_X* SetProductIDs(TArray<int> InProductIDs);
	class UReservationsReadyMessage_X* SetPingAddress(struct FString InAddress);
	class UReservationsReadyMessage_X* SetBeaconAddress(struct FString InAddress);
	class UReservationsReadyMessage_X* SetServerAddress(struct FString InAddress);
};

// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSTIMEDOUTMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSPRIVATEMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (0x0060 - 0x0061)
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	unsigned char                                      Reason;                                           		// 0x0060 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSPASSWORDMESSAGE_X));
		}

		return uClassPointer;
	};

	class UReservationsPasswordMessage_X* SetReason(unsigned char InReason);
};

// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSWRONGPLAYLISTMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsWrongRankedMatchMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsWrongRankedMatchMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSWRONGRANKEDMATCHMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSKEYSFAILEDMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONCROSSPLAYDISABLEDMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (0x0060 - 0x0064)
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int                                                MaxPlayerCount;                                   		// 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSMAXPLAYERSMESSAGE_X));
		}

		return uClassPointer;
	};

	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount(int inMaxPlayerCount);
};

// Class ProjectX.PingMessage_X
// 0x0004 (0x0060 - 0x0064)
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned long                                      bIsResponse : 1;                                  		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PINGMESSAGE_X));
		}

		return uClassPointer;
	};

	class UPingMessage_X* SetIsResponse();
};

// Class ProjectX.RPC_KeysBase_X
// 0x005C (0x00E8 - 0x0144)
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                       		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                ServerPort;                                       		// 0x00F8 (0x0004) [0x0000000000000000]               
	TArray<unsigned char>                              Key;                                              		// 0x0100 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              IV;                                               		// 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              HMACKey;                                          		// 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<unsigned char>                              SessionId;                                        		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bPrimaryPlayer : 1;                               		// 0x0140 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_KEYSBASE_X));
		}

		return uClassPointer;
	};

	class URPC_KeysBase_X* SetPrimaryPlayer();
	class URPC_KeysBase_X* SetServerAddress(struct FString ServerAddress);
};

// Class ProjectX.RPC_GenerateKeys_X
// 0x0004 (0x0144 - 0x0148)
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GENERATEKEYS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.CancelJoinMessage_X
// 0x0000 (0x0060 - 0x0060)
class UCancelJoinMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CANCELJOINMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchmakingMetrics_X
// 0x0014 (0x0080 - 0x0094)
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:
	float                                              StartTime;                                        		// 0x0080 (0x0004) [0x0000000000000000]               
	struct FGuid                                       MMGuid;                                           		// 0x0084 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHMAKINGMETRICS_X));
		}

		return uClassPointer;
	};

	void SendReservationRetryFail();
	void SendReservationRetrySuccess();
	void SendReservationRetry();
	void RankedReconnect(struct FString ServerName, struct FGuid MatchMakingGuid);
	void FoundServer(struct FString Address, struct FString ServerName, int Playlist, struct FString ReservationID, unsigned long bFromNotification, float ElapsedTime, struct FGuid MatchMakingGuid);
	void RecordFoundServer(unsigned long bFromNotification, struct FGuid MatchMakingGuid, struct FServerReservationData& Reservation);
	void Cancel(float ElapsedTime, struct FGuid MatchMakingGuid);
	void RecordCancel(struct FGuid MatchMakingGuid);
	void ErrorID(int Error, struct FGuid MatchMakingGuid);
	void ErrorUnknown(struct FString Message, struct FGuid MatchMakingGuid);
	void RecordError(struct FString Error, struct FGuid MatchMakingGuid);
	void Start(TArray<class URegionPing_X*> Regions, TArray<int> Playlists, unsigned long bDisableCrossPlay, unsigned long bUseRecommendedRegions, struct FGuid MatchMakingGuid);
};

// Class ProjectX.DSPendingMessage_X
// 0x000C (0x0060 - 0x006C)
class UDSPendingMessage_X : public UObject
{
public:
	class UDSR_DSMessage_X*                            Message;                                          		// 0x0060 (0x0008) [0x0000000000000000]               
	float                                              TimeoutTime;                                      		// 0x0068 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DSPENDINGMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.DSR_DSMessage_X
// 0x0040 (0x0090 - 0x00D0)
class UDSR_DSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PlayerID;                                         		// 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessageType;                                      		// 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                   		// 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DSR_DSMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSMETRICS_X));
		}

		return uClassPointer;
	};

	void PlayerReservationWithNoPsyNetBeaconError(struct FUniqueNetId PlayerID);
	void ServerMigrationPlayersAlreadySetError(unsigned long long ServerId);
	void ServerMigrationPlaylistNotSetError(unsigned long long ServerId);
	void TournamentMigrationMessageInvalidTournamentPlaylistError();
	void TournamentMigrationMessageWhileActiveError();
	void JoinExternalMatchReservationWhileInactiveError();
	void CreateExternalMatchReservationWhileActiveError();
	void DsrServerToServerFailedDeserializeError(struct FString MessageType);
	void JoinTournamentReservationWhileInactiveError();
	void CreateTournamentReservationInvalidPlaylistError();
	void CreateTournamentReservationWhileActiveError();
	void JoinPrivateReservationWhileInactiveError();
	void CreatePrivateReservationWhileActiveError();
	void BackfillReservationWhileInactiveError();
	void NewGameReservationWhileActiveError();
	void SplitscreenIdMismatchError(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId SplitscreenPlayerId);
	void PartyLeaderInDuelError(struct FUniqueNetId PlayerID);
	void PlayerReservationWrongIdError(struct FUniqueNetId PlayerID, struct FString AttemptedId);
	void JoinWhileInactiveError();
	void DsrConnectionTimeoutError();
	void DsrClientFailedDeserializeError(struct FString MessageType);
	void DsrUnreservedServerError(struct FString MessageType);
	void DsrServerFailedDeserializeError(struct FUniqueNetId PlayerID, struct FString MessageType);
	void DsrMissingReservationError(struct FUniqueNetId PlayerID);
	void DsrMissingConnectionError();
	void PlayerCanceled();
	void NotAllPlayersJoinedError();
	void GetKeysInvalidOriginError();
	void GetKeysFailedError();
	void ReservationsFullError();
	void PlatformExclusiveReservationError();
	void WrongReservationRankedMatchError();
	void WrongReservationPlaylistError();
	void InvalidReservationPlaylistError();
	void RankedReconnect();
	void RankedReconnectFinished();
	void PrivateMatchFinished();
	void FriendJoin();
	void FriendJoinEmptyError();
	void FriendJoinRankedError();
	void AddReservation(struct FUniqueNetId PlayerID, int Playlist, struct FString ReservationID);
	void FirstReservation(int Playlist, struct FString ReservationID);
};

// Class ProjectX.DSR_ClientMessage_X
// 0x0030 (0x0090 - 0x00C0)
class UDSR_ClientMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                    		// 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessageType;                                      		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                   		// 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DSR_CLIENTMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.InitialServerToClientMessage_X
// 0x0000 (0x0060 - 0x0060)
class UInitialServerToClientMessage_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_INITIALSERVERTOCLIENTMESSAGE_X));
		}

		return uClassPointer;
	};

	struct FString GetDSRToken();
	struct FString GetReservationID();
};

// Class ProjectX.DSR_DSToDSMessage_X
// 0x0020 (0x0090 - 0x00B0)
class UDSR_DSToDSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     MessageType;                                      		// 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                   		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DSR_DSTODSMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_ServerToServer_X
// 0x0028 (0x00E8 - 0x0110)
class URPC_ServerToServer_X : public URPC_X
{
public:
	unsigned long long                                 ServerId;                                         		// 0x00E8 (0x0008) [0x0000000000000000]               
	struct FString                                     MessageType;                                      		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                   		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SERVERTOSERVER_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToServer_E36D155C4A3A2377962CF583D760C221
// 0x0010 (0x0060 - 0x0070)
class U__PsyNetBeacon_X__SendMessageToServer_E36D155C4A3A2377962CF583D760C221 : public UObject
{
public:
	class URPC_RelayToServer_X*                        RPC;                                              		// 0x0060 (0x0008) [0x0000000000000000]               
	class UPsyNetBeaconConnection_X*                   Connection;                                       		// 0x0068 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETBEACON_X__SENDMESSAGETOSERVER_E36D155C4A3A2377962CF583D760C221));
		}

		return uClassPointer;
	};

	void __PsyNetBeacon_X__SendMessageToServer_E36D155C4A3A2377962CF583D760C221(class URPC_X* _);
};

// Class ProjectX.RPC_RelayToServer_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_RelayToServer_X : public URPC_X
{
public:
	struct FString                                     DSConnectToken;                                   		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessageType;                                      		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                   		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_RELAYTOSERVER_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_25ADE5B945FF7AF0FDC8ED9A22C4F7FE
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetBeacon_X__SendMessageToClients_25ADE5B945FF7AF0FDC8ED9A22C4F7FE : public UObject
{
public:
	class UPsyNetBeaconConnection_X*                   Connection;                                       		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETBEACON_X__SENDMESSAGETOCLIENTS_25ADE5B945FF7AF0FDC8ED9A22C4F7FE));
		}

		return uClassPointer;
	};

	bool __PsyNetBeacon_X__SendMessageToClients_25ADE5B945FF7AF0FDC8ED9A22C4F7FE(class URPC_RelayToClient_X* OtherRPC);
};

// Class ProjectX.QueuedOfflineMessage_X
// 0x0000 (0x0060 - 0x0060)
class UQueuedOfflineMessage_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_QUEUEDOFFLINEMESSAGE_X));
		}

		return uClassPointer;
	};

	int GetOfflineTimeToLiveSeconds();
};

// Class ProjectX.RPC_RelayToClient_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_RelayToClient_X : public URPC_X
{
public:
	TArray<struct FString>                             PlayerIDs;                                        		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessageType;                                      		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                   		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      AllowPartialSuccess : 1;                          		// 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      QueueOffline : 1;                                 		// 0x0128 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                OfflineTTLSeconds;                                		// 0x012C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_RELAYTOCLIENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_DSReservation_X
// 0x0048 (0x0090 - 0x00D8)
class UPsyNetService_DSReservation_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetBeaconReservation                    Reservation;                                      		// 0x0090 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_DSRESERVATION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetServiceProvider_X
// 0x0038 (0x0060 - 0x0098)
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                                		// 0x0060 (0x0008) [0x0000000000000000]               
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0068 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UPsyNetChannel_X*>                    Channels;                                         		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;                 		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICEPROVIDER_X));
		}

		return uClassPointer;
	};

	void FinalizeServiceTask(class UPsyNetClientService_X* Service, class UTAsyncResult__PsyNetClientService_X* Task, class UError* Error);
	void PrintServiceResult(struct FString ServiceName, class UError* Error);
	class UTAsyncResult__PsyNetClientService_X* ExecuteServiceMessage(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	bool IsServiceRequest(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetClientService_X* ExecuteNotification(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	void SetResponse(class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response);
	class UTAsyncResult__PsyNetClientService_X* ExecuteRequest(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response);
	void HandleChannelClosed(class UPsyNetChannel_X* Channel);
	class UPsyNetChannel_X* CreateChannel(struct FString ChannelName);
	void Unsubscribe(struct FScriptDelegate Callback);
	void Subscribe(class UClass* ServiceClass, struct FScriptDelegate Callback);
	void eventConstruct();
	void EventServiceExecuted(class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service);
};

// Class ProjectX.OnlineGameLanReservations_X
// 0x0030 (0x0098 - 0x00C8)
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                        		// 0x0098 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UReservationBeacon_X*                        Beacon;                                           		// 0x00A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ReservationTimeout;                               		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bServerTraveling : 1;                             		// 0x00AC (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;             		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMELANRESERVATIONS_X));
		}

		return uClassPointer;
	};

	void HandleReservationDisconnected(class UTcpConnection* Connection);
	void HackForceNotServerTravelling();
	void SetServerTraveling(unsigned long bTraveling);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	int GetNumPlayers();
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void Reset();
	void CheckReservationTimeout();
	bool HandlePublicReservation(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message);
	void HandlePublicReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void StartReservationTimeout();
	bool HandlePrivateReservation(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message);
	void HandlePrivateReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnInit();
	void EventReservationsTimeout();
};

// Class ProjectX.BugMetrics_X
// 0x0010 (0x0080 - 0x0090)
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FName>                               ReportedIDs;                                      		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BUGMETRICS_X));
		}

		return uClassPointer;
	};

	void Report(struct FName Id, struct FString Details, struct FString Trace);
	void BugReport(struct FName Id, struct FString Details);
	void StaticReport(struct FName Id, struct FString Details);
};

// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x0064 (0x00E8 - 0x014C)
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     LeaderboardId;                                    		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bHasSkill : 1;                                    		// 0x0140 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bHasValue : 1;                                    		// 0x0140 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int                                                Value;                                            		// 0x0144 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              MMR;                                              		// 0x0148 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETLEADERBOARDVALUEFORUSERBASE_X));
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x0008 (0x014C - 0x0154)
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	int                                                Playlist;                                         		// 0x0150 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETSKILLLEADERBOARDVALUEFORUSER_X));
		}

		return uClassPointer;
	};

	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x0014 (0x014C - 0x0160)
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETLEADERBOARDVALUEFORUSER_X));
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardValueForUser_X* SetStat(struct FString InStat);
};

// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x0028 (0x00E8 - 0x0110)
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     LeaderboardId;                                    		// 0x00F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardPlatformBaseData>     Platforms;                                        		// 0x0100 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETLEADERBOARDBASE_X));
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay(unsigned long InDisableCrossplay);
};

// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0004 (0x0110 - 0x0114)
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int                                                Playlist;                                         		// 0x0110 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETSKILLLEADERBOARD_X));
		}

		return uClassPointer;
	};

	class URPC_GetSkillLeaderboard_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboard_X
// 0x0010 (0x0110 - 0x0120)
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETLEADERBOARD_X));
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboard_X* SetStat(struct FString InStat);
};

// Class ProjectX.OnlinePlayerFriends_X
// 0x0280 (0x0098 - 0x0318)
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	unsigned long                                      bAllowSamePlatformPsyNetFriends : 1;              		// 0x0098 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      bRepeatFriendsListDownloadsUntilSuccess : 1;      		// 0x0098 (0x0004) [0x0000000000004002] [0x00000002] (CPF_Const | CPF_Config)
	unsigned long                                      bFetchingLinkedAccounts : 1;                      		// 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	class UOnlineFriendMap_X*                          CachedFriends;                                    		// 0x00A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPlatformFriends_X*                          PlatformFriends;                                  		// 0x00A8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetFriends_X*                            PsyNetFriends;                                    		// 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UEpicFriends_X*                              EpicFriends;                                      		// 0x00B8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineFriendMap_X*                          BlockedPlayers;                                   		// 0x00C0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ULinkedAccountMap_X*                         PlatformToEpicAccountMap;                         		// 0x00C8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ULinkedAccountMap_X*                         EpicToPlatformAccountMap;                         		// 0x00D0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             PlatformFriendsDownloadDelayer;                   		// 0x00D8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             PsyNetFriendsDownloadDelayer;                     		// 0x00E0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             EpicFriendsDownloadDelayer;                       		// 0x00E8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             BlockedListDownloadDelayer;                       		// 0x00F0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<struct FUniqueNetId>                        PendingFriendAccepts;                             		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOSSConfig_X*                                OSSConfig;                                        		// 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UEpicConfig_X*                               EpicConfig;                                       		// 0x0110 (0x0008) [0x0000000000000000]               
	class UEpicFriendsPlugin_X*                        EpicFriendsPlugin;                                		// 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;              		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetBlockedListDownloadComplete__Delegate;		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetBlockedListChanged__Delegate;        		// 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetBlockedPlayer__Delegate;             		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetUnblockedPlayer__Delegate;           		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAcceptEpicFriendInvite__Delegate;          		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDeclineEpicFriendInvite__Delegate;         		// 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventChatMessage__Delegate;                     		// 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetStatusUpdate__Delegate;              		// 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPsyTagUpdate__Delegate;              		// 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlatformStatusUpdate__Delegate;            		// 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicStatusUpdate__Delegate;                		// 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteReceived__Delegate;        		// 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteRemoved__Delegate;         		// 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteSucceeded__Delegate;       		// 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteFailed__Delegate;          		// 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicPlayerUnfriended__Delegate;            		// 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventQueriedUserByEpicDisplayName__Delegate;    		// 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlatformFriendsListDownloadCompleted__Delegate;		// 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetFriendsListDownloadCompleted__Delegate;		// 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendsListDownloadCompleted__Delegate;		// 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERFRIENDS_X));
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__OnInit_232E432B46A48E6BC8ADC3885EFC01ED(class UEpicFriendsPlugin_X* Plugin);
	void __OnlinePlayerFriends_X__OnInit_3AD59D694B6C18DFE88BCBA8C991A513();
	void __OnlinePlayerFriends_X__OnInit_E23D530E48C13114D7765B90306A74B8(class UPsyNetService_FriendChatReceived_X* N);
	void RebuildFriendsCache();
	void RemoveEpicFriendLocally(struct FUniqueNetId RemovedID);
	void SendChatMessage(struct FString InMessage, struct FUniqueNetId Recipient);
	void ShowPlayerCard(struct FUniqueNetId FriendId, struct FString FriendName);
	void SetEpicRichPresence(unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void SetPlatformRichPresence(unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void HandleEpicFriendRemoved(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID);
	void RemoveEpicFriend(struct FUniqueNetId FriendId);
	bool IsFriend(struct FUniqueNetId FriendId);
	bool IsPlatformFriend(struct FUniqueNetId FriendId);
	bool IsPsyNetFriend(struct FUniqueNetId FriendId);
	bool IsEpicFriend(struct FUniqueNetId FriendId);
	void ConditionalUpdateFriendInMap(class UOnlineFriendMap_X* FriendMap, struct FOnlineFriend NewFriendData);
	void HandlePsyTagUpdated(class UPsyNetService_FriendPsyTagUpdated_X* Notification);
	void HandleEpicPresenceChanged(struct FUniqueNetId FriendId);
	void HandlePlatformPresenceChange(struct FUniqueNetId FriendId);
	struct FOnlineStatus ExtractStatusData(struct FOnlineFriend InFriend);
	void HandleReadEpicFriendsAbandoned();
	void HandleDownloadEpicFriendsTryComplete(unsigned long bSuccess);
	void DownloadEpicFriendsList();
	void BeginEpicFriendsDownloadAttempts();
	void HandleOnReceivedLinkedAccounts(unsigned long bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData);
	void GetLinkedFriendData();
	void HandleReadPsyNetFriendsAbandoned();
	void HandleReadPsyNetFriendsFail(class URPC_PsyNetReadFriends_X* RPC);
	void HandleReadPsyNetFriendsSuccess(class URPC_PsyNetReadFriends_X* RPC);
	void DownloadPsyNetFriendsList();
	void BeginPsyNetFriendsDownloadAttempts();
	void UpdateFriendsFromOnlineSub();
	void DelayedUpdateFriendsFromOnlineSub();
	void UpdateFriendsFromEpicSub();
	void DelayedUpdateFriendsFromEpicSub();
	void HandleDeclineEpicFriendInviteComplete(struct FUniqueNetId DeclinedId, class UError* Error);
	void DeclineEpicFriendInvite(struct FUniqueNetId FriendId);
	void HandleAcceptEpicFriendInviteComplete(struct FUniqueNetId AcceptedId, class UError* Error);
	void AcceptEpicFriendInvite(struct FUniqueNetId FriendId);
	void HandleEpicFriendInviteCompleted(struct FUniqueNetId InvitedPlayerId, class UError* Error);
	void HandleEpicFriendInviteRemoved(unsigned char LocalUserNum, struct FUniqueNetId PlayerToRemove);
	void HandleEpicFriendInviteReceived(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message);
	bool InviteEpicFriend(struct FUniqueNetId FriendPlayerId);
	bool RequestLinkedAccounts(TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback);
	void HandleQueriedUserByEpicDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId QueriedPlayerId);
	bool QueryUserByEpicDisplayName(struct FString DisplayName);
	void OnPlatformFriendsDownloadAbandoned();
	void HandleDownloadPlatformFriendsTryComplete(unsigned long bSuccess);
	void DownloadPlatformFriendsList();
	void BeginDownloadPlatformFriendsListAttempts();
	void UnblockPlayer(struct FUniqueNetId UnblockID, struct FScriptDelegate Callback);
	void BlockPlayer(struct FUniqueNetId BlockedID, struct FString BlockedPlayerName, struct FPsyTag BlockedTag, struct FScriptDelegate Callback);
	void OnBlockedListDownloadAbandoned(struct FScriptDelegate Callback);
	void HandleDownloadBlockedListAttemptComplete(class URPC_GetBlockList_X* RPC, struct FScriptDelegate Callback);
	void DownloadBlockedListAttempt(struct FScriptDelegate Callback);
	void DownloadBlockedList(struct FScriptDelegate Callback);
	void HandlePsyNetConnected(class UPsyNetConnection_X* C);
	unsigned char GetFriendState(struct FString PresenceState);
	struct FOnlineFriend ConvertPsyNetResponseToOnlineFriend(struct FPsyNetPersonaData InData);
	void eventConstruct();
	void HandleOSSConfigChanged(class UOSSConfig_X* InOSSConfig);
	void OnInit();
	void EventEpicFriendsListDownloadCompleted(unsigned long bSuccess);
	void EventPsyNetFriendsListDownloadCompleted(unsigned long bSuccess);
	void EventPlatformFriendsListDownloadCompleted(unsigned long bSuccess);
	void EventQueriedUserByEpicDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId QueriedPlayerId);
	void EventEpicPlayerUnfriended(struct FUniqueNetId RemovedID);
	void EventEpicFriendInviteFailed(struct FUniqueNetId InvitedPlayerId, class UError* InviteFriendError);
	void EventEpicFriendInviteSucceeded(struct FUniqueNetId InvitedPlayerId);
	void EventEpicFriendInviteRemoved(struct FUniqueNetId PlayerToRemove);
	void EventEpicFriendInviteReceived(struct FUniqueNetId RequestingPlayer, struct FString RequestingNick);
	void EventEpicStatusUpdate(struct FOnlineStatus StatusData);
	void EventPlatformStatusUpdate(struct FOnlineStatus StatusData);
	void EventPsyNetPsyTagUpdate(struct FOnlineFriend& FriendData);
	void EventPsyNetStatusUpdate(struct FOnlineStatus StatusData);
	void EventChatMessage(struct FString InMessage, struct FUniqueNetId SenderId, unsigned long bIsLocal);
	void EventDeclineEpicFriendInvite(struct FUniqueNetId DeclinedId, class UError* RequestError);
	void EventAcceptEpicFriendInvite(struct FUniqueNetId AcceptedId, class UError* RequestError);
	void EventPsyNetUnblockedPlayer(struct FUniqueNetId BlockedID, class UError* RequestError);
	void EventPsyNetBlockedPlayer(struct FUniqueNetId BlockedID, class UError* RequestError);
	void EventPsyNetBlockedListChanged(class UOnlinePlayerFriends_X* FriendsObject);
	void EventPsyNetBlockedListDownloadComplete(class UError* RequestError);
	void EventFriendsListChanged(class UOnlinePlayerFriends_X* FriendsRef, class UError* Error);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x0030 (0x00E8 - 0x0118)
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                        		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     LeaderboardId;                                    		// 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardRankForUserData>      Players;                                          		// 0x0108 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETLEADERBOARDRANKFORUSERSBASE_X));
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
};

// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (0x0118 - 0x011C)
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int                                                Playlist;                                         		// 0x0118 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETSKILLLEADERBOARDRANKFORUSERS_X));
		}

		return uClassPointer;
	};

	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x0010 (0x0118 - 0x0128)
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                             		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETLEADERBOARDRANKFORUSERS_X));
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardRankForUsers_X* SetStat(struct FString InStat);
};

// Class ProjectX.CheckReservation_X
// 0x00F0 (0x0060 - 0x0150)
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                       		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Rate;                                             		// 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastMatchmakingHeartbeatTime;                     		// 0x0068 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UAsyncTask*                                  CheckReservationTask;                             		// 0x0070 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             FoundReservationCallback;                         		// 0x0078 (0x0018) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FServerReservationData                      FoundReservation;                                 		// 0x0090 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetConfig_X*                             Config;                                           		// 0x0110 (0x0008) [0x0000000000000000]               
	class UReservationBeacon_X*                        ReservationBeacon;                                		// 0x0118 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __OnStartSearch__Delegate;                        		// 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                   		// 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CHECKRESERVATION_X));
		}

		return uClassPointer;
	};

	void HandleReservationData(struct FServerReservationData& Reservation);
	void HandleClientReservationMessage(class UIReservationConnection_X* Connection, class UClientReservationMessage_X* Message);
	void HandleReservation2Notification(class UPsyNetService_Reservation2_X* Service);
	void HandlePendingReservation();
	void HandleReservationNotification(class UPsyNetService_Reservation_X* Service);
	void SendRequest();
	void HandlePreLoadMap(struct FString _);
	void Cancel();
	bool IsSearching();
	void StartSearch(struct FScriptDelegate Callback);
	class UCheckReservation_X* NotifyOnStartSearch(struct FScriptDelegate Callback);
	void OnFoundReservation(struct FServerReservationData Reservation);
	void OnStartSearch(class UAsyncTask* Task);
};

// Class ProjectX.RegionPing_X
// 0x0039 (0x0060 - 0x0099)
class URegionPing_X : public UObject
{
public:
	class URegion_X*                                   Region;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FString                                     RegionID;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Address;                                          		// 0x0078 (0x0008) [0x0000000000000000]               
	class UTcpConnection*                              Connection;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
	float                                              PingSendTime;                                     		// 0x0088 (0x0004) [0x0000000000000000]               
	float                                              Ping;                                             		// 0x008C (0x0004) [0x0000000000000000]               
	float                                              AvgPing;                                          		// 0x0090 (0x0004) [0x0000000000000000]               
	int                                                PingCount;                                        		// 0x0094 (0x0004) [0x0000000000000000]               
	unsigned char                                      PingResult;                                       		// 0x0098 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_REGIONPING_X));
		}

		return uClassPointer;
	};

	void Reset();
};

// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PLAYERCANCELMATCHMAKING_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_StartMatchmaking_X
// 0x005C (0x00E8 - 0x0144)
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray<struct FString>                             Regions;                                          		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        Playlists;                                        		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                SecondsSearching;                                 		// 0x0108 (0x0004) [0x0000000000000000]               
	unsigned long long                                 CurrentServerId;                                  		// 0x0110 (0x0008) [0x0000000000000000]               
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PartyID;                                          		// 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                     		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BannedSecondsRemaining;                           		// 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_STARTMATCHMAKING_X));
		}

		return uClassPointer;
	};

	class URPC_StartMatchmaking_X* SetIgnoreSkill(unsigned long bInIgnoreSkill);
	class URPC_StartMatchmaking_X* SetPartyId(struct FString InPartyId);
	class URPC_StartMatchmaking_X* SetPartyMembers(TArray<struct FUniqueNetId> InPartyMembers);
	class URPC_StartMatchmaking_X* SetDisableCrossPlay(unsigned long bInDisableCrossplay);
	class URPC_StartMatchmaking_X* SetCurrentServerID(unsigned long long InCurrentServerID);
	class URPC_StartMatchmaking_X* SetSecondsSearching(int InSecondsSearching);
	class URPC_StartMatchmaking_X* SetPlaylists(TArray<int> InPlaylists);
	class URPC_StartMatchmaking_X* SetRegions(TArray<struct FString> InRegions);
};

// Class ProjectX.Parties_X
// 0x02B8 (0x0060 - 0x0318)
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                      		// 0x0060 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LastActiveLobby;                                  		// 0x0090 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x00A0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNet_X*                                   PsyNet;                                           		// 0x00E8 (0x0008) [0x0000000000000000]               
	class UOnlineGameParty_X*                          OnlineGameParty;                                  		// 0x00F0 (0x0008) [0x0000000000000000]               
	class UPartyMessageQueue_X*                        MessageQueue;                                     		// 0x00F8 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetConnection_X*                         PsyNetConnection;                                 		// 0x0100 (0x0008) [0x0000000000000000]               
	class UPsyNetChannel_X*                            PsyNetChannel;                                    		// 0x0108 (0x0008) [0x0000000000000000]               
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0110 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPartyPlatformSession_X*                     PlatformSession;                                  		// 0x0118 (0x0008) [0x0000000000000000]               
	class UPartySequence_CreateParty_X*                SequenceCreateParty;                              		// 0x0120 (0x0008) [0x0000000000000000]               
	class UPartySequence_JoinParty_X*                  SequenceJoinParty;                                		// 0x0128 (0x0008) [0x0000000000000000]               
	class UPartySequence_LeaveParty_X*                 SequenceLeaveParty;                               		// 0x0130 (0x0008) [0x0000000000000000]               
	class UPartySequence_InviteToParty_X*              SequenceInviteToParty;                            		// 0x0138 (0x0008) [0x0000000000000000]               
	unsigned long                                      bRejoiningParty : 1;                              		// 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SecondToWaitForPerConReconnect;                   		// 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     PartySetting_PsyNetPartyId;                       		// 0x0148 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PartySetting_JoinKey;                             		// 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                    		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLobbyInviteComplete__Delegate;             		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                		// 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyError__Delegate;                         		// 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                		// 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                		// 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                  		// 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                		// 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;          		// 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;            		// 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                		// 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;             		// 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                      		// 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                        		// 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;              		// 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                     		// 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyChatRecieved__Delegate;               		// 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;              		// 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTIES_X));
		}

		return uClassPointer;
	};

	void __Parties_X__CreateLobby_65E1E8374D5A1230B98B278F84A1B2D1(class UError* Error);
	void __Parties_X__HandlePsyNetPartyJoined_74036BAE44AFAC1E7995479C6DFF48E7(struct FPsyNetPartyMember Member);
	void __Parties_X__SetLobbyOwner_E98D05AF4067C8D733629B9302F90338(class URPC_PartyChangeOwner_X* RPC);
	void HandlePsyNetPartyInviteAccepted(struct FString PartyID);
	struct FString GetPsyNetPartyID();
	struct FUniqueNetId FindPartyLeaderID(TArray<struct FPsyNetPartyMember>& Members);
	void HandleOwnerChanged(class UPsyNetService_PartyOwnerChanged_X* Notification);
	void HandleChatNotification(class UPsyNetService_PartyChat_X* Notifications);
	void HandleSystemNotification(class UPsyNetService_PartySystem_X* Notifications);
	void HandleUserKicked(class UPsyNetService_PartyUserKicked_X* Notification);
	void HandleUserDisconnected(class UPsyNetService_PartyUserDisconnected_X* Notification);
	void HandleUserLeft(class UPsyNetService_PartyUserLeft_X* Notification);
	void HandleUserJoined(class UPsyNetService_PartyUserJoined_X* Notification);
	void HandleMemberStatusUpdate(struct FUniqueNetId MemberUID, struct FString Status);
	void HandleUserInvitedResponse(struct FUniqueLobbyId LobbyId, struct FUniqueNetId ForUserId, unsigned long bAccepted);
	void HandleUserInvited(class UPsyNetService_PartyUserInvited_X* Notifications);
	void SetRejoiningParty(unsigned long bRejoining);
	void HandleChannelClosed(class UPsyNetChannel_X* InChannel);
	class UPsyNetChannel_X* CreatePsyNetChannel(struct FUniqueLobbyId PsyNetPartyId);
	void SetPsyNetSubscriptions(class UPsyNetServiceSubscriptions_X* InSubscriptions);
	void SetPsyNetChannel(class UPsyNetChannel_X* InChannel);
	void TimeoutPerconReconnect();
	void SetPsyNetConnection(class UPsyNetConnection_X* InConnection);
	void ClearLobbyData();
	void DestroyLobby(unsigned char Reason);
	void HandlePerConDisconnected(class UPsyNetConnection_X* Connection);
	void HandlePerConConnected(class UPsyNetConnection_X* Connection);
	void HandlePartyInfoFail(class URPC_X* RPC);
	void HandlePartyInfoSuccess(class URPC_PartyInfo_X* RPC_PartyInfo);
	void GetPartyInfo();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	bool IsInLobby();
	struct FUniqueLobbyId CreatePsyNetPartyID(struct FString S);
	void ClearHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate);
	void AddHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate);
	void OnHostStartPlayTogether(unsigned char LocalUserNum);
	int FindMemberId(struct FLobbyMember& MemberData);
	int PlayerIdToMemberId(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID, int& MemberIndex);
	struct FUniqueNetId MemberIdToPlayerId(int MemberId, struct FUniqueLobbyId& LobbyId, int& MemberIndex);
	bool KickPlayer(unsigned char Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId& LobbyId);
	bool InviteToPsyNetLobbyExclusively(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool InviteToActiveLobby(struct FUniqueNetId& PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwnerId);
	bool SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyType(unsigned char Type, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID);
	bool RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId);
	bool SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId);
	bool SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<unsigned char>& Data);
	bool SendLobbyMessage(struct FString Message, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId& LobbyId);
	void RemoveLobbyMember(struct FUniqueNetId PlayerUID);
	void AddLobbyMember(struct FUniqueNetId PlayerUID, struct FString Username);
	void HandleLobbyJoinFailed(class UError* InError);
	void HandlePsyNetPartyJoined(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
	void HandlePsyNetPartyCreated(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
	bool JoinLobbyWithKey(struct FString PsyNetPartyId, struct FString JoinKey);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId& LobbyId);
	bool UpdateFoundLobbies(struct FUniqueLobbyId LobbyId);
	int FindMemberIndex(struct FUniqueNetId MemberId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, unsigned char Distance);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyChatRecieved(struct FUniqueNetId PlayerID, struct FString Text);
	void ClearLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate);
	void OnLobbyDestroyed(unsigned char Reason, struct FUniqueLobbyId& LobbyId);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId& PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId& NewPartyMember);
	bool GetLobbyMembers(struct FUniqueLobbyId& LobbyId, TArray<struct FLobbyMember>& Members);
	void EventLobbyInvitePending(struct FUniqueLobbyId LobbyId, struct FUniqueNetId FromUserId, struct FString FromUserName);
	void ClearLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate);
	void AddLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate);
	void OnLobbyInvite(unsigned long bAccepted, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& FriendId);
	void ClearLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate);
	void OnLobbyJoinGame(struct FString ServerIP, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueNetId& ServerId);
	void TriggerLobbyReceiveBinaryDataDelegate(int MemberIndex, TArray<unsigned char> Data);
	void ClearLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate);
	void OnLobbyReceiveBinaryData(int MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<unsigned char>& Data);
	void ClearLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate);
	void OnLobbyReceiveMessage(int MemberIndex, struct FString Type, struct FString Message, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate);
	void eventTriggerLobbyMemberStatusUpdateDelegates(int MemberIndex, int InstigatorIndex, struct FString Status);
	void OnLobbyMemberStatusUpdate(int MemberIndex, int InstigatorIndex, struct FString Status, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate);
	void OnLobbyMemberSettingsUpdate(int MemberIndex, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo& LobbyInfo);
	void ClearJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate);
	void OnJoinLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyId);
	void ClearFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate);
	void OnFindLobbiesComplete(unsigned long bWasSuccessful, TArray<struct FBasicLobbyInfo>& LobbyList);
	void ClearLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void OnLobbySessionCreated();
	void ClearLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate);
	void AddLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate);
	void OnLobbyError(struct FString Error);
	void ClearCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& LobbyId);
	void OnExit();
	void Init();
	void eventConstruct();
	void EventLobbyInviteComplete(unsigned long bSucceeded, struct FUniqueNetId InviteeID, struct FString Error);
	void EventShowInviteUI();
};

// Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_A24AF40948E071348B8CFFBC155F41C1
// 0x0080 (0x0060 - 0x00E0)
class U__OnlineGameMatchmaking_X__OnReceiveGameServer_A24AF40948E071348B8CFFBC155F41C1 : public UObject
{
public:
	struct FServerReservationData                      Reservation;                                      		// 0x0060 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEMATCHMAKING_X__ONRECEIVEGAMESERVER_A24AF40948E071348B8CFFBC155F41C1));
		}

		return uClassPointer;
	};

	bool __OnlineGameMatchmaking_X__OnReceiveGameServer_A24AF40948E071348B8CFFBC155F41C1(struct FString R);
};

// Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_8A20925143BFDF5FB9C9A2A57F2252F3
// 0x0004 (0x0060 - 0x0064)
class U__OnlineGameMatchmaking_X__AddRecommendedServers_8A20925143BFDF5FB9C9A2A57F2252F3 : public UObject
{
public:
	float                                              AccPingThreshold;                                 		// 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEMATCHMAKING_X__ADDRECOMMENDEDSERVERS_8A20925143BFDF5FB9C9A2A57F2252F3));
		}

		return uClassPointer;
	};

	bool __OnlineGameMatchmaking_X__AddRecommendedServers_8A20925143BFDF5FB9C9A2A57F2252F3(class URegionPing_X* R);
};

// Class ProjectX.SuperRegion_X
// 0x0020 (0x0060 - 0x0080)
class USuperRegion_X : public UObject
{
public:
	struct FString                                     Id;                                               		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Label;                                            		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SUPERREGION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RegionConfig_X
// 0x0020 (0x0078 - 0x0098)
class URegionConfig_X : public UOnlineConfig_X
{
public:
	TArray<class USuperRegion_X*>                      SuperRegions;                                     		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URegion_X*>                           Regions;                                          		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_REGIONCONFIG_X));
		}

		return uClassPointer;
	};

	struct FRegionSecret __RegionConfig_X__GetRegionSecrets_C4B375B5458EEF5248BD399FB4477225(class URegion_X* R);
	bool __RegionConfig_X__GetRegionSecrets_FB936DAC42B92890DD496AB2CCB2F08C(class URegion_X* R);
	TArray<struct FRegionSecret> GetRegionSecrets();
	TArray<class URegion_X*> GetSubRegions(struct FString SuperRegionID);
	class URegion_X* FindRegion(struct FString RegionID);
	class USuperRegion_X* FindSuperRegion(struct FString SuperRegionID);
	void Apply();
};

// Class ProjectX.Region_X
// 0x0040 (0x0060 - 0x00A0)
class URegion_X : public UObject
{
public:
	struct FString                                     SuperRegionID;                                    		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Id;                                               		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Label;                                            		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Secret;                                           		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_REGION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_972782DC4996DBC84B18CCA31F5A3E50
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameMatchmaking_X__GetSubRegionPings_972782DC4996DBC84B18CCA31F5A3E50 : public UObject
{
public:
	struct FString                                     SuperRegionID;                                    		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEMATCHMAKING_X__GETSUBREGIONPINGS_972782DC4996DBC84B18CCA31F5A3E50));
		}

		return uClassPointer;
	};

	bool __OnlineGameMatchmaking_X__GetSubRegionPings_972782DC4996DBC84B18CCA31F5A3E50(class URegionPing_X* R);
};

// Class ProjectX.PartyMessage_X
// 0x0048 (0x0060 - 0x00A8)
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                           		// 0x0060 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_X));
		}

		return uClassPointer;
	};

	bool BroadcastOn(class UOnlineLobbyInterface* LobbyInterface, struct FUniqueLobbyId LobbyId);
	bool Broadcast();
};

// Class ProjectX.PartyMessage_SearchStatus_X
// 0x000C (0x00A8 - 0x00B4)
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                      		// 0x00A8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bIsSearching : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_SEARCHSTATUS_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_SearchStatus_X* SetIsSearching(unsigned long bValue);
	class UPartyMessage_SearchStatus_X* SetSearchState(struct FName InSearchState);
};

// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (0x00A8 - 0x00AC)
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int                                                BuildID;                                          		// 0x00A8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_LOBBYSETTINGS_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_LobbySettings_X* SetBuildID(int InBuildID);
};

// Class ProjectX.PartyMessage_Kick_X
// 0x0091 (0x00A8 - 0x0139)
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                       		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Instigator;                                       		// 0x00F0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      KickReason;                                       		// 0x0138 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_KICK_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_Kick_X* SetReason(unsigned char InKickReason);
	class UPartyMessage_Kick_X* SetInstigator(struct FUniqueNetId InPlayer);
	class UPartyMessage_Kick_X* SetKicked(struct FUniqueNetId InPlayer);
};

// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x005C (0x00A8 - 0x0104)
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                                  		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSimplePartyMember>                  Members;                                          		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bFromLeader : 1;                                  		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_LOCALPLAYERS_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_LocalPlayers_X* SetFromLeader(unsigned long bIsLeader);
	void AddMember(struct FPartyMember Member);
	class UPartyMessage_LocalPlayers_X* AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer(class UOnlinePlayer_X* Player);
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId(struct FUniqueNetId InPrimaryMemberId);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers();
};

// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x004C (0x00A8 - 0x00F4)
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                MatchmakeRestrictions;                            		// 0x00F0 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_MATCHMAKINGAVAILABILITY_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions(int InRestrictions);
	class UPartyMessage_MatchmakingAvailability_X* SetMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_JoinGame_X
// 0x0068 (0x00A8 - 0x0110)
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                         		// 0x00A8 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_JOINGAME_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_JoinGame_X* SetSettings(struct FPartyJoinMatchSettings& InSettings);
};

// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x00A0 (0x00A8 - 0x0148)
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPartyMemberServer                          Server;                                           		// 0x00F0 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_PARTYMEMBERJOINGAME_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberID(struct FUniqueNetId InPlayerId);
	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer(struct FPartyMemberServer& InServer);
};

// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x004C (0x00A8 - 0x00F4)
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bDisableCrossPlay : 1;                            		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_DISABLECROSSPLAY_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay(unsigned long InDisableCrossplay);
	class UPartyMessage_DisableCrossPlay_X* SetMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_CrossPlayTextChat_X
// 0x0049 (0x00A8 - 0x00F1)
class UPartyMessage_CrossPlayTextChat_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                         		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      CrossChatState;                                   		// 0x00F0 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_CROSSPLAYTEXTCHAT_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_CrossPlayTextChat_X* SetCrossPlayTextChatState(unsigned char InCrossChatState);
	class UPartyMessage_CrossPlayTextChat_X* SetMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0048 (0x00A8 - 0x00F0)
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                   		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_INVITETOTRADE_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_InviteToTrade_X* SetInviteMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x005C (0x00A8 - 0x0104)
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                   		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bInviteAccepted : 1;                              		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       TradeId;                                          		// 0x00F4 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_ACCEPTINVITETOTRADE_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId(struct FGuid InTradeId);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted(unsigned long bInInviteAccepted);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0048 (0x00A8 - 0x00F0)
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_PLAYERTRADECOMPLETE_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_SetPlatformParty_X
// 0x0010 (0x00A8 - 0x00B8)
class UPartyMessage_SetPlatformParty_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                  		// 0x00A8 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_SETPLATFORMPARTY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PartyMetrics_X
// 0x000C (0x0080 - 0x008C)
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                        		// 0x0080 (0x000C) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMETRICS_X));
		}

		return uClassPointer;
	};

	void PartyChannelError(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, int MissingMessageID);
	void PartyMessage(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FName MessageType);
	void PartyChanged(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, unsigned long bLeader, int PartySize, int LocalPlayers, int RemotePlayers);
	struct FPartyMetricsData CreatePartyMetricsData(class UOnlineGameParty_X* Party);
	void RecordPartyChanged(class UOnlineGameParty_X* Party);
	void PartyError(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Error);
	void PartyKickRemotePlayer(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason);
	void PartyKickLocalPlayer(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason);
	void PartyLeave(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason);
	void PartyCreationError(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Error);
	void PartyCreated(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID);
};

// Class ProjectX.__OnlineGameParty_X__JoinParty_4267F93B4302D2E26FD967A6D33A615D
// 0x0018 (0x0060 - 0x0078)
class U__OnlineGameParty_X__JoinParty_4267F93B4302D2E26FD967A6D33A615D : public UObject
{
public:
	int                                                LocalPlayerNum;                                   		// 0x0060 (0x0004) [0x0000000000000000]               
	struct FUniqueLobbyId                              InPartyId;                                        		// 0x0068 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__JOINPARTY_4267F93B4302D2E26FD967A6D33A615D));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__JoinParty_4267F93B4302D2E26FD967A6D33A615D(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_119CB1434528042B0EACB59573285303
// 0x0068 (0x0060 - 0x00C8)
class U__OnlineGameParty_X__HandleConfirmJoinGame_119CB1434528042B0EACB59573285303 : public UObject
{
public:
	struct FPartyJoinMatchSettings                     InSettings;                                       		// 0x0060 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__HANDLECONFIRMJOINGAME_119CB1434528042B0EACB59573285303));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleConfirmJoinGame_119CB1434528042B0EACB59573285303();
};

// Class ProjectX.__OnlineGameParty_X__HandleJoinLobby_B3A3D7094521701F8A029E82257274A0
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameParty_X__HandleJoinLobby_B3A3D7094521701F8A029E82257274A0 : public UObject
{
public:
	struct FString                                     Error;                                            		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__HANDLEJOINLOBBY_B3A3D7094521701F8A029E82257274A0));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleJoinLobby_B3A3D7094521701F8A029E82257274A0();
};

// Class ProjectX.PartyJoinedEvent_X
// 0x0000 (0x0060 - 0x0060)
class UPartyJoinedEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYJOINEDEVENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1
// 0x0030 (0x0060 - 0x0090)
class U__OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1 : public UObject
{
public:
	struct FActiveLobbyInfo                            Lobby;                                            		// 0x0060 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__UPDATEPARTYINFO_3DF5334B4FB29E0C5FD06992AEDA77A1));
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1(struct FPartyMember PM);
};

// Class ProjectX.PartyPlatformSession_X
// 0x0028 (0x0060 - 0x0088)
class UPartyPlatformSession_X : public UObject
{
public:
	struct FUniqueLobbyId                              PartyID;                                          		// 0x0060 (0x0010) [0x0000000000000000]               
	struct FScriptDelegate                             __EventPartyIdChanged__Delegate;                  		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYPLATFORMSESSION_X));
		}

		return uClassPointer;
	};

	void ClearPlatformParty();
	void LeaveParty();
	void BroadcastPlatformParty();
	void HandleJoinPlatformParty(struct FUniqueLobbyId InPartyId);
	bool IsInParty();
	void EventPartyIdChanged(class UPartyPlatformSession_X* Session);
};

// Class ProjectX.ClientReservationMessage_X
// 0x0080 (0x0060 - 0x00E0)
class UClientReservationMessage_X : public UBeaconMessage_X
{
public:
	struct FServerReservationData                      Reservation;                                      		// 0x0060 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLIENTRESERVATIONMESSAGE_X));
		}

		return uClassPointer;
	};

	struct FString GetDSRToken();
	struct FString GetReservationID();
};

// Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_54E680BD4A9113C01FE875823F61D2DB
// 0x0178 (0x0060 - 0x01D8)
class U__OnlineGameParty_X__BroadcastAllLocalPlayers_54E680BD4A9113C01FE875823F61D2DB : public UObject
{
public:
	struct FPartyMember                                Primary;                                          		// 0x0060 (0x0178) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__BROADCASTALLLOCALPLAYERS_54E680BD4A9113C01FE875823F61D2DB));
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_54E680BD4A9113C01FE875823F61D2DB(struct FPartyMember PM);
};

// Class ProjectX.PartyConfig_X
// 0x0004 (0x0078 - 0x007C)
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCompressMessages : 1;                            		// 0x0078 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PartyMessage_ReadyToTrade_X
// 0x004C (0x00A8 - 0x00F4)
class UPartyMessage_ReadyToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                  		// 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bReadyToTrade : 1;                                		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_READYTOTRADE_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_ReadyToTrade_X* SetReadyToTrade(unsigned long bInReadyToTrade);
	class UPartyMessage_ReadyToTrade_X* SetTradingMemberId(struct FUniqueNetId InTradingMemberId);
};

// Class ProjectX.OnlinePlayerRegionRestrictions_X
// 0x0010 (0x0098 - 0x00A8)
class UOnlinePlayerRegionRestrictions_X : public UOnline_X
{
public:
	TArray<unsigned char>                              Restrictions;                                     		// 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERREGIONRESTRICTIONS_X));
		}

		return uClassPointer;
	};

	unsigned char __OnlinePlayerRegionRestrictions_X__HandleLoginChanged_AB4D5E5144F4074648BDF5888C9CE96E(struct FName S);
	bool IsRestricted(unsigned char Restriction);
	void HandleLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void OnExit();
	void OnInit();
};

// Class ProjectX.PartyMessage_InviteToTradeError_X
// 0x0008 (0x00A8 - 0x00B0)
class UPartyMessage_InviteToTradeError_X : public UPartyMessage_X
{
public:
	struct FName                                       ErrorTypeName;                                    		// 0x00A8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_INVITETOTRADEERROR_X));
		}

		return uClassPointer;
	};

	class UPartyMessage_InviteToTradeError_X* SetError(class UErrorType* Type);
};

// Class ProjectX.__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_06F69A3B4423E839AB3C3CB3EC2A482C
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_06F69A3B4423E839AB3C3CB3EC2A482C : public UObject
{
public:
	struct FUniqueNetId                                InPrimaryID;                                      		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__GETPLAYERSWITHPRIMARYMEMBERID_06F69A3B4423E839AB3C3CB3EC2A482C));
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__GetPlayersWithPrimaryMemberID_06F69A3B4423E839AB3C3CB3EC2A482C(struct FPartyMember Member);
};

// Class ProjectX.__OnlineGameParty_X__HasMultiplePlatforms_3B75D06043CDE9612EA477B3E949C98A
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameParty_X__HasMultiplePlatforms_3B75D06043CDE9612EA477B3E949C98A : public UObject
{
public:
	TArray<unsigned char>                              PartyLeaderCrossPlayGroup;                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__HASMULTIPLEPLATFORMS_3B75D06043CDE9612EA477B3E949C98A));
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__HasMultiplePlatforms_3B75D06043CDE9612EA477B3E949C98A(struct FPartyMember P);
};

// Class ProjectX.__OnlineGameParty_X__HandleClientReservationMessage_5A4FD8B44E70E54AA7699A993E122217
// 0x0028 (0x0060 - 0x0088)
class U__OnlineGameParty_X__HandleClientReservationMessage_5A4FD8B44E70E54AA7699A993E122217 : public UObject
{
public:
	class UClientReservationMessage_X*                 Message;                                          		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FJoinMatchSettings                          Settings;                                         		// 0x0068 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__HANDLECLIENTRESERVATIONMESSAGE_5A4FD8B44E70E54AA7699A993E122217));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleClientReservationMessage_5A4FD8B44E70E54AA7699A993E122217();
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_876B325A4B12ACDC2AD5F3872D47FBF7
// 0x0020 (0x0060 - 0x0080)
class U__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_876B325A4B12ACDC2AD5F3872D47FBF7 : public UObject
{
public:
	struct FJoinMatchSettings                          Settings;                                         		// 0x0060 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__HANDLECONFIRMJOINGAME_CONNECTIONVALID_876B325A4B12ACDC2AD5F3872D47FBF7));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_876B325A4B12ACDC2AD5F3872D47FBF7(struct FServerReservationData Reservation);
};

// Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_D5D83FFF41D88978A8C829B1D0CFB996
// 0x0030 (0x0060 - 0x0090)
class U__OnlineGameParty_X__CreatePartyInternal_D5D83FFF41D88978A8C829B1D0CFB996 : public UObject
{
public:
	class UOnlineLobbyInterface*                       LobbyInterface;                                   		// 0x0060 (0x0010) [0x0000000000000000]               
	unsigned char                                      UnknownData00[0x8];                               		// 0x0068 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY
	int                                                LocalPlayerNum;                                   		// 0x0070 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Handler;                                          		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEPARTY_X__CREATEPARTYINTERNAL_D5D83FFF41D88978A8C829B1D0CFB996));
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__CreatePartyInternal_D5D83FFF41D88978A8C829B1D0CFB996(class UError* ConnectionError);
};

// Class ProjectX.PartySequence_InvitedToPsyNetParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_InvitedToPsyNetParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_INVITEDTOPSYNETPARTY_X));
		}

		return uClassPointer;
	};

	void JoinPsyNetPartyCallback(int LocalPlayerNum, struct FUniqueLobbyId& InLobbyId);
	class UAsyncTask* HandlePlayerInvited(unsigned long bAccepted, struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void HandlePlayerInvitedPrompt(unsigned long bAccepted, struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void HandlePlayerInvitedSilent(struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void Init();
};

// Class ProjectX.PartySequence_InvitedToPlatformParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_InvitedToPlatformParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_INVITEDTOPLATFORMPARTY_X));
		}

		return uClassPointer;
	};

	void HandleJoinPlatformLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void JoinPlatformPartyCallback(int LocalPlayerNum, struct FUniqueLobbyId& InLobbyId);
	void HandlePlayerInvited(unsigned long bAccepted, struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& FriendId);
	void Init();
};

// Class ProjectX.PartySequence_PsyNetPartyUpgrade_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_PsyNetPartyUpgrade_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_PSYNETPARTYUPGRADE_X));
		}

		return uClassPointer;
	};

	void HandleJoinPsyNetLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void TryUpgrade(struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& PlatformLobbyUID);
};

// Class ProjectX.RankedConfig_X
// 0x0038 (0x0078 - 0x00B0)
class URankedConfig_X : public UOnlineConfig_X
{
public:
	int                                                ReconnectTimeoutSeconds;                          		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<int>                                        SkillTierToSeasonRewardLevel;                     		// 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<int>                                        SeasonRewardRequiredWinsPerLevel;                 		// 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bCheckReservationID : 1;                          		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long long                                 SeasonEndTimeSeconds;                             		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RANKEDCONFIG_X));
		}

		return uClassPointer;
	};

	bool HasSeasonEnded();
	int GetSeasonTimeRemaining();
};

// Class ProjectX.DownloadedPlaylistsData_X
// 0x0010 (0x0060 - 0x0070)
class UDownloadedPlaylistsData_X : public UObject
{
public:
	TArray<class UGameSettingPlaylist_X*>              Playlists;                                        		// 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DOWNLOADEDPLAYLISTSDATA_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetPopulation_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray<struct FGetPopulationData>                  Playlists;                                        		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETPOPULATION_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                           		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PLAYERSEARCHPRIVATEMATCH_X));
		}

		return uClassPointer;
	};

	class URPC_PlayerSearchPrivateMatch_X* SetRegion(struct FString InRegion);
};

// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PLAYERCANCELPRIVATEMATCH_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetGameServerPingList_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray<struct FRegionSecret>                       Regions;                                          		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGetGameServerPingListData>          Servers;                                          		// 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETGAMESERVERPINGLIST_X));
		}

		return uClassPointer;
	};

	class URPC_GetGameServerPingList_X* SetRegionSecrets(TArray<struct FRegionSecret>& InRegions);
	void eventOnSuccess();
};

// Class ProjectX.RegionPingMessage_X
// 0x0004 (0x0060 - 0x0064)
class URegionPingMessage_X : public UObject
{
public:
	unsigned long                                      bIsResponse : 1;                                  		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_REGIONPINGMESSAGE_X));
		}

		return uClassPointer;
	};

	class URegionPingMessage_X* SetIsResponse();
};

// Class ProjectX.RegionPingData_X
// 0x0018 (0x0060 - 0x0078)
class URegionPingData_X : public UObject
{
public:
	struct FName                                       Address;                                          		// 0x0060 (0x0008) [0x0000000000000000]               
	int                                                PingsSent;                                        		// 0x0068 (0x0004) [0x0000000000000000]               
	int                                                PingsReceived;                                    		// 0x006C (0x0004) [0x0000000000000000]               
	float                                              LowestPing;                                       		// 0x0070 (0x0004) [0x0000000000000000]               
	float                                              LastSendTime;                                     		// 0x0074 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_REGIONPINGDATA_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RegionPinger_X
// 0x0058 (0x0070 - 0x00C8)
class URegionPinger_X : public UComponent
{
public:
	float                                              MaxPing;                                          		// 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                PingsPerRegion;                                   		// 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DelayBetweenPings;                                		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class URegionPingData_X*>                   ActivePings;                                      		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UUdpPingBeaconClient_X*                      PingBeacon;                                       		// 0x0090 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int                                                TickIndex;                                        		// 0x0098 (0x0004) [0x0000000000000000]               
	TArray<class URegionPingData_X*>                   PingResults;                                      		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                   		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_REGIONPINGER_X));
		}

		return uClassPointer;
	};

	class URegionPingData_X* __RegionPinger_X__PingRegions_89B7D7D249B0F41D1B7316AA5F8E6487(struct FString Address);
	void HandlePong(class UUdpPingBeaconClient_X* _, struct FName Address, float DeltaSeconds);
	void SendPing(int Idx);
	void Tick(float _);
	void StopPingBeacon();
	void StartPingBeacon();
	void PingRegions(TArray<struct FString>& Addresses);
	void EventRegionsPinged(class URegionPinger_X* Pinger);
};

// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (0x0060 - 0x0060)
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEGAMERESERVATIONS_ASSIGNTEAMSBYPARTY_X));
		}

		return uClassPointer;
	};

	int PartySort(struct FPartyByTeam Left, struct FPartyByTeam Right);
	void AssignTeams(int TeamSize, TArray<struct FReservationData>& TestPlayers);
};

// Class ProjectX.PsyNetService_ReservationBase_X
// 0x0020 (0x0090 - 0x00B0)
class UPsyNetService_ReservationBase_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                    		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                          		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_RESERVATIONBASE_X));
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_NewGame_X
// 0x0028 (0x00B0 - 0x00D8)
class UPsyNetService_NewGame_X : public UPsyNetService_ReservationBase_X
{
public:
	int                                                Playlist;                                         		// 0x00B0 (0x0004) [0x0000000000000000]               
	unsigned long                                      IsBotMatch : 1;                                   		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FString>                             BotNames;                                         		// 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                          		// 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_NEWGAME_X));
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_Backfill_X
// 0x0010 (0x00B0 - 0x00C0)
class UPsyNetService_Backfill_X : public UPsyNetService_ReservationBase_X
{
public:
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                          		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_BACKFILL_X));
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_CreatePrivate_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_CreatePrivate_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_CREATEPRIVATE_X));
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_JoinPrivate_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_JoinPrivate_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_JOINPRIVATE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendJoin_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_FriendJoin_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_FRIENDJOIN_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_Reconnect_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_Reconnect_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_RECONNECT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchInfoMessage_X
// 0x0048 (0x0068 - 0x00B0)
class UMatchInfoMessage_X : public UServerToServerMessage_X
{
public:
	int                                                Playlist;                                         		// 0x0068 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsBotMatch : 1;                                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FString>                             BotNames;                                         		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                    		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinName;                                         		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                     		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHINFOMESSAGE_X));
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.MigrationStartedMessage_X
// 0x00F0 (0x0068 - 0x0158)
class UMigrationStartedMessage_X : public UServerToServerMessage_X
{
public:
	unsigned long                                      bRematch : 1;                                     		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCustomMatchSettings                        PrivateMatchSettings;                             		// 0x0070 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PrivateMatchCreator;                              		// 0x0100 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMigrationReservationData>           MigratingPlayers;                                 		// 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MIGRATIONSTARTEDMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.MapPrefsConfig_X
// 0x000C (0x0078 - 0x0084)
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                                 		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                MaxLikes;                                         		// 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                MaxDislikes;                                      		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MAPPREFSCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PRI_X
// 0x0048 (0x0410 - 0x0458)
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;               		// 0x0410 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;                 		// 0x0428 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                       		// 0x0440 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PRI_X));
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void OnUniqueIdChanged();
	void SetUniqueId(struct FUniqueNetId PlayerUniqueId);
	void UnregisterPlayerFromSession();
	void RegisterPlayerWithSession();
	void AddPlayerHistoryKey(class UOnlineRecentPlayersList* PlayersList);
	void eventOnOwnerChanged();
	void eventSetPlayerName(struct FString S);
	void eventReplicatedEvent(struct FName VarName);
	void EventDestroyed(class APRI_X* PRI);
	void EventUniqueIdChanged(class APRI_X* PRI);
	void EventPlayerNameChanged(class APRI_X* PRI);
};

// Class ProjectX.ClubSettings_X
// 0x0028 (0x0060 - 0x0088)
class UClubSettings_X : public UObject
{
public:
	struct FString                                     ClubName;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                          		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PrimaryColor;                                     		// 0x0080 (0x0004) [0x0000000000000000]               
	int                                                AccentColor;                                      		// 0x0084 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLUBSETTINGS_X));
		}

		return uClassPointer;
	};

	bool IsAccentColorSet();
	bool IsPrimaryColorSet();
	class UClubSettings_X* Create(struct FString InName, struct FString InTag, int InPrimaryColor, int InSecondaryColor);
};

// Class ProjectX.ClubDetails_X
// 0x0080 (0x0088 - 0x0108)
class UClubDetails_X : public UClubSettings_X
{
public:
	unsigned long long                                 ClubID;                                           		// 0x0088 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                OwnerPlayerID;                                    		// 0x0090 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MotD;                                             		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bVerified : 1;                                    		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 LastUpdatedTime;                                  		// 0x00F0 (0x0008) [0x0000000000000000]               
	TArray<struct FClubMember>                         Members;                                          		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLUBDETAILS_X));
		}

		return uClassPointer;
	};

	struct FString GetMemberDebugString(struct FClubMember Member);
	struct FString GetMembersDebugString();
	struct FString GetDebugString();
	bool IsMember(struct FUniqueNetId PlayerID);
	bool IsDestroyed();
	void Destroy();
};

// Class ProjectX.TAsyncResult__ClubDetails_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__ClubDetails_X : public UAsyncTask
{
public:
	class UClubDetails_X*                              Result;                                           		// 0x00D0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__CLUBDETAILS_X));
		}

		return uClassPointer;
	};

	class UTAsyncResult__ClubDetails_X* CreateResultError(class UError* InError);
	class UTAsyncResult__ClubDetails_X* CreateResult(class UClubDetails_X* InResult);
	class UTAsyncResult__ClubDetails_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__ClubDetails_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__ClubDetails_X* eventSetResult(class UClubDetails_X* InResult, class UError* InError);
	class UTAsyncResult__ClubDetails_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__ClubDetails_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UClubDetails_X* ResultDelegate();
	void EventResultComplete(class UClubDetails_X* OutResult, class UError* OutError);
	void EventResult(class UClubDetails_X* OutResult);
};

// Class ProjectX.__OnlineGameReservations_X__RecordReservation_1682DD864AA0004BA783DBA20F901ABF
// 0x0008 (0x0060 - 0x0068)
class U__OnlineGameReservations_X__RecordReservation_1682DD864AA0004BA783DBA20F901ABF : public UObject
{
public:
	class UAddReservationMessage_X*                    Message;                                          		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMERESERVATIONS_X__RECORDRESERVATION_1682DD864AA0004BA783DBA20F901ABF));
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__RecordReservation_1682DD864AA0004BA783DBA20F901ABF(struct FReservationPlayerData P);
};

// Class ProjectX.__OnlineGameReservations_X__SetPlayersWithMigrationData_721B106D40049D9FCA705A8966F96333
// 0x0018 (0x0060 - 0x0078)
class U__OnlineGameReservations_X__SetPlayersWithMigrationData_721B106D40049D9FCA705A8966F96333 : public UObject
{
public:
	TArray<struct FReservationData>                    CurrentPlayers;                                   		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UEngine*                                     GEngine;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMERESERVATIONS_X__SETPLAYERSWITHMIGRATIONDATA_721B106D40049D9FCA705A8966F96333));
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__SetPlayersWithMigrationData_391E6CBE437BFE474C60B081AF170E9F(struct FMigrationReservationData P);
	void __OnlineGameReservations_X__SetPlayersWithMigrationData_721B106D40049D9FCA705A8966F96333(struct FMigrationReservationData P);
};

// Class ProjectX.__OnlineGameReservations_X__GetMigrationReservationData_45A28BA04CE3CA817E7DC894875AF9F9
// 0x0018 (0x0060 - 0x0078)
class U__OnlineGameReservations_X__GetMigrationReservationData_45A28BA04CE3CA817E7DC894875AF9F9 : public UObject
{
public:
	TArray<struct FMigrationReservationData>           CurrentPlayers;                                   		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UEngine*                                     GEngine;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMERESERVATIONS_X__GETMIGRATIONRESERVATIONDATA_45A28BA04CE3CA817E7DC894875AF9F9));
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__GetMigrationReservationData_45A28BA04CE3CA817E7DC894875AF9F9(struct FReservationData P);
};

// Class ProjectX.RPC_CustomGameServerGet_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                       		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FFindPrivateServerResult>            Servers;                                          		// 0x0108 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FServerResult>                       Results;                                          		// 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CUSTOMGAMESERVERGET_X));
		}

		return uClassPointer;
	};

	void eventOnSuccess();
	class URPC_CustomGameServerGet_X* SetPassword(struct FString InPassword);
	class URPC_CustomGameServerGet_X* SetServerName(struct FString InServerName);
};

// Class ProjectX.PlaylistSkillCache_X
// 0x0010 (0x0060 - 0x0070)
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray<struct FUpdatedPlayerSkillRating>           Players;                                          		// 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLAYLISTSKILLCACHE_X));
		}

		return uClassPointer;
	};

	struct FPlayerSkillRating ConvertUpdatedSkillRating(struct FUpdatedPlayerSkillRating InUpdatedRating);
	int GetPlayerIndex(struct FUniqueNetId PlayerID);
	struct FPlayerSkillRating GetPlayerRating(struct FUniqueNetId PlayerID);
	struct FUpdatedPlayerSkillRating GetUpdatedPlayerRating(struct FUniqueNetId PlayerID);
	void ClearSkill(struct FUniqueNetId PlayerID);
	void CacheSkill(struct FUpdatedPlayerSkillRating Rating);
	void PreCacheSkill(struct FPlayerSkillRating Rating);
};

// Class ProjectX.RPC_GetPlayerSkill_X
// 0x0060 (0x00E8 - 0x0148)
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGetPlayerSkillData>                 Skills;                                           		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FRPCRewardLevelData                         RewardLevels;                                     		// 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETPLAYERSKILL_X));
		}

		return uClassPointer;
	};

	class URPC_GetPlayerSkill_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RecordMatchResults_X
// 0x0084 (0x00E8 - 0x016C)
class URPC_RecordMatchResults_X : public URPC_X
{
public:
	struct FString                                     MatchGUID;                                        		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FSkillMatchData                             Match;                                            		// 0x00F8 (0x0020) [0x0000000000000000]               
	struct FString                                     MatchName;                                        		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Winners;                                          		// 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                           		// 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                     		// 0x0148 (0x0010) [0x0000000000000000]               
	struct FGuid                                       LevelSessionID;                                   		// 0x0158 (0x0010) [0x0000000000000000]               
	unsigned long                                      bIsBotMatch : 1;                                  		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_RECORDMATCHRESULTS_X));
		}

		return uClassPointer;
	};

	int GetPartyIndex(struct FUniqueNetId LeaderID, TArray<struct FUniqueNetId>& PartyIDs);
	void InitSkillMatchPlayers(class UMatchData_X* MatchData);
	struct FSkillMatchPlayer InitSkillMatchPlayer(class UMatchData_X* MatchData, class UMatchPlayerData_X* Player, TArray<struct FUniqueNetId>& PartyIDs);
	class URPC_RecordMatchResults_X* SetMetrics(class UMetricsSystem_X* MetricsSystem);
	class URPC_RecordMatchResults_X* SetMatchName(struct FString InName);
	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
	class URPC_RecordMatchResults_X* SetIsBotMatch(unsigned long bBotMatch);
	class URPC_RecordMatchResults_X* SetMatchGUID(struct FString InGuid);
};

// Class ProjectX.RPC_UpdateSkills_X
// 0x0034 (0x016C - 0x01A0)
class URPC_UpdateSkills_X : public URPC_RecordMatchResults_X
{
public:
	int                                                Playlist;                                         		// 0x0170 (0x0004) [0x0000000000000000]               
	TArray<struct FUpdatedPlayerSkillRating>           NewSkills;                                        		// 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRPCPlayerRewardLevelData>           NewRewardLevels;                                  		// 0x0188 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UMatchData_X*                                MatchData;                                        		// 0x0198 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATESKILLS_X));
		}

		return uClassPointer;
	};

	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
};

// Class ProjectX.MatchPlayerData_X
// 0x010C (0x0060 - 0x016C)
class UMatchPlayerData_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     PlayerName;                                       		// 0x00A8 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long long                                 ConnectTimestamp;                                 		// 0x00B8 (0x0008) [0x0000000000000000]               
	unsigned long long                                 JoinTimestamp;                                    		// 0x00C0 (0x0008) [0x0000000000000000]               
	unsigned long long                                 LeaveTimestamp;                                   		// 0x00C8 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeaderID;                                    		// 0x00D0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bAbandoned : 1;                                   		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMvp : 1;                                         		// 0x0118 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	int                                                LastTeam;                                         		// 0x011C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              SecondsPlayed;                                    		// 0x0120 (0x0004) [0x0000000000000000]               
	int                                                Goals;                                            		// 0x0124 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Assists;                                          		// 0x0128 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Saves;                                            		// 0x012C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Shots;                                            		// 0x0130 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Demolishes;                                       		// 0x0134 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Score;                                            		// 0x0138 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                OwnGoals;                                         		// 0x013C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ClubID;                                           		// 0x0140 (0x0004) [0x0000000000000000]               
	struct FMatchSkillUpdate                           Skills;                                           		// 0x0144 (0x0024) [0x0000000000000000]               
	int                                                ActorID;                                          		// 0x0168 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_MATCHPLAYERDATA_X));
		}

		return uClassPointer;
	};

	void SetSkills(struct FUpdatedPlayerSkillRating Update);
};

// Class ProjectX.SyncedSkillData_X
// 0x0008 (0x0060 - 0x0068)
class USyncedSkillData_X : public UObject
{
public:
	class UOnlineGameSkill_X*                          OnlineGameSkill;                                  		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SYNCEDSKILLDATA_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x0024 (0x00E8 - 0x010C)
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray<struct FUploadStatDataSet>                  Updates;                                          		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MatchGUID;                                        		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PlaylistId;                                       		// 0x0108 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATELEADERBOARD_X));
		}

		return uClassPointer;
	};

	class URPC_UpdateLeaderboard_X* SetPlaylistID(int InID);
	class URPC_UpdateLeaderboard_X* SetMatchGUID(struct FString InGuid);
	class URPC_UpdateLeaderboard_X* SetUpdates(TArray<struct FUploadStatDataSet>& InUpdates);
};

// Class ProjectX.WordFilterConfig_X
// 0x0030 (0x0078 - 0x00A8)
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSanitizeEntirePhrase : 1;                        		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      PsyNetFilterEnabled : 1;                          		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int                                                NameHistoryCacheLength;                           		// 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<unsigned char>                              IgnoreFilterList;                                 		// 0x0080 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	TArray<unsigned char>                              PlatformFilterList;                               		// 0x0090 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	float                                              PsyNetWordFilterBatchDelay;                       		// 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                PsyNetWordFilterBatchMaxSize;                     		// 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WORDFILTERCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_3DB414634D549DDA8B162E96D2C29219
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameWordFilter_X__InternalSanitize_3DB414634D549DDA8B162E96D2C29219 : public UObject
{
public:
	struct FString                                     Id;                                               		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEGAMEWORDFILTER_X__INTERNALSANITIZE_3DB414634D549DDA8B162E96D2C29219));
		}

		return uClassPointer;
	};

	void __OnlineGameWordFilter_X__InternalSanitize_3DB414634D549DDA8B162E96D2C29219(struct FWordFilterResult Result);
};

// Class ProjectX.PsyNetWordFilter_X
// 0x0010 (0x0070 - 0x0080)
class UPsyNetWordFilter_X : public UComponent
{
public:
	class UWordFilterConfig_X*                         Config;                                           		// 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class URPC_FilterContent_X*                        PendingFilterRPC;                                 		// 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETWORDFILTER_X));
		}

		return uClassPointer;
	};

	void __PsyNetWordFilter_X__WordFilterSanitizeString_2C29E4584F7B27FD2DF6E79B0330CBFB(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilterFail(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilterSuccess(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilter(class URPC_FilterContent_X* RPC);
	void SendPendingFilterRPC();
	bool WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
};

// Class ProjectX.BanMessage_X
// 0x00A8 (0x0060 - 0x0108)
class UBanMessage_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned char                                      BanType;                                          		// 0x00A8 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Title;                                            		// 0x00B0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Body;                                             		// 0x00C0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                BannedMinutes;                                    		// 0x00D0 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bContributedToBan : 1;                            		// 0x00D4 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	TArray<struct FString>                             Citations;                                        		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BannedUntilTime;                                  		// 0x00E8 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FScriptDelegate                             __EventBanEnded__Delegate;                        		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BANMESSAGE_X));
		}

		return uClassPointer;
	};

	void __BanMessage_X__Init_DAEB452243081E52BE364599D2144922();
	bool IsPermanentlyBanned();
	bool IsBanned();
	int GetMinutesRemaining();
	float GetSecondsRemaining();
	void Init();
	void EventBanEnded(class UBanMessage_X* BanMessage);
};

// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x0100 (0x00E8 - 0x01E8)
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                         		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerID;                                         		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Language;                                         		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     AuthTicket;                                       		// 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BuildRegion;                                      		// 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       FeatureSet;                                       		// 0x0148 (0x0008) [0x0000000000000000]               
	unsigned long                                      bSkipAuth : 1;                                    		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSetAsPrimaryAccount : 1;                         		// 0x0150 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      UseWebSocket : 1;                                 		// 0x0150 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	struct FString                                     EpicAuthTicket;                                   		// 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     EpicAccountId;                                    		// 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     SessionId;                                        		// 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PsyToken;                                         		// 0x0188 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UBanMessage_X*                               BanMessage;                                       		// 0x0198 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     VerifiedPlayerName;                               		// 0x01A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PerConURL;                                        		// 0x01B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                           		// 0x01C0 (0x0018) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FName>                               CountryRestrictions;                              		// 0x01D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_LOGINAUTHPLAYER_X));
		}

		return uClassPointer;
	};

	class URPC_LoginAuthPlayer_X* SetAsPrimaryAccount(unsigned long bInPrimary);
	class URPC_LoginAuthPlayer_X* SetEpicAccountId(struct FString InEpicAccountID);
	class URPC_LoginAuthPlayer_X* SetEpicAuthTicket(struct FString InEpicAuthTicket);
	class URPC_LoginAuthPlayer_X* SetFeatureSet(struct FName InFeatureSet);
	class URPC_LoginAuthPlayer_X* SetBuildRegion(struct FString InBuildRegion);
	class URPC_LoginAuthPlayer_X* SetAuthTicket(struct FString InAuthTicket);
	class URPC_LoginAuthPlayer_X* SetLanguage(struct FString InLanguage);
	class URPC_LoginAuthPlayer_X* SetPlayerID(struct FString InPlayerId);
	class URPC_LoginAuthPlayer_X* SetPlayerName(struct FString InPlayerName);
	class URPC_LoginAuthPlayer_X* SetPlatform(struct FString InPlatform);
};

// Class ProjectX.OnlinePlayerStorage_X
// 0x0018 (0x0098 - 0x00B0)
class UOnlinePlayerStorage_X : public UOnline_X
{
public:
	class UOnlinePlayerStorageQueue_X*                 Queue;                                            		// 0x0098 (0x0008) [0x0000000000000000]               
	class UOnlinePlayerStorageSync_X*                  Sync;                                             		// 0x00A0 (0x0008) [0x0000000000000000]               
	class UOnlinePlayerStorageManifest_X*              Manifest;                                         		// 0x00A8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERSTORAGE_X));
		}

		return uClassPointer;
	};

	void OnInit();
};

// Class ProjectX.EpicErrors_X
// 0x0098 (0x0080 - 0x0118)
class UEpicErrors_X : public UErrorList
{
public:
	class UErrorType*                                  EpicAccountNotFound;                              		// 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountLinkingFailed;                         		// 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EOSFailedToConnect;                               		// 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EOSFailedToConnectSplitscreen;                    		// 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotLoggedInToEOS;                                 		// 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EOSUpdateRequired;                                		// 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PinGrantCodeExpired;                              		// 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PrimaryAccountNotSet;                             		// 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicInvalidPlayer;                                		// 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicRemoteFriendLimitReached;                     		// 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicMaxOutgoingInvitesReached;                    		// 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicLocalFriendLimitReached;                      		// 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountLookupFailed;                          		// 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountCreationFailed;                        		// 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountRestricted;                            		// 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicPartyInviteFailed;                            		// 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  IncorrectSaveLoaded;                              		// 0x0100 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicSocialBanned;                                 		// 0x0108 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MaxPendingFriendInvitesReached;                   		// 0x0110 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPICERRORS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyTagComponent_X
// 0x0018 (0x0070 - 0x0088)
class UPsyTagComponent_X : public UComponent
{
public:
	struct FPsyTag                                     PsyTag;                                           		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYTAGCOMPONENT_X));
		}

		return uClassPointer;
	};

	void HandleClaimTagSuccess(class UPsyTagCheckResult_X* Result);
	class UTAsyncResult__PsyTagCheckResult_X* ClaimTag(struct FString NewTagName);
	void SetPsyTag(struct FPsyTag InPsyTag);
};

// Class ProjectX.PsyTagCheckResult_X
// 0x0030 (0x0060 - 0x0090)
class UPsyTagCheckResult_X : public UObject
{
public:
	struct FPsyTag                                     PsyTag;                                           		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bValid : 1;                                       		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ErrorMessage;                                     		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYTAGCHECKRESULT_X));
		}

		return uClassPointer;
	};

	void SetPsyTag(struct FPsyTag InPsyTag);
};

// Class ProjectX.RPC_CheckPsyTag_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_CheckPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                       		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                           		// 0x00F8 (0x0018) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bIsValid : 1;                                     		// 0x0110 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bIsProfane : 1;                                   		// 0x0110 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bIsAvailable : 1;                                 		// 0x0110 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bIsUpdated : 1;                                   		// 0x0110 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	TArray<struct FString>                             InvalidCharacters;                                		// 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             SuggestedNames;                                   		// 0x0128 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UTAsyncResult__PsyTagCheckResult_X*          CheckTask;                                        		// 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CHECKPSYTAG_X));
		}

		return uClassPointer;
	};

	bool __RPC_CheckPsyTag_X__GetTagCheckError_8D5C3AE449A7F7A868D4439DE5DA7D71(struct FString S);
	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_CheckPsyTag_X* SetPsyTagName(struct FString InName);
	struct FString GetTagCheckError();
	class UPsyTagCheckResult_X* CreateTaskResult();
	class UTAsyncResult__PsyTagCheckResult_X* CreatePsyTagTask();
};

// Class ProjectX.RPC_ClaimPsyTag_X
// 0x0000 (0x0140 - 0x0140)
class URPC_ClaimPsyTag_X : public URPC_CheckPsyTag_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CLAIMPSYTAG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.TAsyncResult__PsyTagCheckResult_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__PsyTagCheckResult_X : public UAsyncTask
{
public:
	class UPsyTagCheckResult_X*                        Result;                                           		// 0x00D0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__PSYTAGCHECKRESULT_X));
		}

		return uClassPointer;
	};

	class UTAsyncResult__PsyTagCheckResult_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* CreateResult(class UPsyTagCheckResult_X* InResult);
	class UTAsyncResult__PsyTagCheckResult_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__PsyTagCheckResult_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__PsyTagCheckResult_X* eventSetResult(class UPsyTagCheckResult_X* InResult, class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UPsyTagCheckResult_X* ResultDelegate();
	void EventResultComplete(class UPsyTagCheckResult_X* OutResult, class UError* OutError);
	void EventResult(class UPsyTagCheckResult_X* OutResult);
};

// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x0068 (0x0090 - 0x00F8)
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                     		// 0x0090 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      IsLocalMessage : 1;                               		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 TimeStamp;                                        		// 0x00F0 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_FRIENDCHATRECEIVED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendPsyTagUpdated_X
// 0x0060 (0x0090 - 0x00F0)
class UPsyNetService_FriendPsyTagUpdated_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0090 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                           		// 0x00D8 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_FRIENDPSYTAGUPDATED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OSSConfig_X
// 0x0004 (0x0078 - 0x007C)
class UOSSConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnablePresence : 1;                              		// 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_OSSCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PSYNETSENDINDIVIDUALCHAT_X));
		}

		return uClassPointer;
	};

	class URPC_PsyNetSendIndividualChat_X* SetMessage(struct FString InMessage);
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RetryDelayer_X
// 0x0058 (0x0070 - 0x00C8)
class URetryDelayer_X : public UComponent
{
public:
	TArray<float>                                      RetryDelays;                                      		// 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              RepeatBackoff;                                    		// 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                RepeatCycleCount;                                 		// 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bRepeatUntilSuccess : 1;                          		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int                                                FailedAttempts;                                   		// 0x008C (0x0004) [0x0000000000000000]               
	int                                                FailedCycles;                                     		// 0x0090 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __RepeatedDelegate__Delegate;                     		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __NotifyAbandondedDelegate__Delegate;             		// 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RETRYDELAYER_X));
		}

		return uClassPointer;
	};

	void Abandon();
	void ExecuteNextStep();
	void Cancel();
	void RetryOrAbandon();
	void Start(struct FScriptDelegate ToRepeat, struct FScriptDelegate Abandoned);
	void NotifyAbandondedDelegate();
	void RepeatedDelegate();
};

// Class ProjectX.RPC_PsyNetReadFriends_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_PsyNetReadFriends_X : public URPC_X
{
public:
	TArray<struct FPsyNetPersonaData>                  Friends;                                          		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                      		// 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PSYNETREADFRIENDS_X));
		}

		return uClassPointer;
	};

	void eventOnSuccess();
};

// Class ProjectX.PsyNetFriends_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetFriends_X : public UOnlineFriendMap_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETFRIENDS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_F91F356640FD87DDB7234EA96C3CBBF8
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerFriends_X__UnblockPlayer_F91F356640FD87DDB7234EA96C3CBBF8 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERFRIENDS_X__UNBLOCKPLAYER_F91F356640FD87DDB7234EA96C3CBBF8));
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__UnblockPlayer_A4FC0A2E4208B1358842D78FB0122219(class URPC_UnblockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__UnblockPlayer_F91F356640FD87DDB7234EA96C3CBBF8(class URPC_UnblockPlayer_X* RPC);
};

// Class ProjectX.RPC_UnblockPlayer_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_UnblockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UNBLOCKPLAYER_X));
		}

		return uClassPointer;
	};

	class URPC_UnblockPlayer_X* SetUnblockedPlayerId(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_B69C4F9042E51C052ACA999B8AE72657
// 0x0040 (0x0060 - 0x00A0)
class U__OnlinePlayerFriends_X__BlockPlayer_B69C4F9042E51C052ACA999B8AE72657 : public UObject
{
public:
	struct FString                                     BlockedPlayerName;                                		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     BlockedTag;                                       		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERFRIENDS_X__BLOCKPLAYER_B69C4F9042E51C052ACA999B8AE72657));
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__BlockPlayer_11AE044A4D89D5D53233B7ABCCDA7DCD(class URPC_BlockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__BlockPlayer_B69C4F9042E51C052ACA999B8AE72657(class URPC_BlockPlayer_X* RPC);
};

// Class ProjectX.RPC_BlockPlayer_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_BlockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_BLOCKPLAYER_X));
		}

		return uClassPointer;
	};

	class URPC_BlockPlayer_X* SetBlockedPlayerId(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetBlockList_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetBlockList_X : public URPC_X
{
public:
	TArray<struct FBlockedListRequestData>             bLocked;                                          		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                      		// 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETBLOCKLIST_X));
		}

		return uClassPointer;
	};

	struct FOnlineFriend ConvertToBlockedOnlineFriend(struct FBlockedListRequestData FromPlayer);
	void eventOnComplete();
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_9601B40E44051C27D5BCC193338281E7
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerFriends_X__DownloadBlockedListAttempt_9601B40E44051C27D5BCC193338281E7 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERFRIENDS_X__DOWNLOADBLOCKEDLISTATTEMPT_9601B40E44051C27D5BCC193338281E7));
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__DownloadBlockedListAttempt_9601B40E44051C27D5BCC193338281E7(class URPC_GetBlockList_X* RPC);
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_52C2FCAA43F98EBB71E8EC9BC7843474
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerFriends_X__DownloadBlockedList_52C2FCAA43F98EBB71E8EC9BC7843474 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERFRIENDS_X__DOWNLOADBLOCKEDLIST_52C2FCAA43F98EBB71E8EC9BC7843474));
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__DownloadBlockedList_3B7A4C28478271E8931D958FBDC1365A();
	void __OnlinePlayerFriends_X__DownloadBlockedList_52C2FCAA43F98EBB71E8EC9BC7843474();
};

// Class ProjectX.PlatformFriends_X
// 0x0000 (0x00C0 - 0x00C0)
class UPlatformFriends_X : public UOnlineFriendMap_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORMFRIENDS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EpicFriends_X
// 0x0000 (0x00C0 - 0x00C0)
class UEpicFriends_X : public UOnlineFriendMap_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EPICFRIENDS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PostProcessManager_X
// 0x0070 (0x0060 - 0x00D0)
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x0060 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class UMaterialEffect_X*>                   ActiveEffects;                                    		// 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bNeedsReset : 1;                                  		// 0x0078 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	TArray<struct FPPEffectDefaults>                   EffectDefaults;                                   		// 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPPPersistentEffectDefaults>         PersistentEffectDefaults;                         		// 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPPChainInfo>                        ActiveChains;                                     		// 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPPChainInfo>                        ChainDefaults;                                    		// 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPostProcessOverride>                PostProcessOverrides;                             		// 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_POSTPROCESSMANAGER_X));
		}

		return uClassPointer;
	};

	int GetNextPostProcessOverride();
	void TogglePostProcessSettings(struct FName Id, unsigned long bEnabled);
	void SetMaterialEffectValue(struct FName EffectName, float NewValue);
	void ResetEffectsToDefaults(unsigned long bRebuildPostProcessChains);
	void ToggleChainNamed(class UPostProcessChain* Chain, struct FName ChainName, unsigned long bEnabled);
	void StopChainNamed(struct FName ChainName);
	void StartChainNamed(class UPostProcessChain* Chain, struct FName ChainName);
	bool RemovePostProcessChain(int OldChain);
	int AddPostProcessChain(class UPostProcessChain* NewChain, struct FName ChainName);
	class UMaterialEffect_X* GetEffect(struct FName EffectName);
	void TickPostProcess(float dt);
	void ToggleEffect(class UMaterialEffect_X* Effect, unsigned long bEnabled);
	void StopEffectNamed(struct FName EffectName);
	void StartEffectNamed(struct FName EffectName);
	void ToggleEffectNamed(struct FName EffectName, unsigned long bEnabled);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UUberPostProcessEffect* GetUberPostProcessEffect();
	class UPostProcessChain* GetPlayerChain();
	void Exit();
	void Init(class APlayerController_X* NewOwner);
};

// Class ProjectX.PsyNetMetrics_X
// 0x0020 (0x0080 - 0x00A0)
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FServiceMetricsData>                 ServiceData;                                      		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FServiceErrorData>                   ErrorData;                                        		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETMETRICS_X));
		}

		return uClassPointer;
	};

	void ServiceErrors(TArray<struct FServiceErrorData> Errors);
	void ServiceCalls(TArray<struct FServiceMetricsData> Services);
	void HandleMapChange(struct FString M);
	void RecordServiceError(struct FString Service, class UError* Error);
	void RecordServiceCall(struct FString Service, float Latency);
};

// Class ProjectX.__RPCQueue_X__CreateBatch_9DF29BA749740FA4353354923B531BCB
// 0x0008 (0x0060 - 0x0068)
class U__RPCQueue_X__CreateBatch_9DF29BA749740FA4353354923B531BCB : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                            		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___RPCQUEUE_X__CREATEBATCH_9DF29BA749740FA4353354923B531BCB));
		}

		return uClassPointer;
	};

	void __RPCQueue_X__CreateBatch_9DF29BA749740FA4353354923B531BCB(class UPsyNetMessage_X* Response, class UError* Error);
};

// Class ProjectX.TAsyncResult__PsyNetMessage_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__PsyNetMessage_X : public UAsyncTask
{
public:
	class UPsyNetMessage_X*                            Result;                                           		// 0x00D0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__PSYNETMESSAGE_X));
		}

		return uClassPointer;
	};

	class UTAsyncResult__PsyNetMessage_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* CreateResult(class UPsyNetMessage_X* InResult);
	class UTAsyncResult__PsyNetMessage_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__PsyNetMessage_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__PsyNetMessage_X* eventSetResult(class UPsyNetMessage_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UPsyNetMessage_X* ResultDelegate();
	void EventResultComplete(class UPsyNetMessage_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetMessage_X* OutResult);
};

// Class ProjectX.RPC_ReportCheater_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Reason;                                           		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_REPORTCHEATER_X));
		}

		return uClassPointer;
	};

	class URPC_ReportCheater_X* SetReason(struct FString InReason);
	class URPC_ReportCheater_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.PrimaryAuthLoggedIn_TA
// 0x0008 (0x0060 - 0x0068)
class UPrimaryAuthLoggedIn_TA : public UObject
{
public:
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                          		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PRIMARYAUTHLOGGEDIN_TA));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RESERVATIONSSETTINGUPMATCHMESSAGE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__RPC_X__CreateTask_DAFA7BF54909C332F115EDBD60C44F82
// 0x0018 (0x0060 - 0x0078)
class U__RPC_X__CreateTask_DAFA7BF54909C332F115EDBD60C44F82 : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                       		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___RPC_X__CREATETASK_DAFA7BF54909C332F115EDBD60C44F82));
		}

		return uClassPointer;
	};

	void __RPC_X__CreateTask_DAFA7BF54909C332F115EDBD60C44F82(class UError* Err);
};

// Class ProjectX.RPC_Test_X
// 0x0170 (0x00E8 - 0x0258)
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                         		// 0x00E8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     TestParamString;                                  		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRPCTestParam                               TestParamStruct;                                  		// 0x0108 (0x0088) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestParamStructs;                                 		// 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     TestResultLocalizedString;                        		// 0x01A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     TestResultString;                                 		// 0x01B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FRPCTestParam                               TestResultStruct;                                 		// 0x01C0 (0x0088) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestResultStructs;                                		// 0x0248 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_TEST_X));
		}

		return uClassPointer;
	};

	bool Check(unsigned long Assertion, struct FString Message);
	bool CheckParamArraysMatch(TArray<struct FRPCTestParam> A, TArray<struct FRPCTestParam> B, struct FString Message);
	bool CheckItemArraysMatch(TArray<struct FRPCTestItem> A, TArray<struct FRPCTestItem> B, struct FString Message);
	bool CheckStringArraysMatch(TArray<struct FString> A, TArray<struct FString> B, struct FString Message);
	bool CheckItemsMatch(struct FRPCTestItem A, struct FRPCTestItem B, struct FString Message);
	bool CheckParamsMatch(struct FRPCTestParam A, struct FRPCTestParam B, struct FString Message);
	bool ValidateResults();
	void eventOnComplete();
	TArray<struct FRPCTestParam> GetRandomTestParams();
	struct FRPCTestParam GetRandomTestParam();
	TArray<struct FRPCTestItem> GetRandomTestItems();
	struct FRPCTestItem GetRandomTestItem();
	void Init();
};

// Class ProjectX.TestsHelper_X
// 0x0000 (0x0060 - 0x0060)
class UTestsHelper_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TESTSHELPER_X));
		}

		return uClassPointer;
	};

	struct FString GetRandomUppercaseString();
	TArray<struct FString> GetRandomStringArray();
	struct FString GetRandomString();
};

// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0040 (0x0160 - 0x01A0)
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                   		// 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Velocity;                                         		// 0x0168 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                            		// 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class AActor*>                              SpawnOwners;                                      		// 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class AActor*>                              SpawnPoints;                                      		// 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      Spawned;                                          		// 0x0198 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SEQACT_SPAWNARCHETYPE_X));
		}

		return uClassPointer;
	};

	void Init(class AActor* SpawnedActor);
	void eventActivated();
};

// Class ProjectX.RPC_TestPlayerID_X
// 0x0090 (0x00E8 - 0x0178)
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                ResponsePlayerID;                                 		// 0x0130 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_TESTPLAYERID_X));
		}

		return uClassPointer;
	};

	void OnSuccess();
	void Init();
};

// Class ProjectX.__MatchRecorder_X__GetPlayerData_AAC654674F40C934B161689D8149E5ED
// 0x0048 (0x0060 - 0x00A8)
class U__MatchRecorder_X__GetPlayerData_AAC654674F40C934B161689D8149E5ED : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___MATCHRECORDER_X__GETPLAYERDATA_AAC654674F40C934B161689D8149E5ED));
		}

		return uClassPointer;
	};

	bool __MatchRecorder_X__GetPlayerData_AAC654674F40C934B161689D8149E5ED(class UMatchPlayerData_X* P);
};

// Class ProjectX.LoginResponse_X
// 0x0014 (0x0060 - 0x0074)
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                    		// 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                BannedMinutes;                                    		// 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOGINRESPONSE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetModeBase
// 0x0000 (0x0060 - 0x0060)
class UNetModeBase : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODEBASE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Networked
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Networked : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_NETWORKED));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PauseMetricsState_X
// 0x0000 (0x0060 - 0x0060)
class UPauseMetricsState_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PAUSEMETRICSSTATE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__WebCache_X__DownloadData_416DF744461F6C151E97D895CF775593
// 0x0008 (0x0060 - 0x0068)
class U__WebCache_X__DownloadData_416DF744461F6C151E97D895CF775593 : public UObject
{
public:
	class UWebRequest_X*                               WebRequest;                                       		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___WEBCACHE_X__DOWNLOADDATA_416DF744461F6C151E97D895CF775593));
		}

		return uClassPointer;
	};

	void __WebCache_X__DownloadData_416DF744461F6C151E97D895CF775593(struct FString Key, struct FString Value);
};

// Class ProjectX.LocalCacheTests_X
// 0x0010 (0x0060 - 0x0070)
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                    		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOCALCACHETESTS_X));
		}

		return uClassPointer;
	};

	void HandleLocalCacheImported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ImportTest();
	void HandleLocalCacheExported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ToCacheAndBack(int RandomSeed);
};

// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x000C (0x00A4 - 0x00B0)
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	struct FName                                       SkelControlName;                                  		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SKELCONTROLBLENDTARGETCOMPONENT_X));
		}

		return uClassPointer;
	};

	void SetControlActiveInComponent(class USkeletalMeshComponent* SKC, unsigned long bActive);
	void SetControlActive(unsigned long bActive);
	void eventDetached();
	void eventAttached();
};

// Class ProjectX.AprilConfig_X
// 0x001C (0x0078 - 0x0094)
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	unsigned long long                                 StartTime;                                        		// 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long long                                 EndTime;                                          		// 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bChangeRankedIcons : 1;                           		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bChangePlaylists : 1;                             		// 0x0088 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bChangeCrowd : 1;                                 		// 0x0088 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              HatScale;                                         		// 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AntennaScale;                                     		// 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_APRILCONFIG_X));
		}

		return uClassPointer;
	};

	bool IsActive();
};

// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0004 (0x020C - 0x0210)
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CAMERASTATE_CAMACTORCINEMATIC_X));
		}

		return uClassPointer;
	};

	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void EndCameraState();
};

// Class ProjectX.PsyNetService_Reservation_X
// 0x0080 (0x0090 - 0x0110)
class UPsyNetService_Reservation_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                      		// 0x0090 (0x0080) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_RESERVATION_X));
		}

		return uClassPointer;
	};

	struct FServerReservationData GetReservation();
};

// Class ProjectX.PsyNetService_Reservation2_X
// 0x0080 (0x0090 - 0x0110)
class UPsyNetService_Reservation2_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                      		// 0x0090 (0x0080) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_RESERVATION2_X));
		}

		return uClassPointer;
	};

	struct FServerReservationData GetReservation();
};

// Class ProjectX.RPC_ReservationHeartbeat_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_ReservationHeartbeat_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_RESERVATIONHEARTBEAT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__CrossplayConfig_X__GetDisabledCrossplayGroup_250388F4412DA4655AE50CA535579B11
// 0x0001 (0x0060 - 0x0061)
class U__CrossplayConfig_X__GetDisabledCrossplayGroup_250388F4412DA4655AE50CA535579B11 : public UObject
{
public:
	unsigned char                                      PlayerPlatform;                                   		// 0x0060 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___CROSSPLAYCONFIG_X__GETDISABLEDCROSSPLAYGROUP_250388F4412DA4655AE50CA535579B11));
		}

		return uClassPointer;
	};

	bool __CrossplayConfig_X__GetDisabledCrossplayGroup_250388F4412DA4655AE50CA535579B11(struct FCrossplayGroup P);
};

// Class ProjectX.OnlineResource_X
// 0x00A0 (0x0070 - 0x0110)
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                              		// 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<float>                                      RetryDelays;                                      		// 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CacheSeconds;                                     		// 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bZipResponse : 1;                                 		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSyncing : 1;                                     		// 0x0094 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UStringMap*                                  Headers;                                          		// 0x0098 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UCachedWebData_X*                            CachedData;                                       		// 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int                                                RetryCount;                                       		// 0x00A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastSyncTime;                                     		// 0x00AC (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPsyNetRetryConfig_X*                        RetryConfig;                                      		// 0x00B0 (0x0008) [0x0000000000000000]               
	struct FString                                     ServiceName;                                      		// 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                    		// 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncError__Delegate;                       		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDataChanged__Delegate;                     		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINERESOURCE_X));
		}

		return uClassPointer;
	};

	void SetCachedData(class UCachedWebData_X* NewData);
	bool IsValidNewData(class UCachedWebData_X* Data);
	void ClearRetryTimer();
	void SetRetryTimer(float Delay);
	void UpdateRetryDelays(class UError* SyncError);
	void HandleRetryConfigChanged();
	void HandleSync(class UCachedWebData_X* Data);
	void RetrySync();
	void SyncData(struct FScriptDelegate Callback);
	void EventDataChanged(class UOnlineResource_X* DataSync);
	void EventSyncError(class UOnlineResource_X* DataSync, class UError* Error);
	void EventSyncComplete(class UOnlineResource_X* DataSync);
};

// Class ProjectX.RPC_GetGenericDataAll_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray<struct FGetGenericDataAllData>              GenericData;                                      		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETGENERICDATAALL_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetPlayerTitles_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             Titles;                                           		// 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETPLAYERTITLES_X));
		}

		return uClassPointer;
	};

	class URPC_GetPlayerTitles_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_ReportLowFPS_X
// 0x0038 (0x00E8 - 0x0120)
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                               		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                MachineId;                                        		// 0x00F8 (0x0004) [0x0000000000000000]               
	unsigned long long                                 ServerId;                                         		// 0x0100 (0x0008) [0x0000000000000000]               
	struct FString                                     ServerName;                                       		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                NumHumans;                                        		// 0x0118 (0x0004) [0x0000000000000000]               
	int                                                NumBots;                                          		// 0x011C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_REPORTLOWFPS_X));
		}

		return uClassPointer;
	};

	class URPC_ReportLowFPS_X* SetNumBots(int InNumBots);
	class URPC_ReportLowFPS_X* SetNumHumans(int InNumHumans);
	class URPC_ReportLowFPS_X* SetServerName(struct FString InServerName);
	class URPC_ReportLowFPS_X* SetServerID(unsigned long long InServerID);
	class URPC_ReportLowFPS_X* SetMachineID(int InMachineID);
	class URPC_ReportLowFPS_X* SetIP(struct FString InIP);
};

// Class ProjectX.RPC_SetPlayerSkill_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              Mu;                                               		// 0x00EC (0x0004) [0x0000000000000000]               
	float                                              Sigma;                                            		// 0x00F0 (0x0004) [0x0000000000000000]               
	int                                                MatchesPlayed;                                    		// 0x00F4 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETPLAYERSKILL_X));
		}

		return uClassPointer;
	};

	class URPC_SetPlayerSkill_X* SetSigma(float InSigma);
	class URPC_SetPlayerSkill_X* SetMu(float InMu);
	class URPC_SetPlayerSkill_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x000C (0x00E8 - 0x00F4)
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int                                                Playlist;                                         		// 0x00E8 (0x0004) [0x0000000000000000]               
	int                                                Tier;                                             		// 0x00EC (0x0004) [0x0000000000000000]               
	int                                                MatchesPlayed;                                    		// 0x00F0 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETPLAYERSKILLTIER_X));
		}

		return uClassPointer;
	};

	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed(int InMatchesPlayed);
	class URPC_SetPlayerSkillTier_X* SetTier(int InTier);
	class URPC_SetPlayerSkillTier_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                        		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsReponse>           PlayerPermissions;                                		// 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETPLAYERPERMISSIONS_X));
		}

		return uClassPointer;
	};

	bool GetPermissionFromString(struct FName PermissionName, unsigned char& Permission);
	TArray<unsigned char> ConvertPermissions(TArray<struct FName> PermissionNames);
	struct FPlayerPermissionsList ConvertPlayerPermissions(struct FUniqueNetId PlayerID);
	TArray<struct FPlayerPermissionsList> GetPlayerPermissions();
	class URPC_GetPlayerPermissions_X* SetPlayers(TArray<struct FUniqueNetId>& InPlayerIDs);
};

// Class ProjectX.PauseStaticDataSync_X
// 0x0000 (0x0060 - 0x0060)
class UPauseStaticDataSync_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PAUSESTATICDATASYNC_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Stopwatch
// 0x0004 (0x0070 - 0x0074)
class UStopwatch : public UComponent
{
public:
	float                                              StartTime;                                        		// 0x0070 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_STOPWATCH));
		}

		return uClassPointer;
	};

	float Elapsed();
	void Start();
};

// Class ProjectX.PsyNetStaticDataMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UPsyNetStaticDataMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSTATICDATAMETRICS_X));
		}

		return uClassPointer;
	};

	void SyncDataTime(float Seconds);
};

// Class ProjectX.WebConfig_X
// 0x0008 (0x0078 - 0x0080)
class UWebConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCacheWebImages : 1;                              		// 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	unsigned long                                      bZipPsyNetStaticData : 1;                         		// 0x0078 (0x0004) [0x0000000000004001] [0x00000002] (CPF_Edit | CPF_Config)
	float                                              PsyNetStaticDataCacheMinutes;                     		// 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WEBCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0004 (0x00E8 - 0x00EC)
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int                                                RoleID;                                           		// 0x00E8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_ADDPLAYERTOROLE_X));
		}

		return uClassPointer;
	};

	class URPC_AddPlayerToRole_X* SetRole(unsigned char Role);
};

// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0004 (0x00E8 - 0x00EC)
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int                                                RoleID;                                           		// 0x00E8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_REMOVEPLAYERFROMROLE_X));
		}

		return uClassPointer;
	};

	class URPC_RemovePlayerFromRole_X* SetRole(unsigned char Role);
};

// Class ProjectX.RPC_SetSeasonReward_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int                                                SeasonLevel;                                      		// 0x00E8 (0x0004) [0x0000000000000000]               
	int                                                SeasonLevelWins;                                  		// 0x00EC (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETSEASONREWARD_X));
		}

		return uClassPointer;
	};

	class URPC_SetSeasonReward_X* SetReward(int Level, int Wins);
};

// Class ProjectX.TAsyncResult__array_LanServerRecord_X
// 0x0058 (0x00D0 - 0x0128)
class UTAsyncResult__array_LanServerRecord_X : public UAsyncTask
{
public:
	TArray<class ULanServerRecord_X*>                  Result;                                           		// 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__ARRAY_LANSERVERRECORD_X));
		}

		return uClassPointer;
	};

	class UTAsyncResult__array_LanServerRecord_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* CreateResult(TArray<class ULanServerRecord_X*> InResult);
	class UTAsyncResult__array_LanServerRecord_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__array_LanServerRecord_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__array_LanServerRecord_X* eventSetResult(TArray<class ULanServerRecord_X*> InResult, class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResult(struct FScriptDelegate Callback);
	TArray<class ULanServerRecord_X*> ResultDelegate();
	void EventResultComplete(TArray<class ULanServerRecord_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class ULanServerRecord_X*> OutResult);
};

// Class ProjectX.AdHocBrowser_X
// 0x0048 (0x0060 - 0x00A8)
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                      		// 0x0060 (0x0008) [0x0000000000000000]               
	TArray<struct FAdHocAccessPointInfo>               AdHocNodesOnNetwork;                              		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SearchTimeout;                                    		// 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
	TArray<class ULanServerRecord_X*>                  SearchResults;                                    		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FAdHocAccessPointInfo>               AdHocAccessPointsAvailable;                       		// 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ADHOCBROWSER_X));
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__GetServerList_D611C8DC4460C1D5E30FFE842E5529A4();
	void HandleSearchTimeout();
	void AdHocHandleOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
	int FindIndexFromServerID(struct FString InServerID);
	class UAsyncTask* JoinServer(struct FString ServerId, struct FString Options);
	void CreateErrorDelegate(class UAsyncTask* Task);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	class UAsyncTask* SetServerMetaData(struct FString MetaData);
	class UAsyncTask* CreateServer(struct FString MetaData);
};

// Class ProjectX.LanServerRecord_X
// 0x0020 (0x0060 - 0x0080)
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     ServerId;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                         		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LANSERVERRECORD_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__AdHocBrowser_X__CreateServer_28852C4049CA922DE8A338AF24B71C6B
// 0x0030 (0x0060 - 0x0090)
class U__AdHocBrowser_X__CreateServer_28852C4049CA922DE8A338AF24B71C6B : public UObject
{
public:
	struct FString                                     MetaData;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAsyncTask*                                  Task;                                             		// 0x0070 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             ApcDelegate;                                      		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ADHOCBROWSER_X__CREATESERVER_28852C4049CA922DE8A338AF24B71C6B));
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__CreateServer_9C8096CD4BC574CF806B96BB449CC484();
	void __AdHocBrowser_X__CreateServer_28852C4049CA922DE8A338AF24B71C6B();
};

// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_A2A668AC406893D8FACA04AD17DF8C4C
// 0x0020 (0x0060 - 0x0080)
class U__AdHocBrowser_X__CreateErrorDelegate_A2A668AC406893D8FACA04AD17DF8C4C : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             ErrorDelegate;                                    		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ADHOCBROWSER_X__CREATEERRORDELEGATE_A2A668AC406893D8FACA04AD17DF8C4C));
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__CreateErrorDelegate_05D2536F4F2FB5154CCCE49522E1831F();
	void __AdHocBrowser_X__CreateErrorDelegate_A2A668AC406893D8FACA04AD17DF8C4C(class UError* Error);
};

// Class ProjectX.__AdHocBrowser_X__JoinServer_1730AE65416B73F8A0CEFE8B6EB562DA
// 0x0028 (0x0060 - 0x0088)
class U__AdHocBrowser_X__JoinServer_1730AE65416B73F8A0CEFE8B6EB562DA : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FString                                     ServerId;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Options;                                          		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ADHOCBROWSER_X__JOINSERVER_1730AE65416B73F8A0CEFE8B6EB562DA));
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__JoinServer_1730AE65416B73F8A0CEFE8B6EB562DA();
};

// Class ProjectX.AdHocInterface_X
// 0x0020 (0x0060 - 0x0080)
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                    		// 0x0060 (0x0008) [0x0000000000000000]               
	class UAdHocBeacon_X*                              AdHocBeacon;                                      		// 0x0068 (0x0008) [0x0000000000000000]               
	class UOnlineGameParty_X*                          OnlineGameParty;                                  		// 0x0070 (0x0008) [0x0000000000000000]               
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                      		// 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ADHOCINTERFACE_X));
		}

		return uClassPointer;
	};

	void CreateErrorDelegate(class UAsyncTask* Task);
	class UAsyncTask* DisableAdHoc();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	class UAsyncTask* EnableAdHoc();
};

// Class ProjectX.__AdHocInterface_X__EnableAdHoc_9837C0FB459F7F5BA4E66695128018DE
// 0x0020 (0x0060 - 0x0080)
class U__AdHocInterface_X__EnableAdHoc_9837C0FB459F7F5BA4E66695128018DE : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             InitDelegate;                                     		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ADHOCINTERFACE_X__ENABLEADHOC_9837C0FB459F7F5BA4E66695128018DE));
		}

		return uClassPointer;
	};

	void __AdHocInterface_X__EnableAdHoc_98780673475ED373412D3E8BEACC5BDF();
	void __AdHocInterface_X__EnableAdHoc_9837C0FB459F7F5BA4E66695128018DE();
};

// Class ProjectX.__AdHocInterface_X__DisableAdHoc_1DD1605349BD3FC27083B790CC59469B
// 0x0020 (0x0060 - 0x0080)
class U__AdHocInterface_X__DisableAdHoc_1DD1605349BD3FC27083B790CC59469B : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             DestroyedDelegate;                                		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ADHOCINTERFACE_X__DISABLEADHOC_1DD1605349BD3FC27083B790CC59469B));
		}

		return uClassPointer;
	};

	void __AdHocInterface_X__DisableAdHoc_41D87FC2450EB3B8B68E0FB67B94F51F();
	void __AdHocInterface_X__DisableAdHoc_1DD1605349BD3FC27083B790CC59469B();
};

// Class ProjectX.BlogTile_X
// 0x00A0 (0x0060 - 0x0100)
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                            		// 0x0060 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     DescriptionHeader;                                		// 0x0070 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     WebURL;                                           		// 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     CarName;                                          		// 0x00A0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     ImageURL;                                         		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     StartTime;                                        		// 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 StartTimeEpoch;                                   		// 0x00D0 (0x0008) [0x0000000000000000]               
	unsigned char                                      LinkType;                                         		// 0x00D8 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ShopID;                                           		// 0x00DC (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ProductID;                                        		// 0x00E0 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ShopItemID;                                       		// 0x00E4 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                CategoryID;                                       		// 0x00E8 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                PlaylistId;                                       		// 0x00EC (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     InfoURL;                                          		// 0x00F0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BLOGTILE_X));
		}

		return uClassPointer;
	};

	struct FString GetTileID();
};

// Class ProjectX.CountTrigger_X
// 0x0020 (0x0070 - 0x0090)
class UCountTrigger_X : public UComponent
{
public:
	int                                                Threshold;                                        		// 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Count;                                            		// 0x0074 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __EventTriggered__Delegate;                       		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_COUNTTRIGGER_X));
		}

		return uClassPointer;
	};

	void Reset();
	void Increment();
	void EventTriggered(class UCountTrigger_X* Trigger);
};

// Class ProjectX.PartyMessageQueue_X
// 0x0040 (0x0070 - 0x00B0)
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray<struct FPendingMessage>                     Pending;                                          		// 0x0070 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UAsyncTask*>                          CurrentBatch;                                     		// 0x0080 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bPaused : 1;                                      		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BatchDelayTime;                                   		// 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;           		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGEQUEUE_X));
		}

		return uClassPointer;
	};

	void __PartyMessageQueue_X__CancelAll_01C9CE794699DE533ADD9E9A2AA00228(class UAsyncTask* Task);
	void HandleTaskComplete(class UAsyncTask* Task);
	class UAsyncTask* SendMessage(struct FUniqueLobbyId LobbyId, struct FString Message);
	void SendBatch();
	void SendBatchTimer();
	void QueueBatch();
	void CancelAll();
	void QueueMessage(struct FUniqueLobbyId LobbyId, struct FString Message);
	void SetPaused(unsigned long bPause);
	class UAsyncTask* SendMessageServiceDelegate(struct FUniqueLobbyId LobbyId, struct FString Message);
};

// Class ProjectX.RPC_PartyBase_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                          		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYBASE_X));
		}

		return uClassPointer;
	};

	class URPC_PartyBase_X* SetPartyIdStr(struct FString InPartyId);
	class URPC_PartyBase_X* SetPartyId(struct FUniqueLobbyId InLobbyId);
};

// Class ProjectX.RPC_PartyMessage_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYMESSAGE_X));
		}

		return uClassPointer;
	};

	class URPC_PartyMessage_X* SetMessage(struct FString InMessage);
};

// Class ProjectX.__PartyMessageQueue_X__SendMessage_3C4DCC8C49295DC7ADB4F295252E9916
// 0x0008 (0x0060 - 0x0068)
class U__PartyMessageQueue_X__SendMessage_3C4DCC8C49295DC7ADB4F295252E9916 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PARTYMESSAGEQUEUE_X__SENDMESSAGE_3C4DCC8C49295DC7ADB4F295252E9916));
		}

		return uClassPointer;
	};

	void __PartyMessageQueue_X__SendMessage_3C4DCC8C49295DC7ADB4F295252E9916(class UError* _);
};

// Class ProjectX.PsyNetChannel_X
// 0x0050 (0x0060 - 0x00B0)
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                      		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bOpen : 1;                                        		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReceivedFirstMessage : 1;                        		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClosed : 1;                                      		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTimedOut : 1;                                    		// 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                NextMessageID;                                    		// 0x0074 (0x0004) [0x0000000000000000]               
	float                                              WaitForMessageTime;                               		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPendingChannelService>              ServiceQueue;                                     		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                    		// 0x0090 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventClosed__Delegate;                          		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETCHANNEL_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugName();
	void Close();
	void Timeout();
	void ClearTimeout();
	void UpdateTimeout();
	void ExecuteService(class UPsyNetClientService_X* Service);
	void ExecuteNext();
	class UAsyncTask* CreatePendingService(class UPsyNetClientService_X* Service, int MessageId);
	class UAsyncTask* QueueServiceCall(class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message);
	void Open();
	void Unsubscribe(struct FScriptDelegate Callback);
	void Subscribe(class UClass* ServiceClass, struct FScriptDelegate Callback);
	void Init(struct FString InChannelName);
	void EventClosed(class UPsyNetChannel_X* Channel);
};

// Class ProjectX.PartySequence_CreateParty_X
// 0x0020 (0x0060 - 0x0080)
class UPartySequence_CreateParty_X : public UObject
{
public:
	class URPC_PartyCreate_X*                          PendingRPC;                                       		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                    		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_CREATEPARTY_X));
		}

		return uClassPointer;
	};

	void __PartySequence_CreateParty_X__CreateParty_15AE44554E718755455E15B518436AB0(class URPC_X* _);
	void HandleCreatePartyComplete();
	void HandlePlatformPartyCreated(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& PlatformPartyID);
	class UAsyncTask* CreateParty(int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyCreated(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
};

// Class ProjectX.PartySequence_JoinParty_X
// 0x0018 (0x0060 - 0x0078)
class UPartySequence_JoinParty_X : public UObject
{
public:
	struct FScriptDelegate                             __EventJoinedParty__Delegate;                     		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_JOINPARTY_X));
		}

		return uClassPointer;
	};

	void HandlePlatformPartyCreated(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& PlatformPartyID);
	void HandleJoinLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void HandleGetPlatformPartyResponseMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformPartyResponse_X* Message);
	void HandleGetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformParty_X* Message);
	void HandlePsyNetLobbyJoinSucceeded(class URPC_PartyJoin_X* RpcPartyJoin);
	class UAsyncTask* JoinLobbyWithKey(struct FString PsyNetPartyId, struct FString JoinKey);
	class UAsyncTask* JoinLobby(struct FUniqueLobbyId& LobbyId);
	void Init();
	void EventJoinedParty(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
};

// Class ProjectX.PartySequence_LeaveParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_LeaveParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_LEAVEPARTY_X));
		}

		return uClassPointer;
	};

	void LeaveParty(struct FUniqueLobbyId& LobbyId);
};

// Class ProjectX.RPC_PartyChat_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_PartyChat_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYCHAT_X));
		}

		return uClassPointer;
	};

	class URPC_PartyChat_X* SetText(struct FString InText);
};

// Class ProjectX.RPC_PartyChangeOwner_X
// 0x00C8 (0x00F8 - 0x01C0)
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                       		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                             		// 0x0140 (0x0070) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                          		// 0x01B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYCHANGEOWNER_X));
		}

		return uClassPointer;
	};

	class URPC_PartyChangeOwner_X* SetNewOwnerId(struct FUniqueNetId InNewOwnerId);
};

// Class ProjectX.PartySequence_InviteToParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_InviteToParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYSEQUENCE_INVITETOPARTY_X));
		}

		return uClassPointer;
	};

	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_7437BA0848872DDE90EFE1ADF1A91016(class URPC_PartySendInvite_X* RPC);
	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_AA382A784B36111E8C93B9999CE184CE(class URPC_PartySendInvite_X* RPC);
	bool InviteToPsyNetParty(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool InviteToParty(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
};

// Class ProjectX.RPC_PartyKickMember_X
// 0x0011 (0x00F8 - 0x0109)
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray<struct FString>                             Members;                                          		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      KickReason;                                       		// 0x0108 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYKICKMEMBER_X));
		}

		return uClassPointer;
	};

	class URPC_PartyKickMember_X* SetReason(unsigned char InReason);
	class URPC_PartyKickMember_X* AddMember(struct FString InMemberId);
};

// Class ProjectX.RPC_PartyInfo_X
// 0x0090 (0x00E8 - 0x0178)
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray<struct FPartyInvite>                        Invites;                                          		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPsyNetPartyMember                          Member;                                           		// 0x00F8 (0x0080) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYINFO_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_Party_X
// 0x00D8 (0x0090 - 0x0168)
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                                 		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Content;                                          		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                       		// 0x00C0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     FromUserName;                                     		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                CreatedAt;                                        		// 0x0118 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                ForUserId;                                        		// 0x0120 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYUSERINVITED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYSYSTEM_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYUSERJOINED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x0101 (0x0090 - 0x0191)
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                                 		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Content;                                          		// 0x00B0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                       		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                CreatedAt;                                        		// 0x0140 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                ForUserId;                                        		// 0x0148 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      KickReason;                                       		// 0x0190 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYUSERKICKED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYUSERLEFT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYUSERDISCONNECTED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x0100 (0x0090 - 0x0190)
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                          		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                                 		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Content;                                          		// 0x00B0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                       		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                CreatedAt;                                        		// 0x0140 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                ForUserId;                                        		// 0x0148 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYOWNERCHANGED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyChat_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyChat_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PARTYCHAT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PerConMetrics_X
// 0x001C (0x0080 - 0x009C)
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int                                                StartConnectFailCount;                            		// 0x0080 (0x0004) [0x0000000000000000]               
	int                                                ConnectFailCount;                                 		// 0x0084 (0x0004) [0x0000000000000000]               
	int                                                DisconnectCount;                                  		// 0x0088 (0x0004) [0x0000000000000000]               
	int                                                RPCErrorCount;                                    		// 0x008C (0x0004) [0x0000000000000000]               
	int                                                InvalidMessageCount;                              		// 0x0090 (0x0004) [0x0000000000000000]               
	unsigned long                                      bConnected : 1;                                   		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                        		// 0x0098 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PERCONMETRICS_X));
		}

		return uClassPointer;
	};

	void ServiceError(struct FUniqueNetId PlayerID, int Count, struct FString Service, struct FName Error);
	void InvalidMessageError(struct FUniqueNetId PlayerID, int Count, struct FString Substring);
	void DisconnectedError(struct FUniqueNetId PlayerID, int Count, int Code, struct FString Reason, float ElapsedSeconds);
	void Connected(struct FUniqueNetId PlayerID, float ElapsedSeconds);
	void ConnectError(struct FUniqueNetId PlayerID, int Count, int Code, struct FString Reason, float ElapsedSeconds);
	void StartConnectError(struct FUniqueNetId PlayerID, int Count);
	void StartConnect(struct FUniqueNetId PlayerID);
	void Disabled(struct FUniqueNetId PlayerID);
	void Enabled(struct FUniqueNetId PlayerID);
	void HandleRPCError(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandleInvalidMessage(class UPsyNetMessengerWebSocket_X* InMessenger, struct FString Substring);
	void HandleDisconnected(class UPsyNetMessengerWebSocket_X* Socket, int Code, struct FString Reason);
	void HandleConnected(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnectFail(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnect(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStatusChanged(class UPerCon_X* PerCon);
	struct FUniqueNetId GetPlayerID();
	void SetMessenger(class UPsyNetMessengerWebSocket_X* PerConMessenger);
	void eventConstruct();
};

// Class ProjectX.PsyNetRequestQue_X
// 0x0030 (0x0060 - 0x0090)
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                   		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPsyNetRequest>                      Requests;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;                  		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETREQUESTQUE_X));
		}

		return uClassPointer;
	};

	void FailAllPending(class UError* Error);
	void TimeoutRequests();
	bool ProcessResponseMessage(class UPsyNetMessage_X* Message);
	void RemoveRequest(struct FName RequestID);
	void SetRequestComplete(struct FName RequestID, class UPsyNetMessage_X* Response, class UError* Error);
	class UTAsyncResult__PsyNetMessage_X* eventSendRequest(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessageDelegate(class UPsyNetMessage_X* Message);
};

// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0000 (0x0090 - 0x0090)
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_DUPLICATELOGIN_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_A2C0DD35442BDDDB1BFDC2AFA14C8B31
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetConnection_X__ProcessServiceCall_A2C0DD35442BDDDB1BFDC2AFA14C8B31 : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETCONNECTION_X__PROCESSSERVICECALL_A2C0DD35442BDDDB1BFDC2AFA14C8B31));
		}

		return uClassPointer;
	};

	void __PsyNetConnection_X__ProcessServiceCall_A2C0DD35442BDDDB1BFDC2AFA14C8B31(class UError* _);
};

// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_B4A9D63B40BD7132099ADA92C7EBB108
// 0x0018 (0x0060 - 0x0078)
class U__PsyNetMessengerHttp_X__SendMessage_B4A9D63B40BD7132099ADA92C7EBB108 : public UObject
{
public:
	struct FString                                     PsyRequestID;                                     		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAsyncTask*                                  Task;                                             		// 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETMESSENGERHTTP_X__SENDMESSAGE_B4A9D63B40BD7132099ADA92C7EBB108));
		}

		return uClassPointer;
	};

	void __PsyNetMessengerHttp_X__SendMessage_B4A9D63B40BD7132099ADA92C7EBB108(class UWebRequest_X* Request);
};

// Class ProjectX.__PsyNetRequestQue_X__SendRequest_60428EAB40CE18F9D488DE9B5FD78F74
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetRequestQue_X__SendRequest_60428EAB40CE18F9D488DE9B5FD78F74 : public UObject
{
public:
	struct FName                                       RequestID;                                        		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETREQUESTQUE_X__SENDREQUEST_60428EAB40CE18F9D488DE9B5FD78F74));
		}

		return uClassPointer;
	};

	void __PsyNetRequestQue_X__SendRequest_60428EAB40CE18F9D488DE9B5FD78F74();
};

// Class ProjectX.PsyNetService_AAS_X
// 0x0008 (0x0090 - 0x0098)
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int                                                AdtTime;                                          		// 0x0090 (0x0004) [0x0000000000000000]               
	int                                                OnlineHours;                                      		// 0x0094 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_AAS_X));
		}

		return uClassPointer;
	};

	int GetOnlineHours();
};

// Class ProjectX.PsyNetService_Echo_X
// 0x0020 (0x0090 - 0x00B0)
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                    		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ResponseString;                                   		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_ECHO_X));
		}

		return uClassPointer;
	};

	void Execute();
};

// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x0090 (0x0090 - 0x0120)
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                       		// 0x0090 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PERSONAINFO_X));
		}

		return uClassPointer;
	};

	struct FOnlineFriend GetData();
};

// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (0x0120 - 0x0120)
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_FRIENDACCEPTEDREQUEST_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0068 (0x0090 - 0x00F8)
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetOnlineStatus                         FromPlayer;                                       		// 0x0090 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_FRIENDSTATUSUPDATE_X));
		}

		return uClassPointer;
	};

	struct FOnlineStatus GetData();
};

// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (0x0120 - 0x0120)
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_INCOMINGFRIENDREQUEST_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0048 (0x0090 - 0x00D8)
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0090 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYNETSERVICE_PLAYERUNFRIENDED_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_8A2C374C4AD809D2FC634C99EAD463FD
// 0x0010 (0x0060 - 0x0070)
class U__PsyNetServiceProvider_X__CreateChannel_8A2C374C4AD809D2FC634C99EAD463FD : public UObject
{
public:
	struct FString                                     ChannelName;                                      		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETSERVICEPROVIDER_X__CREATECHANNEL_8A2C374C4AD809D2FC634C99EAD463FD));
		}

		return uClassPointer;
	};

	bool __PsyNetServiceProvider_X__CreateChannel_8A2C374C4AD809D2FC634C99EAD463FD(class UPsyNetChannel_X* C);
};

// Class ProjectX.TAsyncResult__PsyNetClientService_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__PsyNetClientService_X : public UAsyncTask
{
public:
	class UPsyNetClientService_X*                      Result;                                           		// 0x00D0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__PSYNETCLIENTSERVICE_X));
		}

		return uClassPointer;
	};

	class UTAsyncResult__PsyNetClientService_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* CreateResult(class UPsyNetClientService_X* InResult);
	class UTAsyncResult__PsyNetClientService_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__PsyNetClientService_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__PsyNetClientService_X* eventSetResult(class UPsyNetClientService_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UPsyNetClientService_X* ResultDelegate();
	void EventResultComplete(class UPsyNetClientService_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetClientService_X* OutResult);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_2D98ADDB46EB4383381EC881715C9798
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetServiceProvider_X__ExecuteRequest_2D98ADDB46EB4383381EC881715C9798 : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETSERVICEPROVIDER_X__EXECUTEREQUEST_2D98ADDB46EB4383381EC881715C9798));
		}

		return uClassPointer;
	};

	void __PsyNetServiceProvider_X__ExecuteRequest_2D98ADDB46EB4383381EC881715C9798(class UPsyNetClientService_X* Result, class UError* Error);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_90BC11E9480A8C2C6139A2A5CFEA7E36
// 0x0020 (0x0060 - 0x0080)
class U__PsyNetServiceProvider_X__ExecuteServiceMessage_90BC11E9480A8C2C6139A2A5CFEA7E36 : public UObject
{
public:
	struct FString                                     ServiceName;                                      		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetClientService_X*                      Service;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
	class UTAsyncResult__PsyNetClientService_X*        Task;                                             		// 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PSYNETSERVICEPROVIDER_X__EXECUTESERVICEMESSAGE_90BC11E9480A8C2C6139A2A5CFEA7E36));
		}

		return uClassPointer;
	};

	void __PsyNetServiceProvider_X__ExecuteServiceMessage_011F0D62456F405CAF28619B64E96276(class UError* Err);
	void __PsyNetServiceProvider_X__ExecuteServiceMessage_90BC11E9480A8C2C6139A2A5CFEA7E36(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.RPC_PartyChatMessage_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                          		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYCHATMESSAGE_X));
		}

		return uClassPointer;
	};

	class URPC_PartyChatMessage_X* SetMessage(struct FString InMessage);
};

// Class ProjectX.RPC_PartyCreate_X
// 0x0088 (0x00E8 - 0x0170)
class URPC_PartyCreate_X : public URPC_X
{
public:
	unsigned long                                      bForcePartyonix : 1;                              		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPsyNetPartyInfo                            Info;                                             		// 0x00F0 (0x0070) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                          		// 0x0160 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYCREATE_X));
		}

		return uClassPointer;
	};

	class URPC_PartyCreate_X* SetRequirePsyNetParty(unsigned long bValue);
};

// Class ProjectX.RPC_PartyJoin_X
// 0x0090 (0x00F8 - 0x0188)
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FString                                     JoinID;                                           		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                             		// 0x0108 (0x0070) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                          		// 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYJOIN_X));
		}

		return uClassPointer;
	};

	class URPC_PartyBase_X* SetJoinKey(struct FString InJoinKey);
};

// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (0x00F8 - 0x00F8)
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYLEAVE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.TaskGate_X
// 0x0018 (0x0060 - 0x0078)
class UTaskGate_X : public UObject
{
public:
	unsigned long                                      bOpen : 1;                                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<class UAsyncTask*>                          Tasks;                                            		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASKGATE_X));
		}

		return uClassPointer;
	};

	class UAsyncTask* AddWithTimeout(float TimeoutSeconds, class UErrorType* TimeoutError, struct FString ErrorMessage);
	class UAsyncTask* Add();
	void CompleteTasks();
	void SetOpen(unsigned long bIsOpen);
};

// Class ProjectX.__TaskGate_X__Add_12E1040C4D45A762018410ADA6C483DC
// 0x0008 (0x0060 - 0x0068)
class U__TaskGate_X__Add_12E1040C4D45A762018410ADA6C483DC : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASKGATE_X__ADD_12E1040C4D45A762018410ADA6C483DC));
		}

		return uClassPointer;
	};

	void __TaskGate_X__Add_12E1040C4D45A762018410ADA6C483DC();
};

// Class ProjectX.__TaskGate_X__AddWithTimeout_2EDFCCF546B875AC296889A2E6E4E8F8
// 0x0038 (0x0060 - 0x0098)
class U__TaskGate_X__AddWithTimeout_2EDFCCF546B875AC296889A2E6E4E8F8 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
	class UErrorType*                                  TimeoutError;                                     		// 0x0068 (0x0008) [0x0000000000000000]               
	struct FString                                     ErrorMessage;                                     		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             TimeoutDelegate;                                  		// 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASKGATE_X__ADDWITHTIMEOUT_2EDFCCF546B875AC296889A2E6E4E8F8));
		}

		return uClassPointer;
	};

	void __TaskGate_X__AddWithTimeout_50DB5D0742906315547541A40CC31164();
	void __TaskGate_X__AddWithTimeout_2EDFCCF546B875AC296889A2E6E4E8F8();
};

// Class ProjectX.UdpLanServer_X
// 0x0018 (0x0060 - 0x0078)
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                           		// 0x0060 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     MetaData;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_UDPLANSERVER_X));
		}

		return uClassPointer;
	};

	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query);
	void Destroy();
	class UAsyncTask* SetServerMetaData(struct FString InMetaData);
	void eventConstruct();
};

// Class ProjectX.SetPlayerStorageResult_X
// 0x0010 (0x0060 - 0x0070)
class USetPlayerStorageResult_X : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         Items;                                            		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SETPLAYERSTORAGERESULT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlinePlayerStorageQueue_X
// 0x0088 (0x0060 - 0x00E8)
class UOnlinePlayerStorageQueue_X : public UObject
{
public:
	class UOnlinePlayerStorageConfig_X*                Config;                                           		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPendingStorage>                     QueuedObjects;                                    		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPendingStorage>                     PendingObjects;                                   		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              DefaultStorageMaxSizeBytes;                       		// 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	TArray<struct FStorageMaxSize>                     StorageMaxSizes;                                  		// 0x0090 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStorageSuccess__Delegate;                  		// 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOutOfSync__Delegate;                       		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStorageError__Delegate;                    		// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERSTORAGEQUEUE_X));
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageQueue_X__Construct_ED172FC94632D1B52D33378CE5C623CC(struct FString _);
	void __OnlinePlayerStorageQueue_X__SendBatch_Internal_E3BB8C024E7045AB47E1F7999632C711(class URPC_X* RPC);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_19575B9E46035CB4E95A4E9FDE1EA71D(struct FPendingStorage P);
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_C809F85B46E20EF7DE5F72899413B9C3(struct FSetPlayerStorageRequestItem R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_987845AC44825F44534D50B0FC18D307(struct FSetPlayerStorageResultItem Item);
	void __OnlinePlayerStorageQueue_X__HandleStorageError_DBF4ED41412699CB3F0A2DB7FF55043B(struct FPendingStorage P);
	bool __OnlinePlayerStorageQueue_X__HandleStorageError_3F32630D458918D435ED4FACA2742369(struct FPendingStorage P);
	int GetStorageMaxSizeBytes(struct FName Category);
	void HandleStorageError(class UError* Error);
	struct FPendingStorage MapResultItem(struct FSetPlayerStorageResultItem Item);
	void HandleStorageSuccess(class URPC_PlayerStorageSet_X* RPC);
	void PartitionStorageRequests(TArray<struct FPendingStorage>& OutQueue, TArray<struct FSetPlayerStorageRequestItem>& OutOfDate);
	void SendBatch_Internal(TArray<struct FPendingStorage>& OutQueue);
	void SendBatch();
	void QueueBatch();
	void SendImmediate(class UObject* DataObj, int ClientTick);
	void UpdateQueuedObject(class UObject* DataObj, int ClientTick);
	void QueueObject(class UObject* DataObj, int ClientTick);
	void eventConstruct();
	void EventStorageError(class UError* Error);
	void EventOutOfSync(TArray<struct FPendingStorage>& FailedObjects);
	void EventStorageSuccess(class UObject* Data, int ServerTick, unsigned char Encoding);
};

// Class ProjectX.DynamicValue_X
// 0x0024 (0x0060 - 0x0084)
class UDynamicValue_X : public UObject
{
public:
	float                                              DefaultValue;                                     		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bClampMax : 1;                                    		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bClampMin : 1;                                    		// 0x0064 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              MaxValue;                                         		// 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinValue;                                         		// 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UDynamicValueModifier_X*>             Modifiers;                                        		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              CachedValue;                                      		// 0x0080 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DYNAMICVALUE_X));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void RemoveAllModifiers();
	void RemoveModifier(class UDynamicValueModifier_X* Mod);
	class UDynamicValueModifier_X* AddModifier(class UDynamicValueModifier_X* Mod);
	void eventConstruct();
};

// Class ProjectX.DynamicValueModifier_X
// 0x0018 (0x0060 - 0x0078)
class UDynamicValueModifier_X : public UObject
{
public:
	struct FString                                     DisplayName;                                      		// 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      Type;                                             		// 0x0070 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int                                                Priority;                                         		// 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DYNAMICVALUEMODIFIER_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugValue();
	struct FString GetDebugString();
	bool Expired();
	float GetValue();
	void Tick(float DeltaTime);
};

// Class ProjectX.DynamicValueModifierCurve_X
// 0x0030 (0x0078 - 0x00A8)
class UDynamicValueModifierCurve_X : public UDynamicValueModifier_X
{
public:
	struct FInterpCurveFloat                           Curve;                                            		// 0x0078 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FScriptDelegate                             __GetValueDelegate__Delegate;                     		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DYNAMICVALUEMODIFIERCURVE_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugValue();
	float GetValue();
	float GetValueDelegate();
};

// Class ProjectX.DynamicValueModifierDuration_X
// 0x0024 (0x0078 - 0x009C)
class UDynamicValueModifierDuration_X : public UDynamicValueModifier_X
{
public:
	float                                              Duration;                                         		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                            		// 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           CurveValue;                                       		// 0x0080 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bUseCurve : 1;                                    		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DYNAMICVALUEMODIFIERDURATION_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugString();
	float GetValue();
	bool Expired();
	void Tick(float DeltaTime);
};

// Class ProjectX.GetPlayerStorageResult_X
// 0x0010 (0x0060 - 0x0070)
class UGetPlayerStorageResult_X : public UObject
{
public:
	TArray<class UGetPlayerStorageResultItem_X*>       Items;                                            		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GETPLAYERSTORAGERESULT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.GetPlayerStorageResultItem_X
// 0x0029 (0x0060 - 0x0089)
class UGetPlayerStorageResultItem_X : public UObject
{
public:
	struct FName                                       Category;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
	int                                                Tick;                                             		// 0x0068 (0x0004) [0x0000000000000000]               
	struct FString                                     Data;                                             		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Checksum;                                         		// 0x0080 (0x0004) [0x0000000000000000]               
	unsigned long                                      bChecksumMatch : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Encoding;                                         		// 0x0088 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GETPLAYERSTORAGERESULTITEM_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlinePlayerStorageManifest_X
// 0x0010 (0x0060 - 0x0070)
class UOnlinePlayerStorageManifest_X : public UObject
{
public:
	TArray<struct FStorageMetadata>                    MetaData;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERSTORAGEMANIFEST_X));
		}

		return uClassPointer;
	};

	bool ChecksumMatches(struct FName Category, int Checksum, unsigned char Encoding);
	void SetChecksum(struct FName Category, int Checksum, unsigned char Encoding);
	int GetIndex(struct FName Category);
};

// Class ProjectX.OnlinePlayerStorageSync_X
// 0x0018 (0x0060 - 0x0078)
class UOnlinePlayerStorageSync_X : public UObject
{
public:
	struct FScriptDelegate                             __EventSyncSuccess__Delegate;                     		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERSTORAGESYNC_X));
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageSync_X__HandleSyncSuccess_F7CAC9D2404BA0C4942F36A15EE7B144(struct FOnlinePlayerStorageSyncResult Result);
	class UObject* InstanceSyncData(class UObject* LocalObject, class UDecodeObject_X* DecodeObj);
	void HandleSyncSuccess(class URPC_PlayerStorageGet_X* RPC, class UAsyncTask* ResponseTask);
	int CrcObject(unsigned char Encoding, class UObject* Data);
	struct FGetPlayerStorageRequestItem MapRequestItem(struct FOnlinePlayerStorageSyncRequest Request);
	class UAsyncTask* SyncObjects(TArray<struct FOnlinePlayerStorageSyncRequest>& Requests);
	void EventSyncSuccess(struct FOnlinePlayerStorageSyncResult& Result);
};

// Class ProjectX.OnlinePlayerStorageConfig_X
// 0x0004 (0x0078 - 0x007C)
class UOnlinePlayerStorageConfig_X : public UOnlineConfig_X
{
public:
	float                                              QueueBatchDelay;                                  		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINEPLAYERSTORAGECONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.EncodeObject_X
// 0x0018 (0x0060 - 0x0078)
class UEncodeObject_X : public UObject
{
public:
	unsigned char                                      Encoding;                                         		// 0x0060 (0x0001) [0x0000000000000000]               
	int                                                Checksum;                                         		// 0x0064 (0x0004) [0x0000000000000000]               
	struct FString                                     Encoded;                                          		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ENCODEOBJECT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.SaveLock_X
// 0x0008 (0x0060 - 0x0068)
class USaveLock_X : public UObject
{
public:
	class UGFxEngine_X*                                GFxEngine;                                        		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SAVELOCK_X));
		}

		return uClassPointer;
	};

	bool StaticAllowSave();
	bool AllowSave();
};

// Class ProjectX.RPC_PlayerStorageSet_X
// 0x0060 (0x00E8 - 0x0148)
class URPC_PlayerStorageSet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSetPlayerStorageRequestItem>        Items;                                            		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USetPlayerStorageResult_X*                   Result;                                           		// 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PLAYERSTORAGESET_X));
		}

		return uClassPointer;
	};

	class UObject* eventGetResponseObject();
};

// Class ProjectX.EncodeObjectFactory_X
// 0x0010 (0x0060 - 0x0070)
class UEncodeObjectFactory_X : public UObject
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                   		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObjectSerializer_X*                         ObjectSerializer;                                 		// 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ENCODEOBJECTFACTORY_X));
		}

		return uClassPointer;
	};

	class UDecodeObject_X* DecodeObject(unsigned char Encoding, int RequestChecksum, struct FString& Stream);
	class UEncodeObject_X* EncodeObject(unsigned char Encoding, class UObject* Target);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_A34F614D4BE5191A21FD138F3A987982
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerStorageQueue_X__HandleStorageSuccess_A34F614D4BE5191A21FD138F3A987982 : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         OutOfSync;                                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class URPC_PlayerStorageSet_X*                     RPC;                                              		// 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERSTORAGEQUEUE_X__HANDLESTORAGESUCCESS_A34F614D4BE5191A21FD138F3A987982));
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_C3D433EC4649428BEBA56193F14CB51C(struct FSetPlayerStorageResultItem R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_A34F614D4BE5191A21FD138F3A987982(struct FSetPlayerStorageRequestItem R);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_C27969EB4B24CFA752F5C68BE37D5C53
// 0x0010 (0x0060 - 0x0070)
class U__OnlinePlayerStorageQueue_X__MapResultItem_C27969EB4B24CFA752F5C68BE37D5C53 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 Item;                                             		// 0x0060 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERSTORAGEQUEUE_X__MAPRESULTITEM_C27969EB4B24CFA752F5C68BE37D5C53));
		}

		return uClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__MapResultItem_C27969EB4B24CFA752F5C68BE37D5C53(struct FPendingStorage P);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_1C15672C4BBC2BDC9D89D9A31C8379C4
// 0x0008 (0x0060 - 0x0068)
class U__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_1C15672C4BBC2BDC9D89D9A31C8379C4 : public UObject
{
public:
	struct FName                                       Category;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERSTORAGEQUEUE_X__GETSTORAGEMAXSIZEBYTES_1C15672C4BBC2BDC9D89D9A31C8379C4));
		}

		return uClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_1C15672C4BBC2BDC9D89D9A31C8379C4(struct FStorageMaxSize C);
};

// Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_25F8F52D4E4E36A47C01FF8D3F71E147
// 0x0008 (0x0060 - 0x0068)
class U__OnlinePlayerStorageSync_X__SyncObjects_25F8F52D4E4E36A47C01FF8D3F71E147 : public UObject
{
public:
	class UAsyncTask*                                  ResponseTask;                                     		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINEPLAYERSTORAGESYNC_X__SYNCOBJECTS_25F8F52D4E4E36A47C01FF8D3F71E147));
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageSync_X__SyncObjects_25F8F52D4E4E36A47C01FF8D3F71E147(class URPC_X* RPC);
};

// Class ProjectX.RPC_PlayerStorageGet_X
// 0x0060 (0x00E8 - 0x0148)
class URPC_PlayerStorageGet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGetPlayerStorageRequestItem>        Items;                                            		// 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGetPlayerStorageResult_X*                   Result;                                           		// 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PLAYERSTORAGEGET_X));
		}

		return uClassPointer;
	};

	void __RPC_PlayerStorageGet_X__OnSuccess_338FB90346F2F3E34FC83D9D00AA32F3(class UGetPlayerStorageResultItem_X* Item);
	bool __RPC_PlayerStorageGet_X__OnSuccess_391BB6444F4A3AC68AD964B5B0241BB4(class UGetPlayerStorageResultItem_X* Item);
	void eventOnSuccess();
	class UObject* eventGetResponseObject();
};

// Class ProjectX.DecodeObject_X
// 0x0010 (0x0060 - 0x0070)
class UDecodeObject_X : public UObject
{
public:
	int                                                Checksum;                                         		// 0x0060 (0x0004) [0x0000000000000000]               
	class UError*                                      Error;                                            		// 0x0068 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DECODEOBJECT_X));
		}

		return uClassPointer;
	};

	void Decode(class UObject* OutObj);
};

// Class ProjectX.SmoothDynamicValue_X
// 0x0010 (0x0084 - 0x0094)
class USmoothDynamicValue_X : public UDynamicValue_X
{
public:
	float                                              LerpUpSpeed;                                      		// 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LerpDownSpeed;                                    		// 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SmoothedCachedValue;                              		// 0x0090 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_SMOOTHDYNAMICVALUE_X));
		}

		return uClassPointer;
	};

	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void eventConstruct();
};

// Class ProjectX.TAsyncResult__array_ClubInvite_X
// 0x0058 (0x00D0 - 0x0128)
class UTAsyncResult__array_ClubInvite_X : public UAsyncTask
{
public:
	TArray<class UClubInvite_X*>                       Result;                                           		// 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__ARRAY_CLUBINVITE_X));
		}

		return uClassPointer;
	};

	class UTAsyncResult__array_ClubInvite_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* CreateResult(TArray<class UClubInvite_X*> InResult);
	class UTAsyncResult__array_ClubInvite_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__array_ClubInvite_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__array_ClubInvite_X* eventSetResult(TArray<class UClubInvite_X*> InResult, class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResult(struct FScriptDelegate Callback);
	TArray<class UClubInvite_X*> ResultDelegate();
	void EventResultComplete(TArray<class UClubInvite_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class UClubInvite_X*> OutResult);
};

// Class ProjectX.ClubInvite_X
// 0x0080 (0x0060 - 0x00E0)
class UClubInvite_X : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FString                                     ClubName;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                          		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FClubMember                                 InvitedBy;                                        		// 0x0088 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLUBINVITE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ActionQueue_X
// 0x0038 (0x0070 - 0x00A8)
class UActionQueue_X : public UComponent
{
public:
	float                                              ActionsPerSecond;                                 		// 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FScriptDelegate>                     Queue;                                            		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                QueueIndex;                                       		// 0x0088 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __ActionDelegate__Delegate;                       		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ACTIONQUEUE_X));
		}

		return uClassPointer;
	};

	void Tick();
	void Add(struct FScriptDelegate Callback);
	void ActionDelegate();
};

// Class ProjectX.AppConfig_X
// 0x0004 (0x0078 - 0x007C)
class UAppConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSpinSleep : 1;                                   		// 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_APPCONFIG_X));
		}

		return uClassPointer;
	};

	void Undo();
	void Apply();
};

// Class ProjectX.ClubErrors_X
// 0x0098 (0x0080 - 0x0118)
class UClubErrors_X : public UErrorList
{
public:
	class UErrorType*                                  ClubNotFound;                                     		// 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerAlreadyInClub;                              		// 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerInSameClub;                                 		// 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerInDifferentClub;                            		// 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotClubOwner;                                     		// 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubNameChangeNotAllowed;                         		// 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubFull;                                         		// 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubMemberNotFound;                               		// 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubInviteNotFound;                               		// 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubInvalidParameters;                            		// 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubNameInvalid;                                  		// 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubTagInvalid;                                   		// 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubTagPlusNameInvalid;                           		// 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubMotdInvalid;                                  		// 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubNameTaken;                                    		// 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubOwnerCannotLeaveUnlessEmpty;                  		// 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CrossPlatformClubsDisabled;                       		// 0x0100 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubInviteCrossPlatformClubsDisabled;             		// 0x0108 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ClubBanned;                                       		// 0x0110 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLUBERRORS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.ClubServerResult_X
// 0x0048 (0x0060 - 0x00A8)
class UClubServerResult_X : public UObject
{
public:
	struct FString                                     Host;                                             		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Port;                                             		// 0x0070 (0x0004) [0x0000000000000000]               
	struct FString                                     ServerName;                                       		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerName;                                 		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerPassword;                             		// 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLUBSERVERRESULT_X));
		}

		return uClassPointer;
	};

	struct FString GetAddress();
};

// Class ProjectX.ClubUtil_X
// 0x0000 (0x0060 - 0x0060)
class UClubUtil_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLUBUTIL_X));
		}

		return uClassPointer;
	};

	int Wrap(int Column, int Count);
	struct FClubColorSet SwapPrimaryAccentColors(struct FClubColorSet Colors, class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette);
	bool AreColorsDifferent(class UColorPalette_X* Palette, int Color0, int Color1);
	unsigned char EnsureDifferentColors(class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette, int DefaultColorID0, int DefaultColorID1, struct FClubColorSet& Set0, struct FClubColorSet& Set1);
	bool IsClubTeam(int TeamSize, TArray<unsigned long long>& TeamClubs);
	bool IsClubMatch(int TeamSize, TArray<unsigned long long>& Team0Clubs, TArray<unsigned long long>& Team1Clubs);
};

// Class ProjectX.__ClubUtil_X__IsClubTeam_DA040E814997FC285BA0D5B0AEFF720C
// 0x0010 (0x0060 - 0x0070)
class U__ClubUtil_X__IsClubTeam_DA040E814997FC285BA0D5B0AEFF720C : public UObject
{
public:
	TArray<unsigned long long>                         TeamClubs;                                        		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___CLUBUTIL_X__ISCLUBTEAM_DA040E814997FC285BA0D5B0AEFF720C));
		}

		return uClassPointer;
	};

	bool __ClubUtil_X__IsClubTeam_DA040E814997FC285BA0D5B0AEFF720C(unsigned long long Id);
};

// Class ProjectX.LocalClubData_X
// 0x0024 (0x0060 - 0x0084)
class ULocalClubData_X : public UObject
{
public:
	TArray<class UClubDetails_X*>                      Clubs;                                            		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerClubPair>                     Invites;                                          		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                NextClubID;                                       		// 0x0080 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOCALCLUBDATA_X));
		}

		return uClassPointer;
	};

	class UClubDetails_X* GetClubForPlayer(struct FUniqueNetId PlayerID);
	class UClubDetails_X* GetClubByID(unsigned long long Id);
	void Save();
	void Load();
};

// Class ProjectX.__LocalClubData_X__GetClubByID_C7C2F4A0495A98D21389729FAF40BDEA
// 0x0008 (0x0060 - 0x0068)
class U__LocalClubData_X__GetClubByID_C7C2F4A0495A98D21389729FAF40BDEA : public UObject
{
public:
	unsigned long long                                 Id;                                               		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___LOCALCLUBDATA_X__GETCLUBBYID_C7C2F4A0495A98D21389729FAF40BDEA));
		}

		return uClassPointer;
	};

	bool __LocalClubData_X__GetClubByID_C7C2F4A0495A98D21389729FAF40BDEA(class UClubDetails_X* C);
};

// Class ProjectX.__LocalClubData_X__GetClubForPlayer_AC85E071401BDC91A4B70CB7DCFD75FA
// 0x0048 (0x0060 - 0x00A8)
class U__LocalClubData_X__GetClubForPlayer_AC85E071401BDC91A4B70CB7DCFD75FA : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___LOCALCLUBDATA_X__GETCLUBFORPLAYER_AC85E071401BDC91A4B70CB7DCFD75FA));
		}

		return uClassPointer;
	};

	bool __LocalClubData_X__GetClubForPlayer_AC85E071401BDC91A4B70CB7DCFD75FA(class UClubDetails_X* C);
};

// Class ProjectX.__OnlineClubCache_X__GetClubDetails_481A79034AF59C9DEBC25AA9414310C5
// 0x0008 (0x0060 - 0x0068)
class U__OnlineClubCache_X__GetClubDetails_481A79034AF59C9DEBC25AA9414310C5 : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINECLUBCACHE_X__GETCLUBDETAILS_481A79034AF59C9DEBC25AA9414310C5));
		}

		return uClassPointer;
	};

	bool __OnlineClubCache_X__GetClubDetails_481A79034AF59C9DEBC25AA9414310C5(class UClubDetails_X* C);
};

// Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_19530D1A4CF5E1EB765F5BB6CE6D5525
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineClubCache_X__GetPlayerClubDetails_19530D1A4CF5E1EB765F5BB6CE6D5525 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINECLUBCACHE_X__GETPLAYERCLUBDETAILS_19530D1A4CF5E1EB765F5BB6CE6D5525));
		}

		return uClassPointer;
	};

	bool __OnlineClubCache_X__GetPlayerClubDetails_19530D1A4CF5E1EB765F5BB6CE6D5525(class UClubDetails_X* C);
};

// Class ProjectX.OnlineClubManager_X
// 0x0020 (0x0060 - 0x0080)
class UOnlineClubManager_X : public UObject
{
public:
	class UPsyNetConnection_X*                         Connection;                                       		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventClubChanged__Delegate;                     		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINECLUBMANAGER_X));
		}

		return uClassPointer;
	};

	void OnLeaveClub(unsigned long long ClubID);
	void OnClubChanged(class UClubDetails_X* Club);
	class UAsyncTask* LeaveClub(unsigned long long ClubID);
	class UAsyncTask* RejectClubInvite(unsigned long long ClubID);
	class UTAsyncResult__ClubDetails_X* AcceptClubInvite(unsigned long long ClubID);
	class UTAsyncResult__array_ClubInvite_X* SyncClubInvites();
	class UTAsyncResult__ClubDetails_X* SetClubOwner(struct FUniqueNetId NewOwner);
	class UTAsyncResult__ClubDetails_X* RemoveFromClub(struct FUniqueNetId PlayerID);
	class UAsyncTask* InviteToClub(struct FUniqueNetId PlayerID);
	class UTAsyncResult__ClubDetails_X* UpdateClubMotD(struct FString Text);
	class UTAsyncResult__ClubDetails_X* UpdateClubColors(int Primary, int Accent);
	class UTAsyncResult__ClubDetails_X* UpdateClubName(struct FString ClubName, struct FString ClubTag);
	void OnClubCreated(class UClubDetails_X* Club, class UError* ActionError);
	class UTAsyncResult__ClubDetails_X* CreateClub(class UClubSettings_X* Settings);
	void EventClubChanged(class UOnlineClubManager_X* Manager, unsigned long long ClubID);
};

// Class ProjectX.RPC_ClubDetailsBase_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_ClubDetailsBase_X : public URPC_X
{
public:
	class UClubDetails_X*                              ClubDetails;                                      		// 0x00E8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTAsyncResult__ClubDetails_X*                ClubDetailsTask;                                  		// 0x00F0 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CLUBDETAILSBASE_X));
		}

		return uClassPointer;
	};

	class UClubDetails_X* __RPC_ClubDetailsBase_X__CreateClubDetailsTask_844E0DFE4BB472C04AF647B7E3C6C534();
	class UTAsyncResult__ClubDetails_X* CreateClubDetailsTask();
};

// Class ProjectX.RPC_CreateClub_X
// 0x0028 (0x00F8 - 0x0120)
class URPC_CreateClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                         		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                          		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PrimaryColor;                                     		// 0x0118 (0x0004) [0x0000000000000000]               
	int                                                AccentColor;                                      		// 0x011C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CREATECLUB_X));
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_CreateClub_X* SetSettings(class UClubSettings_X* Settings);
};

// Class ProjectX.RPC_UpdateClubName_X
// 0x0020 (0x00F8 - 0x0118)
class URPC_UpdateClubName_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                         		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                          		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATECLUBNAME_X));
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubName_X* SetName(struct FString InName, struct FString InTag);
};

// Class ProjectX.RPC_UpdateClubColors_X
// 0x0008 (0x00F8 - 0x0100)
class URPC_UpdateClubColors_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                PrimaryColor;                                     		// 0x00F8 (0x0004) [0x0000000000000000]               
	int                                                AccentColor;                                      		// 0x00FC (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATECLUBCOLORS_X));
		}

		return uClassPointer;
	};

	class URPC_UpdateClubColors_X* SetColors(int InPrimary, int InAccent);
};

// Class ProjectX.RPC_UpdateClubMotD_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_UpdateClubMotD_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     MotD;                                             		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATECLUBMOTD_X));
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubMotD_X* SetMotD(struct FString InMotD);
};

// Class ProjectX.RPC_InviteToClub_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_InviteToClub_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_INVITETOCLUB_X));
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_InviteToClub_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RemoveFromClub_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_RemoveFromClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_REMOVEFROMCLUB_X));
		}

		return uClassPointer;
	};

	class URPC_RemoveFromClub_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_SetClubOwner_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_SetClubOwner_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETCLUBOWNER_X));
		}

		return uClassPointer;
	};

	class URPC_SetClubOwner_X* SetNewOwner(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetClubInvites_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetClubInvites_X : public URPC_X
{
public:
	TArray<class UClubInvite_X*>                       ClubInvites;                                      		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETCLUBINVITES_X));
		}

		return uClassPointer;
	};

	TArray<class UClubInvite_X*> __RPC_GetClubInvites_X__CreateClubInvitesTask_A3CBA02B4167C63E9B4A6E88DF3FB69A();
	class UTAsyncResult__array_ClubInvite_X* CreateClubInvitesTask();
};

// Class ProjectX.RPC_AcceptClubInvite_X
// 0x0004 (0x00F8 - 0x00FC)
class URPC_AcceptClubInvite_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                           		// 0x00F8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_ACCEPTCLUBINVITE_X));
		}

		return uClassPointer;
	};

	class URPC_AcceptClubInvite_X* SetClubID(unsigned long long InClubID);
};

// Class ProjectX.RPC_RejectClubInvite_X
// 0x0004 (0x00E8 - 0x00EC)
class URPC_RejectClubInvite_X : public URPC_X
{
public:
	int                                                ClubID;                                           		// 0x00E8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_REJECTCLUBINVITE_X));
		}

		return uClassPointer;
	};

	class URPC_RejectClubInvite_X* SetClubID(unsigned long long InClubID);
};

// Class ProjectX.__OnlineClubManager_X__LeaveClub_D4A4241349CEDEBE5E1103922E7B1968
// 0x0008 (0x0060 - 0x0068)
class U__OnlineClubManager_X__LeaveClub_D4A4241349CEDEBE5E1103922E7B1968 : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINECLUBMANAGER_X__LEAVECLUB_D4A4241349CEDEBE5E1103922E7B1968));
		}

		return uClassPointer;
	};

	void __OnlineClubManager_X__LeaveClub_D4A4241349CEDEBE5E1103922E7B1968();
};

// Class ProjectX.RPC_LeaveClub_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_LeaveClub_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_LEAVECLUB_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetClubDetails_X
// 0x0004 (0x00F8 - 0x00FC)
class URPC_GetClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                           		// 0x00F8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETCLUBDETAILS_X));
		}

		return uClassPointer;
	};

	class URPC_GetClubDetails_X* SetClubID(unsigned long long InClubID);
};

// Class ProjectX.RPC_GetPlayerClubDetails_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_GetPlayerClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETPLAYERCLUBDETAILS_X));
		}

		return uClassPointer;
	};

	class URPC_GetPlayerClubDetails_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_0324D9554246A5A93C80608CB1D86296
// 0x0010 (0x0060 - 0x0070)
class U__OnlineClubProvider_X__SyncClubDetails_0324D9554246A5A93C80608CB1D86296 : public UObject
{
public:
	unsigned long long                                 ClubID;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
	class URPC_GetClubDetails_X*                       RPC;                                              		// 0x0068 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINECLUBPROVIDER_X__SYNCCLUBDETAILS_0324D9554246A5A93C80608CB1D86296));
		}

		return uClassPointer;
	};

	void __OnlineClubProvider_X__SyncClubDetails_C59E790648E3CCE316D79782A221744A(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncClubDetails_0324D9554246A5A93C80608CB1D86296(class URPC_GetClubDetails_X* R);
};

// Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_476EBD064D375CDB320C2EA7F1B9400C
// 0x0008 (0x0060 - 0x0068)
class U__OnlineClubProvider_X__HandleClubSynced_476EBD064D375CDB320C2EA7F1B9400C : public UObject
{
public:
	class URPC_GetClubDetails_X*                       RPC;                                              		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINECLUBPROVIDER_X__HANDLECLUBSYNCED_476EBD064D375CDB320C2EA7F1B9400C));
		}

		return uClassPointer;
	};

	void __OnlineClubProvider_X__HandleClubSynced_476EBD064D375CDB320C2EA7F1B9400C(struct FClubMember Member);
};

// Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_60252FCD46010804C1ACCFBD2C038889
// 0x0050 (0x0060 - 0x00B0)
class U__OnlineClubProvider_X__SyncPlayerClubDetails_60252FCD46010804C1ACCFBD2C038889 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class URPC_GetPlayerClubDetails_X*                 RPC;                                              		// 0x00A8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___ONLINECLUBPROVIDER_X__SYNCPLAYERCLUBDETAILS_60252FCD46010804C1ACCFBD2C038889));
		}

		return uClassPointer;
	};

	void __OnlineClubProvider_X__SyncPlayerClubDetails_E5D3139C47488FC08D5BC1A56894F02A(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncPlayerClubDetails_60252FCD46010804C1ACCFBD2C038889(class URPC_GetPlayerClubDetails_X* R);
};

// Class ProjectX.OnlineClubServerList_X
// 0x0020 (0x0060 - 0x0080)
class UOnlineClubServerList_X : public UObject
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                          		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class URPC_GetClubPrivateMatches_X*                RPC;                                              		// 0x0070 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                            		// 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ONLINECLUBSERVERLIST_X));
		}

		return uClassPointer;
	};

	void __OnlineClubServerList_X__Refresh_9D7F3AB045F28C5B5CE42AAB1033CBB5(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_6BF3FA7348854B9525B9BDBBDF28AE60(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_4DF9FADD4F2499B49BE281A1125FC4BF(class URPC_X* _);
	class UAsyncTask* Refresh();
};

// Class ProjectX.RPC_GetClubPrivateMatches_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetClubPrivateMatches_X : public URPC_X
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                          		// 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETCLUBPRIVATEMATCHES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlayerTitleConfig_X
// 0x0030 (0x0078 - 0x00A8)
class UPlayerTitleConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FPlayerTitleCategory>                Categories;                                       		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPlayerTitleData>                    Titles;                                           		// 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     DefaultColorHexCode;                              		// 0x0098 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLAYERTITLECONFIG_X));
		}

		return uClassPointer;
	};

	struct FPlayerTitleData InitTitleColors(struct FPlayerTitleData Data);
	struct FPlayerTitleData GetTitleData(struct FName TitleId);
	struct FPlayerTitleCategory GetCategory(struct FName CategoryID);
	void Apply();
};

// Class ProjectX.RPC_FilterContent_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_FilterContent_X : public URPC_X
{
public:
	TArray<struct FString>                             Content;                                          		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             FilteredContent;                                  		// 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     Callbacks;                                        		// 0x0108 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                        		// 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_FILTERCONTENT_X));
		}

		return uClassPointer;
	};

	class URPC_FilterContent_X* AddComment(struct FString Comment, struct FScriptDelegate Callback, struct FUniqueNetId PlayerID);
};

// Class ProjectX.RPC_PartySendInvite_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_PartySendInvite_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                InviteeID;                                        		// 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_PARTYSENDINVITE_X));
		}

		return uClassPointer;
	};

	class URPC_PartySendInvite_X* Invite(struct FUniqueNetId InInviteeUserId);
};

// Class ProjectX.RPC_SetClubMotD_X
// 0x0010 (0x0120 - 0x0130)
class URPC_SetClubMotD_X : public URPC_CreateClub_X
{
public:
	struct FString                                     Text;                                             		// 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETCLUBMOTD_X));
		}

		return uClassPointer;
	};

	class URPC_SetClubMotD_X* SetText(struct FString InText);
};

// Class ProjectX.RPC_SetRichPresence_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_SetRichPresence_X : public URPC_X
{
public:
	struct FString                                     PresenceInfo;                                     		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceState;                                    		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SETRICHPRESENCE_X));
		}

		return uClassPointer;
	};

	class URPC_SetRichPresence_X* SetPresenceState(struct FString InState);
	class URPC_SetRichPresence_X* SetPresenceInfo(struct FString InInfo);
};

// Class ProjectX.RPC_UpdateClub_X
// 0x0000 (0x0120 - 0x0120)
class URPC_UpdateClub_X : public URPC_CreateClub_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_UPDATECLUB_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__ServerPlayerTracker_X__AddPlayer_98BF7EE04B1E7F3A46F565953AD034CF
// 0x0048 (0x0060 - 0x00A8)
class U__ServerPlayerTracker_X__AddPlayer_98BF7EE04B1E7F3A46F565953AD034CF : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___SERVERPLAYERTRACKER_X__ADDPLAYER_98BF7EE04B1E7F3A46F565953AD034CF));
		}

		return uClassPointer;
	};

	bool __ServerPlayerTracker_X__AddPlayer_98BF7EE04B1E7F3A46F565953AD034CF(struct FUniqueNetId P);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_D4E8882B4C590DC1D56973A9A5E89677
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResult_D4E8882B4C590DC1D56973A9A5E89677 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_CLUBINVITE_X__NOTIFYONRESULT_D4E8882B4C590DC1D56973A9A5E89677));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__NotifyOnResult_D4E8882B4C590DC1D56973A9A5E89677();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_8AFAACFE49B5C2660FB959B45EAABA4D
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_8AFAACFE49B5C2660FB959B45EAABA4D : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_CLUBINVITE_X__NOTIFYONRESULTCOMPLETE_8AFAACFE49B5C2660FB959B45EAABA4D));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_8AFAACFE49B5C2660FB959B45EAABA4D(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_6409453D44F897FAB961DC9A769DDAA2
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_ClubInvite_X__SetResultWhen_6409453D44F897FAB961DC9A769DDAA2 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_CLUBINVITE_X__SETRESULTWHEN_6409453D44F897FAB961DC9A769DDAA2));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__SetResultWhen_6409453D44F897FAB961DC9A769DDAA2();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_3503FB7C404F06EFD76450B87A2D51CB
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__array_ClubInvite_X__Copy_3503FB7C404F06EFD76450B87A2D51CB : public UObject
{
public:
	class UTAsyncResult__array_ClubInvite_X*           Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_CLUBINVITE_X__COPY_3503FB7C404F06EFD76450B87A2D51CB));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__Copy_3503FB7C404F06EFD76450B87A2D51CB(TArray<class UClubInvite_X*> R, class UError* E);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_0F943472473DD3C328E2E7B764AF6903
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_0F943472473DD3C328E2E7B764AF6903 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__NOTIFYONRESULT_0F943472473DD3C328E2E7B764AF6903));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResult_0F943472473DD3C328E2E7B764AF6903();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_74F01EC04F19B9D880BFC19632EF2993
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_74F01EC04F19B9D880BFC19632EF2993 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__NOTIFYONRESULTCOMPLETE_74F01EC04F19B9D880BFC19632EF2993));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_74F01EC04F19B9D880BFC19632EF2993(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_0ECA5C644151892C2DB05EBEC6CC75A8
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_LanServerRecord_X__SetResultWhen_0ECA5C644151892C2DB05EBEC6CC75A8 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__SETRESULTWHEN_0ECA5C644151892C2DB05EBEC6CC75A8));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__SetResultWhen_0ECA5C644151892C2DB05EBEC6CC75A8();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_9D75627249C45AD91EB252A58040A628
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__array_LanServerRecord_X__Copy_9D75627249C45AD91EB252A58040A628 : public UObject
{
public:
	class UTAsyncResult__array_LanServerRecord_X*      Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__ARRAY_LANSERVERRECORD_X__COPY_9D75627249C45AD91EB252A58040A628));
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__Copy_9D75627249C45AD91EB252A58040A628(TArray<class ULanServerRecord_X*> R, class UError* E);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_B49ADB6D43D5B068D2DCD7BC1322C9C1
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__ClubDetails_X__NotifyOnResult_B49ADB6D43D5B068D2DCD7BC1322C9C1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__CLUBDETAILS_X__NOTIFYONRESULT_B49ADB6D43D5B068D2DCD7BC1322C9C1));
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__NotifyOnResult_B49ADB6D43D5B068D2DCD7BC1322C9C1();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_2A229B4E482904C3DD8DF8A8196AE5B3
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_2A229B4E482904C3DD8DF8A8196AE5B3 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__CLUBDETAILS_X__NOTIFYONRESULTCOMPLETE_2A229B4E482904C3DD8DF8A8196AE5B3));
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__NotifyOnResultComplete_2A229B4E482904C3DD8DF8A8196AE5B3(class UError* Err);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_F1528D494E893E1E4F775F97DA08BFD4
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__ClubDetails_X__SetResultWhen_F1528D494E893E1E4F775F97DA08BFD4 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__CLUBDETAILS_X__SETRESULTWHEN_F1528D494E893E1E4F775F97DA08BFD4));
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__SetResultWhen_F1528D494E893E1E4F775F97DA08BFD4();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_AB6FDCF342AB8363A331939034CA3BAD
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__ClubDetails_X__Copy_AB6FDCF342AB8363A331939034CA3BAD : public UObject
{
public:
	class UTAsyncResult__ClubDetails_X*                Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__CLUBDETAILS_X__COPY_AB6FDCF342AB8363A331939034CA3BAD));
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__Copy_AB6FDCF342AB8363A331939034CA3BAD(class UClubDetails_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_60B5220448AF19E0B01215A6A4BA2666
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResult_60B5220448AF19E0B01215A6A4BA2666 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETCLIENTSERVICE_X__NOTIFYONRESULT_60B5220448AF19E0B01215A6A4BA2666));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__NotifyOnResult_60B5220448AF19E0B01215A6A4BA2666();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_5CD538AE4E991FF83F0DE898749B000F
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_5CD538AE4E991FF83F0DE898749B000F : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETCLIENTSERVICE_X__NOTIFYONRESULTCOMPLETE_5CD538AE4E991FF83F0DE898749B000F));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_5CD538AE4E991FF83F0DE898749B000F(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_3C367D1C4F6BACD3567CDA925B8BE799
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetClientService_X__SetResultWhen_3C367D1C4F6BACD3567CDA925B8BE799 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETCLIENTSERVICE_X__SETRESULTWHEN_3C367D1C4F6BACD3567CDA925B8BE799));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__SetResultWhen_3C367D1C4F6BACD3567CDA925B8BE799();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_0DD3A38B4E1C7697DE99FA9A579AED2C
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__PsyNetClientService_X__Copy_0DD3A38B4E1C7697DE99FA9A579AED2C : public UObject
{
public:
	class UTAsyncResult__PsyNetClientService_X*        Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETCLIENTSERVICE_X__COPY_0DD3A38B4E1C7697DE99FA9A579AED2C));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__Copy_0DD3A38B4E1C7697DE99FA9A579AED2C(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_64E58EC24DC412C3045D80A439C0A932
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResult_64E58EC24DC412C3045D80A439C0A932 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETMESSAGE_X__NOTIFYONRESULT_64E58EC24DC412C3045D80A439C0A932));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__NotifyOnResult_64E58EC24DC412C3045D80A439C0A932();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_A2E716014B98A52154029C8EB4E2B361
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_A2E716014B98A52154029C8EB4E2B361 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETMESSAGE_X__NOTIFYONRESULTCOMPLETE_A2E716014B98A52154029C8EB4E2B361));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_A2E716014B98A52154029C8EB4E2B361(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_EA2067BD4DD94B135E29D58F8E6E885E
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetMessage_X__SetResultWhen_EA2067BD4DD94B135E29D58F8E6E885E : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETMESSAGE_X__SETRESULTWHEN_EA2067BD4DD94B135E29D58F8E6E885E));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__SetResultWhen_EA2067BD4DD94B135E29D58F8E6E885E();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_77EA16904C0F8F6E248FAA9A680378E8
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__PsyNetMessage_X__Copy_77EA16904C0F8F6E248FAA9A680378E8 : public UObject
{
public:
	class UTAsyncResult__PsyNetMessage_X*              Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYNETMESSAGE_X__COPY_77EA16904C0F8F6E248FAA9A680378E8));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__Copy_77EA16904C0F8F6E248FAA9A680378E8(class UPsyNetMessage_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__Texture2DDynamic
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__Texture2DDynamic : public UAsyncTask
{
public:
	class UTexture2DDynamic*                           Result;                                           		// 0x00D0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                          		// 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;                  		// 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                       		// 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TASYNCRESULT__TEXTURE2DDYNAMIC));
		}

		return uClassPointer;
	};

	class UTAsyncResult__Texture2DDynamic* CreateResultError(class UError* InError);
	class UTAsyncResult__Texture2DDynamic* CreateResult(class UTexture2DDynamic* InResult);
	class UTAsyncResult__Texture2DDynamic* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__Texture2DDynamic* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__Texture2DDynamic* eventSetResult(class UTexture2DDynamic* InResult, class UError* InError);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResult(struct FScriptDelegate Callback);
	class UTexture2DDynamic* ResultDelegate();
	void EventResultComplete(class UTexture2DDynamic* OutResult, class UError* OutError);
	void EventResult(class UTexture2DDynamic* OutResult);
};

// Class ProjectX.PartyMessage_GetPlatformParty_X
// 0x0000 (0x00A8 - 0x00A8)
class UPartyMessage_GetPlatformParty_X : public UPartyMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_GETPLATFORMPARTY_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PartyMessage_GetPlatformPartyResponse_X
// 0x0058 (0x00A8 - 0x0100)
class UPartyMessage_GetPlatformPartyResponse_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                  		// 0x00A8 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                OriginalSender;                                   		// 0x00B8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PARTYMESSAGE_GETPLATFORMPARTYRESPONSE_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PartySequence_CreateParty_X__CreateParty_553ACEE047F52496B0778FB1E2C4B8D9
// 0x0019 (0x0060 - 0x0079)
class U__PartySequence_CreateParty_X__CreateParty_553ACEE047F52496B0778FB1E2C4B8D9 : public UObject
{
public:
	TArray<struct FLobbyMetaData>                      InitialSettings;                                  		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                LocalPlayerNum;                                   		// 0x0070 (0x0004) [0x0000000000000000]               
	int                                                MaxPlayers;                                       		// 0x0074 (0x0004) [0x0000000000000000]               
	unsigned char                                      Type;                                             		// 0x0078 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PARTYSEQUENCE_CREATEPARTY_X__CREATEPARTY_553ACEE047F52496B0778FB1E2C4B8D9));
		}

		return uClassPointer;
	};

	void __PartySequence_CreateParty_X__CreateParty_553ACEE047F52496B0778FB1E2C4B8D9(class URPC_PartyCreate_X* RPC);
};

// Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_5D013A6F40FC1FC01E3712A207F613B0
// 0x0058 (0x0060 - 0x00B8)
class U__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_5D013A6F40FC1FC01E3712A207F613B0 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                        		// 0x0060 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                FriendId;                                         		// 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PARTYSEQUENCE_INVITEDTOPLATFORMPARTY_X__HANDLEPLAYERINVITED_5D013A6F40FC1FC01E3712A207F613B0));
		}

		return uClassPointer;
	};

	void __PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_5D013A6F40FC1FC01E3712A207F613B0();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8E45D37D4D177ABE3C8EA1AD02462806
// 0x0058 (0x0060 - 0x00B8)
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8E45D37D4D177ABE3C8EA1AD02462806 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                        		// 0x0060 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                InviterId;                                        		// 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PARTYSEQUENCE_INVITEDTOPSYNETPARTY_X__HANDLEPLAYERINVITEDPROMPT_8E45D37D4D177ABE3C8EA1AD02462806));
		}

		return uClassPointer;
	};

	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_8E45D37D4D177ABE3C8EA1AD02462806();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_D1E31EC9403DF15573ED8894DC6CC62A
// 0x0058 (0x0060 - 0x00B8)
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_D1E31EC9403DF15573ED8894DC6CC62A : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                        		// 0x0060 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                InviterId;                                        		// 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PARTYSEQUENCE_INVITEDTOPSYNETPARTY_X__HANDLEPLAYERINVITEDSILENT_D1E31EC9403DF15573ED8894DC6CC62A));
		}

		return uClassPointer;
	};

	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_D1E31EC9403DF15573ED8894DC6CC62A();
};

// Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_F9B4B0EB4FB2989D435BA88A8EF79174
// 0x0008 (0x0060 - 0x0068)
class U__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_F9B4B0EB4FB2989D435BA88A8EF79174 : public UObject
{
public:
	class UPartyMessage_GetPlatformParty_X*            Message;                                          		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___PARTYSEQUENCE_JOINPARTY_X__HANDLEGETPLATFORMPARTYMESSAGE_F9B4B0EB4FB2989D435BA88A8EF79174));
		}

		return uClassPointer;
	};

	bool __PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_F9B4B0EB4FB2989D435BA88A8EF79174(struct FPartyMember M);
};

// Class ProjectX.PsyTagErrors_X
// 0x0030 (0x0080 - 0x00B0)
class UPsyTagErrors_X : public UErrorList
{
public:
	class UErrorType*                                  PsyTagProfane;                                    		// 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagUnavailable;                                		// 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagInvalidCharacters;                          		// 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagInvalidWhitespace;                          		// 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagInvalidParameters;                          		// 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagCrossPlatformDisabled;                      		// 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYTAGERRORS_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyTagSearchResult_X
// 0x0094 (0x0060 - 0x00F4)
class UPsyTagSearchResult_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                           		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 PsyTagLastUpdatedTime;                            		// 0x00D0 (0x0008) [0x0000000000000000]               
	struct FString                                     PresenceState;                                    		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 LastLoginTime;                                    		// 0x00E8 (0x0008) [0x0000000000000000]               
	int                                                NumFriendsInCommon;                               		// 0x00F0 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PSYTAGSEARCHRESULT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_SearchPsyTag_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_SearchPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                       		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PsyTagCode;                                       		// 0x00F8 (0x0004) [0x0000000000000000]               
	int                                                PageIndex;                                        		// 0x00FC (0x0004) [0x0000000000000000]               
	int                                                PageSize;                                         		// 0x0100 (0x0004) [0x0000000000000000]               
	struct FString                                     SortType;                                         		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                TotalRows;                                        		// 0x0118 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<class UPsyTagSearchResult_X*>               MatchedPlayers;                                   		// 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_SEARCHPSYTAG_X));
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_SearchPsyTag_X* SetPage(int InPage);
	class URPC_SearchPsyTag_X* SetTag(struct FString InName, int InCode);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_FDCEEEAB41ABE96708C1D2A830D4DC9D
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__Texture2DDynamic__NotifyOnResult_FDCEEEAB41ABE96708C1D2A830D4DC9D : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__TEXTURE2DDYNAMIC__NOTIFYONRESULT_FDCEEEAB41ABE96708C1D2A830D4DC9D));
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__NotifyOnResult_FDCEEEAB41ABE96708C1D2A830D4DC9D();
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_B46BE74A413A423CA22B30B82B86044C
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_B46BE74A413A423CA22B30B82B86044C : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__TEXTURE2DDYNAMIC__NOTIFYONRESULTCOMPLETE_B46BE74A413A423CA22B30B82B86044C));
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_B46BE74A413A423CA22B30B82B86044C(class UError* Err);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_445F5099439B4EF55470F1865FC46F19
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__Texture2DDynamic__SetResultWhen_445F5099439B4EF55470F1865FC46F19 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__TEXTURE2DDYNAMIC__SETRESULTWHEN_445F5099439B4EF55470F1865FC46F19));
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__SetResultWhen_445F5099439B4EF55470F1865FC46F19();
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_20FC6D1A471F253FA061549452671F2A
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__Texture2DDynamic__Copy_20FC6D1A471F253FA061549452671F2A : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__TEXTURE2DDYNAMIC__COPY_20FC6D1A471F253FA061549452671F2A));
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__Copy_20FC6D1A471F253FA061549452671F2A(class UTexture2DDynamic* R, class UError* E);
};

// Class ProjectX.WebImageDownload_X
// 0x0028 (0x0060 - 0x0088)
class UWebImageDownload_X : public UObject
{
public:
	struct FString                                     URL;                                              		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bSRGB : 1;                                        		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2DDynamic*                           Texture;                                          		// 0x0078 (0x0008) [0x0000000000000000]               
	class UTAsyncResult__Texture2DDynamic*             AsyncResult;                                      		// 0x0080 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_WEBIMAGEDOWNLOAD_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__WebImageCache_X__SyncUncachedImage_5E1B700147E24041B01038A4019D532B
// 0x0008 (0x0060 - 0x0068)
class U__WebImageCache_X__SyncUncachedImage_5E1B700147E24041B01038A4019D532B : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Task;                                             		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___WEBIMAGECACHE_X__SYNCUNCACHEDIMAGE_5E1B700147E24041B01038A4019D532B));
		}

		return uClassPointer;
	};

	void __WebImageCache_X__SyncUncachedImage_5E1B700147E24041B01038A4019D532B(struct FOnlineImageDownload ImageInfo);
};

// Class ProjectX.__WebImageCache_X__StartSync_46E4A0C543D955BB7F82E0836A59AA55
// 0x0008 (0x0060 - 0x0068)
class U__WebImageCache_X__StartSync_46E4A0C543D955BB7F82E0836A59AA55 : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___WEBIMAGECACHE_X__STARTSYNC_46E4A0C543D955BB7F82E0836A59AA55));
		}

		return uClassPointer;
	};

	void __WebImageCache_X__StartSync_46E4A0C543D955BB7F82E0836A59AA55(class UCachedWebData_X* Data);
};

// Class ProjectX.__WebImageCache_X__HandleImageData_2A752F294C0E7D0231C951BB02A9E2E0
// 0x0008 (0x0060 - 0x0068)
class U__WebImageCache_X__HandleImageData_2A752F294C0E7D0231C951BB02A9E2E0 : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___WEBIMAGECACHE_X__HANDLEIMAGEDATA_2A752F294C0E7D0231C951BB02A9E2E0));
		}

		return uClassPointer;
	};

	void __WebImageCache_X__HandleImageData_2A752F294C0E7D0231C951BB02A9E2E0(struct FString _, struct FImageLayout Image);
};

// Class ProjectX.StatusObserver_X
// 0x0040 (0x0060 - 0x00A0)
class UStatusObserver_X : public UObject
{
public:
	TArray<class UTriggerInfo*>                        TriggerTypes;                                     		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UClass*>                              AcceptedTypes;                                    		// 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bInitComplete : 1;                                		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __bInitComplete__ChangeNotify;                    		// 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_STATUSOBSERVER_X));
		}

		return uClassPointer;
	};

	class UTriggerInfo* __StatusObserver_X__Init_2CBE962043BEC5D632917C92BE4F840D(class UClass* T);
	void __bInitComplete__ChangeNotifyFunc();
	void DebugPrintTriggers();
	void DebugPrint();
	bool ObservesTriggerType(class UStatusTrigger_X* InTrigger);
	void UpdateTriggers(class UClass* InType);
	void UnRegisterTriggers(TArray<class UStatusTrigger_X*>& InTriggers);
	void RegisterTriggers(TArray<class UStatusTrigger_X*>& InTriggers);
	void AddCallback(class UClass* InType, struct FScriptDelegate InCallback);
	class UTriggerInfo* FindByAcceptedType(class UClass* InType);
	void SetInitComplete();
	void Init(class ULocalPlayer_X* LP);
};

// Class ProjectX.TriggerInfo
// 0x0048 (0x0060 - 0x00A8)
class UTriggerInfo : public UObject
{
public:
	class UClass*                                      AcceptedType;                                     		// 0x0060 (0x0008) [0x0000000000000000]               
	TArray<class UStatusTrigger_X*>                    Triggers;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateTrigger__Delegate;                        		// 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_TRIGGERINFO));
		}

		return uClassPointer;
	};

	class UTriggerInfo* SetType(class UClass* InType);
	void UpdateTrigger(class UStatusTrigger_X* InTrigger);
};

// Class ProjectX.StatusTrigger_X
// 0x0020 (0x0060 - 0x0080)
class UStatusTrigger_X : public UObject
{
public:
	unsigned long                                      bTriggered : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             EventPropertyChange;                              		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_STATUSTRIGGER_X));
		}

		return uClassPointer;
	};

	void EventPropertyChangeFunc();
	void EvaluateCondition(unsigned long InConditionalValue);
	bool IsTriggered();
	void ToggleTriggered();
	void DebugPrintInfo(struct FString AddedInfo);
	void DebugPrint();
};

// Class ProjectX.__StatusObserver_X__FindByAcceptedType_3D2F0AD045787FF49D08BF88B8A8A5EE
// 0x0008 (0x0060 - 0x0068)
class U__StatusObserver_X__FindByAcceptedType_3D2F0AD045787FF49D08BF88B8A8A5EE : public UObject
{
public:
	class UClass*                                      InType;                                           		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___STATUSOBSERVER_X__FINDBYACCEPTEDTYPE_3D2F0AD045787FF49D08BF88B8A8A5EE));
		}

		return uClassPointer;
	};

	bool __StatusObserver_X__FindByAcceptedType_3D2F0AD045787FF49D08BF88B8A8A5EE(class UTriggerInfo* TT);
};

// Class ProjectX.__StatusObserver_X__ObservesTriggerType_3A71FC53434579A6BF71F28D669CEB48
// 0x0008 (0x0060 - 0x0068)
class U__StatusObserver_X__ObservesTriggerType_3A71FC53434579A6BF71F28D669CEB48 : public UObject
{
public:
	class UStatusTrigger_X*                            InTrigger;                                        		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___STATUSOBSERVER_X__OBSERVESTRIGGERTYPE_3A71FC53434579A6BF71F28D669CEB48));
		}

		return uClassPointer;
	};

	bool __StatusObserver_X__ObservesTriggerType_3A71FC53434579A6BF71F28D669CEB48(class UClass* C);
};

// Class ProjectX.__RegionConfig_X__GetSubRegions_E65334504E3A3444C498AE9B2BE32718
// 0x0010 (0x0060 - 0x0070)
class U__RegionConfig_X__GetSubRegions_E65334504E3A3444C498AE9B2BE32718 : public UObject
{
public:
	struct FString                                     SuperRegionID;                                    		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___REGIONCONFIG_X__GETSUBREGIONS_E65334504E3A3444C498AE9B2BE32718));
		}

		return uClassPointer;
	};

	bool __RegionConfig_X__GetSubRegions_E65334504E3A3444C498AE9B2BE32718(class URegion_X* R);
};

// Class ProjectX.RPC_ClearClubInvites_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_ClearClubInvites_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CLEARCLUBINVITES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_ClearFriendInvites_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_ClearFriendInvites_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_CLEARFRIENDINVITES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_FileStorage_GetFileDownloadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                             		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                              		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_FILESTORAGE_GETFILEDOWNLOADURL_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X
// 0x0030 (0x00E8 - 0x0118)
class URPC_FileStorage_GetFileUploadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                             		// 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ContentType;                                      		// 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                              		// 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_FILESTORAGE_GETFILEUPLOADURL_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_65DD4499400E1B37F006A3B03BB98B9C
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_65DD4499400E1B37F006A3B03BB98B9C : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYTAGCHECKRESULT_X__NOTIFYONRESULT_65DD4499400E1B37F006A3B03BB98B9C));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_65DD4499400E1B37F006A3B03BB98B9C();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_5E947D3B475E39460AF0C8B09F8A151D
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_5E947D3B475E39460AF0C8B09F8A151D : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYTAGCHECKRESULT_X__NOTIFYONRESULTCOMPLETE_5E947D3B475E39460AF0C8B09F8A151D));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_5E947D3B475E39460AF0C8B09F8A151D(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_4A01DE5E44416E5367772483A2FEA838
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_4A01DE5E44416E5367772483A2FEA838 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYTAGCHECKRESULT_X__SETRESULTWHEN_4A01DE5E44416E5367772483A2FEA838));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__SetResultWhen_4A01DE5E44416E5367772483A2FEA838();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_FD99C02C4008EAFE96EC1CBB8EE02C0E
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__PsyTagCheckResult_X__Copy_FD99C02C4008EAFE96EC1CBB8EE02C0E : public UObject
{
public:
	class UTAsyncResult__PsyTagCheckResult_X*          Instance;                                         		// 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___TASYNCRESULT__PSYTAGCHECKRESULT_X__COPY_FD99C02C4008EAFE96EC1CBB8EE02C0E));
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__Copy_FD99C02C4008EAFE96EC1CBB8EE02C0E(class UPsyTagCheckResult_X* R, class UError* E);
};

// Class ProjectX.ClientNetMetrics_X
// 0x006C (0x0060 - 0x00CC)
class UClientNetMetrics_X : public UObject
{
public:
	float                                              RecordPeriod;                                     		// 0x0060 (0x0004) [0x0000000000000000]               
	float                                              LastRecordTime;                                   		// 0x0064 (0x0004) [0x0000000000000000]               
	unsigned char                                      PrevNetworkNextState;                             		// 0x0068 (0x0001) [0x0000000000000000]               
	struct FNetworkNextStats                           PrevNetworkNextStats;                             		// 0x006C (0x0018) [0x0000000000000000]               
	struct FNetPacketStats                             OldStats;                                         		// 0x0084 (0x001C) [0x0000000000000000]               
	TArray<float>                                      GamePings;                                        		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGameServerPinger_X*                         Pinger;                                           		// 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<float>                                      PsyPings;                                         		// 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                PsyPacketsLost;                                   		// 0x00C8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_CLIENTNETMETRICS_X));
		}

		return uClassPointer;
	};

	void __ClientNetMetrics_X__StartRecording_E59F59B24EBDD907C324D9827A1E166F(class UGameServerPinger_X* _);
	void __ClientNetMetrics_X__StartRecording_C38C8A2E41C0240B1BD843B18CE658FA(class UGameServerPinger_X* _, float DelaySeconds);
	struct FPingStats CalcPingStats(TArray<float>& Pings);
	void Record();
	void RecordTimer();
	void StopRecording();
	void StartRecording();
	void eventConstruct();
};

// Class ProjectX.GameServerPinger_X
// 0x0048 (0x0070 - 0x00B8)
class UGameServerPinger_X : public UComponent
{
public:
	class UBeaconConfig_X*                             Config;                                           		// 0x0070 (0x0008) [0x0000000000000000]               
	struct FName                                       Address;                                          		// 0x0078 (0x0008) [0x0000000000000000]               
	class UUdpPingBeaconClient_X*                      PingBeacon;                                       		// 0x0080 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventPong__Delegate;                            		// 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLost__Delegate;                            		// 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_GAMESERVERPINGER_X));
		}

		return uClassPointer;
	};

	void HandleLost(class UUdpPingBeaconClient_X* _, struct FName __);
	void HandlePong(class UUdpPingBeaconClient_X* _, struct FName __, float DeltaSeconds);
	void SendPing();
	void StopPinging();
	void StartPinging();
	void SetAddress(struct FString InAddress);
	void EventLost(class UGameServerPinger_X* Pinger);
	void EventPong(class UGameServerPinger_X* Pinger, float DeltaSeconds);
};

// Class ProjectX.NetMetricsSystem_X
// 0x0000 (0x0060 - 0x0060)
class UNetMetricsSystem_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMETRICSSYSTEM_X));
		}

		return uClassPointer;
	};

	void Exit(class UPreExitEvent_X* Event, class UClientNetMetrics_X* Metrics);
	void RecordGamePing(class UNetworkPingEvent_X* Ping, class UClientNetMetrics_X* Metrics);
	void PlayerRemoved(class UClientNetMetrics_X* Metrics);
	void PlayerAdded(class UPrimaryPlayer* PP, class UNetMode_DedicatedClient* NetMode, class APlayerReplicationInfo* PRI);
};

// Class ProjectX.NetMode_DedicatedClient
// 0x0000 (0x0060 - 0x0060)
class UNetMode_DedicatedClient : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_DEDICATEDCLIENT));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetworkPingEvent_X
// 0x0004 (0x0060 - 0x0064)
class UNetworkPingEvent_X : public UObject
{
public:
	float                                              DeltaSeconds;                                     		// 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETWORKPINGEVENT_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Authoritative
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Authoritative : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_AUTHORITATIVE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Client
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Client : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_CLIENT));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_DedicatedServer
// 0x0000 (0x0060 - 0x0060)
class UNetMode_DedicatedServer : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_DEDICATEDSERVER));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_ListenServer
// 0x0000 (0x0060 - 0x0060)
class UNetMode_ListenServer : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_LISTENSERVER));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Server
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Server : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_SERVER));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Standalone
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Standalone : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODE_STANDALONE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetModeReplicator_X
// 0x0000 (0x0268 - 0x0268)
class ANetModeReplicator_X : public AReplicationInfo
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODEREPLICATOR_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetModeSystem_X
// 0x0000 (0x0060 - 0x0060)
class UNetModeSystem_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_NETMODESYSTEM_X));
		}

		return uClassPointer;
	};

	void AddModes(TArray<class UClass*>& NetModes);
	void HandleDedicatedClient(class ANetModeReplicator_X* _, class UNetMode_Client* NetMode);
	void LevelUnloaded(class AWorldInfo* WorldInfo);
	void LevelLoaded(class AWorldInfo* WorldInfo);
};

// Class ProjectX.Platform_Console
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Console : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_CONSOLE));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_DedicatedServer
// 0x0000 (0x0060 - 0x0060)
class UPlatform_DedicatedServer : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_DEDICATEDSERVER));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_Dingo
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Dingo : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_DINGO));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_GameClient
// 0x0000 (0x0060 - 0x0060)
class UPlatform_GameClient : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_GAMECLIENT));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_LanServer
// 0x0000 (0x0060 - 0x0060)
class UPlatform_LanServer : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_LANSERVER));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_NNX
// 0x0000 (0x0060 - 0x0060)
class UPlatform_NNX : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_NNX));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_Orbis
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Orbis : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_ORBIS));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_PC
// 0x0000 (0x0060 - 0x0060)
class UPlatform_PC : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_PC));
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_Server
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Server : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORM_SERVER));
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlatformSystem_X
// 0x0000 (0x0060 - 0x0060)
class UPlatformSystem_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_PLATFORMSYSTEM_X));
		}

		return uClassPointer;
	};

	void AddPlatforms(TArray<class UClass*>& Platforms);
	void AddServer(class UClass* PlatformClass);
	void AddConsole(class UClass* PlatformClass);
	void Init(class UGameEngine* Engine);
};

// Class ProjectX.DecodeObjectJson_X
// 0x0018 (0x0070 - 0x0088)
class UDecodeObjectJson_X : public UDecodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                   		// 0x0070 (0x0008) [0x0000000000000000]               
	struct FString                                     Stream;                                           		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DECODEOBJECTJSON_X));
		}

		return uClassPointer;
	};

	void Decode(class UObject* OutObj);
	class UDecodeObjectJson_X* SetStream(struct FString& InStream);
};

// Class ProjectX.DecodeObjectTypes_X
// 0x0000 (0x0060 - 0x0060)
class UDecodeObjectTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DECODEOBJECTTYPES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.DecodeObjectUObject_X
// 0x0018 (0x0070 - 0x0088)
class UDecodeObjectUObject_X : public UDecodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                                 		// 0x0070 (0x0008) [0x0000000000000000]               
	TArray<unsigned char>                              Stream;                                           		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_DECODEOBJECTUOBJECT_X));
		}

		return uClassPointer;
	};

	void Decode(class UObject* OutObj);
	class UDecodeObjectUObject_X* SetStream(int RequestChecksum, struct FString& InStream);
};

// Class ProjectX.EncodeObjectJson_X
// 0x0008 (0x0078 - 0x0080)
class UEncodeObjectJson_X : public UEncodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                   		// 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ENCODEOBJECTJSON_X));
		}

		return uClassPointer;
	};

	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.EncodeObjectUObject_X
// 0x0008 (0x0078 - 0x0080)
class UEncodeObjectUObject_X : public UEncodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                                 		// 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ENCODEOBJECTUOBJECT_X));
		}

		return uClassPointer;
	};

	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.EncodeObjectTypes_X
// 0x0000 (0x0060 - 0x0060)
class UEncodeObjectTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_ENCODEOBJECTTYPES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.LocalizedAccountLinkURL
// 0x0020 (0x0060 - 0x0080)
class ULocalizedAccountLinkURL : public UObject
{
public:
	struct FString                                     Language;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                              		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_LOCALIZEDACCOUNTLINKURL));
		}

		return uClassPointer;
	};

};

// Class ProjectX.__EpicFriendsPlugin_X__AddFriendWithCustomCallback_BE3CBF8B4E1D9FF55ACF93810E3490E7
// 0x0060 (0x0060 - 0x00C0)
class U__EpicFriendsPlugin_X__AddFriendWithCustomCallback_BE3CBF8B4E1D9FF55ACF93810E3490E7 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FriendId;                                         		// 0x0078 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICFRIENDSPLUGIN_X__ADDFRIENDWITHCUSTOMCALLBACK_BE3CBF8B4E1D9FF55ACF93810E3490E7));
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__AddFriendWithCustomCallback_BE3CBF8B4E1D9FF55ACF93810E3490E7(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__RemoveFriend_4C782B554C4BA389686B4FB32CCF6328
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__RemoveFriend_4C782B554C4BA389686B4FB32CCF6328 : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICFRIENDSPLUGIN_X__REMOVEFRIEND_4C782B554C4BA389686B4FB32CCF6328));
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__RemoveFriend_4C782B554C4BA389686B4FB32CCF6328(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__AcceptFriendRequest_437548B2498B420CB580D481324EEFAB
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__AcceptFriendRequest_437548B2498B420CB580D481324EEFAB : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICFRIENDSPLUGIN_X__ACCEPTFRIENDREQUEST_437548B2498B420CB580D481324EEFAB));
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__AcceptFriendRequest_437548B2498B420CB580D481324EEFAB(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__RejectFriendRequest_5216E9AB46B0AEB4651D37B0D1BFC50D
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__RejectFriendRequest_5216E9AB46B0AEB4651D37B0D1BFC50D : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                         		// 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICFRIENDSPLUGIN_X__REJECTFRIENDREQUEST_5216E9AB46B0AEB4651D37B0D1BFC50D));
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__RejectFriendRequest_5216E9AB46B0AEB4651D37B0D1BFC50D(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__SendHTTPRequest_3B7978804DFCA2327E937E9B864364B0
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__SendHTTPRequest_3B7978804DFCA2327E937E9B864364B0 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      ResponseClass;                                    		// 0x0078 (0x0008) [0x0000000000000000]               
	struct FString                                     Verb;                                             		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      AddContentTypeHeader : 1;                         		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     URL;                                              		// 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICFRIENDSPLUGIN_X__SENDHTTPREQUEST_3B7978804DFCA2327E937E9B864364B0));
		}

		return uClassPointer;
	};

	void ____EpicFriendsPlugin_X__SendHTTPRequest_3B7978804DFCA2327E937E9B864364B0____EpicFriendsPlugin_X__SendHTTPRequest_61F24ACC4799723D04B05BB6EAE97688_F4F4250A4CC9EFD10F76E2A9135B04A9(class UWebRequest_X* Response);
	void __EpicFriendsPlugin_X__SendHTTPRequest_61F24ACC4799723D04B05BB6EAE97688(unsigned long bSuccess, struct FString EpicAuthTicket);
	void __EpicFriendsPlugin_X__SendHTTPRequest_3B7978804DFCA2327E937E9B864364B0(class UWebRequest_X* Response);
};

// Class ProjectX.__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_77ED111C415F9BBF476A808CDEA4CF49
// 0x0018 (0x0060 - 0x0078)
class U__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_77ED111C415F9BBF476A808CDEA4CF49 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICFRIENDSPLUGIN_X__GETOUTGOINGFRIENDREQUESTSWITHCUSTOMCALLBACK_77ED111C415F9BBF476A808CDEA4CF49));
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_77ED111C415F9BBF476A808CDEA4CF49(class UEOS_GetAccountsResponse* R, class UError* E);
};

// Class ProjectX.__EpicLogin_X__TriggerAuthTicketDelegate_9A623FFB49AB911F88E7E081333BB472
// 0x0060 (0x0060 - 0x00C0)
class U__EpicLogin_X__TriggerAuthTicketDelegate_9A623FFB49AB911F88E7E081333BB472 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                NetId;                                            		// 0x0078 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICLOGIN_X__TRIGGERAUTHTICKETDELEGATE_9A623FFB49AB911F88E7E081333BB472));
		}

		return uClassPointer;
	};

	void __EpicLogin_X__TriggerAuthTicketDelegate_9A623FFB49AB911F88E7E081333BB472(unsigned long bSuccess, struct FString AuthTicket);
};

// Class ProjectX.__EpicLogin_X__HandleLoginChanged_F308C34B4F9E31D8359C9B9E6ACE0284
// 0x0001 (0x0060 - 0x0061)
class U__EpicLogin_X__HandleLoginChanged_F308C34B4F9E31D8359C9B9E6ACE0284 : public UObject
{
public:
	unsigned char                                      InLocalPlayerNum;                                 		// 0x0060 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICLOGIN_X__HANDLELOGINCHANGED_F308C34B4F9E31D8359C9B9E6ACE0284));
		}

		return uClassPointer;
	};

	void __EpicLogin_X__HandleLoginChanged_F308C34B4F9E31D8359C9B9E6ACE0284();
};

// Class ProjectX.__EpicLogin_X__RequestNintendoAccountAuthorization_126633EB432A085DAE15A6819B61CB3B
// 0x0018 (0x0060 - 0x0078)
class U__EpicLogin_X__RequestNintendoAccountAuthorization_126633EB432A085DAE15A6819B61CB3B : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICLOGIN_X__REQUESTNINTENDOACCOUNTAUTHORIZATION_126633EB432A085DAE15A6819B61CB3B));
		}

		return uClassPointer;
	};

	void __EpicLogin_X__RequestNintendoAccountAuthorization_126633EB432A085DAE15A6819B61CB3B(struct FString NintendoAccountToken);
};

// Class ProjectX.__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_B2D9D53A4F2E41963EC75F92DD0B74AE
// 0x0018 (0x0060 - 0x0078)
class U__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_B2D9D53A4F2E41963EC75F92DD0B74AE : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                         		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX___EPICLOGIN_X__UPDATETWOFACTORAUTHENTICATIONSTATUS_B2D9D53A4F2E41963EC75F92DD0B74AE));
		}

		return uClassPointer;
	};

	void ____EpicLogin_X__UpdateTwoFactorAuthenticationStatus_B2D9D53A4F2E41963EC75F92DD0B74AE____EpicLogin_X__UpdateTwoFactorAuthenticationStatus_B2D9D53A4F2E41963EC75F92DD0B74AE_562C48754BAD82CF3FE6BEA504B87C90(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__UpdateTwoFactorAuthenticationStatus_B2D9D53A4F2E41963EC75F92DD0B74AE(unsigned long bSuccess, struct FString AuthTicket);
};

// Class ProjectX.RPC_GetAntiAddictionData_X
// 0x0050 (0x00E8 - 0x0138)
class URPC_GetAntiAddictionData_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                         		// 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bUnderAge : 1;                                    		// 0x0130 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bShowMessage : 1;                                 		// 0x0130 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int                                                HoursPlayed;                                      		// 0x0134 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_GETANTIADDICTIONDATA_X));
		}

		return uClassPointer;
	};

	class URPC_GetAntiAddictionData_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX._ReservationTypes_X
// 0x0000 (0x0060 - 0x0060)
class U_ReservationTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX__RESERVATIONTYPES_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.BlogConfig_X
// 0x0020 (0x0078 - 0x0098)
class UBlogConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UBlogTile_X*>                         Entries;                                          		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MotD;                                             		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_BLOGCONFIG_X));
		}

		return uClassPointer;
	};

	int __BlogConfig_X__Apply_F8B64C51435FA044A473E38D92D33B0C(class UBlogTile_X* L, class UBlogTile_X* R);
	void __BlogConfig_X__Apply_A7A8EC0B41FE10F540A752B5345985D9(class UBlogTile_X* X);
	void Apply();
};

// Class ProjectX.EOSMetricsConfig_X
// 0x0014 (0x0078 - 0x008C)
class UEOSMetricsConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     DataRouterURL;                                    		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PingDelayTime;                                    		// 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_EOSMETRICSCONFIG_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_JoinMatch_X
// 0x0028 (0x00E8 - 0x0110)
class URPC_JoinMatch_X : public URPC_X
{
public:
	struct FName                                       JoinType;                                         		// 0x00E8 (0x0008) [0x0000000000000000]               
	struct FString                                     ServerName;                                       		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_RPC_JOINMATCH_X));
		}

		return uClassPointer;
	};

};

// Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1____OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1_0C50A7F64A8D8B36197D3E91962BA507
// 0x0178 (0x0060 - 0x01D8)
class U____OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1____OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1_0C50A7F64A8D8B36197D3E91962BA507 : public UObject
{
public:
	struct FPartyMember                                PM;                                               		// 0x0060 (0x0178) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_____ONLINEGAMEPARTY_X__UPDATEPARTYINFO_3DF5334B4FB29E0C5FD06992AEDA77A1____ONLINEGAMEPARTY_X__UPDATEPARTYINFO_3DF5334B4FB29E0C5FD06992AEDA77A1_0C50A7F64A8D8B36197D3E91962BA507));
		}

		return uClassPointer;
	};

	bool ____OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1____OnlineGameParty_X__UpdatePartyInfo_3DF5334B4FB29E0C5FD06992AEDA77A1_0C50A7F64A8D8B36197D3E91962BA507(struct FLobbyMember LM);
};

// Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_A34F614D4BE5191A21FD138F3A987982____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C3D433EC4649428BEBA56193F14CB51C_16CEB4084D889305AF8690AD6911A91E
// 0x0010 (0x0060 - 0x0070)
class U____OnlinePlayerStorageQueue_X__HandleStorageSuccess_A34F614D4BE5191A21FD138F3A987982____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C3D433EC4649428BEBA56193F14CB51C_16CEB4084D889305AF8690AD6911A91E : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 R;                                                		// 0x0060 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_PROJECTX_____ONLINEPLAYERSTORAGEQUEUE_X__HANDLESTORAGESUCCESS_A34F614D4BE5191A21FD138F3A987982____ONLINEPLAYERSTORAGEQUEUE_X__HANDLESTORAGESUCCESS_C3D433EC4649428BEBA56193F14CB51C_16CEB4084D889305AF8690AD6911A91E));
		}

		return uClassPointer;
	};

	bool ____OnlinePlayerStorageQueue_X__HandleStorageSuccess_A34F614D4BE5191A21FD138F3A987982____OnlinePlayerStorageQueue_X__HandleStorageSuccess_C3D433EC4649428BEBA56193F14CB51C_16CEB4084D889305AF8690AD6911A91E(struct FPendingStorage P);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
