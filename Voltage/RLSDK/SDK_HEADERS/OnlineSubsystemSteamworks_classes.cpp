/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* pFnRequestAuthTicket = nullptr;

	if (!pFnRequestAuthTicket)
	{
		pFnRequestAuthTicket = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket");

	}

	UOnlineAuthInterfaceSteamworks_execRequestAuthTicket_Parms RequestAuthTicket_Parms;
	memcpy_s(&RequestAuthTicket_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAuthTicket_Parms.Callback, 0x18, &Callback, 0x18);

	unsigned short NativeIndex = pFnRequestAuthTicket->iNative;
	pFnRequestAuthTicket->iNative = 0;

	pFnRequestAuthTicket->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestAuthTicket, &RequestAuthTicket_Parms, nullptr);

	pFnRequestAuthTicket->FunctionFlags |= 0x400;

	pFnRequestAuthTicket->iNative = NativeIndex;

	return RequestAuthTicket_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
// [0x00030002] (FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::RequiresAuthTicket()
{
	static UFunction* pFnRequiresAuthTicket = nullptr;

	if (!pFnRequiresAuthTicket)
	{
		pFnRequiresAuthTicket = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket");

	}

	UOnlineAuthInterfaceSteamworks_execRequiresAuthTicket_Parms RequiresAuthTicket_Parms;

	this->ProcessEvent(pFnRequiresAuthTicket, &RequiresAuthTicket_Parms, nullptr);

	return RequiresAuthTicket_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 OutServerIP                    (CPF_Parm | CPF_OutParm)
// int                            OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(struct FIpAddr& OutServerIP, int& OutServerPort)
{
	static UFunction* pFnGetServerAddr = nullptr;

	if (!pFnGetServerAddr)
	{
		pFnGetServerAddr = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr");

	}

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms GetServerAddr_Parms;

	unsigned short NativeIndex = pFnGetServerAddr->iNative;
	pFnGetServerAddr->iNative = 0;

	pFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetServerAddr, &GetServerAddr_Parms, nullptr);

	pFnGetServerAddr->FunctionFlags |= 0x400;

	pFnGetServerAddr->iNative = NativeIndex;
	memcpy_s(&GetServerAddr_Parms.OutServerIP, 0x14, &OutServerIP, 0x14);
	memcpy_s(&GetServerAddr_Parms.OutServerPort, 0x4, &OutServerPort, 0x4);

	return GetServerAddr_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* pFnGetServerUniqueId = nullptr;

	if (!pFnGetServerUniqueId)
	{
		pFnGetServerUniqueId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId");

	}

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	unsigned short NativeIndex = pFnGetServerUniqueId->iNative;
	pFnGetServerUniqueId->iNative = 0;

	pFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetServerUniqueId, &GetServerUniqueId_Parms, nullptr);

	pFnGetServerUniqueId->FunctionFlags |= 0x400;

	pFnGetServerUniqueId->iNative = NativeIndex;
	memcpy_s(&GetServerUniqueId_Parms.OutServerUID, 0x48, &OutServerUID, 0x48);

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID)
{
	static UFunction* pFnVerifyServerAuthSession = nullptr;

	if (!pFnVerifyServerAuthSession)
	{
		pFnVerifyServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession");

	}

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy_s(&VerifyServerAuthSession_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&VerifyServerAuthSession_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&VerifyServerAuthSession_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	unsigned short NativeIndex = pFnVerifyServerAuthSession->iNative;
	pFnVerifyServerAuthSession->iNative = 0;

	pFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, nullptr);

	pFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	pFnVerifyServerAuthSession->iNative = NativeIndex;

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int& OutAuthTicketUID)
{
	static UFunction* pFnCreateServerAuthSession = nullptr;

	if (!pFnCreateServerAuthSession)
	{
		pFnCreateServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession");

	}

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy_s(&CreateServerAuthSession_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&CreateServerAuthSession_Parms.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&CreateServerAuthSession_Parms.ClientPort, 0x4, &ClientPort, 0x4);

	unsigned short NativeIndex = pFnCreateServerAuthSession->iNative;
	pFnCreateServerAuthSession->iNative = 0;

	pFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, nullptr);

	pFnCreateServerAuthSession->FunctionFlags |= 0x400;

	pFnCreateServerAuthSession->iNative = NativeIndex;
	memcpy_s(&CreateServerAuthSession_Parms.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID)
{
	static UFunction* pFnVerifyClientAuthSession = nullptr;

	if (!pFnVerifyClientAuthSession)
	{
		pFnVerifyClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession");

	}

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy_s(&VerifyClientAuthSession_Parms.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&VerifyClientAuthSession_Parms.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&VerifyClientAuthSession_Parms.ClientPort, 0x4, &ClientPort, 0x4);
	memcpy_s(&VerifyClientAuthSession_Parms.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	unsigned short NativeIndex = pFnVerifyClientAuthSession->iNative;
	pFnVerifyClientAuthSession->iNative = 0;

	pFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, nullptr);

	pFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	pFnVerifyClientAuthSession->iNative = NativeIndex;

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)
// unsigned long                  bSecure                        (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int& OutAuthTicketUID)
{
	static UFunction* pFnCreateClientAuthSession = nullptr;

	if (!pFnCreateClientAuthSession)
	{
		pFnCreateClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession");

	}

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy_s(&CreateClientAuthSession_Parms.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&CreateClientAuthSession_Parms.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&CreateClientAuthSession_Parms.ServerPort, 0x4, &ServerPort, 0x4);
	CreateClientAuthSession_Parms.bSecure = bSecure;

	unsigned short NativeIndex = pFnCreateClientAuthSession->iNative;
	pFnCreateClientAuthSession->iNative = 0;

	pFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, nullptr);

	pFnCreateClientAuthSession->FunctionFlags |= 0x400;

	pFnCreateClientAuthSession->iNative = NativeIndex;
	memcpy_s(&CreateClientAuthSession_Parms.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(struct FUniqueNetId ServerUID)
{
	static UFunction* pFnSendServerAuthRequest = nullptr;

	if (!pFnSendServerAuthRequest)
	{
		pFnSendServerAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest");

	}

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;
	memcpy_s(&SendServerAuthRequest_Parms.ServerUID, 0x48, &ServerUID, 0x48);

	unsigned short NativeIndex = pFnSendServerAuthRequest->iNative;
	pFnSendServerAuthRequest->iNative = 0;

	pFnSendServerAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, nullptr);

	pFnSendServerAuthRequest->FunctionFlags |= 0x400;

	pFnSendServerAuthRequest->iNative = NativeIndex;

	return SendServerAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID)
{
	static UFunction* pFnSendClientAuthRequest = nullptr;

	if (!pFnSendClientAuthRequest)
	{
		pFnSendClientAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest");

	}

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;
	memcpy_s(&SendClientAuthRequest_Parms.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&SendClientAuthRequest_Parms.ClientUID, 0x48, &ClientUID, 0x48);

	unsigned short NativeIndex = pFnSendClientAuthRequest->iNative;
	pFnSendClientAuthRequest->iNative = 0;

	pFnSendClientAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, nullptr);

	pFnSendClientAuthRequest->FunctionFlags |= 0x400;

	pFnSendClientAuthRequest->iNative = NativeIndex;

	return SendClientAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineCommunityContentInterfaceSteamworks::UpdateWorkshopItemUploadProgress()
{
	static UFunction* pFnUpdateWorkshopItemUploadProgress = nullptr;

	if (!pFnUpdateWorkshopItemUploadProgress)
	{
		pFnUpdateWorkshopItemUploadProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress");

	}

	UOnlineCommunityContentInterfaceSteamworks_execUpdateWorkshopItemUploadProgress_Parms UpdateWorkshopItemUploadProgress_Parms;

	pFnUpdateWorkshopItemUploadProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateWorkshopItemUploadProgress, &UpdateWorkshopItemUploadProgress_Parms, nullptr);

	pFnUpdateWorkshopItemUploadProgress->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::DownloadAllWorkshopData(struct FScriptDelegate Callback)
{
	static UFunction* pFnDownloadAllWorkshopData = nullptr;

	if (!pFnDownloadAllWorkshopData)
	{
		pFnDownloadAllWorkshopData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData");

	}

	UOnlineCommunityContentInterfaceSteamworks_execDownloadAllWorkshopData_Parms DownloadAllWorkshopData_Parms;
	memcpy_s(&DownloadAllWorkshopData_Parms.Callback, 0x18, &Callback, 0x18);

	pFnDownloadAllWorkshopData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDownloadAllWorkshopData, &DownloadAllWorkshopData_Parms, nullptr);

	pFnDownloadAllWorkshopData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineCommunityContentInterfaceSteamworks::CreateWorkshopItem()
{
	static UFunction* pFnCreateWorkshopItem = nullptr;

	if (!pFnCreateWorkshopItem)
	{
		pFnCreateWorkshopItem = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem");

	}

	UOnlineCommunityContentInterfaceSteamworks_execCreateWorkshopItem_Parms CreateWorkshopItem_Parms;

	pFnCreateWorkshopItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateWorkshopItem, &CreateWorkshopItem_Parms, nullptr);

	pFnCreateWorkshopItem->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  PlayerNum                      (CPF_Parm)
// int                            NewRating                      (CPF_Parm)
// struct FCommunityContentFile   FileToRate                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::RateContent(unsigned char PlayerNum, int NewRating, struct FCommunityContentFile& FileToRate)
{
	static UFunction* pFnRateContent = nullptr;

	if (!pFnRateContent)
	{
		pFnRateContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent");

	}

	UOnlineCommunityContentInterfaceSteamworks_execRateContent_Parms RateContent_Parms;
	RateContent_Parms.PlayerNum = PlayerNum;
	memcpy_s(&RateContent_Parms.NewRating, 0x4, &NewRating, 0x4);

	this->ProcessEvent(pFnRateContent, &RateContent_Parms, nullptr);
	memcpy_s(&RateContent_Parms.FileToRate, 0x90, &FileToRate, 0x90);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate)
{
	static UFunction* pFnClearGetContentPayloadCompleteDelegate = nullptr;

	if (!pFnClearGetContentPayloadCompleteDelegate)
	{
		pFnClearGetContentPayloadCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execClearGetContentPayloadCompleteDelegate_Parms ClearGetContentPayloadCompleteDelegate_Parms;
	memcpy_s(&ClearGetContentPayloadCompleteDelegate_Parms.GetContentPayloadCompleteDelegate, 0x18, &GetContentPayloadCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearGetContentPayloadCompleteDelegate, &ClearGetContentPayloadCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate)
{
	static UFunction* pFnAddGetContentPayloadCompleteDelegate = nullptr;

	if (!pFnAddGetContentPayloadCompleteDelegate)
	{
		pFnAddGetContentPayloadCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execAddGetContentPayloadCompleteDelegate_Parms AddGetContentPayloadCompleteDelegate_Parms;
	memcpy_s(&AddGetContentPayloadCompleteDelegate_Parms.GetContentPayloadCompleteDelegate, 0x18, &GetContentPayloadCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddGetContentPayloadCompleteDelegate, &AddGetContentPayloadCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnGetContentPayloadComplete(unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<unsigned char>& Payload)
{
	static UFunction* pFnOnGetContentPayloadComplete = nullptr;

	if (!pFnOnGetContentPayloadComplete)
	{
		pFnOnGetContentPayloadComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete");

	}

	UOnlineCommunityContentInterfaceSteamworks_execOnGetContentPayloadComplete_Parms OnGetContentPayloadComplete_Parms;
	OnGetContentPayloadComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnGetContentPayloadComplete_Parms.FileDownloaded, 0x90, &FileDownloaded, 0x90);

	this->ProcessEvent(pFnOnGetContentPayloadComplete, &OnGetContentPayloadComplete_Parms, nullptr);
	memcpy_s(&OnGetContentPayloadComplete_Parms.Payload, 0x10, &Payload, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentPayload(unsigned char PlayerNum, struct FCommunityContentFile& FileDownloaded)
{
	static UFunction* pFnGetContentPayload = nullptr;

	if (!pFnGetContentPayload)
	{
		pFnGetContentPayload = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload");

	}

	UOnlineCommunityContentInterfaceSteamworks_execGetContentPayload_Parms GetContentPayload_Parms;
	GetContentPayload_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent(pFnGetContentPayload, &GetContentPayload_Parms, nullptr);
	memcpy_s(&GetContentPayload_Parms.FileDownloaded, 0x90, &FileDownloaded, 0x90);

	return GetContentPayload_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate)
{
	static UFunction* pFnClearDownloadContentCompleteDelegate = nullptr;

	if (!pFnClearDownloadContentCompleteDelegate)
	{
		pFnClearDownloadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execClearDownloadContentCompleteDelegate_Parms ClearDownloadContentCompleteDelegate_Parms;
	memcpy_s(&ClearDownloadContentCompleteDelegate_Parms.DownloadContentCompleteDelegate, 0x18, &DownloadContentCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearDownloadContentCompleteDelegate, &ClearDownloadContentCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate)
{
	static UFunction* pFnAddDownloadContentCompleteDelegate = nullptr;

	if (!pFnAddDownloadContentCompleteDelegate)
	{
		pFnAddDownloadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execAddDownloadContentCompleteDelegate_Parms AddDownloadContentCompleteDelegate_Parms;
	memcpy_s(&AddDownloadContentCompleteDelegate_Parms.DownloadContentCompleteDelegate, 0x18, &DownloadContentCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddDownloadContentCompleteDelegate, &AddDownloadContentCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Payload                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadContentComplete(unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<unsigned char> Payload)
{
	static UFunction* pFnOnDownloadContentComplete = nullptr;

	if (!pFnOnDownloadContentComplete)
	{
		pFnOnDownloadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete");

	}

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadContentComplete_Parms OnDownloadContentComplete_Parms;
	OnDownloadContentComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadContentComplete_Parms.FileDownloaded, 0x90, &FileDownloaded, 0x90);
	memcpy_s(&OnDownloadContentComplete_Parms.Payload, 0x10, &Payload, 0x10);

	this->ProcessEvent(pFnOnDownloadContentComplete, &OnDownloadContentComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileToDownload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::DownloadContent(unsigned char PlayerNum, struct FCommunityContentFile& FileToDownload)
{
	static UFunction* pFnDownloadContent = nullptr;

	if (!pFnDownloadContent)
	{
		pFnDownloadContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent");

	}

	UOnlineCommunityContentInterfaceSteamworks_execDownloadContent_Parms DownloadContent_Parms;
	DownloadContent_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent(pFnDownloadContent, &DownloadContent_Parms, nullptr);
	memcpy_s(&DownloadContent_Parms.FileToDownload, 0x90, &FileToDownload, 0x90);

	return DownloadContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate)
{
	static UFunction* pFnClearUploadContentCompleteDelegate = nullptr;

	if (!pFnClearUploadContentCompleteDelegate)
	{
		pFnClearUploadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execClearUploadContentCompleteDelegate_Parms ClearUploadContentCompleteDelegate_Parms;
	memcpy_s(&ClearUploadContentCompleteDelegate_Parms.UploadContentCompleteDelegate, 0x18, &UploadContentCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUploadContentCompleteDelegate, &ClearUploadContentCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate)
{
	static UFunction* pFnAddUploadContentCompleteDelegate = nullptr;

	if (!pFnAddUploadContentCompleteDelegate)
	{
		pFnAddUploadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execAddUploadContentCompleteDelegate_Parms AddUploadContentCompleteDelegate_Parms;
	memcpy_s(&AddUploadContentCompleteDelegate_Parms.UploadContentCompleteDelegate, 0x18, &UploadContentCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUploadContentCompleteDelegate, &AddUploadContentCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   UploadedFile                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnUploadContentComplete(unsigned long bWasSuccessful, struct FCommunityContentFile UploadedFile)
{
	static UFunction* pFnOnUploadContentComplete = nullptr;

	if (!pFnOnUploadContentComplete)
	{
		pFnOnUploadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete");

	}

	UOnlineCommunityContentInterfaceSteamworks_execOnUploadContentComplete_Parms OnUploadContentComplete_Parms;
	OnUploadContentComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUploadContentComplete_Parms.UploadedFile, 0x90, &UploadedFile, 0x90);

	this->ProcessEvent(pFnOnUploadContentComplete, &OnUploadContentComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// TArray<unsigned char>          Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FCommunityContentMetadata MetaData                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::UploadContent(unsigned char PlayerNum, TArray<unsigned char>& Payload, struct FCommunityContentMetadata& MetaData)
{
	static UFunction* pFnUploadContent = nullptr;

	if (!pFnUploadContent)
	{
		pFnUploadContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent");

	}

	UOnlineCommunityContentInterfaceSteamworks_execUploadContent_Parms UploadContent_Parms;
	UploadContent_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent(pFnUploadContent, &UploadContent_Parms, nullptr);
	memcpy_s(&UploadContent_Parms.Payload, 0x10, &Payload, 0x10);
	memcpy_s(&UploadContent_Parms.MetaData, 0x38, &MetaData, 0x38);

	return UploadContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FOnlineFriend           Friend                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetFriendsContentList(unsigned char PlayerNum, struct FOnlineFriend& Friend, TArray<struct FCommunityContentFile>& ContentFiles)
{
	static UFunction* pFnGetFriendsContentList = nullptr;

	if (!pFnGetFriendsContentList)
	{
		pFnGetFriendsContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList");

	}

	UOnlineCommunityContentInterfaceSteamworks_execGetFriendsContentList_Parms GetFriendsContentList_Parms;
	GetFriendsContentList_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent(pFnGetFriendsContentList, &GetFriendsContentList_Parms, nullptr);
	memcpy_s(&GetFriendsContentList_Parms.Friend, 0x130, &Friend, 0x130);
	memcpy_s(&GetFriendsContentList_Parms.ContentFiles, 0x10, &ContentFiles, 0x10);

	return GetFriendsContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate)
{
	static UFunction* pFnClearReadFriendsContentListCompleteDelegate = nullptr;

	if (!pFnClearReadFriendsContentListCompleteDelegate)
	{
		pFnClearReadFriendsContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execClearReadFriendsContentListCompleteDelegate_Parms ClearReadFriendsContentListCompleteDelegate_Parms;
	memcpy_s(&ClearReadFriendsContentListCompleteDelegate_Parms.ReadFriendsContentListCompleteDelegate, 0x18, &ReadFriendsContentListCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadFriendsContentListCompleteDelegate, &ClearReadFriendsContentListCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate)
{
	static UFunction* pFnAddReadFriendsContentListCompleteDelegate = nullptr;

	if (!pFnAddReadFriendsContentListCompleteDelegate)
	{
		pFnAddReadFriendsContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execAddReadFriendsContentListCompleteDelegate_Parms AddReadFriendsContentListCompleteDelegate_Parms;
	memcpy_s(&AddReadFriendsContentListCompleteDelegate_Parms.ReadFriendsContentListCompleteDelegate, 0x18, &ReadFriendsContentListCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadFriendsContentListCompleteDelegate, &AddReadFriendsContentListCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineCommunityContentInterfaceSteamworks::OnReadFriendsContentListComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadFriendsContentListComplete = nullptr;

	if (!pFnOnReadFriendsContentListComplete)
	{
		pFnOnReadFriendsContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete");

	}

	UOnlineCommunityContentInterfaceSteamworks_execOnReadFriendsContentListComplete_Parms OnReadFriendsContentListComplete_Parms;
	OnReadFriendsContentListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadFriendsContentListComplete, &OnReadFriendsContentListComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// int                            StartAt                        (CPF_OptionalParm | CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::ReadFriendsContentList(unsigned char PlayerNum, int StartAt, int NumToRead, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* pFnReadFriendsContentList = nullptr;

	if (!pFnReadFriendsContentList)
	{
		pFnReadFriendsContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList");

	}

	UOnlineCommunityContentInterfaceSteamworks_execReadFriendsContentList_Parms ReadFriendsContentList_Parms;
	ReadFriendsContentList_Parms.PlayerNum = PlayerNum;
	memcpy_s(&ReadFriendsContentList_Parms.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&ReadFriendsContentList_Parms.NumToRead, 0x4, &NumToRead, 0x4);

	this->ProcessEvent(pFnReadFriendsContentList, &ReadFriendsContentList_Parms, nullptr);
	memcpy_s(&ReadFriendsContentList_Parms.Friends, 0x10, &Friends, 0x10);

	return ReadFriendsContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentList(unsigned char PlayerNum, TArray<struct FCommunityContentFile>& ContentFiles)
{
	static UFunction* pFnGetContentList = nullptr;

	if (!pFnGetContentList)
	{
		pFnGetContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList");

	}

	UOnlineCommunityContentInterfaceSteamworks_execGetContentList_Parms GetContentList_Parms;
	GetContentList_Parms.PlayerNum = PlayerNum;

	this->ProcessEvent(pFnGetContentList, &GetContentList_Parms, nullptr);
	memcpy_s(&GetContentList_Parms.ContentFiles, 0x10, &ContentFiles, 0x10);

	return GetContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate)
{
	static UFunction* pFnClearReadContentListCompleteDelegate = nullptr;

	if (!pFnClearReadContentListCompleteDelegate)
	{
		pFnClearReadContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execClearReadContentListCompleteDelegate_Parms ClearReadContentListCompleteDelegate_Parms;
	memcpy_s(&ClearReadContentListCompleteDelegate_Parms.ReadContentListCompleteDelegate, 0x18, &ReadContentListCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadContentListCompleteDelegate, &ClearReadContentListCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate)
{
	static UFunction* pFnAddReadContentListCompleteDelegate = nullptr;

	if (!pFnAddReadContentListCompleteDelegate)
	{
		pFnAddReadContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate");

	}

	UOnlineCommunityContentInterfaceSteamworks_execAddReadContentListCompleteDelegate_Parms AddReadContentListCompleteDelegate_Parms;
	memcpy_s(&AddReadContentListCompleteDelegate_Parms.ReadContentListCompleteDelegate, 0x18, &ReadContentListCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadContentListCompleteDelegate, &AddReadContentListCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnReadContentListComplete(unsigned long bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles)
{
	static UFunction* pFnOnReadContentListComplete = nullptr;

	if (!pFnOnReadContentListComplete)
	{
		pFnOnReadContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete");

	}

	UOnlineCommunityContentInterfaceSteamworks_execOnReadContentListComplete_Parms OnReadContentListComplete_Parms;
	OnReadContentListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadContentListComplete_Parms.ContentFiles, 0x10, &ContentFiles, 0x10);

	this->ProcessEvent(pFnOnReadContentListComplete, &OnReadContentListComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            StartAt                        (CPF_OptionalParm | CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineCommunityContentInterfaceSteamworks::ReadContentList(unsigned char PlayerNum, struct FUniqueNetId NetId, struct FString Path, int StartAt, int NumToRead)
{
	static UFunction* pFnReadContentList = nullptr;

	if (!pFnReadContentList)
	{
		pFnReadContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList");

	}

	UOnlineCommunityContentInterfaceSteamworks_execReadContentList_Parms ReadContentList_Parms;
	ReadContentList_Parms.PlayerNum = PlayerNum;
	memcpy_s(&ReadContentList_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ReadContentList_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&ReadContentList_Parms.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&ReadContentList_Parms.NumToRead, 0x4, &NumToRead, 0x4);

	this->ProcessEvent(pFnReadContentList, &ReadContentList_Parms, nullptr);

	return ReadContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineCommunityContentInterfaceSteamworks::Exit()
{
	static UFunction* pFnExit = nullptr;

	if (!pFnExit)
	{
		pFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit");

	}

	UOnlineCommunityContentInterfaceSteamworks_execExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnExit, &Exit_Parms, nullptr);

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::Init()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init");

	}

	UOnlineCommunityContentInterfaceSteamworks_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// TArray<struct FDownloadedWorkshopData> Items                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadedWorkshopData(unsigned long bSuccess, TArray<struct FDownloadedWorkshopData>& Items)
{
	static UFunction* pFnOnDownloadedWorkshopData = nullptr;

	if (!pFnOnDownloadedWorkshopData)
	{
		pFnOnDownloadedWorkshopData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData");

	}

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadedWorkshopData_Parms OnDownloadedWorkshopData_Parms;
	OnDownloadedWorkshopData_Parms.bSuccess = bSuccess;

	this->ProcessEvent(pFnOnDownloadedWorkshopData, &OnDownloadedWorkshopData_Parms, nullptr);
	memcpy_s(&OnDownloadedWorkshopData_Parms.Items, 0x10, &Items, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfoNative(class UDebugDrawer* Drawer)
{
	static UFunction* pFnPrintDebugInfoNative = nullptr;

	if (!pFnPrintDebugInfoNative)
	{
		pFnPrintDebugInfoNative = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative");

	}

	UOnlineGameInterfaceSteamworks_execPrintDebugInfoNative_Parms PrintDebugInfoNative_Parms;
	memcpy_s(&PrintDebugInfoNative_Parms.Drawer, 0x8, &Drawer, 0x8);

	pFnPrintDebugInfoNative->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPrintDebugInfoNative, &PrintDebugInfoNative_Parms, nullptr);

	pFnPrintDebugInfoNative->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* pFnPrintDebugInfo = nullptr;

	if (!pFnPrintDebugInfo)
	{
		pFnPrintDebugInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo");

	}

	UOnlineGameInterfaceSteamworks_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	memcpy_s(&PrintDebugInfo_Parms.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(pFnPrintDebugInfo, &PrintDebugInfo_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            StartAt                        (CPF_Parm)
// int                            NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static UFunction* pFnQueryNonAdvertisedData = nullptr;

	if (!pFnQueryNonAdvertisedData)
	{
		pFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");

	}

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	memcpy_s(&QueryNonAdvertisedData_Parms.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&QueryNonAdvertisedData_Parms.NumberToQuery, 0x4, &NumberToQuery, 0x4);

	this->ProcessEvent(pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, nullptr);

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!pFnClearUnregisterPlayerCompleteDelegate)
	{
		pFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!pFnAddUnregisterPlayerCompleteDelegate)
	{
		pFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnregisterPlayerComplete = nullptr;

	if (!pFnOnUnregisterPlayerComplete)
	{
		pFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");

	}

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy_s(&OnUnregisterPlayerComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnUnregisterPlayerComplete_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterPlayer = nullptr;

	if (!pFnUnregisterPlayer)
	{
		pFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");

	}

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy_s(&UnregisterPlayer_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	unsigned short NativeIndex = pFnUnregisterPlayer->iNative;
	pFnUnregisterPlayer->iNative = 0;

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterPlayer, &UnregisterPlayer_Parms, nullptr);

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	pFnUnregisterPlayer->iNative = NativeIndex;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!pFnClearRegisterPlayerCompleteDelegate)
	{
		pFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!pFnAddRegisterPlayerCompleteDelegate)
	{
		pFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterPlayerComplete = nullptr;

	if (!pFnOnRegisterPlayerComplete)
	{
		pFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");

	}

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy_s(&OnRegisterPlayerComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnRegisterPlayerComplete_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* pFnRegisterPlayer = nullptr;

	if (!pFnRegisterPlayer)
	{
		pFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");

	}

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy_s(&RegisterPlayer_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	unsigned short NativeIndex = pFnRegisterPlayer->iNative;
	pFnRegisterPlayer->iNative = 0;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterPlayer, &RegisterPlayer_Parms, nullptr);

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	pFnRegisterPlayer->iNative = NativeIndex;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName)
{
	static UFunction* pFnAcceptGameInvite = nullptr;

	if (!pFnAcceptGameInvite)
	{
		pFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");

	}

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AcceptGameInvite_Parms.SessionName, 0x8, &SessionName, 0x8);

	unsigned short NativeIndex = pFnAcceptGameInvite->iNative;
	pFnAcceptGameInvite->iNative = 0;

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcceptGameInvite, &AcceptGameInvite_Parms, nullptr);

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	pFnAcceptGameInvite->iNative = NativeIndex;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ErrorString                    (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* pFnOnGameInviteAccepted = nullptr;

	if (!pFnOnGameInviteAccepted)
	{
		pFnOnGameInviteAccepted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");

	}

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;
	memcpy_s(&OnGameInviteAccepted_Parms.ErrorString, 0x10, &ErrorString, 0x10);

	this->ProcessEvent(pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, nullptr);
	memcpy_s(&OnGameInviteAccepted_Parms.InviteResult, 0x10, &InviteResult, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* pFnUpdateOnlineGame = nullptr;

	if (!pFnUpdateOnlineGame)
	{
		pFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");

	}

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy_s(&UpdateOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Parms.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	unsigned short NativeIndex = pFnUpdateOnlineGame->iNative;
	pFnUpdateOnlineGame->iNative = 0;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, nullptr);

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	pFnUpdateOnlineGame->iNative = NativeIndex;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!pFnClearUnregisterPlayerCompleteDelegate)
	{
		pFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!pFnAddUnregisterPlayerCompleteDelegate)
	{
		pFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnregisterPlayerComplete = nullptr;

	if (!pFnOnUnregisterPlayerComplete)
	{
		pFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy_s(&OnUnregisterPlayerComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnUnregisterPlayerComplete_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceSteamworks_PsyNet::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterPlayer = nullptr;

	if (!pFnUnregisterPlayer)
	{
		pFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy_s(&UnregisterPlayer_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	unsigned short NativeIndex = pFnUnregisterPlayer->iNative;
	pFnUnregisterPlayer->iNative = 0;

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterPlayer, &UnregisterPlayer_Parms, nullptr);

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	pFnUnregisterPlayer->iNative = NativeIndex;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!pFnClearRegisterPlayerCompleteDelegate)
	{
		pFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!pFnAddRegisterPlayerCompleteDelegate)
	{
		pFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterPlayerComplete = nullptr;

	if (!pFnOnRegisterPlayerComplete)
	{
		pFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy_s(&OnRegisterPlayerComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnRegisterPlayerComplete_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* pFnRegisterPlayer = nullptr;

	if (!pFnRegisterPlayer)
	{
		pFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy_s(&RegisterPlayer_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	unsigned short NativeIndex = pFnRegisterPlayer->iNative;
	pFnRegisterPlayer->iNative = 0;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterPlayer, &RegisterPlayer_Parms, nullptr);

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	pFnRegisterPlayer->iNative = NativeIndex;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            StartAt                        (CPF_Parm)
// int                            NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static UFunction* pFnQueryNonAdvertisedData = nullptr;

	if (!pFnQueryNonAdvertisedData)
	{
		pFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	memcpy_s(&QueryNonAdvertisedData_Parms.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&QueryNonAdvertisedData_Parms.NumberToQuery, 0x4, &NumberToQuery, 0x4);

	this->ProcessEvent(pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, nullptr);

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName)
{
	static UFunction* pFnAcceptGameInvite = nullptr;

	if (!pFnAcceptGameInvite)
	{
		pFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AcceptGameInvite_Parms.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(pFnAcceptGameInvite, &AcceptGameInvite_Parms, nullptr);

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
// [0x00024000] (FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* pFnUpdateOnlineGame = nullptr;

	if (!pFnUpdateOnlineGame)
	{
		pFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy_s(&UpdateOnlineGame_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Parms.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, nullptr);

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
// [0x00030400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ServerAddress                  (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  Visibility                     (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, unsigned char Visibility)
{
	static UFunction* pFnSetFriendJoinLocation = nullptr;

	if (!pFnSetFriendJoinLocation)
	{
		pFnSetFriendJoinLocation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation");

	}

	UOnlineGameInterfaceSteamworks_PsyNet_execSetFriendJoinLocation_Parms SetFriendJoinLocation_Parms;
	memcpy_s(&SetFriendJoinLocation_Parms.JoinablePlayerID, 0x48, &JoinablePlayerID, 0x48);
	memcpy_s(&SetFriendJoinLocation_Parms.ServerAddress, 0x10, &ServerAddress, 0x10);
	SetFriendJoinLocation_Parms.Visibility = Visibility;

	unsigned short NativeIndex = pFnSetFriendJoinLocation->iNative;
	pFnSetFriendJoinLocation->iNative = 0;

	pFnSetFriendJoinLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetFriendJoinLocation, &SetFriendJoinLocation_Parms, nullptr);

	pFnSetFriendJoinLocation->FunctionFlags |= 0x400;

	pFnSetFriendJoinLocation->iNative = NativeIndex;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::KickPlayer(unsigned char Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnKickPlayer = nullptr;

	if (!pFnKickPlayer)
	{
		pFnKickPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer");

	}

	UOnlineLobbyInterfaceSteamworks_execKickPlayer_Parms KickPlayer_Parms;
	KickPlayer_Parms.Reason = Reason;

	this->ProcessEvent(pFnKickPlayer, &KickPlayer_Parms, nullptr);
	memcpy_s(&KickPlayer_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&KickPlayer_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return KickPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bMarkAsJoined                  (CPF_OptionalParm | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline(unsigned long bMarkAsJoined, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnGetLobbyFromCommandline = nullptr;

	if (!pFnGetLobbyFromCommandline)
	{
		pFnGetLobbyFromCommandline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline");

	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Parms GetLobbyFromCommandline_Parms;
	GetLobbyFromCommandline_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetLobbyFromCommandline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Parms, nullptr);

	pFnGetLobbyFromCommandline->FunctionFlags |= 0x400;
	memcpy_s(&GetLobbyFromCommandline_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return GetLobbyFromCommandline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Const | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnShowInviteUI = nullptr;

	if (!pFnShowInviteUI)
	{
		pFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI");

	}

	UOnlineLobbyInterfaceSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;

	unsigned short NativeIndex = pFnShowInviteUI->iNative;
	pFnShowInviteUI->iNative = 0;

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowInviteUI, &ShowInviteUI_Parms, nullptr);

	pFnShowInviteUI->FunctionFlags |= 0x400;

	pFnShowInviteUI->iNative = NativeIndex;
	memcpy_s(&ShowInviteUI_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnInviteToLobby = nullptr;

	if (!pFnInviteToLobby)
	{
		pFnInviteToLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby");

	}

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Parms InviteToLobby_Parms;

	unsigned short NativeIndex = pFnInviteToLobby->iNative;
	pFnInviteToLobby->iNative = 0;

	pFnInviteToLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInviteToLobby, &InviteToLobby_Parms, nullptr);

	pFnInviteToLobby->FunctionFlags |= 0x400;

	pFnInviteToLobby->iNative = NativeIndex;
	memcpy_s(&InviteToLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&InviteToLobby_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return InviteToLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnCanInviteToLobby = nullptr;

	if (!pFnCanInviteToLobby)
	{
		pFnCanInviteToLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby");

	}

	UOnlineLobbyInterfaceSteamworks_execCanInviteToLobby_Parms CanInviteToLobby_Parms;

	this->ProcessEvent(pFnCanInviteToLobby, &CanInviteToLobby_Parms, nullptr);
	memcpy_s(&CanInviteToLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&CanInviteToLobby_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return CanInviteToLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner)
{
	static UFunction* pFnSetLobbyOwner = nullptr;

	if (!pFnSetLobbyOwner)
	{
		pFnSetLobbyOwner = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner");

	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Parms SetLobbyOwner_Parms;

	unsigned short NativeIndex = pFnSetLobbyOwner->iNative;
	pFnSetLobbyOwner->iNative = 0;

	pFnSetLobbyOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLobbyOwner, &SetLobbyOwner_Parms, nullptr);

	pFnSetLobbyOwner->FunctionFlags |= 0x400;

	pFnSetLobbyOwner->iNative = NativeIndex;
	memcpy_s(&SetLobbyOwner_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyOwner_Parms.NewOwner, 0x48, &NewOwner, 0x48);

	return SetLobbyOwner_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bLocked                        (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbyLock = nullptr;

	if (!pFnSetLobbyLock)
	{
		pFnSetLobbyLock = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock");

	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Parms SetLobbyLock_Parms;
	SetLobbyLock_Parms.bLocked = bLocked;

	unsigned short NativeIndex = pFnSetLobbyLock->iNative;
	pFnSetLobbyLock->iNative = 0;

	pFnSetLobbyLock->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLobbyLock, &SetLobbyLock_Parms, nullptr);

	pFnSetLobbyLock->FunctionFlags |= 0x400;

	pFnSetLobbyLock->iNative = NativeIndex;
	memcpy_s(&SetLobbyLock_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbyLock_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  Type                           (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType(unsigned char Type, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbyType = nullptr;

	if (!pFnSetLobbyType)
	{
		pFnSetLobbyType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType");

	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Parms SetLobbyType_Parms;
	SetLobbyType_Parms.Type = Type;

	pFnSetLobbyType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLobbyType, &SetLobbyType_Parms, nullptr);

	pFnSetLobbyType->FunctionFlags |= 0x400;
	memcpy_s(&SetLobbyType_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbyType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID)
{
	static UFunction* pFnSetLobbyServer = nullptr;

	if (!pFnSetLobbyServer)
	{
		pFnSetLobbyServer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer");

	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Parms SetLobbyServer_Parms;
	memcpy_s(&SetLobbyServer_Parms.ServerIP, 0x10, &ServerIP, 0x10);

	unsigned short NativeIndex = pFnSetLobbyServer->iNative;
	pFnSetLobbyServer->iNative = 0;

	pFnSetLobbyServer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLobbyServer, &SetLobbyServer_Parms, nullptr);

	pFnSetLobbyServer->FunctionFlags |= 0x400;

	pFnSetLobbyServer->iNative = NativeIndex;
	memcpy_s(&SetLobbyServer_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyServer_Parms.ServerUID, 0x48, &ServerUID, 0x48);

	return SetLobbyServer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnRemoveLobbySetting = nullptr;

	if (!pFnRemoveLobbySetting)
	{
		pFnRemoveLobbySetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting");

	}

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Parms RemoveLobbySetting_Parms;
	memcpy_s(&RemoveLobbySetting_Parms.Key, 0x10, &Key, 0x10);

	unsigned short NativeIndex = pFnRemoveLobbySetting->iNative;
	pFnRemoveLobbySetting->iNative = 0;

	pFnRemoveLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveLobbySetting, &RemoveLobbySetting_Parms, nullptr);

	pFnRemoveLobbySetting->FunctionFlags |= 0x400;

	pFnRemoveLobbySetting->iNative = NativeIndex;
	memcpy_s(&RemoveLobbySetting_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return RemoveLobbySetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbySetting = nullptr;

	if (!pFnSetLobbySetting)
	{
		pFnSetLobbySetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting");

	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Parms SetLobbySetting_Parms;
	memcpy_s(&SetLobbySetting_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbySetting_Parms.Value, 0x10, &Value, 0x10);

	unsigned short NativeIndex = pFnSetLobbySetting->iNative;
	pFnSetLobbySetting->iNative = 0;

	pFnSetLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLobbySetting, &SetLobbySetting_Parms, nullptr);

	pFnSetLobbySetting->FunctionFlags |= 0x400;

	pFnSetLobbySetting->iNative = NativeIndex;
	memcpy_s(&SetLobbySetting_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbySetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId)
{
	static UFunction* pFnGetLobbyAdmin = nullptr;

	if (!pFnGetLobbyAdmin)
	{
		pFnGetLobbyAdmin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin");

	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Parms GetLobbyAdmin_Parms;

	unsigned short NativeIndex = pFnGetLobbyAdmin->iNative;
	pFnGetLobbyAdmin->iNative = 0;

	pFnGetLobbyAdmin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLobbyAdmin, &GetLobbyAdmin_Parms, nullptr);

	pFnGetLobbyAdmin->FunctionFlags |= 0x400;

	pFnGetLobbyAdmin->iNative = NativeIndex;
	memcpy_s(&GetLobbyAdmin_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&GetLobbyAdmin_Parms.AdminId, 0x48, &AdminId, 0x48);

	return GetLobbyAdmin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            AdminIndex                     (CPF_Parm)
// struct FActiveLobbyInfo        Lobby                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked(int AdminIndex, struct FActiveLobbyInfo& Lobby)
{
	static UFunction* pFnOnLobbyKicked = nullptr;

	if (!pFnOnLobbyKicked)
	{
		pFnOnLobbyKicked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked");

	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Parms OnLobbyKicked_Parms;
	memcpy_s(&OnLobbyKicked_Parms.AdminIndex, 0x4, &AdminIndex, 0x4);

	this->ProcessEvent(pFnOnLobbyKicked, &OnLobbyKicked_Parms, nullptr);
	memcpy_s(&OnLobbyKicked_Parms.Lobby, 0x30, &Lobby, 0x30);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<unsigned char>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<unsigned char>& Data)
{
	static UFunction* pFnSendLobbyBinaryData = nullptr;

	if (!pFnSendLobbyBinaryData)
	{
		pFnSendLobbyBinaryData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData");

	}

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Parms SendLobbyBinaryData_Parms;

	unsigned short NativeIndex = pFnSendLobbyBinaryData->iNative;
	pFnSendLobbyBinaryData->iNative = 0;

	pFnSendLobbyBinaryData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendLobbyBinaryData, &SendLobbyBinaryData_Parms, nullptr);

	pFnSendLobbyBinaryData->FunctionFlags |= 0x400;

	pFnSendLobbyBinaryData->iNative = NativeIndex;
	memcpy_s(&SendLobbyBinaryData_Parms.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SendLobbyBinaryData_Parms.Data, 0x10, &Data, 0x10);

	return SendLobbyBinaryData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnSetLobbyUserSetting = nullptr;

	if (!pFnSetLobbyUserSetting)
	{
		pFnSetLobbyUserSetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting");

	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Parms SetLobbyUserSetting_Parms;
	memcpy_s(&SetLobbyUserSetting_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbyUserSetting_Parms.Value, 0x10, &Value, 0x10);

	unsigned short NativeIndex = pFnSetLobbyUserSetting->iNative;
	pFnSetLobbyUserSetting->iNative = 0;

	pFnSetLobbyUserSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetLobbyUserSetting, &SetLobbyUserSetting_Parms, nullptr);

	pFnSetLobbyUserSetting->FunctionFlags |= 0x400;

	pFnSetLobbyUserSetting->iNative = NativeIndex;
	memcpy_s(&SetLobbyUserSetting_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return SetLobbyUserSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnLeaveLobby = nullptr;

	if (!pFnLeaveLobby)
	{
		pFnLeaveLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby");

	}

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Parms LeaveLobby_Parms;

	unsigned short NativeIndex = pFnLeaveLobby->iNative;
	pFnLeaveLobby->iNative = 0;

	pFnLeaveLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLeaveLobby, &LeaveLobby_Parms, nullptr);

	pFnLeaveLobby->FunctionFlags |= 0x400;

	pFnLeaveLobby->iNative = NativeIndex;
	memcpy_s(&LeaveLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return LeaveLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* pFnJoinLobby = nullptr;

	if (!pFnJoinLobby)
	{
		pFnJoinLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby");

	}

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Parms JoinLobby_Parms;
	memcpy_s(&JoinLobby_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	unsigned short NativeIndex = pFnJoinLobby->iNative;
	pFnJoinLobby->iNative = 0;

	pFnJoinLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnJoinLobby, &JoinLobby_Parms, nullptr);

	pFnJoinLobby->FunctionFlags |= 0x400;

	pFnJoinLobby->iNative = NativeIndex;
	memcpy_s(&JoinLobby_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	return JoinLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies(struct FUniqueLobbyId LobbyId)
{
	static UFunction* pFnUpdateFoundLobbies = nullptr;

	if (!pFnUpdateFoundLobbies)
	{
		pFnUpdateFoundLobbies = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies");

	}

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Parms UpdateFoundLobbies_Parms;
	memcpy_s(&UpdateFoundLobbies_Parms.LobbyId, 0x10, &LobbyId, 0x10);

	unsigned short NativeIndex = pFnUpdateFoundLobbies->iNative;
	pFnUpdateFoundLobbies->iNative = 0;

	pFnUpdateFoundLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateFoundLobbies, &UpdateFoundLobbies_Parms, nullptr);

	pFnUpdateFoundLobbies->FunctionFlags |= 0x400;

	pFnUpdateFoundLobbies->iNative = NativeIndex;

	return UpdateFoundLobbies_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            MinSlots                       (CPF_OptionalParm | CPF_Parm)
// unsigned char                  Distance                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, unsigned char Distance)
{
	static UFunction* pFnFindLobbies = nullptr;

	if (!pFnFindLobbies)
	{
		pFnFindLobbies = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies");

	}

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Parms FindLobbies_Parms;
	memcpy_s(&FindLobbies_Parms.MaxResults, 0x4, &MaxResults, 0x4);
	memcpy_s(&FindLobbies_Parms.Filters, 0x10, &Filters, 0x10);
	memcpy_s(&FindLobbies_Parms.SortFilters, 0x10, &SortFilters, 0x10);
	memcpy_s(&FindLobbies_Parms.MinSlots, 0x4, &MinSlots, 0x4);
	FindLobbies_Parms.Distance = Distance;

	unsigned short NativeIndex = pFnFindLobbies->iNative;
	pFnFindLobbies->iNative = 0;

	pFnFindLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindLobbies, &FindLobbies_Parms, nullptr);

	pFnFindLobbies->FunctionFlags |= 0x400;

	pFnFindLobbies->iNative = NativeIndex;

	return FindLobbies_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            MaxPlayers                     (CPF_Parm)
// unsigned char                  Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CreateLobby(int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static UFunction* pFnCreateLobby = nullptr;

	if (!pFnCreateLobby)
	{
		pFnCreateLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby");

	}

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Parms CreateLobby_Parms;
	memcpy_s(&CreateLobby_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&CreateLobby_Parms.MaxPlayers, 0x4, &MaxPlayers, 0x4);
	CreateLobby_Parms.Type = Type;
	memcpy_s(&CreateLobby_Parms.InitialSettings, 0x10, &InitialSettings, 0x10);

	unsigned short NativeIndex = pFnCreateLobby->iNative;
	pFnCreateLobby->iNative = 0;

	pFnCreateLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateLobby, &CreateLobby_Parms, nullptr);

	pFnCreateLobby->FunctionFlags |= 0x400;

	pFnCreateLobby->iNative = NativeIndex;

	return CreateLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RefreshNetworkErrorToggle()
{
	static UFunction* pFnRefreshNetworkErrorToggle = nullptr;

	if (!pFnRefreshNetworkErrorToggle)
	{
		pFnRefreshNetworkErrorToggle = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle");

	}

	UOnlineSubsystemSteamworks_execRefreshNetworkErrorToggle_Parms RefreshNetworkErrorToggle_Parms;

	this->ProcessEvent(pFnRefreshNetworkErrorToggle, &RefreshNetworkErrorToggle_Parms, nullptr);

	return RefreshNetworkErrorToggle_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::TriggerScreenshot()
{
	static UFunction* pFnTriggerScreenshot = nullptr;

	if (!pFnTriggerScreenshot)
	{
		pFnTriggerScreenshot = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot");

	}

	UOnlineSubsystemSteamworks_execTriggerScreenshot_Parms TriggerScreenshot_Parms;

	unsigned short NativeIndex = pFnTriggerScreenshot->iNative;
	pFnTriggerScreenshot->iNative = 0;

	pFnTriggerScreenshot->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTriggerScreenshot, &TriggerScreenshot_Parms, nullptr);

	pFnTriggerScreenshot->FunctionFlags |= 0x400;

	pFnTriggerScreenshot->iNative = NativeIndex;

	return TriggerScreenshot_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)
// unsigned long                  bConnected                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerConnectionStatusChanged(int LocalPlayerNum, unsigned long bConnected)
{
	static UFunction* pFnOnControllerConnectionStatusChanged = nullptr;

	if (!pFnOnControllerConnectionStatusChanged)
	{
		pFnOnControllerConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged");

	}

	UOnlineSubsystemSteamworks_execOnControllerConnectionStatusChanged_Parms OnControllerConnectionStatusChanged_Parms;
	memcpy_s(&OnControllerConnectionStatusChanged_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	OnControllerConnectionStatusChanged_Parms.bConnected = bConnected;

	pFnOnControllerConnectionStatusChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOnControllerConnectionStatusChanged, &OnControllerConnectionStatusChanged_Parms, nullptr);

	pFnOnControllerConnectionStatusChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)
// unsigned char                  InputAPI                       (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerInputAPIChanged(int LocalPlayerNum, unsigned char InputAPI)
{
	static UFunction* pFnOnControllerInputAPIChanged = nullptr;

	if (!pFnOnControllerInputAPIChanged)
	{
		pFnOnControllerInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged");

	}

	UOnlineSubsystemSteamworks_execOnControllerInputAPIChanged_Parms OnControllerInputAPIChanged_Parms;
	memcpy_s(&OnControllerInputAPIChanged_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	OnControllerInputAPIChanged_Parms.InputAPI = InputAPI;

	pFnOnControllerInputAPIChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOnControllerInputAPIChanged, &OnControllerInputAPIChanged_Parms, nullptr);

	pFnOnControllerInputAPIChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)

unsigned char UOnlineSubsystemSteamworks::GetControllerPlatform(int LocalPlayerNum)
{
	static UFunction* pFnGetControllerPlatform = nullptr;

	if (!pFnGetControllerPlatform)
	{
		pFnGetControllerPlatform = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform");

	}

	UOnlineSubsystemSteamworks_execGetControllerPlatform_Parms GetControllerPlatform_Parms;
	memcpy_s(&GetControllerPlatform_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	unsigned short NativeIndex = pFnGetControllerPlatform->iNative;
	pFnGetControllerPlatform->iNative = 0;

	pFnGetControllerPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetControllerPlatform, &GetControllerPlatform_Parms, nullptr);

	pFnGetControllerPlatform->FunctionFlags |= 0x400;

	pFnGetControllerPlatform->iNative = NativeIndex;

	return GetControllerPlatform_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)

int UOnlineSubsystemSteamworks::GetControllerID(int LocalPlayerNum)
{
	static UFunction* pFnGetControllerID = nullptr;

	if (!pFnGetControllerID)
	{
		pFnGetControllerID = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID");

	}

	UOnlineSubsystemSteamworks_execGetControllerID_Parms GetControllerID_Parms;
	memcpy_s(&GetControllerID_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	pFnGetControllerID->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetControllerID, &GetControllerID_Parms, nullptr);

	pFnGetControllerID->FunctionFlags |= 0x400;

	return GetControllerID_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetConnectedControllerNames()
{
	static UFunction* pFnGetConnectedControllerNames = nullptr;

	if (!pFnGetConnectedControllerNames)
	{
		pFnGetConnectedControllerNames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames");

	}

	UOnlineSubsystemSteamworks_execGetConnectedControllerNames_Parms GetConnectedControllerNames_Parms;

	pFnGetConnectedControllerNames->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetConnectedControllerNames, &GetConnectedControllerNames_Parms, nullptr);

	pFnGetConnectedControllerNames->FunctionFlags |= 0x400;

	return GetConnectedControllerNames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLocalPlayerRemoved(int LocalPlayerNum)
{
	static UFunction* pFnOnLocalPlayerRemoved = nullptr;

	if (!pFnOnLocalPlayerRemoved)
	{
		pFnOnLocalPlayerRemoved = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved");

	}

	UOnlineSubsystemSteamworks_execOnLocalPlayerRemoved_Parms OnLocalPlayerRemoved_Parms;
	memcpy_s(&OnLocalPlayerRemoved_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	pFnOnLocalPlayerRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOnLocalPlayerRemoved, &OnLocalPlayerRemoved_Parms, nullptr);

	pFnOnLocalPlayerRemoved->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::UnregisterController(int LocalPlayerNum)
{
	static UFunction* pFnUnregisterController = nullptr;

	if (!pFnUnregisterController)
	{
		pFnUnregisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController");

	}

	UOnlineSubsystemSteamworks_execUnregisterController_Parms UnregisterController_Parms;
	memcpy_s(&UnregisterController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	pFnUnregisterController->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterController, &UnregisterController_Parms, nullptr);

	pFnUnregisterController->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController
// [0x00034401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            ControllerId                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::RegisterController(int LocalPlayerNum, int ControllerId)
{
	static UFunction* pFnRegisterController = nullptr;

	if (!pFnRegisterController)
	{
		pFnRegisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController");

	}

	UOnlineSubsystemSteamworks_execRegisterController_Parms RegisterController_Parms;
	memcpy_s(&RegisterController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&RegisterController_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	pFnRegisterController->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterController, &RegisterController_Parms, nullptr);

	pFnRegisterController->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            LocalPlayerNum                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::CanRegisterController(int LocalPlayerNum)
{
	static UFunction* pFnCanRegisterController = nullptr;

	if (!pFnCanRegisterController)
	{
		pFnCanRegisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController");

	}

	UOnlineSubsystemSteamworks_execCanRegisterController_Parms CanRegisterController_Parms;
	memcpy_s(&CanRegisterController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	pFnCanRegisterController->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCanRegisterController, &CanRegisterController_Parms, nullptr);

	pFnCanRegisterController->FunctionFlags |= 0x400;

	return CanRegisterController_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowBindings(int ControllerId)
{
	static UFunction* pFnShowBindings = nullptr;

	if (!pFnShowBindings)
	{
		pFnShowBindings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings");

	}

	UOnlineSubsystemSteamworks_execShowBindings_Parms ShowBindings_Parms;
	memcpy_s(&ShowBindings_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	pFnShowBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowBindings, &ShowBindings_Parms, nullptr);

	pFnShowBindings->FunctionFlags |= 0x400;

	return ShowBindings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   LayoutName                     (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerLayout(int ControllerId, struct FName LayoutName)
{
	static UFunction* pFnSetControllerLayout = nullptr;

	if (!pFnSetControllerLayout)
	{
		pFnSetControllerLayout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout");

	}

	UOnlineSubsystemSteamworks_execSetControllerLayout_Parms SetControllerLayout_Parms;
	memcpy_s(&SetControllerLayout_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerLayout_Parms.LayoutName, 0x8, &LayoutName, 0x8);

	unsigned short NativeIndex = pFnSetControllerLayout->iNative;
	pFnSetControllerLayout->iNative = 0;

	pFnSetControllerLayout->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetControllerLayout, &SetControllerLayout_Parms, nullptr);

	pFnSetControllerLayout->FunctionFlags |= 0x400;

	pFnSetControllerLayout->iNative = NativeIndex;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  TargetAPI                      (CPF_Parm)

void UOnlineSubsystemSteamworks::SetInputAPI(unsigned char TargetAPI)
{
	static UFunction* pFnSetInputAPI = nullptr;

	if (!pFnSetInputAPI)
	{
		pFnSetInputAPI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI");

	}

	UOnlineSubsystemSteamworks_execSetInputAPI_Parms SetInputAPI_Parms;
	SetInputAPI_Parms.TargetAPI = TargetAPI;

	pFnSetInputAPI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetInputAPI, &SetInputAPI_Parms, nullptr);

	pFnSetInputAPI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetActiveDiscDLC()
{
	static UFunction* pFnGetActiveDiscDLC = nullptr;

	if (!pFnGetActiveDiscDLC)
	{
		pFnGetActiveDiscDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC");

	}

	UOnlineSubsystemSteamworks_execGetActiveDiscDLC_Parms GetActiveDiscDLC_Parms;

	this->ProcessEvent(pFnGetActiveDiscDLC, &GetActiveDiscDLC_Parms, nullptr);

	return GetActiveDiscDLC_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRequiresOnlineSubscription    (CPF_Parm)

void UOnlineSubsystemSteamworks::SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription)
{
	static UFunction* pFnSetOnlineSubscriptionRequirement = nullptr;

	if (!pFnSetOnlineSubscriptionRequirement)
	{
		pFnSetOnlineSubscriptionRequirement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement");

	}

	UOnlineSubsystemSteamworks_execSetOnlineSubscriptionRequirement_Parms SetOnlineSubscriptionRequirement_Parms;
	SetOnlineSubscriptionRequirement_Parms.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	this->ProcessEvent(pFnSetOnlineSubscriptionRequirement, &SetOnlineSubscriptionRequirement_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameViewportClient*     GVC                            (CPF_Parm)
// int                            LocalPlayerNum                 (CPF_Parm)
// unsigned long                  bConnected                     (CPF_Parm)

void UOnlineSubsystemSteamworks::HandleGamepadConnectionStatusChanged(class UGameViewportClient* GVC, int LocalPlayerNum, unsigned long bConnected)
{
	static UFunction* pFnHandleGamepadConnectionStatusChanged = nullptr;

	if (!pFnHandleGamepadConnectionStatusChanged)
	{
		pFnHandleGamepadConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged");

	}

	UOnlineSubsystemSteamworks_execHandleGamepadConnectionStatusChanged_Parms HandleGamepadConnectionStatusChanged_Parms;
	memcpy_s(&HandleGamepadConnectionStatusChanged_Parms.GVC, 0x8, &GVC, 0x8);
	memcpy_s(&HandleGamepadConnectionStatusChanged_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	HandleGamepadConnectionStatusChanged_Parms.bConnected = bConnected;

	this->ProcessEvent(pFnHandleGamepadConnectionStatusChanged, &HandleGamepadConnectionStatusChanged_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameViewportClient*     GVC                            (CPF_Parm)
// int                            LocalPlayerNum                 (CPF_Parm)
// unsigned char                  InputAPI                       (CPF_Parm)

void UOnlineSubsystemSteamworks::HandleGamepadInputAPIChanged(class UGameViewportClient* GVC, int LocalPlayerNum, unsigned char InputAPI)
{
	static UFunction* pFnHandleGamepadInputAPIChanged = nullptr;

	if (!pFnHandleGamepadInputAPIChanged)
	{
		pFnHandleGamepadInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged");

	}

	UOnlineSubsystemSteamworks_execHandleGamepadInputAPIChanged_Parms HandleGamepadInputAPIChanged_Parms;
	memcpy_s(&HandleGamepadInputAPIChanged_Parms.GVC, 0x8, &GVC, 0x8);
	memcpy_s(&HandleGamepadInputAPIChanged_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	HandleGamepadInputAPIChanged_Parms.InputAPI = InputAPI;

	this->ProcessEvent(pFnHandleGamepadInputAPIChanged, &HandleGamepadInputAPIChanged_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* pFnClearInputAPIChangedDelegate = nullptr;

	if (!pFnClearInputAPIChangedDelegate)
	{
		pFnClearInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearInputAPIChangedDelegate_Parms ClearInputAPIChangedDelegate_Parms;
	memcpy_s(&ClearInputAPIChangedDelegate_Parms.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(pFnClearInputAPIChangedDelegate, &ClearInputAPIChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* pFnAddInputAPIChangedDelegate = nullptr;

	if (!pFnAddInputAPIChangedDelegate)
	{
		pFnAddInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddInputAPIChangedDelegate_Parms AddInputAPIChangedDelegate_Parms;
	memcpy_s(&AddInputAPIChangedDelegate_Parms.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(pFnAddInputAPIChangedDelegate, &AddInputAPIChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* pFnClearUnregisteredControllerDelegate = nullptr;

	if (!pFnClearUnregisteredControllerDelegate)
	{
		pFnClearUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUnregisteredControllerDelegate_Parms ClearUnregisteredControllerDelegate_Parms;
	memcpy_s(&ClearUnregisteredControllerDelegate_Parms.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnClearUnregisteredControllerDelegate, &ClearUnregisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* pFnClearRegisteredControllerDelegate = nullptr;

	if (!pFnClearRegisteredControllerDelegate)
	{
		pFnClearRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate");

	}

	UOnlineSubsystemSteamworks_execClearRegisteredControllerDelegate_Parms ClearRegisteredControllerDelegate_Parms;
	memcpy_s(&ClearRegisteredControllerDelegate_Parms.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisteredControllerDelegate, &ClearRegisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* pFnAddUnregisteredControllerDelegate = nullptr;

	if (!pFnAddUnregisteredControllerDelegate)
	{
		pFnAddUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUnregisteredControllerDelegate_Parms AddUnregisteredControllerDelegate_Parms;
	memcpy_s(&AddUnregisteredControllerDelegate_Parms.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnAddUnregisteredControllerDelegate, &AddUnregisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* pFnAddRegisteredControllerDelegate = nullptr;

	if (!pFnAddRegisteredControllerDelegate)
	{
		pFnAddRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate");

	}

	UOnlineSubsystemSteamworks_execAddRegisteredControllerDelegate_Parms AddRegisteredControllerDelegate_Parms;
	memcpy_s(&AddRegisteredControllerDelegate_Parms.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisteredControllerDelegate, &AddRegisteredControllerDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  TargetAPI                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnInputAPIChanged(unsigned char TargetAPI)
{
	static UFunction* pFnOnInputAPIChanged = nullptr;

	if (!pFnOnInputAPIChanged)
	{
		pFnOnInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged");

	}

	UOnlineSubsystemSteamworks_execOnInputAPIChanged_Parms OnInputAPIChanged_Parms;
	OnInputAPIChanged_Parms.TargetAPI = TargetAPI;

	this->ProcessEvent(pFnOnInputAPIChanged, &OnInputAPIChanged_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnregisteredController(int LocalPlayerNum)
{
	static UFunction* pFnOnUnregisteredController = nullptr;

	if (!pFnOnUnregisteredController)
	{
		pFnOnUnregisteredController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController");

	}

	UOnlineSubsystemSteamworks_execOnUnregisteredController_Parms OnUnregisteredController_Parms;
	memcpy_s(&OnUnregisteredController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(pFnOnUnregisteredController, &OnUnregisteredController_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisteredController(int LocalPlayerNum, int ControllerId)
{
	static UFunction* pFnOnRegisteredController = nullptr;

	if (!pFnOnRegisteredController)
	{
		pFnOnRegisteredController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController");

	}

	UOnlineSubsystemSteamworks_execOnRegisteredController_Parms OnRegisteredController_Parms;
	memcpy_s(&OnRegisteredController_Parms.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&OnRegisteredController_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnOnRegisteredController, &OnRegisteredController_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            InviteFrom                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::HasIncomingFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId InviteFrom)
{
	static UFunction* pFnHasIncomingFriendInvite = nullptr;

	if (!pFnHasIncomingFriendInvite)
	{
		pFnHasIncomingFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite");

	}

	UOnlineSubsystemSteamworks_execHasIncomingFriendInvite_Parms HasIncomingFriendInvite_Parms;
	HasIncomingFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&HasIncomingFriendInvite_Parms.InviteFrom, 0x48, &InviteFrom, 0x48);

	this->ProcessEvent(pFnHasIncomingFriendInvite, &HasIncomingFriendInvite_Parms, nullptr);

	return HasIncomingFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasFriendsFunctionality()
{
	static UFunction* pFnHasFriendsFunctionality = nullptr;

	if (!pFnHasFriendsFunctionality)
	{
		pFnHasFriendsFunctionality = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality");

	}

	UOnlineSubsystemSteamworks_execHasFriendsFunctionality_Parms HasFriendsFunctionality_Parms;

	this->ProcessEvent(pFnHasFriendsFunctionality, &HasFriendsFunctionality_Parms, nullptr);

	return HasFriendsFunctionality_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CanSendOfflinePartyInvite(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnCanSendOfflinePartyInvite = nullptr;

	if (!pFnCanSendOfflinePartyInvite)
	{
		pFnCanSendOfflinePartyInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite");

	}

	UOnlineSubsystemSteamworks_execCanSendOfflinePartyInvite_Parms CanSendOfflinePartyInvite_Parms;
	memcpy_s(&CanSendOfflinePartyInvite_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnCanSendOfflinePartyInvite, &CanSendOfflinePartyInvite_Parms, nullptr);

	return CanSendOfflinePartyInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bShowUi                        (CPF_Parm)

bool UOnlineSubsystemSteamworks::CheckParentalControlInfo(unsigned long bShowUi)
{
	static UFunction* pFnCheckParentalControlInfo = nullptr;

	if (!pFnCheckParentalControlInfo)
	{
		pFnCheckParentalControlInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo");

	}

	UOnlineSubsystemSteamworks_execCheckParentalControlInfo_Parms CheckParentalControlInfo_Parms;
	CheckParentalControlInfo_Parms.bShowUi = bShowUi;

	this->ProcessEvent(pFnCheckParentalControlInfo, &CheckParentalControlInfo_Parms, nullptr);

	return CheckParentalControlInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys)
{
	static UFunction* pFnRecordPlayersRecentlyMetKeys = nullptr;

	if (!pFnRecordPlayersRecentlyMetKeys)
	{
		pFnRecordPlayersRecentlyMetKeys = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys");

	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMetKeys_Parms RecordPlayersRecentlyMetKeys_Parms;
	RecordPlayersRecentlyMetKeys_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RecordPlayersRecentlyMetKeys_Parms.PlayerKeys, 0x10, &PlayerKeys, 0x10);

	this->ProcessEvent(pFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Parms, nullptr);

	return RecordPlayersRecentlyMetKeys_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<unsigned char>          Key                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetPlayHistoryRegistrationKey(TArray<unsigned char>& Key)
{
	static UFunction* pFnGetPlayHistoryRegistrationKey = nullptr;

	if (!pFnGetPlayHistoryRegistrationKey)
	{
		pFnGetPlayHistoryRegistrationKey = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey");

	}

	UOnlineSubsystemSteamworks_execGetPlayHistoryRegistrationKey_Parms GetPlayHistoryRegistrationKey_Parms;

	this->ProcessEvent(pFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Parms, nullptr);
	memcpy_s(&GetPlayHistoryRegistrationKey_Parms.Key, 0x10, &Key, 0x10);

	return GetPlayHistoryRegistrationKey_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsOriginalAppOwner()
{
	static UFunction* pFnIsOriginalAppOwner = nullptr;

	if (!pFnIsOriginalAppOwner)
	{
		pFnIsOriginalAppOwner = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner");

	}

	UOnlineSubsystemSteamworks_execIsOriginalAppOwner_Parms IsOriginalAppOwner_Parms;

	unsigned short NativeIndex = pFnIsOriginalAppOwner->iNative;
	pFnIsOriginalAppOwner->iNative = 0;

	pFnIsOriginalAppOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsOriginalAppOwner, &IsOriginalAppOwner_Parms, nullptr);

	pFnIsOriginalAppOwner->FunctionFlags |= 0x400;

	pFnIsOriginalAppOwner->iNative = NativeIndex;

	return IsOriginalAppOwner_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            CurrentPlayerCount             (CPF_Parm)
// int                            numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers)
{
	static UFunction* pFnUpdateSessionStatusFromPlayers = nullptr;

	if (!pFnUpdateSessionStatusFromPlayers)
	{
		pFnUpdateSessionStatusFromPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers");

	}

	UOnlineSubsystemSteamworks_execUpdateSessionStatusFromPlayers_Parms UpdateSessionStatusFromPlayers_Parms;
	memcpy_s(&UpdateSessionStatusFromPlayers_Parms.CurrentPlayerCount, 0x4, &CurrentPlayerCount, 0x4);
	memcpy_s(&UpdateSessionStatusFromPlayers_Parms.numBotPlayers, 0x4, &numBotPlayers, 0x4);

	this->ProcessEvent(pFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            AchievementId                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsAchievementUnlocked(unsigned char LocalUserNum, int AchievementId)
{
	static UFunction* pFnIsAchievementUnlocked = nullptr;

	if (!pFnIsAchievementUnlocked)
	{
		pFnIsAchievementUnlocked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked");

	}

	UOnlineSubsystemSteamworks_execIsAchievementUnlocked_Parms IsAchievementUnlocked_Parms;
	IsAchievementUnlocked_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&IsAchievementUnlocked_Parms.AchievementId, 0x4, &AchievementId, 0x4);

	this->ProcessEvent(pFnIsAchievementUnlocked, &IsAchievementUnlocked_Parms, nullptr);

	return IsAchievementUnlocked_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalPlayerNum                 (CPF_Parm)
// float                          Progress                       (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateGameProgress(unsigned char LocalPlayerNum, float Progress)
{
	static UFunction* pFnUpdateGameProgress = nullptr;

	if (!pFnUpdateGameProgress)
	{
		pFnUpdateGameProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress");

	}

	UOnlineSubsystemSteamworks_execUpdateGameProgress_Parms UpdateGameProgress_Parms;
	UpdateGameProgress_Parms.LocalPlayerNum = LocalPlayerNum;
	memcpy_s(&UpdateGameProgress_Parms.Progress, 0x4, &Progress, 0x4);

	this->ProcessEvent(pFnUpdateGameProgress, &UpdateGameProgress_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ServerId                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FinishOnlineGameSession(struct FString ServerId)
{
	static UFunction* pFnFinishOnlineGameSession = nullptr;

	if (!pFnFinishOnlineGameSession)
	{
		pFnFinishOnlineGameSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession");

	}

	UOnlineSubsystemSteamworks_execFinishOnlineGameSession_Parms FinishOnlineGameSession_Parms;
	memcpy_s(&FinishOnlineGameSession_Parms.ServerId, 0x10, &ServerId, 0x10);

	this->ProcessEvent(pFnFinishOnlineGameSession, &FinishOnlineGameSession_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ServerId                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::StartOnlineGameSession(struct FString ServerId)
{
	static UFunction* pFnStartOnlineGameSession = nullptr;

	if (!pFnStartOnlineGameSession)
	{
		pFnStartOnlineGameSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession");

	}

	UOnlineSubsystemSteamworks_execStartOnlineGameSession_Parms StartOnlineGameSession_Parms;
	memcpy_s(&StartOnlineGameSession_Parms.ServerId, 0x10, &ServerId, 0x10);

	this->ProcessEvent(pFnStartOnlineGameSession, &StartOnlineGameSession_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate)
{
	static UFunction* pFnClearSystemUserControllerPairingChangedDelegate = nullptr;

	if (!pFnClearSystemUserControllerPairingChangedDelegate)
	{
		pFnClearSystemUserControllerPairingChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearSystemUserControllerPairingChangedDelegate_Parms ClearSystemUserControllerPairingChangedDelegate_Parms;
	memcpy_s(&ClearSystemUserControllerPairingChangedDelegate_Parms.PairingChangeDelegate, 0x18, &PairingChangeDelegate, 0x18);

	this->ProcessEvent(pFnClearSystemUserControllerPairingChangedDelegate, &ClearSystemUserControllerPairingChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate)
{
	static UFunction* pFnAddSystemUserControllerPairingChangedDelegate = nullptr;

	if (!pFnAddSystemUserControllerPairingChangedDelegate)
	{
		pFnAddSystemUserControllerPairingChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddSystemUserControllerPairingChangedDelegate_Parms AddSystemUserControllerPairingChangedDelegate_Parms;
	memcpy_s(&AddSystemUserControllerPairingChangedDelegate_Parms.PairingChangeDelegate, 0x18, &PairingChangeDelegate, 0x18);

	this->ProcessEvent(pFnAddSystemUserControllerPairingChangedDelegate, &AddSystemUserControllerPairingChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            NewLocalUserNum                (CPF_Parm)
// int                            PreviousLocalUserNum           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum)
{
	static UFunction* pFnOnSystemUserControllerPairingChanged = nullptr;

	if (!pFnOnSystemUserControllerPairingChanged)
	{
		pFnOnSystemUserControllerPairingChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged");

	}

	UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Parms OnSystemUserControllerPairingChanged_Parms;
	memcpy_s(&OnSystemUserControllerPairingChanged_Parms.NewLocalUserNum, 0x4, &NewLocalUserNum, 0x4);
	memcpy_s(&OnSystemUserControllerPairingChanged_Parms.PreviousLocalUserNum, 0x4, &PreviousLocalUserNum, 0x4);

	this->ProcessEvent(pFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
// [0x00030000] (FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::ClearAccountPickerInput()
{
	static UFunction* pFnClearAccountPickerInput = nullptr;

	if (!pFnClearAccountPickerInput)
	{
		pFnClearAccountPickerInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput");

	}

	UOnlineSubsystemSteamworks_execClearAccountPickerInput_Parms ClearAccountPickerInput_Parms;

	this->ProcessEvent(pFnClearAccountPickerInput, &ClearAccountPickerInput_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::LookForAccountPickerInput()
{
	static UFunction* pFnLookForAccountPickerInput = nullptr;

	if (!pFnLookForAccountPickerInput)
	{
		pFnLookForAccountPickerInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput");

	}

	UOnlineSubsystemSteamworks_execLookForAccountPickerInput_Parms LookForAccountPickerInput_Parms;

	this->ProcessEvent(pFnLookForAccountPickerInput, &LookForAccountPickerInput_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
// [0x00030000] (FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddPlayerToSession(unsigned char ControllerId)
{
	static UFunction* pFnAddPlayerToSession = nullptr;

	if (!pFnAddPlayerToSession)
	{
		pFnAddPlayerToSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession");

	}

	UOnlineSubsystemSteamworks_execAddPlayerToSession_Parms AddPlayerToSession_Parms;
	AddPlayerToSession_Parms.ControllerId = ControllerId;

	this->ProcessEvent(pFnAddPlayerToSession, &AddPlayerToSession_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::ClearPrimaryPlayer()
{
	static UFunction* pFnClearPrimaryPlayer = nullptr;

	if (!pFnClearPrimaryPlayer)
	{
		pFnClearPrimaryPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer");

	}

	UOnlineSubsystemSteamworks_execClearPrimaryPlayer_Parms ClearPrimaryPlayer_Parms;

	this->ProcessEvent(pFnClearPrimaryPlayer, &ClearPrimaryPlayer_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::RemoveUserAssociation(unsigned char ControllerId)
{
	static UFunction* pFnRemoveUserAssociation = nullptr;

	if (!pFnRemoveUserAssociation)
	{
		pFnRemoveUserAssociation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation");

	}

	UOnlineSubsystemSteamworks_execRemoveUserAssociation_Parms RemoveUserAssociation_Parms;
	RemoveUserAssociation_Parms.ControllerId = ControllerId;

	this->ProcessEvent(pFnRemoveUserAssociation, &RemoveUserAssociation_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::MapEnd()
{
	static UFunction* pFnMapEnd = nullptr;

	if (!pFnMapEnd)
	{
		pFnMapEnd = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd");

	}

	UOnlineSubsystemSteamworks_execMapEnd_Parms MapEnd_Parms;

	this->ProcessEvent(pFnMapEnd, &MapEnd_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::MapStart()
{
	static UFunction* pFnMapStart = nullptr;

	if (!pFnMapStart)
	{
		pFnMapStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart");

	}

	UOnlineSubsystemSteamworks_execMapStart_Parms MapStart_Parms;

	this->ProcessEvent(pFnMapStart, &MapStart_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnlineMatchEnd()
{
	static UFunction* pFnOnlineMatchEnd = nullptr;

	if (!pFnOnlineMatchEnd)
	{
		pFnOnlineMatchEnd = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd");

	}

	UOnlineSubsystemSteamworks_execOnlineMatchEnd_Parms OnlineMatchEnd_Parms;

	this->ProcessEvent(pFnOnlineMatchEnd, &OnlineMatchEnd_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 MapName                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnlineMatchStart(struct FString MapName)
{
	static UFunction* pFnOnlineMatchStart = nullptr;

	if (!pFnOnlineMatchStart)
	{
		pFnOnlineMatchStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart");

	}

	UOnlineSubsystemSteamworks_execOnlineMatchStart_Parms OnlineMatchStart_Parms;
	memcpy_s(&OnlineMatchStart_Parms.MapName, 0x10, &MapName, 0x10);

	this->ProcessEvent(pFnOnlineMatchStart, &OnlineMatchStart_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            DifficultyLevel                (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionDifficultyLevel(int DifficultyLevel)
{
	static UFunction* pFnSetSessionDifficultyLevel = nullptr;

	if (!pFnSetSessionDifficultyLevel)
	{
		pFnSetSessionDifficultyLevel = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel");

	}

	UOnlineSubsystemSteamworks_execSetSessionDifficultyLevel_Parms SetSessionDifficultyLevel_Parms;
	memcpy_s(&SetSessionDifficultyLevel_Parms.DifficultyLevel, 0x4, &DifficultyLevel, 0x4);

	this->ProcessEvent(pFnSetSessionDifficultyLevel, &SetSessionDifficultyLevel_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   GameplayModeName               (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayModeName(struct FName GameplayModeName)
{
	static UFunction* pFnSetSessionGameplayModeName = nullptr;

	if (!pFnSetSessionGameplayModeName)
	{
		pFnSetSessionGameplayModeName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName");

	}

	UOnlineSubsystemSteamworks_execSetSessionGameplayModeName_Parms SetSessionGameplayModeName_Parms;
	memcpy_s(&SetSessionGameplayModeName_Parms.GameplayModeName, 0x8, &GameplayModeName, 0x8);

	this->ProcessEvent(pFnSetSessionGameplayModeName, &SetSessionGameplayModeName_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            GameplayMode                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayMode(int GameplayMode)
{
	static UFunction* pFnSetSessionGameplayMode = nullptr;

	if (!pFnSetSessionGameplayMode)
	{
		pFnSetSessionGameplayMode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode");

	}

	UOnlineSubsystemSteamworks_execSetSessionGameplayMode_Parms SetSessionGameplayMode_Parms;
	memcpy_s(&SetSessionGameplayMode_Parms.GameplayMode, 0x4, &GameplayMode, 0x4);

	this->ProcessEvent(pFnSetSessionGameplayMode, &SetSessionGameplayMode_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<bool>                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

TArray<bool> UOnlineSubsystemSteamworks::GetSyncedAchievements(unsigned char LocalUserNum)
{
	static UFunction* pFnGetSyncedAchievements = nullptr;

	if (!pFnGetSyncedAchievements)
	{
		pFnGetSyncedAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements");

	}

	UOnlineSubsystemSteamworks_execGetSyncedAchievements_Parms GetSyncedAchievements_Parms;
	GetSyncedAchievements_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetSyncedAchievements, &GetSyncedAchievements_Parms, nullptr);

	return GetSyncedAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetPlayedWith(struct FUniqueNetId PlayerNetId)
{
	static UFunction* pFnSetPlayedWith = nullptr;

	if (!pFnSetPlayedWith)
	{
		pFnSetPlayedWith = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith");

	}

	UOnlineSubsystemSteamworks_execSetPlayedWith_Parms SetPlayedWith_Parms;
	memcpy_s(&SetPlayedWith_Parms.PlayerNetId, 0x48, &PlayerNetId, 0x48);

	unsigned short NativeIndex = pFnSetPlayedWith->iNative;
	pFnSetPlayedWith->iNative = 0;

	pFnSetPlayedWith->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetPlayedWith, &SetPlayedWith_Parms, nullptr);

	pFnSetPlayedWith->FunctionFlags |= 0x400;

	pFnSetPlayedWith->iNative = NativeIndex;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HandleBootMessage()
{
	static UFunction* pFnHandleBootMessage = nullptr;

	if (!pFnHandleBootMessage)
	{
		pFnHandleBootMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage");

	}

	UOnlineSubsystemSteamworks_execHandleBootMessage_Parms HandleBootMessage_Parms;

	pFnHandleBootMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHandleBootMessage, &HandleBootMessage_Parms, nullptr);

	pFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearErrorDialogClosedDelegate = nullptr;

	if (!pFnClearErrorDialogClosedDelegate)
	{
		pFnClearErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearErrorDialogClosedDelegate_Parms ClearErrorDialogClosedDelegate_Parms;
	memcpy_s(&ClearErrorDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddErrorDialogClosedDelegate = nullptr;

	if (!pFnAddErrorDialogClosedDelegate)
	{
		pFnAddErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddErrorDialogClosedDelegate_Parms AddErrorDialogClosedDelegate_Parms;
	memcpy_s(&AddErrorDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnErrorDialogClosed(int LocalUserNum)
{
	static UFunction* pFnOnErrorDialogClosed = nullptr;

	if (!pFnOnErrorDialogClosed)
	{
		pFnOnErrorDialogClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed");

	}

	UOnlineSubsystemSteamworks_execOnErrorDialogClosed_Parms OnErrorDialogClosed_Parms;
	memcpy_s(&OnErrorDialogClosed_Parms.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	this->ProcessEvent(pFnOnErrorDialogClosed, &OnErrorDialogClosed_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearCloseKickPlayerDialogDelegate = nullptr;

	if (!pFnClearCloseKickPlayerDialogDelegate)
	{
		pFnClearCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate");

	}

	UOnlineSubsystemSteamworks_execClearCloseKickPlayerDialogDelegate_Parms ClearCloseKickPlayerDialogDelegate_Parms;
	memcpy_s(&ClearCloseKickPlayerDialogDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddCloseKickPlayerDialogDelegate = nullptr;

	if (!pFnAddCloseKickPlayerDialogDelegate)
	{
		pFnAddCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate");

	}

	UOnlineSubsystemSteamworks_execAddCloseKickPlayerDialogDelegate_Parms AddCloseKickPlayerDialogDelegate_Parms;
	memcpy_s(&AddCloseKickPlayerDialogDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnCloseKickPlayerDialog()
{
	static UFunction* pFnOnCloseKickPlayerDialog = nullptr;

	if (!pFnOnCloseKickPlayerDialog)
	{
		pFnOnCloseKickPlayerDialog = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog");

	}

	UOnlineSubsystemSteamworks_execOnCloseKickPlayerDialog_Parms OnCloseKickPlayerDialog_Parms;

	this->ProcessEvent(pFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearCommerceDialogClosedDelegate = nullptr;

	if (!pFnClearCommerceDialogClosedDelegate)
	{
		pFnClearCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearCommerceDialogClosedDelegate_Parms ClearCommerceDialogClosedDelegate_Parms;
	memcpy_s(&ClearCommerceDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddCommerceDialogClosedDelegate = nullptr;

	if (!pFnAddCommerceDialogClosedDelegate)
	{
		pFnAddCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddCommerceDialogClosedDelegate_Parms AddCommerceDialogClosedDelegate_Parms;
	memcpy_s(&AddCommerceDialogClosedDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnCommerceDialogClosed()
{
	static UFunction* pFnOnCommerceDialogClosed = nullptr;

	if (!pFnOnCommerceDialogClosed)
	{
		pFnOnCommerceDialogClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed");

	}

	UOnlineSubsystemSteamworks_execOnCommerceDialogClosed_Parms OnCommerceDialogClosed_Parms;

	this->ProcessEvent(pFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
// [0x00034001] (FUNC_Final | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Comment                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnWordFilterSanitizeString = nullptr;

	if (!pFnWordFilterSanitizeString)
	{
		pFnWordFilterSanitizeString = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString");

	}

	UOnlineSubsystemSteamworks_execWordFilterSanitizeString_Parms WordFilterSanitizeString_Parms;
	memcpy_s(&WordFilterSanitizeString_Parms.Comment, 0x10, &Comment, 0x10);
	memcpy_s(&WordFilterSanitizeString_Parms.SanitizeDelegate, 0x18, &SanitizeDelegate, 0x18);
	memcpy_s(&WordFilterSanitizeString_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnWordFilterSanitizeString, &WordFilterSanitizeString_Parms, nullptr);

	return WordFilterSanitizeString_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnRemoveCanPlayOnlineChangedDelegate = nullptr;

	if (!pFnRemoveCanPlayOnlineChangedDelegate)
	{
		pFnRemoveCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execRemoveCanPlayOnlineChangedDelegate_Parms RemoveCanPlayOnlineChangedDelegate_Parms;
	memcpy_s(&RemoveCanPlayOnlineChangedDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnAddCanPlayOnlineChangedDelegate = nullptr;

	if (!pFnAddCanPlayOnlineChangedDelegate)
	{
		pFnAddCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddCanPlayOnlineChangedDelegate_Parms AddCanPlayOnlineChangedDelegate_Parms;
	memcpy_s(&AddCanPlayOnlineChangedDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet(unsigned char LocalUserNum, struct FString GameDescription, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnRecordPlayersRecentlyMet = nullptr;

	if (!pFnRecordPlayersRecentlyMet)
	{
		pFnRecordPlayersRecentlyMet = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet");

	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Parms RecordPlayersRecentlyMet_Parms;
	RecordPlayersRecentlyMet_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RecordPlayersRecentlyMet_Parms.GameDescription, 0x10, &GameDescription, 0x10);

	this->ProcessEvent(pFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Parms, nullptr);
	memcpy_s(&RecordPlayersRecentlyMet_Parms.Players, 0x10, &Players, 0x10);

	return RecordPlayersRecentlyMet_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnClearSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!pFnClearSaveDataNoSpaceDialogCompleteDelegate)
	{
		pFnClearSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearSaveDataNoSpaceDialogCompleteDelegate_Parms ClearSaveDataNoSpaceDialogCompleteDelegate_Parms;
	memcpy_s(&ClearSaveDataNoSpaceDialogCompleteDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnAddSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!pFnAddSaveDataNoSpaceDialogCompleteDelegate)
	{
		pFnAddSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddSaveDataNoSpaceDialogCompleteDelegate_Parms AddSaveDataNoSpaceDialogCompleteDelegate_Parms;
	memcpy_s(&AddSaveDataNoSpaceDialogCompleteDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bContinueWithoutSave           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave)
{
	static UFunction* pFnOnSaveDataNoSpaceDialogComplete = nullptr;

	if (!pFnOnSaveDataNoSpaceDialogComplete)
	{
		pFnOnSaveDataNoSpaceDialogComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete");

	}

	UOnlineSubsystemSteamworks_execOnSaveDataNoSpaceDialogComplete_Parms OnSaveDataNoSpaceDialogComplete_Parms;
	OnSaveDataNoSpaceDialogComplete_Parms.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent(pFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnClearUnlockedDLCChangeDelegate = nullptr;

	if (!pFnClearUnlockedDLCChangeDelegate)
	{
		pFnClearUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUnlockedDLCChangeDelegate_Parms ClearUnlockedDLCChangeDelegate_Parms;
	memcpy_s(&ClearUnlockedDLCChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* pFnAddUnlockedDLCChangeDelegate = nullptr;

	if (!pFnAddUnlockedDLCChangeDelegate)
	{
		pFnAddUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUnlockedDLCChangeDelegate_Parms AddUnlockedDLCChangeDelegate_Parms;
	memcpy_s(&AddUnlockedDLCChangeDelegate_Parms.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(pFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetUnlockedDLC()
{
	static UFunction* pFnGetUnlockedDLC = nullptr;

	if (!pFnGetUnlockedDLC)
	{
		pFnGetUnlockedDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC");

	}

	UOnlineSubsystemSteamworks_execGetUnlockedDLC_Parms GetUnlockedDLC_Parms;

	this->ProcessEvent(pFnGetUnlockedDLC, &GetUnlockedDLC_Parms, nullptr);

	return GetUnlockedDLC_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
// [0x00130001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnUnlockedDLCChange()
{
	static UFunction* pFnOnUnlockedDLCChange = nullptr;

	if (!pFnOnUnlockedDLCChange)
	{
		pFnOnUnlockedDLCChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange");

	}

	UOnlineSubsystemSteamworks_execOnUnlockedDLCChange_Parms OnUnlockedDLCChange_Parms;

	this->ProcessEvent(pFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetOverlayEnabled()
{
	static UFunction* pFnGetOverlayEnabled = nullptr;

	if (!pFnGetOverlayEnabled)
	{
		pFnGetOverlayEnabled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled");

	}

	UOnlineSubsystemSteamworks_execGetOverlayEnabled_Parms GetOverlayEnabled_Parms;

	pFnGetOverlayEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetOverlayEnabled, &GetOverlayEnabled_Parms, nullptr);

	pFnGetOverlayEnabled->FunctionFlags |= 0x400;

	return GetOverlayEnabled_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)

int UOnlineSubsystemSteamworks::GetDLCPurchaseTime(struct FName AppName)
{
	static UFunction* pFnGetDLCPurchaseTime = nullptr;

	if (!pFnGetDLCPurchaseTime)
	{
		pFnGetDLCPurchaseTime = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime");

	}

	UOnlineSubsystemSteamworks_execGetDLCPurchaseTime_Parms GetDLCPurchaseTime_Parms;
	memcpy_s(&GetDLCPurchaseTime_Parms.AppName, 0x8, &AppName, 0x8);

	pFnGetDLCPurchaseTime->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Parms, nullptr);

	pFnGetDLCPurchaseTime->FunctionFlags |= 0x400;

	return GetDLCPurchaseTime_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FName                   NewCurrency                    (CPF_Parm)
// struct FString                 NewCountry                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::HandleGetUserInfoComplete(struct FName NewCurrency, struct FString NewCountry)
{
	static UFunction* pFnHandleGetUserInfoComplete = nullptr;

	if (!pFnHandleGetUserInfoComplete)
	{
		pFnHandleGetUserInfoComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete");

	}

	UOnlineSubsystemSteamworks_execHandleGetUserInfoComplete_Parms HandleGetUserInfoComplete_Parms;
	memcpy_s(&HandleGetUserInfoComplete_Parms.NewCurrency, 0x8, &NewCurrency, 0x8);
	memcpy_s(&HandleGetUserInfoComplete_Parms.NewCountry, 0x10, &NewCountry, 0x10);

	this->ProcessEvent(pFnHandleGetUserInfoComplete, &HandleGetUserInfoComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::GetPlayerCountry(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerCountry = nullptr;

	if (!pFnGetPlayerCountry)
	{
		pFnGetPlayerCountry = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry");

	}

	UOnlineSubsystemSteamworks_execGetPlayerCountry_Parms GetPlayerCountry_Parms;
	GetPlayerCountry_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerCountry, &GetPlayerCountry_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlineSubsystemSteamworks::GetPlayerLanguage(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerLanguage = nullptr;

	if (!pFnGetPlayerLanguage)
	{
		pFnGetPlayerLanguage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage");

	}

	UOnlineSubsystemSteamworks_execGetPlayerLanguage_Parms GetPlayerLanguage_Parms;
	GetPlayerLanguage_Parms.LocalUserNum = LocalUserNum;

	pFnGetPlayerLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPlayerLanguage, &GetPlayerLanguage_Parms, nullptr);

	pFnGetPlayerLanguage->FunctionFlags |= 0x400;

	return GetPlayerLanguage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* pFnClearReadPlayerCountryDelegate = nullptr;

	if (!pFnClearReadPlayerCountryDelegate)
	{
		pFnClearReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadPlayerCountryDelegate_Parms ClearReadPlayerCountryDelegate_Parms;
	ClearReadPlayerCountryDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadPlayerCountryDelegate_Parms.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(pFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerCountryDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* pFnAddReadPlayerCountryDelegate = nullptr;

	if (!pFnAddReadPlayerCountryDelegate)
	{
		pFnAddReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadPlayerCountryDelegate_Parms AddReadPlayerCountryDelegate_Parms;
	AddReadPlayerCountryDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadPlayerCountryDelegate_Parms.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(pFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AnyPlayerChatRestricted()
{
	static UFunction* pFnAnyPlayerChatRestricted = nullptr;

	if (!pFnAnyPlayerChatRestricted)
	{
		pFnAnyPlayerChatRestricted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted");

	}

	UOnlineSubsystemSteamworks_execAnyPlayerChatRestricted_Parms AnyPlayerChatRestricted_Parms;

	pFnAnyPlayerChatRestricted->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Parms, nullptr);

	pFnAnyPlayerChatRestricted->FunctionFlags |= 0x400;

	return AnyPlayerChatRestricted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::InitializeTrophyAPI()
{
	static UFunction* pFnInitializeTrophyAPI = nullptr;

	if (!pFnInitializeTrophyAPI)
	{
		pFnInitializeTrophyAPI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI");

	}

	UOnlineSubsystemSteamworks_execInitializeTrophyAPI_Parms InitializeTrophyAPI_Parms;

	this->ProcessEvent(pFnInitializeTrophyAPI, &InitializeTrophyAPI_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets)
{
	static UFunction* pFnOpenStoreForItems = nullptr;

	if (!pFnOpenStoreForItems)
	{
		pFnOpenStoreForItems = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems");

	}

	UOnlineSubsystemSteamworks_execOpenStoreForItems_Parms OpenStoreForItems_Parms;
	OpenStoreForItems_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OpenStoreForItems_Parms.Targets, 0x10, &Targets, 0x10);

	pFnOpenStoreForItems->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOpenStoreForItems, &OpenStoreForItems_Parms, nullptr);

	pFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenStoreForDLC(unsigned char LocalUserNum, struct FName DLC)
{
	static UFunction* pFnOpenStoreForDLC = nullptr;

	if (!pFnOpenStoreForDLC)
	{
		pFnOpenStoreForDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC");

	}

	UOnlineSubsystemSteamworks_execOpenStoreForDLC_Parms OpenStoreForDLC_Parms;
	OpenStoreForDLC_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OpenStoreForDLC_Parms.DLC, 0x8, &DLC, 0x8);

	pFnOpenStoreForDLC->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOpenStoreForDLC, &OpenStoreForDLC_Parms, nullptr);

	pFnOpenStoreForDLC->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate)
{
	static UFunction* pFnOpenStoreForItemsAsync = nullptr;

	if (!pFnOpenStoreForItemsAsync)
	{
		pFnOpenStoreForItemsAsync = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync");

	}

	UOnlineSubsystemSteamworks_execOpenStoreForItemsAsync_Parms OpenStoreForItemsAsync_Parms;
	OpenStoreForItemsAsync_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OpenStoreForItemsAsync_Parms.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenStoreForItemsAsync_Parms.OnStorePurchaseCompleteDelegate, 0x18, &OnStorePurchaseCompleteDelegate, 0x18);

	this->ProcessEvent(pFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnStorePurchaseCompleteDelegate()
{
	static UFunction* pFnOnStorePurchaseCompleteDelegate = nullptr;

	if (!pFnOnStorePurchaseCompleteDelegate)
	{
		pFnOnStorePurchaseCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execOnStorePurchaseCompleteDelegate_Parms OnStorePurchaseCompleteDelegate_Parms;

	this->ProcessEvent(pFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenErrorDialog(unsigned char LocalUserNum, unsigned char ErrorCode)
{
	static UFunction* pFnOpenErrorDialog = nullptr;

	if (!pFnOpenErrorDialog)
	{
		pFnOpenErrorDialog = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog");

	}

	UOnlineSubsystemSteamworks_execOpenErrorDialog_Parms OpenErrorDialog_Parms;
	OpenErrorDialog_Parms.LocalUserNum = LocalUserNum;
	OpenErrorDialog_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent(pFnOpenErrorDialog, &OpenErrorDialog_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  DisplayMode                    (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            ServiceLabel                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::OpenPS4DisplayMode(unsigned char LocalUserNum, unsigned char DisplayMode, TArray<struct FString> Targets, int ServiceLabel)
{
	static UFunction* pFnOpenPS4DisplayMode = nullptr;

	if (!pFnOpenPS4DisplayMode)
	{
		pFnOpenPS4DisplayMode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode");

	}

	UOnlineSubsystemSteamworks_execOpenPS4DisplayMode_Parms OpenPS4DisplayMode_Parms;
	OpenPS4DisplayMode_Parms.LocalUserNum = LocalUserNum;
	OpenPS4DisplayMode_Parms.DisplayMode = DisplayMode;
	memcpy_s(&OpenPS4DisplayMode_Parms.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenPS4DisplayMode_Parms.ServiceLabel, 0x4, &ServiceLabel, 0x4);

	this->ProcessEvent(pFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ResetControllerColor(int ControllerId)
{
	static UFunction* pFnResetControllerColor = nullptr;

	if (!pFnResetControllerColor)
	{
		pFnResetControllerColor = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor");

	}

	UOnlineSubsystemSteamworks_execResetControllerColor_Parms ResetControllerColor_Parms;
	memcpy_s(&ResetControllerColor_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnResetControllerColor, &ResetControllerColor_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerColor(int ControllerId, struct FColor NewColor)
{
	static UFunction* pFnSetControllerColor = nullptr;

	if (!pFnSetControllerColor)
	{
		pFnSetControllerColor = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor");

	}

	UOnlineSubsystemSteamworks_execSetControllerColor_Parms SetControllerColor_Parms;
	memcpy_s(&SetControllerColor_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerColor_Parms.NewColor, 0x4, &NewColor, 0x4);

	this->ProcessEvent(pFnSetControllerColor, &SetControllerColor_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 InPostID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         StringReplaceList              (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddInGamePost(struct FString InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList)
{
	static UFunction* pFnAddInGamePost = nullptr;

	if (!pFnAddInGamePost)
	{
		pFnAddInGamePost = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost");

	}

	UOnlineSubsystemSteamworks_execAddInGamePost_Parms AddInGamePost_Parms;
	memcpy_s(&AddInGamePost_Parms.InPostID, 0x10, &InPostID, 0x10);
	AddInGamePost_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddInGamePost_Parms.StringReplaceList, 0x10, &StringReplaceList, 0x10);

	this->ProcessEvent(pFnAddInGamePost, &AddInGamePost_Parms, nullptr);

	return AddInGamePost_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsEnabled()
{
	static UFunction* pFnIsEnabled = nullptr;

	if (!pFnIsEnabled)
	{
		pFnIsEnabled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled");

	}

	UOnlineSubsystemSteamworks_execIsEnabled_Parms IsEnabled_Parms;

	unsigned short NativeIndex = pFnIsEnabled->iNative;
	pFnIsEnabled->iNative = 0;

	pFnIsEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsEnabled, &IsEnabled_Parms, nullptr);

	pFnIsEnabled->FunctionFlags |= 0x400;

	pFnIsEnabled->iNative = NativeIndex;

	return IsEnabled_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 PresenceString                 (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GameDataString                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetRichPresence(unsigned char LocalUserNum, struct FString PresenceString, struct FString GameDataString)
{
	static UFunction* pFnSetRichPresence = nullptr;

	if (!pFnSetRichPresence)
	{
		pFnSetRichPresence = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence");

	}

	UOnlineSubsystemSteamworks_execSetRichPresence_Parms SetRichPresence_Parms;
	SetRichPresence_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetRichPresence_Parms.PresenceString, 0x10, &PresenceString, 0x10);
	memcpy_s(&SetRichPresence_Parms.GameDataString, 0x10, &GameDataString, 0x10);

	pFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRichPresence, &SetRichPresence_Parms, nullptr);

	pFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static UFunction* pFnClearAllDelegates = nullptr;

	if (!pFnClearAllDelegates)
	{
		pFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates");

	}

	UOnlineSubsystemSteamworks_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent(pFnClearAllDelegates, &ClearAllDelegates_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate)
{
	static UFunction* pFnClearWriteSharedFileCompleteDelegate = nullptr;

	if (!pFnClearWriteSharedFileCompleteDelegate)
	{
		pFnClearWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Parms ClearWriteSharedFileCompleteDelegate_Parms;
	memcpy_s(&ClearWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, 0x18, &WriteSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate)
{
	static UFunction* pFnAddWriteSharedFileCompleteDelegate = nullptr;

	if (!pFnAddWriteSharedFileCompleteDelegate)
	{
		pFnAddWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Parms AddWriteSharedFileCompleteDelegate_Parms;
	memcpy_s(&AddWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, 0x18, &WriteSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Contents                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteSharedFile(struct FString UserId, struct FString Filename, TArray<unsigned char>& Contents)
{
	static UFunction* pFnWriteSharedFile = nullptr;

	if (!pFnWriteSharedFile)
	{
		pFnWriteSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile");

	}

	UOnlineSubsystemSteamworks_execWriteSharedFile_Parms WriteSharedFile_Parms;
	memcpy_s(&WriteSharedFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteSharedFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnWriteSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteSharedFile, &WriteSharedFile_Parms, nullptr);

	pFnWriteSharedFile->FunctionFlags |= 0x400;
	memcpy_s(&WriteSharedFile_Parms.Contents, 0x10, &Contents, 0x10);

	return WriteSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle)
{
	static UFunction* pFnOnWriteSharedFileComplete = nullptr;

	if (!pFnOnWriteSharedFileComplete)
	{
		pFnOnWriteSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete");

	}

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Parms OnWriteSharedFileComplete_Parms;
	OnWriteSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteSharedFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteSharedFileComplete_Parms.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&OnWriteSharedFileComplete_Parms.SharedHandle, 0x10, &SharedHandle, 0x10);

	this->ProcessEvent(pFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate)
{
	static UFunction* pFnClearReadSharedFileCompleteDelegate = nullptr;

	if (!pFnClearReadSharedFileCompleteDelegate)
	{
		pFnClearReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Parms ClearReadSharedFileCompleteDelegate_Parms;
	memcpy_s(&ClearReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, 0x18, &ReadSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate)
{
	static UFunction* pFnAddReadSharedFileCompleteDelegate = nullptr;

	if (!pFnAddReadSharedFileCompleteDelegate)
	{
		pFnAddReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Parms AddReadSharedFileCompleteDelegate_Parms;
	memcpy_s(&AddReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, 0x18, &ReadSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadSharedFile(struct FString SharedHandle)
{
	static UFunction* pFnReadSharedFile = nullptr;

	if (!pFnReadSharedFile)
	{
		pFnReadSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile");

	}

	UOnlineSubsystemSteamworks_execReadSharedFile_Parms ReadSharedFile_Parms;
	memcpy_s(&ReadSharedFile_Parms.SharedHandle, 0x10, &SharedHandle, 0x10);

	pFnReadSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadSharedFile, &ReadSharedFile_Parms, nullptr);

	pFnReadSharedFile->FunctionFlags |= 0x400;

	return ReadSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete(unsigned long bWasSuccessful, struct FString SharedHandle)
{
	static UFunction* pFnOnReadSharedFileComplete = nullptr;

	if (!pFnOnReadSharedFileComplete)
	{
		pFnOnReadSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Parms OnReadSharedFileComplete_Parms;
	OnReadSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSharedFileComplete_Parms.SharedHandle, 0x10, &SharedHandle, 0x10);

	this->ProcessEvent(pFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearSharedFile(struct FString SharedHandle)
{
	static UFunction* pFnClearSharedFile = nullptr;

	if (!pFnClearSharedFile)
	{
		pFnClearSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile");

	}

	UOnlineSubsystemSteamworks_execClearSharedFile_Parms ClearSharedFile_Parms;
	memcpy_s(&ClearSharedFile_Parms.SharedHandle, 0x10, &SharedHandle, 0x10);

	pFnClearSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearSharedFile, &ClearSharedFile_Parms, nullptr);

	pFnClearSharedFile->FunctionFlags |= 0x400;

	return ClearSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static UFunction* pFnClearSharedFiles = nullptr;

	if (!pFnClearSharedFiles)
	{
		pFnClearSharedFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles");

	}

	UOnlineSubsystemSteamworks_execClearSharedFiles_Parms ClearSharedFiles_Parms;

	pFnClearSharedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearSharedFiles, &ClearSharedFiles_Parms, nullptr);

	pFnClearSharedFiles->FunctionFlags |= 0x400;

	return ClearSharedFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSharedFileContents(struct FString SharedHandle, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetSharedFileContents = nullptr;

	if (!pFnGetSharedFileContents)
	{
		pFnGetSharedFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents");

	}

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Parms GetSharedFileContents_Parms;
	memcpy_s(&GetSharedFileContents_Parms.SharedHandle, 0x10, &SharedHandle, 0x10);

	pFnGetSharedFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSharedFileContents, &GetSharedFileContents_Parms, nullptr);

	pFnGetSharedFileContents->FunctionFlags |= 0x400;
	memcpy_s(&GetSharedFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetSharedFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!pFnClearDeleteUserFileCompleteDelegate)
	{
		pFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!pFnAddDeleteUserFileCompleteDelegate)
	{
		pFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldCloudDelete             (CPF_Parm)
// unsigned long                  bShouldLocallyDelete           (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete)
{
	static UFunction* pFnDeleteUserFile = nullptr;

	if (!pFnDeleteUserFile)
	{
		pFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile");

	}

	UOnlineSubsystemSteamworks_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy_s(&DeleteUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&DeleteUserFile_Parms.Filename, 0x10, &Filename, 0x10);
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	pFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteUserFile, &DeleteUserFile_Parms, nullptr);

	pFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnDeleteUserFileComplete = nullptr;

	if (!pFnOnDeleteUserFileComplete)
	{
		pFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete");

	}

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnDeleteUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!pFnClearWriteUserFileCompleteDelegate)
	{
		pFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!pFnAddWriteUserFileCompleteDelegate)
	{
		pFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy_s(&AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFile(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnWriteUserFile = nullptr;

	if (!pFnWriteUserFile)
	{
		pFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile");

	}

	UOnlineSubsystemSteamworks_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy_s(&WriteUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteUserFile, &WriteUserFile_Parms, nullptr);

	pFnWriteUserFile->FunctionFlags |= 0x400;
	memcpy_s(&WriteUserFile_Parms.FileContents, 0x10, &FileContents, 0x10);

	return WriteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnWriteUserFileComplete = nullptr;

	if (!pFnOnWriteUserFileComplete)
	{
		pFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete");

	}

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = nullptr;

	if (!pFnClearReadUserFileCompleteDelegate)
	{
		pFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = nullptr;

	if (!pFnAddReadUserFileCompleteDelegate)
	{
		pFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy_s(&AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadUserFile(struct FString UserId, struct FString Filename)
{
	static UFunction* pFnReadUserFile = nullptr;

	if (!pFnReadUserFile)
	{
		pFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile");

	}

	UOnlineSubsystemSteamworks_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy_s(&ReadUserFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ReadUserFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadUserFile, &ReadUserFile_Parms, nullptr);

	pFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* pFnOnReadUserFileComplete = nullptr;

	if (!pFnOnReadUserFileComplete)
	{
		pFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnReadUserFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* pFnGetUserFileList = nullptr;

	if (!pFnGetUserFileList)
	{
		pFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList");

	}

	UOnlineSubsystemSteamworks_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy_s(&GetUserFileList_Parms.UserId, 0x10, &UserId, 0x10);

	pFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUserFileList, &GetUserFileList_Parms, nullptr);

	pFnGetUserFileList->FunctionFlags |= 0x400;
	memcpy_s(&GetUserFileList_Parms.UserFiles, 0x10, &UserFiles, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!pFnClearEnumerateUserFileCompleteDelegate)
	{
		pFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!pFnAddEnumerateUserFileCompleteDelegate)
	{
		pFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateUserFiles(struct FString UserId)
{
	static UFunction* pFnEnumerateUserFiles = nullptr;

	if (!pFnEnumerateUserFiles)
	{
		pFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles");

	}

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy_s(&EnumerateUserFiles_Parms.UserId, 0x10, &UserId, 0x10);

	pFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, nullptr);

	pFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId)
{
	static UFunction* pFnOnEnumerateUserFilesComplete = nullptr;

	if (!pFnOnEnumerateUserFilesComplete)
	{
		pFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete");

	}

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Parms.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFile(struct FString UserId, struct FString Filename)
{
	static UFunction* pFnClearFile = nullptr;

	if (!pFnClearFile)
	{
		pFnClearFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile");

	}

	UOnlineSubsystemSteamworks_execClearFile_Parms ClearFile_Parms;
	memcpy_s(&ClearFile_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ClearFile_Parms.Filename, 0x10, &Filename, 0x10);

	pFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearFile, &ClearFile_Parms, nullptr);

	pFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFiles(struct FString UserId)
{
	static UFunction* pFnClearFiles = nullptr;

	if (!pFnClearFiles)
	{
		pFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles");

	}

	UOnlineSubsystemSteamworks_execClearFiles_Parms ClearFiles_Parms;
	memcpy_s(&ClearFiles_Parms.UserId, 0x10, &UserId, 0x10);

	pFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearFiles, &ClearFiles_Parms, nullptr);

	pFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFileContents(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetFileContents = nullptr;

	if (!pFnGetFileContents)
	{
		pFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents");

	}

	UOnlineSubsystemSteamworks_execGetFileContents_Parms GetFileContents_Parms;
	memcpy_s(&GetFileContents_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFileContents, &GetFileContents_Parms, nullptr);

	pFnGetFileContents->FunctionFlags |= 0x400;
	memcpy_s(&GetFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFileInternal(struct FString UserId, struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnWriteUserFileInternal = nullptr;

	if (!pFnWriteUserFileInternal)
	{
		pFnWriteUserFileInternal = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal");

	}

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Parms WriteUserFileInternal_Parms;
	memcpy_s(&WriteUserFileInternal_Parms.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFileInternal_Parms.Filename, 0x10, &Filename, 0x10);

	pFnWriteUserFileInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteUserFileInternal, &WriteUserFileInternal_Parms, nullptr);

	pFnWriteUserFileInternal->FunctionFlags |= 0x400;
	memcpy_s(&WriteUserFileInternal_Parms.FileContents, 0x10, &FileContents, 0x10);

	return WriteUserFileInternal_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* pFnSetVoiceReceiveVolume = nullptr;

	if (!pFnSetVoiceReceiveVolume)
	{
		pFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume");

	}

	UOnlineSubsystemSteamworks_execSetVoiceReceiveVolume_Parms SetVoiceReceiveVolume_Parms;
	memcpy_s(&SetVoiceReceiveVolume_Parms.VoiceVolume, 0x4, &VoiceVolume, 0x4);

	pFnSetVoiceReceiveVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Parms, nullptr);

	pFnSetVoiceReceiveVolume->FunctionFlags |= 0x400;

	return SetVoiceReceiveVolume_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            FriendUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(struct FUniqueNetId FriendUID, struct FString& ServerURL, struct FString& ServerUID)
{
	static UFunction* pFnGetFriendJoinURL = nullptr;

	if (!pFnGetFriendJoinURL)
	{
		pFnGetFriendJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL");

	}

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms GetFriendJoinURL_Parms;
	memcpy_s(&GetFriendJoinURL_Parms.FriendUID, 0x48, &FriendUID, 0x48);

	pFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendJoinURL, &GetFriendJoinURL_Parms, nullptr);

	pFnGetFriendJoinURL->FunctionFlags |= 0x400;
	memcpy_s(&GetFriendJoinURL_Parms.ServerURL, 0x10, &ServerURL, 0x10);
	memcpy_s(&GetFriendJoinURL_Parms.ServerUID, 0x10, &ServerUID, 0x10);

	return GetFriendJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bMarkAsJoined                  (CPF_Parm)
// struct FString                 ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(unsigned long bMarkAsJoined, struct FString& ServerURL, struct FString& ServerUID)
{
	static UFunction* pFnGetCommandlineJoinURL = nullptr;

	if (!pFnGetCommandlineJoinURL)
	{
		pFnGetCommandlineJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL");

	}

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms GetCommandlineJoinURL_Parms;
	GetCommandlineJoinURL_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Parms, nullptr);

	pFnGetCommandlineJoinURL->FunctionFlags |= 0x400;
	memcpy_s(&GetCommandlineJoinURL_Parms.ServerURL, 0x10, &ServerURL, 0x10);
	memcpy_s(&GetCommandlineJoinURL_Parms.ServerUID, 0x10, &ServerUID, 0x10);

	return GetCommandlineJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UIDString                      (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(struct FString UIDString, struct FUniqueNetId& OutUID)
{
	static UFunction* pFnInt64ToUniqueNetId = nullptr;

	if (!pFnInt64ToUniqueNetId)
	{
		pFnInt64ToUniqueNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");

	}

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms Int64ToUniqueNetId_Parms;
	memcpy_s(&Int64ToUniqueNetId_Parms.UIDString, 0x10, &UIDString, 0x10);

	pFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Parms, nullptr);

	pFnInt64ToUniqueNetId->FunctionFlags |= 0x400;
	memcpy_s(&Int64ToUniqueNetId_Parms.OutUID, 0x48, &OutUID, 0x48);

	return Int64ToUniqueNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId& Uid)
{
	static UFunction* pFnUniqueNetIdToInt64 = nullptr;

	if (!pFnUniqueNetIdToInt64)
	{
		pFnUniqueNetIdToInt64 = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");

	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms UniqueNetIdToInt64_Parms;

	pFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Parms, nullptr);

	pFnUniqueNetIdToInt64->FunctionFlags |= 0x400;
	memcpy_s(&UniqueNetIdToInt64_Parms.Uid, 0x48, &Uid, 0x48);

	return UniqueNetIdToInt64_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         VOIPAudioComponent             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static UFunction* pFnNotifyVOIPPlaybackFinished = nullptr;

	if (!pFnNotifyVOIPPlaybackFinished)
	{
		pFnNotifyVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished");

	}

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms NotifyVOIPPlaybackFinished_Parms;
	memcpy_s(&NotifyVOIPPlaybackFinished_Parms.VOIPAudioComponent, 0x8, &VOIPAudioComponent, 0x8);

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Parms, nullptr);

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         AC                             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static UFunction* pFnOnVOIPPlaybackFinished = nullptr;

	if (!pFnOnVOIPPlaybackFinished)
	{
		pFnOnVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished");

	}

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms OnVOIPPlaybackFinished_Parms;
	memcpy_s(&OnVOIPPlaybackFinished_Parms.AC, 0x8, &AC, 0x8);

	this->ProcessEvent(pFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 SubURL                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowProfileUI(unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID)
{
	static UFunction* pFnShowProfileUI = nullptr;

	if (!pFnShowProfileUI)
	{
		pFnShowProfileUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");

	}

	UOnlineSubsystemSteamworks_execShowProfileUI_Parms ShowProfileUI_Parms;
	ShowProfileUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowProfileUI_Parms.SubURL, 0x10, &SubURL, 0x10);
	memcpy_s(&ShowProfileUI_Parms.PlayerUID, 0x48, &PlayerUID, 0x48);

	pFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowProfileUI, &ShowProfileUI_Parms, nullptr);

	pFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId& Uid)
{
	static UFunction* pFnUniqueNetIdToPlayerName = nullptr;

	if (!pFnUniqueNetIdToPlayerName)
	{
		pFnUniqueNetIdToPlayerName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");

	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms UniqueNetIdToPlayerName_Parms;

	pFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Parms, nullptr);

	pFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;
	memcpy_s(&UniqueNetIdToPlayerName_Parms.Uid, 0x48, &Uid, 0x48);

	return UniqueNetIdToPlayerName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            AchievementId                  (CPF_Parm)
// int                            ProgressCount                  (CPF_Parm)
// int                            MaxProgress                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress)
{
	static UFunction* pFnDisplayAchievementProgress = nullptr;

	if (!pFnDisplayAchievementProgress)
	{
		pFnDisplayAchievementProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");

	}

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms DisplayAchievementProgress_Parms;
	memcpy_s(&DisplayAchievementProgress_Parms.AchievementId, 0x4, &AchievementId, 0x4);
	memcpy_s(&DisplayAchievementProgress_Parms.ProgressCount, 0x4, &ProgressCount, 0x4);
	memcpy_s(&DisplayAchievementProgress_Parms.MaxProgress, 0x4, &MaxProgress, 0x4);

	pFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDisplayAchievementProgress, &DisplayAchievementProgress_Parms, nullptr);

	pFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 LeaderboardName                (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  SortType                       (CPF_Parm)
// unsigned char                  DisplayFormat                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat)
{
	static UFunction* pFnCreateLeaderboard = nullptr;

	if (!pFnCreateLeaderboard)
	{
		pFnCreateLeaderboard = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");

	}

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;
	memcpy_s(&CreateLeaderboard_Parms.LeaderboardName, 0x10, &LeaderboardName, 0x10);
	CreateLeaderboard_Parms.SortType = SortType;
	CreateLeaderboard_Parms.DisplayFormat = DisplayFormat;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateLeaderboard, &CreateLeaderboard_Parms, nullptr);

	pFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bResetAchievements             (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetStats(unsigned long bResetAchievements)
{
	static UFunction* pFnResetStats = nullptr;

	if (!pFnResetStats)
	{
		pFnResetStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");

	}

	UOnlineSubsystemSteamworks_execResetStats_Parms ResetStats_Parms;
	ResetStats_Parms.bResetAchievements = bResetAchievements;

	unsigned short NativeIndex = pFnResetStats->iNative;
	pFnResetStats->iNative = 0;

	pFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnResetStats, &ResetStats_Parms, nullptr);

	pFnResetStats->FunctionFlags |= 0x400;

	pFnResetStats->iNative = NativeIndex;

	return ResetStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* pFnShowCustomMessageUI = nullptr;

	if (!pFnShowCustomMessageUI)
	{
		pFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");

	}

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowCustomMessageUI_Parms.MessageTitle, 0x10, &MessageTitle, 0x10);
	memcpy_s(&ShowCustomMessageUI_Parms.NonEditableMessage, 0x10, &NonEditableMessage, 0x10);
	memcpy_s(&ShowCustomMessageUI_Parms.EditableMessage, 0x10, &EditableMessage, 0x10);

	this->ProcessEvent(pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, nullptr);
	memcpy_s(&ShowCustomMessageUI_Parms.Recipients, 0x10, &Recipients, 0x10);

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static UFunction* pFnClearCrossTitleProfileSettings = nullptr;

	if (!pFnClearCrossTitleProfileSettings)
	{
		pFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");

	}

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearCrossTitleProfileSettings_Parms.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static UFunction* pFnGetCrossTitleProfileSettings = nullptr;

	if (!pFnGetCrossTitleProfileSettings)
	{
		pFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");

	}

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetCrossTitleProfileSettings_Parms.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, nullptr);

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!pFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!pFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!pFnOnReadCrossTitleProfileSettingsComplete)
	{
		pFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Parms.TitleId, 0x4, &TitleId, 0x4);
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnReadCrossTitleProfileSettings = nullptr;

	if (!pFnReadCrossTitleProfileSettings)
	{
		pFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");

	}

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadCrossTitleProfileSettings_Parms.TitleId, 0x4, &TitleId, 0x4);
	memcpy_s(&ReadCrossTitleProfileSettings_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	this->ProcessEvent(pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, nullptr);

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(TArray<struct FSteamPlayerClanData>& Results)
{
	static UFunction* pFnGetSteamClanData = nullptr;

	if (!pFnGetSteamClanData)
	{
		pFnGetSteamClanData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");

	}

	UOnlineSubsystemSteamworks_execGetSteamClanData_Parms GetSteamClanData_Parms;

	pFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSteamClanData, &GetSteamClanData_Parms, nullptr);

	pFnGetSteamClanData->FunctionFlags |= 0x400;
	memcpy_s(&GetSteamClanData_Parms.Results, 0x10, &Results, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!pFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy_s(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, 0x18, &GetNumberOfCurrentPlayersCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!pFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy_s(&AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, 0x18, &GetNumberOfCurrentPlayersCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            TotalPlayers                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = nullptr;

	if (!pFnOnGetNumberOfCurrentPlayersComplete)
	{
		pFnOnGetNumberOfCurrentPlayersComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");

	}

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	memcpy_s(&OnGetNumberOfCurrentPlayersComplete_Parms.TotalPlayers, 0x4, &TotalPlayers, 0x4);

	this->ProcessEvent(pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static UFunction* pFnGetNumberOfCurrentPlayers = nullptr;

	if (!pFnGetNumberOfCurrentPlayers)
	{
		pFnGetNumberOfCurrentPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");

	}

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, nullptr);

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars
// [0x00430400] (FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// unsigned char                  Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    PlayerNetIds                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatars(unsigned char Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& PlayerNetIds)
{
	static UFunction* pFnReadOnlineAvatars = nullptr;

	if (!pFnReadOnlineAvatars)
	{
		pFnReadOnlineAvatars = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars");

	}

	UOnlineSubsystemSteamworks_execReadOnlineAvatars_Parms ReadOnlineAvatars_Parms;
	ReadOnlineAvatars_Parms.Size = Size;
	memcpy_s(&ReadOnlineAvatars_Parms.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);

	unsigned short NativeIndex = pFnReadOnlineAvatars->iNative;
	pFnReadOnlineAvatars->iNative = 0;

	pFnReadOnlineAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineAvatars, &ReadOnlineAvatars_Parms, nullptr);

	pFnReadOnlineAvatars->FunctionFlags |= 0x400;

	pFnReadOnlineAvatars->iNative = NativeIndex;
	memcpy_s(&ReadOnlineAvatars_Parms.PlayerNetIds, 0x10, &PlayerNetIds, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 Title                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Description                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnShowCustomPlayersUI = nullptr;

	if (!pFnShowCustomPlayersUI)
	{
		pFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");

	}

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowCustomPlayersUI_Parms.Title, 0x10, &Title, 0x10);
	memcpy_s(&ShowCustomPlayersUI_Parms.Description, 0x10, &Description, 0x10);

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, nullptr);

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;
	memcpy_s(&ShowCustomPlayersUI_Parms.Players, 0x10, &Players, 0x10);

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00434401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_OptionalParm | CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

unsigned char UOnlineSubsystemSteamworks::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* pFnGetAchievements = nullptr;

	if (!pFnGetAchievements)
	{
		pFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");

	}

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetAchievements_Parms.TitleId, 0x4, &TitleId, 0x4);

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAchievements, &GetAchievements_Parms, nullptr);

	pFnGetAchievements->FunctionFlags |= 0x400;
	memcpy_s(&GetAchievements_Parms.Achievements, 0x10, &Achievements, 0x10);

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!pFnClearReadAchievementsCompleteDelegate)
	{
		pFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, 0x18, &ReadAchievementsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!pFnAddReadAchievementsCompleteDelegate)
	{
		pFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, 0x18, &ReadAchievementsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int TitleId)
{
	static UFunction* pFnOnReadAchievementsComplete = nullptr;

	if (!pFnOnReadAchievementsComplete)
	{
		pFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	memcpy_s(&OnReadAchievementsComplete_Parms.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00034401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages)
{
	static UFunction* pFnReadAchievements = nullptr;

	if (!pFnReadAchievements)
	{
		pFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");

	}

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadAchievements_Parms.TitleId, 0x4, &TitleId, 0x4);
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadAchievements, &ReadAchievements_Parms, nullptr);

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowPlayersUI = nullptr;

	if (!pFnShowPlayersUI)
	{
		pFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");

	}

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowPlayersUI, &ShowPlayersUI_Parms, nullptr);

	pFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowFriendsInviteUI = nullptr;

	if (!pFnShowFriendsInviteUI)
	{
		pFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");

	}

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowFriendsInviteUI_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, nullptr);

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowFriendsUI = nullptr;

	if (!pFnShowFriendsUI)
	{
		pFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");

	}

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowFriendsUI, &ShowFriendsUI_Parms, nullptr);

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* pFnClearProfileDataChangedDelegate = nullptr;

	if (!pFnClearProfileDataChangedDelegate)
	{
		pFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* pFnAddProfileDataChangedDelegate = nullptr;

	if (!pFnAddProfileDataChangedDelegate)
	{
		pFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* pFnOnProfileDataChanged = nullptr;

	if (!pFnOnProfileDataChanged)
	{
		pFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");

	}

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent(pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            PictureId                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static UFunction* pFnUnlockGamerPicture = nullptr;

	if (!pFnUnlockGamerPicture)
	{
		pFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");

	}

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UnlockGamerPicture_Parms.PictureId, 0x4, &PictureId, 0x4);

	this->ProcessEvent(pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, nullptr);

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!pFnClearUnlockAchievementCompleteDelegate)
	{
		pFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, 0x18, &UnlockAchievementCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!pFnAddUnlockAchievementCompleteDelegate)
	{
		pFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, 0x18, &UnlockAchievementCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnlockAchievementComplete = nullptr;

	if (!pFnOnUnlockAchievementComplete)
	{
		pFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");

	}

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static UFunction* pFnUnlockAchievement = nullptr;

	if (!pFnUnlockAchievement)
	{
		pFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");

	}

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UnlockAchievement_Parms.AchievementId, 0x4, &AchievementId, 0x4);
	memcpy_s(&UnlockAchievement_Parms.PercentComplete, 0x4, &PercentComplete, 0x4);

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnlockAchievement, &UnlockAchievement_Parms, nullptr);

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int                            Points                         (CPF_Parm)

bool UOnlineSubsystemSteamworks::UpdateStat(unsigned char LocalUserNum, struct FName StatName, int Points)
{
	static UFunction* pFnUpdateStat = nullptr;

	if (!pFnUpdateStat)
	{
		pFnUpdateStat = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat");

	}

	UOnlineSubsystemSteamworks_execUpdateStat_Parms UpdateStat_Parms;
	UpdateStat_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UpdateStat_Parms.StatName, 0x8, &StatName, 0x8);
	memcpy_s(&UpdateStat_Parms.Points, 0x4, &Points, 0x4);

	this->ProcessEvent(pFnUpdateStat, &UpdateStat_Parms, nullptr);

	return UpdateStat_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            DeviceID                       (CPF_Parm)
// int                            SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int DeviceID, int SizeNeeded)
{
	static UFunction* pFnIsDeviceValid = nullptr;

	if (!pFnIsDeviceValid)
	{
		pFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");

	}

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;
	memcpy_s(&IsDeviceValid_Parms.DeviceID, 0x4, &DeviceID, 0x4);
	memcpy_s(&IsDeviceValid_Parms.SizeNeeded, 0x4, &SizeNeeded, 0x4);

	this->ProcessEvent(pFnIsDeviceValid, &IsDeviceValid_Parms, nullptr);

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString& DeviceName)
{
	static UFunction* pFnGetDeviceSelectionResults = nullptr;

	if (!pFnGetDeviceSelectionResults)
	{
		pFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");

	}

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, nullptr);
	memcpy_s(&GetDeviceSelectionResults_Parms.DeviceName, 0x10, &DeviceName, 0x10);

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!pFnClearDeviceSelectionDoneDelegate)
	{
		pFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");

	}

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!pFnAddDeviceSelectionDoneDelegate)
	{
		pFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");

	}

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeviceSelectionComplete = nullptr;

	if (!pFnOnDeviceSelectionComplete)
	{
		pFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");

	}

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            SizeNeeded                     (CPF_Parm)
// unsigned long                  bManageStorage                 (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage)
{
	static UFunction* pFnShowDeviceSelectionUI = nullptr;

	if (!pFnShowDeviceSelectionUI)
	{
		pFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");

	}

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowDeviceSelectionUI_Parms.SizeNeeded, 0x4, &SizeNeeded, 0x4);
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	this->ProcessEvent(pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, nullptr);

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            CategoryMask                   (CPF_OptionalParm | CPF_Parm)
// int                            OfferId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId)
{
	static UFunction* pFnShowContentMarketplaceUI = nullptr;

	if (!pFnShowContentMarketplaceUI)
	{
		pFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");

	}

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowContentMarketplaceUI_Parms.CategoryMask, 0x4, &CategoryMask, 0x4);
	memcpy_s(&ShowContentMarketplaceUI_Parms.OfferId, 0x4, &OfferId, 0x4);

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, nullptr);

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowInviteUI(unsigned char LocalUserNum, struct FString InviteText)
{
	static UFunction* pFnShowInviteUI = nullptr;

	if (!pFnShowInviteUI)
	{
		pFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");

	}

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowInviteUI_Parms.InviteText, 0x10, &InviteText, 0x10);

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowInviteUI, &ShowInviteUI_Parms, nullptr);

	pFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowAchievementsUI = nullptr;

	if (!pFnShowAchievementsUI)
	{
		pFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");

	}

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowAchievementsUI, &ShowAchievementsUI_Parms, nullptr);

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowMessagesUI = nullptr;

	if (!pFnShowMessagesUI)
	{
		pFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");

	}

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowMessagesUI, &ShowMessagesUI_Parms, nullptr);

	pFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            UniqueId                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FString                 PlayerName                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(unsigned char LocalUserNum, struct FUniqueNetId UniqueId, struct FString PlayerName)
{
	static UFunction* pFnShowGamerCardUI = nullptr;

	if (!pFnShowGamerCardUI)
	{
		pFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");

	}

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowGamerCardUI_Parms.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&ShowGamerCardUI_Parms.PlayerName, 0x10, &PlayerName, 0x10);

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowGamerCardUI, &ShowGamerCardUI_Parms, nullptr);

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowFeedbackUI = nullptr;

	if (!pFnShowFeedbackUI)
	{
		pFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");

	}

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowFeedbackUI_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowFeedbackUI, &ShowFeedbackUI_Parms, nullptr);

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            MessageIndex                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static UFunction* pFnDeleteMessage = nullptr;

	if (!pFnDeleteMessage)
	{
		pFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");

	}

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&DeleteMessage_Parms.MessageIndex, 0x4, &MessageIndex, 0x4);

	this->ProcessEvent(pFnDeleteMessage, &DeleteMessage_Parms, nullptr);

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteAll(unsigned char LocalUserNum)
{
	static UFunction* pFnUnmuteAll = nullptr;

	if (!pFnUnmuteAll)
	{
		pFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");

	}

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnUnmuteAll, &UnmuteAll_Parms, nullptr);

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends)
{
	static UFunction* pFnMuteAll = nullptr;

	if (!pFnMuteAll)
	{
		pFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");

	}

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent(pFnMuteAll, &MuteAll_Parms, nullptr);

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid)
{
	static UFunction* pFnRegisterStatGuid = nullptr;

	if (!pFnRegisterStatGuid)
	{
		pFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");

	}

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy_s(&RegisterStatGuid_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnRegisterStatGuid, &RegisterStatGuid_Parms, nullptr);
	memcpy_s(&RegisterStatGuid_Parms.ClientStatGuid, 0x10, &ClientStatGuid, 0x10);

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static UFunction* pFnGetClientStatGuid = nullptr;

	if (!pFnGetClientStatGuid)
	{
		pFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");

	}

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent(pFnGetClientStatGuid, &GetClientStatGuid_Parms, nullptr);

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!pFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	}

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!pFnAddRegisterHostStatGuidCompleteDelegate)
	{
		pFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = nullptr;

	if (!pFnOnRegisterHostStatGuidComplete)
	{
		pFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");

	}

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString& HostStatGuid)
{
	static UFunction* pFnRegisterHostStatGuid = nullptr;

	if (!pFnRegisterHostStatGuid)
	{
		pFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");

	}

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent(pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, nullptr);
	memcpy_s(&RegisterHostStatGuid_Parms.HostStatGuid, 0x10, &HostStatGuid, 0x10);

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static UFunction* pFnGetHostStatGuid = nullptr;

	if (!pFnGetHostStatGuid)
	{
		pFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");

	}

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent(pFnGetHostStatGuid, &GetHostStatGuid_Parms, nullptr);

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = nullptr;

	if (!pFnClearFriendMessageReceivedDelegate)
	{
		pFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = nullptr;

	if (!pFnAddFriendMessageReceivedDelegate)
	{
		pFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendMessageReceivedDelegate_Parms.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message)
{
	static UFunction* pFnOnFriendMessageReceived = nullptr;

	if (!pFnOnFriendMessageReceived)
	{
		pFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");

	}

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnFriendMessageReceived_Parms.SendingPlayer, 0x48, &SendingPlayer, 0x48);
	memcpy_s(&OnFriendMessageReceived_Parms.SendingNick, 0x10, &SendingNick, 0x10);
	memcpy_s(&OnFriendMessageReceived_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* pFnGetFriendMessages = nullptr;

	if (!pFnGetFriendMessages)
	{
		pFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");

	}

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetFriendMessages, &GetFriendMessages_Parms, nullptr);
	memcpy_s(&GetFriendMessages_Parms.FriendMessages, 0x10, &FriendMessages, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!pFnClearJoinFriendGameCompleteDelegate)
	{
		pFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!pFnAddJoinFriendGameCompleteDelegate)
	{
		pFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinFriendGameComplete = nullptr;

	if (!pFnOnJoinFriendGameComplete)
	{
		pFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");

	}

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::JoinFriendGame(unsigned char LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* pFnJoinFriendGame = nullptr;

	if (!pFnJoinFriendGame)
	{
		pFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");

	}

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&JoinFriendGame_Parms.Friend, 0x48, &Friend, 0x48);

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnJoinFriendGame, &JoinFriendGame_Parms, nullptr);

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* pFnClearReceivedGameInviteDelegate = nullptr;

	if (!pFnClearReceivedGameInviteDelegate)
	{
		pFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* pFnAddReceivedGameInviteDelegate = nullptr;

	if (!pFnAddReceivedGameInviteDelegate)
	{
		pFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(unsigned char LocalUserNum, struct FString InviterName)
{
	static UFunction* pFnOnReceivedGameInvite = nullptr;

	if (!pFnOnReceivedGameInvite)
	{
		pFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");

	}

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnReceivedGameInvite_Parms.InviterName, 0x10, &InviterName, 0x10);

	this->ProcessEvent(pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, struct FString Text)
{
	static UFunction* pFnSendGameInviteToFriends = nullptr;

	if (!pFnSendGameInviteToFriends)
	{
		pFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");

	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SendGameInviteToFriends_Parms.Friends, 0x10, &Friends, 0x10);
	memcpy_s(&SendGameInviteToFriends_Parms.Text, 0x10, &Text, 0x10);

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, nullptr);

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text)
{
	static UFunction* pFnSendGameInviteToFriend = nullptr;

	if (!pFnSendGameInviteToFriend)
	{
		pFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");

	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SendGameInviteToFriend_Parms.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendGameInviteToFriend_Parms.Text, 0x10, &Text, 0x10);

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, nullptr);

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendMessageToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message)
{
	static UFunction* pFnSendMessageToFriend = nullptr;

	if (!pFnSendMessageToFriend)
	{
		pFnSendMessageToFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");

	}

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SendMessageToFriend_Parms.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendMessageToFriend_Parms.Message, 0x10, &Message, 0x10);

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendMessageToFriend, &SendMessageToFriend_Parms, nullptr);

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteCanceledDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnClearFriendInviteCanceledDelegate = nullptr;

	if (!pFnClearFriendInviteCanceledDelegate)
	{
		pFnClearFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate");

	}

	UOnlineSubsystemSteamworks_execClearFriendInviteCanceledDelegate_Parms ClearFriendInviteCanceledDelegate_Parms;
	ClearFriendInviteCanceledDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendInviteCanceledDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendInviteCanceledDelegate, &ClearFriendInviteCanceledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteCanceledDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnAddFriendInviteCanceledDelegate = nullptr;

	if (!pFnAddFriendInviteCanceledDelegate)
	{
		pFnAddFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate");

	}

	UOnlineSubsystemSteamworks_execAddFriendInviteCanceledDelegate_Parms AddFriendInviteCanceledDelegate_Parms;
	AddFriendInviteCanceledDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendInviteCanceledDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendInviteCanceledDelegate, &AddFriendInviteCanceledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            CanceledUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteCanceled(unsigned char LocalUserNum, struct FUniqueNetId CanceledUserId)
{
	static UFunction* pFnOnFriendInviteCanceled = nullptr;

	if (!pFnOnFriendInviteCanceled)
	{
		pFnOnFriendInviteCanceled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled");

	}

	UOnlineSubsystemSteamworks_execOnFriendInviteCanceled_Parms OnFriendInviteCanceled_Parms;
	OnFriendInviteCanceled_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnFriendInviteCanceled_Parms.CanceledUserId, 0x48, &CanceledUserId, 0x48);

	this->ProcessEvent(pFnOnFriendInviteCanceled, &OnFriendInviteCanceled_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = nullptr;

	if (!pFnClearFriendInviteReceivedDelegate)
	{
		pFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = nullptr;

	if (!pFnAddFriendInviteReceivedDelegate)
	{
		pFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendInviteReceivedDelegate_Parms.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message)
{
	static UFunction* pFnOnFriendInviteReceived = nullptr;

	if (!pFnOnFriendInviteReceived)
	{
		pFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");

	}

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&OnFriendInviteReceived_Parms.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);
	memcpy_s(&OnFriendInviteReceived_Parms.RequestingNick, 0x10, &RequestingNick, 0x10);
	memcpy_s(&OnFriendInviteReceived_Parms.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* pFnDenyFriendInvite = nullptr;

	if (!pFnDenyFriendInvite)
	{
		pFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");

	}

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&DenyFriendInvite_Parms.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDenyFriendInvite, &DenyFriendInvite_Parms, nullptr);

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearDenyFriendInviteCompleteDelegate = nullptr;

	if (!pFnClearDenyFriendInviteCompleteDelegate)
	{
		pFnClearDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearDenyFriendInviteCompleteDelegate_Parms ClearDenyFriendInviteCompleteDelegate_Parms;
	ClearDenyFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearDenyFriendInviteCompleteDelegate, &ClearDenyFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDenyFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddDenyFriendInviteCompleteDelegate = nullptr;

	if (!pFnAddDenyFriendInviteCompleteDelegate)
	{
		pFnAddDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddDenyFriendInviteCompleteDelegate_Parms AddDenyFriendInviteCompleteDelegate_Parms;
	AddDenyFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddDenyFriendInviteCompleteDelegate, &AddDenyFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* pFnOnDenyFriendInviteComplete = nullptr;

	if (!pFnOnDenyFriendInviteComplete)
	{
		pFnOnDenyFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete");

	}

	UOnlineSubsystemSteamworks_execOnDenyFriendInviteComplete_Parms OnDenyFriendInviteComplete_Parms;
	memcpy_s(&OnDenyFriendInviteComplete_Parms.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnDenyFriendInviteComplete_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnOnDenyFriendInviteComplete, &OnDenyFriendInviteComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* pFnAcceptFriendInvite = nullptr;

	if (!pFnAcceptFriendInvite)
	{
		pFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");

	}

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AcceptFriendInvite_Parms.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, nullptr);

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAcceptFriendInviteCompleteDelegate = nullptr;

	if (!pFnClearAcceptFriendInviteCompleteDelegate)
	{
		pFnClearAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearAcceptFriendInviteCompleteDelegate_Parms ClearAcceptFriendInviteCompleteDelegate_Parms;
	ClearAcceptFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearAcceptFriendInviteCompleteDelegate, &ClearAcceptFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAcceptFriendInviteCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAcceptFriendInviteCompleteDelegate = nullptr;

	if (!pFnAddAcceptFriendInviteCompleteDelegate)
	{
		pFnAddAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddAcceptFriendInviteCompleteDelegate_Parms AddAcceptFriendInviteCompleteDelegate_Parms;
	AddAcceptFriendInviteCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddAcceptFriendInviteCompleteDelegate, &AddAcceptFriendInviteCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* pFnOnAcceptFriendInviteComplete = nullptr;

	if (!pFnOnAcceptFriendInviteComplete)
	{
		pFnOnAcceptFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete");

	}

	UOnlineSubsystemSteamworks_execOnAcceptFriendInviteComplete_Parms OnAcceptFriendInviteComplete_Parms;
	memcpy_s(&OnAcceptFriendInviteComplete_Parms.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnAcceptFriendInviteComplete_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnOnAcceptFriendInviteComplete, &OnAcceptFriendInviteComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RemoveFriend(unsigned char LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* pFnRemoveFriend = nullptr;

	if (!pFnRemoveFriend)
	{
		pFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");

	}

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&RemoveFriend_Parms.FormerFriend, 0x48, &FormerFriend, 0x48);

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveFriend, &RemoveFriend_Parms, nullptr);

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* pFnClearRemoveFriendCompleteDelegate = nullptr;

	if (!pFnClearRemoveFriendCompleteDelegate)
	{
		pFnClearRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearRemoveFriendCompleteDelegate_Parms ClearRemoveFriendCompleteDelegate_Parms;
	ClearRemoveFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Parms.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(pFnClearRemoveFriendCompleteDelegate, &ClearRemoveFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRemoveFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* pFnAddRemoveFriendCompleteDelegate = nullptr;

	if (!pFnAddRemoveFriendCompleteDelegate)
	{
		pFnAddRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddRemoveFriendCompleteDelegate_Parms AddRemoveFriendCompleteDelegate_Parms;
	AddRemoveFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddRemoveFriendCompleteDelegate_Parms.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(pFnAddRemoveFriendCompleteDelegate, &AddRemoveFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            RemovedID                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID)
{
	static UFunction* pFnOnRemoveFriendComplete = nullptr;

	if (!pFnOnRemoveFriendComplete)
	{
		pFnOnRemoveFriendComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete");

	}

	UOnlineSubsystemSteamworks_execOnRemoveFriendComplete_Parms OnRemoveFriendComplete_Parms;
	OnRemoveFriendComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveFriendComplete_Parms.RemovedID, 0x48, &RemovedID, 0x48);

	this->ProcessEvent(pFnOnRemoveFriendComplete, &OnRemoveFriendComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!pFnClearAddFriendByNameCompleteDelegate)
	{
		pFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!pFnAddAddFriendByNameCompleteDelegate)
	{
		pFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAddFriendByNameComplete = nullptr;

	if (!pFnOnAddFriendByNameComplete)
	{
		pFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");

	}

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriendByName(unsigned char LocalUserNum, struct FString FriendName, struct FString Message)
{
	static UFunction* pFnAddFriendByName = nullptr;

	if (!pFnAddFriendByName)
	{
		pFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");

	}

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendByName_Parms.FriendName, 0x10, &FriendName, 0x10);
	memcpy_s(&AddFriendByName_Parms.Message, 0x10, &Message, 0x10);

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddFriendByName, &AddFriendByName_Parms, nullptr);

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::QueryUserByDisplayName(unsigned char LocalUserNum, struct FString DisplayName)
{
	static UFunction* pFnQueryUserByDisplayName = nullptr;

	if (!pFnQueryUserByDisplayName)
	{
		pFnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName");

	}

	UOnlineSubsystemSteamworks_execQueryUserByDisplayName_Parms QueryUserByDisplayName_Parms;
	QueryUserByDisplayName_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&QueryUserByDisplayName_Parms.DisplayName, 0x10, &DisplayName, 0x10);

	this->ProcessEvent(pFnQueryUserByDisplayName, &QueryUserByDisplayName_Parms, nullptr);

	return QueryUserByDisplayName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* pFnClearQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!pFnClearQueryUserByDisplayNameCompleteDelegate)
	{
		pFnClearQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearQueryUserByDisplayNameCompleteDelegate_Parms ClearQueryUserByDisplayNameCompleteDelegate_Parms;
	ClearQueryUserByDisplayNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Parms.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(pFnClearQueryUserByDisplayNameCompleteDelegate, &ClearQueryUserByDisplayNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQueryUserByDisplayNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* pFnAddQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!pFnAddQueryUserByDisplayNameCompleteDelegate)
	{
		pFnAddQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddQueryUserByDisplayNameCompleteDelegate_Parms AddQueryUserByDisplayNameCompleteDelegate_Parms;
	AddQueryUserByDisplayNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Parms.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(pFnAddQueryUserByDisplayNameCompleteDelegate, &AddQueryUserByDisplayNameCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 QueriedDisplayName             (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnQueryUserByDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId UserId)
{
	static UFunction* pFnOnQueryUserByDisplayName = nullptr;

	if (!pFnOnQueryUserByDisplayName)
	{
		pFnOnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName");

	}

	UOnlineSubsystemSteamworks_execOnQueryUserByDisplayName_Parms OnQueryUserByDisplayName_Parms;
	OnQueryUserByDisplayName_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUserByDisplayName_Parms.QueriedDisplayName, 0x10, &QueriedDisplayName, 0x10);
	memcpy_s(&OnQueryUserByDisplayName_Parms.UserId, 0x48, &UserId, 0x48);

	this->ProcessEvent(pFnOnQueryUserByDisplayName, &OnQueryUserByDisplayName_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriend(unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message)
{
	static UFunction* pFnAddFriend = nullptr;

	if (!pFnAddFriend)
	{
		pFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");

	}

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriend_Parms.NewFriend, 0x48, &NewFriend, 0x48);
	memcpy_s(&AddFriend_Parms.Message, 0x10, &Message, 0x10);

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddFriend, &AddFriend_Parms, nullptr);

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAddFriendCompleteDelegate = nullptr;

	if (!pFnClearAddFriendCompleteDelegate)
	{
		pFnClearAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearAddFriendCompleteDelegate_Parms ClearAddFriendCompleteDelegate_Parms;
	ClearAddFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAddFriendCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnClearAddFriendCompleteDelegate, &ClearAddFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAddFriendCompleteDelegate = nullptr;

	if (!pFnAddAddFriendCompleteDelegate)
	{
		pFnAddAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddAddFriendCompleteDelegate_Parms AddAddFriendCompleteDelegate_Parms;
	AddAddFriendCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAddFriendCompleteDelegate_Parms.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(pFnAddAddFriendCompleteDelegate, &AddAddFriendCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NewFriendId                    (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error)
{
	static UFunction* pFnOnAddFriendComplete = nullptr;

	if (!pFnOnAddFriendComplete)
	{
		pFnOnAddFriendComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete");

	}

	UOnlineSubsystemSteamworks_execOnAddFriendComplete_Parms OnAddFriendComplete_Parms;
	memcpy_s(&OnAddFriendComplete_Parms.NewFriendId, 0x48, &NewFriendId, 0x48);
	memcpy_s(&OnAddFriendComplete_Parms.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(pFnOnAddFriendComplete, &OnAddFriendComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  bWasCanceled                   (CPF_Parm | CPF_OutParm)

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(unsigned char& bWasCanceled)
{
	static UFunction* pFnGetKeyboardInputResults = nullptr;

	if (!pFnGetKeyboardInputResults)
	{
		pFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");

	}

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent(pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, nullptr);
	bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = nullptr;

	if (!pFnClearKeyboardInputDoneDelegate)
	{
		pFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");

	}

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy_s(&ClearKeyboardInputDoneDelegate_Parms.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = nullptr;

	if (!pFnAddKeyboardInputDoneDelegate)
	{
		pFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");

	}

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy_s(&AddKeyboardInputDoneDelegate_Parms.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnKeyboardInputComplete = nullptr;

	if (!pFnOnKeyboardInputComplete)
	{
		pFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");

	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::HideKeyboardUI(unsigned char LocalUserNum)
{
	static UFunction* pFnHideKeyboardUI = nullptr;

	if (!pFnHideKeyboardUI)
	{
		pFnHideKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI");

	}

	UOnlineSubsystemSteamworks_execHideKeyboardUI_Parms HideKeyboardUI_Parms;
	HideKeyboardUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnHideKeyboardUI, &HideKeyboardUI_Parms, nullptr);

	return HideKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// struct FString                 DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength)
{
	static UFunction* pFnShowKeyboardUI = nullptr;

	if (!pFnShowKeyboardUI)
	{
		pFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");

	}

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ShowKeyboardUI_Parms.TitleText, 0x10, &TitleText, 0x10);
	memcpy_s(&ShowKeyboardUI_Parms.DescriptionText, 0x10, &DescriptionText, 0x10);
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Parms.DefaultText, 0x10, &DefaultText, 0x10);
	memcpy_s(&ShowKeyboardUI_Parms.MaxResultLength, 0x4, &MaxResultLength, 0x4);

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowKeyboardUI, &ShowKeyboardUI_Parms, nullptr);

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* pFnSetOnlineStatus = nullptr;

	if (!pFnSetOnlineStatus)
	{
		pFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");

	}

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetOnlineStatus_Parms.StatusId, 0x4, &StatusId, 0x4);

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetOnlineStatus, &SetOnlineStatus_Parms, nullptr);

	pFnSetOnlineStatus->FunctionFlags |= 0x400;
	memcpy_s(&SetOnlineStatus_Parms.LocalizedStringSettings, 0x10, &LocalizedStringSettings, 0x10);
	memcpy_s(&SetOnlineStatus_Parms.Properties, 0x10, &Properties, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = nullptr;

	if (!pFnGetTitleFileState)
	{
		pFnGetTitleFileState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");

	}

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy_s(&GetTitleFileState_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, nullptr);

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(struct FString Filename, TArray<unsigned char>& FileContents)
{
	static UFunction* pFnGetTitleFileContents = nullptr;

	if (!pFnGetTitleFileContents)
	{
		pFnGetTitleFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");

	}

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy_s(&GetTitleFileContents_Parms.Filename, 0x10, &Filename, 0x10);

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, nullptr);

	pFnGetTitleFileContents->FunctionFlags |= 0x400;
	memcpy_s(&GetTitleFileContents_Parms.FileContents, 0x10, &FileContents, 0x10);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!pFnClearReadTitleFileCompleteDelegate)
	{
		pFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!pFnAddReadTitleFileCompleteDelegate)
	{
		pFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy_s(&AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadTitleFile(struct FString FileToRead)
{
	static UFunction* pFnReadTitleFile = nullptr;

	if (!pFnReadTitleFile)
	{
		pFnReadTitleFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");

	}

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy_s(&ReadTitleFile_Parms.FileToRead, 0x10, &FileToRead, 0x10);

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadTitleFile, &ReadTitleFile_Parms, nullptr);

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadTitleFileComplete = nullptr;

	if (!pFnOnReadTitleFileComplete)
	{
		pFnOnReadTitleFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Parms.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = nullptr;

	if (!pFnClearStorageDeviceChangeDelegate)
	{
		pFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy_s(&ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = nullptr;

	if (!pFnAddStorageDeviceChangeDelegate)
	{
		pFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy_s(&AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* pFnOnStorageDeviceChange = nullptr;

	if (!pFnOnStorageDeviceChange)
	{
		pFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");

	}

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent(pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* pFnGetNATType = nullptr;

	if (!pFnGetNATType)
	{
		pFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");

	}

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetNATType, &GetNATType_Parms, nullptr);

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = nullptr;

	if (!pFnClearConnectionStatusChangeDelegate)
	{
		pFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy_s(&ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = nullptr;

	if (!pFnAddConnectionStatusChangeDelegate)
	{
		pFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy_s(&AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(unsigned char ConnectionStatus)
{
	static UFunction* pFnOnConnectionStatusChange = nullptr;

	if (!pFnOnConnectionStatusChange)
	{
		pFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");

	}

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent(pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetCurrentConnectionStatus()
{
	static UFunction* pFnGetCurrentConnectionStatus = nullptr;

	if (!pFnGetCurrentConnectionStatus)
	{
		pFnGetCurrentConnectionStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus");

	}

	UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent(pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, nullptr);

	return GetCurrentConnectionStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int ControllerId)
{
	static UFunction* pFnIsControllerConnected = nullptr;

	if (!pFnIsControllerConnected)
	{
		pFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");

	}

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;
	memcpy_s(&IsControllerConnected_Parms.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(pFnIsControllerConnected, &IsControllerConnected_Parms, nullptr);

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* pFnClearUserRestoredDelegate = nullptr;

	if (!pFnClearUserRestoredDelegate)
	{
		pFnClearUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUserRestoredDelegate_Parms ClearUserRestoredDelegate_Parms;
	memcpy_s(&ClearUserRestoredDelegate_Parms.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(pFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* pFnAddUserRestoredDelegate = nullptr;

	if (!pFnAddUserRestoredDelegate)
	{
		pFnAddUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUserRestoredDelegate_Parms AddUserRestoredDelegate_Parms;
	memcpy_s(&AddUserRestoredDelegate_Parms.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(pFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserRestored(unsigned char ControllerId)
{
	static UFunction* pFnOnUserRestored = nullptr;

	if (!pFnOnUserRestored)
	{
		pFnOnUserRestored = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored");

	}

	UOnlineSubsystemSteamworks_execOnUserRestored_Parms OnUserRestored_Parms;
	OnUserRestored_Parms.ControllerId = ControllerId;

	this->ProcessEvent(pFnOnUserRestored, &OnUserRestored_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* pFnClearUserOrphanedDelegate = nullptr;

	if (!pFnClearUserOrphanedDelegate)
	{
		pFnClearUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUserOrphanedDelegate_Parms ClearUserOrphanedDelegate_Parms;
	memcpy_s(&ClearUserOrphanedDelegate_Parms.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(pFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* pFnAddUserOrphanedDelegate = nullptr;

	if (!pFnAddUserOrphanedDelegate)
	{
		pFnAddUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUserOrphanedDelegate_Parms AddUserOrphanedDelegate_Parms;
	memcpy_s(&AddUserOrphanedDelegate_Parms.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(pFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserOrphaned(unsigned char ControllerId)
{
	static UFunction* pFnOnUserOrphaned = nullptr;

	if (!pFnOnUserOrphaned)
	{
		pFnOnUserOrphaned = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned");

	}

	UOnlineSubsystemSteamworks_execOnUserOrphaned_Parms OnUserOrphaned_Parms;
	OnUserOrphaned_Parms.ControllerId = ControllerId;

	this->ProcessEvent(pFnOnUserOrphaned, &OnUserOrphaned_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* pFnClearControllerChangeDelegate = nullptr;

	if (!pFnClearControllerChangeDelegate)
	{
		pFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy_s(&ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* pFnAddControllerChangeDelegate = nullptr;

	if (!pFnAddControllerChangeDelegate)
	{
		pFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy_s(&AddControllerChangeDelegate_Parms.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int                            ControllerId                   (CPF_Parm)
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int ControllerId, unsigned long bIsConnected)
{
	static UFunction* pFnOnControllerChange = nullptr;

	if (!pFnOnControllerChange)
	{
		pFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");

	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;
	memcpy_s(&OnControllerChange_Parms.ControllerId, 0x4, &ControllerId, 0x4);
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent(pFnOnControllerChange, &OnControllerChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(unsigned char NewPos)
{
	static UFunction* pFnSetNetworkNotificationPosition = nullptr;

	if (!pFnSetNetworkNotificationPosition)
	{
		pFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");

	}

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, nullptr);

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* pFnGetNetworkNotificationPosition = nullptr;

	if (!pFnGetNetworkNotificationPosition)
	{
		pFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");

	}

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent(pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, nullptr);

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* pFnClearExternalUIChangeDelegate = nullptr;

	if (!pFnClearExternalUIChangeDelegate)
	{
		pFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy_s(&ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, 0x18, &ExternalUIDelegate, 0x18);

	this->ProcessEvent(pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* pFnAddExternalUIChangeDelegate = nullptr;

	if (!pFnAddExternalUIChangeDelegate)
	{
		pFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy_s(&AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, 0x18, &ExternalUIDelegate, 0x18);

	this->ProcessEvent(pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(unsigned long bIsOpening)
{
	static UFunction* pFnOnExternalUIChange = nullptr;

	if (!pFnOnExternalUIChange)
	{
		pFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");

	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent(pFnOnExternalUIChange, &OnExternalUIChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* pFnClearLinkStatusChangeDelegate = nullptr;

	if (!pFnClearLinkStatusChangeDelegate)
	{
		pFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy_s(&ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* pFnAddLinkStatusChangeDelegate = nullptr;

	if (!pFnAddLinkStatusChangeDelegate)
	{
		pFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy_s(&AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(unsigned long bIsConnected)
{
	static UFunction* pFnOnLinkStatusChange = nullptr;

	if (!pFnOnLinkStatusChange)
	{
		pFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");

	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent(pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* pFnHasLinkConnection = nullptr;

	if (!pFnHasLinkConnection)
	{
		pFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");

	}

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasLinkConnection, &HasLinkConnection_Parms, nullptr);

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            UserIndex                      (CPF_Parm)

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerNicknameFromIndex = nullptr;

	if (!pFnGetPlayerNicknameFromIndex)
	{
		pFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");

	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	memcpy_s(&GetPlayerNicknameFromIndex_Parms.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, nullptr);

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// int                            LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(struct FName SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* pFnWriteOnlinePlayerScores = nullptr;

	if (!pFnWriteOnlinePlayerScores)
	{
		pFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");

	}

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy_s(&WriteOnlinePlayerScores_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlinePlayerScores_Parms.LeaderboardId, 0x4, &LeaderboardId, 0x4);

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, nullptr);

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;
	memcpy_s(&WriteOnlinePlayerScores_Parms.PlayerScores, 0x10, &PlayerScores, 0x10);

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!pFnClearFlushOnlineStatsCompleteDelegate)
	{
		pFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!pFnAddFlushOnlineStatsCompleteDelegate)
	{
		pFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnFlushOnlineStatsComplete = nullptr;

	if (!pFnOnFlushOnlineStatsComplete)
	{
		pFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");

	}

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy_s(&OnFlushOnlineStatsComplete_Parms.SessionName, 0x8, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* pFnFlushOnlineStats = nullptr;

	if (!pFnFlushOnlineStats)
	{
		pFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");

	}

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy_s(&FlushOnlineStats_Parms.SessionName, 0x8, &SessionName, 0x8);

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlushOnlineStats, &FlushOnlineStats_Parms, nullptr);

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* pFnWriteOnlineStats = nullptr;

	if (!pFnWriteOnlineStats)
	{
		pFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");

	}

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy_s(&WriteOnlineStats_Parms.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlineStats_Parms.Player, 0x48, &Player, 0x48);
	memcpy_s(&WriteOnlineStats_Parms.StatsWrite, 0x8, &StatsWrite, 0x8);

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteOnlineStats, &WriteOnlineStats_Parms, nullptr);

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnFreeStats = nullptr;

	if (!pFnFreeStats)
	{
		pFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");

	}

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;
	memcpy_s(&FreeStats_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFreeStats, &FreeStats_Parms, nullptr);

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!pFnClearReadOnlineStatsCompleteDelegate)
	{
		pFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!pFnAddReadOnlineStatsCompleteDelegate)
	{
		pFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadOnlineStatsComplete = nullptr;

	if (!pFnOnReadOnlineStatsComplete)
	{
		pFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!pFnReadOnlineStatsByRankAroundPlayer)
	{
		pFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");

	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Parms.NumRows, 0x4, &NumRows, 0x4);

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, nullptr);

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static UFunction* pFnReadOnlineStatsByRank = nullptr;

	if (!pFnReadOnlineStatsByRank)
	{
		pFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");

	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsByRank_Parms.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRank_Parms.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&ReadOnlineStatsByRank_Parms.NumToRead, 0x4, &NumToRead, 0x4);

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, nullptr);

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnReadOnlineStatsForFriends = nullptr;

	if (!pFnReadOnlineStatsForFriends)
	{
		pFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");

	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStatsForFriends_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, nullptr);

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* pFnReadOnlineStats = nullptr;

	if (!pFnReadOnlineStats)
	{
		pFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");

	}

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadOnlineStats_Parms.StatsRead, 0x8, &StatsRead, 0x8);

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStats, &ReadOnlineStats_Parms, nullptr);

	pFnReadOnlineStats->FunctionFlags |= 0x400;
	memcpy_s(&ReadOnlineStats_Parms.Players, 0x10, &Players, 0x10);

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* pFnSetSpeechRecognitionObject = nullptr;

	if (!pFnSetSpeechRecognitionObject)
	{
		pFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");

	}

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetSpeechRecognitionObject_Parms.SpeechRecogObj, 0x8, &SpeechRecogObj, 0x8);

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, nullptr);

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static UFunction* pFnSelectVocabulary = nullptr;

	if (!pFnSelectVocabulary)
	{
		pFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");

	}

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SelectVocabulary_Parms.VocabularyId, 0x4, &VocabularyId, 0x4);

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSelectVocabulary, &SelectVocabulary_Parms, nullptr);

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* pFnClearRecognitionCompleteDelegate = nullptr;

	if (!pFnClearRecognitionCompleteDelegate)
	{
		pFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* pFnAddRecognitionCompleteDelegate = nullptr;

	if (!pFnAddRecognitionCompleteDelegate)
	{
		pFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static UFunction* pFnOnRecognitionComplete = nullptr;

	if (!pFnOnRecognitionComplete)
	{
		pFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");

	}

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent(pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* pFnGetRecognitionResults = nullptr;

	if (!pFnGetRecognitionResults)
	{
		pFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");

	}

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetRecognitionResults, &GetRecognitionResults_Parms, nullptr);

	pFnGetRecognitionResults->FunctionFlags |= 0x400;
	memcpy_s(&GetRecognitionResults_Parms.Words, 0x10, &Words, 0x10);

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static UFunction* pFnStopSpeechRecognition = nullptr;

	if (!pFnStopSpeechRecognition)
	{
		pFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");

	}

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, nullptr);

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static UFunction* pFnStartSpeechRecognition = nullptr;

	if (!pFnStartSpeechRecognition)
	{
		pFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");

	}

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, nullptr);

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static UFunction* pFnStopNetworkedVoice = nullptr;

	if (!pFnStopNetworkedVoice)
	{
		pFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");

	}

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, nullptr);

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static UFunction* pFnStartNetworkedVoice = nullptr;

	if (!pFnStartNetworkedVoice)
	{
		pFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");

	}

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, nullptr);

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* pFnClearPlayerTalkingDelegate = nullptr;

	if (!pFnClearPlayerTalkingDelegate)
	{
		pFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate");

	}

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy_s(&ClearPlayerTalkingDelegate_Parms.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* pFnAddPlayerTalkingDelegate = nullptr;

	if (!pFnAddPlayerTalkingDelegate)
	{
		pFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate");

	}

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy_s(&AddPlayerTalkingDelegate_Parms.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking)
{
	static UFunction* pFnOnPlayerTalkingStateChange = nullptr;

	if (!pFnOnPlayerTalkingStateChange)
	{
		pFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");

	}

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy_s(&OnPlayerTalkingStateChange_Parms.Player, 0x48, &Player, 0x48);
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent(pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* pFnUnmuteRemoteTalker = nullptr;

	if (!pFnUnmuteRemoteTalker)
	{
		pFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");

	}

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&UnmuteRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, nullptr);

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* pFnMuteRemoteTalker = nullptr;

	if (!pFnMuteRemoteTalker)
	{
		pFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");

	}

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&MuteRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, nullptr);

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int                            Priority                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority)
{
	static UFunction* pFnSetRemoteTalkerPriority = nullptr;

	if (!pFnSetRemoteTalkerPriority)
	{
		pFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");

	}

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&SetRemoteTalkerPriority_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&SetRemoteTalkerPriority_Parms.Priority, 0x4, &Priority, 0x4);

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, nullptr);

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static UFunction* pFnIsHeadsetPresent = nullptr;

	if (!pFnIsHeadsetPresent)
	{
		pFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");

	}

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, nullptr);

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsRemotePlayerTalking = nullptr;

	if (!pFnIsRemotePlayerTalking)
	{
		pFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");

	}

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy_s(&IsRemotePlayerTalking_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, nullptr);

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static UFunction* pFnIsLocalPlayerTalking = nullptr;

	if (!pFnIsLocalPlayerTalking)
	{
		pFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");

	}

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, nullptr);

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterRemoteTalker = nullptr;

	if (!pFnUnregisterRemoteTalker)
	{
		pFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");

	}

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy_s(&UnregisterRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, nullptr);

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnRegisterRemoteTalker = nullptr;

	if (!pFnRegisterRemoteTalker)
	{
		pFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");

	}

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy_s(&RegisterRemoteTalker_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, nullptr);

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static UFunction* pFnUnregisterLocalTalker = nullptr;

	if (!pFnUnregisterLocalTalker)
	{
		pFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");

	}

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, nullptr);

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static UFunction* pFnRegisterLocalTalker = nullptr;

	if (!pFnRegisterLocalTalker)
	{
		pFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");

	}

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, nullptr);

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00434401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            Count                          (CPF_OptionalParm | CPF_Parm)
// int                            StartingAt                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

unsigned char UOnlineSubsystemSteamworks::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* pFnGetFriendsList = nullptr;

	if (!pFnGetFriendsList)
	{
		pFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");

	}

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&GetFriendsList_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&GetFriendsList_Parms.StartingAt, 0x4, &StartingAt, 0x4);

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendsList, &GetFriendsList_Parms, nullptr);

	pFnGetFriendsList->FunctionFlags |= 0x400;
	memcpy_s(&GetFriendsList_Parms.Friends, 0x10, &Friends, 0x10);

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = nullptr;

	if (!pFnClearReadFriendsCompleteDelegate)
	{
		pFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = nullptr;

	if (!pFnAddReadFriendsCompleteDelegate)
	{
		pFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadFriendsComplete = nullptr;

	if (!pFnOnReadFriendsComplete)
	{
		pFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00034401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            Count                          (CPF_OptionalParm | CPF_Parm)
// int                            StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static UFunction* pFnReadFriendsList = nullptr;

	if (!pFnReadFriendsList)
	{
		pFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");

	}

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadFriendsList_Parms.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReadFriendsList_Parms.StartingAt, 0x4, &StartingAt, 0x4);

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadFriendsList, &ReadFriendsList_Parms, nullptr);

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!pFnClearWritePlayerStorageCompleteDelegate)
	{
		pFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, 0x18, &WritePlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!pFnAddWritePlayerStorageCompleteDelegate)
	{
		pFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, 0x18, &WritePlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnWritePlayerStorageComplete = nullptr;

	if (!pFnOnWritePlayerStorageComplete)
	{
		pFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");

	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int                            DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static UFunction* pFnWritePlayerStorage = nullptr;

	if (!pFnWritePlayerStorage)
	{
		pFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");

	}

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&WritePlayerStorage_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&WritePlayerStorage_Parms.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(pFnWritePlayerStorage, &WritePlayerStorage_Parms, nullptr);

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerStorage = nullptr;

	if (!pFnGetPlayerStorage)
	{
		pFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");

	}

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerStorage, &GetPlayerStorage_Parms, nullptr);

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!pFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, 0x18, &ReadPlayerStorageForNetIdCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!pFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, 0x18, &ReadPlayerStorageForNetIdCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!pFnOnReadPlayerStorageForNetIdComplete)
	{
		pFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Parms.NetId, 0x48, &NetId, 0x48);
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* pFnReadPlayerStorageForNetId = nullptr;

	if (!pFnReadPlayerStorageForNetId)
	{
		pFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");

	}

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadPlayerStorageForNetId_Parms.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ReadPlayerStorageForNetId_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);

	this->ProcessEvent(pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, nullptr);

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!pFnClearReadPlayerStorageCompleteDelegate)
	{
		pFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, 0x18, &ReadPlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!pFnAddReadPlayerStorageCompleteDelegate)
	{
		pFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, 0x18, &ReadPlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlayerStorageComplete = nullptr;

	if (!pFnOnReadPlayerStorageComplete)
	{
		pFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int                            DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static UFunction* pFnReadPlayerStorage = nullptr;

	if (!pFnReadPlayerStorage)
	{
		pFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");

	}

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadPlayerStorage_Parms.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&ReadPlayerStorage_Parms.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(pFnReadPlayerStorage, &ReadPlayerStorage_Parms, nullptr);

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!pFnClearWriteProfileSettingsCompleteDelegate)
	{
		pFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!pFnAddWriteProfileSettingsCompleteDelegate)
	{
		pFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnWriteProfileSettingsComplete = nullptr;

	if (!pFnOnWriteProfileSettingsComplete)
	{
		pFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");

	}

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnWriteProfileSettings = nullptr;

	if (!pFnWriteProfileSettings)
	{
		pFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");

	}

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&WriteProfileSettings_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteProfileSettings, &WriteProfileSettings_Parms, nullptr);

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(unsigned char LocalUserNum)
{
	static UFunction* pFnGetProfileSettings = nullptr;

	if (!pFnGetProfileSettings)
	{
		pFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");

	}

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetProfileSettings, &GetProfileSettings_Parms, nullptr);

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!pFnClearReadProfileSettingsCompleteDelegate)
	{
		pFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!pFnAddReadProfileSettingsCompleteDelegate)
	{
		pFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadProfileSettingsComplete = nullptr;

	if (!pFnOnReadProfileSettingsComplete)
	{
		pFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");

	}

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnReadProfileSettings = nullptr;

	if (!pFnReadProfileSettings)
	{
		pFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");

	}

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ReadProfileSettings_Parms.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadProfileSettings, &ReadProfileSettings_Parms, nullptr);

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* pFnClearFriendsChangeDelegate = nullptr;

	if (!pFnClearFriendsChangeDelegate)
	{
		pFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendsChangeDelegate_Parms.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* pFnClearAvatarChangeDelegate = nullptr;

	if (!pFnClearAvatarChangeDelegate)
	{
		pFnClearAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearAvatarChangeDelegate_Parms ClearAvatarChangeDelegate_Parms;
	ClearAvatarChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearAvatarChangeDelegate_Parms.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(pFnClearAvatarChangeDelegate, &ClearAvatarChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAvatarChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* pFnAddAvatarChangeDelegate = nullptr;

	if (!pFnAddAvatarChangeDelegate)
	{
		pFnAddAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddAvatarChangeDelegate_Parms AddAvatarChangeDelegate_Parms;
	AddAvatarChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddAvatarChangeDelegate_Parms.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(pFnAddAvatarChangeDelegate, &AddAvatarChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
// [0x00430401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FOnlineFriend           FriendData                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendPresence(struct FOnlineFriend& FriendData)
{
	static UFunction* pFnGetFriendPresence = nullptr;

	if (!pFnGetFriendPresence)
	{
		pFnGetFriendPresence = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence");

	}

	UOnlineSubsystemSteamworks_execGetFriendPresence_Parms GetFriendPresence_Parms;

	pFnGetFriendPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendPresence, &GetFriendPresence_Parms, nullptr);

	pFnGetFriendPresence->FunctionFlags |= 0x400;
	memcpy_s(&GetFriendPresence_Parms.FriendData, 0x130, &FriendData, 0x130);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* pFnClearFriendPresenceChangeDelegate = nullptr;

	if (!pFnClearFriendPresenceChangeDelegate)
	{
		pFnClearFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearFriendPresenceChangeDelegate_Parms ClearFriendPresenceChangeDelegate_Parms;
	ClearFriendPresenceChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearFriendPresenceChangeDelegate_Parms.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(pFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* pFnAddFriendPresenceChangeDelegate = nullptr;

	if (!pFnAddFriendPresenceChangeDelegate)
	{
		pFnAddFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddFriendPresenceChangeDelegate_Parms AddFriendPresenceChangeDelegate_Parms;
	AddFriendPresenceChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendPresenceChangeDelegate_Parms.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* pFnAddFriendsChangeDelegate = nullptr;

	if (!pFnAddFriendsChangeDelegate)
	{
		pFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddFriendsChangeDelegate_Parms.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* pFnClearMutingChangeDelegate = nullptr;

	if (!pFnClearMutingChangeDelegate)
	{
		pFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy_s(&ClearMutingChangeDelegate_Parms.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* pFnAddMutingChangeDelegate = nullptr;

	if (!pFnAddMutingChangeDelegate)
	{
		pFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy_s(&AddMutingChangeDelegate_Parms.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* pFnClearLoginCancelledDelegate = nullptr;

	if (!pFnClearLoginCancelledDelegate)
	{
		pFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");

	}

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy_s(&ClearLoginCancelledDelegate_Parms.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* pFnAddLoginCancelledDelegate = nullptr;

	if (!pFnAddLoginCancelledDelegate)
	{
		pFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");

	}

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy_s(&AddLoginCancelledDelegate_Parms.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnClearLoginStatusChangeDelegate = nullptr;

	if (!pFnClearLoginStatusChangeDelegate)
	{
		pFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy_s(&ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, 0x18, &LoginStatusDelegate, 0x18);
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnAddLoginStatusChangeDelegate = nullptr;

	if (!pFnAddLoginStatusChangeDelegate)
	{
		pFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy_s(&AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, 0x18, &LoginStatusDelegate, 0x18);
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* pFnOnLoginStatusChange = nullptr;

	if (!pFnOnLoginStatusChange)
	{
		pFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");

	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy_s(&OnLoginStatusChange_Parms.NewId, 0x48, &NewId, 0x48);

	this->ProcessEvent(pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* pFnClearLoginChangeDelegate = nullptr;

	if (!pFnClearLoginChangeDelegate)
	{
		pFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy_s(&ClearLoginChangeDelegate_Parms.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	this->ProcessEvent(pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* pFnAddLoginChangeDelegate = nullptr;

	if (!pFnAddLoginChangeDelegate)
	{
		pFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");

	}

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy_s(&AddLoginChangeDelegate_Parms.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	this->ProcessEvent(pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate)
{
	static UFunction* pFnClearUserSignInCompleteDelegate = nullptr;

	if (!pFnClearUserSignInCompleteDelegate)
	{
		pFnClearUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUserSignInCompleteDelegate_Parms ClearUserSignInCompleteDelegate_Parms;
	memcpy_s(&ClearUserSignInCompleteDelegate_Parms.UserSignInCompleteDelegate, 0x18, &UserSignInCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate)
{
	static UFunction* pFnAddUserSignInCompleteDelegate = nullptr;

	if (!pFnAddUserSignInCompleteDelegate)
	{
		pFnAddUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUserSignInCompleteDelegate_Parms AddUserSignInCompleteDelegate_Parms;
	memcpy_s(&AddUserSignInCompleteDelegate_Parms.UserSignInCompleteDelegate, 0x18, &UserSignInCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* pFnClearUserSwitchCompleteDelegate = nullptr;

	if (!pFnClearUserSwitchCompleteDelegate)
	{
		pFnClearUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execClearUserSwitchCompleteDelegate_Parms ClearUserSwitchCompleteDelegate_Parms;
	memcpy_s(&ClearUserSwitchCompleteDelegate_Parms.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(pFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* pFnAddUserSwitchCompleteDelegate = nullptr;

	if (!pFnAddUserSwitchCompleteDelegate)
	{
		pFnAddUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate");

	}

	UOnlineSubsystemSteamworks_execAddUserSwitchCompleteDelegate_Parms AddUserSwitchCompleteDelegate_Parms;
	memcpy_s(&AddUserSwitchCompleteDelegate_Parms.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(pFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
// [0x00030001] (FUNC_Final | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::SetPrimaryPlayerGamepadToLastInput()
{
	static UFunction* pFnSetPrimaryPlayerGamepadToLastInput = nullptr;

	if (!pFnSetPrimaryPlayerGamepadToLastInput)
	{
		pFnSetPrimaryPlayerGamepadToLastInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput");

	}

	UOnlineSubsystemSteamworks_execSetPrimaryPlayerGamepadToLastInput_Parms SetPrimaryPlayerGamepadToLastInput_Parms;

	this->ProcessEvent(pFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsMuted(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsMuted = nullptr;

	if (!pFnIsMuted)
	{
		pFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");

	}

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&IsMuted_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnIsMuted, &IsMuted_Parms, nullptr);

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>& Query)
{
	static UFunction* pFnAreAnyFriends = nullptr;

	if (!pFnAreAnyFriends)
	{
		pFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");

	}

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAreAnyFriends, &AreAnyFriends_Parms, nullptr);

	pFnAreAnyFriends->FunctionFlags |= 0x400;
	memcpy_s(&AreAnyFriends_Parms.Query, 0x10, &Query, 0x10);

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsFriend(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsFriend = nullptr;

	if (!pFnIsFriend)
	{
		pFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");

	}

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&IsFriend_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsFriend, &IsFriend_Parms, nullptr);

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  RestrictedFeature              (CPF_Parm)

void UOnlineSubsystemSteamworks::RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, unsigned char RestrictedFeature)
{
	static UFunction* pFnRequestRestrictedFeatureMessaging = nullptr;

	if (!pFnRequestRestrictedFeatureMessaging)
	{
		pFnRequestRestrictedFeatureMessaging = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging");

	}

	UOnlineSubsystemSteamworks_execRequestRestrictedFeatureMessaging_Parms RequestRestrictedFeatureMessaging_Parms;
	RequestRestrictedFeatureMessaging_Parms.LocalUserNum = LocalUserNum;
	RequestRestrictedFeatureMessaging_Parms.RestrictedFeature = RestrictedFeature;

	this->ProcessEvent(pFnRequestRestrictedFeatureMessaging, &RequestRestrictedFeatureMessaging_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanUploadFitnessData(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanUploadFitnessData = nullptr;

	if (!pFnCanUploadFitnessData)
	{
		pFnCanUploadFitnessData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData");

	}

	UOnlineSubsystemSteamworks_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;
	CanUploadFitnessData_Parms.LocalUserNum = LocalUserNum;
	CanUploadFitnessData_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUploadFitnessData_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, nullptr);
	PrivilegeLevelHint = CanUploadFitnessData_Parms.PrivilegeLevelHint;

	return CanUploadFitnessData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareKinectContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShareKinectContent = nullptr;

	if (!pFnCanShareKinectContent)
	{
		pFnCanShareKinectContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent");

	}

	UOnlineSubsystemSteamworks_execCanShareKinectContent_Parms CanShareKinectContent_Parms;
	CanShareKinectContent_Parms.LocalUserNum = LocalUserNum;
	CanShareKinectContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareKinectContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShareKinectContent, &CanShareKinectContent_Parms, nullptr);
	PrivilegeLevelHint = CanShareKinectContent_Parms.PrivilegeLevelHint;

	return CanShareKinectContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShareWithSocialNetwork = nullptr;

	if (!pFnCanShareWithSocialNetwork)
	{
		pFnCanShareWithSocialNetwork = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork");

	}

	UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;
	CanShareWithSocialNetwork_Parms.LocalUserNum = LocalUserNum;
	CanShareWithSocialNetwork_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareWithSocialNetwork_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, nullptr);
	PrivilegeLevelHint = CanShareWithSocialNetwork_Parms.PrivilegeLevelHint;

	return CanShareWithSocialNetwork_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanBrowseInternet(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanBrowseInternet = nullptr;

	if (!pFnCanBrowseInternet)
	{
		pFnCanBrowseInternet = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet");

	}

	UOnlineSubsystemSteamworks_execCanBrowseInternet_Parms CanBrowseInternet_Parms;
	CanBrowseInternet_Parms.LocalUserNum = LocalUserNum;
	CanBrowseInternet_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanBrowseInternet_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanBrowseInternet, &CanBrowseInternet_Parms, nullptr);
	PrivilegeLevelHint = CanBrowseInternet_Parms.PrivilegeLevelHint;

	return CanBrowseInternet_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanAccessPremiumVideoContent = nullptr;

	if (!pFnCanAccessPremiumVideoContent)
	{
		pFnCanAccessPremiumVideoContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent");

	}

	UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;
	CanAccessPremiumVideoContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumVideoContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumVideoContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, nullptr);
	PrivilegeLevelHint = CanAccessPremiumVideoContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumVideoContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanAccessPremiumContent = nullptr;

	if (!pFnCanAccessPremiumContent)
	{
		pFnCanAccessPremiumContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent");

	}

	UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;
	CanAccessPremiumContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, nullptr);
	PrivilegeLevelHint = CanAccessPremiumContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanUseCloudStorage(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanUseCloudStorage = nullptr;

	if (!pFnCanUseCloudStorage)
	{
		pFnCanUseCloudStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage");

	}

	UOnlineSubsystemSteamworks_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;
	CanUseCloudStorage_Parms.LocalUserNum = LocalUserNum;
	CanUseCloudStorage_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUseCloudStorage_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, nullptr);
	PrivilegeLevelHint = CanUseCloudStorage_Parms.PrivilegeLevelHint;

	return CanUseCloudStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanRecordDVRClips(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanRecordDVRClips = nullptr;

	if (!pFnCanRecordDVRClips)
	{
		pFnCanRecordDVRClips = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips");

	}

	UOnlineSubsystemSteamworks_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;
	CanRecordDVRClips_Parms.LocalUserNum = LocalUserNum;
	CanRecordDVRClips_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanRecordDVRClips_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, nullptr);
	PrivilegeLevelHint = CanRecordDVRClips_Parms.PrivilegeLevelHint;

	return CanRecordDVRClips_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShowPresenceInformation = nullptr;

	if (!pFnCanShowPresenceInformation)
	{
		pFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");

	}

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;
	CanShowPresenceInformation_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShowPresenceInformation_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, nullptr);
	PrivilegeLevelHint = CanShowPresenceInformation_Parms.PrivilegeLevelHint;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanViewPlayerProfiles = nullptr;

	if (!pFnCanViewPlayerProfiles)
	{
		pFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");

	}

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;
	CanViewPlayerProfiles_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanViewPlayerProfiles_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, nullptr);
	PrivilegeLevelHint = CanViewPlayerProfiles_Parms.PrivilegeLevelHint;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanPurchaseContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanPurchaseContent = nullptr;

	if (!pFnCanPurchaseContent)
	{
		pFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");

	}

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;
	CanPurchaseContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPurchaseContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanPurchaseContent, &CanPurchaseContent_Parms, nullptr);
	PrivilegeLevelHint = CanPurchaseContent_Parms.PrivilegeLevelHint;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanDownloadUserContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanDownloadUserContent = nullptr;

	if (!pFnCanDownloadUserContent)
	{
		pFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");

	}

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;
	CanDownloadUserContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanDownloadUserContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, nullptr);
	PrivilegeLevelHint = CanDownloadUserContent_Parms.PrivilegeLevelHint;

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanShareUserCreatedContent = nullptr;

	if (!pFnCanShareUserCreatedContent)
	{
		pFnCanShareUserCreatedContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent");

	}

	UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;
	CanShareUserCreatedContent_Parms.LocalUserNum = LocalUserNum;
	CanShareUserCreatedContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareUserCreatedContent_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, nullptr);
	PrivilegeLevelHint = CanShareUserCreatedContent_Parms.PrivilegeLevelHint;

	return CanShareUserCreatedContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVoice(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanCommunicateVoice = nullptr;

	if (!pFnCanCommunicateVoice)
	{
		pFnCanCommunicateVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice");

	}

	UOnlineSubsystemSteamworks_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVoice_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVoice_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, nullptr);
	PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVideo(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanCommunicateVideo = nullptr;

	if (!pFnCanCommunicateVideo)
	{
		pFnCanCommunicateVideo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo");

	}

	UOnlineSubsystemSteamworks_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;
	CanCommunicateVideo_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVideo_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVideo_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, nullptr);
	PrivilegeLevelHint = CanCommunicateVideo_Parms.PrivilegeLevelHint;

	return CanCommunicateVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateText(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanCommunicateText = nullptr;

	if (!pFnCanCommunicateText)
	{
		pFnCanCommunicateText = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText");

	}

	UOnlineSubsystemSteamworks_execCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateText_Parms.Reason, 0x10, &Reason, 0x10);

	this->ProcessEvent(pFnCanCommunicateText, &CanCommunicateText_Parms, nullptr);
	PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00034401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  CommMethod                     (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)

unsigned char UOnlineSubsystemSteamworks::CanCommunicate(unsigned char LocalUserNum, unsigned char CommMethod, unsigned long bAttemptToResolve)
{
	static UFunction* pFnCanCommunicate = nullptr;

	if (!pFnCanCommunicate)
	{
		pFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");

	}

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;
	CanCommunicate_Parms.CommMethod = CommMethod;
	CanCommunicate_Parms.bAttemptToResolve = bAttemptToResolve;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCanCommunicate, &CanCommunicate_Parms, nullptr);

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned char                  PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanPlayOnline(unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char& PrivilegeLevelHint)
{
	static UFunction* pFnCanPlayOnline = nullptr;

	if (!pFnCanPlayOnline)
	{
		pFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");

	}

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;
	CanPlayOnline_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPlayOnline_Parms.Reason, 0x10, &Reason, 0x10);

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCanPlayOnline, &CanPlayOnline_Parms, nullptr);

	pFnCanPlayOnline->FunctionFlags |= 0x400;
	PrivilegeLevelHint = CanPlayOnline_Parms.PrivilegeLevelHint;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerNickname = nullptr;

	if (!pFnGetPlayerNickname)
	{
		pFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");

	}

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerNickname, &GetPlayerNickname_Parms, nullptr);

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00430003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* pFnGetUniquePlayerId = nullptr;

	if (!pFnGetUniquePlayerId)
	{
		pFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");

	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, nullptr);
	memcpy_s(&GetUniquePlayerId_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(unsigned char LocalUserNum)
{
	static UFunction* pFnIsGuestLogin = nullptr;

	if (!pFnIsGuestLogin)
	{
		pFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");

	}

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnIsGuestLogin, &IsGuestLogin_Parms, nullptr);

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00030401] (FUNC_Final | FUNC_Native | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus(unsigned char LocalUserNum)
{
	static UFunction* pFnGetLoginStatus = nullptr;

	if (!pFnGetLoginStatus)
	{
		pFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");

	}

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLoginStatus, &GetLoginStatus_Parms, nullptr);

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* pFnClearLogoutCompletedDelegate = nullptr;

	if (!pFnClearLogoutCompletedDelegate)
	{
		pFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearLogoutCompletedDelegate_Parms.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* pFnAddLogoutCompletedDelegate = nullptr;

	if (!pFnAddLogoutCompletedDelegate)
	{
		pFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddLogoutCompletedDelegate_Parms.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnLogoutCompleted = nullptr;

	if (!pFnOnLogoutCompleted)
	{
		pFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");

	}

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::Logout(unsigned char LocalUserNum)
{
	static UFunction* pFnLogout = nullptr;

	if (!pFnLogout)
	{
		pFnLogout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");

	}

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnLogout, &Logout_Parms, nullptr);

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* pFnClearLoginFailedDelegate = nullptr;

	if (!pFnClearLoginFailedDelegate)
	{
		pFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");

	}

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&ClearLoginFailedDelegate_Parms.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	this->ProcessEvent(pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00030003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* pFnAddLoginFailedDelegate = nullptr;

	if (!pFnAddLoginFailedDelegate)
	{
		pFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");

	}

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&AddLoginFailedDelegate_Parms.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	this->ProcessEvent(pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned char                  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode)
{
	static UFunction* pFnOnLoginFailed = nullptr;

	if (!pFnOnLoginFailed)
	{
		pFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");

	}

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent(pFnOnLoginFailed, &OnLoginFailed_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* pFnAutoLogin = nullptr;

	if (!pFnAutoLogin)
	{
		pFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");

	}

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAutoLogin, &AutoLogin_Parms, nullptr);

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00034401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::Login(unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly)
{
	static UFunction* pFnLogin = nullptr;

	if (!pFnLogin)
	{
		pFnLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");

	}

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy_s(&Login_Parms.LoginName, 0x10, &LoginName, 0x10);
	memcpy_s(&Login_Parms.Password, 0x10, &Password, 0x10);
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogin, &Login_Parms, nullptr);

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Active                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPlayerDialogActive(unsigned long Active)
{
	static UFunction* pFnSetKickPlayerDialogActive = nullptr;

	if (!pFnSetKickPlayerDialogActive)
	{
		pFnSetKickPlayerDialogActive = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive");

	}

	UOnlineSubsystemSteamworks_execSetKickPlayerDialogActive_Parms SetKickPlayerDialogActive_Parms;
	SetKickPlayerDialogActive_Parms.Active = Active;

	this->ProcessEvent(pFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsUserSwitchActive()
{
	static UFunction* pFnIsUserSwitchActive = nullptr;

	if (!pFnIsUserSwitchActive)
	{
		pFnIsUserSwitchActive = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive");

	}

	UOnlineSubsystemSteamworks_execIsUserSwitchActive_Parms IsUserSwitchActive_Parms;

	this->ProcessEvent(pFnIsUserSwitchActive, &IsUserSwitchActive_Parms, nullptr);

	return IsUserSwitchActive_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPreviousUser(unsigned char LocalUserNum)
{
	static UFunction* pFnSetKickPreviousUser = nullptr;

	if (!pFnSetKickPreviousUser)
	{
		pFnSetKickPreviousUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser");

	}

	UOnlineSubsystemSteamworks_execSetKickPreviousUser_Parms SetKickPreviousUser_Parms;
	SetKickPreviousUser_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnSetKickPreviousUser, &SetKickPreviousUser_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SupportInGameLogin()
{
	static UFunction* pFnSupportInGameLogin = nullptr;

	if (!pFnSupportInGameLogin)
	{
		pFnSupportInGameLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin");

	}

	UOnlineSubsystemSteamworks_execSupportInGameLogin_Parms SupportInGameLogin_Parms;

	this->ProcessEvent(pFnSupportInGameLogin, &SupportInGameLogin_Parms, nullptr);

	return SupportInGameLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowControllerUI()
{
	static UFunction* pFnShowControllerUI = nullptr;

	if (!pFnShowControllerUI)
	{
		pFnShowControllerUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI");

	}

	UOnlineSubsystemSteamworks_execShowControllerUI_Parms ShowControllerUI_Parms;

	this->ProcessEvent(pFnShowControllerUI, &ShowControllerUI_Parms, nullptr);

	return ShowControllerUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUIForOrphanedUser(unsigned char LocalUserNum)
{
	static UFunction* pFnShowLoginUIForOrphanedUser = nullptr;

	if (!pFnShowLoginUIForOrphanedUser)
	{
		pFnShowLoginUIForOrphanedUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser");

	}

	UOnlineSubsystemSteamworks_execShowLoginUIForOrphanedUser_Parms ShowLoginUIForOrphanedUser_Parms;
	ShowLoginUIForOrphanedUser_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Parms, nullptr);

	return ShowLoginUIForOrphanedUser_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// unsigned long                  bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(unsigned char LocalUserNum, unsigned long bShowOnlineOnly)
{
	static UFunction* pFnShowLoginUI = nullptr;

	if (!pFnShowLoginUI)
	{
		pFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");

	}

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.LocalUserNum = LocalUserNum;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent(pFnShowLoginUI, &ShowLoginUI_Parms, nullptr);

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnAvatarChange(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnOnAvatarChange = nullptr;

	if (!pFnOnAvatarChange)
	{
		pFnOnAvatarChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange");

	}

	UOnlineSubsystemSteamworks_execOnAvatarChange_Parms OnAvatarChange_Parms;
	memcpy_s(&OnAvatarChange_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnOnAvatarChange, &OnAvatarChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FriendPresenceChange(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnFriendPresenceChange = nullptr;

	if (!pFnFriendPresenceChange)
	{
		pFnFriendPresenceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange");

	}

	UOnlineSubsystemSteamworks_execFriendPresenceChange_Parms FriendPresenceChange_Parms;
	memcpy_s(&FriendPresenceChange_Parms.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(pFnFriendPresenceChange, &FriendPresenceChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* pFnOnFriendsChange = nullptr;

	if (!pFnOnFriendsChange)
	{
		pFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");

	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent(pFnOnFriendsChange, &OnFriendsChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* pFnOnMutingChange = nullptr;

	if (!pFnOnMutingChange)
	{
		pFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");

	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent(pFnOnMutingChange, &OnMutingChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* pFnOnLoginCancelled = nullptr;

	if (!pFnOnLoginCancelled)
	{
		pFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");

	}

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent(pFnOnLoginCancelled, &OnLoginCancelled_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(unsigned char LocalUserNum)
{
	static UFunction* pFnOnLoginChange = nullptr;

	if (!pFnOnLoginChange)
	{
		pFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");

	}

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnLoginChange, &OnLoginChange_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSignInComplete(unsigned char LocalUserNum)
{
	static UFunction* pFnOnUserSignInComplete = nullptr;

	if (!pFnOnUserSignInComplete)
	{
		pFnOnUserSignInComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete");

	}

	UOnlineSubsystemSteamworks_execOnUserSignInComplete_Parms OnUserSignInComplete_Parms;
	OnUserSignInComplete_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnUserSignInComplete, &OnUserSignInComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSwitchComplete(unsigned char LocalUserNum)
{
	static UFunction* pFnOnUserSwitchComplete = nullptr;

	if (!pFnOnUserSwitchComplete)
	{
		pFnOnUserSwitchComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete");

	}

	UOnlineSubsystemSteamworks_execOnUserSwitchComplete_Parms OnUserSwitchComplete_Parms;
	OnUserSwitchComplete_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnUserSwitchComplete, &OnUserSwitchComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* pFnExit = nullptr;

	if (!pFnExit)
	{
		pFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");

	}

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	unsigned short NativeIndex = pFnExit->iNative;
	pFnExit->iNative = 0;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnExit, &Exit_Parms, nullptr);

	pFnExit->FunctionFlags |= 0x400;

	pFnExit->iNative = NativeIndex;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit
// [0x00030802] (FUNC_RequiredAPI | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventPostInit()
{
	static UFunction* pFnPostInit = nullptr;

	if (!pFnPostInit)
	{
		pFnPostInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit");

	}

	UOnlineSubsystemSteamworks_eventPostInit_Parms PostInit_Parms;

	this->ProcessEvent(pFnPostInit, &PostInit_Parms, nullptr);

	return PostInit_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00030C00] (FUNC_Native | FUNC_Event | FUNC_MulticastDelegate | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");

	}

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	unsigned short NativeIndex = pFnInit->iNative;
	pFnInit->iNative = 0;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);

	pFnInit->FunctionFlags |= 0x400;

	pFnInit->iNative = NativeIndex;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::CanPlayOnlineChanged(unsigned char LocalUserNum)
{
	static UFunction* pFnCanPlayOnlineChanged = nullptr;

	if (!pFnCanPlayOnlineChanged)
	{
		pFnCanPlayOnlineChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged");

	}

	UOnlineSubsystemSteamworks_execCanPlayOnlineChanged_Parms CanPlayOnlineChanged_Parms;
	CanPlayOnlineChanged_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* pFnClearMicroTxnResponseDelegate = nullptr;

	if (!pFnClearMicroTxnResponseDelegate)
	{
		pFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate");

	}

	UOnlinePurchaseInterfaceSteamworks_execClearMicroTxnResponseDelegate_Parms ClearMicroTxnResponseDelegate_Parms;
	memcpy_s(&ClearMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(pFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* pFnAddMicroTxnResponseDelegate = nullptr;

	if (!pFnAddMicroTxnResponseDelegate)
	{
		pFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate");

	}

	UOnlinePurchaseInterfaceSteamworks_execAddMicroTxnResponseDelegate_Parms AddMicroTxnResponseDelegate_Parms;
	memcpy_s(&AddMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(pFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int                            Price                          (CPF_Parm)

struct FString UOnlinePurchaseInterfaceSteamworks::FormatCurrency(struct FString Currency, int Price)
{
	static UFunction* pFnFormatCurrency = nullptr;

	if (!pFnFormatCurrency)
	{
		pFnFormatCurrency = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency");

	}

	UOnlinePurchaseInterfaceSteamworks_execFormatCurrency_Parms FormatCurrency_Parms;
	memcpy_s(&FormatCurrency_Parms.Currency, 0x10, &Currency, 0x10);
	memcpy_s(&FormatCurrency_Parms.Price, 0x4, &Price, 0x4);

	this->ProcessEvent(pFnFormatCurrency, &FormatCurrency_Parms, nullptr);

	return FormatCurrency_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
// [0x00850003] (FUNC_Final | FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlinePurchaseInterfaceSteamworks::HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnHandleGetAppPriceInfoComplete = nullptr;

	if (!pFnHandleGetAppPriceInfoComplete)
	{
		pFnHandleGetAppPriceInfoComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete");

	}

	UOnlinePurchaseInterfaceSteamworks_execHandleGetAppPriceInfoComplete_Parms HandleGetAppPriceInfoComplete_Parms;
	memcpy_s(&HandleGetAppPriceInfoComplete_Parms.Request, 0x8, &Request, 0x8);
	memcpy_s(&HandleGetAppPriceInfoComplete_Parms.Response, 0x8, &Response, 0x8);
	HandleGetAppPriceInfoComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnHandleGetAppPriceInfoComplete, &HandleGetAppPriceInfoComplete_Parms, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
// [0x00C30002] (FUNC_RequiredAPI | FUNC_MulticastDelegate | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceSteamworks::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* pFnGetAppPriceInfo = nullptr;

	if (!pFnGetAppPriceInfo)
	{
		pFnGetAppPriceInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo");

	}

	UOnlinePurchaseInterfaceSteamworks_execGetAppPriceInfo_Parms GetAppPriceInfo_Parms;
	memcpy_s(&GetAppPriceInfo_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnGetAppPriceInfo, &GetAppPriceInfo_Parms, nullptr);
	memcpy_s(&GetAppPriceInfo_Parms.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAppPriceInfo_Parms.AppNames, 0x10, &AppNames, 0x10);

	return GetAppPriceInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 AppID                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bOptional                      (CPF_OptionalParm | CPF_Parm)
// struct FName                   AppName                        (CPF_Parm | CPF_OutParm)

bool UOnlinePurchaseInterfaceSteamworks::AppIdToName(struct FString AppID, unsigned long bOptional, struct FName& AppName)
{
	static UFunction* pFnAppIdToName = nullptr;

	if (!pFnAppIdToName)
	{
		pFnAppIdToName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName");

	}

	UOnlinePurchaseInterfaceSteamworks_execAppIdToName_Parms AppIdToName_Parms;
	memcpy_s(&AppIdToName_Parms.AppID, 0x10, &AppID, 0x10);
	AppIdToName_Parms.bOptional = bOptional;

	this->ProcessEvent(pFnAppIdToName, &AppIdToName_Parms, nullptr);
	memcpy_s(&AppIdToName_Parms.AppName, 0x8, &AppName, 0x8);

	return AppIdToName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)
// unsigned long                  bOptional                      (CPF_OptionalParm | CPF_Parm)
// struct FString                 AppID                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceSteamworks::AppNameToId(struct FName AppName, unsigned long bOptional, struct FString& AppID)
{
	static UFunction* pFnAppNameToId = nullptr;

	if (!pFnAppNameToId)
	{
		pFnAppNameToId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId");

	}

	UOnlinePurchaseInterfaceSteamworks_execAppNameToId_Parms AppNameToId_Parms;
	memcpy_s(&AppNameToId_Parms.AppName, 0x8, &AppName, 0x8);
	AppNameToId_Parms.bOptional = bOptional;

	this->ProcessEvent(pFnAppNameToId, &AppNameToId_Parms, nullptr);
	memcpy_s(&AppNameToId_Parms.AppID, 0x10, &AppID, 0x10);

	return AppNameToId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool USteamWorkshopCommandlet::eventInit()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init");

	}

	USteamWorkshopCommandlet_eventInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);

	return Init_Parms.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
