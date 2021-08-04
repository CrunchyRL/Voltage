/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: TAGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct TAGame._AITypes_TA.BTDynamicLinkData
// 0x0010
struct FBTDynamicLinkData
{
	struct FName                                       LinkName;                                         		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UBTNode*                                     Node;                                             		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._AITypes_TA.AICachedGoalInfo
// 0x0014
struct FAICachedGoalInfo
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     FieldSize;                                        		// 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._AITypes_TA.AIProxyData
// 0x0048
struct FAIProxyData
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Gravity;                                          		// 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0024 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                           		// 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Bounce;                                           		// 0x0034 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                            		// 0x0038 (0x0008) [0x0000000000000000]               
	class AVehicle_TA*                                 Vehicle;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.GameModeData
// 0x0018
struct FGameModeData
{
	int                                                GameMode;                                         		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     LocalizedName;                                    		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.PlayerChatMessage
// 0x0068
struct FPlayerChatMessage
{
	float                                              MessageTimeStamp;                                 		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      ChatChannel;                                      		// 0x0050 (0x0001) [0x0000000000000000]               
	int                                                Team;                                             		// 0x0054 (0x0004) [0x0000000000000000]               
	struct FString                                     Message;                                          		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ReportPlayerData
// 0x0058
struct FReportPlayerData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ReportedPlayerInfo
// 0x00B8
struct FReportedPlayerInfo
{
	struct FReportPlayerData                           Reporter;                                         		// 0x0000 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FReportPlayerData                           Offender;                                         		// 0x0058 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      ReasonID;                                         		// 0x00B0 (0x0001) [0x0000000000000000]               
	float                                              ReportTimeStamp;                                  		// 0x00B4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.AssetLoadResult
// 0x0020
struct FAssetLoadResult
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       AssetName;                                        		// 0x0004 (0x0008) [0x0000000000000000]               
	class UProductAsset_TA*                            Asset;                                            		// 0x0010 (0x0008) [0x0000000000000000]               
	class UProductThumbnailAsset_TA*                   ThumbnailAsset;                                   		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutData
// 0x0010
struct FClientLoadoutData
{
	TArray<int>                                        Products;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamColor
// 0x0008
struct FLoadoutTeamColor
{
	unsigned char                                      Team;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned char                                      TeamColorID;                                      		// 0x0001 (0x0001) [0x0000000000000000]               
	unsigned char                                      CustomColorID;                                    		// 0x0002 (0x0001) [0x0000000000000000]               
	unsigned long                                      bSet : 1;                                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamPaint
// 0x0008(0x0010 - 0x0008)
struct FLoadoutTeamPaint : FLoadoutTeamColor
{
	int                                                TeamFinishID;                                     		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                CustomFinishID;                                   		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.LoadoutData
// 0x0030(0x0040 - 0x0010)
struct FLoadoutData : FClientLoadoutData
{
	struct FLoadoutTeamPaint                           TeamPaint;                                        		// 0x0010 (0x0010) [0x0000000000000000]               
	struct FName                                       Title;                                            		// 0x0020 (0x0008) [0x0000000000000000]               
	int                                                TeamIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	TArray<unsigned long long>                         OnlineProducts;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineProduct
// 0x0010
struct FClientLoadoutOnlineProduct
{
	TArray<class UProductAttribute_TA*>                Attributes;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineData
// 0x0010
struct FClientLoadoutOnlineData
{
	TArray<struct FClientLoadoutOnlineProduct>         Products;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.InputRate
// 0x0008
struct FInputRate
{
	float                                              RiseRate;                                         		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FallRate;                                         		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.TurningCircle
// 0x0010
struct FTurningCircle
{
	struct FVector                                     Center;                                           		// 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.StatValue
// 0x0014
struct FStatValue
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Values[0x3];                                      		// 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.GFxTeamColor
// 0x0010
struct FGFxTeamColor
{
	struct FColor                                      Value;                                            		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ColorID;                                          		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                X;                                                		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Y;                                                		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.MapGroup
// 0x0010
struct FMapGroup
{
	TArray<class UMapData_TA*>                         Maps;                                             		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.MapImageLoadResult
// 0x0010
struct FMapImageLoadResult
{
	class UTexture2D*                                  Image;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       MapName;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProductThumbnailResult
// 0x0018
struct FProductThumbnailResult
{
	class UProductAsset_TA*                            Asset;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0008 (0x0008) [0x0000000000000000]               
	class UProductThumbnail_TA*                        Thumbnail;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.RandomWeight
// 0x0010
struct FRandomWeight
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OrigWeight;                                       		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.WeldingInfo
// 0x0024
struct FWeldingInfo
{
	class ARBActor_TA*                                 RBActor;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000000]               
	float                                              Mass;                                             		// 0x0014 (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProductWithSettings
// 0x0018
struct FProductWithSettings
{
	class UProductAsset_TA*                            Product;                                          		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UProductPaint_TA*                            Paint;                                            		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDataAsset_ESportsTeam_TA*                   ESportsTeam;                                      		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.VehicleInputs
// 0x0020
struct FVehicleInputs
{
	float                                              Throttle;                                         		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Steer;                                            		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Yaw;                                              		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Roll;                                             		// 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DodgeForward;                                     		// 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DodgeRight;                                       		// 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bHandbrake : 1;                                   		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bJump : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bActivateBoost : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bHoldingBoost : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bJumped : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct TAGame._Types_TA.ProductAttributesArray
// 0x0010
struct FProductAttributesArray
{
	TArray<class UProductAttribute_TA*>                Attributes;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutAttributesArray
// 0x0010
struct FLoadoutAttributesArray
{
	TArray<struct FProductAttributesArray>             Products;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductTradeInFilter
// 0x0040
struct FProductTradeInFilter
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        SeriesIDs;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bBlueprint : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<unsigned char>                              TradeInQualities;                                 		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ColorOverride
// 0x0014
struct FColorOverride
{
	unsigned long                                      bOverride : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                Color;                                            		// 0x0004 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.TeamColor
// 0x0020
struct FTeamColor
{
	struct FLinearColor                                FontColor;                                        		// 0x0000 (0x0010) [0x0000000000000000]               
	TArray<struct FLinearColor>                        Colors;                                           		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.MapSkillSettings
// 0x000C
struct FMapSkillSettings
{
	struct FName                                       MapName;                                          		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MinimumSkill;                                     		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialTextureParam
// 0x0010
struct FMaterialTextureParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Value;                                            		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialVectorParam
// 0x0018
struct FMaterialVectorParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialScalarParam
// 0x000C
struct FMaterialScalarParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.MaterialParams
// 0x0030
struct FMaterialParams
{
	TArray<struct FMaterialTextureParam>               TextureParameters;                                		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FMaterialVectorParam>                VectorParameters;                                 		// 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FMaterialScalarParam>                ScalarParameters;                                 		// 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.AssociativeMaterialParams
// 0x0038
struct FAssociativeMaterialParams
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FMaterialParams                             Params;                                           		// 0x0008 (0x0030) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.SkinBodySettings
// 0x0048
struct FSkinBodySettings
{
	class UProductAssetReferenceBody_TA*               Body;                                             		// 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FMaterialParams                             Parameters;                                       		// 0x0008 (0x0030) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FAssociativeMaterialParams>          AdditionalBodyParameters;                         		// 0x0038 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductSkinOverride
// 0x0010
struct FProductSkinOverride
{
	struct FName                                       SkinName;                                         		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                         		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.OnlineProductAttribute
// 0x0018
struct FOnlineProductAttribute
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Value;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductData
// 0x0038
struct FOnlineProductData
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long long                                 InstanceID;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                SeriesID;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductAttribute>             Attributes;                                       		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                TradeHold;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	unsigned long long                                 AddedTimestamp;                                   		// 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.CurrencyProductData
// 0x0010
struct U_Types_TA_FCurrencyProductData
{
	class UProduct_TA*                                 Product;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.Currency
// 0x0060
struct FCurrency
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]               
	unsigned long                                      bCanBeTraded : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TradeHold;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
	struct U_Types_TA_FCurrencyProductData             ProductData;                                      		// 0x0018 (0x0010) [0x0000000000000000]               
	int                                                CurrencyID;                                       		// 0x0028 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Id;                                               		// 0x002C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Amount;                                           		// 0x0030 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture*                                    LargeImage;                                       		// 0x0038 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture*                                    SmallImage;                                       		// 0x0040 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     LocalizedName;                                    		// 0x0048 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long long                                 UpdatedTimestamp;                                 		// 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.OnlineXPModifier
// 0x0034
struct FOnlineXPModifier
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              Modifier;                                         		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned char                                      ModifierType;                                     		// 0x000C (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Value;                                            		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     LocalizedText;                                    		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bPremium : 1;                                     		// 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bPenalty : 1;                                     		// 0x0028 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	int                                                Count;                                            		// 0x002C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                MaxCount;                                         		// 0x0030 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.OnlineXPReward
// 0x0040
struct FOnlineXPReward
{
	struct FName                                       RewardName;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Total;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Base;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                BaseLevel;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	int                                                CapAdjustment;                                    		// 0x0018 (0x0004) [0x0000000000000000]               
	TArray<int>                                        LevelThresholds;                                  		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineXPModifier>                   RewardModifiers;                                  		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductDrop
// 0x0078
struct FOnlineProductDrop
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineProductData>                  ProductData;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FCurrency>                           CurrencyData;                                     		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineXPReward>                     RewardDrops;                                      		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ChallengeRequirementProgress
// 0x0008
struct FChallengeRequirementProgress
{
	int                                                ProgressCount;                                    		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ProgressChange;                                   		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ChallengeProgress
// 0x0028
struct FChallengeProgress
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsHidden : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CompleteCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bNotifyCompleted : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNotifyAvailable : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNotifyNewInfo : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRewardsAvailable : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bComplete : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long long                                 ProgressResetTimeUTC;                             		// 0x0010 (0x0008) [0x0000000000000000]               
	TArray<struct FChallengeRequirementProgress>       RequirementProgress;                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.XPRewardData
// 0x000C
struct FXPRewardData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              Amount;                                           		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.GarageSlotCost
// 0x0008
struct FGarageSlotCost
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.ProductDrop
// 0x001C
struct FProductDrop
{
	struct FProductHashID                              GroupId;                                          		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 DropID;                                           		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 DropTime;                                         		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bCanEquipNow : 1;                                 		// 0x0018 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.RPCIntroCar
// 0x0038
struct FRPCIntroCar
{
	int                                                TemplateIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     TemplateName;                                     		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     TemplateDescription;                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        ProductsList;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.IntroCarInfo
// 0x0028
struct FIntroCarInfo
{
	int                                                TemplateIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     TemplateName;                                     		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     TemplateDescription;                              		// 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.EditorIntroCar
// 0x0038
struct FEditorIntroCar
{
	struct FIntroCarInfo                               Info;                                             		// 0x0000 (0x0028) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UProduct_TA*>                         ProductList;                                      		// 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.GarageComplexRow
// 0x0008
struct FGarageComplexRow
{
	int                                                RowID;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.GarageComplexLoadout
// 0x0020
struct FGarageComplexLoadout
{
	struct FLoadoutTeamPaint                           TeamPaint;                                        		// 0x0000 (0x0010) [0x0000000000000000]               
	TArray<unsigned long long>                         OnlineProducts;                                   		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.GarageComplexSlot
// 0x0070
struct FGarageComplexSlot
{
	int                                                SlotID;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bUnlocked : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TeamIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0020 (0x000C) [0x0000000000000000]               
	struct FGarageComplexLoadout                       SlotLoadouts[0x2];                                		// 0x0030 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.AppliedBreakoutDamage
// 0x0018
struct FAppliedBreakoutDamage
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]               
	int                                                DamageIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                TotalDamage;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.PaintAttributeParameter
// 0x0010
struct FPaintAttributeParameter
{
	unsigned char                                      PaintVariant;                                     		// 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ParameterName;                                    		// 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bGammaCorrect : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.ProductLevelData
// 0x0010
struct FProductLevelData
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	int                                                SoftCurrency;                                     		// 0x0004 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	int                                                HardCurrency;                                     		// 0x0008 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	float                                              UnlockWeight;                                     		// 0x000C (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.BallPredictionInfo
// 0x003C
struct FBallPredictionInfo
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ArchTopTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     ArchTop;                                          		// 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     ArchTopVelocity;                                  		// 0x002C (0x000C) [0x0000000000000000]               
	unsigned long                                      bHitWall : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHitGround : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._Types_TA.AimAssistSettings
// 0x0034
struct FAimAssistSettings
{
	unsigned long                                      bOverride : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ControlAlpha;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinSteerDot;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxSteerDot;                                      		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              MinVelocity;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MaxVelocity;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MinPlayerInputDrive;                              		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MinDistanceToBallXY;                              		// 0x001C (0x0004) [0x0000000000000000]               
	float                                              MaxDistanceToBallXY;                              		// 0x0020 (0x0004) [0x0000000000000000]               
	float                                              MinDistanceToBallZ;                               		// 0x0024 (0x0004) [0x0000000000000000]               
	float                                              MaxDistanceToBallZ;                               		// 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MinDotAngleFromBall;                              		// 0x002C (0x0004) [0x0000000000000000]               
	float                                              MaxDotAngleFromBall;                              		// 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.StatData
// 0x000C
struct FStatData
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.QuickChatGroup
// 0x0014
struct FQuickChatGroup
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.OnlinePlayerMatchData
// 0x0110
struct FOnlinePlayerMatchData
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              GameSecondsPlayed;                                		// 0x0050 (0x0004) [0x0000000000000000]               
	int                                                GameScore;                                        		// 0x0054 (0x0004) [0x0000000000000000]               
	int                                                MatchGoals;                                       		// 0x0058 (0x0004) [0x0000000000000000]               
	int                                                MatchAssists;                                     		// 0x005C (0x0004) [0x0000000000000000]               
	int                                                MatchSaves;                                       		// 0x0060 (0x0004) [0x0000000000000000]               
	int                                                MatchShots;                                       		// 0x0064 (0x0004) [0x0000000000000000]               
	int                                                XPGained;                                         		// 0x0068 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductData>                  Loadout;                                          		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCompletedMatch : 1;                              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bForfeit : 1;                                     		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMvp : 1;                                         		// 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWinner : 1;                                      		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLeaver : 1;                                      		// 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bInParty : 1;                                     		// 0x0080 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bJoinedInProgress : 1;                            		// 0x0080 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                ConsecutiveMatchesPlayed;                         		// 0x0084 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0088 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              DistanceDrivenKM;                                 		// 0x00D0 (0x0004) [0x0000000000000000]               
	unsigned long                                      bPartyLeaderValid : 1;                            		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TeamIndex;                                        		// 0x00D8 (0x0004) [0x0000000000000000]               
	TArray<struct FStatData>                           Stats;                                            		// 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FLoadoutData>                        TeamLoadouts;                                     		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQuickChatGroup>                     QuickChat;                                        		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ActorHistory
// 0x0020
struct FActorHistory
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]               
	struct FString                                     SerializedHistory;                                		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.SortedProductData
// 0x002C
struct FSortedProductData
{
	unsigned long long                                 Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FProductHashID                              HashID;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
	class UProduct_TA*                                 Product;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0018 (0x0008) [0x0000000000000000]               
	int                                                BlueprintSortWeight;                              		// 0x0020 (0x0004) [0x0000000000000000]               
	int                                                Quantity;                                         		// 0x0024 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUnlocked : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsFavorited : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCurrency : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct TAGame._Types_TA.EditorRoundData
// 0x0018
struct FEditorRoundData
{
	float                                              TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FString>                             SerializedArchetypes;                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadObjectResult
// 0x0021
struct FLoadObjectResult
{
	struct FString                                     FilePath;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     ObjectData;                                       		// 0x0010 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                            		// 0x0018 (0x0008) [0x0000000000000000]               
	unsigned char                                      Code;                                             		// 0x0020 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.SaveObjectResult
// 0x0011
struct FSaveObjectResult
{
	class UObject*                                     ObjectData;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned char                                      Code;                                             		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.UniqueNetIdGroup4
// 0x0120
struct FUniqueNetIdGroup4
{
	struct FUniqueNetId                                PlayerIDs[0x4];                                   		// 0x0000 (0x0120) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ChatBanInfo
// 0x000C
struct FChatBanInfo
{
	unsigned long long                                 Expiration;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      bPermanentlyBanned : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.SimilarLogoGroup
// 0x0010
struct FSimilarLogoGroup
{
	TArray<class UProductAsset_Logo_TA*>               SimilarLogoColorAssets;                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.UIProductSlotData
// 0x0018
struct FUIProductSlotData
{
	class UProductSlot_TA*                             Slot;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 Sound;                                            		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.SimpleSpringSettings
// 0x0050
struct FSimpleSpringSettings
{
	struct FVector                                     Strength;                                         		// 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Damping;                                          		// 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MaxDisplacement;                                  		// 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bUseMinDisplacement : 1;                          		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FVector                                     MinDisplacement;                                  		// 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Mass;                                             		// 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MassOffset;                                       		// 0x0038 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeed;                                         		// 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bDebug : 1;                                       		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              DrawDebugOffset;                                  		// 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.WheelContactData
// 0x0050
struct FWheelContactData
{
	unsigned long                                      bHasContact : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasContactWithWorldGeometry : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HasContactChangeTime;                             		// 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         Component;                                        		// 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                         		// 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                           		// 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     LatDirection;                                     		// 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     LongDirection;                                    		// 0x003C (0x000C) [0x0000000000000000]               
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                      		// 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.WheelAttachment
// 0x0030
struct FWheelAttachment
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UAttachmentBehavior_TA*>              Behaviors;                                        		// 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	struct FName                                       Socket;                                           		// 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UMaterialInterface*>                  PaintableMaterials;                               		// 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductAttachment
// 0x0070
struct FProductAttachment
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                         		// 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Scale;                                            		// 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                      		// 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                         		// 0x0030 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Socket;                                           		// 0x003C (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UAntennaComponent_TA*                        Antenna;                                          		// 0x0040 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UAttachmentBehavior_TA*>              Behaviors;                                        		// 0x0048 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class UProductAttribute_InheritCarSetting_TA*      InheritCarAttribute;                              		// 0x0058 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UPrimitiveComponent*                         Component;                                        		// 0x0060 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AFXActor_X*                                  FXActor;                                          		// 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.AccumulatedRigidBodyCollision
// 0x0080
struct FAccumulatedRigidBodyCollision
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         Component;                                        		// 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     OtherVelocity;                                    		// 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                           		// 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     NormalForce;                                      		// 0x0048 (0x000C) [0x0000000000000000]               
	struct FVector                                     FrictionForce;                                    		// 0x0054 (0x000C) [0x0000000000000000]               
	struct FVector                                     NormalVelocity;                                   		// 0x0060 (0x000C) [0x0000000000000000]               
	struct FVector                                     FrictionVelocity;                                 		// 0x006C (0x000C) [0x0000000000000000]               
	int                                                NumCollisions;                                    		// 0x0078 (0x0004) [0x0000000000000000]               
	int                                                NumContacts;                                      		// 0x007C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.TAPlayerStat
// 0x000C
struct FTAPlayerStat
{
	class UStatEvent_TA*                               StatEvent;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.BallHitInfo
// 0x010C
struct FBallHitInfo
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	class APRI_TA*                                     AttackerPRI;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       CarName;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	int                                                TeamNum;                                          		// 0x0018 (0x0004) [0x0000000000000000]               
	struct FReplicatedRBState                          PreHitCarPhysics;                                 		// 0x0020 (0x0040) [0x0000000000000000]               
	struct FReplicatedRBState                          PreHitBallPhysics;                                		// 0x0060 (0x0040) [0x0000000000000000]               
	struct FReplicatedRBState                          PostHitBallPhysics;                               		// 0x00A0 (0x0040) [0x0000000000000000]               
	float                                              Distance;                                         		// 0x00E0 (0x0004) [0x0000000000000000]               
	float                                              Time;                                             		// 0x00E4 (0x0004) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                      		// 0x00E8 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                        		// 0x00F4 (0x000C) [0x0000000000000000]               
	unsigned long                                      bDodging : 1;                                     		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWheelsTouching : 1;                              		// 0x0100 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWorldTouching : 1;                               		// 0x0100 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      HitType;                                          		// 0x0104 (0x0001) [0x0000000000000000]               
	int                                                HitID;                                            		// 0x0108 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.MessageValue
// 0x002C
struct FMessageValue
{
	struct FString                                     StringValue;                                      		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                IntValue;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	class UObject*                                     ObjectValue;                                      		// 0x0018 (0x0008) [0x0000000000000000]               
	struct FName                                       NameValue;                                        		// 0x0020 (0x0008) [0x0000000000000000]               
	int                                                ValueType;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.MessagePacket
// 0x0018
struct FMessagePacket
{
	class UMessage_TA*                                 Message;                                          		// 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FMessageValue>                       Values;                                           		// 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientFrameData
// 0x0028
struct FClientFrameData
{
	struct FVehicleInputs                              VehicleInput;                                     		// 0x0000 (0x0020) [0x0000000000000000]               
	int                                                frame;                                            		// 0x0020 (0x0004) [0x0000000000000000]               
	float                                              TimeStamp;                                        		// 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.LoadoutProductData
// 0x0020
struct FLoadoutProductData
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long long                                 InstanceID;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	TArray<class UProductAttribute_TA*>                Attributes;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutTeam
// 0x0020
struct FServerSetLoadoutTeam
{
	TArray<struct FLoadoutProductData>                 Products;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLoadoutTeamPaint                           TeamPaint;                                        		// 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutParams
// 0x0048
struct FServerSetLoadoutParams
{
	struct FName                                       Title;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FServerSetLoadoutTeam                       Loadouts[0x2];                                    		// 0x0008 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RandomRange
// 0x0008
struct FRandomRange
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.SchematicResourceData
// 0x000C
struct FSchematicResourceData
{
	unsigned long long                                 InstanceID;                                       		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Resources;                                        		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.ProductFilter
// 0x0148
struct FProductFilter
{
	TArray<class UOnlineProduct_TA*>                   OnlineProducts;                                   		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UProduct_TA*>                         Products;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FProductHashID>                      ArchivedProducts;                                 		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Label;                                            		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        Slots;                                            		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UProductSlot_TA*>                     ProhibitedSlots;                                  		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              ExclusiveQualities;                               		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              ProhibitedQualities;                              		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              UnlockMethods;                                    		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              TradeRestrictions;                                		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        TradeHoldRestrictions;                            		// 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UClass*>                              ExclusiveAttributes;                              		// 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UClass*>                              ProhibitedAttributes;                             		// 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      SortType;                                         		// 0x00D0 (0x0001) [0x0000000000000000]               
	TArray<int>                                        SeriesIDs;                                        		// 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FProductHashID                              PackHashID;                                       		// 0x00E8 (0x0004) [0x0000000000000000]               
	unsigned long                                      bExcludePacks : 1;                                		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreEquipped : 1;                              		// 0x00EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIgnoreLicensedCars : 1;                          		// 0x00EC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bStackProducts : 1;                               		// 0x00EC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowEquippedArchivedProducts : 1;               		// 0x00EC (0x0004) [0x0000000000000000] [0x00000010] 
	TArray<int>                                        Loadout;                                          		// 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FProductHashID>                      EquippedHashIDs;                                  		// 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      LogLevel;                                         		// 0x0110 (0x0001) [0x0000000000000000]               
	unsigned char                                      ArchivedProductFilter;                            		// 0x0111 (0x0001) [0x0000000000000000]               
	TArray<unsigned char>                              ProhibitedBlueprints;                             		// 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned char>                              ProhibitedSortTypes;                              		// 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UClass*>                              ProhibitedAttributeSortTypes;                     		// 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ThumbnailComponent
// 0x0058
struct FThumbnailComponent
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     BaseTransform;                                    		// 0x0010 (0x0040) [0x0000000000000000]               
	struct FName                                       Tag;                                              		// 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.RocketPassTierBonusRange
// 0x000C
struct FRocketPassTierBonusRange
{
	int                                                Start;                                            		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                End;                                              		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Bonus;                                            		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.RocketPassUnlock
// 0x0038
struct FRocketPassUnlock
{
	int                                                Tier;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductData>                  ProductData;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineXPReward>                     RewardDrops;                                      		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FCurrency>                           CurrencyDrops;                                    		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassRewardData
// 0x0038
struct FRocketPassRewardData
{
	int                                                Tier;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductData>                  ProductData;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FXPRewardData>                       XPRewards;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FCurrency>                           CurrencyDrops;                                    		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassInfo
// 0x000C
struct FRocketPassInfo
{
	int                                                TierLevel;                                        		// 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bOwnsPremium : 1;                                 		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              XPMultiplier;                                     		// 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame._Types_TA.RocketPassBundleInfo
// 0x0038
struct FRocketPassBundleInfo
{
	int                                                PurchasableID;                                    		// 0x0000 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                KeyCost;                                          		// 0x0004 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                OriginalKeyCost;                                  		// 0x0008 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                OriginalCurrencyCost;                             		// 0x000C (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                CurrencyID;                                       		// 0x0010 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                CurrencyCost;                                     		// 0x0014 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                Tiers;                                            		// 0x0018 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                Savings;                                          		// 0x001C (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	class UTexture*                                    Image;                                            		// 0x0020 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     ImageURL;                                         		// 0x0028 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.RocketPassStore
// 0x0020
struct FRocketPassStore
{
	TArray<struct FRocketPassBundleInfo>               Tiers;                                            		// 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRocketPassBundleInfo>               Bundles;                                          		// 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineReward
// 0x0028
struct FOnlineReward
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductData>                  ProductData;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineXPReward>                     RewardDrops;                                      		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.SeasonMatch
// 0x001C
struct FSeasonMatch
{
	int                                                Week;                                             		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Team0;                                            		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Team1;                                            		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Score0;                                           		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Score1;                                           		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Winner;                                           		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bBye : 1;                                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.SeasonTeam
// 0x001C
struct FSeasonTeam
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FName                                       LogoAsset;                                        		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                EliminationWeek;                                  		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.SeasonPlayerStat
// 0x001C
struct FSeasonPlayerStat
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     StatName;                                         		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                StatValue;                                        		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.SeasonPlayer
// 0x002C
struct FSeasonPlayer
{
	int                                                Team;                                             		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Id;                                               		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bBot : 1;                                         		// 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.SeasonTeamRank
// 0x001C
struct FSeasonTeamRank
{
	int                                                Team;                                             		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Wins;                                             		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Losses;                                           		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                PointsFor;                                        		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                PointsAgainst;                                    		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                PointsDifferential;                               		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                EliminationWeek;                                  		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.ReplayHeaderLoadResult
// 0x0010
struct FReplayHeaderLoadResult
{
	class UReplay_TA*                                  Header;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	class UError*                                      Error;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProfileAutoCamSettings
// 0x0028
struct FProfileAutoCamSettings
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MoveSpeed;                                        		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              MoveSpeedZ;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RotateSpeed;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AerialDistance;                                   		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              FocusBlendSpeed;                                  		// 0x001C (0x0004) [0x0000000000000000]               
	float                                              AerialPrediction;                                 		// 0x0020 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUseReplayCamera : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocusOnGoals : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._Types_TA.ProfileCameraSettings
// 0x001C
struct FProfileCameraSettings
{
	float                                              FOV;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                         		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              Stiffness;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SwivelSpeed;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TransitionSpeed;                                  		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.XPInfo
// 0x0020
struct FXPInfo
{
	int                                                TotalXP;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                XpLevel;                                          		// 0x0004 (0x0004) [0x0000000000000000]               
	struct FString                                     XPTitle;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                XPProgressInCurrentLevel;                         		// 0x0018 (0x0004) [0x0000000000000000]               
	int                                                XPRequiredForNextLevel;                           		// 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.ProductStat
// 0x0008
struct FProductStat
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.DemolishData
// 0x0028
struct FDemolishData
{
	class ARBActor_TA*                                 Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	class ACar_TA*                                     Victim;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     AttackerVelocity;                                 		// 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     VictimVelocity;                                   		// 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.DemolishData2
// 0x0008(0x0030 - 0x0028)
struct FDemolishData2 : FDemolishData
{
	class AFXActor_X*                                  CustomDemoFX;                                     		// 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.UISavedKeyValue
// 0x0018
struct FUISavedKeyValue
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Value;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.PlaylistMapPrefs
// 0x000C(0x002C - 0x0020)
struct FPlaylistMapPrefs : FMapPrefs
{
	struct FName                                       Playlist;                                         		// 0x0020 (0x0008) [0x0000000000000000]               
	unsigned long                                      bOverrideGlobal : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._Types_TA.FPSBucketMetrics
// 0x0008
struct FFPSBucketMetrics
{
	int                                                FPS;                                              		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                FrameCount;                                       		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.BodyToEngineAudioPair
// 0x0010
struct FBodyToEngineAudioPair
{
	class UProduct_TA*                                 Body;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	class UProduct_TA*                                 EngineAudio;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.PartyUpMergeError
// 0x0098
struct FPartyUpMergeError
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                LeaderID;                                         		// 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class UError*                                      Error;                                            		// 0x0090 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._Types_TA.AutoFlipData
// 0x0008
struct FAutoFlipData
{
	float                                              Torque;                                           		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Force;                                            		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.StickyForceData
// 0x0008
struct FStickyForceData
{
	float                                              Ground;                                           		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Wall;                                             		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.WaveParams
// 0x0008
struct FWaveParams
{
	float                                              Frequency;                                        		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Amplitude;                                        		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._Types_TA.PersonaDataId
// 0x0048
struct FPersonaDataId
{
	struct FUniqueNetId                                PersonaId;                                        		// 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._Types_TA.PaintWithOverride
// 0x0018
struct FPaintWithOverride
{
	class UProductPaint_TA*                            PaintToOverride;                                  		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UProductOverride_TA*>                 Overrides;                                        		// 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct TAGame._Types_TA.PlayerActorIDPair
// 0x0050
struct FPlayerActorIDPair
{
	int                                                ActorID;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutDatas
// 0x0020
struct FClientLoadoutDatas
{
	struct FClientLoadoutData                          Loadouts[0x2];                                    		// 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PRI_TA.SkillTierData
// 0x0008
struct FSkillTierData
{
	unsigned char                                      Tier;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      bReplicated : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.AdManager_TA.BillboardData
// 0x0014
struct FBillboardData
{
	struct FString                                     MaterialName;                                     		// 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                ZoneID;                                           		// 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.AdManager_TA.BillboardUpdateRequestData
// 0x0020
struct FBillboardUpdateRequestData
{
	int                                                ZoneID;                                           		// 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int                                                MaterialIndex;                                    		// 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FString                                     MaterialName;                                     		// 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0018 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.RPC_AdsGet_TA.AdInfo
// 0x0020
struct FAdInfo
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                ZoneID;                                           		// 0x0010 (0x0004) [0x0000000000000000]               
	unsigned long long                                 UTCEndTime;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.AdManager_TA.CachedAdImageData
// 0x0020
struct FCachedAdImageData
{
	struct FString                                     ImageURL;                                         		// 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long long                                 CacheEndTime;                                     		// 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTexture2DDynamic*                           ImageTexture;                                     		// 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.BTLockCollection.TimedLock
// 0x0010
struct FTimedLock
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ReleaseTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bLockedOneFrame : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.AIController_TA.CachedProxyData
// 0x005C
struct FCachedProxyData
{
	class UBTProxyType*                                Type;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	struct FAIProxyData                                Data;                                             		// 0x0010 (0x0048) [0x0000000000000000]               
	float                                              CacheTime;                                        		// 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.AIController_TA.CachedTargetData
// 0x005C
struct FCachedTargetData
{
	class UBTTarget*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	struct FAIProxyData                                Data;                                             		// 0x0010 (0x0048) [0x0000000000000000]               
	float                                              CacheTime;                                        		// 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.AIController_TA.SkillRange
// 0x000C
struct FSkillRange
{
	float                                              Easy;                                             		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Hard;                                             		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclePoly
// 0x0020
struct FCachedObstaclePoly
{
	struct FPointer                                    Poly;                                             		// 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FPlane                                      Plane;                                            		// 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclesData
// 0x0028
struct FCachedObstaclesData
{
	struct FVector                                     CarLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     CarNavMeshLocation;                               		// 0x000C (0x000C) [0x0000000000000000]               
	TArray<struct FCachedObstaclePoly>                 Polys;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AIManager_TA.CachedNavMeshLocation
// 0x0020
struct FCachedNavMeshLocation
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     NavMeshLocation;                                  		// 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     OldActorLocation;                                 		// 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBActor_TA.WorldContactData
// 0x0028
struct FWorldContactData
{
	unsigned long                                      bHasContact : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                           		// 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBActor_TA.NetworkSyncSettingsData
// 0x0020
struct FNetworkSyncSettingsData
{
	float                                              LocationFixRate;                                  		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AngularFixRate;                                   		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDeltaLocation;                                 		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WeldedLerpRate;                                   		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                MinDeltaRotation;                                 		// 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinDeltaLinearVelocity;                           		// 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceReplicationDelay;                            		// 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bDebug : 1;                                       		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.RBActor_TA.TimeOfImpactData
// 0x004C
struct FTimeOfImpactData
{
	float                                              Fraction;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     OtherLocation;                                    		// 0x001C (0x000C) [0x0000000000000000]               
	struct FRotator                                    OtherRotation;                                    		// 0x0028 (0x000C) [0x0000000000000000]               
	struct FVector                                     ImpactLocation;                                   		// 0x0034 (0x000C) [0x0000000000000000]               
	struct FVector                                     ImpactNormal;                                     		// 0x0040 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.PredictedPosition
// 0x0018
struct FPredictedPosition
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.ExplosionData
// 0x0014
struct FExplosionData
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.ExplosionDataExtended
// 0x0020
struct FExplosionDataExtended
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
	class APRI_TA*                                     Scorer;                                           		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.Ball_TA.GoalPenetrationData
// 0x0024
struct FGoalPenetrationData
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     PlaneLocation;                                    		// 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     PlaneNormal;                                      		// 0x0014 (0x000C) [0x0000000000000000]               
	float                                              PenetrationDistance;                              		// 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutOnlineDatas
// 0x0024
struct FClientLoadoutOnlineDatas
{
	struct FClientLoadoutOnlineData                    Loadouts[0x2];                                    		// 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bLoadoutSet : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDeprecated : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.Ball_TA.CarBallInteractionSettings
// 0x0034
struct FCarBallInteractionSettings
{
	unsigned long                                      bSkipScriptForces : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FInterpCurveFloat                           PushFactorCurve;                                  		// 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PushZScale;                                       		// 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PushForwardScale;                                 		// 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRelativeSpeed;                                 		// 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Restitution;                                      		// 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Friction;                                         		// 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.PitchTekDrawingComponent_TA.PitchTekCarBodyContactData
// 0x0010
struct FPitchTekCarBodyContactData
{
	unsigned long                                      bHasContact : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParam
// 0x0008
struct FAnimatedMaterialParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamFloat
// 0x0008(0x0010 - 0x0008)
struct FAnimatedMaterialParamFloat : FAnimatedMaterialParam
{
	class UDistributionFloat*                          Value;                                            		// 0x0008 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamVector
// 0x0008(0x0010 - 0x0008)
struct FAnimatedMaterialParamVector : FAnimatedMaterialParam
{
	class UDistributionVector*                         Value;                                            		// 0x0008 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.BoostMeshOverride
// 0x0020
struct FBoostMeshOverride
{
	class UActorComponent*                             Mesh;                                             		// 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AFXActor_X*                                  CarType;                                          		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     CarTypePath;                                      		// 0x0010 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamColor
// 0x0008(0x0018 - 0x0010)
struct FAnimatedMaterialParamColor : FAnimatedMaterialParamVector
{
	class UDistributionFloat*                          AlphaValue;                                       		// 0x0010 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialMesh
// 0x0064
struct FAnimatedMaterialMesh
{
	struct FName                                       MeshAttachmentName;                               		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                         		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int                                                MaterialIndex;                                    		// 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FBoostMeshOverride>                  MeshOverrides;                                    		// 0x0018 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	TArray<struct FAnimatedMaterialParamFloat>         FloatParams;                                      		// 0x0028 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	TArray<struct FAnimatedMaterialParamVector>        VectorParams;                                     		// 0x0038 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	TArray<struct FAnimatedMaterialParamColor>         ColorParams;                                      		// 0x0048 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class UActorComponent*                             Mesh;                                             		// 0x0058 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              ElapsedTime;                                      		// 0x0060 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.BTComponent.BTStatusLog
// 0x0028
struct FBTStatusLog
{
	class UBTNode*                                     Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Depth;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned char                                      Status;                                           		// 0x000C (0x0001) [0x0000000000000000]               
	struct FString                                     Message;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bSetMessage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCondition : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastEvalTime;                                     		// 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.Camera_TA.ProfileSliderLimits
// 0x000C
struct FProfileSliderLimits
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              interval;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.Camera_TA.SwivelExtent
// 0x000C
struct FSwivelExtent
{
	int                                                PitchMin;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                PitchMax;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                YawMax;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_Car_TA.InterpVector
// 0x0028
struct FInterpVector
{
	float                                              Rate;                                             		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDistance;                                      		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
	unsigned long                                      bInitialized : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Rate_Old;                                         		// 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Velocity;                                         		// 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_BallCam_TA.PlaneSelectData
// 0x000C
struct FPlaneSelectData
{
	float                                              YExtent;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ZExtent;                                          		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxDistance;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_BallCam_TA.AngleSelectData
// 0x0008
struct FAngleSelectData
{
	float                                              MinAngle;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxDistance;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.Vehicle_TA.CarInteractionData
// 0x000C
struct FCarInteractionData
{
	class AVehicle_TA*                                 LastHitCar;                                       		// 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              LastHitTime;                                      		// 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.CarMeshComponent_TA.WheelSkelControlSet
// 0x0020
struct FWheelSkelControlSet
{
	class UWheel_TA*                                   Wheel;                                            		// 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkelControlSingleBone*                      TranslationControl;                               		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkelControlSingleBone*                      SteerControl;                                     		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkelControlSingleBone*                      RollControl;                                      		// 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleWheelSettings
// 0x0008
struct FVehicleWheelSettings
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleAxleSettings
// 0x0028
struct FVehicleAxleSettings
{
	float                                              WheelMeshRadius;                                  		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelWidth;                                       		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelMeshOffsetSide;                              		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVehicleWheelSettings                       LeftWheel;                                        		// 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVehicleWheelSettings                       RightWheel;                                       		// 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelRadius;                                      		// 0x001C (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              WheelOffsetForward;                               		// 0x0020 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              WheelOffsetSide;                                  		// 0x0024 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct TAGame.CarMeshComponentBase_TA.InheritedObjects
// 0x0018
struct FInheritedObjects
{
	class UProductAsset_TA*                            Asset;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     ObjectToEdit;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	class UProductAttribute_InheritCarSetting_TA*      InheritSetting;                                   		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductAttribute_PaintSettings_TA.PaintMaterialGroup
// 0x0010
struct FPaintMaterialGroup
{
	TArray<class UMaterialInterface*>                  Materials;                                        		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductAsset_Skin_TA.ParameterInformation
// 0x0038
struct FParameterInformation
{
	class UProductAsset_PaintFinish_TA*                PaintFinishToApply;                               		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FTextureParameterValue>              TextureParameterValues;                           		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FScalarParameterValue>               ScalarParameterValues;                            		// 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FVectorParameterValue>               VectorParameterValues;                            		// 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.CarStateData
// 0x0010
struct FCarStateData
{
	float                                              Throttle;                                         		// 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              WheelSpeed;                                       		// 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EngineRPM;                                        		// 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EngineLoad;                                       		// 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState
// 0x0038
struct FEngineAudioNativeState
{
	class UEngineAudioComponent_TA*                    Component;                                        		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UEngineAudioProfile_TA*                      Profile;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
	class AVehicle_TA*                                 Car;                                              		// 0x0010 (0x0008) [0x0000000000000000]               
	struct FCarStateData                               OldCarState;                                      		// 0x0018 (0x0010) [0x0000000000000000]               
	struct FCarStateData                               CarState;                                         		// 0x0028 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_Clutched
// 0x0004(0x003C - 0x0038)
struct FEngineAudioNativeState_Clutched : FEngineAudioNativeState
{
	unsigned long                                      bUsingRevLimiter : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_OnGround
// 0x0010(0x0048 - 0x0038)
struct FEngineAudioNativeState_OnGround : FEngineAudioNativeState
{
	float                                              GearSwitchTimeRemaining;                          		// 0x0038 (0x0004) [0x0000000000000000]               
	float                                              RPMShiftUp;                                       		// 0x003C (0x0004) [0x0000000000000000]               
	float                                              RPMShiftDown;                                     		// 0x0040 (0x0004) [0x0000000000000000]               
	int                                                Gear;                                             		// 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_InAir
// 0x0008(0x0044 - 0x003C)
struct FEngineAudioNativeState_InAir : FEngineAudioNativeState_Clutched
{
	float                                              TimeInAir;                                        		// 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.HandlingPreset_TA.VehicleAxleData
// 0x0014
struct FVehicleAxleData
{
	float                                              WheelRadius;                                      		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WheelWidth;                                       		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocalRestPosition;                                		// 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.Team_TA.ReplicatedLogoData
// 0x0008
struct FReplicatedLogoData
{
	int                                                LogoID;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      bSwapColors : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.CarColorSet_TA.DebugColor
// 0x0014
struct FDebugColor
{
	struct FLinearColor                                Color;                                            		// 0x0000 (0x0010) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	unsigned long                                      bPreview : 1;                                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.CarPreviewAnim_TA.PreviewAnimKeyframe
// 0x0038
struct FPreviewAnimKeyframe
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FViewTargetTransitionParams                 BlendParams;                                      		// 0x0018 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BouncyChassisForce;                               		// 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAddRotation : 1;                                 		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAddTranslation : 1;                              		// 0x0034 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct TAGame.OnlineGameParty_TA.PartyMemberLoadout
// 0x00B1
struct FPartyMemberLoadout
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLoadoutData                                Loadout;                                          		// 0x0048 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineProductData>                  OnlineLoadoutData;                                		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                GaragePreviewTeam;                                		// 0x0098 (0x0004) [0x0000000000000000]               
	class ULocalPlayer*                                LocalPlayer;                                      		// 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineProductStoreSet_TA*                   ProductSet;                                       		// 0x00A8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned char                                      SortWeight;                                       		// 0x00B0 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.CrowdActor_TA.CrowdNoiseModifierInstance
// 0x0008
struct FCrowdNoiseModifierInstance
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CrowdActorSettings_TA.StatCrowdNoise
// 0x0010
struct FStatCrowdNoise
{
	class UStatEvent_TA*                               StatEvent;                                        		// 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class UCrowdNoiseModifier_TA*                      Noise;                                            		// 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.BallHitCrowdNoise
// 0x0010
struct FBallHitCrowdNoise
{
	float                                              RelativeSpeed;                                    		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UCrowdNoiseModifier_TA*                      Noise;                                            		// 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.CrowdDefenseSettings
// 0x0014
struct FCrowdDefenseSettings
{
	float                                              DefenseZoneTime;                                  		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DefenseZoneDistance;                              		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ReplayDelay;                                      		// 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugHelpItem
// 0x0030
struct FDebugHelpItem
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugCategory
// 0x0020
struct FDebugCategory
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDebugHelpItem>                      Items;                                            		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleParameterSet
// 0x0020
struct FParticleParameterSet
{
	TArray<struct FParticleSysParam>                   Parameters;                                       		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FParticleSysParam>                   DrivingParameters;                                		// 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleBodyParameterSet
// 0x0018
struct FParticleBodyParameterSet
{
	struct FName                                       AttachmentName;                                   		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FParticleSysParam>                   Parameters;                                       		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.BoostMeshMaterialOverride
// 0x0018
struct FBoostMeshMaterialOverride
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<int>                                        Index;                                            		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.PreviewParticleOverride
// 0x0010
struct FPreviewParticleOverride
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FXAttachmentName;                                 		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.FXActor_Car_TA.WheelFX
// 0x0034
struct FWheelFX
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Velocity;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
	unsigned long                                      bHasContact : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class AFXActor_X*                                  SupersonicFXActor;                                		// 0x0018 (0x0008) [0x0000000000000000]               
	struct FName                                       BoneName;                                         		// 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     BoneOffset;                                       		// 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.AssetAttribute_SoundOverrides_TA.FXAttachmentSoundOverride
// 0x0010
struct FFXAttachmentSoundOverride
{
	struct FName                                       FXName;                                           		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkSoundCue*                                 SoundCue;                                         		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductDatabase_TA.GarageFolderData
// 0x0060
struct FGarageFolderData
{
	TArray<int>                                        FolderIDs;                                        		// 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 ProductIDToFolderID;                              		// 0x0010 (0x0050) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct TAGame.ProductDatabase_TA.TemporaryProduct
// 0x0018
struct FTemporaryProduct
{
	struct FString                                     AssetPath;                                        		// 0x0000 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FName                                       SlotName;                                         		// 0x0010 (0x0008) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct TAGame.XPManager_TA.TitleInfo
// 0x000C
struct FTitleInfo
{
	struct FName                                       Title;                                            		// 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int                                                TitleCap;                                         		// 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct TAGame.Team_TA.TemporarySpawnSpot
// 0x0028
struct FTemporarySpawnSpot
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]               
	float                                              Time;                                             		// 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.MatchSeries_TA.SeriesTeam
// 0x0014
struct FSeriesTeam
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                GamesWon;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GlobalLookupTexture_TA.IntVector
// 0x0008
struct FIntVector
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.MapInfo_TA.WorldColorData
// 0x0040
struct FWorldColorData
{
	struct FLinearColor                                EnvironmentA;                                     		// 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                EnvironmentB;                                     		// 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                SunLight;                                         		// 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                WorldLight;                                       		// 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.MemberTitleStat
// 0x0020
struct FMemberTitleStat
{
	class UStatCategory_TA*                            Category;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	class UStatTitle_TA*                               Title;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                PointsEarned;                                     		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                StatCount;                                        		// 0x0014 (0x0004) [0x0000000000000000]               
	class APRI_TA*                                     MemberPRI;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.FpsBucketRecorder_TA.FpsBucketData
// 0x001C
struct FFpsBucketData
{
	int                                                FPS;                                              		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              GameThreadTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RenderThreadTime;                                 		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              GPUFrameTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AvgFPS;                                           		// 0x0014 (0x0004) [0x0000000000000000]               
	int                                                Count;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfo
// 0x003C
struct FFieldSpawnInfo
{
	struct FVector                                     ExtentLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Extent;                                           		// 0x000C (0x000C) [0x0000000000000000]               
	float                                              Speed;                                            		// 0x0018 (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000000]               
	unsigned char                                      RotationType;                                     		// 0x0028 (0x0001) [0x0000000000000000]               
	struct FVector                                     MaxFieldExtentScale;                              		// 0x002C (0x000C) [0x0000000000000000]               
	unsigned long                                      bSpawnCannon : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.CarSpawnData
// 0x0020
struct FCarSpawnData
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfoPair
// 0x0078
struct FFieldSpawnInfoPair
{
	struct FFieldSpawnInfo                             PlayerSpawn;                                      		// 0x0000 (0x003C) [0x0000000000000000]               
	struct FFieldSpawnInfo                             BallSpawn;                                        		// 0x003C (0x003C) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSetupWave
// 0x0014
struct FFieldSetupWave
{
	TArray<struct FFieldSpawnInfoPair>                 SpawnList;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                MaxWaveLoops;                                     		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.DifficultyInfo
// 0x0028
struct FDifficultyInfo
{
	TArray<struct FFieldSetupWave>                     FieldSetupList;                                   		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                TotalGameEventRounds;                             		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                TotalGameEventRoundsToWin;                        		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ResetCheckTime;                                   		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ResetCheckTimeAfterBallTouch;                     		// 0x001C (0x0004) [0x0000000000000000]               
	float                                              MinBallVelocityForDestroy;                        		// 0x0020 (0x0004) [0x0000000000000000]               
	float                                              BallStartTime;                                    		// 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameInfo_TA.GameEventData
// 0x001C
struct FGameEventData
{
	class AGameEvent_TA*                               Archetype;                                        		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     LaunchOption;                                     		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bDestroyCurrentGame : 1;                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAddAllPlayers : 1;                               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct TAGame.MaxActorsGroup_TA.MaxActorCallback
// 0x0030
struct FMaxActorCallback
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     EnabledDelegates;                                 		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DisabledDelegates;                                		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Distance;                                         		// 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourPlayer
// 0x0060
struct FTourPlayer
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    Avatar;                                           		// 0x0058 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame._TourTypes_TA.TourTeam
// 0x0044
struct FTourTeam
{
	unsigned long long                                 TeamID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FCustomMatchTeamSettings                    Settings;                                         		// 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourPlayer>                         Players;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 Seed;                                             		// 0x0038 (0x0008) [0x0000000000000000]               
	int                                                Difficulty;                                       		// 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessageGroup
// 0x0018
struct FChatPresetMessageGroup
{
	unsigned long                                      bTeam : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessage
// 0x0020
struct FChatPresetMessage
{
	int                                                GroupIndex;                                       		// 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	struct FName                                       Id;                                               		// 0x0004 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bTeam : 1;                                        		// 0x000C (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Chat_TA.GFxChatMessage
// 0x007C
struct FGFxChatMessage
{
	int                                                Team;                                             		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Message;                                          		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned char                                      ChatChannel;                                      		// 0x0028 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bLocalPlayer : 1;                                 		// 0x002C (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bTransient : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FUniqueNetId                                SenderId;                                         		// 0x0030 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bWarning : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetGroupOverride
// 0x0020
struct FChatPresetGroupOverride
{
	int                                                GroupIndex;                                       		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     GroupName;                                        		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int                                                MessageIDOffset;                                  		// 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bTeam : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ActiveChatTab
// 0x0050
struct FActiveChatTab
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FUniqueNetId                                PersonaId;                                        		// 0x0008 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedBindingCategory
// 0x0028
struct FLocalizedBindingCategory
{
	struct FName                                       Category;                                         		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedAction
// 0x0024(0x005C - 0x0038)
struct FLocalizedAction : FBindingAction
{
	struct FString                                     Label;                                            		// 0x0038 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0048 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bRebindable : 1;                                  		// 0x0058 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Controls_TA.UIPlayerBinding
// 0x0014(0x0040 - 0x002C)
struct FUIPlayerBinding : FPlayerBinding
{
	struct FString                                     UIKey;                                            		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedNameData
// 0x0020
struct FLocalizedNameData
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Position;                                         		// 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedDepartmentData
// 0x0020
struct FLocalizedDepartmentData
{
	struct FString                                     DepartmentTitle;                                  		// 0x0000 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FLocalizedNameData>                  Names;                                            		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedPostCreditData
// 0x0020
struct FLocalizedPostCreditData
{
	TArray<struct FString>                             Lines;                                            		// 0x0000 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<unsigned char>                              Platforms;                                        		// 0x0010 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.DepartmentData
// 0x0030
struct FDepartmentData
{
	struct FString                                     DepartmentTitle;                                  		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Name;                                             		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Position;                                         		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Credits_TA.PostCreditData
// 0x0040
struct FPostCreditData
{
	struct FString                                     Line0;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Line1;                                            		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Line2;                                            		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Line3;                                            		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Garage_TA.GarageTeam
// 0x0020
struct FGarageTeam
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                TeamColorID;                                      		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                CustomColorID;                                    		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FProductHashID                              TeamFinishHashID;                                 		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FProductHashID                              CustomFinishHashID;                               		// 0x001C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.ProductHash_TA.ProductHashSource
// 0x0018
struct FProductHashSource
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long long                                 InstanceID;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Map_TA.GFxMapData
// 0x0034
struct FGFxMapData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     FriendlyName;                                     		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture2D*                                  Thumbnail;                                        		// 0x0018 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture2D*                                  LargeImage;                                       		// 0x0020 (0x0008) [0x0000000000000000]               
	class UMapData_TA*                                 Data;                                             		// 0x0028 (0x0008) [0x0000000000000000]               
	int                                                GameMode;                                         		// 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Matchmaking_TA.MessageUpdate
// 0x0018
struct FMessageUpdate
{
	int                                                DelayFromStart;                                   		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     MessageKey;                                       		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Regions_TA.GFxRegion
// 0x0024
struct FGFxRegion
{
	struct FString                                     Id;                                               		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Name;                                             		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_MusicPlayer_TA.GFxMusicPlaylist
// 0x0030
struct FGFxMusicPlaylist
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    Icon;                                             		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0018 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	struct FName                                       PlaylistName;                                     		// 0x001C (0x0008) [0x0000000000000000]               
	class UMusicPlaylist_TA*                           Playlist;                                         		// 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.MusicTheme_TA.PlaylistTrack
// 0x0010
struct FPlaylistTrack
{
	class UAkSoundCue*                                 Track;                                            		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Icon;                                             		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.MusicTheme_TA.PlaylistTitleTrack
// 0x0004(0x0014 - 0x0010)
struct FPlaylistTitleTrack : FPlaylistTrack
{
	float                                              StartupLogoDisplayDurationMS;                     		// 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.MusicPlayerSave_TA.PlaylistState
// 0x000C
struct FPlaylistState
{
	struct FName                                       Playlist;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      bEnabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_Party_TA.GFxPartyMember
// 0x007C
struct FGFxPartyMember
{
	struct FUniqueNetId                                PersonaId;                                        		// 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     PlayerName;                                       		// 0x0048 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     ProfileId;                                        		// 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    PlayerAvatarTexture;                              		// 0x0068 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 ClubID;                                           		// 0x0070 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bSplitScreen : 1;                                 		// 0x0078 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bLocalSplitScreen : 1;                            		// 0x0078 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	unsigned long                                      bHasProfile : 1;                                  		// 0x0078 (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      bPartyLeader : 1;                                 		// 0x0078 (0x0004) [0x0000000040000000] [0x00000008] (CPF_EditInlineNotify)
	unsigned long                                      bIsPlayerTrading : 1;                             		// 0x0078 (0x0004) [0x0000000040000000] [0x00000010] (CPF_EditInlineNotify)
	unsigned long                                      bIsPlayerInMatch : 1;                             		// 0x0078 (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      bPlayerCanTrade : 1;                              		// 0x0078 (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Products_TA.ProductStatInfo
// 0x0040
struct FProductStatInfo
{
	struct FString                                     ProductStatLabel;                                 		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     ProductStatDescription;                           		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     ProductStatValue;                                 		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     CertifiedStatLabel;                               		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_ReplayViewer_TA.LocalizedCameraMode
// 0x0030
struct FLocalizedCameraMode
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bDisabled : 1;                                    		// 0x0008 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.Replay_TA.TimelineKeyframe
// 0x000C
struct FTimelineKeyframe
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                frame;                                            		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_Season_TA.SeasonWeek
// 0x0004
struct FSeasonWeek
{
	unsigned long                                      bWinner : 1;                                      		// 0x0000 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.ProductTemplate_TA.ProductReplacement2
// 0x0018
struct FProductReplacement2
{
	TArray<unsigned char>                              Platforms;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UProduct_TA*                                 Replacement;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxLogoData
// 0x002C
struct FGFxLogoData
{
	struct FName                                       AssetName;                                        		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture*                                    Logo;                                             		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                TeamColor;                                        		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                CustomColor;                                      		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     DefaultTeamName;                                  		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bIsBotTeam : 1;                                   		// 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxBotData
// 0x0020
struct FGFxBotData
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Id;                                               		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.SaveData_TA.OptionsValue
// 0x0018
struct FOptionsValue
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Value;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Settings_TA.BindingPreset
// 0x0018
struct FBindingPreset
{
	struct FName                                       PresetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     DisplayName;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.UserSettingObserverEventCache_TA.SettingEvent
// 0x0060
struct FSettingEvent
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Id;                                               		// 0x0048 (0x0008) [0x0000000000000000]               
	struct FString                                     Value;                                            		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Stats_TA.GFxStatData
// 0x0050
struct FGFxStatData
{
	struct FString                                     Id;                                               		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Name;                                             		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     DisplayValue;                                     		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    Texture;                                          		// 0x0030 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0038 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UClass*                                      DisplayProductStatClass;                          		// 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Training_TA.UseAction
// 0x0020
struct FUseAction
{
	struct FString                                     ActionName;                                       		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     LocalizedActionName;                              		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.VoteActor_TA.Voter
// 0x0009
struct FVoter
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned char                                      Status;                                           		// 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxEngine_TA.SoundStateItem
// 0x0011
struct FSoundStateItem
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxShell_X*                                 Shell;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned char                                      Priority;                                         		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.HUDBase_TA.ChatMessage
// 0x0080
struct FChatMessage
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	class ATeam_TA*                                    Team;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FString                                     PlayerName;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Message;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      ChatChannel;                                      		// 0x0030 (0x0001) [0x0000000000000000]               
	unsigned long                                      bPreset : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueNetId                                Recipient;                                        		// 0x0038 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FaceIt_TA.FaceItMatchInfo
// 0x0034
struct FFaceItMatchInfo
{
	int                                                MatchID;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ServerId;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
	struct FString                                     TeamNameA;                                        		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     TeamNameB;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bIsSpectator : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsCrossPlatform : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                TeamSize;                                         		// 0x002C (0x0004) [0x0000000000000000]               
	int                                                PartnerID;                                        		// 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxHUD_TA.ScreenLocation
// 0x0010
struct FScreenLocation
{
	struct FVector                                     ScreenPos;                                        		// 0x0000 (0x000C) [0x0000000000000000]               
	unsigned long                                      bOffScreen : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Replay_TA.ReplayLogItem
// 0x0028
struct FReplayLogItem
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FString                                     Text;                                             		// 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayScoreData
// 0x0019
struct FReplayScoreData
{
	class APRI_TA*                                     ScoredBy;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	class APRI_TA*                                     AssistedBy;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Speed;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Time;                                             		// 0x0014 (0x0004) [0x0000000000000000]               
	unsigned char                                      ScoreTeam;                                        		// 0x0018 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.ImpactEffectsComponent_TA.CollisionEffectData
// 0x0058
struct FCollisionEffectData
{
	class UPhysicalMaterial*                           PhysMat;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FEffectsMapping                             ImpactEffects;                                    		// 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                      		// 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                        		// 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     Momentum;                                         		// 0x0038 (0x000C) [0x0000000000000000]               
	float                                              ImpactMomentum;                                   		// 0x0044 (0x0004) [0x0000000000000000]               
	float                                              SlideMomentum;                                    		// 0x0048 (0x0004) [0x0000000000000000]               
	int                                                PhysicsFrame;                                     		// 0x004C (0x0004) [0x0000000000000000]               
	class AActor*                                      HitActor;                                         		// 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.OnlineGameReservations_TA.ReservationLoadout
// 0x0058
struct FReservationLoadout
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        ProductIDs;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PlayerController_TA.ChatSpamData
// 0x0018
struct FChatSpamData
{
	float                                              RiseAmount;                                       		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RiseMultiplier;                                   		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecayRate;                                        		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                         		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              LastChatTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PlayerController_TA.CrosshairExtentInfo
// 0x0010
struct FCrosshairExtentInfo
{
	struct FVector                                     Extent;                                           		// 0x0000 (0x000C) [0x0000000000000000]               
	float                                              minDot;                                           		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchGame
// 0x0018
struct FTourMatchGame
{
	int                                                GameTimeSeconds;                                  		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      bOverTime : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAborted : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long long                                 Winner;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                Scores[0x2];                                      		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourMatch
// 0x0030
struct FTourMatch
{
	int                                                MatchID;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long long                                 Teams[0x2];                                       		// 0x0008 (0x0010) [0x0000000000000000]               
	unsigned long long                                 Winner;                                           		// 0x0018 (0x0008) [0x0000000000000000]               
	TArray<struct FTourMatchGame>                      Games;                                            		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourPlayerStats
// 0x005C
struct FTourPlayerStats
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Score;                                            		// 0x0048 (0x0004) [0x0000000000000000]               
	int                                                Saves;                                            		// 0x004C (0x0004) [0x0000000000000000]               
	int                                                Shots;                                            		// 0x0050 (0x0004) [0x0000000000000000]               
	int                                                Goals;                                            		// 0x0054 (0x0004) [0x0000000000000000]               
	int                                                Assists;                                          		// 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.MergePartyEvent_TA.MergePartyReplicatedData
// 0x0240
struct FMergePartyReplicatedData
{
	struct FUniqueNetId                                LeaderID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                InviteeIDs[0x7];                                  		// 0x0048 (0x01F8) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PRI_TA.ClientOnlineProductStat
// 0x000C
struct FClientOnlineProductStat
{
	unsigned long long                                 InstanceID;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PRI_TA.OnlineProductStat
// 0x0010
struct FOnlineProductStat
{
	unsigned long long                                 InstanceID;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	class UProductStat_TA*                             ProductStat;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.PRI_TA.StatCooldown
// 0x000C
struct FStatCooldown
{
	class UStatEvent_TA*                               Stat;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              UnlockWorldTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductAsset_TA.ProductReplacement
// 0x0018
struct FProductReplacement
{
	TArray<unsigned char>                              Platforms;                                        		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UProductAsset_TA*                            Replacement;                                      		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAttribute_SpecialEditionSettings_TA.SpecialEditionConfig
// 0x0010
struct FSpecialEditionConfig
{
	class UProductSpecialEdition_TA*                   SpecialEdition;                                   		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UProductAssetReference_TA*                   SpecialEditionProductAsset;                       		// 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct TAGame.ProductAsset_Body_TA.TeamPaintFinish
// 0x0010
struct FTeamPaintFinish
{
	class UProductAsset_PaintFinish_TA*                TeamFinish;                                       		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UProductAsset_PaintFinish_TA*                CustomFinish;                                     		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_Body_TA.BoostAttachmentToggle
// 0x0028
struct FBoostAttachmentToggle
{
	struct FName                                       BoostAttachment;                                  		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UFXActorEvent_X*>                     AttachAny;                                        		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                        		// 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.StatFactory_TA.StatEventCollection
// 0x0158
struct FStatEventCollection
{
	class UStatEvent_TA*                               Win;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Loss;                                             		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               TimePlayed;                                       		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Shot;                                             		// 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Assist;                                           		// 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Center;                                           		// 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Clear;                                            		// 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               PoolShot;                                         		// 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Goal;                                             		// 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               AerialGoal;                                       		// 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BicycleGoal;                                      		// 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BulletGoal;                                       		// 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BackwardsGoal;                                    		// 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               LongGoal;                                         		// 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               OvertimeGoal;                                     		// 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               TurtleGoal;                                       		// 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               AerialHit;                                        		// 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BicycleHit;                                       		// 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BulletHit;                                        		// 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               JuggleHit;                                        		// 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FirstTouch;                                       		// 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BallHit;                                          		// 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Save;                                             		// 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               EpicSave;                                         		// 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FreezeSave;                                       		// 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               HatTrick;                                         		// 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Savior;                                           		// 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Playmaker;                                        		// 0x00D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MVP;                                              		// 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FastestGoal;                                      		// 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               SlowestGoal;                                      		// 0x00F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FurthestGoal;                                     		// 0x00F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               OwnGoal;                                          		// 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MostBallTouches;                                  		// 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FewestBallTouches;                                		// 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               MostBoostPickups;                                 		// 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               FewestBoostPickups;                               		// 0x0120 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               BoostPickups;                                     		// 0x0128 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               CarTouches;                                       		// 0x0130 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Demolition;                                       		// 0x0138 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               Demolish;                                         		// 0x0140 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               LowFive;                                          		// 0x0148 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatEvent_TA*                               HighFive;                                         		// 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.Profile_TA.ProfileProduct
// 0x0018
struct FProfileProduct
{
	unsigned long long                                 InstanceID;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<class UProductAttribute_TA*>                Attributes;                                       		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourSearchSettings
// 0x005C
struct FTourSearchSettings
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                RankMin;                                          		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                RankMax;                                          		// 0x0014 (0x0004) [0x0000000000000000]               
	TArray<int>                                        GameModes;                                        		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             Regions;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                TeamSize;                                         		// 0x0038 (0x0004) [0x0000000000000000]               
	int                                                BracketSize;                                      		// 0x003C (0x0004) [0x0000000000000000]               
	unsigned long                                      bEnableCrossplay : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long long                                 StartTime;                                        		// 0x0048 (0x0008) [0x0000000000000000]               
	unsigned long long                                 EndTime;                                          		// 0x0050 (0x0008) [0x0000000000000000]               
	unsigned long                                      bShowFull : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowIneligibleRank : 1;                          		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame._TourTypes_TA.TourPrivateCredentials
// 0x0020
struct FTourPrivateCredentials
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourReward
// 0x0014
struct FTourReward
{
	TArray<struct FOnlineProductData>                  Rewards;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Placement;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourCreateSettings
// 0x0038
struct FTourCreateSettings
{
	class UTourSettings_TA*                            Settings;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FTourPrivateCredentials                     PrivateSettings;                                  		// 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourReward>                         Rewards;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourServerSettings
// 0x00DC
struct FTourServerSettings
{
	unsigned long long                                 TournamentID;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                MatchID;                                          		// 0x0008 (0x0004) [0x0000000000000000]               
	struct FString                                     GameTags;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      TieBreaker;                                       		// 0x0020 (0x0001) [0x0000000000000000]               
	unsigned char                                      GameMode;                                         		// 0x0021 (0x0001) [0x0000000000000000]               
	TArray<struct FName>                               DisabledMaps;                                     		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                SeriesLength;                                     		// 0x0038 (0x0004) [0x0000000000000000]               
	int                                                TeamSize;                                         		// 0x003C (0x0004) [0x0000000000000000]               
	TArray<struct FTourTeam>                           Teams;                                            		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned long long>                         BotTeams;                                         		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourMatchGame>                      Games;                                            		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        SpectatorPlayerIDs;                               		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                CreatorPlayerID;                                  		// 0x0080 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      MinPlayersPerTeam;                                		// 0x00C8 (0x0001) [0x0000000000000000]               
	unsigned long long                                 MatchExpireTimestamp;                             		// 0x00D0 (0x0008) [0x0000000000000000]               
	int                                                MinPlayersMetWaitTimeSeconds;                     		// 0x00D8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBHistory_TA.RBPhysicsSnapshot
// 0x0070
struct FRBPhysicsSnapshot
{
	struct FReplicatedRBState                          RBState;                                          		// 0x0000 (0x0040) [0x0000000000000000]               
	struct FWorldContactData                           WorldContact;                                     		// 0x0040 (0x0028) [0x0000000000000000]               
	class APhysicsVolume*                              PhysicsVolume;                                    		// 0x0068 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBVehicleHistory_TA.RBVehicleSnapshot
// 0x0178
struct FRBVehicleSnapshot
{
	struct FVehicleInputs                              Input;                                            		// 0x0000 (0x0020) [0x0000000000000000]               
	struct FWheelContactData                           WheelContact0;                                    		// 0x0020 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FWheelContactData                           WheelContact1;                                    		// 0x0070 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FWheelContactData                           WheelContact2;                                    		// 0x00C0 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FWheelContactData                           WheelContact3;                                    		// 0x0110 (0x0050) [0x0000000000080000] (CPF_Component)
	struct FCarInteractionData                         CarInteraction;                                   		// 0x0160 (0x0010) [0x0000000000000000]               
	float                                              OutputHandbrake;                                  		// 0x0170 (0x0004) [0x0000000000000000]               
	int                                                LastHitBallFrame;                                 		// 0x0174 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentSnapshot
// 0x0009
struct FCarComponentSnapshot
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivityTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned char                                      ComponentData;                                    		// 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentHistory
// 0x0024
struct FCarComponentHistory
{
	class ACarComponent_TA*                            CarComponent;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FCarComponentSnapshot>               Snapshots;                                        		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCarComponentSnapshot                       BackupSnapshot;                                   		// 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.Replay_TA.ReplayKeyframe
// 0x000C
struct FReplayKeyframe
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                frame;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                Position;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.Replay_TA.ReplayActorChannel
// 0x0040
struct FReplayActorChannel
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      ActorClass;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       actorName;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	TArray<unsigned char>                              Recent;                                           		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        StillDirty;                                       		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              CloseTime;                                        		// 0x0038 (0x0004) [0x0000000000000000]               
	unsigned long                                      bNetInitial : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlaybackPersistent : 1;                          		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.Replay_TA.CarFrameSettings
// 0x0060
struct FCarFrameSettings
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FClientLoadoutData                          CarLoadout;                                       		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLinearColor                                TeamColor;                                        		// 0x0020 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                AccentColor;                                      		// 0x0030 (0x0010) [0x0000000000000000]               
	TArray<int>                                        PaintIDs;                                         		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        EsportsIDs;                                       		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_TA.SceneFrameCapture
// 0x0038
struct FSceneFrameCapture
{
	struct FName                                       SceneName;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeCaptured;                                     		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CameraFOV;                                        		// 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     CameraLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CameraRotation;                                   		// 0x001C (0x000C) [0x0000000000000000]               
	TArray<struct FCarFrameSettings>                   PlayerCarSettings;                                		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_Soccar_TA.ScoredGoal
// 0x001C
struct FScoredGoal
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                PlayerTeam;                                       		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.Replay_Soccar_TA.ReplayPlayerStats
// 0x003C
struct FReplayPlayerStats
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Platform;                                         		// 0x0010 (0x0001) [0x0000000000000000]               
	unsigned long long                                 OnlineID;                                         		// 0x0018 (0x0008) [0x0000000000000000]               
	int                                                Team;                                             		// 0x0020 (0x0004) [0x0000000000000000]               
	int                                                Score;                                            		// 0x0024 (0x0004) [0x0000000000000000]               
	int                                                Goals;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	int                                                Assists;                                          		// 0x002C (0x0004) [0x0000000000000000]               
	int                                                Saves;                                            		// 0x0030 (0x0004) [0x0000000000000000]               
	int                                                Shots;                                            		// 0x0034 (0x0004) [0x0000000000000000]               
	unsigned long                                      bBot : 1;                                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Replay_Soccar_TA.Highlight
// 0x0014
struct FHighlight
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       CarName;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
	struct FName                                       BallName;                                         		// 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayFocusCar
// 0x0014
struct FReplayFocusCar
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       CarName;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                BallHitIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayIOTaskBase
// 0x0028
struct FReplayIOTaskBase
{
	class UReplay_TA*                                  Replay;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Path;                                             		// 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                            		// 0x0018 (0x0008) [0x0000000000000000]               
	struct FPointer                                    Ar;                                               		// 0x0020 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportTask
// 0x0014(0x003C - 0x0028)
struct FReplayExportTask : FReplayIOTaskBase
{
	TArray<unsigned char>                              Data;                                             		// 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	unsigned long                                      bDebug : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayClassTask
// 0x0010(0x0038 - 0x0028)
struct FReplayClassTask : FReplayIOTaskBase
{
	struct FString                                     ClassPath;                                        		// 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportCallbackData
// 0x0020
struct FReplayExportCallbackData
{
	struct FPointer                                    Task;                                             		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportTask
// 0x0010(0x0038 - 0x0028)
struct FReplayImportTask : FReplayIOTaskBase
{
	TArray<unsigned char>                              Data;                                             		// 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeaderImportTask
// 0x0000(0x0028 - 0x0028)
struct FReplayHeaderImportTask : FReplayIOTaskBase
{
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayTypeData
// 0x0020
struct FReplayTypeData
{
	struct FString                                     FilePath;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClassPath;                                        		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportCallbackData
// 0x0020
struct FReplayImportCallbackData
{
	struct FPointer                                    Task;                                             		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeadersCountTask
// 0x0028
struct FReplayHeadersCountTask
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<struct FReplayTypeData>                     Replays;                                          		// 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                            		// 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow
// 0x0010
struct FInstanceToSlotRow
{
	unsigned long long                                 InstanceID;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                SlotIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                TeamIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SaveData_TA.PlaylistSkillData
// 0x000C
struct FPlaylistSkillData
{
	int                                                Playlist;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Tier;                                             		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                MatchesPlayed;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SeqAct_DriveSpline_TA.CarSplineData
// 0x0018
struct FCarSplineData
{
	class ACar_TA*                                     Car;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	class ASplineActor*                                Spline;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
	float                                              DistanceAlongSpline;                              		// 0x0010 (0x0004) [0x0000000000000000]               
	unsigned long                                      bReachedSpline : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.SeqAct_SpawnCarColors_TA.SpawnCarColorSet
// 0x000C
struct FSpawnCarColorSet
{
	class UCarColorSet_TA*                             ColorSet;                                         		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bRender : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct TAGame.SkelControlSingleBoneCopy_TA.AxisConversion
// 0x000C
struct FAxisConversion
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned char                                      Source;                                           		// 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.StatFactory_TA.BallInfo
// 0x003C
struct FBallInfo
{
	class ABall_TA*                                    Ball;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	class UGoal_TA*                                    ShotGoal;                                         		// 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UGoal_TA*                                    RedZoneGoal;                                      		// 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class APRI_TA*                                     RedZonePRI;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
	int                                                RedZoneHitID;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	float                                              GroundHitTime;                                    		// 0x0024 (0x0004) [0x0000000000000000]               
	float                                              JuggleTime;                                       		// 0x0028 (0x0004) [0x0000000000000000]               
	float                                              SpecialHitTime;                                   		// 0x002C (0x0004) [0x0000000000000000]               
	float                                              BallHitTime;                                      		// 0x0030 (0x0004) [0x0000000000000000]               
	float                                              SaveTime;                                         		// 0x0034 (0x0004) [0x0000000000000000]               
	float                                              ShotTime;                                         		// 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.StatFactory_TA.StatGroupCollection
// 0x0030
struct FStatGroupCollection
{
	class UStatGroup_TA*                               Wins;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Losses;                                           		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Goals;                                            		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Saves;                                            		// 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Shots;                                            		// 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatGroup_TA*                               Assists;                                          		// 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.Tutorial_TA.ButtonInfo
// 0x002C
struct FButtonInfo
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ClickDelegate;                                    		// 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCorrectAnswer : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.Tutorial_TA.ActionNameInfo
// 0x0010
struct FActionNameInfo
{
	TArray<struct FName>                               ActionNames;                                      		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Tutorial_TA.MessageInfo
// 0x0040
struct FMessageInfo
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Body;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FButtonInfo>                         Buttons;                                          		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FActionNameInfo>                     ActionNameList;                                   		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.VehiclePickup_TA.PickupData
// 0x000C
struct FPickupData
{
	class ACar_TA*                                     Instigator;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      bPickedUp : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.VehiclePickup_TA.PickupData2
// 0x0009
struct FPickupData2
{
	class ACar_TA*                                     Instigator;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned char                                      PickedUp;                                         		// 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCurrencyInfo
// 0x0008
struct FShopCurrencyInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.DestructionProductValue
// 0x0018
struct FDestructionProductValue
{
	unsigned long long                                 ProductInstanceID;                                		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FShopCurrencyInfo>                   Value;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopData
// 0x0058
struct FShopData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Title;                                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Type;                                             		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 StartDate;                                        		// 0x0038 (0x0008) [0x0000000000000000]               
	unsigned long long                                 EndDate;                                          		// 0x0040 (0x0008) [0x0000000000000000]               
	struct FString                                     LogoURL;                                          		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopDeliverable
// 0x0050
struct FShopDeliverable
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 Id;                                               		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FProductHashID                              HashID;                                           		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bOwned : 1;                                       		// 0x0014 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	struct FOnlineProductData                          Product;                                          		// 0x0018 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopPrice
// 0x0008
struct FShopPrice
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopDiscount
// 0x002C
struct FShopDiscount
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ShopItemCostID;                                   		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 StartDate;                                        		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 EndDate;                                          		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FShopPrice>                          Price;                                            		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                Quantity;                                         		// 0x0028 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCost
// 0x0069
struct FShopCost
{
	int                                                ShopItemCostID;                                   		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FShopPrice>                          Price;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FShopDiscount                               Discount;                                         		// 0x0018 (0x0030) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long long                                 StartDate;                                        		// 0x0048 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 EndDate;                                          		// 0x0050 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FShopDiscount>                       BulkDiscounts;                                    		// 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned char                                      DisplayTypeID;                                    		// 0x0068 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.OnlineShopAttribute
// 0x0018
struct FOnlineShopAttribute
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Value;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.ShopItem
// 0x00B8
struct FShopItem
{
	int                                                ShopItemID;                                       		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      Purchasable : 1;                                  		// 0x0004 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	int                                                PurchasedQuantity;                                		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                MaxQuantityPerPlayer;                             		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 StartDate;                                        		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 EndDate;                                          		// 0x0018 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FShopDeliverable>                    DeliverableProducts;                              		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	TArray<struct FShopCurrencyInfo>                   DeliverableCurrencies;                            		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	TArray<struct FShopCost>                           Costs;                                            		// 0x0040 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	TArray<struct FString>                             FeaturedCollections;                              		// 0x0050 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	TArray<int>                                        ShopItemLocations;                                		// 0x0060 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Title;                                            		// 0x0070 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	TArray<struct FOnlineShopAttribute>                Attributes;                                       		// 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     ImageURL;                                         		// 0x00A0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    ItemTexture;                                      		// 0x00B0 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._ShopTypes_TA.CurrencyProductData
// 0x0010
struct U_ShopTypes_TA_FCurrencyProductData
{
	class UProduct_TA*                                 Product;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCurrency
// 0x0058
struct FShopCurrency
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]               
	class UTexture*                                    SmallImage;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	class UTexture*                                    LargeImage;                                       		// 0x0010 (0x0008) [0x0000000000000000]               
	int                                                Amount;                                           		// 0x0018 (0x0004) [0x0000000000000000]               
	struct FString                                     Name;                                             		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     LocalizedName;                                    		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCanBeTraded : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TradeHold;                                        		// 0x0044 (0x0004) [0x0000000000000000]               
	struct U_ShopTypes_TA_FCurrencyProductData         ProductData;                                      		// 0x0048 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame._ShopTypes_TA.ShopCurrencyData
// 0x0008
struct FShopCurrencyData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ArenaReflectionsManager_TA.SlapbackActorSetup
// 0x0018
struct FSlapbackActorSetup
{
	struct FName                                       Bus;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned char                                      Axis;                                             		// 0x0008 (0x0001) [0x0000000000000000]               
	struct FVector                                     FieldLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.ArenaSoundSettings_TA.ArenaStatSound
// 0x0010
struct FArenaStatSound
{
	class UStatEvent_TA*                               StatEvent;                                        		// 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class UAkSoundCue*                                 Sound;                                            		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.AudioPriorityComponent_TA.PriorityCandidate
// 0x0020
struct FPriorityCandidate
{
	class AVehicle_TA*                                 Candidate;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	TArray<struct FString>                             BonusReasons;                                     		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.BallTrajectoryComponent_TA.TrajectorySetup
// 0x0014
struct FTrajectorySetup
{
	float                                              TotalSimulateTime;                                		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      bAlwaysEnabled : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdatePathEveryFrame : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                TotalPoints;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                MaxStepsPerFrame;                                 		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                QuickTrajectorySteps;                             		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.BallTrajectoryComponent_Beam_TA.TrajectoryFX
// 0x0008
struct FTrajectoryFX
{
	class UParticleSystemComponent*                    Particle;                                         		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.BallTrajectoryComponent_Spline_TA.TrajectorySplineFX
// 0x0008
struct FTrajectorySplineFX
{
	class ASplineLoftActorMovable*                     Spline;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.BallTrajectoryComponent_Mesh_TA.MeshInfo
// 0x0038
struct FMeshInfo
{
	class UStaticMeshComponent*                        Meshes;                                           		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000000]               
	int                                                PointIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     MoveDirection;                                    		// 0x0024 (0x000C) [0x0000000000000000]               
	float                                              DistanceAlongPath;                                		// 0x0030 (0x0004) [0x0000000000000000]               
	unsigned long                                      bCrossedZero : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.BreakOutActor_Platform_TA.BreakoutDamageState
// 0x0020
struct FBreakoutDamageState
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000000]               
	class APRI_TA*                                     Causer;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     DamageLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]               
	unsigned long                                      bDirectDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bImmediate : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TAGame.SpecialPickup_TA.PickupReplacement
// 0x0010
struct FPickupReplacement
{
	class UProduct_TA*                                 Body;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	class ASpecialPickup_TA*                           Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioMinMax
// 0x0008
struct FAudioMinMax
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RandRange;                                        		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioGear
// 0x0010
struct FAudioGear
{
	struct FAudioMinMax                                RPMShiftDownRange;                                		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAudioMinMax                                RPMShiftUpRange;                                  		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.OrbitHitHandler_TA.OrbitCarData
// 0x0028
struct FOrbitCarData
{
	class AVehicle_TA*                                 CarHit;                                           		// 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OrbitAxis;                                        		// 0x0008 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OrbitLocation;                                    		// 0x0014 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              RotationAngleRadians;                             		// 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bShouldOrbit : 1;                                 		// 0x0024 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct TAGame.JiggleHitHandler_TA.JiggleCarData
// 0x0025
struct FJiggleCarData
{
	class AVehicle_TA*                                 HitVehicle;                                       		// 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     JiggleAxis;                                       		// 0x0008 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     JiggleStartLocation;                              		// 0x0014 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              JiggleStartTime;                                  		// 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned char                                      OriginalPhysics;                                  		// 0x0024 (0x0001) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.FlockActor_TA.FlockAgent
// 0x0038
struct FFlockAgent
{
	unsigned long                                      bWaitingForOtherAgents : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DistanceAlongSpline;                              		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     Position;                                         		// 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     NormalizedSplineOffset;                           		// 0x0024 (0x000C) [0x0000000000000000]               
	class ASplineActor*                                CurrentSplineActor;                               		// 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.FriendsListUtils_TA.FriendInfoCounts
// 0x0010
struct FFriendInfoCounts
{
	int                                                OnlinePlatform;                                   		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                InGamePlatform;                                   		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                OnlineEpic;                                       		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                InGameEpic;                                       		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.FXActor_BreakoutPlatform_TA.PlatformParam
// 0x0020
struct FPlatformParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           ValueOverTime;                                    		// 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GameObserver_TA.GoalData
// 0x0048
struct FGoalData
{
	class UGoal_TA*                                    Goal;                                             		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     GoalFront;                                        		// 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     GoalForward;                                      		// 0x0014 (0x000C) [0x0000000000000000]               
	float                                              DotToBall;                                        		// 0x0020 (0x0004) [0x0000000000000000]               
	float                                              DistToBall;                                       		// 0x0024 (0x0004) [0x0000000000000000]               
	float                                              BallSpeedTowardsGoal;                             		// 0x0028 (0x0004) [0x0000000000000000]               
	float                                              DotToBallVelocity;                                		// 0x002C (0x0004) [0x0000000000000000]               
	float                                              RawScorability;                                   		// 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Scorability;                                      		// 0x0034 (0x0004) [0x0000000000000000]               
	float                                              Defense;                                          		// 0x0038 (0x0004) [0x0000000000000000]               
	int                                                NumDefensiveCars;                                 		// 0x003C (0x0004) [0x0000000000000000]               
	float                                              Offense;                                          		// 0x0040 (0x0004) [0x0000000000000000]               
	int                                                NumOffensiveCars;                                 		// 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameObserver_TA.BallData
// 0x001C
struct FBallData
{
	class ABall_TA*                                    Ball;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Altitude;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AerialSkill;                                      		// 0x000C (0x0004) [0x0000000000000000]               
	class AVehicle_TA*                                 LastHitBy;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	float                                              LastHitTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameObserver_TA.CarGoalData
// 0x000C
struct FCarGoalData
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Dot;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              DotBetweenBall;                                   		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameObserver_TA.CarData
// 0x0058
struct FCarData
{
	class AVehicle_TA*                                 Car;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Dot;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DistToBall;                                       		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              SpeedTowardsBall;                                 		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimeToBall;                                       		// 0x0014 (0x0004) [0x0000000000000000]               
	struct FCarGoalData                                OffensiveGoal;                                    		// 0x0018 (0x000C) [0x0000000000000000]               
	struct FCarGoalData                                DefensiveGoal;                                    		// 0x0024 (0x000C) [0x0000000000000000]               
	struct FString                                     LastEvent;                                        		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BallHitProbability;                               		// 0x0040 (0x0004) [0x0000000000000000]               
	float                                              Offense;                                          		// 0x0044 (0x0004) [0x0000000000000000]               
	float                                              Defense;                                          		// 0x0048 (0x0004) [0x0000000000000000]               
	float                                              Aerial;                                           		// 0x004C (0x0004) [0x0000000000000000]               
	float                                              PredictedDistToBall;                              		// 0x0050 (0x0004) [0x0000000000000000]               
	float                                              TimeInAir;                                        		// 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.MapDataLoader_TA.MapSelectorPair
// 0x0010
struct FMapSelectorPair
{
	class UMapSet_TA*                                  MapSet;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	class UMapSelector_TA*                             Selector;                                         		// 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.MapDataLoader_TA.MapImageLoadRequest
// 0x0038
struct FMapImageLoadRequest
{
	class UMapData_TA*                                 MapData;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       PackageName;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FString                                     AssetPath;                                        		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.NetworkConfig_TA.NetworkLimit
// 0x0010
struct FNetworkLimit
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OldMin;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OldMax;                                           		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.NetworkInputBuffer_TA.InputBufferStats
// 0x0005
struct FInputBufferStats
{
	unsigned char                                      OverBufferFrames;                                 		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned char                                      UnderBufferFrames;                                		// 0x0001 (0x0001) [0x0000000000000000]               
	unsigned char                                      InputBufferLow;                                   		// 0x0002 (0x0001) [0x0000000000000000]               
	unsigned char                                      InputBufferHigh;                                  		// 0x0003 (0x0001) [0x0000000000000000]               
	unsigned char                                      InputBufferTarget;                                		// 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.NetworkInputBuffer_TA.ClientPacketData
// 0x0030
struct FClientPacketData
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     CameraLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CameraRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]               
	TArray<struct FClientFrameData>                    Frames;                                           		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PhysicsConfig_TA.ContinuousSimTimeScaleSettings
// 0x0034
struct FContinuousSimTimeScaleSettings
{
	float                                              TimeDilations[0x5];                               		// 0x0000 (0x0014) [0x0000000000000000]               
	int                                                Inputs_Starved;                                   		// 0x0014 (0x0004) [0x0000000000000000]               
	int                                                Inputs_Good;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
	int                                                Inputs_Saturated;                                 		// 0x001C (0x0004) [0x0000000000000000]               
	int                                                Inputs_ExtremelySaturated;                        		// 0x0020 (0x0004) [0x0000000000000000]               
	int                                                Inputs_Max;                                       		// 0x0024 (0x0004) [0x0000000000000000]               
	int                                                ExtraBufferMax;                                   		// 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ExtraBufferHistorySeconds;                        		// 0x002C (0x0004) [0x0000000000000000]               
	float                                              ExtraBufferUpdatePeriod;                          		// 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.NetworkInputBuffer_STS_TA.SimTimeAdjustDebugData
// 0x0008
struct FSimTimeAdjustDebugData
{
	float                                              TimeLastSimTimeAdjustStarted;                     		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                NumSimTimeAdjustFrames;                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.OnlineSaveRecord_TA.OnlineSaveObject
// 0x0028
struct FOnlineSaveObject
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Data;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     DataObj;                                          		// 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.PhysicsConfig_TA.SimTimeScaleSettings
// 0x0004
struct FSimTimeScaleSettings
{
	float                                              FixedAdjustSimTimeRate;                           		// 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PremiumSkinSet_TA.PremiumSkinSetItem
// 0x0008
struct FPremiumSkinSetItem
{
	class UPremiumSkin_TA*                             PremiumSkin;                                      		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductAsset_GoalExplosion_TA.IgnoredGoalRotations
// 0x0004
struct FIgnoredGoalRotations
{
	unsigned long                                      bIgnorePitch : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIgnoreYaw : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bIgnoreRoll : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct TAGame.AssetAttribute_TeamEdition_TA.TeamEditionOverrides
// 0x0028
struct FTeamEditionOverrides
{
	class UDataAsset_ESportsTeam_TA*                   ESportsTeam;                                      		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UProductOverride_TA*>                 Overrides;                                        		// 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	TArray<struct FPaintWithOverride>                  PaintOverrides;                                   		// 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductAssetLoader_TA.AssetLoadRequest
// 0x0050
struct FAssetLoadRequest
{
	struct FAssetLoadResult                            Result;                                           		// 0x0000 (0x0020) [0x0000000000000000]               
	class UProduct_TA*                                 Product;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	int                                                LoadOrder;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	unsigned char                                      LoadState;                                        		// 0x002C (0x0001) [0x0000000000000000]               
	unsigned long                                      bIsThumbnailRequest : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             OnLoadedCallback;                                 		// 0x0038 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailRequest
// 0x0030
struct FRenderThumbnailRequest
{
	struct FProductThumbnailResult                     Result;                                           		// 0x0000 (0x0018) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             Callback;                                         		// 0x0018 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailScene
// 0x0030
struct FRenderThumbnailScene
{
	class UProductThumbnail_TA*                        Thumbnail;                                        		// 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UProductAsset_TA*                            Asset;                                            		// 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UThumbnailScene_TA*                          Scene;                                            		// 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	int                                                TextureWidth;                                     		// 0x0020 (0x0004) [0x0000000000000002] (CPF_Const)   
	int                                                TextureHeight;                                    		// 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              NextRenderTime;                                   		// 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bBeingRendered : 1;                               		// 0x002C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	unsigned long                                      bCanceled : 1;                                    		// 0x002C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct TAGame.Ball_Breakout_TA.BreakoutDamage
// 0x0008
struct FBreakoutDamage
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RLBot_Util_TA.PlayerStats
// 0x001C
struct FPlayerStats
{
	int                                                Score;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Goals;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                OwnGoals;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Assists;                                          		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                Saves;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                Shots;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	int                                                Demolitions;                                      		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RLBot_Util_TA.BotLoadout
// 0x0028
struct FBotLoadout
{
	TArray<int>                                        Products;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        Paints;                                           		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      PrimaryColor;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	struct FColor                                      SecondaryColor;                                   		// 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SampleHistory_TA.Sample
// 0x0008
struct FSample
{
	float                                              Low;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              High;                                             		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SampleHistory_TA.GraphSummaryMethod
// 0x000C
struct FGraphSummaryMethod
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	float                                              MaxSampleAge;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      bAbsoluteValue : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataTask
// 0x0018
struct FSaveDataTask
{
	int                                                ControllerIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Path;                                             		// 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataDeleteTask
// 0x0004(0x001C - 0x0018)
struct FSaveDataDeleteTask : FSaveDataTask
{
	int                                                KeepNewestFileCount;                              		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SaveObjectManager_TA.DingoContentCache
// 0x0008
struct FDingoContentCache
{
	unsigned long long                                 UserXUID;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataListFilesTask
// 0x0021(0x0039 - 0x0018)
struct FSaveDataListFilesTask : FSaveDataTask
{
	struct FString                                     Pattern;                                          		// 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<struct FString>                             Files;                                            		// 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	unsigned char                                      Result;                                           		// 0x0038 (0x0001) [0x0000000000000000]               
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataImportTask
// 0x0024(0x003C - 0x0018)
struct FSaveDataImportTask : FSaveDataTask
{
	class UObject*                                     SaveDataObject;                                   		// 0x0018 (0x0008) [0x0000000000100000]               
	unsigned char                                      Result;                                           		// 0x0020 (0x0001) [0x0000000000000000]               
	TArray<unsigned char>                              Data;                                             		// 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	unsigned long                                      bExactFileMatch : 1;                              		// 0x0038 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bPlayerSaveData : 1;                              		// 0x0038 (0x0004) [0x0000000000100000] [0x00000002] 
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataExportTask
// 0x001C(0x0034 - 0x0018)
struct FSaveDataExportTask : FSaveDataTask
{
	TArray<unsigned char>                              Data;                                             		// 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	unsigned long                                      bExactFileMatch : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerSaveData : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEncryptAndCRC : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      Result;                                           		// 0x002C (0x0001) [0x0000000000000000]               
	int                                                KeepNewestSaveFileCount;                          		// 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.SkeletalMeshActorMAT_Products_TA.BothWheelAssets
// 0x0010
struct FBothWheelAssets
{
	class UMeshComponent*                              Left;                                             		// 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMeshComponent*                              Right;                                            		// 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.StatGraphDrawer_TA.SummaryLabel
// 0x0024
struct FSummaryLabel
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                LabelWidth;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                Color;                                            		// 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct TAGame.StatGraphDrawer_TA.GraphLine
// 0x0028
struct FGraphLine
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000100000]               
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000100000]               
	struct FLinearColor                                Color;                                            		// 0x0018 (0x0010) [0x0000000000100000]               
};

// ScriptStruct TAGame.VanityQuery_TA.VanityQueryRequest
// 0x0044
struct FVanityQueryRequest
{
	class UGFxShell_X*                                 Shell;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned char                                      VanityType;                                       		// 0x0008 (0x0001) [0x0000000000000000]               
	TArray<struct FUniqueNetId>                        PlayerIDs;                                        		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             VanityCallback;                                   		// 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                NumIdsToQuery;                                    		// 0x0038 (0x0004) [0x0000000000000000]               
	int                                                NumQueriesCompleted;                              		// 0x003C (0x0004) [0x0000000000000000]               
	unsigned long                                      bForced : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.VanityQuery_TA.VanityQuerySet
// 0x0018
struct FVanityQuerySet
{
	TArray<struct FUniqueNetId>                        PlayerIDs;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      VanityType;                                       		// 0x0010 (0x0001) [0x0000000000000000]               
	unsigned long                                      bForced : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.RPC_PsyNetGetVanities_TA.VanityProductData
// 0x0068
struct FVanityProductData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        VanityTypes;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UOnlineProduct_TA*>                   VanityProducts;                                   		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_PsyNetGetVanities_TA.VanityProductInfo
// 0x0068
struct FVanityProductInfo
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int>                                        VanityTypes;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineProductData>                  ProductData;                                      		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CameraTrack_TA.CameraTrackRotationPoint
// 0x0010
struct FCameraTrackRotationPoint
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                         		// 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.EpicAccountSave_TA.EpicConvertFriendsSaveData
// 0x0014
struct FEpicConvertFriendsSaveData
{
	unsigned char                                      Platform;                                         		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long long                                 LastPromptTime;                                   		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned long                                      bConvertPlatformFriends : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.EulaSave_TA.EulaVersion
// 0x0004
struct FEulaVersion
{
	int                                                TextHash;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.FirstTimeExperienceManager_TA.FTEGroup
// 0x0048
struct FFTEGroup
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     RequirementInfo;                                  		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UTriggerClump_TA*>                    TriggerClumps;                                    		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCanBeDoneAgain : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      GroupUserType;                                    		// 0x002C (0x0001) [0x0000000000000000]               
	int                                                GroupVersion;                                     		// 0x0030 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               Checkpoints;                                      		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FirstTimeExperienceSave_TA.CompletedFTEInfo
// 0x0024
struct FCompletedFTEInfo
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      bHasCompletedGroup : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FName>                               CompletedCheckpoints;                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                GroupVersion;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.FirstTimeExperienceManager_TA.FTELevelData
// 0x0048
struct FFTELevelData
{
	struct FString                                     LevelId;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      SequenceClass;                                    		// 0x0010 (0x0008) [0x0000000000000000]               
	struct FString                                     MapName;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MatchType;                                        		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             AddedInfo;                                        		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FirstTimeExperienceManager_TA.FTEChallengeInfo
// 0x0010
struct FFTEChallengeInfo
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       CheckpointName;                                   		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.FaceItReservationMatchInfo
// 0x000C
struct FFaceItReservationMatchInfo
{
	int                                                PartnerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ServerId;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsCrossPlatform : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame._TourTypes_TA.TournamentResult
// 0x0010
struct FTournamentResult
{
	int                                                Difficulty;                                       		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Placement;                                        		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Score;                                            		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ResultStanding;                                   		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._TourTypes_TA.TournamentEndData
// 0x0070
struct FTournamentEndData
{
	unsigned long long                                 CycleID;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                WeekIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
	TArray<struct FTournamentResult>                   OldWeeklyResults;                                 		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FTournamentResult                           Result;                                           		// 0x0020 (0x0010) [0x0000000000000000]               
	TArray<struct FShopCurrencyInfo>                   CurrencyRewards;                                  		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FShopCurrencyInfo>                   OldWeeklyCurrencies;                              		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FShopCurrencyInfo>                   WeeklyCurrencies;                                 		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FShopCurrencyInfo>                   FinalCurrencies;                                  		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.GFxTournamentReward
// 0x0010
struct FGFxTournamentReward
{
	int                                                Placement;                                        		// 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	unsigned long long                                 InstanceID;                                       		// 0x0008 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._TourTypes_TA.TourPlacementInfo
// 0x0070
struct FTourPlacementInfo
{
	int                                                Placement;                                        		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                Value;                                            		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 TeamID;                                           		// 0x0020 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0028 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._TourTypes_TA.TourLeaderboard
// 0x0040
struct FTourLeaderboard
{
	TArray<struct FTourPlacementInfo>                  TeamGoals;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourPlacementInfo>                  PlayerGoals;                                      		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourPlacementInfo>                  PlayerAssists;                                    		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourPlacementInfo>                  PlayerSaves;                                      		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourBracket
// 0x0078
struct FTourBracket
{
	unsigned long long                                 TournamentID;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FTourTeam>                           Teams;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourMatch>                          Matches;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FTourLeaderboard                            Leaderboard;                                      		// 0x0028 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FShopCurrencyInfo>                   CurrentPayouts;                                   		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchPlayerStats
// 0x0064
struct FTourMatchPlayerStats
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FUniqueNetId                                Id;                                               		// 0x0008 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                Score;                                            		// 0x0050 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Goals;                                            		// 0x0054 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Assists;                                          		// 0x0058 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Saves;                                            		// 0x005C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Shots;                                            		// 0x0060 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchTeamDetails
// 0x0028
struct FTourMatchTeamDetails
{
	unsigned long long                                 TeamID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<int>                                        GoalsPerGame;                                     		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTourMatchPlayerStats>               CumulativePlayerStats;                            		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._TourTypes_TA.QWORDPair
// 0x0010
struct FQWORDPair
{
	unsigned long long                                 A;                                                		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long long                                 B;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.IntPair
// 0x0008
struct FIntPair
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame._TourTypes_TA.TourMatchNode
// 0x002C
struct FTourMatchNode
{
	int                                                MatchID;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Round;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                Order;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	struct FQWORDPair                                  Teams;                                            		// 0x0010 (0x0010) [0x0000000000000000]               
	int                                                NextMatchID;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
	struct FIntPair                                    PrevMatch;                                        		// 0x0024 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEditor_Ring_TA.ActorTouchRecordData
// 0x0014
struct FActorTouchRecordData
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     TouchDirection;                                   		// 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.GameEvent_GameEditor_TA.SpawnArchetypeData
// 0x000C
struct FSpawnArchetypeData
{
	class AActor*                                      Archetype;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                MaxSpawnCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ErrorModals_TA.PendingError
// 0x0028
struct FPendingError
{
	class UError*                                      Error;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      ModalClass;                                       		// 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.MatchCompleteMetrics_TA.MatchCompleteHistory
// 0x0024
struct FMatchCompleteHistory
{
	struct FString                                     MatchGUID;                                        		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MatchCompleteTime;                                		// 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.PrivacyPolicySave_TA.LegalTextVersion
// 0x0004
struct FLegalTextVersion
{
	int                                                TextHash;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductAttribute_InheritCarSetting_TA.InheritedParameter
// 0x0010
struct FInheritedParameter
{
	struct FName                                       ParentParameterName;                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AssetParameterName;                               		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ProductMetrics_TA.ProductMetricsData
// 0x0018
struct FProductMetricsData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductAttribute>             Attributes;                                       		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductMetrics_TA.PaintMetricsData
// 0x0010
struct FPaintMetricsData
{
	unsigned char                                      TeamColorID;                                      		// 0x0000 (0x0001) [0x0000000000000000]               
	int                                                TeamProductID;                                    		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned char                                      CustomColorID;                                    		// 0x0008 (0x0001) [0x0000000000000000]               
	int                                                CustomProductID;                                  		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RewardDrop_TA.GFxLevelThreshold
// 0x0004
struct FGFxLevelThreshold
{
	int                                                TotalXP;                                          		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.RumblePickups_TA.PickupInfo_TA
// 0x001C
struct FPickupInfo_TA
{
	class ASpecialPickup_TA*                           AvailablePickups[0x3];                            		// 0x0000 (0x0018) [0x0000000000000000]               
	unsigned long                                      bItemsArePreview : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.TourStatus_TA.TourStatus
// 0x0028
struct FTourStatus
{
	unsigned long long                                 Id;                                               		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned char                                      Status;                                           		// 0x0008 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long long                                 PlayerTeamID;                                     		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     TeamName;                                         		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.AutoTour_TA.ScheduledTournament
// 0x0030
struct FScheduledTournament
{
	unsigned long long                                 Time;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long long                                 ScheduleID;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FString                                     Description;                                      		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UTourSettings_TA*>                    Tournaments;                                      		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.AutoTour_TA.TournamentWeek
// 0x0010
struct FTournamentWeek
{
	TArray<struct FTournamentResult>                   Results;                                          		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.BotDetection_TA.AggregateInput
// 0x0010
struct FAggregateInput
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AverageHeld;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CurrentDuration;                                  		// 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bLastHeld : 1;                                    		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct TAGame.BotDetection_TA.BinaryInput
// 0x0008
struct FBinaryInput
{
	int                                                ChangeCount;                                      		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      bLastInput : 1;                                   		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct TAGame.BotDetection_TA.PlayerAggregateStats
// 0x00F0
struct FPlayerAggregateStats
{
	class APRI_TA*                                     PRI;                                              		// 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FAggregateInput                             Throttle;                                         		// 0x0050 (0x0010) [0x0000000000000000]               
	struct FAggregateInput                             Jump;                                             		// 0x0060 (0x0010) [0x0000000000000000]               
	struct FAggregateInput                             Handbrake;                                        		// 0x0070 (0x0010) [0x0000000000000000]               
	struct FAggregateInput                             Boost;                                            		// 0x0080 (0x0010) [0x0000000000000000]               
	struct FAggregateInput                             AirRoll;                                          		// 0x0090 (0x0010) [0x0000000000000000]               
	struct FAggregateInput                             CameraRotate;                                     		// 0x00A0 (0x0010) [0x0000000000000000]               
	struct FBinaryInput                                CameraMode;                                       		// 0x00B0 (0x0008) [0x0000000000000000]               
	int                                                BallTouches;                                      		// 0x00B8 (0x0004) [0x0000000000000000]               
	int                                                Clears;                                           		// 0x00BC (0x0004) [0x0000000000000000]               
	int                                                AerialHits;                                       		// 0x00C0 (0x0004) [0x0000000000000000]               
	int                                                JuggleHits;                                       		// 0x00C4 (0x0004) [0x0000000000000000]               
	int                                                BicycleHits;                                      		// 0x00C8 (0x0004) [0x0000000000000000]               
	int                                                BoostPickupPills;                                 		// 0x00CC (0x0004) [0x0000000000000000]               
	int                                                BoostPickupPads;                                  		// 0x00D0 (0x0004) [0x0000000000000000]               
	int                                                AveDistSamples;                                   		// 0x00D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AveDistanceToBall;                                		// 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              TimeDrivingTowardsBall;                           		// 0x00DC (0x0004) [0x0000000000000000]               
	float                                              AveSpeed;                                         		// 0x00E0 (0x0004) [0x0000000000000000]               
	int                                                AveSpeedSampleCount;                              		// 0x00E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TotalIdleSeconds;                                 		// 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              TotalTime;                                        		// 0x00EC (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.AssetAttribute_ChangeProductDrawScale_TA.ProductSlotNewDrawScale
// 0x0010
struct FProductSlotNewDrawScale
{
	float                                              DrawScaleToApply;                                 		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UProductSlot_TA*                             ProductSlotToApplyTo;                             		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.BeamTraceComponent_TA.BeamTraceProps
// 0x0020
struct FBeamTraceProps
{
	float                                              NextTraceTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastWorldLocation;                                		// 0x0004 (0x000C) [0x0000000000000000]               
	unsigned long                                      LastWorldHit : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    PSC;                                              		// 0x0018 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct TAGame.FaceItConfig_TA.PartnerMapping
// 0x0018
struct FPartnerMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FirstTimeExperienceRedefinition_TA.RedefinedInfo
// 0x0040
struct FRedefinedInfo
{
	unsigned char                                      RedefinedAction;                                  		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned char                                      RedefinedType;                                    		// 0x0001 (0x0001) [0x0000000000000000]               
	struct FName                                       GroupName;                                        		// 0x0004 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CheckpointNames;                                  		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UTriggerClump_TA*>                    TriggerClumps;                                    		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       NameValue;                                        		// 0x0030 (0x0008) [0x0000000000000000]               
	int                                                IntValue;                                         		// 0x0038 (0x0004) [0x0000000000000000]               
	unsigned long                                      bValue : 1;                                       		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.RPC_GetDLC_TA.DLCInfo
// 0x000C
struct FDLCInfo
{
	struct FName                                       DLCName;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      bIsNew : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_ContainerDrops_TA.ContainerInfo
// 0x0018
struct FContainerInfo
{
	int                                                SeriesID;                                         		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     PossibleContents;                                 		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetContainerDropTable_TA.RPCContainerDropTable
// 0x0018
struct FRPCContainerDropTable
{
	int                                                SeriesID;                                         		// 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<struct FOnlineProductData>                  Drops;                                            		// 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_PartyInvite_TA.InviteDatabind
// 0x0058
struct FInviteDatabind
{
	struct FUniqueLobbyId                              LobbyId;                                          		// 0x0000 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                FromUser;                                         		// 0x0010 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_PartyInvite_TA.InviteTarget
// 0x0060
struct FInviteTarget
{
	struct FUniqueNetId                                ToPlayer;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             InviteHandler;                                    		// 0x0048 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdExcitementSound
// 0x000C
struct FCrowdExcitementSound
{
	class UAkSoundCue*                                 Sound;                                            		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdExcitementSounds
// 0x0028
struct FCrowdExcitementSounds
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Cooldown;                                         		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FCrowdExcitementSound>               Sounds;                                           		// 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      CompareType;                                      		// 0x0020 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              LastPlayed;                                       		// 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdScoreState
// 0x0010
struct FCrowdScoreState
{
	int                                                MaxIncreaseScoreSeparation;                       		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                MaxDecreaseScoreSeparation;                       		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       StateName;                                        		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdDefense
// 0x000C
struct FCrowdDefense
{
	float                                              DefenseZoneTime;                                  		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DefenseZoneDistance;                              		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ReplayDelay;                                      		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame._CrowdTypes_TA.CrowdValueState
// 0x000C
struct FCrowdValueState
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       StateName;                                        		// 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.CrumbTrails_TA.CrumbTrailData
// 0x0050
struct FCrumbTrailData
{
	struct FName                                       CrumbTrailId;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               CrumbNames;                                       		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UTriggerClump_TA*>                    ActivationTriggers;                               		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UTriggerClump_TA*>                    CompletionOverride;                               		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCompleteOnlyWhenActive : 1;                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRepeatable : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bManualStart : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	class UTriggerCondition_TA*                        ActivationCondition;                              		// 0x0040 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTriggerCondition_TA*                        CompletionCondition;                              		// 0x0048 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.ConsecutiveMatchTracker_TA.MatchData
// 0x004C
struct FMatchData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                ConsecutiveMatchesPlayed;                         		// 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeIn
// 0x0004
struct FTradeIn
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.ListenServer_TA.LoadingPlayer
// 0x0050
struct FLoadingPlayer
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                NumPlayers;                                       		// 0x0048 (0x0004) [0x0000000000000000]               
	float                                              TimeoutTime;                                      		// 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.MapPrefsMetrics_TA.MapPrefsMetric
// 0x0028
struct FMapPrefsMetric
{
	int                                                Playlist;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               Likes;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MapsConfig_TA.OnlineMapData
// 0x000C
struct FOnlineMapData
{
	class UMapData_TA*                                 Map;                                              		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                        		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.MapsConfig_TA.OnlineMapSet
// 0x0020
struct FOnlineMapSet
{
	struct FName                                       SetName;                                          		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FOnlineMapData>                      Maps;                                             		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UMapSet_TA*                                  MapSet;                                           		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.OnlineGamePlayerTitles_TA.CachedPlayerData
// 0x0078
struct FCachedPlayerData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               Titles;                                           		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              CacheTime;                                        		// 0x0058 (0x0004) [0x0000000000000000]               
	class URPC_X*                                      RPC;                                              		// 0x0060 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Callbacks;                                        		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductsConfig_TA.ReplacementProduct
// 0x0048
struct FReplacementProduct
{
	int                                                ProhibitedID;                                     		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      bShowForOwningClient : 1;                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FOnlineProductData                          Replacement;                                      		// 0x0008 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProduct_TA*                           ReplacementInstance;                              		// 0x0040 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.ProductsConfig_TA.SeriesGroup
// 0x0018
struct FSeriesGroup
{
	int                                                SeriesID;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<unsigned char>                              ExcludedQualities;                                		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SpecialEventConfig_TA.DebugMicroEventPlaylistID
// 0x0004
struct FDebugMicroEventPlaylistID
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.SpecialEventConfig_TA.SpecialEventStoreConfigs
// 0x0040
struct FSpecialEventStoreConfigs
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	struct FString                                     TabTitle;                                         		// 0x0008 (0x0010) [0x0000000040400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    TabIconTexture;                                   		// 0x0018 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	unsigned long long                                 StartTime;                                        		// 0x0020 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	unsigned long long                                 EndTime;                                          		// 0x0028 (0x0008) [0x0000000040000001] (CPF_Edit | CPF_EditInlineNotify)
	struct FString                                     TabIconImageURL;                                  		// 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ServerStartVoteEvent_TA.PartyInfo
// 0x0060
struct FPartyInfo
{
	struct FUniqueNetId                                LeaderID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        FollowerIds;                                      		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      VoterOwner;                                       		// 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.TourBracketCache_TA.BracketRequest
// 0x0028
struct FBracketRequest
{
	unsigned long long                                 TourID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourBracketCache_TA.BracketResult
// 0x00B8
struct FBracketResult
{
	unsigned long long                                 TourID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FTourBracket                                Bracket;                                          		// 0x0008 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              RetrieveTime;                                     		// 0x0080 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             BracketChangedCallback;                           		// 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                    		// 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourCredentials_TA.CredentialItem
// 0x0028
struct FCredentialItem
{
	unsigned long long                                 TourID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FTourPrivateCredentials                     Credentials;                                      		// 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourRewards_TA.RewardsResult
// 0x0018
struct FRewardsResult
{
	unsigned long long                                 TourID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FTourReward>                         Rewards;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.TourRewards_TA.RewardsRequest
// 0x0028
struct FRewardsRequest
{
	unsigned long long                                 TourID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	class UAsyncTask*                                  Task;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.UIConfig_TA.XPDataRange
// 0x0020
struct FXPDataRange
{
	int                                                MaxRange;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     IconURL;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    Icon;                                             		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.AutoTourConfig_TA.ScheduleRegion
// 0x0020
struct FScheduleRegion
{
	struct FString                                     Id;                                               		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Label;                                            		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CinematicIntroSequence_TA.PressedAxis
// 0x0010
struct FPressedAxis
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	unsigned char                                      AxisSign;                                         		// 0x0008 (0x0001) [0x0000000000000000]               
	float                                              PressTime;                                        		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CrumbTrailRedefinition_TA.CrumbRedefinedInfo
// 0x0058
struct FCrumbRedefinedInfo
{
	unsigned char                                      RedefinedType;                                    		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned char                                      RedefinedAction;                                  		// 0x0001 (0x0001) [0x0000000000000000]               
	struct FCrumbTrailData                             CrumbData;                                        		// 0x0008 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CurrencyProductSet_TA.CurrencyProduct
// 0x000C
struct FCurrencyProduct
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                CurrencyID;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                Quantity;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ESportConfig_TA.ESportEventData
// 0x00B0
struct FESportEventData
{
	struct FString                                     Image;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Title;                                            		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     URL;                                              		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     UTCStartTime;                                     		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     UTCEndTime;                                       		// 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bStartingSoon : 1;                                		// 0x0060 (0x0004) [0x0000000040002000] [0x00000001] (CPF_Transient | CPF_EditInlineNotify)
	unsigned long                                      bLiveNow : 1;                                     		// 0x0060 (0x0004) [0x0000000040002000] [0x00000002] (CPF_Transient | CPF_EditInlineNotify)
	class UTexture*                                    ImageTexture;                                     		// 0x0068 (0x0008) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                ImageTextureSizeX;                                		// 0x0070 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	int                                                ImageTextureSizeY;                                		// 0x0074 (0x0004) [0x0000000040002000] (CPF_Transient | CPF_EditInlineNotify)
	struct FString                                     StartTime;                                        		// 0x0078 (0x0010) [0x0000000040402000] (CPF_Transient | CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     EndTime;                                          		// 0x0088 (0x0010) [0x0000000040402000] (CPF_Transient | CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long long                                 EpochSoonStartTime;                               		// 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long long                                 EpochStartTime;                                   		// 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long long                                 EpochEndTime;                                     		// 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.GFxData_MenuSequence_TA.MenuSequencePair
// 0x0010
struct FMenuSequencePair
{
	struct FName                                       MenuSequence;                                     		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       MenuID;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSlot
// 0x0040
struct FFilterProductSlot
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     PluralLabel;                                      		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    Icon;                                             		// 0x0028 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0030 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bHasNewItems : 1;                                 		// 0x0030 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	int                                                SlotIndex;                                        		// 0x0034 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                PreviewQuantity;                                  		// 0x0038 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bHidden : 1;                                      		// 0x003C (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSorting
// 0x0011
struct FFilterProductSorting
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned char                                      SortType;                                         		// 0x0010 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSeries
// 0x0018
struct FFilterProductSeries
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	int                                                SeriesID;                                         		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductAttribute
// 0x0028
struct FFilterProductAttribute
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	class UClass*                                      AttributeClass;                                   		// 0x0018 (0x0008) [0x0000000000000000]               
	int                                                PreviewQuantity;                                  		// 0x0020 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bHidden : 1;                                      		// 0x0024 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductQuality
// 0x001C
struct FFilterProductQuality
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned char                                      Quality;                                          		// 0x0014 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                PreviewQuantity;                                  		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.Mutator_Freeplay_TA.RumbleItemIndex
// 0x000C
struct FRumbleItemIndex
{
	class APlayerController_TA*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                ItemIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RewardDropGroup_TA.GFxRewardDrop
// 0x0018
struct FGFxRewardDrop
{
	struct FName                                       RewardName;                                       		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Total;                                            		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Base;                                             		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                BaseLevel;                                        		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_TourSubscriptions_TA.SubscriptionInfo
// 0x0008
struct FSubscriptionInfo
{
	unsigned long long                                 Id;                                               		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.StayAsPartyMetrics_TA.PartyMergeResult
// 0x009C
struct FPartyMergeResult
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                LeaderID;                                         		// 0x0048 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bSuccess : 1;                                     		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       FailReason;                                       		// 0x0094 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_BlueprintGarage_TA.BlueprintPreviewProduct
// 0x0020
struct FBlueprintPreviewProduct
{
	int                                                BlueprintProductID;                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FProductHashID                              BlueprintHashID;                                  		// 0x0004 (0x0004) [0x0000000000000000]               
	class UOnlineProduct_TA*                           OnlineProduct;                                    		// 0x0008 (0x0008) [0x0000000000000000]               
	TArray<struct FProductHashID>                      PossibleHashIDsForThisProduct;                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MusicUrlConfig_TA.MusicConfigTrack
// 0x0018
struct FMusicConfigTrack
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     ExternalUrl;                                      		// 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_TourUpdateGame_TA.TeamUpdateInfo
// 0x000C
struct FTeamUpdateInfo
{
	unsigned long long                                 TeamID;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                Difficulty;                                       		// 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_DLC_TA.GFxDLCData
// 0x0060
struct FGFxDLCData
{
	struct FString                                     PackName;                                         		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FName                                       Id;                                               		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                ProductID;                                        		// 0x0018 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     SubItems;                                         		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Price;                                            		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     DiscountPrice;                                    		// 0x0040 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                DiscountPercentage;                               		// 0x0050 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                LabelSlotIndex;                                   		// 0x0054 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bUnlocked : 1;                                    		// 0x0058 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bIsNew : 1;                                       		// 0x0058 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	int                                                PurchaseTime;                                     		// 0x005C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct TAGame.RPC_AchievementDataUpload_TA.AchievementUpload
// 0x001C
struct FAchievementUpload
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     DisplayName;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bOnlineUnlockAuthority : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_MTXGarage_TA.MTXPurchaseInfo
// 0x0090
struct FMTXPurchaseInfo
{
	int                                                CatalogID;                                        		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Title;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                      		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture*                                    Image;                                            		// 0x0028 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     PurchasePrice;                                    		// 0x0030 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     OriginalPrice;                                    		// 0x0040 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                DiscountPercentage;                               		// 0x0050 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     ProductHashIDs;                                   		// 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     BundleCurrencies;                                 		// 0x0068 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bCanBePlayerTraded : 1;                           		// 0x0078 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bIsOwned : 1;                                     		// 0x0078 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	struct FString                                     ImageURL;                                         		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_NotificationManager_TA.GFXNotificationInfo
// 0x0020
struct FGFXNotificationInfo
{
	int                                                NotificationID;                                   		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     TableName;                                        		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UNotification_TA*                            Notification;                                     		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.ProductOverride_ParticleSystemColorParameter_TA.PaintColorParameterOverride
// 0x0028
struct FPaintColorParameterOverride
{
	struct FName                                       PaintParameterName;                               		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      PaintType;                                        		// 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UProductPaint_TA*                            Paint;                                            		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                CustomColor;                                      		// 0x0018 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.ShopAdsConfig_TA.ShopAdData
// 0x0068
struct FShopAdData
{
	struct FString                                     IdleImageURL;                                     		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     HoverImageURL;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClickImageURL;                                    		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    IdleImage;                                        		// 0x0030 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture*                                    HoverImage;                                       		// 0x0038 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	class UTexture*                                    ClickImage;                                       		// 0x0040 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bOpenURLInCoherent : 1;                           		// 0x0048 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	struct FName                                       Section;                                          		// 0x004C (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Link;                                             		// 0x0058 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame._UserBugReportTypes_TA.UserBugReportCategory
// 0x0028
struct FUserBugReportCategory
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ParentId;                                         		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     Label;                                            		// 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CameraState_Lobby_TA.CameraSettings
// 0x0008
struct FCameraSettings
{
	float                                              XOffsetDistance;                                  		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CameraOffsetPitch;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraState_PodiumSpotlight_TA.CachedPodiumCar
// 0x0014
struct FCachedPodiumCar
{
	class ACar_TA*                                     Car;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.CameraStateSelector_Priority_TA.StateParams
// 0x0009
struct FStateParams
{
	class UCameraState_X*                              State;                                            		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Priority;                                         		// 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.GFxData_CarRumble_TA.RumblePickupData
// 0x0020
struct FRumblePickupData
{
	struct FString                                     PickupName;                                       		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                CooldownSeconds;                                  		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	class ASpecialPickup_TA*                           Item;                                             		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_ClubServerBrowser_TA.GFxClubServer
// 0x0018
struct FGFxClubServer
{
	class UClubServerResult_X*                         Server;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     ServerName;                                       		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_CrumbTrails_TA.CrumbTrailName
// 0x0008
struct FCrumbTrailName
{
	struct FName                                       CrumbName;                                        		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_CustomTeams_TA.GFxCustomTeamSettings
// 0x0018
struct FGFxCustomTeamSettings
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                TeamColorID;                                      		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                CustomColorID;                                    		// 0x0014 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_FreeToPlayRewards_TA.CompensationItem
// 0x0004
struct FCompensationItem
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_LoadoutSets_TA.GFxLoadoutSet
// 0x0018
struct FGFxLoadoutSet
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bEquipped : 1;                                    		// 0x0014 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapType
// 0x0020
struct FGFxMapType
{
	struct FName                                       MapTypeID;                                        		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UMapSet_TA*                                  MapSet;                                           		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxPlaylistType
// 0x0018
struct FGFxPlaylistType
{
	struct FName                                       PlaylistTypeID;                                   		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPlaylist
// 0x002C
struct FGFxMapPlaylist
{
	struct FName                                       PlaylistId;                                       		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       PlaylistTypeID;                                   		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                LikesRemaining;                                   		// 0x0020 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                DislikesRemaining;                                		// 0x0024 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bOverrideGlobal : 1;                              		// 0x0028 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPreference
// 0x0031
struct FGFxMapPreference
{
	struct FName                                       MapID;                                            		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       MapTypeID;                                        		// 0x0008 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       PlaylistId;                                       		// 0x0010 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Label;                                            		// 0x0018 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	class UTexture2D*                                  Thumbnail;                                        		// 0x0028 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned char                                      Preference;                                       		// 0x0030 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_MapSelection_TA.GFxMapSelectionData
// 0x000C
struct FGFxMapSelectionData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0008 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTCatalogInfo
// 0x0088
struct FMTCatalogInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Title;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Description;                                      		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ImageURL;                                         		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineProductData>                  Items;                                            		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FCurrency>                           Currencies;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlatformProductID;                                		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Category;                                         		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int                                                Price;                                            		// 0x0078 (0x0004) [0x0000000000000000]               
	int                                                OriginalPrice;                                    		// 0x007C (0x0004) [0x0000000000000000]               
	int                                                DiscountPercentage;                               		// 0x0080 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsOwned : 1;                                     		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_MTXGarage_TA.CartInfo
// 0x0008
struct FCartInfo
{
	int                                                CatalogID;                                        		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.RPC_MicroTransactions_StartPurchase_TA.MTCartItem
// 0x0008
struct FMTCartItem
{
	int                                                CatalogID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Mutators_TA.ModeMapPair
// 0x000C
struct FModeMapPair
{
	int                                                GameMode;                                         		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       MapName;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_Mutators_TA.CustomGameSetting
// 0x0054
struct FCustomGameSetting
{
	struct FString                                     MutatorCategoryName;                              		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     MutatorCategoryDesc;                              		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     SettingsName;                                     		// 0x0020 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                SettingIndex;                                     		// 0x0030 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       InternalName;                                     		// 0x0034 (0x0008) [0x0000000000000000]               
	int                                                GameSettingCategoryIndex;                         		// 0x003C (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               SettingNameExplicit;                              		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bPresetLocked : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.GFxData_PlayerAvatarBorderPreview_TA.GFxPlayerAvatarBorderRef
// 0x0010
struct FGFxPlayerAvatarBorderRef
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxData_PlayerAvatarBorder_TA*              PlayerAvatarBorder;                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_PlayerAvatarPreview_TA.GFxPlayerAvatarRef
// 0x0010
struct FGFxPlayerAvatarRef
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxData_PlayerAvatar_TA*                    PlayerAvatar;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_PlayerBanners_TA.GFxPlayerBannerRef
// 0x0010
struct FGFxPlayerBannerRef
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxData_PlayerBanner_TA*                    PlayerBanner;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_PsyTag_TA.GFxPsyTagSearchResult
// 0x004C
struct FGFxPsyTagSearchResult
{
	struct FUniqueNetId                                PersonaId;                                        		// 0x0000 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                NumFriendsInCommon;                               		// 0x0048 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChat
// 0x0021
struct FLocalizedQuickChat
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Message;                                          		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned char                                      QuickChatState;                                   		// 0x0020 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChatBinding
// 0x0038
struct FLocalizedQuickChatBinding
{
	struct FString                                     MessageId;                                        		// 0x0000 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Message;                                          		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int                                                Group;                                            		// 0x0020 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Action;                                           		// 0x0028 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassReward
// 0x0014
struct FRocketPassReward
{
	int                                                CurrencyID;                                       		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              Amount;                                           		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Tier;                                             		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassCurrencyReward
// 0x0000(0x0014 - 0x0014)
struct FRocketPassCurrencyReward : FRocketPassReward
{
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassProduct
// 0x0008
struct FRocketPassProduct
{
	struct FProductHashID                              HashID;                                           		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Tier;                                             		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassXPReward
// 0x0000(0x0014 - 0x0014)
struct FRocketPassXPReward : FRocketPassReward
{
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventReward
// 0x003C
struct FSpecialEventReward
{
	int                                                StoreProductID;                                   		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                ProductID;                                        		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                SeriesID;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                CurrencyID;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	int                                                MaxQuantityPerPlayer;                             		// 0x0014 (0x0004) [0x0000000000000000]               
	int                                                PurchasedQuantity;                                		// 0x0018 (0x0004) [0x0000000000000000]               
	TArray<struct FOnlineProductAttribute>             Attributes;                                       		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FXPRewardData                               XPReward;                                         		// 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventStore
// 0x0018
struct FSpecialEventStore
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FSpecialEventReward>                 Rewards;                                          		// 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_SpecialEventStore_TA.GFxSpecialEventReward
// 0x0020
struct FGFxSpecialEventReward
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FProductHashID                              HashID;                                           		// 0x0004 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                StoreProductID;                                   		// 0x0008 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int                                                Remaining;                                        		// 0x0010 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FXPRewardData                               XPReward;                                         		// 0x0014 (0x000C) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_TourBracketMatchTeamDetails_TA.TeamGameStats
// 0x0004
struct FTeamGameStats
{
	int                                                Goals;                                            		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_TourPlatforms_TA.GFxTourPlatformGroup
// 0x0024
struct FGFxTourPlatformGroup
{
	TArray<unsigned char>                              Platforms;                                        		// 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     Label;                                            		// 0x0010 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	unsigned long                                      bSelected : 1;                                    		// 0x0020 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.SearchCacheData
// 0x0018
struct FSearchCacheData
{
	float                                              TimeoutTime;                                      		// 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<class UTrainingEditorData_TA*>              TrainingModes;                                    		// 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData
// 0x0028
struct FFavoritedFileMetaData
{
	struct FString                                     Code;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 UpdatedAt;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	struct FString                                     Filename;                                         		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.CachedDownloadedFile
// 0x0020
struct FCachedDownloadedFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Code;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair
// 0x0018
struct FCodeTimePair
{
	struct FString                                     Code;                                             		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 UpdatedAt;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeTag
// 0x0001
struct FTrainingModeTag
{
	unsigned char                                      Tag;                                              		// 0x0000 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeDifficulty
// 0x0001
struct FTrainingModeDifficulty
{
	unsigned char                                      Difficulty;                                       		// 0x0000 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeType
// 0x0001
struct FTrainingModeType
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
};

// ScriptStruct TAGame.LoadoutSequencer_TA.SequenceData
// 0x0010
struct FSequenceData
{
	class UProductSlot_TA*                             Slot;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	float                                              AnimDelay;                                        		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bAssetLoaded : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TAGame.PlayerReportConfig_TA.PlayerReportReason
// 0x0018
struct FPlayerReportReason
{
	int                                                ReasonID;                                         		// 0x0000 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
};

// ScriptStruct TAGame.ProductAttribute_SwapMICParameterValues_TA.MICSwapParameters
// 0x0018
struct FMICSwapParameters
{
	class UMaterialInstanceConstant*                   MICToChange;                                      		// 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FirstParameter;                                   		// 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SecondParameter;                                  		// 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct TAGame.RPC_GetSpecialEventCurrency_TA.EventCurrencyData
// 0x0018
struct FEventCurrencyData
{
	int                                                CurrencyID;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                PsyonixID;                                        		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                Total;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long long                                 ExpirationTime;                                   		// 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_GetSpecialEvents_TA.SpecialEventData
// 0x002C
struct FSpecialEventData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FString                                     Name;                                             		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long long                                 StartTime;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
	unsigned long long                                 EndTime;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
	int                                                CurrencyID;                                       		// 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.RPC_ProductsDebugAddProduct_TA.AddProductAttribute
// 0x0018
struct FAddProductAttribute
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FString                                     Value;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_PsyNetSetVanity_TA.VanityLoadout
// 0x0014
struct FVanityLoadout
{
	int                                                VanityType;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long long                                 InstanceID;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	int                                                UserColor;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ShopMetrics_TA.ShopItemData
// 0x0008
struct FShopItemData
{
	int                                                ShopItemID;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                NumTimesPreviewed;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ShopMetrics_TA.ShopTabData
// 0x0028
struct FShopTabData
{
	int                                                FromShopID;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                NewShopID;                                        		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long long                                 StartTimestamp;                                   		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned long long                                 EndTimestamp;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
	TArray<struct FShopItemData>                       ItemMetrics;                                      		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SpecialPickup_Football_TA.ThrowSetting
// 0x001C
struct FThrowSetting
{
	float                                              Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              LinearScale;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
	float                                              AngularScale;                                     		// 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MinLinearForce;                                   		// 0x000C (0x0004) [0x0000000000000000]               
	float                                              MaxLinearForce;                                   		// 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MinAngularForce;                                  		// 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MaxAngularForce;                                  		// 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.TourSeeder_TA.TeamSeeds
// 0x0010
struct FTeamSeeds
{
	TArray<unsigned long long>                         Seeds;                                            		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ViewMetrics_TA.InteractableData
// 0x0010
struct FInteractableData
{
	struct FName                                       InteractableDescriptor;                           		// 0x0000 (0x0008) [0x0000000000000000]               
	int                                                InteractableID;                                   		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                NumInteractions;                                  		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct TAGame.ViewMetrics_TA.ViewData
// 0x0028
struct FViewData
{
	int                                                ExitedViewID;                                     		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                EnteredViewID;                                    		// 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long long                                 StartTimestamp;                                   		// 0x0008 (0x0008) [0x0000000000000000]               
	unsigned long long                                 EndTimestamp;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
	TArray<struct FInteractableData>                   InteractableMetrics;                              		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
