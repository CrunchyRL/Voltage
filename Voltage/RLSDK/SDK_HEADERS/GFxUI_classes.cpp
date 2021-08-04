/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: GFxUI_classes.cpp
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

// Function GFxUI.GFxEngine.UpdateMovieLoadingInfo
// [0x00438401] (FUNC_Final | FUNC_Native | FUNC_UbergraphFunction | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FLoadingMovieMapInfo    LoadingInfo                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGFxEngine::UpdateMovieLoadingInfo(struct FLoadingMovieMapInfo& LoadingInfo)
{
	static UFunction* pFnUpdateMovieLoadingInfo = nullptr;

	if (!pFnUpdateMovieLoadingInfo)
	{
		pFnUpdateMovieLoadingInfo = UFunction::FindFunction("Function GFxUI.GFxEngine.UpdateMovieLoadingInfo");

	}

	UGFxEngine_execUpdateMovieLoadingInfo_Parms UpdateMovieLoadingInfo_Parms;

	pFnUpdateMovieLoadingInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateMovieLoadingInfo, &UpdateMovieLoadingInfo_Parms, nullptr);

	pFnUpdateMovieLoadingInfo->FunctionFlags |= 0x400;
	memcpy_s(&UpdateMovieLoadingInfo_Parms.LoadingInfo, 0xA0, &LoadingInfo, 0xA0);
};

// Function GFxUI.GFxEngine.Tick
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxEngine::eventTick(float DeltaTime)
{
	static UFunction* pFnTick = nullptr;

	if (!pFnTick)
	{
		pFnTick = UFunction::FindFunction("Function GFxUI.GFxEngine.Tick");

	}

	UGFxEngine_eventTick_Parms Tick_Parms;
	memcpy_s(&Tick_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(pFnTick, &Tick_Parms, nullptr);
};

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// struct FString                 Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg)
{
	static UFunction* pFnFSCommand = nullptr;

	if (!pFnFSCommand)
	{
		pFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler.FSCommand");

	}

	UGFxFSCmdHandler_eventFSCommand_Parms FSCommand_Parms;
	memcpy_s(&FSCommand_Parms.Movie, 0x8, &Movie, 0x8);
	memcpy_s(&FSCommand_Parms.Event, 0x8, &Event, 0x8);
	memcpy_s(&FSCommand_Parms.Cmd, 0x10, &Cmd, 0x10);
	memcpy_s(&FSCommand_Parms.Arg, 0x10, &Arg, 0x10);

	this->ProcessEvent(pFnFSCommand, &FSCommand_Parms, nullptr);

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.DebugInputKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// unsigned char                  Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_Parm)
// unsigned long                  bGamepad                       (CPF_Parm)

void UGFxInteraction::DebugInputKey(int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad)
{
	static UFunction* pFnDebugInputKey = nullptr;

	if (!pFnDebugInputKey)
	{
		pFnDebugInputKey = UFunction::FindFunction("Function GFxUI.GFxInteraction.DebugInputKey");

	}

	UGFxInteraction_execDebugInputKey_Parms DebugInputKey_Parms;
	memcpy_s(&DebugInputKey_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&DebugInputKey_Parms.Key, 0x8, &Key, 0x8);
	DebugInputKey_Parms.Event = Event;
	memcpy_s(&DebugInputKey_Parms.AmountDepressed, 0x4, &AmountDepressed, 0x4);
	DebugInputKey_Parms.bGamepad = bGamepad;

	pFnDebugInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDebugInputKey, &DebugInputKey_Parms, nullptr);

	pFnDebugInputKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxInteraction::CloseAllMoviePlayers()
{
	static UFunction* pFnCloseAllMoviePlayers = nullptr;

	if (!pFnCloseAllMoviePlayers)
	{
		pFnCloseAllMoviePlayers = UFunction::FindFunction("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");

	}

	UGFxInteraction_execCloseAllMoviePlayers_Parms CloseAllMoviePlayers_Parms;

	pFnCloseAllMoviePlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Parms, nullptr);

	pFnCloseAllMoviePlayers->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static UFunction* pFnNotifySplitscreenLayoutChanged = nullptr;

	if (!pFnNotifySplitscreenLayoutChanged)
	{
		pFnNotifySplitscreenLayoutChanged = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");

	}

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Parms NotifySplitscreenLayoutChanged_Parms;

	pFnNotifySplitscreenLayoutChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Parms, nullptr);

	pFnNotifySplitscreenLayoutChanged->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            RemovedPlayer                  (CPF_Parm)

void UGFxInteraction::NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static UFunction* pFnNotifyPlayerRemoved = nullptr;

	if (!pFnNotifyPlayerRemoved)
	{
		pFnNotifyPlayerRemoved = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");

	}

	UGFxInteraction_execNotifyPlayerRemoved_Parms NotifyPlayerRemoved_Parms;
	memcpy_s(&NotifyPlayerRemoved_Parms.PlayerIndex, 0x4, &PlayerIndex, 0x4);
	memcpy_s(&NotifyPlayerRemoved_Parms.RemovedPlayer, 0x8, &RemovedPlayer, 0x8);

	unsigned short NativeIndex = pFnNotifyPlayerRemoved->iNative;
	pFnNotifyPlayerRemoved->iNative = 0;

	pFnNotifyPlayerRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Parms, nullptr);

	pFnNotifyPlayerRemoved->FunctionFlags |= 0x400;

	pFnNotifyPlayerRemoved->iNative = NativeIndex;
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            AddedPlayer                    (CPF_Parm)

void UGFxInteraction::NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static UFunction* pFnNotifyPlayerAdded = nullptr;

	if (!pFnNotifyPlayerAdded)
	{
		pFnNotifyPlayerAdded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerAdded");

	}

	UGFxInteraction_execNotifyPlayerAdded_Parms NotifyPlayerAdded_Parms;
	memcpy_s(&NotifyPlayerAdded_Parms.PlayerIndex, 0x4, &PlayerIndex, 0x4);
	memcpy_s(&NotifyPlayerAdded_Parms.AddedPlayer, 0x8, &AddedPlayer, 0x8);

	unsigned short NativeIndex = pFnNotifyPlayerAdded->iNative;
	pFnNotifyPlayerAdded->iNative = 0;

	pFnNotifyPlayerAdded->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyPlayerAdded, &NotifyPlayerAdded_Parms, nullptr);

	pFnNotifyPlayerAdded->FunctionFlags |= 0x400;

	pFnNotifyPlayerAdded->iNative = NativeIndex;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UGFxInteraction::NotifyGameSessionEnded()
{
	static UFunction* pFnNotifyGameSessionEnded = nullptr;

	if (!pFnNotifyGameSessionEnded)
	{
		pFnNotifyGameSessionEnded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");

	}

	UGFxInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	unsigned short NativeIndex = pFnNotifyGameSessionEnded->iNative;
	pFnNotifyGameSessionEnded->iNative = 0;

	pFnNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, nullptr);

	pFnNotifyGameSessionEnded->FunctionFlags |= 0x400;

	pFnNotifyGameSessionEnded->iNative = NativeIndex;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            ControllerId                   (CPF_Parm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int ControllerId)
{
	static UFunction* pFnGetFocusMovie = nullptr;

	if (!pFnGetFocusMovie)
	{
		pFnGetFocusMovie = UFunction::FindFunction("Function GFxUI.GFxInteraction.GetFocusMovie");

	}

	UGFxInteraction_execGetFocusMovie_Parms GetFocusMovie_Parms;
	memcpy_s(&GetFocusMovie_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	pFnGetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFocusMovie, &GetFocusMovie_Parms, nullptr);

	pFnGetFocusMovie->FunctionFlags |= 0x400;

	return GetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetFullScreen
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bFullScreen                    (CPF_Parm)

void UGFxMoviePlayer::SetFullScreen(unsigned long bFullScreen)
{
	static UFunction* pFnSetFullScreen = nullptr;

	if (!pFnSetFullScreen)
	{
		pFnSetFullScreen = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetFullScreen");

	}

	UGFxMoviePlayer_execSetFullScreen_Parms SetFullScreen_Parms;
	SetFullScreen_Parms.bFullScreen = bFullScreen;

	pFnSetFullScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetFullScreen, &SetFullScreen_Parms, nullptr);

	pFnSetFullScreen->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.IsHidden
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxMoviePlayer::IsHidden()
{
	static UFunction* pFnIsHidden = nullptr;

	if (!pFnIsHidden)
	{
		pFnIsHidden = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.IsHidden");

	}

	UGFxMoviePlayer_execIsHidden_Parms IsHidden_Parms;

	pFnIsHidden->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsHidden, &IsHidden_Parms, nullptr);

	pFnIsHidden->FunctionFlags |= 0x400;

	return IsHidden_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetHidden
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bHidden                        (CPF_Parm)

void UGFxMoviePlayer::SetHidden(unsigned long bHidden)
{
	static UFunction* pFnSetHidden = nullptr;

	if (!pFnSetHidden)
	{
		pFnSetHidden = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetHidden");

	}

	UGFxMoviePlayer_execSetHidden_Parms SetHidden_Parms;
	SetHidden_Parms.bHidden = bHidden;

	pFnSetHidden->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetHidden, &SetHidden_Parms, nullptr);

	pFnSetHidden->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.RenderOnce
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::RenderOnce()
{
	static UFunction* pFnRenderOnce = nullptr;

	if (!pFnRenderOnce)
	{
		pFnRenderOnce = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.RenderOnce");

	}

	UGFxMoviePlayer_execRenderOnce_Parms RenderOnce_Parms;

	pFnRenderOnce->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRenderOnce, &RenderOnce_Parms, nullptr);

	pFnRenderOnce->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static UFunction* pFnUpdateSplitscreenLayout = nullptr;

	if (!pFnUpdateSplitscreenLayout)
	{
		pFnUpdateSplitscreenLayout = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");

	}

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Parms UpdateSplitscreenLayout_Parms;

	pFnUpdateSplitscreenLayout->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Parms, nullptr);

	pFnUpdateSplitscreenLayout->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(unsigned long bRemoveEffect)
{
	static UFunction* pFnApplyPriorityVisibilityEffect = nullptr;

	if (!pFnApplyPriorityVisibilityEffect)
	{
		pFnApplyPriorityVisibilityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");

	}

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Parms ApplyPriorityVisibilityEffect_Parms;
	ApplyPriorityVisibilityEffect_Parms.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(pFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(unsigned long bRemoveEffect)
{
	static UFunction* pFnApplyPriorityBlurEffect = nullptr;

	if (!pFnApplyPriorityBlurEffect)
	{
		pFnApplyPriorityBlurEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");

	}

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Parms ApplyPriorityBlurEffect_Parms;
	ApplyPriorityBlurEffect_Parms.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(pFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00030803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRequestedBlurState            (CPF_Parm)
// unsigned long                  bRequestedHiddenState          (CPF_Parm)

void UGFxMoviePlayer::eventApplyPriorityEffect(unsigned long bRequestedBlurState, unsigned long bRequestedHiddenState)
{
	static UFunction* pFnApplyPriorityEffect = nullptr;

	if (!pFnApplyPriorityEffect)
	{
		pFnApplyPriorityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");

	}

	UGFxMoviePlayer_eventApplyPriorityEffect_Parms ApplyPriorityEffect_Parms;
	ApplyPriorityEffect_Parms.bRequestedBlurState = bRequestedBlurState;
	ApplyPriorityEffect_Parms.bRequestedHiddenState = bRequestedHiddenState;

	this->ProcessEvent(pFnApplyPriorityEffect, &ApplyPriorityEffect_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   EventName                      (CPF_Parm)
// struct FName                   SoundThemeName                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::eventPlaySoundFromTheme(struct FName EventName, struct FName SoundThemeName)
{
	static UFunction* pFnPlaySoundFromTheme = nullptr;

	if (!pFnPlaySoundFromTheme)
	{
		pFnPlaySoundFromTheme = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");

	}

	UGFxMoviePlayer_eventPlaySoundFromTheme_Parms PlaySoundFromTheme_Parms;
	memcpy_s(&PlaySoundFromTheme_Parms.EventName, 0x8, &EventName, 0x8);
	memcpy_s(&PlaySoundFromTheme_Parms.SoundThemeName, 0x8, &SoundThemeName, 0x8);

	this->ProcessEvent(pFnPlaySoundFromTheme, &PlaySoundFromTheme_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00030801] (FUNC_Final | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusLost(int LocalPlayerIndex)
{
	static UFunction* pFnOnFocusLost = nullptr;

	if (!pFnOnFocusLost)
	{
		pFnOnFocusLost = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusLost");

	}

	UGFxMoviePlayer_eventOnFocusLost_Parms OnFocusLost_Parms;
	memcpy_s(&OnFocusLost_Parms.LocalPlayerIndex, 0x4, &LocalPlayerIndex, 0x4);

	this->ProcessEvent(pFnOnFocusLost, &OnFocusLost_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00030801] (FUNC_Final | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusGained(int LocalPlayerIndex)
{
	static UFunction* pFnOnFocusGained = nullptr;

	if (!pFnOnFocusGained)
	{
		pFnOnFocusGained = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusGained");

	}

	UGFxMoviePlayer_eventOnFocusGained_Parms OnFocusGained_Parms;
	memcpy_s(&OnFocusGained_Parms.LocalPlayerIndex, 0x4, &LocalPlayerIndex, 0x4);

	this->ProcessEvent(pFnOnFocusGained, &OnFocusGained_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Command                        (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ConsoleCommand(struct FString Command)
{
	static UFunction* pFnConsoleCommand = nullptr;

	if (!pFnConsoleCommand)
	{
		pFnConsoleCommand = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConsoleCommand");

	}

	UGFxMoviePlayer_execConsoleCommand_Parms ConsoleCommand_Parms;
	memcpy_s(&ConsoleCommand_Parms.Command, 0x10, &Command, 0x10);

	this->ProcessEvent(pFnConsoleCommand, &ConsoleCommand_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00030803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class APlayerController* UGFxMoviePlayer::eventGetPC()
{
	static UFunction* pFnGetPC = nullptr;

	if (!pFnGetPC)
	{
		pFnGetPC = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetPC");

	}

	UGFxMoviePlayer_eventGetPC_Parms GetPC_Parms;

	this->ProcessEvent(pFnGetPC, &GetPC_Parms, nullptr);

	return GetPC_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00030803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::eventGetLP()
{
	static UFunction* pFnGetLP = nullptr;

	if (!pFnGetLP)
	{
		pFnGetLP = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetLP");

	}

	UGFxMoviePlayer_eventGetLP_Parms GetLP_Parms;

	this->ProcessEvent(pFnGetLP, &GetLP_Parms, nullptr);

	return GetLP_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class ULocalPlayer*            LocPlay                        (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Init");

	}

	UGFxMoviePlayer_execInit_Parms Init_Parms;
	memcpy_s(&Init_Parms.LocPlay, 0x8, &LocPlay, 0x8);

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              WidgetToBind                   (CPF_Parm)
// struct FName                   Path                           (CPF_Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, struct FName Path)
{
	static UFunction* pFnSetWidgetPathBinding = nullptr;

	if (!pFnSetWidgetPathBinding)
	{
		pFnSetWidgetPathBinding = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");

	}

	UGFxMoviePlayer_execSetWidgetPathBinding_Parms SetWidgetPathBinding_Parms;
	memcpy_s(&SetWidgetPathBinding_Parms.WidgetToBind, 0x8, &WidgetToBind, 0x8);
	memcpy_s(&SetWidgetPathBinding_Parms.Path, 0x8, &Path, 0x8);

	pFnSetWidgetPathBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetWidgetPathBinding, &SetWidgetPathBinding_Parms, nullptr);

	pFnSetWidgetPathBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::eventPostWidgetInit()
{
	static UFunction* pFnPostWidgetInit = nullptr;

	if (!pFnPostWidgetInit)
	{
		pFnPostWidgetInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostWidgetInit");

	}

	UGFxMoviePlayer_eventPostWidgetInit_Parms PostWidgetInit_Parms;

	this->ProcessEvent(pFnPostWidgetInit, &PostWidgetInit_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetUnloaded(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* pFnWidgetUnloaded = nullptr;

	if (!pFnWidgetUnloaded)
	{
		pFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");

	}

	UGFxMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy_s(&WidgetUnloaded_Parms.WidgetName, 0x8, &WidgetName, 0x8);
	memcpy_s(&WidgetUnloaded_Parms.WidgetPath, 0x8, &WidgetPath, 0x8);
	memcpy_s(&WidgetUnloaded_Parms.Widget, 0x8, &Widget, 0x8);

	this->ProcessEvent(pFnWidgetUnloaded, &WidgetUnloaded_Parms, nullptr);

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* pFnWidgetInitialized = nullptr;

	if (!pFnWidgetInitialized)
	{
		pFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetInitialized");

	}

	UGFxMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy_s(&WidgetInitialized_Parms.WidgetName, 0x8, &WidgetName, 0x8);
	memcpy_s(&WidgetInitialized_Parms.WidgetPath, 0x8, &WidgetPath, 0x8);
	memcpy_s(&WidgetInitialized_Parms.Widget, 0x8, &Widget, 0x8);

	this->ProcessEvent(pFnWidgetInitialized, &WidgetInitialized_Parms, nullptr);

	return WidgetInitialized_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ClassName                      (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor(struct FString ClassName)
{
	static UFunction* pFnActionScriptConstructor = nullptr;

	if (!pFnActionScriptConstructor)
	{
		pFnActionScriptConstructor = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor");

	}

	UGFxMoviePlayer_execActionScriptConstructor_Parms ActionScriptConstructor_Parms;
	memcpy_s(&ActionScriptConstructor_Parms.ClassName, 0x10, &ClassName, 0x10);

	pFnActionScriptConstructor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptConstructor, &ActionScriptConstructor_Parms, nullptr);

	pFnActionScriptConstructor->FunctionFlags |= 0x400;

	return ActionScriptConstructor_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(struct FString Path)
{
	static UFunction* pFnActionScriptObject = nullptr;

	if (!pFnActionScriptObject)
	{
		pFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptObject");

	}

	UGFxMoviePlayer_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy_s(&ActionScriptObject_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptObject, &ActionScriptObject_Parms, nullptr);

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UGFxMoviePlayer::ActionScriptString(struct FString Path)
{
	static UFunction* pFnActionScriptString = nullptr;

	if (!pFnActionScriptString)
	{
		pFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptString");

	}

	UGFxMoviePlayer_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy_s(&ActionScriptString_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptString, &ActionScriptString_Parms, nullptr);

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::ActionScriptFloat(struct FString Path)
{
	static UFunction* pFnActionScriptFloat = nullptr;

	if (!pFnActionScriptFloat)
	{
		pFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");

	}

	UGFxMoviePlayer_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy_s(&ActionScriptFloat_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptFloat, &ActionScriptFloat_Parms, nullptr);

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

int UGFxMoviePlayer::ActionScriptInt(struct FString Path)
{
	static UFunction* pFnActionScriptInt = nullptr;

	if (!pFnActionScriptInt)
	{
		pFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptInt");

	}

	UGFxMoviePlayer_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy_s(&ActionScriptInt_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptInt, &ActionScriptInt_Parms, nullptr);

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(struct FString Path)
{
	static UFunction* pFnActionScriptVoid = nullptr;

	if (!pFnActionScriptVoid)
	{
		pFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");

	}

	UGFxMoviePlayer_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy_s(&ActionScriptVoid_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptVoid, &ActionScriptVoid_Parms, nullptr);

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 method                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FASValue>        args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(struct FString method, TArray<struct FASValue> args)
{
	static UFunction* pFnInvoke = nullptr;

	if (!pFnInvoke)
	{
		pFnInvoke = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Invoke");

	}

	UGFxMoviePlayer_execInvoke_Parms Invoke_Parms;
	memcpy_s(&Invoke_Parms.method, 0x10, &method, 0x10);
	memcpy_s(&Invoke_Parms.args, 0x10, &args, 0x10);

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInvoke, &Invoke_Parms, nullptr);

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              Object                         (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, struct FString Member)
{
	static UFunction* pFnActionScriptSetFunction = nullptr;

	if (!pFnActionScriptSetFunction)
	{
		pFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");

	}

	UGFxMoviePlayer_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	memcpy_s(&ActionScriptSetFunction_Parms.Object, 0x8, &Object, 0x8);
	memcpy_s(&ActionScriptSetFunction_Parms.Member, 0x10, &Member, 0x10);

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, nullptr);

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static UFunction* pFnCreateArray = nullptr;

	if (!pFnCreateArray)
	{
		pFnCreateArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateArray");

	}

	UGFxMoviePlayer_execCreateArray_Parms CreateArray_Parms;

	pFnCreateArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateArray, &CreateArray_Parms, nullptr);

	pFnCreateArray->FunctionFlags |= 0x400;

	return CreateArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ASClass                        (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FASValue>        args                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::CreateObject(struct FString ASClass, class UClass* Type, TArray<struct FASValue> args)
{
	static UFunction* pFnCreateObject = nullptr;

	if (!pFnCreateObject)
	{
		pFnCreateObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateObject");

	}

	UGFxMoviePlayer_execCreateObject_Parms CreateObject_Parms;
	memcpy_s(&CreateObject_Parms.ASClass, 0x10, &ASClass, 0x10);
	memcpy_s(&CreateObject_Parms.Type, 0x8, &Type, 0x8);
	memcpy_s(&CreateObject_Parms.args, 0x10, &args, 0x10);

	pFnCreateObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateObject, &CreateObject_Parms, nullptr);

	pFnCreateObject->FunctionFlags |= 0x400;

	return CreateObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FString>         Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableStringArray(struct FString Path, int Index, TArray<struct FString> Arg)
{
	static UFunction* pFnSetVariableStringArray = nullptr;

	if (!pFnSetVariableStringArray)
	{
		pFnSetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");

	}

	UGFxMoviePlayer_execSetVariableStringArray_Parms SetVariableStringArray_Parms;
	memcpy_s(&SetVariableStringArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableStringArray_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetVariableStringArray_Parms.Arg, 0x10, &Arg, 0x10);

	pFnSetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableStringArray, &SetVariableStringArray_Parms, nullptr);

	pFnSetVariableStringArray->FunctionFlags |= 0x400;

	return SetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<float>                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableFloatArray(struct FString Path, int Index, TArray<float> Arg)
{
	static UFunction* pFnSetVariableFloatArray = nullptr;

	if (!pFnSetVariableFloatArray)
	{
		pFnSetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");

	}

	UGFxMoviePlayer_execSetVariableFloatArray_Parms SetVariableFloatArray_Parms;
	memcpy_s(&SetVariableFloatArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableFloatArray_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetVariableFloatArray_Parms.Arg, 0x10, &Arg, 0x10);

	pFnSetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableFloatArray, &SetVariableFloatArray_Parms, nullptr);

	pFnSetVariableFloatArray->FunctionFlags |= 0x400;

	return SetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<int>                    Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableIntArray(struct FString Path, int Index, TArray<int> Arg)
{
	static UFunction* pFnSetVariableIntArray = nullptr;

	if (!pFnSetVariableIntArray)
	{
		pFnSetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");

	}

	UGFxMoviePlayer_execSetVariableIntArray_Parms SetVariableIntArray_Parms;
	memcpy_s(&SetVariableIntArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableIntArray_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetVariableIntArray_Parms.Arg, 0x10, &Arg, 0x10);

	pFnSetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableIntArray, &SetVariableIntArray_Parms, nullptr);

	pFnSetVariableIntArray->FunctionFlags |= 0x400;

	return SetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FASValue>        Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableArray(struct FString Path, int Index, TArray<struct FASValue> Arg)
{
	static UFunction* pFnSetVariableArray = nullptr;

	if (!pFnSetVariableArray)
	{
		pFnSetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableArray");

	}

	UGFxMoviePlayer_execSetVariableArray_Parms SetVariableArray_Parms;
	memcpy_s(&SetVariableArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableArray_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetVariableArray_Parms.Arg, 0x10, &Arg, 0x10);

	pFnSetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableArray, &SetVariableArray_Parms, nullptr);

	pFnSetVariableArray->FunctionFlags |= 0x400;

	return SetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FString>         Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableStringArray(struct FString Path, int Index, TArray<struct FString>& Arg)
{
	static UFunction* pFnGetVariableStringArray = nullptr;

	if (!pFnGetVariableStringArray)
	{
		pFnGetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");

	}

	UGFxMoviePlayer_execGetVariableStringArray_Parms GetVariableStringArray_Parms;
	memcpy_s(&GetVariableStringArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&GetVariableStringArray_Parms.Index, 0x4, &Index, 0x4);

	pFnGetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableStringArray, &GetVariableStringArray_Parms, nullptr);

	pFnGetVariableStringArray->FunctionFlags |= 0x400;
	memcpy_s(&GetVariableStringArray_Parms.Arg, 0x10, &Arg, 0x10);

	return GetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<float>                  Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableFloatArray(struct FString Path, int Index, TArray<float>& Arg)
{
	static UFunction* pFnGetVariableFloatArray = nullptr;

	if (!pFnGetVariableFloatArray)
	{
		pFnGetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");

	}

	UGFxMoviePlayer_execGetVariableFloatArray_Parms GetVariableFloatArray_Parms;
	memcpy_s(&GetVariableFloatArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&GetVariableFloatArray_Parms.Index, 0x4, &Index, 0x4);

	pFnGetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableFloatArray, &GetVariableFloatArray_Parms, nullptr);

	pFnGetVariableFloatArray->FunctionFlags |= 0x400;
	memcpy_s(&GetVariableFloatArray_Parms.Arg, 0x10, &Arg, 0x10);

	return GetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<int>                    Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableIntArray(struct FString Path, int Index, TArray<int>& Arg)
{
	static UFunction* pFnGetVariableIntArray = nullptr;

	if (!pFnGetVariableIntArray)
	{
		pFnGetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");

	}

	UGFxMoviePlayer_execGetVariableIntArray_Parms GetVariableIntArray_Parms;
	memcpy_s(&GetVariableIntArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&GetVariableIntArray_Parms.Index, 0x4, &Index, 0x4);

	pFnGetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableIntArray, &GetVariableIntArray_Parms, nullptr);

	pFnGetVariableIntArray->FunctionFlags |= 0x400;
	memcpy_s(&GetVariableIntArray_Parms.Arg, 0x10, &Arg, 0x10);

	return GetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FASValue>        Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableArray(struct FString Path, int Index, TArray<struct FASValue>& Arg)
{
	static UFunction* pFnGetVariableArray = nullptr;

	if (!pFnGetVariableArray)
	{
		pFnGetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableArray");

	}

	UGFxMoviePlayer_execGetVariableArray_Parms GetVariableArray_Parms;
	memcpy_s(&GetVariableArray_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&GetVariableArray_Parms.Index, 0x4, &Index, 0x4);

	pFnGetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableArray, &GetVariableArray_Parms, nullptr);

	pFnGetVariableArray->FunctionFlags |= 0x400;
	memcpy_s(&GetVariableArray_Parms.Arg, 0x10, &Arg, 0x10);

	return GetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              Object                         (CPF_Parm)

void UGFxMoviePlayer::SetVariableObject(struct FString Path, class UGFxObject* Object)
{
	static UFunction* pFnSetVariableObject = nullptr;

	if (!pFnSetVariableObject)
	{
		pFnSetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableObject");

	}

	UGFxMoviePlayer_execSetVariableObject_Parms SetVariableObject_Parms;
	memcpy_s(&SetVariableObject_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableObject_Parms.Object, 0x8, &Object, 0x8);

	pFnSetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableObject, &SetVariableObject_Parms, nullptr);

	pFnSetVariableObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(struct FString Path, struct FString S)
{
	static UFunction* pFnSetVariableString = nullptr;

	if (!pFnSetVariableString)
	{
		pFnSetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableString");

	}

	UGFxMoviePlayer_execSetVariableString_Parms SetVariableString_Parms;
	memcpy_s(&SetVariableString_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableString_Parms.S, 0x10, &S, 0x10);

	pFnSetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableString, &SetVariableString_Parms, nullptr);

	pFnSetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableInt(struct FString Path, int I)
{
	static UFunction* pFnSetVariableInt = nullptr;

	if (!pFnSetVariableInt)
	{
		pFnSetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableInt");

	}

	UGFxMoviePlayer_execSetVariableInt_Parms SetVariableInt_Parms;
	memcpy_s(&SetVariableInt_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableInt_Parms.I, 0x4, &I, 0x4);

	pFnSetVariableInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableInt, &SetVariableInt_Parms, nullptr);

	pFnSetVariableInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableNumber(struct FString Path, float F)
{
	static UFunction* pFnSetVariableNumber = nullptr;

	if (!pFnSetVariableNumber)
	{
		pFnSetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableNumber");

	}

	UGFxMoviePlayer_execSetVariableNumber_Parms SetVariableNumber_Parms;
	memcpy_s(&SetVariableNumber_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariableNumber_Parms.F, 0x4, &F, 0x4);

	pFnSetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableNumber, &SetVariableNumber_Parms, nullptr);

	pFnSetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  B                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableBool(struct FString Path, unsigned long B)
{
	static UFunction* pFnSetVariableBool = nullptr;

	if (!pFnSetVariableBool)
	{
		pFnSetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableBool");

	}

	UGFxMoviePlayer_execSetVariableBool_Parms SetVariableBool_Parms;
	memcpy_s(&SetVariableBool_Parms.Path, 0x10, &Path, 0x10);
	SetVariableBool_Parms.B = B;

	pFnSetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariableBool, &SetVariableBool_Parms, nullptr);

	pFnSetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariable(struct FString Path, struct FASValue Arg)
{
	static UFunction* pFnSetVariable = nullptr;

	if (!pFnSetVariable)
	{
		pFnSetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariable");

	}

	UGFxMoviePlayer_execSetVariable_Parms SetVariable_Parms;
	memcpy_s(&SetVariable_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SetVariable_Parms.Arg, 0x28, &Arg, 0x28);

	pFnSetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVariable, &SetVariable_Parms, nullptr);

	pFnSetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(struct FString Path, class UClass* Type)
{
	static UFunction* pFnGetVariableObject = nullptr;

	if (!pFnGetVariableObject)
	{
		pFnGetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableObject");

	}

	UGFxMoviePlayer_execGetVariableObject_Parms GetVariableObject_Parms;
	memcpy_s(&GetVariableObject_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&GetVariableObject_Parms.Type, 0x8, &Type, 0x8);

	pFnGetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableObject, &GetVariableObject_Parms, nullptr);

	pFnGetVariableObject->FunctionFlags |= 0x400;

	return GetVariableObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UGFxMoviePlayer::GetVariableString(struct FString Path)
{
	static UFunction* pFnGetVariableString = nullptr;

	if (!pFnGetVariableString)
	{
		pFnGetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableString");

	}

	UGFxMoviePlayer_execGetVariableString_Parms GetVariableString_Parms;
	memcpy_s(&GetVariableString_Parms.Path, 0x10, &Path, 0x10);

	pFnGetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableString, &GetVariableString_Parms, nullptr);

	pFnGetVariableString->FunctionFlags |= 0x400;

	return GetVariableString_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

int UGFxMoviePlayer::GetVariableInt(struct FString Path)
{
	static UFunction* pFnGetVariableInt = nullptr;

	if (!pFnGetVariableInt)
	{
		pFnGetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableInt");

	}

	UGFxMoviePlayer_execGetVariableInt_Parms GetVariableInt_Parms;
	memcpy_s(&GetVariableInt_Parms.Path, 0x10, &Path, 0x10);

	pFnGetVariableInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableInt, &GetVariableInt_Parms, nullptr);

	pFnGetVariableInt->FunctionFlags |= 0x400;

	return GetVariableInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::GetVariableNumber(struct FString Path)
{
	static UFunction* pFnGetVariableNumber = nullptr;

	if (!pFnGetVariableNumber)
	{
		pFnGetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableNumber");

	}

	UGFxMoviePlayer_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy_s(&GetVariableNumber_Parms.Path, 0x10, &Path, 0x10);

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableNumber, &GetVariableNumber_Parms, nullptr);

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableBool(struct FString Path)
{
	static UFunction* pFnGetVariableBool = nullptr;

	if (!pFnGetVariableBool)
	{
		pFnGetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableBool");

	}

	UGFxMoviePlayer_execGetVariableBool_Parms GetVariableBool_Parms;
	memcpy_s(&GetVariableBool_Parms.Path, 0x10, &Path, 0x10);

	pFnGetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableBool, &GetVariableBool_Parms, nullptr);

	pFnGetVariableBool->FunctionFlags |= 0x400;

	return GetVariableBool_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(struct FString Path)
{
	static UFunction* pFnGetVariable = nullptr;

	if (!pFnGetVariable)
	{
		pFnGetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariable");

	}

	UGFxMoviePlayer_execGetVariable_Parms GetVariable_Parms;
	memcpy_s(&GetVariable_Parms.Path, 0x10, &Path, 0x10);

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariable, &GetVariable_Parms, nullptr);

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UGFxMoviePlayer::GetAVMVersion()
{
	static UFunction* pFnGetAVMVersion = nullptr;

	if (!pFnGetAVMVersion)
	{
		pFnGetAVMVersion = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAVMVersion");

	}

	UGFxMoviePlayer_execGetAVMVersion_Parms GetAVMVersion_Parms;

	pFnGetAVMVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAVMVersion, &GetAVMVersion_Parms, nullptr);

	pFnGetAVMVersion->FunctionFlags |= 0x400;

	return GetAVMVersion_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00030801] (FUNC_Final | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// unsigned char                  InputEvent                     (CPF_Parm)

bool UGFxMoviePlayer::eventFilterButtonInput(int ControllerId, struct FName ButtonName, unsigned char InputEvent)
{
	static UFunction* pFnFilterButtonInput = nullptr;

	if (!pFnFilterButtonInput)
	{
		pFnFilterButtonInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FilterButtonInput");

	}

	UGFxMoviePlayer_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	memcpy_s(&FilterButtonInput_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&FilterButtonInput_Parms.ButtonName, 0x8, &ButtonName, 0x8);
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent(pFnFilterButtonInput, &FilterButtonInput_Parms, nullptr);

	return FilterButtonInput_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  capturekeysonly                (CPF_Parm)

void UGFxMoviePlayer::FlushPlayerInput(unsigned long capturekeysonly)
{
	static UFunction* pFnFlushPlayerInput = nullptr;

	if (!pFnFlushPlayerInput)
	{
		pFnFlushPlayerInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");

	}

	UGFxMoviePlayer_execFlushPlayerInput_Parms FlushPlayerInput_Parms;
	FlushPlayerInput_Parms.capturekeysonly = capturekeysonly;

	pFnFlushPlayerInput->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlushPlayerInput, &FlushPlayerInput_Parms, nullptr);

	pFnFlushPlayerInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static UFunction* pFnClearFocusIgnoreKeys = nullptr;

	if (!pFnClearFocusIgnoreKeys)
	{
		pFnClearFocusIgnoreKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");

	}

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Parms ClearFocusIgnoreKeys_Parms;

	pFnClearFocusIgnoreKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Parms, nullptr);

	pFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(struct FName Key)
{
	static UFunction* pFnAddFocusIgnoreKey = nullptr;

	if (!pFnAddFocusIgnoreKey)
	{
		pFnAddFocusIgnoreKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");

	}

	UGFxMoviePlayer_execAddFocusIgnoreKey_Parms AddFocusIgnoreKey_Parms;
	memcpy_s(&AddFocusIgnoreKey_Parms.Key, 0x8, &Key, 0x8);

	pFnAddFocusIgnoreKey->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Parms, nullptr);

	pFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static UFunction* pFnClearCaptureKeys = nullptr;

	if (!pFnClearCaptureKeys)
	{
		pFnClearCaptureKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");

	}

	UGFxMoviePlayer_execClearCaptureKeys_Parms ClearCaptureKeys_Parms;

	pFnClearCaptureKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearCaptureKeys, &ClearCaptureKeys_Parms, nullptr);

	pFnClearCaptureKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)

void UGFxMoviePlayer::AddCaptureKey(struct FName Key)
{
	static UFunction* pFnAddCaptureKey = nullptr;

	if (!pFnAddCaptureKey)
	{
		pFnAddCaptureKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddCaptureKey");

	}

	UGFxMoviePlayer_execAddCaptureKey_Parms AddCaptureKey_Parms;
	memcpy_s(&AddCaptureKey_Parms.Key, 0x8, &Key, 0x8);

	pFnAddCaptureKey->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddCaptureKey, &AddCaptureKey_Parms, nullptr);

	pFnAddCaptureKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bCanReceiveInput               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(unsigned long bCanReceiveInput)
{
	static UFunction* pFnSetMovieCanReceiveInput = nullptr;

	if (!pFnSetMovieCanReceiveInput)
	{
		pFnSetMovieCanReceiveInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	}

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Parms SetMovieCanReceiveInput_Parms;
	SetMovieCanReceiveInput_Parms.bCanReceiveInput = bCanReceiveInput;

	pFnSetMovieCanReceiveInput->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Parms, nullptr);

	pFnSetMovieCanReceiveInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bCanReceiveFocus               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(unsigned long bCanReceiveFocus)
{
	static UFunction* pFnSetMovieCanReceiveFocus = nullptr;

	if (!pFnSetMovieCanReceiveFocus)
	{
		pFnSetMovieCanReceiveFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	}

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Parms SetMovieCanReceiveFocus_Parms;
	SetMovieCanReceiveFocus_Parms.bCanReceiveFocus = bCanReceiveFocus;

	pFnSetMovieCanReceiveFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Parms, nullptr);

	pFnSetMovieCanReceiveFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 matPersp                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix& matPersp)
{
	static UFunction* pFnSetPerspective3D = nullptr;

	if (!pFnSetPerspective3D)
	{
		pFnSetPerspective3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPerspective3D");

	}

	UGFxMoviePlayer_execSetPerspective3D_Parms SetPerspective3D_Parms;

	pFnSetPerspective3D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetPerspective3D, &SetPerspective3D_Parms, nullptr);

	pFnSetPerspective3D->FunctionFlags |= 0x400;
	memcpy_s(&SetPerspective3D_Parms.matPersp, 0x40, &matPersp, 0x40);
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 matView                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix& matView)
{
	static UFunction* pFnSetView3D = nullptr;

	if (!pFnSetView3D)
	{
		pFnSetView3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetView3D");

	}

	UGFxMoviePlayer_execSetView3D_Parms SetView3D_Parms;

	pFnSetView3D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetView3D, &SetView3D_Parms, nullptr);

	pFnSetView3D->FunctionFlags |= 0x400;
	memcpy_s(&SetView3D_Parms.matView, 0x40, &matView, 0x40);
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          x0                             (CPF_Parm | CPF_OutParm)
// float                          y0                             (CPF_Parm | CPF_OutParm)
// float                          X1                             (CPF_Parm | CPF_OutParm)
// float                          Y1                             (CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float& x0, float& y0, float& X1, float& Y1)
{
	static UFunction* pFnGetVisibleFrameRect = nullptr;

	if (!pFnGetVisibleFrameRect)
	{
		pFnGetVisibleFrameRect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");

	}

	UGFxMoviePlayer_execGetVisibleFrameRect_Parms GetVisibleFrameRect_Parms;

	pFnGetVisibleFrameRect->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVisibleFrameRect, &GetVisibleFrameRect_Parms, nullptr);

	pFnGetVisibleFrameRect->FunctionFlags |= 0x400;
	memcpy_s(&GetVisibleFrameRect_Parms.x0, 0x4, &x0, 0x4);
	memcpy_s(&GetVisibleFrameRect_Parms.y0, 0x4, &y0, 0x4);
	memcpy_s(&GetVisibleFrameRect_Parms.X1, 0x4, &X1, 0x4);
	memcpy_s(&GetVisibleFrameRect_Parms.Y1, 0x4, &Y1, 0x4);
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  A                              (CPF_Parm)

void UGFxMoviePlayer::SetAlignment(unsigned char A)
{
	static UFunction* pFnSetAlignment = nullptr;

	if (!pFnSetAlignment)
	{
		pFnSetAlignment = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetAlignment");

	}

	UGFxMoviePlayer_execSetAlignment_Parms SetAlignment_Parms;
	SetAlignment_Parms.A = A;

	pFnSetAlignment->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetAlignment, &SetAlignment_Parms, nullptr);

	pFnSetAlignment->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  SM                             (CPF_Parm)

void UGFxMoviePlayer::SetViewScaleMode(unsigned char SM)
{
	static UFunction* pFnSetViewScaleMode = nullptr;

	if (!pFnSetViewScaleMode)
	{
		pFnSetViewScaleMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");

	}

	UGFxMoviePlayer_execSetViewScaleMode_Parms SetViewScaleMode_Parms;
	SetViewScaleMode_Parms.SM = SM;

	pFnSetViewScaleMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetViewScaleMode, &SetViewScaleMode_Parms, nullptr);

	pFnSetViewScaleMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            X                              (CPF_Parm)
// int                            Y                              (CPF_Parm)
// int                            Width                          (CPF_Parm)
// int                            Height                         (CPF_Parm)

void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static UFunction* pFnSetViewport = nullptr;

	if (!pFnSetViewport)
	{
		pFnSetViewport = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewport");

	}

	UGFxMoviePlayer_execSetViewport_Parms SetViewport_Parms;
	memcpy_s(&SetViewport_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&SetViewport_Parms.Y, 0x4, &Y, 0x4);
	memcpy_s(&SetViewport_Parms.Width, 0x4, &Width, 0x4);
	memcpy_s(&SetViewport_Parms.Height, 0x4, &Height, 0x4);

	pFnSetViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetViewport, &SetViewport_Parms, nullptr);

	pFnSetViewport->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameViewportClient*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static UFunction* pFnGetGameViewportClient = nullptr;

	if (!pFnGetGameViewportClient)
	{
		pFnGetGameViewportClient = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");

	}

	UGFxMoviePlayer_execGetGameViewportClient_Parms GetGameViewportClient_Parms;

	pFnGetGameViewportClient->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetGameViewportClient, &GetGameViewportClient_Parms, nullptr);

	pFnGetGameViewportClient->FunctionFlags |= 0x400;

	return GetGameViewportClient_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  NewPriority                    (CPF_Parm)

void UGFxMoviePlayer::SetPriority(unsigned char NewPriority)
{
	static UFunction* pFnSetPriority = nullptr;

	if (!pFnSetPriority)
	{
		pFnSetPriority = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPriority");

	}

	UGFxMoviePlayer_execSetPriority_Parms SetPriority_Parms;
	SetPriority_Parms.NewPriority = NewPriority;

	pFnSetPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetPriority, &SetPriority_Parms, nullptr);

	pFnSetPriority->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Resource                       (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                Texture                        (CPF_Parm)

bool UGFxMoviePlayer::SetExternalTexture(struct FString Resource, class UTexture* Texture)
{
	static UFunction* pFnSetExternalTexture = nullptr;

	if (!pFnSetExternalTexture)
	{
		pFnSetExternalTexture = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalTexture");

	}

	UGFxMoviePlayer_execSetExternalTexture_Parms SetExternalTexture_Parms;
	memcpy_s(&SetExternalTexture_Parms.Resource, 0x10, &Resource, 0x10);
	memcpy_s(&SetExternalTexture_Parms.Texture, 0x8, &Texture, 0x8);

	pFnSetExternalTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetExternalTexture, &SetExternalTexture_Parms, nullptr);

	pFnSetExternalTexture->FunctionFlags |= 0x400;

	return SetExternalTexture_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 H                              (CPF_Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static UFunction* pFnSetExternalInterface = nullptr;

	if (!pFnSetExternalInterface)
	{
		pFnSetExternalInterface = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalInterface");

	}

	UGFxMoviePlayer_execSetExternalInterface_Parms SetExternalInterface_Parms;
	memcpy_s(&SetExternalInterface_Parms.H, 0x8, &H, 0x8);

	this->ProcessEvent(pFnSetExternalInterface, &SetExternalInterface_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  Mode                           (CPF_Parm)

void UGFxMoviePlayer::SetTimingMode(unsigned char Mode)
{
	static UFunction* pFnSetTimingMode = nullptr;

	if (!pFnSetTimingMode)
	{
		pFnSetTimingMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetTimingMode");

	}

	UGFxMoviePlayer_execSetTimingMode_Parms SetTimingMode_Parms;
	SetTimingMode_Parms.Mode = Mode;

	pFnSetTimingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetTimingMode, &SetTimingMode_Parms, nullptr);

	pFnSetTimingMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USwfMovie*               Data                           (CPF_Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static UFunction* pFnSetMovieInfo = nullptr;

	if (!pFnSetMovieInfo)
	{
		pFnSetMovieInfo = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieInfo");

	}

	UGFxMoviePlayer_execSetMovieInfo_Parms SetMovieInfo_Parms;
	memcpy_s(&SetMovieInfo_Parms.Data, 0x8, &Data, 0x8);

	this->ProcessEvent(pFnSetMovieInfo, &SetMovieInfo_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::eventConditionalClearPause()
{
	static UFunction* pFnConditionalClearPause = nullptr;

	if (!pFnConditionalClearPause)
	{
		pFnConditionalClearPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");

	}

	UGFxMoviePlayer_eventConditionalClearPause_Parms ConditionalClearPause_Parms;

	this->ProcessEvent(pFnConditionalClearPause, &ConditionalClearPause_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::eventOnCleanup()
{
	static UFunction* pFnOnCleanup = nullptr;

	if (!pFnOnCleanup)
	{
		pFnOnCleanup = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnCleanup");

	}

	UGFxMoviePlayer_eventOnCleanup_Parms OnCleanup_Parms;

	this->ProcessEvent(pFnOnCleanup, &OnCleanup_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGFxMoviePlayer::eventOnClose()
{
	static UFunction* pFnOnClose = nullptr;

	if (!pFnOnClose)
	{
		pFnOnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnClose");

	}

	UGFxMoviePlayer_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent(pFnOnClose, &OnClose_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Unload                         (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Close(unsigned long Unload)
{
	static UFunction* pFnClose = nullptr;

	if (!pFnClose)
	{
		pFnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Close");

	}

	UGFxMoviePlayer_execClose_Parms Close_Parms;
	Close_Parms.Unload = Unload;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClose, &Close_Parms, nullptr);

	pFnClose->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPausePlayback                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::SetPause(unsigned long bPausePlayback)
{
	static UFunction* pFnSetPause = nullptr;

	if (!pFnSetPause)
	{
		pFnSetPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPause");

	}

	UGFxMoviePlayer_execSetPause_Parms SetPause_Parms;
	SetPause_Parms.bPausePlayback = bPausePlayback;

	pFnSetPause->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetPause, &SetPause_Parms, nullptr);

	pFnSetPause->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static UFunction* pFnOnPostAdvance = nullptr;

	if (!pFnOnPostAdvance)
	{
		pFnOnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnPostAdvance");

	}

	UGFxMoviePlayer_execOnPostAdvance_Parms OnPostAdvance_Parms;
	memcpy_s(&OnPostAdvance_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(pFnOnPostAdvance, &OnPostAdvance_Parms, nullptr);
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* pFnPostAdvance = nullptr;

	if (!pFnPostAdvance)
	{
		pFnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostAdvance");

	}

	UGFxMoviePlayer_execPostAdvance_Parms PostAdvance_Parms;
	memcpy_s(&PostAdvance_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	pFnPostAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPostAdvance, &PostAdvance_Parms, nullptr);

	pFnPostAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static UFunction* pFnAdvance = nullptr;

	if (!pFnAdvance)
	{
		pFnAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Advance");

	}

	UGFxMoviePlayer_execAdvance_Parms Advance_Parms;
	memcpy_s(&Advance_Parms.Time, 0x4, &Time, 0x4);

	pFnAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdvance, &Advance_Parms, nullptr);

	pFnAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UGFxMoviePlayer::eventStart(unsigned long StartPaused)
{
	static UFunction* pFnStart = nullptr;

	if (!pFnStart)
	{
		pFnStart = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Start");

	}

	UGFxMoviePlayer_eventStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStart, &Start_Parms, nullptr);

	pFnStart->FunctionFlags |= 0x400;

	return Start_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetUnloaded(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* pFnWidgetUnloaded = nullptr;

	if (!pFnWidgetUnloaded)
	{
		pFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetUnloaded");

	}

	UGFxObject_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy_s(&WidgetUnloaded_Parms.WidgetName, 0x8, &WidgetName, 0x8);
	memcpy_s(&WidgetUnloaded_Parms.WidgetPath, 0x8, &WidgetPath, 0x8);
	memcpy_s(&WidgetUnloaded_Parms.Widget, 0x8, &Widget, 0x8);

	this->ProcessEvent(pFnWidgetUnloaded, &WidgetUnloaded_Parms, nullptr);

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetInitialized(struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget)
{
	static UFunction* pFnWidgetInitialized = nullptr;

	if (!pFnWidgetInitialized)
	{
		pFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetInitialized");

	}

	UGFxObject_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy_s(&WidgetInitialized_Parms.WidgetName, 0x8, &WidgetName, 0x8);
	memcpy_s(&WidgetInitialized_Parms.WidgetPath, 0x8, &WidgetPath, 0x8);
	memcpy_s(&WidgetInitialized_Parms.Widget, 0x8, &Widget, 0x8);

	this->ProcessEvent(pFnWidgetInitialized, &WidgetInitialized_Parms, nullptr);

	return WidgetInitialized_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 symbolname                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int                            Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::AttachMovie(struct FString symbolname, struct FString instancename, int Depth, class UClass* Type)
{
	static UFunction* pFnAttachMovie = nullptr;

	if (!pFnAttachMovie)
	{
		pFnAttachMovie = UFunction::FindFunction("Function GFxUI.GFxObject.AttachMovie");

	}

	UGFxObject_execAttachMovie_Parms AttachMovie_Parms;
	memcpy_s(&AttachMovie_Parms.symbolname, 0x10, &symbolname, 0x10);
	memcpy_s(&AttachMovie_Parms.instancename, 0x10, &instancename, 0x10);
	memcpy_s(&AttachMovie_Parms.Depth, 0x4, &Depth, 0x4);
	memcpy_s(&AttachMovie_Parms.Type, 0x8, &Type, 0x8);

	pFnAttachMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAttachMovie, &AttachMovie_Parms, nullptr);

	pFnAttachMovie->FunctionFlags |= 0x400;

	return AttachMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int                            Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(struct FString instancename, int Depth, class UClass* Type)
{
	static UFunction* pFnCreateEmptyMovieClip = nullptr;

	if (!pFnCreateEmptyMovieClip)
	{
		pFnCreateEmptyMovieClip = UFunction::FindFunction("Function GFxUI.GFxObject.CreateEmptyMovieClip");

	}

	UGFxObject_execCreateEmptyMovieClip_Parms CreateEmptyMovieClip_Parms;
	memcpy_s(&CreateEmptyMovieClip_Parms.instancename, 0x10, &instancename, 0x10);
	memcpy_s(&CreateEmptyMovieClip_Parms.Depth, 0x4, &Depth, 0x4);
	memcpy_s(&CreateEmptyMovieClip_Parms.Type, 0x8, &Type, 0x8);

	pFnCreateEmptyMovieClip->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Parms, nullptr);

	pFnCreateEmptyMovieClip->FunctionFlags |= 0x400;

	return CreateEmptyMovieClip_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            frame                          (CPF_Parm)

void UGFxObject::GotoAndStopI(int frame)
{
	static UFunction* pFnGotoAndStopI = nullptr;

	if (!pFnGotoAndStopI)
	{
		pFnGotoAndStopI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStopI");

	}

	UGFxObject_execGotoAndStopI_Parms GotoAndStopI_Parms;
	memcpy_s(&GotoAndStopI_Parms.frame, 0x4, &frame, 0x4);

	pFnGotoAndStopI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGotoAndStopI, &GotoAndStopI_Parms, nullptr);

	pFnGotoAndStopI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndStop(struct FString frame)
{
	static UFunction* pFnGotoAndStop = nullptr;

	if (!pFnGotoAndStop)
	{
		pFnGotoAndStop = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStop");

	}

	UGFxObject_execGotoAndStop_Parms GotoAndStop_Parms;
	memcpy_s(&GotoAndStop_Parms.frame, 0x10, &frame, 0x10);

	pFnGotoAndStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGotoAndStop, &GotoAndStop_Parms, nullptr);

	pFnGotoAndStop->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            frame                          (CPF_Parm)

void UGFxObject::GotoAndPlayI(int frame)
{
	static UFunction* pFnGotoAndPlayI = nullptr;

	if (!pFnGotoAndPlayI)
	{
		pFnGotoAndPlayI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlayI");

	}

	UGFxObject_execGotoAndPlayI_Parms GotoAndPlayI_Parms;
	memcpy_s(&GotoAndPlayI_Parms.frame, 0x4, &frame, 0x4);

	pFnGotoAndPlayI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGotoAndPlayI, &GotoAndPlayI_Parms, nullptr);

	pFnGotoAndPlayI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndPlay(struct FString frame)
{
	static UFunction* pFnGotoAndPlay = nullptr;

	if (!pFnGotoAndPlay)
	{
		pFnGotoAndPlay = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlay");

	}

	UGFxObject_execGotoAndPlay_Parms GotoAndPlay_Parms;
	memcpy_s(&GotoAndPlay_Parms.frame, 0x10, &frame, 0x10);

	pFnGotoAndPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGotoAndPlay, &GotoAndPlay_Parms, nullptr);

	pFnGotoAndPlay->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class UGFxObject*>      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

TArray<class UGFxObject*> UGFxObject::ActionScriptArray(struct FString Path)
{
	static UFunction* pFnActionScriptArray = nullptr;

	if (!pFnActionScriptArray)
	{
		pFnActionScriptArray = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptArray");

	}

	UGFxObject_execActionScriptArray_Parms ActionScriptArray_Parms;
	memcpy_s(&ActionScriptArray_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptArray, &ActionScriptArray_Parms, nullptr);

	pFnActionScriptArray->FunctionFlags |= 0x400;

	return ActionScriptArray_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxObject::ActionScriptObject(struct FString Path)
{
	static UFunction* pFnActionScriptObject = nullptr;

	if (!pFnActionScriptObject)
	{
		pFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptObject");

	}

	UGFxObject_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy_s(&ActionScriptObject_Parms.Path, 0x10, &Path, 0x10);

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptObject, &ActionScriptObject_Parms, nullptr);

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 method                         (CPF_Parm | CPF_NeedCtorLink)

struct FString UGFxObject::ActionScriptString(struct FString method)
{
	static UFunction* pFnActionScriptString = nullptr;

	if (!pFnActionScriptString)
	{
		pFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptString");

	}

	UGFxObject_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy_s(&ActionScriptString_Parms.method, 0x10, &method, 0x10);

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptString, &ActionScriptString_Parms, nullptr);

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 method                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::ActionScriptFloat(struct FString method)
{
	static UFunction* pFnActionScriptFloat = nullptr;

	if (!pFnActionScriptFloat)
	{
		pFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptFloat");

	}

	UGFxObject_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy_s(&ActionScriptFloat_Parms.method, 0x10, &method, 0x10);

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptFloat, &ActionScriptFloat_Parms, nullptr);

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 method                         (CPF_Parm | CPF_NeedCtorLink)

int UGFxObject::ActionScriptInt(struct FString method)
{
	static UFunction* pFnActionScriptInt = nullptr;

	if (!pFnActionScriptInt)
	{
		pFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptInt");

	}

	UGFxObject_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy_s(&ActionScriptInt_Parms.method, 0x10, &method, 0x10);

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptInt, &ActionScriptInt_Parms, nullptr);

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 method                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptVoid(struct FString method)
{
	static UFunction* pFnActionScriptVoid = nullptr;

	if (!pFnActionScriptVoid)
	{
		pFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptVoid");

	}

	UGFxObject_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy_s(&ActionScriptVoid_Parms.method, 0x10, &method, 0x10);

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptVoid, &ActionScriptVoid_Parms, nullptr);

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FASValue>        args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Invoke(struct FString Member, TArray<struct FASValue> args)
{
	static UFunction* pFnInvoke = nullptr;

	if (!pFnInvoke)
	{
		pFnInvoke = UFunction::FindFunction("Function GFxUI.GFxObject.Invoke");

	}

	UGFxObject_execInvoke_Parms Invoke_Parms;
	memcpy_s(&Invoke_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&Invoke_Parms.args, 0x10, &args, 0x10);

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInvoke, &Invoke_Parms, nullptr);

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              Target                         (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, struct FString Member)
{
	static UFunction* pFnActionScriptSetFunctionOn = nullptr;

	if (!pFnActionScriptSetFunctionOn)
	{
		pFnActionScriptSetFunctionOn = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");

	}

	UGFxObject_execActionScriptSetFunctionOn_Parms ActionScriptSetFunctionOn_Parms;
	memcpy_s(&ActionScriptSetFunctionOn_Parms.Target, 0x8, &Target, 0x8);
	memcpy_s(&ActionScriptSetFunctionOn_Parms.Member, 0x10, &Member, 0x10);

	pFnActionScriptSetFunctionOn->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Parms, nullptr);

	pFnActionScriptSetFunctionOn->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(struct FString Member)
{
	static UFunction* pFnActionScriptSetFunction = nullptr;

	if (!pFnActionScriptSetFunction)
	{
		pFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunction");

	}

	UGFxObject_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	memcpy_s(&ActionScriptSetFunction_Parms.Member, 0x10, &Member, 0x10);

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, nullptr);

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMemberString(int Index, struct FString Member, struct FString S)
{
	static UFunction* pFnSetElementMemberString = nullptr;

	if (!pFnSetElementMemberString)
	{
		pFnSetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberString");

	}

	UGFxObject_execSetElementMemberString_Parms SetElementMemberString_Parms;
	memcpy_s(&SetElementMemberString_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementMemberString_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetElementMemberString_Parms.S, 0x10, &S, 0x10);

	pFnSetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementMemberString, &SetElementMemberString_Parms, nullptr);

	pFnSetElementMemberString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

void UGFxObject::SetElementMemberInt(int Index, struct FString Member, int I)
{
	static UFunction* pFnSetElementMemberInt = nullptr;

	if (!pFnSetElementMemberInt)
	{
		pFnSetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberInt");

	}

	UGFxObject_execSetElementMemberInt_Parms SetElementMemberInt_Parms;
	memcpy_s(&SetElementMemberInt_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementMemberInt_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetElementMemberInt_Parms.I, 0x4, &I, 0x4);

	pFnSetElementMemberInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementMemberInt, &SetElementMemberInt_Parms, nullptr);

	pFnSetElementMemberInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementMemberFloat(int Index, struct FString Member, float F)
{
	static UFunction* pFnSetElementMemberFloat = nullptr;

	if (!pFnSetElementMemberFloat)
	{
		pFnSetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberFloat");

	}

	UGFxObject_execSetElementMemberFloat_Parms SetElementMemberFloat_Parms;
	memcpy_s(&SetElementMemberFloat_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementMemberFloat_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetElementMemberFloat_Parms.F, 0x4, &F, 0x4);

	pFnSetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementMemberFloat, &SetElementMemberFloat_Parms, nullptr);

	pFnSetElementMemberFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  B                              (CPF_Parm)

void UGFxObject::SetElementMemberBool(int Index, struct FString Member, unsigned long B)
{
	static UFunction* pFnSetElementMemberBool = nullptr;

	if (!pFnSetElementMemberBool)
	{
		pFnSetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberBool");

	}

	UGFxObject_execSetElementMemberBool_Parms SetElementMemberBool_Parms;
	memcpy_s(&SetElementMemberBool_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementMemberBool_Parms.Member, 0x10, &Member, 0x10);
	SetElementMemberBool_Parms.B = B;

	pFnSetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementMemberBool, &SetElementMemberBool_Parms, nullptr);

	pFnSetElementMemberBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementMemberObject(int Index, struct FString Member, class UGFxObject* val)
{
	static UFunction* pFnSetElementMemberObject = nullptr;

	if (!pFnSetElementMemberObject)
	{
		pFnSetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberObject");

	}

	UGFxObject_execSetElementMemberObject_Parms SetElementMemberObject_Parms;
	memcpy_s(&SetElementMemberObject_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementMemberObject_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetElementMemberObject_Parms.val, 0x8, &val, 0x8);

	pFnSetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementMemberObject, &SetElementMemberObject_Parms, nullptr);

	pFnSetElementMemberObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMember(int Index, struct FString Member, struct FASValue Arg)
{
	static UFunction* pFnSetElementMember = nullptr;

	if (!pFnSetElementMember)
	{
		pFnSetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMember");

	}

	UGFxObject_execSetElementMember_Parms SetElementMember_Parms;
	memcpy_s(&SetElementMember_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementMember_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetElementMember_Parms.Arg, 0x28, &Arg, 0x28);

	pFnSetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementMember, &SetElementMember_Parms, nullptr);

	pFnSetElementMember->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FString UGFxObject::GetElementMemberString(int Index, struct FString Member)
{
	static UFunction* pFnGetElementMemberString = nullptr;

	if (!pFnGetElementMemberString)
	{
		pFnGetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberString");

	}

	UGFxObject_execGetElementMemberString_Parms GetElementMemberString_Parms;
	memcpy_s(&GetElementMemberString_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementMemberString_Parms.Member, 0x10, &Member, 0x10);

	pFnGetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementMemberString, &GetElementMemberString_Parms, nullptr);

	pFnGetElementMemberString->FunctionFlags |= 0x400;

	return GetElementMemberString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

int UGFxObject::GetElementMemberInt(int Index, struct FString Member)
{
	static UFunction* pFnGetElementMemberInt = nullptr;

	if (!pFnGetElementMemberInt)
	{
		pFnGetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberInt");

	}

	UGFxObject_execGetElementMemberInt_Parms GetElementMemberInt_Parms;
	memcpy_s(&GetElementMemberInt_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementMemberInt_Parms.Member, 0x10, &Member, 0x10);

	pFnGetElementMemberInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementMemberInt, &GetElementMemberInt_Parms, nullptr);

	pFnGetElementMemberInt->FunctionFlags |= 0x400;

	return GetElementMemberInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetElementMemberFloat(int Index, struct FString Member)
{
	static UFunction* pFnGetElementMemberFloat = nullptr;

	if (!pFnGetElementMemberFloat)
	{
		pFnGetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberFloat");

	}

	UGFxObject_execGetElementMemberFloat_Parms GetElementMemberFloat_Parms;
	memcpy_s(&GetElementMemberFloat_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementMemberFloat_Parms.Member, 0x10, &Member, 0x10);

	pFnGetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementMemberFloat, &GetElementMemberFloat_Parms, nullptr);

	pFnGetElementMemberFloat->FunctionFlags |= 0x400;

	return GetElementMemberFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetElementMemberBool(int Index, struct FString Member)
{
	static UFunction* pFnGetElementMemberBool = nullptr;

	if (!pFnGetElementMemberBool)
	{
		pFnGetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberBool");

	}

	UGFxObject_execGetElementMemberBool_Parms GetElementMemberBool_Parms;
	memcpy_s(&GetElementMemberBool_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementMemberBool_Parms.Member, 0x10, &Member, 0x10);

	pFnGetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementMemberBool, &GetElementMemberBool_Parms, nullptr);

	pFnGetElementMemberBool->FunctionFlags |= 0x400;

	return GetElementMemberBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementMemberObject(int Index, struct FString Member, class UClass* Type)
{
	static UFunction* pFnGetElementMemberObject = nullptr;

	if (!pFnGetElementMemberObject)
	{
		pFnGetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberObject");

	}

	UGFxObject_execGetElementMemberObject_Parms GetElementMemberObject_Parms;
	memcpy_s(&GetElementMemberObject_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementMemberObject_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&GetElementMemberObject_Parms.Type, 0x8, &Type, 0x8);

	pFnGetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementMemberObject, &GetElementMemberObject_Parms, nullptr);

	pFnGetElementMemberObject->FunctionFlags |= 0x400;

	return GetElementMemberObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int Index, struct FString Member)
{
	static UFunction* pFnGetElementMember = nullptr;

	if (!pFnGetElementMember)
	{
		pFnGetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMember");

	}

	UGFxObject_execGetElementMember_Parms GetElementMember_Parms;
	memcpy_s(&GetElementMember_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementMember_Parms.Member, 0x10, &Member, 0x10);

	pFnGetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementMember, &GetElementMember_Parms, nullptr);

	pFnGetElementMember->FunctionFlags |= 0x400;

	return GetElementMember_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetElementColorTransform(int Index, struct FASColorTransform cxform)
{
	static UFunction* pFnSetElementColorTransform = nullptr;

	if (!pFnSetElementColorTransform)
	{
		pFnSetElementColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementColorTransform");

	}

	UGFxObject_execSetElementColorTransform_Parms SetElementColorTransform_Parms;
	memcpy_s(&SetElementColorTransform_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementColorTransform_Parms.cxform, 0x20, &cxform, 0x20);

	pFnSetElementColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementColorTransform, &SetElementColorTransform_Parms, nullptr);

	pFnSetElementColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetElementPosition(int Index, float X, float Y)
{
	static UFunction* pFnSetElementPosition = nullptr;

	if (!pFnSetElementPosition)
	{
		pFnSetElementPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementPosition");

	}

	UGFxObject_execSetElementPosition_Parms SetElementPosition_Parms;
	memcpy_s(&SetElementPosition_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementPosition_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&SetElementPosition_Parms.Y, 0x4, &Y, 0x4);

	pFnSetElementPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementPosition, &SetElementPosition_Parms, nullptr);

	pFnSetElementPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// unsigned long                  Visible                        (CPF_Parm)

void UGFxObject::SetElementVisible(int Index, unsigned long Visible)
{
	static UFunction* pFnSetElementVisible = nullptr;

	if (!pFnSetElementVisible)
	{
		pFnSetElementVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementVisible");

	}

	UGFxObject_execSetElementVisible_Parms SetElementVisible_Parms;
	memcpy_s(&SetElementVisible_Parms.Index, 0x4, &Index, 0x4);
	SetElementVisible_Parms.Visible = Visible;

	pFnSetElementVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementVisible, &SetElementVisible_Parms, nullptr);

	pFnSetElementVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetElementDisplayMatrix(int Index, struct FMatrix M)
{
	static UFunction* pFnSetElementDisplayMatrix = nullptr;

	if (!pFnSetElementDisplayMatrix)
	{
		pFnSetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayMatrix");

	}

	UGFxObject_execSetElementDisplayMatrix_Parms SetElementDisplayMatrix_Parms;
	memcpy_s(&SetElementDisplayMatrix_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementDisplayMatrix_Parms.M, 0x40, &M, 0x40);

	pFnSetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Parms, nullptr);

	pFnSetElementDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetElementDisplayInfo(int Index, struct FASDisplayInfo D)
{
	static UFunction* pFnSetElementDisplayInfo = nullptr;

	if (!pFnSetElementDisplayInfo)
	{
		pFnSetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayInfo");

	}

	UGFxObject_execSetElementDisplayInfo_Parms SetElementDisplayInfo_Parms;
	memcpy_s(&SetElementDisplayInfo_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementDisplayInfo_Parms.D, 0x2C, &D, 0x2C);

	pFnSetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementDisplayInfo, &SetElementDisplayInfo_Parms, nullptr);

	pFnSetElementDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int Index)
{
	static UFunction* pFnGetElementDisplayMatrix = nullptr;

	if (!pFnGetElementDisplayMatrix)
	{
		pFnGetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayMatrix");

	}

	UGFxObject_execGetElementDisplayMatrix_Parms GetElementDisplayMatrix_Parms;
	memcpy_s(&GetElementDisplayMatrix_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Parms, nullptr);

	pFnGetElementDisplayMatrix->FunctionFlags |= 0x400;

	return GetElementDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int Index)
{
	static UFunction* pFnGetElementDisplayInfo = nullptr;

	if (!pFnGetElementDisplayInfo)
	{
		pFnGetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayInfo");

	}

	UGFxObject_execGetElementDisplayInfo_Parms GetElementDisplayInfo_Parms;
	memcpy_s(&GetElementDisplayInfo_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementDisplayInfo, &GetElementDisplayInfo_Parms, nullptr);

	pFnGetElementDisplayInfo->FunctionFlags |= 0x400;

	return GetElementDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementString(int Index, struct FString S)
{
	static UFunction* pFnSetElementString = nullptr;

	if (!pFnSetElementString)
	{
		pFnSetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementString");

	}

	UGFxObject_execSetElementString_Parms SetElementString_Parms;
	memcpy_s(&SetElementString_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementString_Parms.S, 0x10, &S, 0x10);

	pFnSetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementString, &SetElementString_Parms, nullptr);

	pFnSetElementString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// int                            I                              (CPF_Parm)

void UGFxObject::SetElementInt(int Index, int I)
{
	static UFunction* pFnSetElementInt = nullptr;

	if (!pFnSetElementInt)
	{
		pFnSetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementInt");

	}

	UGFxObject_execSetElementInt_Parms SetElementInt_Parms;
	memcpy_s(&SetElementInt_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementInt_Parms.I, 0x4, &I, 0x4);

	pFnSetElementInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementInt, &SetElementInt_Parms, nullptr);

	pFnSetElementInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementFloat(int Index, float F)
{
	static UFunction* pFnSetElementFloat = nullptr;

	if (!pFnSetElementFloat)
	{
		pFnSetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementFloat");

	}

	UGFxObject_execSetElementFloat_Parms SetElementFloat_Parms;
	memcpy_s(&SetElementFloat_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementFloat_Parms.F, 0x4, &F, 0x4);

	pFnSetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementFloat, &SetElementFloat_Parms, nullptr);

	pFnSetElementFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

void UGFxObject::SetElementBool(int Index, unsigned long B)
{
	static UFunction* pFnSetElementBool = nullptr;

	if (!pFnSetElementBool)
	{
		pFnSetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementBool");

	}

	UGFxObject_execSetElementBool_Parms SetElementBool_Parms;
	memcpy_s(&SetElementBool_Parms.Index, 0x4, &Index, 0x4);
	SetElementBool_Parms.B = B;

	pFnSetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementBool, &SetElementBool_Parms, nullptr);

	pFnSetElementBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementObject(int Index, class UGFxObject* val)
{
	static UFunction* pFnSetElementObject = nullptr;

	if (!pFnSetElementObject)
	{
		pFnSetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementObject");

	}

	UGFxObject_execSetElementObject_Parms SetElementObject_Parms;
	memcpy_s(&SetElementObject_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElementObject_Parms.val, 0x8, &val, 0x8);

	pFnSetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElementObject, &SetElementObject_Parms, nullptr);

	pFnSetElementObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Index                          (CPF_Parm)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElement(int Index, struct FASValue Arg)
{
	static UFunction* pFnSetElement = nullptr;

	if (!pFnSetElement)
	{
		pFnSetElement = UFunction::FindFunction("Function GFxUI.GFxObject.SetElement");

	}

	UGFxObject_execSetElement_Parms SetElement_Parms;
	memcpy_s(&SetElement_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetElement_Parms.Arg, 0x28, &Arg, 0x28);

	pFnSetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetElement, &SetElement_Parms, nullptr);

	pFnSetElement->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)

struct FString UGFxObject::GetElementString(int Index)
{
	static UFunction* pFnGetElementString = nullptr;

	if (!pFnGetElementString)
	{
		pFnGetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementString");

	}

	UGFxObject_execGetElementString_Parms GetElementString_Parms;
	memcpy_s(&GetElementString_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementString, &GetElementString_Parms, nullptr);

	pFnGetElementString->FunctionFlags |= 0x400;

	return GetElementString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)

int UGFxObject::GetElementInt(int Index)
{
	static UFunction* pFnGetElementInt = nullptr;

	if (!pFnGetElementInt)
	{
		pFnGetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementInt");

	}

	UGFxObject_execGetElementInt_Parms GetElementInt_Parms;
	memcpy_s(&GetElementInt_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElementInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementInt, &GetElementInt_Parms, nullptr);

	pFnGetElementInt->FunctionFlags |= 0x400;

	return GetElementInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)

float UGFxObject::GetElementFloat(int Index)
{
	static UFunction* pFnGetElementFloat = nullptr;

	if (!pFnGetElementFloat)
	{
		pFnGetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementFloat");

	}

	UGFxObject_execGetElementFloat_Parms GetElementFloat_Parms;
	memcpy_s(&GetElementFloat_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementFloat, &GetElementFloat_Parms, nullptr);

	pFnGetElementFloat->FunctionFlags |= 0x400;

	return GetElementFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)

bool UGFxObject::GetElementBool(int Index)
{
	static UFunction* pFnGetElementBool = nullptr;

	if (!pFnGetElementBool)
	{
		pFnGetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementBool");

	}

	UGFxObject_execGetElementBool_Parms GetElementBool_Parms;
	memcpy_s(&GetElementBool_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementBool, &GetElementBool_Parms, nullptr);

	pFnGetElementBool->FunctionFlags |= 0x400;

	return GetElementBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Index                          (CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementObject(int Index, class UClass* Type)
{
	static UFunction* pFnGetElementObject = nullptr;

	if (!pFnGetElementObject)
	{
		pFnGetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementObject");

	}

	UGFxObject_execGetElementObject_Parms GetElementObject_Parms;
	memcpy_s(&GetElementObject_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&GetElementObject_Parms.Type, 0x8, &Type, 0x8);

	pFnGetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElementObject, &GetElementObject_Parms, nullptr);

	pFnGetElementObject->FunctionFlags |= 0x400;

	return GetElementObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)

struct FASValue UGFxObject::GetElement(int Index)
{
	static UFunction* pFnGetElement = nullptr;

	if (!pFnGetElement)
	{
		pFnGetElement = UFunction::FindFunction("Function GFxUI.GFxObject.GetElement");

	}

	UGFxObject_execGetElement_Parms GetElement_Parms;
	memcpy_s(&GetElement_Parms.Index, 0x4, &Index, 0x4);

	pFnGetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetElement, &GetElement_Parms, nullptr);

	pFnGetElement->FunctionFlags |= 0x400;

	return GetElement_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetText(struct FString Text, class UTranslationContext* InContext)
{
	static UFunction* pFnSetText = nullptr;

	if (!pFnSetText)
	{
		pFnSetText = UFunction::FindFunction("Function GFxUI.GFxObject.SetText");

	}

	UGFxObject_execSetText_Parms SetText_Parms;
	memcpy_s(&SetText_Parms.Text, 0x10, &Text, 0x10);
	memcpy_s(&SetText_Parms.InContext, 0x8, &InContext, 0x8);

	pFnSetText->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetText, &SetText_Parms, nullptr);

	pFnSetText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UGFxObject::GetText()
{
	static UFunction* pFnGetText = nullptr;

	if (!pFnGetText)
	{
		pFnGetText = UFunction::FindFunction("Function GFxUI.GFxObject.GetText");

	}

	UGFxObject_execGetText_Parms GetText_Parms;

	pFnGetText->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetText, &GetText_Parms, nullptr);

	pFnGetText->FunctionFlags |= 0x400;

	return GetText_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Visible                        (CPF_Parm)

void UGFxObject::SetVisible(unsigned long Visible)
{
	static UFunction* pFnSetVisible = nullptr;

	if (!pFnSetVisible)
	{
		pFnSetVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetVisible");

	}

	UGFxObject_execSetVisible_Parms SetVisible_Parms;
	SetVisible_Parms.Visible = Visible;

	pFnSetVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVisible, &SetVisible_Parms, nullptr);

	pFnSetVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix3D(struct FMatrix M)
{
	static UFunction* pFnSetDisplayMatrix3D = nullptr;

	if (!pFnSetDisplayMatrix3D)
	{
		pFnSetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix3D");

	}

	UGFxObject_execSetDisplayMatrix3D_Parms SetDisplayMatrix3D_Parms;
	memcpy_s(&SetDisplayMatrix3D_Parms.M, 0x40, &M, 0x40);

	pFnSetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Parms, nullptr);

	pFnSetDisplayMatrix3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix(struct FMatrix M)
{
	static UFunction* pFnSetDisplayMatrix = nullptr;

	if (!pFnSetDisplayMatrix)
	{
		pFnSetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix");

	}

	UGFxObject_execSetDisplayMatrix_Parms SetDisplayMatrix_Parms;
	memcpy_s(&SetDisplayMatrix_Parms.M, 0x40, &M, 0x40);

	pFnSetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetDisplayMatrix, &SetDisplayMatrix_Parms, nullptr);

	pFnSetDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetColorTransform(struct FASColorTransform cxform)
{
	static UFunction* pFnSetColorTransform = nullptr;

	if (!pFnSetColorTransform)
	{
		pFnSetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetColorTransform");

	}

	UGFxObject_execSetColorTransform_Parms SetColorTransform_Parms;
	memcpy_s(&SetColorTransform_Parms.cxform, 0x20, &cxform, 0x20);

	pFnSetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetColorTransform, &SetColorTransform_Parms, nullptr);

	pFnSetColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* pFnSetPosition = nullptr;

	if (!pFnSetPosition)
	{
		pFnSetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetPosition");

	}

	UGFxObject_execSetPosition_Parms SetPosition_Parms;
	memcpy_s(&SetPosition_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&SetPosition_Parms.Y, 0x4, &Y, 0x4);

	pFnSetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetPosition, &SetPosition_Parms, nullptr);

	pFnSetPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetDisplayInfo(struct FASDisplayInfo D)
{
	static UFunction* pFnSetDisplayInfo = nullptr;

	if (!pFnSetDisplayInfo)
	{
		pFnSetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayInfo");

	}

	UGFxObject_execSetDisplayInfo_Parms SetDisplayInfo_Parms;
	memcpy_s(&SetDisplayInfo_Parms.D, 0x2C, &D, 0x2C);

	pFnSetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetDisplayInfo, &SetDisplayInfo_Parms, nullptr);

	pFnSetDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static UFunction* pFnGetDisplayMatrix3D = nullptr;

	if (!pFnGetDisplayMatrix3D)
	{
		pFnGetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix3D");

	}

	UGFxObject_execGetDisplayMatrix3D_Parms GetDisplayMatrix3D_Parms;

	pFnGetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Parms, nullptr);

	pFnGetDisplayMatrix3D->FunctionFlags |= 0x400;

	return GetDisplayMatrix3D_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static UFunction* pFnGetDisplayMatrix = nullptr;

	if (!pFnGetDisplayMatrix)
	{
		pFnGetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix");

	}

	UGFxObject_execGetDisplayMatrix_Parms GetDisplayMatrix_Parms;

	pFnGetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDisplayMatrix, &GetDisplayMatrix_Parms, nullptr);

	pFnGetDisplayMatrix->FunctionFlags |= 0x400;

	return GetDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASColorTransform       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* pFnGetColorTransform = nullptr;

	if (!pFnGetColorTransform)
	{
		pFnGetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.GetColorTransform");

	}

	UGFxObject_execGetColorTransform_Parms GetColorTransform_Parms;

	pFnGetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetColorTransform, &GetColorTransform_Parms, nullptr);

	pFnGetColorTransform->FunctionFlags |= 0x400;

	return GetColorTransform_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm | CPF_OutParm)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool UGFxObject::GetPosition(float& X, float& Y)
{
	static UFunction* pFnGetPosition = nullptr;

	if (!pFnGetPosition)
	{
		pFnGetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.GetPosition");

	}

	UGFxObject_execGetPosition_Parms GetPosition_Parms;

	pFnGetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPosition, &GetPosition_Parms, nullptr);

	pFnGetPosition->FunctionFlags |= 0x400;
	memcpy_s(&GetPosition_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&GetPosition_Parms.Y, 0x4, &Y, 0x4);

	return GetPosition_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static UFunction* pFnGetDisplayInfo = nullptr;

	if (!pFnGetDisplayInfo)
	{
		pFnGetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayInfo");

	}

	UGFxObject_execGetDisplayInfo_Parms GetDisplayInfo_Parms;

	pFnGetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDisplayInfo, &GetDisplayInfo_Parms, nullptr);

	pFnGetDisplayInfo->FunctionFlags |= 0x400;

	return GetDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 StringToTranslate              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

struct FString UGFxObject::TranslateString(struct FString StringToTranslate, class UTranslationContext* InContext)
{
	static UFunction* pFnTranslateString = nullptr;

	if (!pFnTranslateString)
	{
		pFnTranslateString = UFunction::FindFunction("Function GFxUI.GFxObject.TranslateString");

	}

	UGFxObject_execTranslateString_Parms TranslateString_Parms;
	memcpy_s(&TranslateString_Parms.StringToTranslate, 0x10, &StringToTranslate, 0x10);
	memcpy_s(&TranslateString_Parms.InContext, 0x8, &InContext, 0x8);

	pFnTranslateString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTranslateString, &TranslateString_Parms, nullptr);

	pFnTranslateString->FunctionFlags |= 0x400;

	return TranslateString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 Context                        (CPF_Parm)
// struct FName                   fname                          (CPF_Parm)

void UGFxObject::SetFunction(struct FString Member, class UObject* Context, struct FName fname)
{
	static UFunction* pFnSetFunction = nullptr;

	if (!pFnSetFunction)
	{
		pFnSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.SetFunction");

	}

	UGFxObject_execSetFunction_Parms SetFunction_Parms;
	memcpy_s(&SetFunction_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetFunction_Parms.Context, 0x8, &Context, 0x8);
	memcpy_s(&SetFunction_Parms.fname, 0x8, &fname, 0x8);

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetFunction, &SetFunction_Parms, nullptr);

	pFnSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetObject(struct FString Member, class UGFxObject* val)
{
	static UFunction* pFnSetObject = nullptr;

	if (!pFnSetObject)
	{
		pFnSetObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetObject");

	}

	UGFxObject_execSetObject_Parms SetObject_Parms;
	memcpy_s(&SetObject_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetObject_Parms.val, 0x8, &val, 0x8);

	pFnSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetObject, &SetObject_Parms, nullptr);

	pFnSetObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetString(struct FString Member, struct FString S, class UTranslationContext* InContext)
{
	static UFunction* pFnSetString = nullptr;

	if (!pFnSetString)
	{
		pFnSetString = UFunction::FindFunction("Function GFxUI.GFxObject.SetString");

	}

	UGFxObject_execSetString_Parms SetString_Parms;
	memcpy_s(&SetString_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetString_Parms.S, 0x10, &S, 0x10);
	memcpy_s(&SetString_Parms.InContext, 0x8, &InContext, 0x8);

	pFnSetString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetString, &SetString_Parms, nullptr);

	pFnSetString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

void UGFxObject::SetInt(struct FString Member, int I)
{
	static UFunction* pFnSetInt = nullptr;

	if (!pFnSetInt)
	{
		pFnSetInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetInt");

	}

	UGFxObject_execSetInt_Parms SetInt_Parms;
	memcpy_s(&SetInt_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetInt_Parms.I, 0x4, &I, 0x4);

	pFnSetInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetInt, &SetInt_Parms, nullptr);

	pFnSetInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetFloat(struct FString Member, float F)
{
	static UFunction* pFnSetFloat = nullptr;

	if (!pFnSetFloat)
	{
		pFnSetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetFloat");

	}

	UGFxObject_execSetFloat_Parms SetFloat_Parms;
	memcpy_s(&SetFloat_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetFloat_Parms.F, 0x4, &F, 0x4);

	pFnSetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetFloat, &SetFloat_Parms, nullptr);

	pFnSetFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  B                              (CPF_Parm)

void UGFxObject::SetBool(struct FString Member, unsigned long B)
{
	static UFunction* pFnSetBool = nullptr;

	if (!pFnSetBool)
	{
		pFnSetBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetBool");

	}

	UGFxObject_execSetBool_Parms SetBool_Parms;
	memcpy_s(&SetBool_Parms.Member, 0x10, &Member, 0x10);
	SetBool_Parms.B = B;

	pFnSetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetBool, &SetBool_Parms, nullptr);

	pFnSetBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Set
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::Set(struct FString Member, struct FASValue Arg)
{
	static UFunction* pFnSet = nullptr;

	if (!pFnSet)
	{
		pFnSet = UFunction::FindFunction("Function GFxUI.GFxObject.Set");

	}

	UGFxObject_execSet_Parms Set_Parms;
	memcpy_s(&Set_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&Set_Parms.Arg, 0x28, &Arg, 0x28);

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSet, &Set_Parms, nullptr);

	pFnSet->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetObjectW(struct FString Member, class UClass* Type)
{
	static UFunction* pFnGetObjectW = nullptr;

	if (!pFnGetObjectW)
	{
		pFnGetObjectW = UFunction::FindFunction("Function GFxUI.GFxObject.GetObject");

	}

	UGFxObject_execGetObjectW_Parms GetObjectW_Parms;
	memcpy_s(&GetObjectW_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&GetObjectW_Parms.Type, 0x8, &Type, 0x8);

	pFnGetObjectW->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetObjectW, &GetObjectW_Parms, nullptr);

	pFnGetObjectW->FunctionFlags |= 0x400;

	return GetObjectW_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FString UGFxObject::GetString(struct FString Member)
{
	static UFunction* pFnGetString = nullptr;

	if (!pFnGetString)
	{
		pFnGetString = UFunction::FindFunction("Function GFxUI.GFxObject.GetString");

	}

	UGFxObject_execGetString_Parms GetString_Parms;
	memcpy_s(&GetString_Parms.Member, 0x10, &Member, 0x10);

	pFnGetString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetString, &GetString_Parms, nullptr);

	pFnGetString->FunctionFlags |= 0x400;

	return GetString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

int UGFxObject::GetInt(struct FString Member)
{
	static UFunction* pFnGetInt = nullptr;

	if (!pFnGetInt)
	{
		pFnGetInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetInt");

	}

	UGFxObject_execGetInt_Parms GetInt_Parms;
	memcpy_s(&GetInt_Parms.Member, 0x10, &Member, 0x10);

	pFnGetInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetInt, &GetInt_Parms, nullptr);

	pFnGetInt->FunctionFlags |= 0x400;

	return GetInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetFloat(struct FString Member)
{
	static UFunction* pFnGetFloat = nullptr;

	if (!pFnGetFloat)
	{
		pFnGetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetFloat");

	}

	UGFxObject_execGetFloat_Parms GetFloat_Parms;
	memcpy_s(&GetFloat_Parms.Member, 0x10, &Member, 0x10);

	pFnGetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFloat, &GetFloat_Parms, nullptr);

	pFnGetFloat->FunctionFlags |= 0x400;

	return GetFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetBool(struct FString Member)
{
	static UFunction* pFnGetBool = nullptr;

	if (!pFnGetBool)
	{
		pFnGetBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetBool");

	}

	UGFxObject_execGetBool_Parms GetBool_Parms;
	memcpy_s(&GetBool_Parms.Member, 0x10, &Member, 0x10);

	pFnGetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetBool, &GetBool_Parms, nullptr);

	pFnGetBool->FunctionFlags |= 0x400;

	return GetBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.Get
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Get(struct FString Member)
{
	static UFunction* pFnGet = nullptr;

	if (!pFnGet)
	{
		pFnGet = UFunction::FindFunction("Function GFxUI.GFxObject.Get");

	}

	UGFxObject_execGet_Parms Get_Parms;
	memcpy_s(&Get_Parms.Member, 0x10, &Member, 0x10);

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGet, &Get_Parms, nullptr);

	pFnGet->FunctionFlags |= 0x400;

	return Get_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* pFnIsValidLevelSequenceObject = nullptr;

	if (!pFnIsValidLevelSequenceObject)
	{
		pFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");

	}

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent(pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, nullptr);

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* pFnIsValidLevelSequenceObject = nullptr;

	if (!pFnIsValidLevelSequenceObject)
	{
		pFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");

	}

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent(pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, nullptr);

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject()
{
	static UFunction* pFnIsValidLevelSequenceObject = nullptr;

	if (!pFnIsValidLevelSequenceObject)
	{
		pFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");

	}

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent(pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, nullptr);

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* pFnIsValidLevelSequenceObject = nullptr;

	if (!pFnIsValidLevelSequenceObject)
	{
		pFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");

	}

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent(pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, nullptr);

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* pFnIsValidLevelSequenceObject = nullptr;

	if (!pFnIsValidLevelSequenceObject)
	{
		pFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");

	}

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent(pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, nullptr);

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// struct FString                 Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler_Kismet::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg)
{
	static UFunction* pFnFSCommand = nullptr;

	if (!pFnFSCommand)
	{
		pFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");

	}

	UGFxFSCmdHandler_Kismet_eventFSCommand_Parms FSCommand_Parms;
	memcpy_s(&FSCommand_Parms.Movie, 0x8, &Movie, 0x8);
	memcpy_s(&FSCommand_Parms.Event, 0x8, &Event, 0x8);
	memcpy_s(&FSCommand_Parms.Cmd, 0x10, &Cmd, 0x10);
	memcpy_s(&FSCommand_Parms.Arg, 0x10, &Arg, 0x10);

	unsigned short NativeIndex = pFnFSCommand->iNative;
	pFnFSCommand->iNative = 0;

	pFnFSCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFSCommand, &FSCommand_Parms, nullptr);

	pFnFSCommand->FunctionFlags |= 0x400;

	pFnFSCommand->iNative = NativeIndex;

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(struct FString Event)
{
	static UFunction* pFnASRemoveAllEventListeners = nullptr;

	if (!pFnASRemoveAllEventListeners)
	{
		pFnASRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");

	}

	UGFxClikWidget_execASRemoveAllEventListeners_Parms ASRemoveAllEventListeners_Parms;
	memcpy_s(&ASRemoveAllEventListeners_Parms.Event, 0x10, &Event, 0x10);

	this->ProcessEvent(pFnASRemoveAllEventListeners, &ASRemoveAllEventListeners_Parms, nullptr);
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// unsigned long                  useCapture                     (CPF_OptionalParm | CPF_Parm)
// int                            listenerPriority               (CPF_OptionalParm | CPF_Parm)
// unsigned long                  useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AS3AddEventListener(struct FString Type, class UGFxObject* O, unsigned long useCapture, int listenerPriority, unsigned long useWeakReference)
{
	static UFunction* pFnAS3AddEventListener = nullptr;

	if (!pFnAS3AddEventListener)
	{
		pFnAS3AddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AS3AddEventListener");

	}

	UGFxClikWidget_execAS3AddEventListener_Parms AS3AddEventListener_Parms;
	memcpy_s(&AS3AddEventListener_Parms.Type, 0x10, &Type, 0x10);
	memcpy_s(&AS3AddEventListener_Parms.O, 0x8, &O, 0x8);
	AS3AddEventListener_Parms.useCapture = useCapture;
	memcpy_s(&AS3AddEventListener_Parms.listenerPriority, 0x4, &listenerPriority, 0x4);
	AS3AddEventListener_Parms.useWeakReference = useWeakReference;

	this->ProcessEvent(pFnAS3AddEventListener, &AS3AddEventListener_Parms, nullptr);
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// struct FString                 func                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(struct FString Type, class UGFxObject* O, struct FString func)
{
	static UFunction* pFnASAddEventListener = nullptr;

	if (!pFnASAddEventListener)
	{
		pFnASAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASAddEventListener");

	}

	UGFxClikWidget_execASAddEventListener_Parms ASAddEventListener_Parms;
	memcpy_s(&ASAddEventListener_Parms.Type, 0x10, &Type, 0x10);
	memcpy_s(&ASAddEventListener_Parms.O, 0x8, &O, 0x8);
	memcpy_s(&ASAddEventListener_Parms.func, 0x10, &func, 0x10);

	this->ProcessEvent(pFnASAddEventListener, &ASAddEventListener_Parms, nullptr);
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UGFxObject*              O                              (CPF_Parm)
// struct FString                 Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Listener                       (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, struct FString Member, struct FScriptDelegate Listener)
{
	static UFunction* pFnSetListener = nullptr;

	if (!pFnSetListener)
	{
		pFnSetListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.SetListener");

	}

	UGFxClikWidget_execSetListener_Parms SetListener_Parms;
	memcpy_s(&SetListener_Parms.O, 0x8, &O, 0x8);
	memcpy_s(&SetListener_Parms.Member, 0x10, &Member, 0x10);
	memcpy_s(&SetListener_Parms.Listener, 0x18, &Listener, 0x18);

	this->ProcessEvent(pFnSetListener, &SetListener_Parms, nullptr);
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FName                   Typename                       (CPF_Parm)

struct FString UGFxClikWidget::GetEventStringFromTypename(struct FName Typename)
{
	static UFunction* pFnGetEventStringFromTypename = nullptr;

	if (!pFnGetEventStringFromTypename)
	{
		pFnGetEventStringFromTypename = UFunction::FindFunction("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");

	}

	UGFxClikWidget_execGetEventStringFromTypename_Parms GetEventStringFromTypename_Parms;
	memcpy_s(&GetEventStringFromTypename_Parms.Typename, 0x8, &Typename, 0x8);

	this->ProcessEvent(pFnGetEventStringFromTypename, &GetEventStringFromTypename_Parms, nullptr);

	return GetEventStringFromTypename_Parms.ReturnValue;
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(struct FString Event)
{
	static UFunction* pFnRemoveAllEventListeners = nullptr;

	if (!pFnRemoveAllEventListeners)
	{
		pFnRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");

	}

	UGFxClikWidget_execRemoveAllEventListeners_Parms RemoveAllEventListeners_Parms;
	memcpy_s(&RemoveAllEventListeners_Parms.Event, 0x10, &Event, 0x10);

	this->ProcessEvent(pFnRemoveAllEventListeners, &RemoveAllEventListeners_Parms, nullptr);
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Type                           (CPF_Parm)
// struct FScriptDelegate         Listener                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  useCapture                     (CPF_OptionalParm | CPF_Parm)
// int                            listenerPriority               (CPF_OptionalParm | CPF_Parm)
// unsigned long                  useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AddEventListener(struct FName Type, struct FScriptDelegate Listener, unsigned long useCapture, int listenerPriority, unsigned long useWeakReference)
{
	static UFunction* pFnAddEventListener = nullptr;

	if (!pFnAddEventListener)
	{
		pFnAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AddEventListener");

	}

	UGFxClikWidget_execAddEventListener_Parms AddEventListener_Parms;
	memcpy_s(&AddEventListener_Parms.Type, 0x8, &Type, 0x8);
	memcpy_s(&AddEventListener_Parms.Listener, 0x18, &Listener, 0x18);
	AddEventListener_Parms.useCapture = useCapture;
	memcpy_s(&AddEventListener_Parms.listenerPriority, 0x4, &listenerPriority, 0x4);
	AddEventListener_Parms.useWeakReference = useWeakReference;

	this->ProcessEvent(pFnAddEventListener, &AddEventListener_Parms, nullptr);
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FEventData              Data                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::EventListener(struct FEventData Data)
{
	static UFunction* pFnEventListener = nullptr;

	if (!pFnEventListener)
	{
		pFnEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.EventListener");

	}

	UGFxClikWidget_execEventListener_Parms EventListener_Parms;
	memcpy_s(&EventListener_Parms.Data, 0x38, &Data, 0x38);

	this->ProcessEvent(pFnEventListener, &EventListener_Parms, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
