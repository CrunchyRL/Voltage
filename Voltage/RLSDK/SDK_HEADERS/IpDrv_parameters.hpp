/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: IpDrv_parameters.h
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

// Function IpDrv.AdHocDelegates.EventAdHocDestroyed
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocDestroyed_Parms
{
};

// Function IpDrv.AdHocDelegates.EventAdHocFinalized
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocFinalized_Parms
{
};

// Function IpDrv.AdHocDelegates.EventStationDisconnected
// [0x00120001] 
struct UAdHocDelegates_execEventStationDisconnected_Parms
{
};

// Function IpDrv.AdHocDelegates.EventStationConnected
// [0x00120001] 
struct UAdHocDelegates_execEventStationConnected_Parms
{
};

// Function IpDrv.AdHocDelegates.EventBecomeStation
// [0x00120001] 
struct UAdHocDelegates_execEventBecomeStation_Parms
{
};

// Function IpDrv.AdHocDelegates.EventAccessPointCreated
// [0x00120001] 
struct UAdHocDelegates_execEventAccessPointCreated_Parms
{
};

// Function IpDrv.AdHocDelegates.EventAdHocInitialized
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocInitialized_Parms
{
};

// Function IpDrv.AdHocDelegates.EventAdHocError
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocError_Parms
{
	class UError*                                      Error;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged
// [0x00120001] 
struct UAdHocDelegates_execEventAdHocOnNetworkChanged_Parms
{
	TArray<struct FAdHocAccessPointInfo>               Ahapis;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        OutRegisteredPlayers;                             		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             PlayerIdx;                                        		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] 
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
// [0x00120000] 
struct UOnlineSubsystemCommonImpl_execOnPlayerCountryRetrieved_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Country;                                          		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
// [0x00120001] 
struct UOnlineSubsystemCommonImpl_execOnSanitizeStringComplete_Parms
{
	struct FWordFilterResult                           Result;                                           		// 0x0000 (0x0038) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.TriggerAvatarCallbacks
// [0x00040003] 
struct UAvatarDownloadComponent_execTriggerAvatarCallbacks_Parms
{
	class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadComponent.HandleOnlineImageDownloaded
// [0x00040003] 
struct UAvatarDownloadComponent_execHandleOnlineImageDownloaded_Parms
{
	struct FOnlineImageDownload                        ImageInfo;                                        		// 0x0000 (0x0040) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<class UAvatarDownload*>                  AvatarsWaitingOnThisImage;                        		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UAvatarDownload*                          Avatar;                                           		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.AvatarDownloadComponent.GetAvatar
// [0x00840003] 
struct UAvatarDownloadComponent_execGetAvatar_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      Size;                                             		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UAvatarDownload*                             ReturnValue;                                      		// 0x0050 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FAvatarKey                               Key;                                              		// 0x0058 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.ClearPendingDownloads
// [0x00020003] 
struct UAvatarDownloadComponent_execClearPendingDownloads_Parms
{
};

// Function IpDrv.AvatarDownloadComponent.CleanupAvatars
// [0x00020003] 
struct UAvatarDownloadComponent_execCleanupAvatars_Parms
{
};

// Function IpDrv.AvatarDownloadComponent.DownloadAvatar
// [0x00020003] 
struct UAvatarDownloadComponent_execDownloadAvatar_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      Size;                                             		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FString>                          URLs;                                             		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UAvatarDownload*                          Avatar;                                           		// 0x0070 (0x0008) [0x0000000000000000]               
	// class UTexture*                                 DownloadedTexture;                                		// 0x0078 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.AvatarDownloadComponent.StoreNewAvatars
// [0x00420401] 
struct UAvatarDownloadComponent_execStoreNewAvatars_Parms
{
	TArray<struct FUniqueNetId>                        NewPlayerIDs;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	unsigned char                                      Size;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.ProcessOldRequests
// [0x00420401] 
struct UAvatarDownloadComponent_execProcessOldRequests_Parms
{
	TArray<struct FUniqueNetId>                        InPlayerIDs;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	unsigned char                                      SizeType;                                         		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        NewRequestIDs;                                    		// 0x0030 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadComponent.TryAddAvatarTextureCallback
// [0x00020401] 
struct UAvatarDownloadComponent_execTryAddAvatarTextureCallback_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      Size;                                             		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0050 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.ContainsImage
// [0x00020401] 
struct UAvatarDownloadMap_execContainsImage_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.ContainsAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execContainsAvatar_Parms
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.OnAvatarReceivedImage
// [0x00020401] 
struct UAvatarDownloadMap_execOnAvatarReceivedImage_Parms
{
	class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.RemoveImage
// [0x00020401] 
struct UAvatarDownloadMap_execRemoveImage_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.RemoveAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execRemoveAvatar_Parms
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.RemoveAllNetIDs
// [0x00420401] 
struct UAvatarDownloadMap_execRemoveAllNetIDs_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.ClearAvatarsPendingImages
// [0x00020401] 
struct UAvatarDownloadMap_execClearAvatarsPendingImages_Parms
{
};

// Function IpDrv.AvatarDownloadMap.ClearImages
// [0x00020401] 
struct UAvatarDownloadMap_execClearImages_Parms
{
};

// Function IpDrv.AvatarDownloadMap.ClearAvatars
// [0x00020401] 
struct UAvatarDownloadMap_execClearAvatars_Parms
{
};

// Function IpDrv.AvatarDownloadMap.Clear
// [0x00020401] 
struct UAvatarDownloadMap_execClear_Parms
{
};

// Function IpDrv.AvatarDownloadMap.TryGetImage
// [0x00420401] 
struct UAvatarDownloadMap_execTryGetImage_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    OutValue;                                         		// 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.TryGetAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execTryGetAvatar_Parms
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UAvatarDownload*                             OutValue;                                         		// 0x0050 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.GetAvatarsPendingImage
// [0x00420401] 
struct UAvatarDownloadMap_execGetAvatarsPendingImage_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class UAvatarDownload*>                     OutAvatars;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.AvatarDownloadMap.GetImage
// [0x00020401] 
struct UAvatarDownloadMap_execGetImage_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.GetAvatar
// [0x00420401] 
struct UAvatarDownloadMap_execGetAvatar_Parms
{
	struct FAvatarKey                                  Key;                                              		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UAvatarDownload*                             ReturnValue;                                      		// 0x0050 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.AddAvatarPendingImage
// [0x00020401] 
struct UAvatarDownloadMap_execAddAvatarPendingImage_Parms
{
	class UAvatarDownload*                             Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.SetImage
// [0x00020401] 
struct UAvatarDownloadMap_execSetImage_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    Value;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.SetAvatar
// [0x00020401] 
struct UAvatarDownloadMap_execSetAvatar_Parms
{
	class UAvatarDownload*                             Value;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.AvatarDownloadMap.CountAvatars
// [0x00020401] 
struct UAvatarDownloadMap_execCountAvatars_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.AvatarDownloadMap.AllValues
// [0x00424405] 
struct UAvatarDownloadMap_execAllValues_Parms
{
	class UAvatarDownload*                             OutAvatar;                                        		// 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                StartIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int                                                MaxValues;                                        		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.HttpRequestCurl.ProcessRequest
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execProcessRequest_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetHeader
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execSetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     HeaderValue;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetContentAsString
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execSetContentAsString_Parms
{
	struct FString                                     ContentString;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetContent
// [0x00420400]  iNative [0x0004]
struct UHttpRequestCurl_execSetContent_Parms
{
	TArray<unsigned char>                              ContentPayload;                                   		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetURL
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execSetURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetVerb
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execSetVerb_Parms
{
	struct FString                                     Verb;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.GetVerb
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetVerb_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetContent
// [0x00420400]  iNative [0x0004]
struct UHttpRequestCurl_execGetContent_Parms
{
	TArray<unsigned char>                              Content;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetURL
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetContentLength
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetContentLength_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.GetContentType
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetContentType_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetURLParameter
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetURLParameter_Parms
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetHeaders
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetHeaders_Parms
{
	TArray<struct FString>                             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetHeader
// [0x00020400]  iNative [0x0004]
struct UHttpRequestCurl_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetResponseCode
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetResponseCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpResponseCurl.GetContentAsString
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetContentAsString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetContent
// [0x00420400]  iNative [0x0004]
struct UHttpResponseCurl_execGetContent_Parms
{
	TArray<unsigned char>                              Content;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetURL
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetContentLength
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetContentLength_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.HttpResponseCurl.GetContentType
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetContentType_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetURLParameter
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetURLParameter_Parms
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetHeaders
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetHeaders_Parms
{
	TArray<struct FString>                             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetHeader
// [0x00020400]  iNative [0x0004]
struct UHttpResponseCurl_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.ImageDecoder.RequestDecodeImage
// [0x00420401] 
struct UImageDecoder_execRequestDecodeImage_Parms
{
	struct FString                                     RequestURL;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      ImageType;                                        		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FinishedCallback;                                 		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              ImageData;                                        		// 0x0030 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.ImageDecoder.ImageDecodedDelegate
// [0x00120001] 
struct UImageDecoder_execImageDecodedDelegate_Parms
{
	struct FString                                     RequestURL;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                Image;                                            		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020801] 
struct AInternetLink_eventResolveFailed_Parms
{
};

// Function IpDrv.InternetLink.Resolved
// [0x00020801] 
struct AInternetLink_eventResolved_Parms
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420401] 
struct AInternetLink_execGetLocalIP_Parms
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420401] 
struct AInternetLink_execStringToIpAddr_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     Addr;                                             		// 0x0010 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020401] 
struct AInternetLink_execIpAddrToString_Parms
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020401] 
struct AInternetLink_execGetLastError_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
// [0x00020401] 
struct AInternetLink_execResolve_Parms
{
	struct FString                                     Domain;                                           		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420401] 
struct AInternetLink_execParseURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	struct FString                                     Addr;                                             		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                PortNum;                                          		// 0x0020 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FString                                     LevelName;                                        		// 0x0028 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     EntryName;                                        		// 0x0038 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020401] 
struct AInternetLink_execIsDataPending_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020801] 
struct ATcpLink_eventReceivedBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] 
struct ATcpLink_eventReceivedLine_Parms
{
	struct FString                                     Line;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] 
struct ATcpLink_eventReceivedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] 
struct ATcpLink_eventClosed_Parms
{
};

// Function IpDrv.TcpLink.Opened
// [0x00020801] 
struct ATcpLink_eventOpened_Parms
{
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] 
struct ATcpLink_eventAccepted_Parms
{
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420401] 
struct ATcpLink_execReadBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReadText
// [0x00420401] 
struct ATcpLink_execReadText_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020401] 
struct ATcpLink_execSendBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendText
// [0x00020401] 
struct ATcpLink_execSendText_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020401] 
struct ATcpLink_execIsConnected_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Close
// [0x00020401] 
struct ATcpLink_execClose_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Open
// [0x00020401] 
struct ATcpLink_execOpen_Parms
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Listen
// [0x00020401] 
struct ATcpLink_execListen_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.BindPort
// [0x00024401] 
struct ATcpLink_execBindPort_Parms
{
	int                                                PortNum;                                          		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               bUseNextAvailable : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
// [0x00020003] 
struct UMcpServiceBase_execGetUserAuthURL_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FString                                  AuthTicket;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020003] 
struct UMcpServiceBase_execGetAppAccessURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020003] 
struct UMcpServiceBase_execGetBaseURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] 
struct UMcpServiceBase_eventInit_Parms
{
	// class UClass*                                   McpConfigClass;                                   		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineMatchmakingStats*                     MMStats;                                          		// 0x0048 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                NumPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420401] 
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              Payload;                                          		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUploadPlayerData_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     PlayerNick;                                       		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0058 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0060 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020003] 
struct UOnlineNewsInterfaceMcp_execGetNews_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int                                             NewsIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020003] 
struct UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms
{
	struct FScriptDelegate                             ReadGameNewsDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020003] 
struct UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms
{
	struct FScriptDelegate                             ReadNewsDelegate;                                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120001] 
struct UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	unsigned char                                      NewsType;                                         		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020401] 
struct UOnlineNewsInterfaceMcp_execReadNews_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] 
struct UOnlineTitleFileDownloadBase_execGetUrlForFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Parms
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Parms
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120001] 
struct UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<struct FString>                             ResultStr;                                        		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execRequestTitleFileList_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00024000] 
struct UOnlineTitleFileDownloadBase_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      FileType;                                         		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120001] 
struct UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400]  iNative [0x0004]
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400]  iNative [0x0004]
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400]  iNative [0x0004]
struct UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00024400]  iNative [0x0004]
struct UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      FileType;                                         		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execGetUrlForFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020003] 
struct UOnlineTitleFileDownloadWeb_execOnFileListReceived_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          RequestTitleFileListDelegate;                     		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          ResponseArr;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bSuccess : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UHttpRequestInterface*                    HTTPRequest;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            Success : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x00020400]  iNative [0x0004]
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x00020400]  iNative [0x0004]
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x00420400]  iNative [0x0004]
struct UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] 
struct UOnlineTitleFileDownloadWeb_execTriggerDelegates_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     FileRead;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] 
struct UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// bool                                            bSuccess : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             FileIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<unsigned char>                           BinaryData;                                       		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  FileCompressionTypeString;                        		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x00024002] 
struct UOnlineTitleFileDownloadWeb_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      FileType;                                         		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             FileIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420401] 
struct UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Parms
{
	unsigned char                                      FileCompressionType;                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<unsigned char>                              CompressedFileContents;                           		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<unsigned char>                              UncompressedFileContents;                         		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020401] 
struct UTitleFileDownloadCache_execDeleteTitleFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020401] 
struct UTitleFileDownloadCache_execDeleteTitleFiles_Parms
{
	float                                              MaxAgeSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020401] 
struct UTitleFileDownloadCache_execClearCachedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020401] 
struct UTitleFileDownloadCache_execClearCachedFiles_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020401] 
struct UTitleFileDownloadCache_execGetTitleFileLogicalName_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020401] 
struct UTitleFileDownloadCache_execGetTitleFileHash_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020401] 
struct UTitleFileDownloadCache_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420401] 
struct UTitleFileDownloadCache_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120001] 
struct UTitleFileDownloadCache_execOnSaveTitleFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020401] 
struct UTitleFileDownloadCache_execSaveTitleFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     LogicalName;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020003] 
struct UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120001] 
struct UTitleFileDownloadCache_execOnLoadTitleFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020401] 
struct UTitleFileDownloadCache_execLoadTitleFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] 
struct UMcpMessageBase_execCacheMessageContents_Parms
{
	TArray<unsigned char>                              MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     MessageId;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] 
struct UMcpMessageBase_execCacheMessage_Parms
{
	struct FMcpMessage                                 Message;                                          		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] 
struct UMcpMessageBase_execGetMessageContents_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                  		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120001] 
struct UMcpMessageBase_execOnQueryMessageContentsComplete_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] 
struct UMcpMessageBase_execQueryMessageContents_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] 
struct UMcpMessageBase_execGetMessageList_Parms
{
	struct FString                                     ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                      		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120001] 
struct UMcpMessageBase_execOnQueryMessagesComplete_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] 
struct UMcpMessageBase_execQueryMessages_Parms
{
	struct FString                                     ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120001] 
struct UMcpMessageBase_execOnDeleteMessageComplete_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] 
struct UMcpMessageBase_execDeleteMessage_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120001] 
struct UMcpMessageBase_execOnCreateMessageComplete_Parms
{
	struct FMcpMessage                                 Message;                                          		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0068 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] 
struct UMcpMessageBase_execCreateMessage_Parms
{
	TArray<struct FString>                             ToUniqueUserIds;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     FromUniqueUserId;                                 		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     FromFriendlyName;                                 		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     MessageType;                                      		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     PushMessage;                                      		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ValidUntil;                                       		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                  		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] 
struct UMcpMessageBase_execCreateInstance_Parms
{
	class UMcpMessageBase*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpMessageBaseClass;                              		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpMessageBase*                          NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x00420002] 
struct UMcpMessageManager_execCacheMessageContents_Parms
{
	TArray<unsigned char>                              MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     MessageId;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             MessageContentsIndex;                             		// 0x0024 (0x0004) [0x0000000000000000]               
	// bool                                            bWasSuccessful : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420003] 
struct UMcpMessageManager_execGetMessageById_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessage                                 Message;                                          		// 0x0010 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             MessageListsSize;                                 		// 0x007C (0x0004) [0x0000000000000000]               
	// int                                             MessageListsItr;                                  		// 0x0080 (0x0004) [0x0000000000000000]               
	// int                                             MessageItr;                                       		// 0x0084 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x00820002] 
struct UMcpMessageManager_execCacheMessage_Parms
{
	struct FMcpMessage                                 Message;                                          		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             AddAt;                                            		// 0x0068 (0x0004) [0x0000000000000000]               
	// int                                             MessageIndex;                                     		// 0x006C (0x0004) [0x0000000000000000]               
	// int                                             MessageListIndex;                                 		// 0x0070 (0x0004) [0x0000000000000000]               
	// struct FMcpMessageList                          UserMessageList;                                  		// 0x0078 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bWasFound : 1;                                    		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x00420002] 
struct UMcpMessageManager_execGetMessageContents_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                  		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                            bWasSuccessful : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MessageContentsIndex;                             		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] 
struct UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// TArray<unsigned char>                           MessageContents;                                  		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  MessageId;                                        		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpMessage                              Message;                                          		// 0x0038 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x00020002] 
struct UMcpMessageManager_execQueryMessageContents_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryMessageContentsRequest;                      		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x00420002] 
struct UMcpMessageManager_execGetMessageList_Parms
{
	struct FString                                     ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                      		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             MessageListIndex;                                 		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] 
struct UMcpMessageManager_execOnQueryMessagesRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Error;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  JsonString;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0038 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]               
	// struct FMcpMessage                              Message;                                          		// 0x0048 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  MessageCompressionTypeString;                     		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x00020002] 
struct UMcpMessageManager_execQueryMessages_Parms
{
	struct FString                                     ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryMessagesRequest;                             		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020003] 
struct UMcpMessageManager_execOnDeleteMessageRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  MessageId;                                        		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x00020002] 
struct UMcpMessageManager_execDeleteMessage_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    DeleteMessageRequest;                             		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820003] 
struct UMcpMessageManager_execOnCreateMessageRequestComplete_Parms
{
	class UHttpRequestInterface*                       CreateMessageRequest;                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpMessage                              CreatedMessage;                                   		// 0x0028 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x00C20002] 
struct UMcpMessageManager_execCreateMessage_Parms
{
	TArray<struct FString>                             ToUniqueUserIds;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     FromUniqueUserId;                                 		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     FromFriendlyName;                                 		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     MessageType;                                      		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     PushMessage;                                      		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ValidUntil;                                       		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                  		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    CreateMessageRequest;                             		// 0x0080 (0x0008) [0x0000000000000000]               
	// struct FMcpMessage                              Message;                                          		// 0x0088 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ToUniqueUserIdsStr;                               		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Idx;                                              		// 0x0100 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420803] 
struct UMcpMessageManager_eventFinishedAsyncUncompression_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<unsigned char>                              UncompressedMessageContents;                      		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     MessageId;                                        		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420401] 
struct UMcpMessageManager_execStartAsyncUncompression_Parms
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      MessageCompressionType;                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<unsigned char>                              MessageContent;                                   		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420401] 
struct UMcpMessageManager_execStartAsyncCompression_Parms
{
	unsigned char                                      MessageCompressionType;                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<unsigned char>                              MessageContent;                                   		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                          		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearAllDelegates_Parms
{
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020003] 
struct UMcpUserCloudFileDownload_execDeleteUserFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             EntryIdx;                                         		// 0x002C (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0030 (0x0004) [0x0000000000000000]               
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] 
struct UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                UserIdx;                                          		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                FileIdx;                                          		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420003] 
struct UMcpUserCloudFileDownload_execWriteUserFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             EntryIdx;                                         		// 0x0034 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0038 (0x0004) [0x0000000000000000]               
	// struct FString                                  URL;                                              		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnReadUserFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  Filename;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray<unsigned char>                           FileContents;                                     		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020003] 
struct UMcpUserCloudFileDownload_execReadUserFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             EntryIdx;                                         		// 0x0024 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bPending : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420003] 
struct UMcpUserCloudFileDownload_execGetUserFileList_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             EntryIdx;                                         		// 0x0020 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120001] 
struct UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UserId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             JsonIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  JsonString;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UserId;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0040 (0x0008) [0x0000000000000000]               
	// bool                                            bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020003] 
struct UMcpUserCloudFileDownload_execEnumerateUserFiles_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             EntryIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	// struct FString                                  URL;                                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bPending : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearFile_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                            bResult : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0028 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020003] 
struct UMcpUserCloudFileDownload_execClearFiles_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                            bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420003] 
struct UMcpUserCloudFileDownload_execGetFileContents_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                            bResult : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0038 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] 
struct UMeshBeacon_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420401] 
struct UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0018 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520001] 
struct UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FPlayerMember>                       Players;                                          		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520001] 
struct UMeshBeaconClient_execOnTravelRequestReceived_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520001] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      TestResult;                                       		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x0004 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120001] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120001] 
struct UMeshBeaconClient_execOnConnectionRequestResult_Parms
{
	unsigned char                                      ConnectionResult;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020401] 
struct UMeshBeaconClient_execBeginBandwidthTest_Parms
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TestBufferSize;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420401] 
struct UMeshBeaconClient_execRequestConnection_Parms
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FClientConnectionRequest                    ClientRequest;                                    		// 0x0010 (0x0070) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               bRegisterSecureAddress : 1;                       		// 0x0080 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0084 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00]  iNative [0x0004]
struct UMeshBeaconClient_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520001] 
struct UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms
{
	bool                                               bSucceeded : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0018 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420401] 
struct UMeshBeaconHost_execRequestClientCreateNewSession_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       SessionName;                                      		// 0x0048 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FPlayerMember>                       Players;                                          		// 0x0058 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420401] 
struct UMeshBeaconHost_execTellClientsToTravel_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120001] 
struct UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420401] 
struct UMeshBeaconHost_execAllPlayersConnected_Parms
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020401] 
struct UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420003] 
struct UMeshBeaconHost_execSetPendingPlayerConnections_Parms
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520001] 
struct UMeshBeaconHost_execOnFinishedBandwidthTest_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      TestType;                                         		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      TestResult;                                       		// 0x0049 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x004C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120001] 
struct UMeshBeaconHost_execOnStartedBandwidthTest_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      TestType;                                         		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520001] 
struct UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms
{
	struct FClientMeshBeaconConnection                 NewClientConnection;                              		// 0x0000 (0x00B8) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020003] 
struct UMeshBeaconHost_execAllowBandwidthTesting_Parms
{
	bool                                               bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020401] 
struct UMeshBeaconHost_execCancelPendingBandwidthTests_Parms
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020401] 
struct UMeshBeaconHost_execHasPendingBandwidthTest_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020401] 
struct UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020401] 
struct UMeshBeaconHost_execHasInProgressBandwidthTest_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020401] 
struct UMeshBeaconHost_execRequestClientBandwidthTest_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      TestType;                                         		// 0x0048 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int                                                TestBufferSize;                                   		// 0x004C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00]  iNative [0x0004]
struct UMeshBeaconHost_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020401] 
struct UMeshBeaconHost_execInitHostBeacon_Parms
{
	struct FUniqueNetId                                InOwningPlayerId;                                 		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequestAccountAuthorization_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                      		// 0x0060 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnAccountAuthorization_Parms
{
	struct FString                                     Token;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execOnLoginChanged_Parms
{
	bool                                               bLoggedIn : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequestMtxCode_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequestAuthTicket_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0048 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execRequiresAuthTicket_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnReceivedAuthCode_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerAddr_Parms
{
	struct FIpAddr                                     OutServerIP;                                      		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                OutServerPort;                                    		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerUniqueId_Parms
{
	struct FUniqueNetId                                OutServerUID;                                     		// 0x0000 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindServerAuthSession_Parms
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Parms
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindClientAuthSession_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0008 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Parms
{
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Parms
{
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Parms
{
	struct FLocalAuthSession                           OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Parms
{
	struct FAuthSession                                OutSessionInfo;                                   		// 0x0000 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                ClientPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                OutAuthTicketUID;                                 		// 0x0060 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                ClientPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                AuthTicketUID;                                    		// 0x0060 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bSecure : 1;                                      		// 0x0060 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int                                                OutAuthTicketUID;                                 		// 0x0064 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                AuthTicketUID;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Parms
{
	int                                                AuthTicketUID;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Parms
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Parms
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ServerUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UPlayer*                                     ServerConnection;                                 		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ExtraInfo;                                        		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UPlayer*                                     ClientConnection;                                 		// 0x0050 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ExtraInfo;                                        		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                AuthTicketUID;                                    		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Parms
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ClientIP;                                         		// 0x0050 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                ClientPort;                                       		// 0x0064 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Parms
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     ServerIP;                                         		// 0x0048 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int                                                ServerPort;                                       		// 0x005C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bSecure : 1;                                      		// 0x0060 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Parms
{
	struct FScriptDelegate                             AuthReadyDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Parms
{
	struct FScriptDelegate                             AuthReadyDelegate;                                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120001] 
struct UOnlineAuthInterfaceImpl_execOnAuthReady_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execIsReady_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineFriendsInterfaceImpl.GetActivePlatformId
// [0x00420000] 
struct UOnlineFriendsInterfaceImpl_execGetActivePlatformId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                AccountId;                                        		// 0x0008 (0x0048) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlatformId;                                       		// 0x0050 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineFriendsInterfaceImpl.RequestLinkedAccounts
// [0x00020000] 
struct UOnlineFriendsInterfaceImpl_execRequestLinkedAccounts_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        AccountIds;                                       		// 0x0008 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineFriendsInterfaceImpl.OnReceivedLinkedAccount
// [0x00120001] 
struct UOnlineFriendsInterfaceImpl_execOnReceivedLinkedAccount_Parms
{
	bool                                               bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<struct FLinkedAccountData>                  LinkedAccountData;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearGamePlayersChangedDelegate_Parms
{
	struct FScriptDelegate                             GamePlayersChangedDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddGamePlayersChangedDelegate_Parms
{
	struct FScriptDelegate                             GamePlayersChangedDelegate;                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnGamePlayersChanged_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetFriendJoinLocation_Parms
{
	struct FUniqueNetId                                JoinablePlayerID;                                 		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ServerAddress;                                    		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      Visibility;                                       		// 0x0058 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearReportMatchmakingInfoDelegate_Parms
{
	struct FScriptDelegate                             OldDelegate;                                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddReportMatchmakingInfoDelegate_Parms
{
	struct FScriptDelegate                             NewDelegate;                                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execEventReportMatchmakingInfo_Parms
{
	struct FString                                     NewInfo;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Parms
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Parms
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Parms
{
	int                                                NumComplete;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                NumTotal;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0008 (0x0050) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execMigrateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Parms
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Parms
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420001] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     ErrorString;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineArbitrationRegistrant>        ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020001] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420001] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420001] 
struct UOnlineGameInterfaceImpl_execRegisterPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasInvited : 1;                                  		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0054 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] 
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ConnectInfo;                                      		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] 
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] 
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120001] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetImageType
// [0x00022401] 
struct UOnlineImageDownloaderWeb_execGetImageType_Parms
{
	struct FString                                     ContentType;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownload
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execQueueURLForDownload_Parms
{
	struct FString                                     NewURL;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             InternalCallbackOnComplete;                       		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             ExternalCallback;                                 		// 0x0028 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bSupportSRGB : 1;                                 		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// class UTexture2DDynamic*                        TextureHolder;                                    		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00820003] 
struct UOnlineImageDownloaderWeb_execDebugDraw_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                           PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                           PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	// struct FOnlineImageDownload                     ImageItr;                                         		// 0x0010 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execOnDownloadComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execDownloadNextImage_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00424003] 
struct UOnlineImageDownloaderWeb_execRequestOnlineImages_Parms
{
	TArray<struct FString>                             URLs;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             FinishedCallback;                                 		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bSupportSRGB : 1;                                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearQueue
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execClearQueue_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.Dequeue
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDequeue_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.Enqueue
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execEnqueue_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearActiveDownloads
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execClearActiveDownloads_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearCompletedDownloads
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execClearCompletedDownloads_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.HandleImageDecoded
// [0x00440401] 
struct UOnlineImageDownloaderWeb_execHandleImageDecoded_Parms
{
	struct FString                                     RequestedURL;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                DecodedImage;                                     		// 0x0010 (0x0018) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.RequeueFailedURL
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execRequeueFailedURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextQueuedURL
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDownloadNextQueuedURL_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.UpdateActiveDownloadFromResponse
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execUpdateActiveDownloadFromResponse_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpResponseInterface*                      Response;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             OnDecodedCallback;                                		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.MarkActiveDownloadFailed
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execMarkActiveDownloadFailed_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.QueueURLForDownloadInternal
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execQueueURLForDownloadInternal_Parms
{
	struct FString                                     NewURL;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                          		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UTexture2DDynamic*                           TextureHolder;                                    		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             OnDecodedCallback;                                		// 0x0020 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.AddCallbackToDownload
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execAddCallbackToDownload_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             NewCallback;                                      		// 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetDownload
// [0x00020401] 
struct UOnlineImageDownloaderWeb_execGetDownload_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FOnlineImageDownload                        ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLQueued
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execIsURLQueued_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLActive
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execIsURLActive_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLFail
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDidURLFail_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DidURLSucceed
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execDidURLSucceed_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.IsURLTracked
// [0x00040401] 
struct UOnlineImageDownloaderWeb_execIsURLTracked_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.AllValues
// [0x00444405] 
struct UOnlineImageDownloaderWeb_execAllValues_Parms
{
	struct FOnlineImageDownload                        OutImage;                                         		// 0x0000 (0x0040) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                StartIndex;                                       		// 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int                                                MaxValues;                                        		// 0x0044 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads
// [0x00020401] 
struct UOnlineImageDownloaderWeb_execClearPendingDownloads_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020401] 
struct UOnlineImageDownloaderWeb_execClearAllDownloads_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.EventImageDecoded
// [0x00540001] 
struct UOnlineImageDownloaderWeb_execEventImageDecoded_Parms
{
	struct FString                                     RequestURL;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FImageLayout                                Image;                                            		// 0x0010 (0x0018) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageFinished
// [0x00140001] 
struct UOnlineImageDownloaderWeb_execOnOnlineImageFinished_Parms
{
	struct FOnlineImageDownload                        ImageInfo;                                        		// 0x0000 (0x0040) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.Construct
// [0x00020802] 
struct UOnlineImageDownloaderWeb_eventConstruct_Parms
{
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearHostStartPlayTogetherDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddHostStartPlayTogetherDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
// [0x00120001] 
struct UOnlineLobbyInterfaceImpl_execOnHostStartPlayTogether_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyErrorDelegate_Parms
{
	struct FScriptDelegate                             LobbyErrorDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyErrorDelegate_Parms
{
	struct FScriptDelegate                             LobbyErrorDelegate;                               		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
// [0x00120001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyError_Parms
{
	struct FString                                     Error;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventGetLobbyMembers_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	TArray<struct FLobbyMember>                        Members;                                          		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbySessionCretedeDelegate_Parms
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbySessionCreatedDelegate_Parms
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbySessionCreatedDelegate_Parms
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbySessionCreatedDelegates_Parms
{
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
// [0x00120001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbySessionCreated_Parms
{
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventGetLobbyIndex_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execRemoveLocalPlayerFromSession_Parms
{
	struct FUniqueNetId                                PartyMember;                                      		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execAddLocalPartyMemberToSession_Parms
{
	struct FUniqueNetId                                NewPartyMember;                                   		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execKickPlayer_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	unsigned char                                      Reason;                                           		// 0x0058 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x005C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyDestroyedDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      Reason;                                           		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyDestroyedDelegate_Parms
{
	struct FScriptDelegate                             LobbyDestroyedDelegate;                           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyDestroyedDelegate_Parms
{
	struct FScriptDelegate                             LobbyDestroyedDelegate;                           		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyDestroyed_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	unsigned char                                      Reason;                                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyInviteDelegate_Parms
{
	struct FScriptDelegate                             LobbyInviteDelegate;                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyInviteDelegate_Parms
{
	struct FScriptDelegate                             LobbyInviteDelegate;                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyInvite_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                FriendId;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               bAccepted : 1;                                    		// 0x0058 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execInviteToLobby_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CanInviteToLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execCanInviteToLobby_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyOwner_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                NewOwner;                                         		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyLock_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               bLocked : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyServer_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                ServerUID;                                        		// 0x0010 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     ServerIP;                                         		// 0x0058 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execRemoveLobbySetting_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbySetting_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execGetLobbyAdmin_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                AdminId;                                          		// 0x0010 (0x0048) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyJoinGameDelegate_Parms
{
	struct FScriptDelegate                             LobbyJoinGameDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyJoinGameDelegate_Parms
{
	struct FScriptDelegate                             LobbyJoinGameDelegate;                            		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyJoinGameDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ServerId;                                         		// 0x0008 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     ServerIP;                                         		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyJoinGame_Parms
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FUniqueNetId                                ServerId;                                         		// 0x0030 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     ServerIP;                                         		// 0x0078 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyReceiveBinaryDataDelegate_Parms
{
	struct FScriptDelegate                             LobbyReceiveBinaryDataDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyReceiveBinaryDataDelegate_Parms
{
	struct FScriptDelegate                             LobbyReceiveBinaryDataDelegate;                   		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveBinaryDataDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyReceiveBinaryData_Parms
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<unsigned char>                              Data;                                             		// 0x0038 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSendLobbyBinaryData_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	TArray<unsigned char>                              Data;                                             		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyReceiveMessageDelegate_Parms
{
	struct FScriptDelegate                             LobbyReceiveMessageDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyReceiveMessageDelegate_Parms
{
	struct FScriptDelegate                             LobbyReceiveMessageDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveMessageDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Type;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyReceiveMessage_Parms
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Type;                                             		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSendLobbyMessage_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyMemberStatusUpdateDelegate_Parms
{
	struct FScriptDelegate                             LobbyMemberStatusUpdateDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyMemberStatusUpdateDelegate_Parms
{
	struct FScriptDelegate                             LobbyMemberStatusUpdateDelegate;                  		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberStatusUpdateDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                InstigatorIndex;                                  		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Status;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0030 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyMemberStatusUpdate_Parms
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                InstigatorIndex;                                  		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Status;                                           		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbyMemberSettingsUpdateDelegate_Parms
{
	struct FScriptDelegate                             LobbyMemberSettingsUpdateDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbyMemberSettingsUpdateDelegate_Parms
{
	struct FScriptDelegate                             LobbyMemberSettingsUpdateDelegate;                		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberSettingsUpdateDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbyMemberSettingsUpdate_Parms
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                MemberIndex;                                      		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearLobbySettingsUpdateDelegate_Parms
{
	struct FScriptDelegate                             LobbySettingsUpdateDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddLobbySettingsUpdateDelegate_Parms
{
	struct FScriptDelegate                             LobbySettingsUpdateDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerLobbySettingsUpdateDelegates_Parms
{
	int                                                LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnLobbySettingsUpdate_Parms
{
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0000 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execSetLobbyUserSetting_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Key;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execLeaveLobby_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearJoinLobbyCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinLobbyCompleteDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddJoinLobbyCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinLobbyCompleteDelegate;                        		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
// [0x00420803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerJoinLobbyCompleteDelegates_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0008 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                         		// 0x0038 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnJoinLobbyComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                        		// 0x0008 (0x0030) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                         		// 0x0038 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
// [0x00420000] 
struct UOnlineLobbyInterfaceImpl_execJoinLobby_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearFindLobbiesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindLobbiesCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddFindLobbiesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindLobbiesCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
// [0x00020803] 
struct UOnlineLobbyInterfaceImpl_eventTriggerFindLobbiesCompleteDelegates_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// TArray<struct FScriptDelegate>                  DelList;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnFindLobbiesComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	TArray<struct FBasicLobbyInfo>                     LobbyList;                                        		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
// [0x00024000] 
struct UOnlineLobbyInterfaceImpl_execUpdateFoundLobbies_Parms
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
// [0x00024000] 
struct UOnlineLobbyInterfaceImpl_execFindLobbies_Parms
{
	int                                                MaxResults;                                       		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FLobbyFilter>                        Filters;                                          		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FLobbySortFilter>                    SortFilters;                                      		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int                                                MinSlots;                                         		// 0x0028 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	unsigned char                                      Distance;                                         		// 0x002C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execClearCreateLobbyCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateLobbyCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
// [0x00020003] 
struct UOnlineLobbyInterfaceImpl_execAddCreateLobbyCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateLobbyCompleteDelegate;                      		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
// [0x00520001] 
struct UOnlineLobbyInterfaceImpl_execOnCreateLobbyComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
// [0x00024000] 
struct UOnlineLobbyInterfaceImpl_execCreateLobby_Parms
{
	int                                                LocalPlayerNum;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                MaxPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FLobbyMetaData>                      InitialSettings;                                  		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AuthWithNintendoAccountToken
// [0x00420000] 
struct UOnlinePersistentAuthInterfaceImpl_execAuthWithNintendoAccountToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     NintendoAccountToken;                             		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetAuthExpirationTimestamp
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetAuthExpirationTimestamp_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UDateTime*                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.LaunchAccountPortal
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execLaunchAccountPortal_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetClientCredentials
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetClientCredentials_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetContinuanceToken
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetContinuanceToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.UseRefreshToken
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execUseRefreshToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     RefreshToken;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.GetRefreshToken
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execGetRefreshToken_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.RequestPinGrantCode
// [0x00020000] 
struct UOnlinePersistentAuthInterfaceImpl_execRequestPinGrantCode_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearUnderageUserDetectedDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execClearUnderageUserDetectedDelegate_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddUnderageUserDetectedDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execAddUnderageUserDetectedDelegate_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnUnderageUserDetected
// [0x00120001] 
struct UOnlinePersistentAuthInterfaceImpl_execOnUnderageUserDetected_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ParentalConsentURL;                               		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.ClearRequestPinGrantCodeDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execClearRequestPinGrantCodeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.AddRequestPinGrantCodeDelegate
// [0x00020003] 
struct UOnlinePersistentAuthInterfaceImpl_execAddRequestPinGrantCodeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePersistentAuthInterfaceImpl.OnReceievedPinGrantCode
// [0x00120001] 
struct UOnlinePersistentAuthInterfaceImpl_execOnReceievedPinGrantCode_Parms
{
	unsigned char                                      Result;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      LocalUserNum;                                     		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Code;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     URL;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                SecondsUntilExpiration;                           		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420401] 
struct UOnlinePlaylistManager_execParseDataCenterId_Parms
{
	TArray<unsigned char>                              Data;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020003] 
struct UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<unsigned char>                           FileData;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020003] 
struct UOnlinePlaylistManager_execReadDataCenterId_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020803] 
struct UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Parms
{
	int                                                NumPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOnlineEventsInterface*                   EventsInterface;                                  		// 0x0008 (0x0010) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                WorldwideTotal;                                   		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                RegionTotal;                                      		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int                                             PlaylistIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420401] 
struct UOnlinePlaylistManager_execParsePlaylistPopulationData_Parms
{
	TArray<unsigned char>                              Data;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120001] 
struct UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020003] 
struct UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<unsigned char>                           FileData;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020003] 
struct UOnlinePlaylistManager_execReadPlaylistPopulation_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020003] 
struct UOnlinePlaylistManager_execReset_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<int>                                        ContentIds;                                       		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             PlaylistIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FName>                               MapCycle;                                         		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             PlaylistIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020003] 
struct UOnlinePlaylistManager_execGetUrlFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int                                             PlaylistIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020003] 
struct UOnlinePlaylistManager_execGetMatchType_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020003] 
struct UOnlinePlaylistManager_execIsPlaylistArbitrated_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                LoadBalanceId;                                    		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420003] 
struct UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                TeamSize;                                         		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                TeamCount;                                        		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int                                                MaxPartySize;                                     		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int                                             PlaylistIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020003] 
struct UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020003] 
struct UOnlinePlaylistManager_execHasAnyGameSettings_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
	// int                                             GameIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020003] 
struct UOnlinePlaylistManager_execGetGameSettings_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                GameSettingsId;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             PlaylistIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]               
	// int                                             GameIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020401] 
struct UOnlinePlaylistManager_execFinalizePlaylistObjects_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020003] 
struct UOnlinePlaylistManager_execOnReadTitleFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Filename;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
	// int                                             FileIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020401] 
struct UOnlinePlaylistManager_execShouldRefreshPlaylists_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020401] 
struct UOnlinePlaylistManager_execDetermineFilesToDownload_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020003] 
struct UOnlinePlaylistManager_execDownloadPlaylist_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// int                                             FileIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120001] 
struct UOnlinePlaylistManager_execOnReadPlaylistComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
// [0x00020000] 
struct UOnlinePurchaseInterfaceImpl_execClearMicroTxnResponseDelegate_Parms
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
// [0x00020000] 
struct UOnlinePurchaseInterfaceImpl_execAddMicroTxnResponseDelegate_Parms
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                         		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
// [0x00120001] 
struct UOnlinePurchaseInterfaceImpl_execOnMicroTxnResponse_Parms
{
	bool                                               bAuthorized : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	unsigned long long                                 OrderId;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
// [0x00020002] 
struct UOnlinePurchaseInterfaceImpl_execFormatCurrency_Parms
{
	struct FString                                     Currency;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Price;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
// [0x00420000] 
struct UOnlinePurchaseInterfaceImpl_execGetAppPriceInfo_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FName>                               AppNames;                                         		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0058 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0070 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
// [0x00120001] 
struct UOnlinePurchaseInterfaceImpl_execEventGetAppPriceInfoComplete_Parms
{
	struct FName                                       AppName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Price;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DiscountPrice;                                    		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                DiscountPercentage;                               		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120001] 
struct UPartyBeacon_execOnDestroyComplete_Parms
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] 
struct UPartyBeacon_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00]  iNative [0x0004]
struct UPartyBeaconClient_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020401] 
struct UPartyBeaconClient_execCancelReservation_Parms
{
	struct FUniqueNetId                                CancellingPartyLeader;                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420401] 
struct UPartyBeaconClient_execRequestReservationUpdate_Parms
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                            		// 0x0010 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  PlayersToAdd;                                     		// 0x0058 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420401] 
struct UPartyBeaconClient_execRequestReservation_Parms
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                            		// 0x0010 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  Players;                                          		// 0x0058 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120001] 
struct UPartyBeaconClient_execOnHostHasCancelled_Parms
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120001] 
struct UPartyBeaconClient_execOnHostIsReady_Parms
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120001] 
struct UPartyBeaconClient_execOnTravelRequestReceived_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120001] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Parms
{
	int                                                ReservationRemaining;                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120001] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Parms
{
	unsigned char                                      ReservationResult;                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020401] 
struct UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420003] 
struct UPartyBeaconHost_execGetPartyLeaders_Parms
{
	TArray<struct FUniqueNetId>                        PartyLeaders;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             PartyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20003] 
struct UPartyBeaconHost_execGetPlayers_Parms
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             PlayerIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
	// int                                             PartyIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0018 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020401] 
struct UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820803] 
struct UPartyBeaconHost_eventUnregisterParty_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             PlayerIndex;                                      		// 0x0048 (0x0004) [0x0000000000000000]               
	// int                                             PartyIndex;                                       		// 0x004C (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0050 (0x0008) [0x0000000000000000]               
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0058 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820803] 
struct UPartyBeaconHost_eventUnregisterPartyMembers_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// int                                             PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0010 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820803] 
struct UPartyBeaconHost_eventRegisterPartyMembers_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// int                                             PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UOnlineRecentPlayersList*                 PlayersList;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
	// TArray<struct FUniqueNetId>                     Members;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0028 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020003] 
struct UPartyBeaconHost_execAreReservationsFull_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020401] 
struct UPartyBeaconHost_execTellClientsHostHasCancelled_Parms
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020401] 
struct UPartyBeaconHost_execTellClientsHostIsReady_Parms
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020401] 
struct UPartyBeaconHost_execTellClientsToTravel_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      PlatformSpecificInfo[0x50];                       		// 0x0010 (0x0050) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00]  iNative [0x0004]
struct UPartyBeaconHost_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120001] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120001] 
struct UPartyBeaconHost_execOnReservationsFull_Parms
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120001] 
struct UPartyBeaconHost_execOnReservationChange_Parms
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020401] 
struct UPartyBeaconHost_execHandlePlayerLogout_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bMaintainParty : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420401] 
struct UPartyBeaconHost_execGetExistingReservation_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420401] 
struct UPartyBeaconHost_execUpdatePartyReservationEntry_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                    		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	unsigned char                                      ReturnValue;                                      		// 0x0058 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420401] 
struct UPartyBeaconHost_execAddPartyReservationEntry_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                    		// 0x0048 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                TeamNum;                                          		// 0x0058 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bIsHost : 1;                                      		// 0x005C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	unsigned char                                      ReturnValue;                                      		// 0x0060 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024401] 
struct UPartyBeaconHost_execInitHostBeacon_Parms
{
	int                                                InNumTeams;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                InNumPlayersPerTeam;                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                InNumReservations;                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InSessionName;                                    		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                InForceTeamNum;                                   		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020401] 
struct UPartyBeaconHost_execPauseReservationRequests_Parms
{
	bool                                               bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020003] 
struct UWebRequest_execGetHexDigit_Parms
{
	struct FString                                     D;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020003] 
struct UWebRequest_execDecodeFormData_Parms
{
	struct FString                                     Data;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  Token[0x2];                                       		// 0x0010 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ch;                                               		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// int                                             H1;                                               		// 0x0044 (0x0004) [0x0000000000000000]               
	// int                                             H2;                                               		// 0x0048 (0x0004) [0x0000000000000000]               
	// int                                             Limit;                                            		// 0x004C (0x0004) [0x0000000000000000]               
	// int                                             T;                                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020003] 
struct UWebRequest_execProcessHeaderString_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] 
struct UWebRequest_execDump_Parms
{
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] 
struct UWebRequest_execGetVariables_Parms
{
	TArray<struct FString>                             varNames;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] 
struct UWebRequest_execGetVariableNumber_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Number;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     DefaultValue;                                     		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0028 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] 
struct UWebRequest_execGetVariableCount_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] 
struct UWebRequest_execGetVariable_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] 
struct UWebRequest_execAddVariable_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] 
struct UWebRequest_execGetHeaders_Parms
{
	TArray<struct FString>                             Headers;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] 
struct UWebRequest_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] 
struct UWebRequest_execAddHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00022401] 
struct UWebRequest_execEncodeBase64_Parms
{
	struct FString                                     Decoded;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00022401] 
struct UWebRequest_execDecodeBase64_Parms
{
	struct FString                                     Encoded;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020003] 
struct UWebResponse_execSentResponse_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SentText
// [0x00020003] 
struct UWebResponse_execSentText_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.Redirect
// [0x00020003] 
struct UWebResponse_execRedirect_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024003] 
struct UWebResponse_execSendStandardHeaders_Parms
{
	struct FString                                     ContentType;                                      		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               bCache : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024003] 
struct UWebResponse_execHTTPError_Parms
{
	int                                                ErrorNum;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FString                                     Data;                                             		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020003] 
struct UWebResponse_execSendHeaders_Parms
{
	// struct FString                                  hdr;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024003] 
struct UWebResponse_execAddHeader_Parms
{
	struct FString                                     Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bReplace : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  Part;                                             		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  Entry;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020003] 
struct UWebResponse_execHTTPHeader_Parms
{
	struct FString                                     Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020003] 
struct UWebResponse_execHttpResponse_Parms
{
	struct FString                                     Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020003] 
struct UWebResponse_execFailAuthentication_Parms
{
	struct FString                                     Realm;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024003] 
struct UWebResponse_execSendCachedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ContentType;                                      		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020803] 
struct UWebResponse_eventSendBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	unsigned char                                      B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebResponse.SendText
// [0x00024803] 
struct UWebResponse_eventSendText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bNoCRLF : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] 
struct UWebResponse_execDump_Parms
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] 
struct UWebResponse_execGetHTTPExpiration_Parms
{
	int                                                OffsetSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] 
struct UWebResponse_execLoadParsedUHTM_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] 
struct UWebResponse_execIncludeBinaryFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] 
struct UWebResponse_execIncludeUHTM_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] 
struct UWebResponse_execClearSubst_Parms
{
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] 
struct UWebResponse_execSubst_Parms
{
	struct FString                                     Variable;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	bool                                               bClear : 1;                                       		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] 
struct UWebResponse_execFileExists_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020803] 
struct UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426003] 
struct UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                PlaylistId;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                ProviderIndex;                                    		// 0x000C (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	class UOnlinePlaylistProvider*                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UUIDataStore_OnlinePlaylists*             PlaylistDS;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
	// TArray<class UUIResourceDataProvider*>          Providers;                                        		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UOnlinePlaylistProvider*                  OPP;                                              		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] 
struct UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                ProviderIndex;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UUIResourceDataProvider*                     out_Provider;                                     		// 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] 
struct UUIDataStore_OnlinePlaylists_execGetResourceProviders_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<class UUIResourceDataProvider*>             out_Providers;                                    		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020803] 
struct UUIDataStore_OnlinePlaylists_eventInit_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020001] 
struct UWebApplication_execPostQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
struct UWebApplication_execQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020003] 
struct UWebApplication_execPreQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020003] 
struct UWebApplication_execCleanupApp_Parms
{
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] 
struct UWebApplication_execCleanup_Parms
{
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
struct UWebApplication_execInit_Parms
{
};

// Function IpDrv.WebServer.GetApplication
// [0x00420003] 
struct AWebServer_execGetApplication_Parms
{
	struct FString                                     URI;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SubURI;                                           		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UWebApplication*                             ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]               
	// int                                             L;                                                		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] 
struct AWebServer_eventLostChild_Parms
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] 
struct AWebServer_eventGainedChild_Parms
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] 
struct AWebServer_eventDestroyed_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] 
struct AWebServer_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UClass*                                   ApplicationClass;                                 		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FIpAddr                                  L;                                                		// 0x0010 (0x0014) [0x0000000000000000]               
	// struct FString                                  S;                                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] 
struct UHelloWeb_eventQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] 
struct UHelloWeb_execInit_Parms
{
};

// Function IpDrv.ImageServer.Query
// [0x00020802] 
struct UImageServer_eventQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  Image;                                            		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// [0x00020001] 
struct UMcpServiceConfig_execGetUserAuthTicket_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserReward_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                UserReward;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserProgress_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bDidComplete : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int                                                GoalProgress;                                     		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeUserStatus_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                           		// 0x0020 (0x0090) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execQueryChallengeMultiUserStatus_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UserIdsToRead;                                    		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeUserStatus_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] 
struct UMcpClashMobBase_execAcceptChallenge_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnAcceptChallengeComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDeleteCachedChallengeFile_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execClearCachedChallengeFile_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileContents_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              OutFileContents;                                  		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDownloadChallengeFile_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileList_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeFile>           OutChallengeFiles;                                		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnDownloadChallengeFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Filename;                                         		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeList_Parms
{
	TArray<struct FMcpClashMobChallengeEvent>          OutChallengeEvents;                               		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeList_Parms
{
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120001] 
struct UMcpClashMobBase_execOnQueryChallengeListComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] 
struct UMcpClashMobBase_execCreateInstance_Parms
{
	class UMcpClashMobBase*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpClashMobBaseClass;                             		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpClashMobBase*                         NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x00020002] 
struct UMcpClashMobFileDownload_execGetUrlForFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  UniqueChallengeId;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueUserId;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// int                                             ChallengeQueryIdx;                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x00020002] 
struct UMcpClashMobManager_execUpdateChallengeUserReward_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                UserReward;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeQueryIdx;                                		// 0x0048 (0x0004) [0x0000000000000000]               
	// int                                             UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// bool                                            bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0058 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  UniqueChallengeId;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueUserId;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// int                                             ChallengeQueryIdx;                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x00020002] 
struct UMcpClashMobManager_execUpdateChallengeUserProgress_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bDidComplete : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int                                                GoalProgress;                                     		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeQueryIdx;                                		// 0x0048 (0x0004) [0x0000000000000000]               
	// int                                             UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// bool                                            bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0058 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x00C20002] 
struct UMcpClashMobManager_execGetChallengeUserStatus_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                           		// 0x0020 (0x0090) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             UserStatusIdx;                                    		// 0x00B0 (0x0004) [0x0000000000000000]               
	// struct FMcpClashMobChallengeUserStatus          DefaultStatus;                                    		// 0x00B8 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  JSONStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueChallengeId;                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueUserId;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x005C (0x0004) [0x0000000000000000]               
	// int                                             ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// int                                             UserStatusIdx;                                    		// 0x0064 (0x0004) [0x0000000000000000]               
	// int                                             TempUserStatusIdx;                                		// 0x0068 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x00420002] 
struct UMcpClashMobManager_execQueryChallengeMultiUserStatus_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UserIdsToRead;                                    		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  JSONStr;                                          		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// int                                             UserQueryIdx;                                     		// 0x0064 (0x0004) [0x0000000000000000]               
	// int                                             UserIdIdx;                                        		// 0x0068 (0x0004) [0x0000000000000000]               
	// bool                                            bPending : 1;                                     		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  JSONStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueChallengeId;                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueUserId;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x005C (0x0004) [0x0000000000000000]               
	// int                                             ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]               
	// int                                             UserStatusIdx;                                    		// 0x0064 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x00020002] 
struct UMcpClashMobManager_execQueryChallengeUserStatus_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeQueryIdx;                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// int                                             UserQueryIdx;                                     		// 0x0044 (0x0004) [0x0000000000000000]               
	// bool                                            bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  UniqueChallengeId;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  UniqueUserId;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	// int                                             ChallengeQueryIdx;                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x00020002] 
struct UMcpClashMobManager_execAcceptChallenge_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeQueryIdx;                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// int                                             UserQueryIdx;                                     		// 0x0044 (0x0004) [0x0000000000000000]               
	// bool                                            bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0050 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execDeleteCachedChallengeFile_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             ChallengeIdx;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execClearCachedChallengeFile_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             ChallengeIdx;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeFileContents_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<unsigned char>                              OutFileContents;                                  		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             ChallengeIdx;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020003] 
struct UMcpClashMobManager_execOnDownloadMcpFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     DLName;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<unsigned char>                           FileContents;                                     		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeIdx;                                     		// 0x0028 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x002C (0x0004) [0x0000000000000000]               
	// struct FString                                  Filename;                                         		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnLoadCachedFileComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     DLName;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// bool                                            bRequiresDownload : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  FileHashCache;                                    		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  FileHashChallenge;                                		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  Filename;                                         		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeIdx;                                     		// 0x0050 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0054 (0x0004) [0x0000000000000000]               
	// TArray<unsigned char>                           FileContents;                                     		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execDownloadChallengeFile_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             ChallengeIdx;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
	// int                                             FileIdx;                                          		// 0x0034 (0x0004) [0x0000000000000000]               
	// bool                                            bPending : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeFileList_Parms
{
	struct FString                                     UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeFile>           OutChallengeFiles;                                		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             ChallengeEventIdx;                                		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeList_Parms
{
	TArray<struct FMcpClashMobChallengeEvent>          OutChallengeEvents;                               		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  JSONStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bResult : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x00020002] 
struct UMcpClashMobManager_execQueryChallengeList_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bPending : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.Init
// [0x00020002] 
struct UMcpClashMobManager_execInit_Parms
{
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnAcceptGroupInviteComplete_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] 
struct UMcpGroupsBase_execAcceptGroupInvite_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bShouldAccept : 1;                                		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420001] 
struct UMcpGroupsBase_execGetGroupInviteList_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               InviteList;                                       		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnQueryGroupInvitesComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020001] 
struct UMcpGroupsBase_execQueryGroupInvites_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnDeleteAllGroupsComplete_Parms
{
	struct FString                                     RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] 
struct UMcpGroupsBase_execDeleteAllGroups_Parms
{
	struct FString                                     OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnRemoveGroupMembersComplete_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execRemoveGroupMembers_Parms
{
	struct FString                                     OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnAddGroupMembersComplete_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execAddGroupMembers_Parms
{
	struct FString                                     OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               bRequiresAcceptance : 1;                          		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupMembers_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpGroupMember>                     GroupMembers;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnQueryGroupMembersComplete_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroupMembers_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupList_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                        		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnQueryGroupsComplete_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroups_Parms
{
	struct FString                                     RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnDeleteGroupComplete_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] 
struct UMcpGroupsBase_execDeleteGroup_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120001] 
struct UMcpGroupsBase_execOnCreateGroupComplete_Parms
{
	struct FMcpGroup                                   Group;                                            		// 0x0000 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] 
struct UMcpGroupsBase_execCreateGroup_Parms
{
	struct FString                                     OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupName;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] 
struct UMcpGroupsBase_execCreateInstance_Parms
{
	class UMcpGroupsBase*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpGroupsManagerClass;                            		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpGroupsBase*                           NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820003] 
struct UMcpGroupsManager_execCacheGroupMember_Parms
{
	struct FString                                     MemberId;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	unsigned char                                      AcceptState;                                      		// 0x0020 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// int                                             MemberIndex;                                      		// 0x0024 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                            GroupList;                                        		// 0x0028 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             GroupListIndex;                                   		// 0x0048 (0x0004) [0x0000000000000000]               
	// struct FMcpGroup                                GroupTemp;                                        		// 0x0050 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             GroupIndex;                                       		// 0x0098 (0x0004) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x009C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820003] 
struct UMcpGroupsManager_execCacheGroup_Parms
{
	struct FString                                     RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroup                                   Group;                                            		// 0x0010 (0x0048) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             AddAt;                                            		// 0x0058 (0x0004) [0x0000000000000000]               
	// int                                             GroupIndex;                                       		// 0x005C (0x0004) [0x0000000000000000]               
	// int                                             GroupListIndex;                                   		// 0x0060 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                            UserGroupList;                                    		// 0x0068 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bWasFound : 1;                                    		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120003] 
struct UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x00020002] 
struct UMcpGroupsManager_execAcceptGroupInvite_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bShouldAccept : 1;                                		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    AcceptGroupInviteRequest;                         		// 0x0038 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020003] 
struct UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  RequesterId;                                      		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x00020002] 
struct UMcpGroupsManager_execDeleteAllGroups_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    DeleteGroupRequest;                               		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020003] 
struct UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x00420002] 
struct UMcpGroupsManager_execRemoveGroupMembers_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    RemoveGroupMembersRequest;                        		// 0x0040 (0x0008) [0x0000000000000000]               
	// struct FString                                  JsonPayload;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0058 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120003] 
struct UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x00420002] 
struct UMcpGroupsManager_execAddGroupMembers_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               bRequiresAcceptance : 1;                          		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    AddGroupMembersRequest;                           		// 0x0048 (0x0008) [0x0000000000000000]               
	// struct FString                                  JsonPayload;                                      		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0060 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x00C20002] 
struct UMcpGroupsManager_execGetGroupMembers_Parms
{
	struct FString                                     GroupId;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpGroupMember>                     GroupMembers;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             GroupIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                            GroupList;                                        		// 0x0028 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                GroupTemp;                                        		// 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120003] 
struct UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Error;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  JsonString;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0038 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]               
	// unsigned char                                   AcceptState;                                      		// 0x0044 (0x0001) [0x0000000000000000]               
	// struct FString                                  MemberId;                                         		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  GroupId;                                          		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x00020002] 
struct UMcpGroupsManager_execQueryGroupMembers_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryGroupMembersRequest;                         		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x00420002] 
struct UMcpGroupsManager_execGetGroupList_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                        		// 0x0010 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             GroupListIndex;                                   		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920003] 
struct UMcpGroupsManager_execOnQueryGroupsRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Error;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                Group;                                            		// 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  JsonString;                                       		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0088 (0x0004) [0x0000000000000000]               
	// struct FString                                  RequesterId;                                      		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x00020002] 
struct UMcpGroupsManager_execQueryGroups_Parms
{
	struct FString                                     RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryGroupsRequest;                               		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020003] 
struct UMcpGroupsManager_execOnDeleteGroupRequestComplete_Parms
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  GroupId;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x00020002] 
struct UMcpGroupsManager_execDeleteGroup_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupId;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    DeleteGroupRequest;                               		// 0x0030 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820003] 
struct UMcpGroupsManager_execOnCreateGroupRequestComplete_Parms
{
	class UHttpRequestInterface*                       CreateGroupRequest;                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                CreatedGroup;                                     		// 0x0028 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  JsonString;                                       		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0080 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x00820002] 
struct UMcpGroupsManager_execCreateGroup_Parms
{
	struct FString                                     UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GroupName;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    CreateGroupRequest;                               		// 0x0030 (0x0008) [0x0000000000000000]               
	// struct FMcpGroup                                FailedGroup;                                      		// 0x0038 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] 
struct UMcpIdMappingBase_execGetIdMappings_Parms
{
	struct FString                                     ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpIdMapping>                       IDMappings;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120001] 
struct UMcpIdMappingBase_execOnQueryMappingsComplete_Parms
{
	struct FString                                     ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] 
struct UMcpIdMappingBase_execQueryMappings_Parms
{
	TArray<struct FString>                             ExternalIds;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120001] 
struct UMcpIdMappingBase_execOnAddMappingComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] 
struct UMcpIdMappingBase_execAddMapping_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] 
struct UMcpIdMappingBase_execCreateInstance_Parms
{
	class UMcpIdMappingBase*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpIdMappingBaseClass;                            		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpIdMappingBase*                        NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x00420002] 
struct UMcpIdMappingManager_execGetIdMappings_Parms
{
	struct FString                                     ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpIdMapping>                       IDMappings;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020003] 
struct UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  JsonString;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0038 (0x0004) [0x0000000000000000]               
	// int                                             AccountIndex;                                     		// 0x003C (0x0004) [0x0000000000000000]               
	// bool                                            bWasFound : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  McpId;                                            		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ExternalId;                                       		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ExternalType;                                     		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x00420002] 
struct UMcpIdMappingManager_execQueryMappings_Parms
{
	TArray<struct FString>                             ExternalIds;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// struct FString                                  JsonPayload;                                      		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// bool                                            bFirst : 1;                                       		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020003] 
struct UMcpIdMappingManager_execOnAddMappingRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x00020002] 
struct UMcpIdMappingManager_execAddMapping_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnDeleteValueComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execDeleteValue_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnUpdateValueComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                Value;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execUpdateValue_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                Value;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execGetValue_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
// [0x00020000] 
struct UMcpManagedValueManagerBase_execGetValues_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FManagedValue>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnReadSaveSlotComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// [0x00020000] 
struct UMcpManagedValueManagerBase_execReadSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// [0x00120001] 
struct UMcpManagedValueManagerBase_execOnCreateSaveSlotComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// [0x00020000] 
struct UMcpManagedValueManagerBase_execCreateSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// [0x00022003] 
struct UMcpManagedValueManagerBase_execCreateInstance_Parms
{
	class UMcpManagedValueManagerBase*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpManagedValueManagerBaseClass;                  		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpManagedValueManagerBase*              NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnDeleteValueRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x001C (0x0004) [0x0000000000000000]               
	// int                                             ValueIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.DeleteValue
// [0x00020002] 
struct UMcpManagedValueManager_execDeleteValue_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0038 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnUpdateValueRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             UpdatedValue;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.UpdateValue
// [0x00020002] 
struct UMcpManagedValueManager_execUpdateValue_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                Value;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.GetValue
// [0x00020002] 
struct UMcpManagedValueManager_execGetValue_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FName                                       ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int                                                ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             SaveSlotIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]               
	// int                                             ValueIndex;                                       		// 0x0030 (0x0004) [0x0000000000000000]               
	// int                                             Value;                                            		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.GetValues
// [0x00020002] 
struct UMcpManagedValueManager_execGetValues_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FManagedValue>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int                                             SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]               
	// TArray<struct FManagedValue>                    EmptyArray;                                       		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnReadSaveSlotRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// [0x00020002] 
struct UMcpManagedValueManager_execReadSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// [0x00020003] 
struct UMcpManagedValueManager_execParseValuesForSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     JsonPayload;                                      		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0038 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]               
	// int                                             ManagedValueIndex;                                		// 0x0040 (0x0004) [0x0000000000000000]               
	// struct FName                                    ValueId;                                          		// 0x0044 (0x0008) [0x0000000000000000]               
	// int                                             Value;                                            		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// [0x00020003] 
struct UMcpManagedValueManager_execFindSaveSlotIndex_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             SaveSlotIndex;                                    		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// [0x00020003] 
struct UMcpManagedValueManager_execOnCreateSaveSlotRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// [0x00020002] 
struct UMcpManagedValueManager_execCreateSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execGetLastServerTime_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120001] 
struct UMcpServerTimeBase_execOnQueryServerTimeComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     DateTimeStr;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execQueryServerTime_Parms
{
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] 
struct UMcpServerTimeBase_execCreateInstance_Parms
{
	class UMcpServerTimeBase*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpServerTimeBaseClass;                           		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpServerTimeBase*                       NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x00020002] 
struct UMcpServerTimeManager_execGetLastServerTime_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] 
struct UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FString                                  TimeStr;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ResponseStr;                                      		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Idx;                                              		// 0x0048 (0x0004) [0x0000000000000000]               
	// bool                                            bResult : 1;                                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x00020002] 
struct UMcpServerTimeManager_execQueryServerTime_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  ErrorStr;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                            bPending : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnRecordIapComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.RecordIap
// [0x00020000] 
struct UMcpUserInventoryBase_execRecordIap_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Receipt;                                          		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnDeleteItemComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
// [0x00020000] 
struct UMcpUserInventoryBase_execDeleteItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                StoreVersion;                                     		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnConsumeItemComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
// [0x00020000] 
struct UMcpUserInventoryBase_execConsumeItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnEarnItemComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.EarnItem
// [0x00020000] 
struct UMcpUserInventoryBase_execEarnItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnSellItemComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.SellItem
// [0x00424000] 
struct UMcpUserInventoryBase_execSellItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FMcpInventoryItemContainer>          ExpectedResultItems;                              		// 0x0038 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnPurchaseItemComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0048 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
// [0x00020000] 
struct UMcpUserInventoryBase_execPurchaseItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             PurchaseItemIds;                                  		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0040 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0044 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Scalar;                                           		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// [0x00420000] 
struct UMcpUserInventoryBase_execGetInventoryItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpInventoryItem                           OutInventoryItem;                                 		// 0x0030 (0x0050) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// [0x00420000] 
struct UMcpUserInventoryBase_execGetInventoryItems_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   OutInventoryItems;                                		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnQueryInventoryItemsComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// [0x00020000] 
struct UMcpUserInventoryBase_execQueryInventoryItems_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnQuerySaveSlotListComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// [0x00020000] 
struct UMcpUserInventoryBase_execGetSaveSlotList_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// [0x00020000] 
struct UMcpUserInventoryBase_execQuerySaveSlotList_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnDeleteSaveSlotComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// [0x00020000] 
struct UMcpUserInventoryBase_execDeleteSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// [0x00120001] 
struct UMcpUserInventoryBase_execOnCreateSaveSlotComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// [0x00024000] 
struct UMcpUserInventoryBase_execCreateSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ParentSaveSlotId;                                 		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
// [0x00022003] 
struct UMcpUserInventoryBase_execCreateInstance_Parms
{
	class UMcpUserInventoryBase*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpUserInventoryBaseClass;                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpUserInventoryBase*                    NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnRecordIapRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.RecordIap
// [0x00020002] 
struct UMcpUserInventoryManager_execRecordIap_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Receipt;                                          		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnDeleteItemRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ItemIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
// [0x00020002] 
struct UMcpUserInventoryManager_execDeleteItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                StoreVersion;                                     		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnConsumeItemRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
// [0x00020002] 
struct UMcpUserInventoryManager_execConsumeItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnEarnItemRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.EarnItem
// [0x00020002] 
struct UMcpUserInventoryManager_execEarnItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnSellItemRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             UpdatedItemIdIndex;                               		// 0x001C (0x0004) [0x0000000000000000]               
	// int                                             FoundItemIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0024 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          UpdatedItemIds;                                   		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.SellItem
// [0x00424002] 
struct UMcpUserInventoryManager_execSellItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FMcpInventoryItemContainer>          ExpectedResultItems;                              		// 0x0038 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  expectedResultsItemsJson;                         		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0068 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0070 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x0074 (0x0004) [0x0000000000000000]               
	// int                                             Index;                                            		// 0x0078 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnPurchaseItemRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             UpdatedItemIdIndex;                               		// 0x001C (0x0004) [0x0000000000000000]               
	// int                                             FoundItemIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0024 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          UpdatedItemIds;                                   		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
// [0x00020002] 
struct UMcpUserInventoryManager_execPurchaseItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             PurchaseItemIds;                                  		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                Quantity;                                         		// 0x0040 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int                                                StoreVersion;                                     		// 0x0044 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Scalar;                                           		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FString                                  URL;                                              		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  paymentItemsJson;                                 		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0070 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0078 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x007C (0x0004) [0x0000000000000000]               
	// int                                             Index;                                            		// 0x0080 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
// [0x00420003] 
struct UMcpUserInventoryManager_execFindItemRequest_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ItemID;                                           		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          InItemRequests;                                   		// 0x0030 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             Index;                                            		// 0x0044 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// [0x00420003] 
struct UMcpUserInventoryManager_execFindSaveSlotRequest_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests;                               		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             Index;                                            		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// [0x00020003] 
struct UMcpUserInventoryManager_execFindSaveSlotIndex_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             SaveSlotIndex;                                    		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// [0x00020003] 
struct UMcpUserInventoryManager_execParseSaveSlotList_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     JsonPayload;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0020 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]               
	// struct FString                                  SaveSlotId;                                       		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// [0x00020003] 
struct UMcpUserInventoryManager_execParseInventoryForSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     JsonPayload;                                      		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0040 (0x0008) [0x0000000000000000]               
	// class UJsonObject*                              ParsedJsonAttrs;                                  		// 0x0048 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0050 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]               
	// int                                             ItemIndex;                                        		// 0x0058 (0x0004) [0x0000000000000000]               
	// int                                             JsonAttrsIndex;                                   		// 0x005C (0x0004) [0x0000000000000000]               
	// struct FString                                  GlobalItemId;                                     		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  InstanceItemId;                                   		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FString>                          UpdatedItemIds;                                   		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class UJsonObject*>                      ObjectArray;                                      		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// [0x00420002] 
struct UMcpUserInventoryManager_execGetInventoryItem_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpInventoryItem                           OutInventoryItem;                                 		// 0x0030 (0x0050) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             SaveSlotIndex;                                    		// 0x0084 (0x0004) [0x0000000000000000]               
	// int                                             ItemIndex;                                        		// 0x0088 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// [0x00420002] 
struct UMcpUserInventoryManager_execGetInventoryItems_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   OutInventoryItems;                                		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int                                             SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnQueryInventoryItemsRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// [0x00020002] 
struct UMcpUserInventoryManager_execQueryInventoryItems_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// [0x00020002] 
struct UMcpUserInventoryManager_execGetSaveSlotList_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<struct FString>                          OutSaveSlots;                                     		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnQuerySaveSlotListRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// [0x00020002] 
struct UMcpUserInventoryManager_execQuerySaveSlotList_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnDeleteSaveSlotRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// [0x00020002] 
struct UMcpUserInventoryManager_execDeleteSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// [0x00020003] 
struct UMcpUserInventoryManager_execOnCreateSaveSlotRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// [0x00024002] 
struct UMcpUserInventoryManager_execCreateSaveSlot_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ParentSaveSlotId;                                 		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
	// int                                             ExistingIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnDeleteUserComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] 
struct UMcpUserManagerBase_execDeleteUser_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.GetUser
// [0x00420000] 
struct UMcpUserManagerBase_execGetUser_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpUserStatus                              User;                                             		// 0x0010 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] 
struct UMcpUserManagerBase_execGetUsers_Parms
{
	TArray<struct FMcpUserStatus>                      Users;                                            		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnQueryUsersComplete_Parms
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] 
struct UMcpUserManagerBase_execQueryUsers_Parms
{
	TArray<struct FString>                             McpIds;                                           		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] 
struct UMcpUserManagerBase_execQueryUser_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bShouldUpdateLastActive : 1;                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnAuthenticateUserComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     Token;                                            		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// [0x00020000] 
struct UMcpUserManagerBase_execAuthenticateUserMcp_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ClientSecret;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// [0x00020000] 
struct UMcpUserManagerBase_execAuthenticateUserFacebook_Parms
{
	struct FString                                     FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     FacebookToken;                                    		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120001] 
struct UMcpUserManagerBase_execOnRegisterUserComplete_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FString                                     Error;                                            		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00020000] 
struct UMcpUserManagerBase_execRegisterUserFacebook_Parms
{
	struct FString                                     FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     FacebookAuthToken;                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00020000] 
struct UMcpUserManagerBase_execRegisterUserGenerated_Parms
{
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] 
struct UMcpUserManagerBase_execCreateInstance_Parms
{
	class UMcpUserManagerBase*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpUserManagerBaseClass;                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UMcpUserManagerBase*                      NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnDeleteUserRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             UserIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x00020002] 
struct UMcpUserManager_execDeleteUser_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.GetUser
// [0x00420002] 
struct UMcpUserManager_execGetUser_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpUserStatus                              User;                                             		// 0x0010 (0x0068) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int                                             UserIndex;                                        		// 0x007C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.GetUsers
// [0x00420002] 
struct UMcpUserManager_execGetUsers_Parms
{
	TArray<struct FMcpUserStatus>                      Users;                                            		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnQueryUsersRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.ParseUsers
// [0x00080003] 
struct UMcpUserManager_execParseUsers_Parms
{
	struct FString                                     JsonPayload;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0010 (0x0008) [0x0000000000000000]               
	// int                                             JsonIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  McpId;                                            		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x00420002] 
struct UMcpUserManager_execQueryUsers_Parms
{
	TArray<struct FString>                             McpIds;                                           		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FString                                  JsonPayload;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int                                             Index;                                            		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnQueryUserRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.QueryUser
// [0x00024002] 
struct UMcpUserManager_execQueryUser_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bShouldUpdateLastActive : 1;                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// struct FString                                  URL;                                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0028 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnAuthenticateUserRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  McpId;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  Ticket;                                           		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
// [0x00020002] 
struct UMcpUserManager_execAuthenticateUserMcp_Parms
{
	struct FString                                     McpId;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     ClientSecret;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// [0x00020002] 
struct UMcpUserManager_execAuthenticateUserFacebook_Parms
{
	struct FString                                     FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     FacebookToken;                                    		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     UDID;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020003] 
struct UMcpUserManager_execOnRegisterUserRequestComplete_Parms
{
	class UHttpRequestInterface*                       Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FString                                  McpId;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.ParseUser
// [0x00080003] 
struct UMcpUserManager_execParseUser_Parms
{
	struct FString                                     JsonPayload;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UJsonObject*                              ParsedJson;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
	// int                                             UserIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]               
	// struct FString                                  McpId;                                            		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x00020002] 
struct UMcpUserManager_execRegisterUserFacebook_Parms
{
	struct FString                                     FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FString                                     FacebookAuthToken;                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x00020002] 
struct UMcpUserManager_execRegisterUserGenerated_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// int                                             AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] 
struct AWebConnection_execIsHanging_Parms
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020003] 
struct AWebConnection_execCleanup_Parms
{
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020003] 
struct AWebConnection_execCheckRawBytes_Parms
{
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020003] 
struct AWebConnection_execEndOfHeaders_Parms
{
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020003] 
struct AWebConnection_execCreateResponseObject_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020003] 
struct AWebConnection_execProcessPost_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020003] 
struct AWebConnection_execProcessGet_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020003] 
struct AWebConnection_execProcessHead_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] 
struct AWebConnection_execReceivedLine_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] 
struct AWebConnection_eventReceivedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
	// struct FString                                  S;                                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] 
struct AWebConnection_eventTimer_Parms
{
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] 
struct AWebConnection_eventClosed_Parms
{
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] 
struct AWebConnection_eventAccepted_Parms
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
