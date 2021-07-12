/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: WinDrv_classes.hpp
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0010 (0x00E8 - 0x00F8)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x00E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                                  		// 0x00F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_WINDRV_FACEBOOKWINDOWS));
		}

		return uClassPointer;
	};

	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void eventRequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void eventRequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void ProcessFacebookRequest(struct FString Payload, int ResponseCode);
	void FacebookRequest(struct FString GraphRequest, struct FString HTTPMethod, TArray<struct FString> ParamKeysAndValues);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};

// Class WinDrv.HttpRequestWindows
// 0x0030 (0x0078 - 0x00A8)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                          		// 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FString                                     RequestVerb;                                      		// 0x0080 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    RequestURL;                                       		// 0x0090 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<unsigned char>                              Payload;                                          		// 0x0098 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_WINDRV_HTTPREQUESTWINDOWS));
		}

		return uClassPointer;
	};

	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(struct FString HeaderName, struct FString HeaderValue);
	class UHttpRequestInterface* SetContentAsString(struct FString ContentString);
	class UHttpRequestInterface* SetContent(TArray<unsigned char>& ContentPayload);
	class UHttpRequestInterface* SetURL(struct FString URL);
	class UHttpRequestInterface* SetVerb(struct FString Verb);
	struct FString GetVerb();
	void GetContent(TArray<unsigned char>& Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(struct FString ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(struct FString HeaderName);
};

// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0060 - 0x0078)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                         		// 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<unsigned char>                              Payload;                                          		// 0x0068 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_WINDRV_HTTPRESPONSEWINDOWS));
		}

		return uClassPointer;
	};

	int GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<unsigned char>& Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(struct FString ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(struct FString HeaderName);
};

// Class WinDrv.WindowsClient
// 0x0348 (0x0078 - 0x03C0)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x200];                             		// 0x0078 (0x0200) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x0278 (0x0008) [0x0000000000004000] (CPF_Config)  
	unsigned char                                      UnknownData01[0x38];                              		// 0x0280 (0x0038) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x02B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned char                                      UnknownData02[0x104];                             		// 0x02BC (0x0104) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_WINDRV_WINDOWSCLIENT));
		}

		return uClassPointer;
	};

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0018 (0x0098 - 0x00B0)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x0098 (0x0018) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_WINDRV_XNAFORCEFEEDBACKMANAGER));
		}

		return uClassPointer;
	};

};

// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 (0x00A8 - 0x00C8)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                            		// 0x00A8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AppSecret;                                        		// 0x00B8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_WINDRV_HTTPREQUESTWINDOWSMCP));
		}

		return uClassPointer;
	};

	bool ProcessRequest();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
