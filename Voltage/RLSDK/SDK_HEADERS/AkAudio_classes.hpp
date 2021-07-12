/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: AkAudio_classes.hpp
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

// Enum AkAudio.AkPlaySoundComponent.EAkPlaySoundReceiver
enum class EAkPlaySoundReceiver : int
{
	PlaySoundReceiver_All                              = 0,
	PlaySoundReceiver_Local                            = 1,
	PlaySoundReceiver_NonLocal                         = 2,
	PlaySoundReceiver_END                              = 3
};

// Enum AkAudio.AkDevice.EAkOutputType
enum class EAkOutputType : int
{
	AkOT_Speakers                                      = 0,
	AKOT_Headphones                                    = 1,
	EAkOutputType_END                                  = 2
};

// Enum AkAudio.AkDevice.EAkListenerSpacialization
enum class EAkListenerSpacialization : int
{
	AkLS_3D                                            = 0,
	AkLS_Left                                          = 1,
	AkLS_Right                                         = 2,
	AkLS_END                                           = 3
};

// Enum AkAudio.AkDevice.EAkDynamicRangeType
enum class EAkDynamicRangeType : int
{
	AkDRT_Low                                          = 0,
	AkDRT_Medium                                       = 1,
	AkDRT_High                                         = 2,
	AkDRT_END                                          = 3
};

// Enum AkAudio.AkSoundSource.EAkEnvironmentType
enum class EAkEnvironmentType : int
{
	EnvironmentType_SpatializedAudio                   = 0,
	EnvironmentType_UnspatializedAudio                 = 1,
	EnvironmentType_Music                              = 2,
	EnvironmentType_None                               = 3,
	EnvironmentType_END                                = 4
};

// Enum AkAudio.AkParamGroup.EAttenuationType
enum class EAttenuationType : int
{
	AttenuationType_Default                            = 0,
	AttenuationType_None                               = 1,
	AttenuationType_END                                = 2
};

// Enum AkAudio.AkParamGroup.EReflectionSendType
enum class EReflectionSendType : int
{
	ReflectionSendType_None                            = 0,
	ReflectionSendType_Slapback                        = 1,
	ReflectionSendType_ArenaReverb                     = 2,
	ReflectionSendType_END                             = 3
};

// Enum AkAudio.AkBusActor.EBusEmitterType
enum class EBusEmitterType : int
{
	BusEmitterType_Reflection                          = 0,
	BusEmitterType_Reverb                              = 1,
	BusEmitterType_None                                = 2,
	BusEmitterType_END                                 = 3
};

// Enum AkAudio.AkBusActor.EPinnedAxisType
enum class EPinnedAxisType : int
{
	PinnedAxis_X                                       = 0,
	PinnedAxis_Y                                       = 1,
	PinnedAxis_Z                                       = 2,
	PinnedAxis_None                                    = 3,
	PinnedAxis_END                                     = 4
};

// Enum AkAudio.AkSoundSource.EAkCallbackType
enum class EAkCallbackType : int
{
	AkCallbackType_Marker                              = 0,
	AkCallbackType_Duration                            = 1,
	AkCallbackType_END                                 = 2
};

// Enum AkAudio.SeqAct_AkEnvironment.EAkEnvironmentTarget
enum class EAkEnvironmentTarget : int
{
	AkEnvironmentTarget_LevelDefault                   = 0,
	AkEnvironmentTarget_Actor                          = 1,
	AkEnvironmentTarget_END                            = 2
};

// Enum AkAudio.SeqAct_AkPlayMusicWithCues.EMusicSyncType
enum class EMusicSyncType : int
{
	MusicSyncType_EndOfEvent                           = 0,
	MusicSyncType_UserCue                              = 1,
	MusicSyncType_END                                  = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x000C (0x009C - 0x00A8)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_ACTORFACTORYAKAMBIENTSOUND));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSound
// 0x0010 (0x0270 - 0x0280)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0270 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                     		// 0x0270 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0270 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	class UAkEvent*                                    PlayEvent;                                        		// 0x0278 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKAMBIENTSOUND));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkBusActor
// 0x0011 (0x0268 - 0x0279)
class AAkBusActor : public AActor
{
public:
	class UAkSoundSource*                              SoundSource;                                      		// 0x0268 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       TargetBusName;                                    		// 0x0270 (0x0008) [0x0000000000000000]               
	unsigned char                                      PinnedAxis;                                       		// 0x0278 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKBUSACTOR));
		}

		return uClassPointer;
	};

	void RegisterReflectionEmitter(struct FName BusName, unsigned char BusType);
	void SetPinnedAxis(unsigned char AxisToPin);
};

// Class AkAudio.AkComponent
// 0x0017 (0x009D - 0x00B4)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                         		// 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AutoPlayEvent;                                    		// 0x00A8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKCOMPONENT));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkDevice
// 0x0058 (0x0060 - 0x00B8)
class UAkDevice : public UObject
{
public:
	struct FName                                       DynamicRangeSetting_Low_Master;                   		// 0x0060 (0x0008) [0x0000000000000000]               
	struct FName                                       DynamicRangeSetting_Medium_Master;                		// 0x0068 (0x0008) [0x0000000000000000]               
	struct FName                                       DynamicRangeSetting_High_Master;                  		// 0x0070 (0x0008) [0x0000000000000000]               
	struct FName                                       DynamicRangeSetting_Low_Gameplay;                 		// 0x0078 (0x0008) [0x0000000000000000]               
	struct FName                                       DynamicRangeSetting_Medium_Gameplay;              		// 0x0080 (0x0008) [0x0000000000000000]               
	struct FName                                       DynamicRangeSetting_High_Gameplay;                		// 0x0088 (0x0008) [0x0000000000000000]               
	struct FName                                       MasterAudioBusName;                               		// 0x0090 (0x0008) [0x0000000000000000]               
	struct FName                                       GameplayAudioBusName;                             		// 0x0098 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventInitialized__Delegate;                     		// 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKDEVICE));
		}

		return uClassPointer;
	};

	void SetBusEffect(struct FName BusName, struct FName EffectSetting, int EffectSlot);
	void ResetSlapbackObjects();
	void SetSoundEnvironment(class AActor* Actor, unsigned char EnvironmentType);
	class UAkEnvironments* GetEnvironments();
	void NotifyWhenInitialized(struct FScriptDelegate Callback);
	void ProfileStop();
	void ProfileStart();
	void PrintData();
	void SetDynamicRange(unsigned char Type);
	void SetOutputType(unsigned char Type);
	void SetListenerSpatialization(class ULocalPlayer* Player, unsigned char Value);
	void SetSplitScreenListenerEnabled(unsigned long bEnable);
	void SetSplitScreenListenerPosition(struct FVector Location);
	void UpdateSecondaryOutputs();
	void SetGlobalRTCP(struct FName Key, float Value);
	void StopGlobalSound(class UAkSoundCue* Sound);
	void PlayGlobalSound(class UAkSoundCue* Sound);
	void SetState(struct FName InStateGroup, struct FName InState);
	void SetSwitch(class AActor* SourceActor, struct FName Key, struct FName Value);
	void SetRTCP(class AActor* SourceActor, struct FName Key, float Value);
	void StopAllSounds(class AActor* SourceActor);
	void StopSound(class AActor* SourceActor, class UAkSoundCue* Sound);
	class UAkSoundSource* PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation);
	class UAkSoundSource* GetSoundSource(class AActor* SourceActor, struct FVector Translation, struct FRotator Rotation);
	void EventInitialized();
};

// Class AkAudio.AkDialogueEvent
// 0x0010 (0x0060 - 0x0070)
class UAkDialogueEvent : public UObject
{
public:
	TArray<class UAkSwitch*>                           Arguments;                                        		// 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKDIALOGUEEVENT));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkEnvironments
// 0x002C (0x0060 - 0x008C)
class UAkEnvironments : public UObject
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;             		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FAkEnvironment>                      LevelEnvironments;                                		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FAkActorEnvironment>                 ActorEnvironments;                                		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bLevelDirty : 1;                                  		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActorEnvironmentDirty : 1;                       		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKENVIRONMENTS));
		}

		return uClassPointer;
	};

	void RemoveActorEnvironment(class AActor* TargetActor, struct FString& EnvironmentID);
	void AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment& Environment);
	void AddLevelDefault(struct FAkEnvironment& Environment);
};

// Class AkAudio.AkEnvironmentVolume
// 0x0024 (0x02A4 - 0x02C8)
class AAkEnvironmentVolume : public AVolume
{
public:
	struct FAkEnvironment                              Environment;                                      		// 0x02A8 (0x0020) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKENVIRONMENTVOLUME));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkMusicAnalysis
// 0x00B0 (0x0060 - 0x0110)
class UAkMusicAnalysis : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int                                                BPM;                                              		// 0x0068 (0x0004) [0x0000000000000000]               
	struct FMusicAnalysisInfo                          MusicInfo;                                        		// 0x0070 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMusicAnalysisInfo                          MusicInfoSmoothed;                                		// 0x0090 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              AttackSpeed;                                      		// 0x00B0 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              ReleaseSpeed;                                     		// 0x00B4 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	unsigned long                                      bDebugPrintMusicAnalysisValues : 1;               		// 0x00B8 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	class UAkSoundCue*                                 MusicAnalysisSilentLoop;                          		// 0x00C0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventNewMusicTrack__Delegate;                   		// 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMusicBeat__Delegate;                       		// 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMusicBar__Delegate;                        		// 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKMUSICANALYSIS));
		}

		return uClassPointer;
	};

	void UpdateSmoothedMusicInfo(float DeltaTime);
	void UpdateMusicInfo(struct FMusicAnalysisInfo& NewValues);
	void OnNewTrack(int NewBPM);
	class UAkMusicAnalysis* GetInstance();
	void EventMusicBar();
	void EventMusicBeat();
	void EventNewMusicTrack(int PlayingID, int NewBPM);
};

// Class AkAudio.AkMusicDevice
// 0x0030 (0x0060 - 0x0090)
class UAkMusicDevice : public UObject
{
public:
	struct FScriptDelegate                             __EventTrackStart__Delegate;                      		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTrackEnd__Delegate;                        		// 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKMUSICDEVICE));
		}

		return uClassPointer;
	};

	void Seek(class UAkSoundCue* Sound, float PositionSeconds);
	void SetRTCP(struct FName Key, float Value);
	void StopPlayingID(int PlayingID);
	void Stop(class UAkSoundCue* Sound);
	int Play(class UAkSoundCue* Sound);
	void EventTrackEnd(int PlayingID);
	void EventTrackStart(int PlayingID, struct FString FileMarker);
};

// Class AkAudio.AkParamGroup
// 0x00C1 (0x009D - 0x015E)
class UAkParamGroup : public UActorComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x00A0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FAkParamSet                                 StoredParameters;                                 		// 0x00A8 (0x00A0) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<class UAkSoundSource*>                      SoundSources;                                     		// 0x0148 (0x0010) [0x000000000448200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	int                                                ControllerId;                                     		// 0x0158 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      SendType;                                         		// 0x015C (0x0001) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      AttenuationType;                                  		// 0x015D (0x0001) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKPARAMGROUP));
		}

		return uClassPointer;
	};

	void SetSendToSlapbacks(unsigned long bSend);
	void SetControllerId(int InID);
	void EnableObjectAttenuation();
	void DisableObjectAttenuation();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void UpdateSoundSourceAttenuationScaling();
	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
	void GetDebugData(TArray<struct FName>& RTCPKeys, TArray<float>& RTCPValues, TArray<struct FName>& SwitchKeys, TArray<struct FName>& SwitchValues);
	void StopSound(class UAkSoundCue* Sound);
	class UAkSoundSource* PlaySound(class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation);
	void SetSwitch(struct FName Key, struct FName Value);
	void SetRTCP(struct FName Key, float Value);
};

// Class AkAudio.AkPlaySoundComponent
// 0x00FB (0x009D - 0x0198)
class UAkPlaySoundComponent : public UActorComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x00A0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UAkSoundCue*                                 SoundCue;                                         		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAutoPlay : 1;                                    		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bKillSoundOnDetach : 1;                           		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bWasAttached : 1;                                 		// 0x00B0 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	struct FVector                                     Translation;                                      		// 0x00B4 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRotator                                    Rotation;                                         		// 0x00C0 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ReFireDelay;                                      		// 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Receiver;                                         		// 0x00D0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FName>                               RestartSwitches;                                  		// 0x00D8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                      		// 0x00E8 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              LastPlayTime;                                     		// 0x00F0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FAkParamSet                                 StoredParameters;                                 		// 0x00F8 (0x00A0) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKPLAYSOUNDCOMPONENT));
		}

		return uClassPointer;
	};

	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
	void SetRTCP(struct FName Key, float Value);
	void SetSwitch(struct FName Key, struct FName Value);
	bool IsPlaying();
	void Stop();
	void Play();
};

// Class AkAudio.AkRevPhysicsSimulation
// 0x0050 (0x0060 - 0x00B0)
class UAkRevPhysicsSimulation : public UObject
{
public:
	float                                              EngineGearRatio;                                  		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EngineFriction;                                   		// 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GroundFriction;                                   		// 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WindResistancePerVelocity;                        		// 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UpShiftingRPM;                                    		// 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DownShiftRPM;                                     		// 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InfiniteGearRatioDecreaseAmount;                  		// 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ThrottleInterpolationTime;                        		// 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EngineTorque;                                     		// 0x0080 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BrakingForce;                                     		// 0x0084 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              WindResistance;                                   		// 0x0088 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FrictionResistance;                               		// 0x008C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EngineResistance;                                 		// 0x0090 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NetForce;                                         		// 0x0094 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventGearChange__Delegate;                      		// 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKREVPHYSICSSIMULATION));
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	float InterpGearRatio(int Gear, struct FAkRevSimUpdateParams& SimUpdate);
	float GetGearRatio(struct FAkRevSimUpdateParams& SimUpdate);
	float CalcVelocity(float GearRatio, float RPM);
	float CalcRPM(float GearRatio, float Velocity);
	struct FAkRevSimFrame Step(float DeltaTime, struct FAkRevSimUpdateParams& Params);
	void EventGearChange(class UAkRevPhysicsSimulation* Simulation);
};

// Class AkAudio.AkRTPCDecayComponent
// 0x003F (0x009D - 0x00DC)
class UAkRTPCDecayComponent : public UActorComponent
{
public:
	struct FName                                       RTPC;                                             		// 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              GrowValue;                                        		// 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                         		// 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           DecayPerSecond;                                   		// 0x00B0 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                      		// 0x00C8 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              CurrentValue;                                     		// 0x00D0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              LastAttachTime;                                   		// 0x00D4 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	unsigned long                                      bWasAttached : 1;                                 		// 0x00D8 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKRTPCDECAYCOMPONENT));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkSoundCue
// 0x0028 (0x0060 - 0x0088)
class UAkSoundCue : public UObject
{
public:
	class UAkBank*                                     RequiredBank;                                     		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     StartEvent;                                       		// 0x0068 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     StopEvent;                                        		// 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKSOUNDCUE));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkSoundSource
// 0x00FB (0x009D - 0x0198)
class UAkSoundSource : public UActorComponent
{
public:
	struct FVector                                     Translation;                                      		// 0x00A0 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRotator                                    Rotation;                                         		// 0x00AC (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bDetachOnComplete : 1;                            		// 0x00B8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bRegistered : 1;                                  		// 0x00B8 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	unsigned long                                      bUpdateOrientation : 1;                           		// 0x00B8 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	struct FMatrix                                     CachedParentToWorld;                              		// 0x00C0 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     WorldLocation;                                    		// 0x0100 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FRotator                                    WorldRotation;                                    		// 0x010C (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAkParamGroup*                               Params;                                           		// 0x0118 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	TArray<struct FActiveSound>                        ActiveSounds;                                     		// 0x0120 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	unsigned char                                      EnvironmentType;                                  		// 0x0130 (0x0001) [0x0000000000002000] (CPF_Transient)
	TArray<unsigned char>                              CallbackTypes;                                    		// 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    SoundSourceId;                                    		// 0x0148 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                        		// 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMarker__Delegate;                          		// 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDuration__Delegate;                        		// 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKSOUNDSOURCE));
		}

		return uClassPointer;
	};

	void eventSetSubtitlesEnabled(unsigned long bValue);
	void SetAttenuationScaling(unsigned char AttenuationType);
	void ForceUpdatePosition();
	void RegisterReflectionEmitter(struct FName BusName, unsigned char BusType);
	bool IsPlayingAny();
	bool IsPlaying(class UAkSoundCue* Sound);
	void Seek(class UAkSoundCue* Sound, float SeekSeconds);
	void StopAll();
	void Stop(class UAkSoundCue* Sound);
	int Play(class UAkSoundCue* Sound);
	void EventDuration(class UAkSoundSource* Source, int PlayingID, float DurationMS);
	void EventMarker(class UAkSoundSource* Source, int PlayingID, struct FString Marker);
	void EventFinished(class UAkSoundSource* Source, int PlayingID);
};

// Class AkAudio.AkSwitch
// 0x0000 (0x0060 - 0x0060)
class UAkSwitch : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKSWITCH));
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkEvent
// 0x0018 (0x00C4 - 0x00DC)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray<struct FAkEventTrackKey>                    AkEvents;                                         		// 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SeekTimeSeconds;                                  		// 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_INTERPTRACKAKEVENT));
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkRTPC
// 0x0014 (0x00E4 - 0x00F8)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x00E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_INTERPTRACKAKRTPC));
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0060 - 0x0064)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_INTERPTRACKINSTAKEVENT));
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_INTERPTRACKINSTAKRTPC));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkClearBanks : public USequenceAction
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKCLEARBANKS));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkEnvironment
// 0x0021 (0x0160 - 0x0181)
class USeqAct_AkEnvironment : public USequenceAction
{
public:
	struct FAkEnvironment                              Environment;                                      		// 0x0160 (0x0020) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      Target;                                           		// 0x0180 (0x0001) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKENVIRONMENT));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkLoadBank
// 0x0014 (0x0178 - 0x018C)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x0178 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bWaitingCallback : 1;                             		// 0x0178 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UAkBank*                                     Bank;                                             		// 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int                                                Signal;                                           		// 0x0188 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKLOADBANK));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPlayMusicWithCues
// 0x0018 (0x0178 - 0x0190)
class USeqAct_AkPlayMusicWithCues : public USeqAct_Latent
{
public:
	class UAkSoundCue*                                 SoundCue;                                         		// 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FMusicSyncEvent>                     MusicSyncEvents;                                  		// 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKPLAYMUSICWITHCUES));
		}

		return uClassPointer;
	};

	void eventTriggerEvents(struct FString CueName);
};

// Class AkAudio.SeqAct_AkPlaySound
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkPlaySound : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                         		// 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bBGMusic : 1;                                     		// 0x0168 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKPLAYSOUND));
		}

		return uClassPointer;
	};

	void ToggleSoundFor(class AActor* A, unsigned long bPlay);
	void ToggleSound(unsigned long bPlay);
	void eventActivated();
};

// Class AkAudio.SeqAct_AkPostEvent
// 0x001C (0x0178 - 0x0194)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	TArray<int>                                        PlayingIDs;                                       		// 0x0178 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAkSoundCue*                                 SoundCue;                                         		// 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bHasSubtitles : 1;                                		// 0x0190 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKPOSTEVENT));
		}

		return uClassPointer;
	};

	void eventHandleSoundCueFinished(class UAkSoundSource* Source, int PlayingID);
};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0160 - 0x0170)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKPOSTTRIGGER));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0178 - 0x0190)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0178 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                            		// 0x0188 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      Running : 1;                                      		// 0x018C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKSETRTPCVALUE));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0160 - 0x0180)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     State;                                            		// 0x0170 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKSETSTATE));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0160 - 0x0180)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     Switch;                                           		// 0x0170 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKSETSWITCH));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKSTARTAMBIENTSOUND));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkStopAll : public USequenceAction
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKSTOPALL));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAudioDevice
// 0x00E0 (0x0068 - 0x0148)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0068 (0x0010) MISSED OFFSET
	int                                                DefaultMemoryPoolKB;                              		// 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                DefaultEngineMemoryPoolKB;                        		// 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              LowMemoryThreshold;                               		// 0x0080 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned char                                      UnknownData01[0xC4];                              		// 0x0084 (0x00C4) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKAUDIODEVICE));
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSoundActor
// 0x0008 (0x0270 - 0x0278)
class AAkAmbientSoundActor : public AKeypoint
{
public:
	class UAkPlaySoundComponent*                       PlaySoundComponent;                               		// 0x0270 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_AKAMBIENTSOUNDACTOR));
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class AkAudio.SeqEvent_AkMusicCue
// 0x0014 (0x017C - 0x0190)
class USeqEvent_AkMusicCue : public USequenceEvent
{
public:
	struct FString                                     CueName;                                          		// 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQEVENT_AKMUSICCUE));
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPlaySoundAndSeek
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkPlaySoundAndSeek : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                         		// 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              StartLocationSeconds;                             		// 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundSource*                              SoundSource;                                      		// 0x0170 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_AKAUDIO_SEQACT_AKPLAYSOUNDANDSEEK));
		}

		return uClassPointer;
	};

	void ToggleSoundFor(class AActor* A, unsigned long bPlay);
	void ToggleSound(unsigned long bPlay);
	void eventActivated();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif