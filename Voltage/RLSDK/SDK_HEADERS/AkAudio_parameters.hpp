/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: AkAudio_parameters.h
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

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
// [0x04020401] 
struct AAkBusActor_execRegisterReflectionEmitter_Parms
{
	struct FName                                       BusName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      BusType;                                          		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkBusActor.SetPinnedAxis
// [0x04020401] 
struct AAkBusActor_execSetPinnedAxis_Parms
{
	unsigned char                                      AxisToPin;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetBusEffect
// [0x04026401] 
struct UAkDevice_execSetBusEffect_Parms
{
	struct FName                                       BusName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       EffectSetting;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                EffectSlot;                                       		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function AkAudio.AkDevice.ResetSlapbackObjects
// [0x04022401] 
struct UAkDevice_execResetSlapbackObjects_Parms
{
};

// Function AkAudio.AkDevice.SetSoundEnvironment
// [0x04022401] 
struct UAkDevice_execSetSoundEnvironment_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      EnvironmentType;                                  		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.GetEnvironments
// [0x04022401] 
struct UAkDevice_execGetEnvironments_Parms
{
	class UAkEnvironments*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x04022401] 
struct UAkDevice_execNotifyWhenInitialized_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] 
struct UAkDevice_execProfileStop_Parms
{
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] 
struct UAkDevice_execProfileStart_Parms
{
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] 
struct UAkDevice_execPrintData_Parms
{
};

// Function AkAudio.AkDevice.SetDynamicRange
// [0x04022401] 
struct UAkDevice_execSetDynamicRange_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] 
struct UAkDevice_execSetOutputType_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] 
struct UAkDevice_execSetListenerSpatialization_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      Value;                                            		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
// [0x04022401] 
struct UAkDevice_execSetSplitScreenListenerEnabled_Parms
{
	bool                                               bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
// [0x04022401] 
struct UAkDevice_execSetSplitScreenListenerPosition_Parms
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.UpdateSecondaryOutputs
// [0x04022401] 
struct UAkDevice_execUpdateSecondaryOutputs_Parms
{
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] 
struct UAkDevice_execSetGlobalRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] 
struct UAkDevice_execStopGlobalSound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] 
struct UAkDevice_execPlayGlobalSound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] 
struct UAkDevice_execSetState_Parms
{
	struct FName                                       InStateGroup;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InState;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] 
struct UAkDevice_execSetSwitch_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] 
struct UAkDevice_execSetRTCP_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] 
struct UAkDevice_execStopAllSounds_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] 
struct UAkDevice_execStopSound_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] 
struct UAkDevice_execPlaySound_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function AkAudio.AkDevice.GetSoundSource
// [0x04026401] 
struct UAkDevice_execGetSoundSource_Parms
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Translation;                                      		// 0x0008 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120001] 
struct UAkDevice_execEventInitialized_Parms
{
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// [0x00420401] 
struct UAkEnvironments_execRemoveActorEnvironment_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     EnvironmentID;                                    		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
// [0x00420401] 
struct UAkEnvironments_execAddActorEnvironment_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FAkEnvironment                              Environment;                                      		// 0x0008 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] 
struct UAkEnvironments_execAddLevelDefault_Parms
{
	struct FAkEnvironment                              Environment;                                      		// 0x0000 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo
// [0x00022401] 
struct UAkMusicAnalysis_execUpdateSmoothedMusicInfo_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function AkAudio.AkMusicAnalysis.UpdateMusicInfo
// [0x00422401] 
struct UAkMusicAnalysis_execUpdateMusicInfo_Parms
{
	struct FMusicAnalysisInfo                          NewValues;                                        		// 0x0000 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkMusicAnalysis.OnNewTrack
// [0x00022401] 
struct UAkMusicAnalysis_execOnNewTrack_Parms
{
	int                                                NewBPM;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicAnalysis.GetInstance
// [0x00022401] 
struct UAkMusicAnalysis_execGetInstance_Parms
{
	class UAkMusicAnalysis*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMusicAnalysis.EventMusicBar
// [0x00120001] 
struct UAkMusicAnalysis_execEventMusicBar_Parms
{
};

// Function AkAudio.AkMusicAnalysis.EventMusicBeat
// [0x00120001] 
struct UAkMusicAnalysis_execEventMusicBeat_Parms
{
};

// Function AkAudio.AkMusicAnalysis.EventNewMusicTrack
// [0x00120001] 
struct UAkMusicAnalysis_execEventNewMusicTrack_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                NewBPM;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.Seek
// [0x04022401] 
struct UAkMusicDevice_execSeek_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PositionSeconds;                                  		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.SetRTCP
// [0x04022401] 
struct UAkMusicDevice_execSetRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.StopPlayingID
// [0x04022401] 
struct UAkMusicDevice_execStopPlayingID_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.Stop
// [0x04022401] 
struct UAkMusicDevice_execStop_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.Play
// [0x04022401] 
struct UAkMusicDevice_execPlay_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMusicDevice.EventTrackEnd
// [0x00120001] 
struct UAkMusicDevice_execEventTrackEnd_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkMusicDevice.EventTrackStart
// [0x00120001] 
struct UAkMusicDevice_execEventTrackStart_Parms
{
	int                                                PlayingID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     FileMarker;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function AkAudio.AkParamGroup.SetSendToSlapbacks
// [0x00020003] 
struct UAkParamGroup_execSetSendToSlapbacks_Parms
{
	bool                                               bSend : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetControllerId
// [0x00020003] 
struct UAkParamGroup_execSetControllerId_Parms
{
	int                                                InID;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.EnableObjectAttenuation
// [0x00020003] 
struct UAkParamGroup_execEnableObjectAttenuation_Parms
{
};

// Function AkAudio.AkParamGroup.DisableObjectAttenuation
// [0x00020003] 
struct UAkParamGroup_execDisableObjectAttenuation_Parms
{
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x00020102] 
struct UAkParamGroup_execPrintDebugInfo_Parms
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FName>                            RTCPKeys;                                         		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<float>                                   RTCPValues;                                       		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FName>                            SwitchKeys;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FName>                            SwitchValues;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Idx;                                              		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
// [0x04020401] 
struct UAkParamGroup_execUpdateSoundSourceAttenuationScaling_Parms
{
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] 
struct UAkParamGroup_execSetActorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] 
struct UAkParamGroup_execSetLinearColorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] 
struct UAkParamGroup_execSetVectorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] 
struct UAkParamGroup_execSetFloatParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] 
struct UAkParamGroup_execSetNameParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] 
struct UAkParamGroup_execGetDebugData_Parms
{
	TArray<struct FName>                               RTCPKeys;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<float>                                      RTCPValues;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               SwitchKeys;                                       		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               SwitchValues;                                     		// 0x0030 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] 
struct UAkParamGroup_execStopSound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] 
struct UAkParamGroup_execPlaySound_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Translation;                                      		// 0x0008 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] 
struct UAkParamGroup_execSetSwitch_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] 
struct UAkParamGroup_execSetRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetActorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetLinearColorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetVectorParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetFloatParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] 
struct UAkPlaySoundComponent_execSetNameParameter_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] 
struct UAkPlaySoundComponent_execSetRTCP_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] 
struct UAkPlaySoundComponent_execSetSwitch_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] 
struct UAkPlaySoundComponent_execIsPlaying_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] 
struct UAkPlaySoundComponent_execStop_Parms
{
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] 
struct UAkPlaySoundComponent_execPlay_Parms
{
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x00020102] 
struct UAkRevPhysicsSimulation_execPrintDebugInfo_Parms
{
	class UDebugDrawer*                                Drawer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
// [0x00422401] 
struct UAkRevPhysicsSimulation_execInterpGearRatio_Parms
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                        		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                Gear;                                             		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x004C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] 
struct UAkRevPhysicsSimulation_execGetGearRatio_Parms
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                        		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] 
struct UAkRevPhysicsSimulation_execCalcVelocity_Parms
{
	float                                              GearRatio;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              RPM;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] 
struct UAkRevPhysicsSimulation_execCalcRPM_Parms
{
	float                                              GearRatio;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Velocity;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] 
struct UAkRevPhysicsSimulation_execStep_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FAkRevSimUpdateParams                       Params;                                           		// 0x0008 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FAkRevSimFrame                              ReturnValue;                                      		// 0x0050 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120001] 
struct UAkRevPhysicsSimulation_execEventGearChange_Parms
{
	class UAkRevPhysicsSimulation*                     Simulation;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
// [0x04020803] 
struct UAkSoundSource_eventSetSubtitlesEnabled_Parms
{
	bool                                               bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkSoundSource.SetAttenuationScaling
// [0x04020401] 
struct UAkSoundSource_execSetAttenuationScaling_Parms
{
	unsigned char                                      AttenuationType;                                  		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.ForceUpdatePosition
// [0x04020401] 
struct UAkSoundSource_execForceUpdatePosition_Parms
{
};

// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
// [0x04020401] 
struct UAkSoundSource_execRegisterReflectionEmitter_Parms
{
	struct FName                                       BusName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      BusType;                                          		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] 
struct UAkSoundSource_execIsPlayingAny_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] 
struct UAkSoundSource_execIsPlaying_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.Seek
// [0x04020401] 
struct UAkSoundSource_execSeek_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SeekSeconds;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] 
struct UAkSoundSource_execStopAll_Parms
{
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] 
struct UAkSoundSource_execStop_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] 
struct UAkSoundSource_execPlay_Parms
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.EventDuration
// [0x00120001] 
struct UAkSoundSource_execEventDuration_Parms
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int                                                PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DurationMS;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkSoundSource.EventMarker
// [0x00120001] 
struct UAkSoundSource_execEventMarker_Parms
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int                                                PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Marker;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function AkAudio.AkSoundSource.EventFinished
// [0x00120001] 
struct UAkSoundSource_execEventFinished_Parms
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int                                                PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
// [0x00040803] 
struct USeqAct_AkPlayMusicWithCues_eventTriggerEvents_Parms
{
	struct FString                                     CueName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class AWorldInfo*                               CurWorldInfo;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
	// class USeqEvent_AkMusicCue*                     Evt;                                              		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020003] 
struct USeqAct_AkPlaySound_execToggleSoundFor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bPlay : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020003] 
struct USeqAct_AkPlaySound_execToggleSound_Parms
{
	bool                                               bPlay : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UObject*                                  O;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AActor*                                   A;                                                		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x00020802] 
struct USeqAct_AkPlaySound_eventActivated_Parms
{
};

// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
// [0x00040C01] 
struct USeqAct_AkPostEvent_eventHandleSoundCueFinished_Parms
{
	class UAkSoundSource*                              Source;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	int                                                PlayingID;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020003] 
struct AAkAmbientSoundActor_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor
// [0x00020003] 
struct USeqAct_AkPlaySoundAndSeek_execToggleSoundFor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bPlay : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound
// [0x00020003] 
struct USeqAct_AkPlaySoundAndSeek_execToggleSound_Parms
{
	bool                                               bPlay : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UObject*                                  O;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AActor*                                   A;                                                		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated
// [0x00020802] 
struct USeqAct_AkPlaySoundAndSeek_eventActivated_Parms
{
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
