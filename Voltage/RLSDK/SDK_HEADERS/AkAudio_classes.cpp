/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: AkAudio_classes.cpp
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

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   BusName                        (CPF_Parm)
// unsigned char                  BusType                        (CPF_Parm)

void AAkBusActor::RegisterReflectionEmitter(struct FName BusName, unsigned char BusType)
{
	static UFunction* pFnRegisterReflectionEmitter = nullptr;

	if (!pFnRegisterReflectionEmitter)
	{
		pFnRegisterReflectionEmitter = UFunction::FindFunction("Function AkAudio.AkBusActor.RegisterReflectionEmitter");

	}

	AAkBusActor_execRegisterReflectionEmitter_Parms RegisterReflectionEmitter_Parms;
	memcpy_s(&RegisterReflectionEmitter_Parms.BusName, 0x8, &BusName, 0x8);
	RegisterReflectionEmitter_Parms.BusType = BusType;

	pFnRegisterReflectionEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterReflectionEmitter, &RegisterReflectionEmitter_Parms, nullptr);

	pFnRegisterReflectionEmitter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkBusActor.SetPinnedAxis
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned char                  AxisToPin                      (CPF_Parm)

void AAkBusActor::SetPinnedAxis(unsigned char AxisToPin)
{
	static UFunction* pFnSetPinnedAxis = nullptr;

	if (!pFnSetPinnedAxis)
	{
		pFnSetPinnedAxis = UFunction::FindFunction("Function AkAudio.AkBusActor.SetPinnedAxis");

	}

	AAkBusActor_execSetPinnedAxis_Parms SetPinnedAxis_Parms;
	SetPinnedAxis_Parms.AxisToPin = AxisToPin;

	pFnSetPinnedAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetPinnedAxis, &SetPinnedAxis_Parms, nullptr);

	pFnSetPinnedAxis->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetBusEffect
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   BusName                        (CPF_Parm)
// struct FName                   EffectSetting                  (CPF_Parm)
// int                            EffectSlot                     (CPF_OptionalParm | CPF_Parm)

void UAkDevice::SetBusEffect(struct FName BusName, struct FName EffectSetting, int EffectSlot)
{
	static UFunction* pFnSetBusEffect = nullptr;

	if (!pFnSetBusEffect)
	{
		pFnSetBusEffect = UFunction::FindFunction("Function AkAudio.AkDevice.SetBusEffect");

	}

	UAkDevice_execSetBusEffect_Parms SetBusEffect_Parms;
	memcpy_s(&SetBusEffect_Parms.BusName, 0x8, &BusName, 0x8);
	memcpy_s(&SetBusEffect_Parms.EffectSetting, 0x8, &EffectSetting, 0x8);
	memcpy_s(&SetBusEffect_Parms.EffectSlot, 0x4, &EffectSlot, 0x4);

	pFnSetBusEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetBusEffect, &SetBusEffect_Parms, nullptr);

	pFnSetBusEffect->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ResetSlapbackObjects
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::ResetSlapbackObjects()
{
	static UFunction* pFnResetSlapbackObjects = nullptr;

	if (!pFnResetSlapbackObjects)
	{
		pFnResetSlapbackObjects = UFunction::FindFunction("Function AkAudio.AkDevice.ResetSlapbackObjects");

	}

	UAkDevice_execResetSlapbackObjects_Parms ResetSlapbackObjects_Parms;

	pFnResetSlapbackObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnResetSlapbackObjects, &ResetSlapbackObjects_Parms, nullptr);

	pFnResetSlapbackObjects->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSoundEnvironment
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Actor                          (CPF_Parm)
// unsigned char                  EnvironmentType                (CPF_Parm)

void UAkDevice::SetSoundEnvironment(class AActor* Actor, unsigned char EnvironmentType)
{
	static UFunction* pFnSetSoundEnvironment = nullptr;

	if (!pFnSetSoundEnvironment)
	{
		pFnSetSoundEnvironment = UFunction::FindFunction("Function AkAudio.AkDevice.SetSoundEnvironment");

	}

	UAkDevice_execSetSoundEnvironment_Parms SetSoundEnvironment_Parms;
	memcpy_s(&SetSoundEnvironment_Parms.Actor, 0x8, &Actor, 0x8);
	SetSoundEnvironment_Parms.EnvironmentType = EnvironmentType;

	pFnSetSoundEnvironment->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSoundEnvironment, &SetSoundEnvironment_Parms, nullptr);

	pFnSetSoundEnvironment->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.GetEnvironments
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkEnvironments*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkEnvironments* UAkDevice::GetEnvironments()
{
	static UFunction* pFnGetEnvironments = nullptr;

	if (!pFnGetEnvironments)
	{
		pFnGetEnvironments = UFunction::FindFunction("Function AkAudio.AkDevice.GetEnvironments");

	}

	UAkDevice_execGetEnvironments_Parms GetEnvironments_Parms;

	pFnGetEnvironments->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetEnvironments, &GetEnvironments_Parms, nullptr);

	pFnGetEnvironments->FunctionFlags |= 0x400;

	return GetEnvironments_Parms.ReturnValue;
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UAkDevice::NotifyWhenInitialized(struct FScriptDelegate Callback)
{
	static UFunction* pFnNotifyWhenInitialized = nullptr;

	if (!pFnNotifyWhenInitialized)
	{
		pFnNotifyWhenInitialized = UFunction::FindFunction("Function AkAudio.AkDevice.NotifyWhenInitialized");

	}

	UAkDevice_execNotifyWhenInitialized_Parms NotifyWhenInitialized_Parms;
	memcpy_s(&NotifyWhenInitialized_Parms.Callback, 0x18, &Callback, 0x18);

	pFnNotifyWhenInitialized->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyWhenInitialized, &NotifyWhenInitialized_Parms, nullptr);

	pFnNotifyWhenInitialized->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStop
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::ProfileStop()
{
	static UFunction* pFnProfileStop = nullptr;

	if (!pFnProfileStop)
	{
		pFnProfileStop = UFunction::FindFunction("Function AkAudio.AkDevice.ProfileStop");

	}

	UAkDevice_execProfileStop_Parms ProfileStop_Parms;

	pFnProfileStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfileStop, &ProfileStop_Parms, nullptr);

	pFnProfileStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.ProfileStart
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::ProfileStart()
{
	static UFunction* pFnProfileStart = nullptr;

	if (!pFnProfileStart)
	{
		pFnProfileStart = UFunction::FindFunction("Function AkAudio.AkDevice.ProfileStart");

	}

	UAkDevice_execProfileStart_Parms ProfileStart_Parms;

	pFnProfileStart->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfileStart, &ProfileStart_Parms, nullptr);

	pFnProfileStart->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PrintData
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::PrintData()
{
	static UFunction* pFnPrintData = nullptr;

	if (!pFnPrintData)
	{
		pFnPrintData = UFunction::FindFunction("Function AkAudio.AkDevice.PrintData");

	}

	UAkDevice_execPrintData_Parms PrintData_Parms;

	pFnPrintData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPrintData, &PrintData_Parms, nullptr);

	pFnPrintData->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetDynamicRange
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Type                           (CPF_Parm)

void UAkDevice::SetDynamicRange(unsigned char Type)
{
	static UFunction* pFnSetDynamicRange = nullptr;

	if (!pFnSetDynamicRange)
	{
		pFnSetDynamicRange = UFunction::FindFunction("Function AkAudio.AkDevice.SetDynamicRange");

	}

	UAkDevice_execSetDynamicRange_Parms SetDynamicRange_Parms;
	SetDynamicRange_Parms.Type = Type;

	pFnSetDynamicRange->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetDynamicRange, &SetDynamicRange_Parms, nullptr);

	pFnSetDynamicRange->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetOutputType
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Type                           (CPF_Parm)

void UAkDevice::SetOutputType(unsigned char Type)
{
	static UFunction* pFnSetOutputType = nullptr;

	if (!pFnSetOutputType)
	{
		pFnSetOutputType = UFunction::FindFunction("Function AkAudio.AkDevice.SetOutputType");

	}

	UAkDevice_execSetOutputType_Parms SetOutputType_Parms;
	SetOutputType_Parms.Type = Type;

	pFnSetOutputType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetOutputType, &SetOutputType_Parms, nullptr);

	pFnSetOutputType->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetListenerSpatialization
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class ULocalPlayer*            Player                         (CPF_Parm)
// unsigned char                  Value                          (CPF_Parm)

void UAkDevice::SetListenerSpatialization(class ULocalPlayer* Player, unsigned char Value)
{
	static UFunction* pFnSetListenerSpatialization = nullptr;

	if (!pFnSetListenerSpatialization)
	{
		pFnSetListenerSpatialization = UFunction::FindFunction("Function AkAudio.AkDevice.SetListenerSpatialization");

	}

	UAkDevice_execSetListenerSpatialization_Parms SetListenerSpatialization_Parms;
	memcpy_s(&SetListenerSpatialization_Parms.Player, 0x8, &Player, 0x8);
	SetListenerSpatialization_Parms.Value = Value;

	pFnSetListenerSpatialization->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetListenerSpatialization, &SetListenerSpatialization_Parms, nullptr);

	pFnSetListenerSpatialization->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnable                        (CPF_Parm)

void UAkDevice::SetSplitScreenListenerEnabled(unsigned long bEnable)
{
	static UFunction* pFnSetSplitScreenListenerEnabled = nullptr;

	if (!pFnSetSplitScreenListenerEnabled)
	{
		pFnSetSplitScreenListenerEnabled = UFunction::FindFunction("Function AkAudio.AkDevice.SetSplitScreenListenerEnabled");

	}

	UAkDevice_execSetSplitScreenListenerEnabled_Parms SetSplitScreenListenerEnabled_Parms;
	SetSplitScreenListenerEnabled_Parms.bEnable = bEnable;

	pFnSetSplitScreenListenerEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSplitScreenListenerEnabled, &SetSplitScreenListenerEnabled_Parms, nullptr);

	pFnSetSplitScreenListenerEnabled->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FVector                 Location                       (CPF_Parm)

void UAkDevice::SetSplitScreenListenerPosition(struct FVector Location)
{
	static UFunction* pFnSetSplitScreenListenerPosition = nullptr;

	if (!pFnSetSplitScreenListenerPosition)
	{
		pFnSetSplitScreenListenerPosition = UFunction::FindFunction("Function AkAudio.AkDevice.SetSplitScreenListenerPosition");

	}

	UAkDevice_execSetSplitScreenListenerPosition_Parms SetSplitScreenListenerPosition_Parms;
	memcpy_s(&SetSplitScreenListenerPosition_Parms.Location, 0xC, &Location, 0xC);

	pFnSetSplitScreenListenerPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSplitScreenListenerPosition, &SetSplitScreenListenerPosition_Parms, nullptr);

	pFnSetSplitScreenListenerPosition->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.UpdateSecondaryOutputs
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkDevice::UpdateSecondaryOutputs()
{
	static UFunction* pFnUpdateSecondaryOutputs = nullptr;

	if (!pFnUpdateSecondaryOutputs)
	{
		pFnUpdateSecondaryOutputs = UFunction::FindFunction("Function AkAudio.AkDevice.UpdateSecondaryOutputs");

	}

	UAkDevice_execUpdateSecondaryOutputs_Parms UpdateSecondaryOutputs_Parms;

	pFnUpdateSecondaryOutputs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateSecondaryOutputs, &UpdateSecondaryOutputs_Parms, nullptr);

	pFnUpdateSecondaryOutputs->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetGlobalRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::SetGlobalRTCP(struct FName Key, float Value)
{
	static UFunction* pFnSetGlobalRTCP = nullptr;

	if (!pFnSetGlobalRTCP)
	{
		pFnSetGlobalRTCP = UFunction::FindFunction("Function AkAudio.AkDevice.SetGlobalRTCP");

	}

	UAkDevice_execSetGlobalRTCP_Parms SetGlobalRTCP_Parms;
	memcpy_s(&SetGlobalRTCP_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetGlobalRTCP_Parms.Value, 0x4, &Value, 0x4);

	pFnSetGlobalRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetGlobalRTCP, &SetGlobalRTCP_Parms, nullptr);

	pFnSetGlobalRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopGlobalSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::StopGlobalSound(class UAkSoundCue* Sound)
{
	static UFunction* pFnStopGlobalSound = nullptr;

	if (!pFnStopGlobalSound)
	{
		pFnStopGlobalSound = UFunction::FindFunction("Function AkAudio.AkDevice.StopGlobalSound");

	}

	UAkDevice_execStopGlobalSound_Parms StopGlobalSound_Parms;
	memcpy_s(&StopGlobalSound_Parms.Sound, 0x8, &Sound, 0x8);

	pFnStopGlobalSound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopGlobalSound, &StopGlobalSound_Parms, nullptr);

	pFnStopGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlayGlobalSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::PlayGlobalSound(class UAkSoundCue* Sound)
{
	static UFunction* pFnPlayGlobalSound = nullptr;

	if (!pFnPlayGlobalSound)
	{
		pFnPlayGlobalSound = UFunction::FindFunction("Function AkAudio.AkDevice.PlayGlobalSound");

	}

	UAkDevice_execPlayGlobalSound_Parms PlayGlobalSound_Parms;
	memcpy_s(&PlayGlobalSound_Parms.Sound, 0x8, &Sound, 0x8);

	pFnPlayGlobalSound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPlayGlobalSound, &PlayGlobalSound_Parms, nullptr);

	pFnPlayGlobalSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetState
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   InStateGroup                   (CPF_Parm)
// struct FName                   InState                        (CPF_Parm)

void UAkDevice::SetState(struct FName InStateGroup, struct FName InState)
{
	static UFunction* pFnSetState = nullptr;

	if (!pFnSetState)
	{
		pFnSetState = UFunction::FindFunction("Function AkAudio.AkDevice.SetState");

	}

	UAkDevice_execSetState_Parms SetState_Parms;
	memcpy_s(&SetState_Parms.InStateGroup, 0x8, &InStateGroup, 0x8);
	memcpy_s(&SetState_Parms.InState, 0x8, &InState, 0x8);

	pFnSetState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetState, &SetState_Parms, nullptr);

	pFnSetState->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetSwitch
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkDevice::SetSwitch(class AActor* SourceActor, struct FName Key, struct FName Value)
{
	static UFunction* pFnSetSwitch = nullptr;

	if (!pFnSetSwitch)
	{
		pFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkDevice.SetSwitch");

	}

	UAkDevice_execSetSwitch_Parms SetSwitch_Parms;
	memcpy_s(&SetSwitch_Parms.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&SetSwitch_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetSwitch_Parms.Value, 0x8, &Value, 0x8);

	pFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSwitch, &SetSwitch_Parms, nullptr);

	pFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.SetRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::SetRTCP(class AActor* SourceActor, struct FName Key, float Value)
{
	static UFunction* pFnSetRTCP = nullptr;

	if (!pFnSetRTCP)
	{
		pFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkDevice.SetRTCP");

	}

	UAkDevice_execSetRTCP_Parms SetRTCP_Parms;
	memcpy_s(&SetRTCP_Parms.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&SetRTCP_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Parms.Value, 0x4, &Value, 0x4);

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRTCP, &SetRTCP_Parms, nullptr);

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopAllSounds
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)

void UAkDevice::StopAllSounds(class AActor* SourceActor)
{
	static UFunction* pFnStopAllSounds = nullptr;

	if (!pFnStopAllSounds)
	{
		pFnStopAllSounds = UFunction::FindFunction("Function AkAudio.AkDevice.StopAllSounds");

	}

	UAkDevice_execStopAllSounds_Parms StopAllSounds_Parms;
	memcpy_s(&StopAllSounds_Parms.SourceActor, 0x8, &SourceActor, 0x8);

	pFnStopAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopAllSounds, &StopAllSounds_Parms, nullptr);

	pFnStopAllSounds->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.StopSound
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::StopSound(class AActor* SourceActor, class UAkSoundCue* Sound)
{
	static UFunction* pFnStopSound = nullptr;

	if (!pFnStopSound)
	{
		pFnStopSound = UFunction::FindFunction("Function AkAudio.AkDevice.StopSound");

	}

	UAkDevice_execStopSound_Parms StopSound_Parms;
	memcpy_s(&StopSound_Parms.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&StopSound_Parms.Sound, 0x8, &Sound, 0x8);

	pFnStopSound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopSound, &StopSound_Parms, nullptr);

	pFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkDevice.PlaySound
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkDevice::PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* pFnPlaySound = nullptr;

	if (!pFnPlaySound)
	{
		pFnPlaySound = UFunction::FindFunction("Function AkAudio.AkDevice.PlaySound");

	}

	UAkDevice_execPlaySound_Parms PlaySound_Parms;
	memcpy_s(&PlaySound_Parms.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&PlaySound_Parms.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&PlaySound_Parms.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&PlaySound_Parms.Rotation, 0xC, &Rotation, 0xC);

	pFnPlaySound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPlaySound, &PlaySound_Parms, nullptr);

	pFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Parms.ReturnValue;
};

// Function AkAudio.AkDevice.GetSoundSource
// [0x04026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkDevice::GetSoundSource(class AActor* SourceActor, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* pFnGetSoundSource = nullptr;

	if (!pFnGetSoundSource)
	{
		pFnGetSoundSource = UFunction::FindFunction("Function AkAudio.AkDevice.GetSoundSource");

	}

	UAkDevice_execGetSoundSource_Parms GetSoundSource_Parms;
	memcpy_s(&GetSoundSource_Parms.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&GetSoundSource_Parms.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&GetSoundSource_Parms.Rotation, 0xC, &Rotation, 0xC);

	pFnGetSoundSource->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSoundSource, &GetSoundSource_Parms, nullptr);

	pFnGetSoundSource->FunctionFlags |= 0x400;

	return GetSoundSource_Parms.ReturnValue;
};

// Function AkAudio.AkDevice.EventInitialized
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAkDevice::EventInitialized()
{
	static UFunction* pFnEventInitialized = nullptr;

	if (!pFnEventInitialized)
	{
		pFnEventInitialized = UFunction::FindFunction("Function AkAudio.AkDevice.EventInitialized");

	}

	UAkDevice_execEventInitialized_Parms EventInitialized_Parms;

	this->ProcessEvent(pFnEventInitialized, &EventInitialized_Parms, nullptr);
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AActor*                  TargetActor                    (CPF_Parm)
// struct FString                 EnvironmentID                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::RemoveActorEnvironment(class AActor* TargetActor, struct FString& EnvironmentID)
{
	static UFunction* pFnRemoveActorEnvironment = nullptr;

	if (!pFnRemoveActorEnvironment)
	{
		pFnRemoveActorEnvironment = UFunction::FindFunction("Function AkAudio.AkEnvironments.RemoveActorEnvironment");

	}

	UAkEnvironments_execRemoveActorEnvironment_Parms RemoveActorEnvironment_Parms;
	memcpy_s(&RemoveActorEnvironment_Parms.TargetActor, 0x8, &TargetActor, 0x8);

	pFnRemoveActorEnvironment->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveActorEnvironment, &RemoveActorEnvironment_Parms, nullptr);

	pFnRemoveActorEnvironment->FunctionFlags |= 0x400;
	memcpy_s(&RemoveActorEnvironment_Parms.EnvironmentID, 0x10, &EnvironmentID, 0x10);
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AActor*                  TargetActor                    (CPF_Parm)
// struct FAkEnvironment          Environment                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment& Environment)
{
	static UFunction* pFnAddActorEnvironment = nullptr;

	if (!pFnAddActorEnvironment)
	{
		pFnAddActorEnvironment = UFunction::FindFunction("Function AkAudio.AkEnvironments.AddActorEnvironment");

	}

	UAkEnvironments_execAddActorEnvironment_Parms AddActorEnvironment_Parms;
	memcpy_s(&AddActorEnvironment_Parms.TargetActor, 0x8, &TargetActor, 0x8);

	pFnAddActorEnvironment->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddActorEnvironment, &AddActorEnvironment_Parms, nullptr);

	pFnAddActorEnvironment->FunctionFlags |= 0x400;
	memcpy_s(&AddActorEnvironment_Parms.Environment, 0x20, &Environment, 0x20);
};

// Function AkAudio.AkEnvironments.AddLevelDefault
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAkEnvironment          Environment                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkEnvironments::AddLevelDefault(struct FAkEnvironment& Environment)
{
	static UFunction* pFnAddLevelDefault = nullptr;

	if (!pFnAddLevelDefault)
	{
		pFnAddLevelDefault = UFunction::FindFunction("Function AkAudio.AkEnvironments.AddLevelDefault");

	}

	UAkEnvironments_execAddLevelDefault_Parms AddLevelDefault_Parms;

	pFnAddLevelDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddLevelDefault, &AddLevelDefault_Parms, nullptr);

	pFnAddLevelDefault->FunctionFlags |= 0x400;
	memcpy_s(&AddLevelDefault_Parms.Environment, 0x20, &Environment, 0x20);
};

// Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Const | CPF_Parm)

void UAkMusicAnalysis::UpdateSmoothedMusicInfo(float DeltaTime)
{
	static UFunction* pFnUpdateSmoothedMusicInfo = nullptr;

	if (!pFnUpdateSmoothedMusicInfo)
	{
		pFnUpdateSmoothedMusicInfo = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.UpdateSmoothedMusicInfo");

	}

	UAkMusicAnalysis_execUpdateSmoothedMusicInfo_Parms UpdateSmoothedMusicInfo_Parms;
	memcpy_s(&UpdateSmoothedMusicInfo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	pFnUpdateSmoothedMusicInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateSmoothedMusicInfo, &UpdateSmoothedMusicInfo_Parms, nullptr);

	pFnUpdateSmoothedMusicInfo->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicAnalysis.UpdateMusicInfo
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FMusicAnalysisInfo      NewValues                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkMusicAnalysis::UpdateMusicInfo(struct FMusicAnalysisInfo& NewValues)
{
	static UFunction* pFnUpdateMusicInfo = nullptr;

	if (!pFnUpdateMusicInfo)
	{
		pFnUpdateMusicInfo = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.UpdateMusicInfo");

	}

	UAkMusicAnalysis_execUpdateMusicInfo_Parms UpdateMusicInfo_Parms;

	pFnUpdateMusicInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateMusicInfo, &UpdateMusicInfo_Parms, nullptr);

	pFnUpdateMusicInfo->FunctionFlags |= 0x400;
	memcpy_s(&UpdateMusicInfo_Parms.NewValues, 0x20, &NewValues, 0x20);
};

// Function AkAudio.AkMusicAnalysis.OnNewTrack
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            NewBPM                         (CPF_Parm)

void UAkMusicAnalysis::OnNewTrack(int NewBPM)
{
	static UFunction* pFnOnNewTrack = nullptr;

	if (!pFnOnNewTrack)
	{
		pFnOnNewTrack = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.OnNewTrack");

	}

	UAkMusicAnalysis_execOnNewTrack_Parms OnNewTrack_Parms;
	memcpy_s(&OnNewTrack_Parms.NewBPM, 0x4, &NewBPM, 0x4);

	pFnOnNewTrack->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOnNewTrack, &OnNewTrack_Parms, nullptr);

	pFnOnNewTrack->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicAnalysis.GetInstance
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAkMusicAnalysis*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAkMusicAnalysis* UAkMusicAnalysis::GetInstance()
{
	static UFunction* pFnGetInstance = nullptr;

	if (!pFnGetInstance)
	{
		pFnGetInstance = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.GetInstance");

	}

	UAkMusicAnalysis_execGetInstance_Parms GetInstance_Parms;

	pFnGetInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetInstance, &GetInstance_Parms, nullptr);

	pFnGetInstance->FunctionFlags |= 0x400;

	return GetInstance_Parms.ReturnValue;
};

// Function AkAudio.AkMusicAnalysis.EventMusicBar
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAkMusicAnalysis::EventMusicBar()
{
	static UFunction* pFnEventMusicBar = nullptr;

	if (!pFnEventMusicBar)
	{
		pFnEventMusicBar = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventMusicBar");

	}

	UAkMusicAnalysis_execEventMusicBar_Parms EventMusicBar_Parms;

	this->ProcessEvent(pFnEventMusicBar, &EventMusicBar_Parms, nullptr);
};

// Function AkAudio.AkMusicAnalysis.EventMusicBeat
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAkMusicAnalysis::EventMusicBeat()
{
	static UFunction* pFnEventMusicBeat = nullptr;

	if (!pFnEventMusicBeat)
	{
		pFnEventMusicBeat = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventMusicBeat");

	}

	UAkMusicAnalysis_execEventMusicBeat_Parms EventMusicBeat_Parms;

	this->ProcessEvent(pFnEventMusicBeat, &EventMusicBeat_Parms, nullptr);
};

// Function AkAudio.AkMusicAnalysis.EventNewMusicTrack
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            PlayingID                      (CPF_Parm)
// int                            NewBPM                         (CPF_Parm)

void UAkMusicAnalysis::EventNewMusicTrack(int PlayingID, int NewBPM)
{
	static UFunction* pFnEventNewMusicTrack = nullptr;

	if (!pFnEventNewMusicTrack)
	{
		pFnEventNewMusicTrack = UFunction::FindFunction("Function AkAudio.AkMusicAnalysis.EventNewMusicTrack");

	}

	UAkMusicAnalysis_execEventNewMusicTrack_Parms EventNewMusicTrack_Parms;
	memcpy_s(&EventNewMusicTrack_Parms.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventNewMusicTrack_Parms.NewBPM, 0x4, &NewBPM, 0x4);

	this->ProcessEvent(pFnEventNewMusicTrack, &EventNewMusicTrack_Parms, nullptr);
};

// Function AkAudio.AkMusicDevice.Seek
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// float                          PositionSeconds                (CPF_Parm)

void UAkMusicDevice::Seek(class UAkSoundCue* Sound, float PositionSeconds)
{
	static UFunction* pFnSeek = nullptr;

	if (!pFnSeek)
	{
		pFnSeek = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Seek");

	}

	UAkMusicDevice_execSeek_Parms Seek_Parms;
	memcpy_s(&Seek_Parms.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&Seek_Parms.PositionSeconds, 0x4, &PositionSeconds, 0x4);

	pFnSeek->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSeek, &Seek_Parms, nullptr);

	pFnSeek->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.SetRTCP
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkMusicDevice::SetRTCP(struct FName Key, float Value)
{
	static UFunction* pFnSetRTCP = nullptr;

	if (!pFnSetRTCP)
	{
		pFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkMusicDevice.SetRTCP");

	}

	UAkMusicDevice_execSetRTCP_Parms SetRTCP_Parms;
	memcpy_s(&SetRTCP_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Parms.Value, 0x4, &Value, 0x4);

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRTCP, &SetRTCP_Parms, nullptr);

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.StopPlayingID
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// int                            PlayingID                      (CPF_Parm)

void UAkMusicDevice::StopPlayingID(int PlayingID)
{
	static UFunction* pFnStopPlayingID = nullptr;

	if (!pFnStopPlayingID)
	{
		pFnStopPlayingID = UFunction::FindFunction("Function AkAudio.AkMusicDevice.StopPlayingID");

	}

	UAkMusicDevice_execStopPlayingID_Parms StopPlayingID_Parms;
	memcpy_s(&StopPlayingID_Parms.PlayingID, 0x4, &PlayingID, 0x4);

	pFnStopPlayingID->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopPlayingID, &StopPlayingID_Parms, nullptr);

	pFnStopPlayingID->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.Stop
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkMusicDevice::Stop(class UAkSoundCue* Sound)
{
	static UFunction* pFnStop = nullptr;

	if (!pFnStop)
	{
		pFnStop = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Stop");

	}

	UAkMusicDevice_execStop_Parms Stop_Parms;
	memcpy_s(&Stop_Parms.Sound, 0x8, &Sound, 0x8);

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStop, &Stop_Parms, nullptr);

	pFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkMusicDevice.Play
// [0x04022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

int UAkMusicDevice::Play(class UAkSoundCue* Sound)
{
	static UFunction* pFnPlay = nullptr;

	if (!pFnPlay)
	{
		pFnPlay = UFunction::FindFunction("Function AkAudio.AkMusicDevice.Play");

	}

	UAkMusicDevice_execPlay_Parms Play_Parms;
	memcpy_s(&Play_Parms.Sound, 0x8, &Sound, 0x8);

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPlay, &Play_Parms, nullptr);

	pFnPlay->FunctionFlags |= 0x400;

	return Play_Parms.ReturnValue;
};

// Function AkAudio.AkMusicDevice.EventTrackEnd
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            PlayingID                      (CPF_Parm)

void UAkMusicDevice::EventTrackEnd(int PlayingID)
{
	static UFunction* pFnEventTrackEnd = nullptr;

	if (!pFnEventTrackEnd)
	{
		pFnEventTrackEnd = UFunction::FindFunction("Function AkAudio.AkMusicDevice.EventTrackEnd");

	}

	UAkMusicDevice_execEventTrackEnd_Parms EventTrackEnd_Parms;
	memcpy_s(&EventTrackEnd_Parms.PlayingID, 0x4, &PlayingID, 0x4);

	this->ProcessEvent(pFnEventTrackEnd, &EventTrackEnd_Parms, nullptr);
};

// Function AkAudio.AkMusicDevice.EventTrackStart
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            PlayingID                      (CPF_Parm)
// struct FString                 FileMarker                     (CPF_Parm | CPF_NeedCtorLink)

void UAkMusicDevice::EventTrackStart(int PlayingID, struct FString FileMarker)
{
	static UFunction* pFnEventTrackStart = nullptr;

	if (!pFnEventTrackStart)
	{
		pFnEventTrackStart = UFunction::FindFunction("Function AkAudio.AkMusicDevice.EventTrackStart");

	}

	UAkMusicDevice_execEventTrackStart_Parms EventTrackStart_Parms;
	memcpy_s(&EventTrackStart_Parms.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventTrackStart_Parms.FileMarker, 0x10, &FileMarker, 0x10);

	this->ProcessEvent(pFnEventTrackStart, &EventTrackStart_Parms, nullptr);
};

// Function AkAudio.AkParamGroup.SetSendToSlapbacks
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSend                          (CPF_Parm)

void UAkParamGroup::SetSendToSlapbacks(unsigned long bSend)
{
	static UFunction* pFnSetSendToSlapbacks = nullptr;

	if (!pFnSetSendToSlapbacks)
	{
		pFnSetSendToSlapbacks = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetSendToSlapbacks");

	}

	UAkParamGroup_execSetSendToSlapbacks_Parms SetSendToSlapbacks_Parms;
	SetSendToSlapbacks_Parms.bSend = bSend;

	this->ProcessEvent(pFnSetSendToSlapbacks, &SetSendToSlapbacks_Parms, nullptr);
};

// Function AkAudio.AkParamGroup.SetControllerId
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            InID                           (CPF_Parm)

void UAkParamGroup::SetControllerId(int InID)
{
	static UFunction* pFnSetControllerId = nullptr;

	if (!pFnSetControllerId)
	{
		pFnSetControllerId = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetControllerId");

	}

	UAkParamGroup_execSetControllerId_Parms SetControllerId_Parms;
	memcpy_s(&SetControllerId_Parms.InID, 0x4, &InID, 0x4);

	this->ProcessEvent(pFnSetControllerId, &SetControllerId_Parms, nullptr);
};

// Function AkAudio.AkParamGroup.EnableObjectAttenuation
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkParamGroup::EnableObjectAttenuation()
{
	static UFunction* pFnEnableObjectAttenuation = nullptr;

	if (!pFnEnableObjectAttenuation)
	{
		pFnEnableObjectAttenuation = UFunction::FindFunction("Function AkAudio.AkParamGroup.EnableObjectAttenuation");

	}

	UAkParamGroup_execEnableObjectAttenuation_Parms EnableObjectAttenuation_Parms;

	this->ProcessEvent(pFnEnableObjectAttenuation, &EnableObjectAttenuation_Parms, nullptr);
};

// Function AkAudio.AkParamGroup.DisableObjectAttenuation
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkParamGroup::DisableObjectAttenuation()
{
	static UFunction* pFnDisableObjectAttenuation = nullptr;

	if (!pFnDisableObjectAttenuation)
	{
		pFnDisableObjectAttenuation = UFunction::FindFunction("Function AkAudio.AkParamGroup.DisableObjectAttenuation");

	}

	UAkParamGroup_execDisableObjectAttenuation_Parms DisableObjectAttenuation_Parms;

	this->ProcessEvent(pFnDisableObjectAttenuation, &DisableObjectAttenuation_Parms, nullptr);
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkParamGroup::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* pFnPrintDebugInfo = nullptr;

	if (!pFnPrintDebugInfo)
	{
		pFnPrintDebugInfo = UFunction::FindFunction("Function AkAudio.AkParamGroup.PrintDebugInfo");

	}

	UAkParamGroup_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	memcpy_s(&PrintDebugInfo_Parms.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(pFnPrintDebugInfo, &PrintDebugInfo_Parms, nullptr);
};

// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkParamGroup::UpdateSoundSourceAttenuationScaling()
{
	static UFunction* pFnUpdateSoundSourceAttenuationScaling = nullptr;

	if (!pFnUpdateSoundSourceAttenuationScaling)
	{
		pFnUpdateSoundSourceAttenuationScaling = UFunction::FindFunction("Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling");

	}

	UAkParamGroup_execUpdateSoundSourceAttenuationScaling_Parms UpdateSoundSourceAttenuationScaling_Parms;

	pFnUpdateSoundSourceAttenuationScaling->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateSoundSourceAttenuationScaling, &UpdateSoundSourceAttenuationScaling_Parms, nullptr);

	pFnUpdateSoundSourceAttenuationScaling->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetActorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkParamGroup::SetActorParameter(struct FName Key, class AActor* Value)
{
	static UFunction* pFnSetActorParameter = nullptr;

	if (!pFnSetActorParameter)
	{
		pFnSetActorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetActorParameter");

	}

	UAkParamGroup_execSetActorParameter_Parms SetActorParameter_Parms;
	memcpy_s(&SetActorParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetActorParameter_Parms.Value, 0x8, &Value, 0x8);

	pFnSetActorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetActorParameter, &SetActorParameter_Parms, nullptr);

	pFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkParamGroup::SetLinearColorParameter(struct FName Key, struct FLinearColor Value)
{
	static UFunction* pFnSetLinearColorParameter = nullptr;

	if (!pFnSetLinearColorParameter)
	{
		pFnSetLinearColorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetLinearColorParameter");

	}

	UAkParamGroup_execSetLinearColorParameter_Parms SetLinearColorParameter_Parms;
	memcpy_s(&SetLinearColorParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetLinearColorParameter_Parms.Value, 0x10, &Value, 0x10);

	pFnSetLinearColorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLinearColorParameter, &SetLinearColorParameter_Parms, nullptr);

	pFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetVectorParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkParamGroup::SetVectorParameter(struct FName Key, struct FVector Value)
{
	static UFunction* pFnSetVectorParameter = nullptr;

	if (!pFnSetVectorParameter)
	{
		pFnSetVectorParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetVectorParameter");

	}

	UAkParamGroup_execSetVectorParameter_Parms SetVectorParameter_Parms;
	memcpy_s(&SetVectorParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetVectorParameter_Parms.Value, 0xC, &Value, 0xC);

	pFnSetVectorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVectorParameter, &SetVectorParameter_Parms, nullptr);

	pFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetFloatParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetFloatParameter(struct FName Key, float Value)
{
	static UFunction* pFnSetFloatParameter = nullptr;

	if (!pFnSetFloatParameter)
	{
		pFnSetFloatParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetFloatParameter");

	}

	UAkParamGroup_execSetFloatParameter_Parms SetFloatParameter_Parms;
	memcpy_s(&SetFloatParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetFloatParameter_Parms.Value, 0x4, &Value, 0x4);

	pFnSetFloatParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetFloatParameter, &SetFloatParameter_Parms, nullptr);

	pFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetNameParameter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetNameParameter(struct FName Key, struct FName Value)
{
	static UFunction* pFnSetNameParameter = nullptr;

	if (!pFnSetNameParameter)
	{
		pFnSetNameParameter = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetNameParameter");

	}

	UAkParamGroup_execSetNameParameter_Parms SetNameParameter_Parms;
	memcpy_s(&SetNameParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetNameParameter_Parms.Value, 0x8, &Value, 0x8);

	pFnSetNameParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetNameParameter, &SetNameParameter_Parms, nullptr);

	pFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.GetDebugData
// [0x04420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           RTCPKeys                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<float>                  RTCPValues                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           SwitchKeys                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           SwitchValues                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UAkParamGroup::GetDebugData(TArray<struct FName>& RTCPKeys, TArray<float>& RTCPValues, TArray<struct FName>& SwitchKeys, TArray<struct FName>& SwitchValues)
{
	static UFunction* pFnGetDebugData = nullptr;

	if (!pFnGetDebugData)
	{
		pFnGetDebugData = UFunction::FindFunction("Function AkAudio.AkParamGroup.GetDebugData");

	}

	UAkParamGroup_execGetDebugData_Parms GetDebugData_Parms;

	pFnGetDebugData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDebugData, &GetDebugData_Parms, nullptr);

	pFnGetDebugData->FunctionFlags |= 0x400;
	memcpy_s(&GetDebugData_Parms.RTCPKeys, 0x10, &RTCPKeys, 0x10);
	memcpy_s(&GetDebugData_Parms.RTCPValues, 0x10, &RTCPValues, 0x10);
	memcpy_s(&GetDebugData_Parms.SwitchKeys, 0x10, &SwitchKeys, 0x10);
	memcpy_s(&GetDebugData_Parms.SwitchValues, 0x10, &SwitchValues, 0x10);
};

// Function AkAudio.AkParamGroup.StopSound
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkParamGroup::StopSound(class UAkSoundCue* Sound)
{
	static UFunction* pFnStopSound = nullptr;

	if (!pFnStopSound)
	{
		pFnStopSound = UFunction::FindFunction("Function AkAudio.AkParamGroup.StopSound");

	}

	UAkParamGroup_execStopSound_Parms StopSound_Parms;
	memcpy_s(&StopSound_Parms.Sound, 0x8, &Sound, 0x8);

	pFnStopSound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopSound, &StopSound_Parms, nullptr);

	pFnStopSound->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.PlaySound
// [0x04024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm | CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm | CPF_Parm)

class UAkSoundSource* UAkParamGroup::PlaySound(class UAkSoundCue* Sound, struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* pFnPlaySound = nullptr;

	if (!pFnPlaySound)
	{
		pFnPlaySound = UFunction::FindFunction("Function AkAudio.AkParamGroup.PlaySound");

	}

	UAkParamGroup_execPlaySound_Parms PlaySound_Parms;
	memcpy_s(&PlaySound_Parms.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&PlaySound_Parms.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&PlaySound_Parms.Rotation, 0xC, &Rotation, 0xC);

	pFnPlaySound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPlaySound, &PlaySound_Parms, nullptr);

	pFnPlaySound->FunctionFlags |= 0x400;

	return PlaySound_Parms.ReturnValue;
};

// Function AkAudio.AkParamGroup.SetSwitch
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetSwitch(struct FName Key, struct FName Value)
{
	static UFunction* pFnSetSwitch = nullptr;

	if (!pFnSetSwitch)
	{
		pFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetSwitch");

	}

	UAkParamGroup_execSetSwitch_Parms SetSwitch_Parms;
	memcpy_s(&SetSwitch_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetSwitch_Parms.Value, 0x8, &Value, 0x8);

	pFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSwitch, &SetSwitch_Parms, nullptr);

	pFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkParamGroup.SetRTCP
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetRTCP(struct FName Key, float Value)
{
	static UFunction* pFnSetRTCP = nullptr;

	if (!pFnSetRTCP)
	{
		pFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkParamGroup.SetRTCP");

	}

	UAkParamGroup_execSetRTCP_Parms SetRTCP_Parms;
	memcpy_s(&SetRTCP_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Parms.Value, 0x4, &Value, 0x4);

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRTCP, &SetRTCP_Parms, nullptr);

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetActorParameter(struct FName Key, class AActor* Value)
{
	static UFunction* pFnSetActorParameter = nullptr;

	if (!pFnSetActorParameter)
	{
		pFnSetActorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetActorParameter");

	}

	UAkPlaySoundComponent_execSetActorParameter_Parms SetActorParameter_Parms;
	memcpy_s(&SetActorParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetActorParameter_Parms.Value, 0x8, &Value, 0x8);

	pFnSetActorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetActorParameter, &SetActorParameter_Parms, nullptr);

	pFnSetActorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetLinearColorParameter(struct FName Key, struct FLinearColor Value)
{
	static UFunction* pFnSetLinearColorParameter = nullptr;

	if (!pFnSetLinearColorParameter)
	{
		pFnSetLinearColorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter");

	}

	UAkPlaySoundComponent_execSetLinearColorParameter_Parms SetLinearColorParameter_Parms;
	memcpy_s(&SetLinearColorParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetLinearColorParameter_Parms.Value, 0x10, &Value, 0x10);

	pFnSetLinearColorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLinearColorParameter, &SetLinearColorParameter_Parms, nullptr);

	pFnSetLinearColorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetVectorParameter(struct FName Key, struct FVector Value)
{
	static UFunction* pFnSetVectorParameter = nullptr;

	if (!pFnSetVectorParameter)
	{
		pFnSetVectorParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetVectorParameter");

	}

	UAkPlaySoundComponent_execSetVectorParameter_Parms SetVectorParameter_Parms;
	memcpy_s(&SetVectorParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetVectorParameter_Parms.Value, 0xC, &Value, 0xC);

	pFnSetVectorParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVectorParameter, &SetVectorParameter_Parms, nullptr);

	pFnSetVectorParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetFloatParameter(struct FName Key, float Value)
{
	static UFunction* pFnSetFloatParameter = nullptr;

	if (!pFnSetFloatParameter)
	{
		pFnSetFloatParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetFloatParameter");

	}

	UAkPlaySoundComponent_execSetFloatParameter_Parms SetFloatParameter_Parms;
	memcpy_s(&SetFloatParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetFloatParameter_Parms.Value, 0x4, &Value, 0x4);

	pFnSetFloatParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetFloatParameter, &SetFloatParameter_Parms, nullptr);

	pFnSetFloatParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetNameParameter(struct FName Key, struct FName Value)
{
	static UFunction* pFnSetNameParameter = nullptr;

	if (!pFnSetNameParameter)
	{
		pFnSetNameParameter = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetNameParameter");

	}

	UAkPlaySoundComponent_execSetNameParameter_Parms SetNameParameter_Parms;
	memcpy_s(&SetNameParameter_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetNameParameter_Parms.Value, 0x8, &Value, 0x8);

	pFnSetNameParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetNameParameter, &SetNameParameter_Parms, nullptr);

	pFnSetNameParameter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetRTCP(struct FName Key, float Value)
{
	static UFunction* pFnSetRTCP = nullptr;

	if (!pFnSetRTCP)
	{
		pFnSetRTCP = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetRTCP");

	}

	UAkPlaySoundComponent_execSetRTCP_Parms SetRTCP_Parms;
	memcpy_s(&SetRTCP_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetRTCP_Parms.Value, 0x4, &Value, 0x4);

	pFnSetRTCP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRTCP, &SetRTCP_Parms, nullptr);

	pFnSetRTCP->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetSwitch(struct FName Key, struct FName Value)
{
	static UFunction* pFnSetSwitch = nullptr;

	if (!pFnSetSwitch)
	{
		pFnSetSwitch = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.SetSwitch");

	}

	UAkPlaySoundComponent_execSetSwitch_Parms SetSwitch_Parms;
	memcpy_s(&SetSwitch_Parms.Key, 0x8, &Key, 0x8);
	memcpy_s(&SetSwitch_Parms.Value, 0x8, &Value, 0x8);

	pFnSetSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSwitch, &SetSwitch_Parms, nullptr);

	pFnSetSwitch->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UAkPlaySoundComponent::IsPlaying()
{
	static UFunction* pFnIsPlaying = nullptr;

	if (!pFnIsPlaying)
	{
		pFnIsPlaying = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.IsPlaying");

	}

	UAkPlaySoundComponent_execIsPlaying_Parms IsPlaying_Parms;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPlaying, &IsPlaying_Parms, nullptr);

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function AkAudio.AkPlaySoundComponent.Stop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkPlaySoundComponent::Stop()
{
	static UFunction* pFnStop = nullptr;

	if (!pFnStop)
	{
		pFnStop = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.Stop");

	}

	UAkPlaySoundComponent_execStop_Parms Stop_Parms;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStop, &Stop_Parms, nullptr);

	pFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkPlaySoundComponent.Play
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAkPlaySoundComponent::Play()
{
	static UFunction* pFnPlay = nullptr;

	if (!pFnPlay)
	{
		pFnPlay = UFunction::FindFunction("Function AkAudio.AkPlaySoundComponent.Play");

	}

	UAkPlaySoundComponent_execPlay_Parms Play_Parms;

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPlay, &Play_Parms, nullptr);

	pFnPlay->FunctionFlags |= 0x400;
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkRevPhysicsSimulation::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* pFnPrintDebugInfo = nullptr;

	if (!pFnPrintDebugInfo)
	{
		pFnPrintDebugInfo = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo");

	}

	UAkRevPhysicsSimulation_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	memcpy_s(&PrintDebugInfo_Parms.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(pFnPrintDebugInfo, &PrintDebugInfo_Parms, nullptr);
};

// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Gear                           (CPF_Parm)
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UAkRevPhysicsSimulation::InterpGearRatio(int Gear, struct FAkRevSimUpdateParams& SimUpdate)
{
	static UFunction* pFnInterpGearRatio = nullptr;

	if (!pFnInterpGearRatio)
	{
		pFnInterpGearRatio = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio");

	}

	UAkRevPhysicsSimulation_execInterpGearRatio_Parms InterpGearRatio_Parms;
	memcpy_s(&InterpGearRatio_Parms.Gear, 0x4, &Gear, 0x4);

	pFnInterpGearRatio->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInterpGearRatio, &InterpGearRatio_Parms, nullptr);

	pFnInterpGearRatio->FunctionFlags |= 0x400;
	memcpy_s(&InterpGearRatio_Parms.SimUpdate, 0x48, &SimUpdate, 0x48);

	return InterpGearRatio_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UAkRevPhysicsSimulation::GetGearRatio(struct FAkRevSimUpdateParams& SimUpdate)
{
	static UFunction* pFnGetGearRatio = nullptr;

	if (!pFnGetGearRatio)
	{
		pFnGetGearRatio = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.GetGearRatio");

	}

	UAkRevPhysicsSimulation_execGetGearRatio_Parms GetGearRatio_Parms;

	pFnGetGearRatio->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetGearRatio, &GetGearRatio_Parms, nullptr);

	pFnGetGearRatio->FunctionFlags |= 0x400;
	memcpy_s(&GetGearRatio_Parms.SimUpdate, 0x48, &SimUpdate, 0x48);

	return GetGearRatio_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GearRatio                      (CPF_Parm)
// float                          RPM                            (CPF_Parm)

float UAkRevPhysicsSimulation::CalcVelocity(float GearRatio, float RPM)
{
	static UFunction* pFnCalcVelocity = nullptr;

	if (!pFnCalcVelocity)
	{
		pFnCalcVelocity = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.CalcVelocity");

	}

	UAkRevPhysicsSimulation_execCalcVelocity_Parms CalcVelocity_Parms;
	memcpy_s(&CalcVelocity_Parms.GearRatio, 0x4, &GearRatio, 0x4);
	memcpy_s(&CalcVelocity_Parms.RPM, 0x4, &RPM, 0x4);

	pFnCalcVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCalcVelocity, &CalcVelocity_Parms, nullptr);

	pFnCalcVelocity->FunctionFlags |= 0x400;

	return CalcVelocity_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GearRatio                      (CPF_Parm)
// float                          Velocity                       (CPF_Parm)

float UAkRevPhysicsSimulation::CalcRPM(float GearRatio, float Velocity)
{
	static UFunction* pFnCalcRPM = nullptr;

	if (!pFnCalcRPM)
	{
		pFnCalcRPM = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.CalcRPM");

	}

	UAkRevPhysicsSimulation_execCalcRPM_Parms CalcRPM_Parms;
	memcpy_s(&CalcRPM_Parms.GearRatio, 0x4, &GearRatio, 0x4);
	memcpy_s(&CalcRPM_Parms.Velocity, 0x4, &Velocity, 0x4);

	pFnCalcRPM->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCalcRPM, &CalcRPM_Parms, nullptr);

	pFnCalcRPM->FunctionFlags |= 0x400;

	return CalcRPM_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.Step
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FAkRevSimFrame          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// struct FAkRevSimUpdateParams   Params                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FAkRevSimFrame UAkRevPhysicsSimulation::Step(float DeltaTime, struct FAkRevSimUpdateParams& Params)
{
	static UFunction* pFnStep = nullptr;

	if (!pFnStep)
	{
		pFnStep = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.Step");

	}

	UAkRevPhysicsSimulation_execStep_Parms Step_Parms;
	memcpy_s(&Step_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	pFnStep->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStep, &Step_Parms, nullptr);

	pFnStep->FunctionFlags |= 0x400;
	memcpy_s(&Step_Parms.Params, 0x48, &Params, 0x48);

	return Step_Parms.ReturnValue;
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkRevPhysicsSimulation* Simulation                     (CPF_Parm)

void UAkRevPhysicsSimulation::EventGearChange(class UAkRevPhysicsSimulation* Simulation)
{
	static UFunction* pFnEventGearChange = nullptr;

	if (!pFnEventGearChange)
	{
		pFnEventGearChange = UFunction::FindFunction("Function AkAudio.AkRevPhysicsSimulation.EventGearChange");

	}

	UAkRevPhysicsSimulation_execEventGearChange_Parms EventGearChange_Parms;
	memcpy_s(&EventGearChange_Parms.Simulation, 0x8, &Simulation, 0x8);

	this->ProcessEvent(pFnEventGearChange, &EventGearChange_Parms, nullptr);
};

// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
// [0x04020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bValue                         (CPF_Parm)

void UAkSoundSource::eventSetSubtitlesEnabled(unsigned long bValue)
{
	static UFunction* pFnSetSubtitlesEnabled = nullptr;

	if (!pFnSetSubtitlesEnabled)
	{
		pFnSetSubtitlesEnabled = UFunction::FindFunction("Function AkAudio.AkSoundSource.SetSubtitlesEnabled");

	}

	UAkSoundSource_eventSetSubtitlesEnabled_Parms SetSubtitlesEnabled_Parms;
	SetSubtitlesEnabled_Parms.bValue = bValue;

	this->ProcessEvent(pFnSetSubtitlesEnabled, &SetSubtitlesEnabled_Parms, nullptr);
};

// Function AkAudio.AkSoundSource.SetAttenuationScaling
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// unsigned char                  AttenuationType                (CPF_Parm)

void UAkSoundSource::SetAttenuationScaling(unsigned char AttenuationType)
{
	static UFunction* pFnSetAttenuationScaling = nullptr;

	if (!pFnSetAttenuationScaling)
	{
		pFnSetAttenuationScaling = UFunction::FindFunction("Function AkAudio.AkSoundSource.SetAttenuationScaling");

	}

	UAkSoundSource_execSetAttenuationScaling_Parms SetAttenuationScaling_Parms;
	SetAttenuationScaling_Parms.AttenuationType = AttenuationType;

	pFnSetAttenuationScaling->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetAttenuationScaling, &SetAttenuationScaling_Parms, nullptr);

	pFnSetAttenuationScaling->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.ForceUpdatePosition
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkSoundSource::ForceUpdatePosition()
{
	static UFunction* pFnForceUpdatePosition = nullptr;

	if (!pFnForceUpdatePosition)
	{
		pFnForceUpdatePosition = UFunction::FindFunction("Function AkAudio.AkSoundSource.ForceUpdatePosition");

	}

	UAkSoundSource_execForceUpdatePosition_Parms ForceUpdatePosition_Parms;

	pFnForceUpdatePosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnForceUpdatePosition, &ForceUpdatePosition_Parms, nullptr);

	pFnForceUpdatePosition->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// struct FName                   BusName                        (CPF_Parm)
// unsigned char                  BusType                        (CPF_Parm)

void UAkSoundSource::RegisterReflectionEmitter(struct FName BusName, unsigned char BusType)
{
	static UFunction* pFnRegisterReflectionEmitter = nullptr;

	if (!pFnRegisterReflectionEmitter)
	{
		pFnRegisterReflectionEmitter = UFunction::FindFunction("Function AkAudio.AkSoundSource.RegisterReflectionEmitter");

	}

	UAkSoundSource_execRegisterReflectionEmitter_Parms RegisterReflectionEmitter_Parms;
	memcpy_s(&RegisterReflectionEmitter_Parms.BusName, 0x8, &BusName, 0x8);
	RegisterReflectionEmitter_Parms.BusType = BusType;

	pFnRegisterReflectionEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterReflectionEmitter, &RegisterReflectionEmitter_Parms, nullptr);

	pFnRegisterReflectionEmitter->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.IsPlayingAny
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UAkSoundSource::IsPlayingAny()
{
	static UFunction* pFnIsPlayingAny = nullptr;

	if (!pFnIsPlayingAny)
	{
		pFnIsPlayingAny = UFunction::FindFunction("Function AkAudio.AkSoundSource.IsPlayingAny");

	}

	UAkSoundSource_execIsPlayingAny_Parms IsPlayingAny_Parms;

	pFnIsPlayingAny->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPlayingAny, &IsPlayingAny_Parms, nullptr);

	pFnIsPlayingAny->FunctionFlags |= 0x400;

	return IsPlayingAny_Parms.ReturnValue;
};

// Function AkAudio.AkSoundSource.IsPlaying
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

bool UAkSoundSource::IsPlaying(class UAkSoundCue* Sound)
{
	static UFunction* pFnIsPlaying = nullptr;

	if (!pFnIsPlaying)
	{
		pFnIsPlaying = UFunction::FindFunction("Function AkAudio.AkSoundSource.IsPlaying");

	}

	UAkSoundSource_execIsPlaying_Parms IsPlaying_Parms;
	memcpy_s(&IsPlaying_Parms.Sound, 0x8, &Sound, 0x8);

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPlaying, &IsPlaying_Parms, nullptr);

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function AkAudio.AkSoundSource.Seek
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// float                          SeekSeconds                    (CPF_Parm)

void UAkSoundSource::Seek(class UAkSoundCue* Sound, float SeekSeconds)
{
	static UFunction* pFnSeek = nullptr;

	if (!pFnSeek)
	{
		pFnSeek = UFunction::FindFunction("Function AkAudio.AkSoundSource.Seek");

	}

	UAkSoundSource_execSeek_Parms Seek_Parms;
	memcpy_s(&Seek_Parms.Sound, 0x8, &Sound, 0x8);
	memcpy_s(&Seek_Parms.SeekSeconds, 0x4, &SeekSeconds, 0x4);

	pFnSeek->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSeek, &Seek_Parms, nullptr);

	pFnSeek->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.StopAll
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:

void UAkSoundSource::StopAll()
{
	static UFunction* pFnStopAll = nullptr;

	if (!pFnStopAll)
	{
		pFnStopAll = UFunction::FindFunction("Function AkAudio.AkSoundSource.StopAll");

	}

	UAkSoundSource_execStopAll_Parms StopAll_Parms;

	pFnStopAll->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopAll, &StopAll_Parms, nullptr);

	pFnStopAll->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Stop
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Stop(class UAkSoundCue* Sound)
{
	static UFunction* pFnStop = nullptr;

	if (!pFnStop)
	{
		pFnStop = UFunction::FindFunction("Function AkAudio.AkSoundSource.Stop");

	}

	UAkSoundSource_execStop_Parms Stop_Parms;
	memcpy_s(&Stop_Parms.Sound, 0x8, &Sound, 0x8);

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStop, &Stop_Parms, nullptr);

	pFnStop->FunctionFlags |= 0x400;
};

// Function AkAudio.AkSoundSource.Play
// [0x04020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_BlueprintCallable | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

int UAkSoundSource::Play(class UAkSoundCue* Sound)
{
	static UFunction* pFnPlay = nullptr;

	if (!pFnPlay)
	{
		pFnPlay = UFunction::FindFunction("Function AkAudio.AkSoundSource.Play");

	}

	UAkSoundSource_execPlay_Parms Play_Parms;
	memcpy_s(&Play_Parms.Sound, 0x8, &Sound, 0x8);

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPlay, &Play_Parms, nullptr);

	pFnPlay->FunctionFlags |= 0x400;

	return Play_Parms.ReturnValue;
};

// Function AkAudio.AkSoundSource.EventDuration
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int                            PlayingID                      (CPF_Parm)
// float                          DurationMS                     (CPF_Parm)

void UAkSoundSource::EventDuration(class UAkSoundSource* Source, int PlayingID, float DurationMS)
{
	static UFunction* pFnEventDuration = nullptr;

	if (!pFnEventDuration)
	{
		pFnEventDuration = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventDuration");

	}

	UAkSoundSource_execEventDuration_Parms EventDuration_Parms;
	memcpy_s(&EventDuration_Parms.Source, 0x8, &Source, 0x8);
	memcpy_s(&EventDuration_Parms.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventDuration_Parms.DurationMS, 0x4, &DurationMS, 0x4);

	this->ProcessEvent(pFnEventDuration, &EventDuration_Parms, nullptr);
};

// Function AkAudio.AkSoundSource.EventMarker
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int                            PlayingID                      (CPF_Parm)
// struct FString                 Marker                         (CPF_Parm | CPF_NeedCtorLink)

void UAkSoundSource::EventMarker(class UAkSoundSource* Source, int PlayingID, struct FString Marker)
{
	static UFunction* pFnEventMarker = nullptr;

	if (!pFnEventMarker)
	{
		pFnEventMarker = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventMarker");

	}

	UAkSoundSource_execEventMarker_Parms EventMarker_Parms;
	memcpy_s(&EventMarker_Parms.Source, 0x8, &Source, 0x8);
	memcpy_s(&EventMarker_Parms.PlayingID, 0x4, &PlayingID, 0x4);
	memcpy_s(&EventMarker_Parms.Marker, 0x10, &Marker, 0x10);

	this->ProcessEvent(pFnEventMarker, &EventMarker_Parms, nullptr);
};

// Function AkAudio.AkSoundSource.EventFinished
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int                            PlayingID                      (CPF_Parm)

void UAkSoundSource::EventFinished(class UAkSoundSource* Source, int PlayingID)
{
	static UFunction* pFnEventFinished = nullptr;

	if (!pFnEventFinished)
	{
		pFnEventFinished = UFunction::FindFunction("Function AkAudio.AkSoundSource.EventFinished");

	}

	UAkSoundSource_execEventFinished_Parms EventFinished_Parms;
	memcpy_s(&EventFinished_Parms.Source, 0x8, &Source, 0x8);
	memcpy_s(&EventFinished_Parms.PlayingID, 0x4, &PlayingID, 0x4);

	this->ProcessEvent(pFnEventFinished, &EventFinished_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
// [0x00040803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 CueName                        (CPF_Parm | CPF_NeedCtorLink)

void USeqAct_AkPlayMusicWithCues::eventTriggerEvents(struct FString CueName)
{
	static UFunction* pFnTriggerEvents = nullptr;

	if (!pFnTriggerEvents)
	{
		pFnTriggerEvents = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents");

	}

	USeqAct_AkPlayMusicWithCues_eventTriggerEvents_Parms TriggerEvents_Parms;
	memcpy_s(&TriggerEvents_Parms.CueName, 0x10, &CueName, 0x10);

	this->ProcessEvent(pFnTriggerEvents, &TriggerEvents_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  A                              (CPF_Parm)
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSoundFor(class AActor* A, unsigned long bPlay)
{
	static UFunction* pFnToggleSoundFor = nullptr;

	if (!pFnToggleSoundFor)
	{
		pFnToggleSoundFor = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor");

	}

	USeqAct_AkPlaySound_execToggleSoundFor_Parms ToggleSoundFor_Parms;
	memcpy_s(&ToggleSoundFor_Parms.A, 0x8, &A, 0x8);
	ToggleSoundFor_Parms.bPlay = bPlay;

	this->ProcessEvent(pFnToggleSoundFor, &ToggleSoundFor_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSound(unsigned long bPlay)
{
	static UFunction* pFnToggleSound = nullptr;

	if (!pFnToggleSound)
	{
		pFnToggleSound = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.ToggleSound");

	}

	USeqAct_AkPlaySound_execToggleSound_Parms ToggleSound_Parms;
	ToggleSound_Parms.bPlay = bPlay;

	this->ProcessEvent(pFnToggleSound, &ToggleSound_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USeqAct_AkPlaySound::eventActivated()
{
	static UFunction* pFnActivated = nullptr;

	if (!pFnActivated)
	{
		pFnActivated = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySound.Activated");

	}

	USeqAct_AkPlaySound_eventActivated_Parms Activated_Parms;

	this->ProcessEvent(pFnActivated, &Activated_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
// [0x00040C01] (FUNC_Final | FUNC_Native | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UAkSoundSource*          Source                         (CPF_Parm | CPF_EditInline)
// int                            PlayingID                      (CPF_Parm)

void USeqAct_AkPostEvent::eventHandleSoundCueFinished(class UAkSoundSource* Source, int PlayingID)
{
	static UFunction* pFnHandleSoundCueFinished = nullptr;

	if (!pFnHandleSoundCueFinished)
	{
		pFnHandleSoundCueFinished = UFunction::FindFunction("Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished");

	}

	USeqAct_AkPostEvent_eventHandleSoundCueFinished_Parms HandleSoundCueFinished_Parms;
	memcpy_s(&HandleSoundCueFinished_Parms.Source, 0x8, &Source, 0x8);
	memcpy_s(&HandleSoundCueFinished_Parms.PlayingID, 0x4, &PlayingID, 0x4);

	pFnHandleSoundCueFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHandleSoundCueFinished, &HandleSoundCueFinished_Parms, nullptr);

	pFnHandleSoundCueFinished->FunctionFlags |= 0x400;
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AAkAmbientSoundActor::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* pFnOnToggle = nullptr;

	if (!pFnOnToggle)
	{
		pFnOnToggle = UFunction::FindFunction("Function AkAudio.AkAmbientSoundActor.OnToggle");

	}

	AAkAmbientSoundActor_execOnToggle_Parms OnToggle_Parms;
	memcpy_s(&OnToggle_Parms.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(pFnOnToggle, &OnToggle_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  A                              (CPF_Parm)
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySoundAndSeek::ToggleSoundFor(class AActor* A, unsigned long bPlay)
{
	static UFunction* pFnToggleSoundFor = nullptr;

	if (!pFnToggleSoundFor)
	{
		pFnToggleSoundFor = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSoundFor");

	}

	USeqAct_AkPlaySoundAndSeek_execToggleSoundFor_Parms ToggleSoundFor_Parms;
	memcpy_s(&ToggleSoundFor_Parms.A, 0x8, &A, 0x8);
	ToggleSoundFor_Parms.bPlay = bPlay;

	this->ProcessEvent(pFnToggleSoundFor, &ToggleSoundFor_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPlay                          (CPF_Parm)

void USeqAct_AkPlaySoundAndSeek::ToggleSound(unsigned long bPlay)
{
	static UFunction* pFnToggleSound = nullptr;

	if (!pFnToggleSound)
	{
		pFnToggleSound = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.ToggleSound");

	}

	USeqAct_AkPlaySoundAndSeek_execToggleSound_Parms ToggleSound_Parms;
	ToggleSound_Parms.bPlay = bPlay;

	this->ProcessEvent(pFnToggleSound, &ToggleSound_Parms, nullptr);
};

// Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USeqAct_AkPlaySoundAndSeek::eventActivated()
{
	static UFunction* pFnActivated = nullptr;

	if (!pFnActivated)
	{
		pFnActivated = UFunction::FindFunction("Function AkAudio.SeqAct_AkPlaySoundAndSeek.Activated");

	}

	USeqAct_AkPlaySoundAndSeek_eventActivated_Parms Activated_Parms;

	this->ProcessEvent(pFnActivated, &Activated_Parms, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
