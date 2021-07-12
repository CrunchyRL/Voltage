/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: WinDrv_classes.cpp
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

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnOnFacebookFriendsRequestComplete = nullptr;

	if (!pFnOnFacebookFriendsRequestComplete)
	{
		pFnOnFacebookFriendsRequestComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_ONFACEBOOKFRIENDSREQUESTCOMPLETE));
	}

	UFacebookWindows_execOnFacebookFriendsRequestComplete_Parms OnFacebookFriendsRequestComplete_Parms;
	memcpy_s(&OnFacebookFriendsRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnFacebookFriendsRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnFacebookFriendsRequestComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnOnFacebookFriendsRequestComplete, &OnFacebookFriendsRequestComplete_Parms, nullptr);
};

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UFacebookWindows::eventRequestFacebookFriends()
{
	static UFunction* pFnRequestFacebookFriends = nullptr;

	if (!pFnRequestFacebookFriends)
	{
		pFnRequestFacebookFriends = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_REQUESTFACEBOOKFRIENDS));
	}

	UFacebookWindows_eventRequestFacebookFriends_Parms RequestFacebookFriends_Parms;

	this->ProcessEvent(pFnRequestFacebookFriends, &RequestFacebookFriends_Parms, nullptr);
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnOnFacebookMeRequestComplete = nullptr;

	if (!pFnOnFacebookMeRequestComplete)
	{
		pFnOnFacebookMeRequestComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_ONFACEBOOKMEREQUESTCOMPLETE));
	}

	UFacebookWindows_execOnFacebookMeRequestComplete_Parms OnFacebookMeRequestComplete_Parms;
	memcpy_s(&OnFacebookMeRequestComplete_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnFacebookMeRequestComplete_Parms.Response, 0x8, &Response, 0x8);
	OnFacebookMeRequestComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnOnFacebookMeRequestComplete, &OnFacebookMeRequestComplete_Parms, nullptr);
};

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UFacebookWindows::eventRequestFacebookMeInfo()
{
	static UFunction* pFnRequestFacebookMeInfo = nullptr;

	if (!pFnRequestFacebookMeInfo)
	{
		pFnRequestFacebookMeInfo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_REQUESTFACEBOOKMEINFO));
	}

	UFacebookWindows_eventRequestFacebookMeInfo_Parms RequestFacebookMeInfo_Parms;

	this->ProcessEvent(pFnRequestFacebookMeInfo, &RequestFacebookMeInfo_Parms, nullptr);
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UFacebookWindows::FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* pFnFacebookRequestCallback = nullptr;

	if (!pFnFacebookRequestCallback)
	{
		pFnFacebookRequestCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_FACEBOOKREQUESTCALLBACK));
	}

	UFacebookWindows_execFacebookRequestCallback_Parms FacebookRequestCallback_Parms;
	memcpy_s(&FacebookRequestCallback_Parms.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&FacebookRequestCallback_Parms.Response, 0x8, &Response, 0x8);
	FacebookRequestCallback_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent(pFnFacebookRequestCallback, &FacebookRequestCallback_Parms, nullptr);
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Payload                        (CPF_Parm | CPF_NeedCtorLink)
// int                            ResponseCode                   (CPF_Parm)

void UFacebookWindows::ProcessFacebookRequest(struct FString Payload, int ResponseCode)
{
	static UFunction* pFnProcessFacebookRequest = nullptr;

	if (!pFnProcessFacebookRequest)
	{
		pFnProcessFacebookRequest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_PROCESSFACEBOOKREQUEST));
	}

	UFacebookWindows_execProcessFacebookRequest_Parms ProcessFacebookRequest_Parms;
	memcpy_s(&ProcessFacebookRequest_Parms.Payload, 0x10, &Payload, 0x10);
	memcpy_s(&ProcessFacebookRequest_Parms.ResponseCode, 0x4, &ResponseCode, 0x4);

	pFnProcessFacebookRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProcessFacebookRequest, &ProcessFacebookRequest_Parms, nullptr);

	pFnProcessFacebookRequest->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 GraphRequest                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 HTTPMethod                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         ParamKeysAndValues             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UFacebookWindows::FacebookRequest(struct FString GraphRequest, struct FString HTTPMethod, TArray<struct FString> ParamKeysAndValues)
{
	static UFunction* pFnFacebookRequest = nullptr;

	if (!pFnFacebookRequest)
	{
		pFnFacebookRequest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_FACEBOOKREQUEST));
	}

	UFacebookWindows_execFacebookRequest_Parms FacebookRequest_Parms;
	memcpy_s(&FacebookRequest_Parms.GraphRequest, 0x10, &GraphRequest, 0x10);
	memcpy_s(&FacebookRequest_Parms.HTTPMethod, 0x10, &HTTPMethod, 0x10);
	memcpy_s(&FacebookRequest_Parms.ParamKeysAndValues, 0x10, &ParamKeysAndValues, 0x10);

	this->ProcessEvent(pFnFacebookRequest, &FacebookRequest_Parms, nullptr);
};

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:

void UFacebookWindows::Disconnect()
{
	static UFunction* pFnDisconnect = nullptr;

	if (!pFnDisconnect)
	{
		pFnDisconnect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_DISCONNECT));
	}

	UFacebookWindows_execDisconnect_Parms Disconnect_Parms;

	unsigned short NativeIndex = pFnDisconnect->iNative;
	pFnDisconnect->iNative = 0;

	pFnDisconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDisconnect, &Disconnect_Parms, nullptr);

	pFnDisconnect->FunctionFlags |= 0x400;

	pFnDisconnect->iNative = NativeIndex;
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::IsAuthorized()
{
	static UFunction* pFnIsAuthorized = nullptr;

	if (!pFnIsAuthorized)
	{
		pFnIsAuthorized = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_ISAUTHORIZED));
	}

	UFacebookWindows_execIsAuthorized_Parms IsAuthorized_Parms;

	unsigned short NativeIndex = pFnIsAuthorized->iNative;
	pFnIsAuthorized->iNative = 0;

	pFnIsAuthorized->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsAuthorized, &IsAuthorized_Parms, nullptr);

	pFnIsAuthorized->FunctionFlags |= 0x400;

	pFnIsAuthorized->iNative = NativeIndex;

	return IsAuthorized_Parms.ReturnValue;
};

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::Authorize()
{
	static UFunction* pFnAuthorize = nullptr;

	if (!pFnAuthorize)
	{
		pFnAuthorize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_AUTHORIZE));
	}

	UFacebookWindows_execAuthorize_Parms Authorize_Parms;

	unsigned short NativeIndex = pFnAuthorize->iNative;
	pFnAuthorize->iNative = 0;

	pFnAuthorize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAuthorize, &Authorize_Parms, nullptr);

	pFnAuthorize->FunctionFlags |= 0x400;

	pFnAuthorize->iNative = NativeIndex;

	return Authorize_Parms.ReturnValue;
};

// Function WinDrv.FacebookWindows.Init
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::Init()
{
	static UFunction* pFnInit = nullptr;

	if (!pFnInit)
	{
		pFnInit = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_FACEBOOKWINDOWS_INIT));
	}

	UFacebookWindows_execInit_Parms Init_Parms;

	unsigned short NativeIndex = pFnInit->iNative;
	pFnInit->iNative = 0;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInit, &Init_Parms, nullptr);

	pFnInit->FunctionFlags |= 0x400;

	pFnInit->iNative = NativeIndex;

	return Init_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestWindows::ProcessRequest()
{
	static UFunction* pFnProcessRequest = nullptr;

	if (!pFnProcessRequest)
	{
		pFnProcessRequest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_PROCESSREQUEST));
	}

	UHttpRequestWindows_execProcessRequest_Parms ProcessRequest_Parms;

	unsigned short NativeIndex = pFnProcessRequest->iNative;
	pFnProcessRequest->iNative = 0;

	pFnProcessRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProcessRequest, &ProcessRequest_Parms, nullptr);

	pFnProcessRequest->FunctionFlags |= 0x400;

	pFnProcessRequest->iNative = NativeIndex;

	return ProcessRequest_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 HeaderValue                    (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetHeader(struct FString HeaderName, struct FString HeaderValue)
{
	static UFunction* pFnSetHeader = nullptr;

	if (!pFnSetHeader)
	{
		pFnSetHeader = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_SETHEADER));
	}

	UHttpRequestWindows_execSetHeader_Parms SetHeader_Parms;
	memcpy_s(&SetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);
	memcpy_s(&SetHeader_Parms.HeaderValue, 0x10, &HeaderValue, 0x10);

	unsigned short NativeIndex = pFnSetHeader->iNative;
	pFnSetHeader->iNative = 0;

	pFnSetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetHeader, &SetHeader_Parms, nullptr);

	pFnSetHeader->FunctionFlags |= 0x400;

	pFnSetHeader->iNative = NativeIndex;

	return SetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ContentString                  (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString(struct FString ContentString)
{
	static UFunction* pFnSetContentAsString = nullptr;

	if (!pFnSetContentAsString)
	{
		pFnSetContentAsString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_SETCONTENTASSTRING));
	}

	UHttpRequestWindows_execSetContentAsString_Parms SetContentAsString_Parms;
	memcpy_s(&SetContentAsString_Parms.ContentString, 0x10, &ContentString, 0x10);

	unsigned short NativeIndex = pFnSetContentAsString->iNative;
	pFnSetContentAsString->iNative = 0;

	pFnSetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetContentAsString, &SetContentAsString_Parms, nullptr);

	pFnSetContentAsString->FunctionFlags |= 0x400;

	pFnSetContentAsString->iNative = NativeIndex;

	return SetContentAsString_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<unsigned char>          ContentPayload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetContent(TArray<unsigned char>& ContentPayload)
{
	static UFunction* pFnSetContent = nullptr;

	if (!pFnSetContent)
	{
		pFnSetContent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_SETCONTENT));
	}

	UHttpRequestWindows_execSetContent_Parms SetContent_Parms;

	unsigned short NativeIndex = pFnSetContent->iNative;
	pFnSetContent->iNative = 0;

	pFnSetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetContent, &SetContent_Parms, nullptr);

	pFnSetContent->FunctionFlags |= 0x400;

	pFnSetContent->iNative = NativeIndex;
	memcpy_s(&SetContent_Parms.ContentPayload, 0x10, &ContentPayload, 0x10);

	return SetContent_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 URL                            (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetURL(struct FString URL)
{
	static UFunction* pFnSetURL = nullptr;

	if (!pFnSetURL)
	{
		pFnSetURL = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_SETURL));
	}

	UHttpRequestWindows_execSetURL_Parms SetURL_Parms;
	memcpy_s(&SetURL_Parms.URL, 0x10, &URL, 0x10);

	unsigned short NativeIndex = pFnSetURL->iNative;
	pFnSetURL->iNative = 0;

	pFnSetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetURL, &SetURL_Parms, nullptr);

	pFnSetURL->FunctionFlags |= 0x400;

	pFnSetURL->iNative = NativeIndex;

	return SetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Verb                           (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetVerb(struct FString Verb)
{
	static UFunction* pFnSetVerb = nullptr;

	if (!pFnSetVerb)
	{
		pFnSetVerb = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_SETVERB));
	}

	UHttpRequestWindows_execSetVerb_Parms SetVerb_Parms;
	memcpy_s(&SetVerb_Parms.Verb, 0x10, &Verb, 0x10);

	unsigned short NativeIndex = pFnSetVerb->iNative;
	pFnSetVerb->iNative = 0;

	pFnSetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVerb, &SetVerb_Parms, nullptr);

	pFnSetVerb->FunctionFlags |= 0x400;

	pFnSetVerb->iNative = NativeIndex;

	return SetVerb_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetVerb()
{
	static UFunction* pFnGetVerb = nullptr;

	if (!pFnGetVerb)
	{
		pFnGetVerb = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETVERB));
	}

	UHttpRequestWindows_execGetVerb_Parms GetVerb_Parms;

	unsigned short NativeIndex = pFnGetVerb->iNative;
	pFnGetVerb->iNative = 0;

	pFnGetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVerb, &GetVerb_Parms, nullptr);

	pFnGetVerb->FunctionFlags |= 0x400;

	pFnGetVerb->iNative = NativeIndex;

	return GetVerb_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<unsigned char>          Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpRequestWindows::GetContent(TArray<unsigned char>& Content)
{
	static UFunction* pFnGetContent = nullptr;

	if (!pFnGetContent)
	{
		pFnGetContent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETCONTENT));
	}

	UHttpRequestWindows_execGetContent_Parms GetContent_Parms;

	unsigned short NativeIndex = pFnGetContent->iNative;
	pFnGetContent->iNative = 0;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContent, &GetContent_Parms, nullptr);

	pFnGetContent->FunctionFlags |= 0x400;

	pFnGetContent->iNative = NativeIndex;
	memcpy_s(&GetContent_Parms.Content, 0x10, &Content, 0x10);
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetURL()
{
	static UFunction* pFnGetURL = nullptr;

	if (!pFnGetURL)
	{
		pFnGetURL = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETURL));
	}

	UHttpRequestWindows_execGetURL_Parms GetURL_Parms;

	unsigned short NativeIndex = pFnGetURL->iNative;
	pFnGetURL->iNative = 0;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURL, &GetURL_Parms, nullptr);

	pFnGetURL->FunctionFlags |= 0x400;

	pFnGetURL->iNative = NativeIndex;

	return GetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UHttpRequestWindows::GetContentLength()
{
	static UFunction* pFnGetContentLength = nullptr;

	if (!pFnGetContentLength)
	{
		pFnGetContentLength = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETCONTENTLENGTH));
	}

	UHttpRequestWindows_execGetContentLength_Parms GetContentLength_Parms;

	unsigned short NativeIndex = pFnGetContentLength->iNative;
	pFnGetContentLength->iNative = 0;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentLength, &GetContentLength_Parms, nullptr);

	pFnGetContentLength->FunctionFlags |= 0x400;

	pFnGetContentLength->iNative = NativeIndex;

	return GetContentLength_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetContentType()
{
	static UFunction* pFnGetContentType = nullptr;

	if (!pFnGetContentType)
	{
		pFnGetContentType = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETCONTENTTYPE));
	}

	UHttpRequestWindows_execGetContentType_Parms GetContentType_Parms;

	unsigned short NativeIndex = pFnGetContentType->iNative;
	pFnGetContentType->iNative = 0;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentType, &GetContentType_Parms, nullptr);

	pFnGetContentType->FunctionFlags |= 0x400;

	pFnGetContentType->iNative = NativeIndex;

	return GetContentType_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetURLParameter(struct FString ParameterName)
{
	static UFunction* pFnGetURLParameter = nullptr;

	if (!pFnGetURLParameter)
	{
		pFnGetURLParameter = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETURLPARAMETER));
	}

	UHttpRequestWindows_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy_s(&GetURLParameter_Parms.ParameterName, 0x10, &ParameterName, 0x10);

	unsigned short NativeIndex = pFnGetURLParameter->iNative;
	pFnGetURLParameter->iNative = 0;

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURLParameter, &GetURLParameter_Parms, nullptr);

	pFnGetURLParameter->FunctionFlags |= 0x400;

	pFnGetURLParameter->iNative = NativeIndex;

	return GetURLParameter_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FString> UHttpRequestWindows::GetHeaders()
{
	static UFunction* pFnGetHeaders = nullptr;

	if (!pFnGetHeaders)
	{
		pFnGetHeaders = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETHEADERS));
	}

	UHttpRequestWindows_execGetHeaders_Parms GetHeaders_Parms;

	unsigned short NativeIndex = pFnGetHeaders->iNative;
	pFnGetHeaders->iNative = 0;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeaders, &GetHeaders_Parms, nullptr);

	pFnGetHeaders->FunctionFlags |= 0x400;

	pFnGetHeaders->iNative = NativeIndex;

	return GetHeaders_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetHeader(struct FString HeaderName)
{
	static UFunction* pFnGetHeader = nullptr;

	if (!pFnGetHeader)
	{
		pFnGetHeader = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWS_GETHEADER));
	}

	UHttpRequestWindows_execGetHeader_Parms GetHeader_Parms;
	memcpy_s(&GetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);

	unsigned short NativeIndex = pFnGetHeader->iNative;
	pFnGetHeader->iNative = 0;

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeader, &GetHeader_Parms, nullptr);

	pFnGetHeader->FunctionFlags |= 0x400;

	pFnGetHeader->iNative = NativeIndex;

	return GetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UHttpResponseWindows::GetResponseCode()
{
	static UFunction* pFnGetResponseCode = nullptr;

	if (!pFnGetResponseCode)
	{
		pFnGetResponseCode = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETRESPONSECODE));
	}

	UHttpResponseWindows_execGetResponseCode_Parms GetResponseCode_Parms;

	unsigned short NativeIndex = pFnGetResponseCode->iNative;
	pFnGetResponseCode->iNative = 0;

	pFnGetResponseCode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResponseCode, &GetResponseCode_Parms, nullptr);

	pFnGetResponseCode->FunctionFlags |= 0x400;

	pFnGetResponseCode->iNative = NativeIndex;

	return GetResponseCode_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetContentAsString()
{
	static UFunction* pFnGetContentAsString = nullptr;

	if (!pFnGetContentAsString)
	{
		pFnGetContentAsString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETCONTENTASSTRING));
	}

	UHttpResponseWindows_execGetContentAsString_Parms GetContentAsString_Parms;

	unsigned short NativeIndex = pFnGetContentAsString->iNative;
	pFnGetContentAsString->iNative = 0;

	pFnGetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentAsString, &GetContentAsString_Parms, nullptr);

	pFnGetContentAsString->FunctionFlags |= 0x400;

	pFnGetContentAsString->iNative = NativeIndex;

	return GetContentAsString_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<unsigned char>          Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpResponseWindows::GetContent(TArray<unsigned char>& Content)
{
	static UFunction* pFnGetContent = nullptr;

	if (!pFnGetContent)
	{
		pFnGetContent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETCONTENT));
	}

	UHttpResponseWindows_execGetContent_Parms GetContent_Parms;

	unsigned short NativeIndex = pFnGetContent->iNative;
	pFnGetContent->iNative = 0;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContent, &GetContent_Parms, nullptr);

	pFnGetContent->FunctionFlags |= 0x400;

	pFnGetContent->iNative = NativeIndex;
	memcpy_s(&GetContent_Parms.Content, 0x10, &Content, 0x10);
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetURL()
{
	static UFunction* pFnGetURL = nullptr;

	if (!pFnGetURL)
	{
		pFnGetURL = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETURL));
	}

	UHttpResponseWindows_execGetURL_Parms GetURL_Parms;

	unsigned short NativeIndex = pFnGetURL->iNative;
	pFnGetURL->iNative = 0;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURL, &GetURL_Parms, nullptr);

	pFnGetURL->FunctionFlags |= 0x400;

	pFnGetURL->iNative = NativeIndex;

	return GetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UHttpResponseWindows::GetContentLength()
{
	static UFunction* pFnGetContentLength = nullptr;

	if (!pFnGetContentLength)
	{
		pFnGetContentLength = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETCONTENTLENGTH));
	}

	UHttpResponseWindows_execGetContentLength_Parms GetContentLength_Parms;

	unsigned short NativeIndex = pFnGetContentLength->iNative;
	pFnGetContentLength->iNative = 0;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentLength, &GetContentLength_Parms, nullptr);

	pFnGetContentLength->FunctionFlags |= 0x400;

	pFnGetContentLength->iNative = NativeIndex;

	return GetContentLength_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetContentType()
{
	static UFunction* pFnGetContentType = nullptr;

	if (!pFnGetContentType)
	{
		pFnGetContentType = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETCONTENTTYPE));
	}

	UHttpResponseWindows_execGetContentType_Parms GetContentType_Parms;

	unsigned short NativeIndex = pFnGetContentType->iNative;
	pFnGetContentType->iNative = 0;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetContentType, &GetContentType_Parms, nullptr);

	pFnGetContentType->FunctionFlags |= 0x400;

	pFnGetContentType->iNative = NativeIndex;

	return GetContentType_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetURLParameter(struct FString ParameterName)
{
	static UFunction* pFnGetURLParameter = nullptr;

	if (!pFnGetURLParameter)
	{
		pFnGetURLParameter = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETURLPARAMETER));
	}

	UHttpResponseWindows_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy_s(&GetURLParameter_Parms.ParameterName, 0x10, &ParameterName, 0x10);

	unsigned short NativeIndex = pFnGetURLParameter->iNative;
	pFnGetURLParameter->iNative = 0;

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetURLParameter, &GetURLParameter_Parms, nullptr);

	pFnGetURLParameter->FunctionFlags |= 0x400;

	pFnGetURLParameter->iNative = NativeIndex;

	return GetURLParameter_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FString> UHttpResponseWindows::GetHeaders()
{
	static UFunction* pFnGetHeaders = nullptr;

	if (!pFnGetHeaders)
	{
		pFnGetHeaders = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETHEADERS));
	}

	UHttpResponseWindows_execGetHeaders_Parms GetHeaders_Parms;

	unsigned short NativeIndex = pFnGetHeaders->iNative;
	pFnGetHeaders->iNative = 0;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeaders, &GetHeaders_Parms, nullptr);

	pFnGetHeaders->FunctionFlags |= 0x400;

	pFnGetHeaders->iNative = NativeIndex;

	return GetHeaders_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) iNative [0x0004]
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetHeader(struct FString HeaderName)
{
	static UFunction* pFnGetHeader = nullptr;

	if (!pFnGetHeader)
	{
		pFnGetHeader = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPRESPONSEWINDOWS_GETHEADER));
	}

	UHttpResponseWindows_execGetHeader_Parms GetHeader_Parms;
	memcpy_s(&GetHeader_Parms.HeaderName, 0x10, &HeaderName, 0x10);

	unsigned short NativeIndex = pFnGetHeader->iNative;
	pFnGetHeader->iNative = 0;

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeader, &GetHeader_Parms, nullptr);

	pFnGetHeader->FunctionFlags |= 0x400;

	pFnGetHeader->iNative = NativeIndex;

	return GetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestWindowsMcp::ProcessRequest()
{
	static UFunction* pFnProcessRequest = nullptr;

	if (!pFnProcessRequest)
	{
		pFnProcessRequest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_WINDRV_HTTPREQUESTWINDOWSMCP_PROCESSREQUEST));
	}

	UHttpRequestWindowsMcp_execProcessRequest_Parms ProcessRequest_Parms;

	this->ProcessEvent(pFnProcessRequest, &ProcessRequest_Parms, nullptr);

	return ProcessRequest_Parms.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
