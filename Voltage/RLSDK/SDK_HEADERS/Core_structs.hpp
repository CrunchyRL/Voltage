/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: Core_structs.h
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

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Roll;                                             		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Plane
// 0x0004(0x0010 - 0x000C)
struct FPlane : FVector
{
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                D;                                                		// 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Array_Mirror
// 0x0010
struct FArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                ArrayNum;                                         		// 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                ArrayMax;                                         		// 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x0018
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                       		// 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FArray_Mirror                               SecondaryData;                                    		// 0x0008 (0x0010) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              G;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              A;                                                		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                		// 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      G;                                                		// 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      R;                                                		// 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      A;                                                		// 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x002D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   OutVal;                                           		// 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   ArriveTangent;                                    		// 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   LeaveTangent;                                     		// 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   ArriveWeight;                                     		// 0x001C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   LeaveWeight;                                      		// 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      InterpMode;                                       		// 0x002C (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x0011
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0019
struct FInterpCurvePointFloat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OutVal;                                           		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArriveTangent;                                    		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeaveTangent;                                     		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArriveWeight;                                     		// 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeaveWeight;                                      		// 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      InterpMode;                                       		// 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x0011
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0041
struct FInterpCurvePointVector
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OutVal;                                           		// 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveTangent;                                    		// 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveTangent;                                     		// 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveWeight;                                     		// 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveWeight;                                      		// 0x0034 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      InterpMode;                                       		// 0x0040 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x0011
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                           		// 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      YPlane;                                           		// 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      ZPlane;                                           		// 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      WPlane;                                           		// 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BoxExtent;                                        		// 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              SphereRadius;                                     		// 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                               		// 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     v2;                                               		// 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                          		// 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AlphaOut;                                         		// 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AlphaTarget;                                      		// 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                        		// 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned char                                      BlendType;                                        		// 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                         		// 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000000]               
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.OctreeElementId
// 0x000C
struct FOctreeElementId
{
	struct FPointer                                    Node;                                             		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                ElementIndex;                                     		// 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.RawDistribution
// 0x0020
struct FRawDistribution
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]               
	unsigned char                                      Op;                                               		// 0x0001 (0x0001) [0x0000000000000000]               
	unsigned char                                      LookupTableNumElements;                           		// 0x0002 (0x0001) [0x0000000000000000]               
	unsigned char                                      LookupTableChunkSize;                             		// 0x0003 (0x0001) [0x0000000000000000]               
	TArray<float>                                      LookupTable;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LookupTableTimeScale;                             		// 0x0018 (0x0004) [0x0000000000000000]               
	float                                              LookupTableStartTime;                             		// 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0055
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                OutVal;                                           		// 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ArriveTangent;                                    		// 0x0014 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                LeaveTangent;                                     		// 0x0024 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ArriveWeight;                                     		// 0x0034 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                LeaveWeight;                                      		// 0x0044 (0x0010) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      InterpMode;                                       		// 0x0054 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x0011
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0061
struct FInterpCurvePointQuat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      UnknownData00[0xC];                               		// 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                           		// 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       ArriveTangent;                                    		// 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       LeaveTangent;                                     		// 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       ArriveWeight;                                     		// 0x0040 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       LeaveWeight;                                      		// 0x0050 (0x0010) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      InterpMode;                                       		// 0x0060 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x0011
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x007D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 OutVal;                                           		// 0x0004 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 ArriveTangent;                                    		// 0x001C (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 LeaveTangent;                                     		// 0x0034 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 ArriveWeight;                                     		// 0x004C (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 LeaveWeight;                                      		// 0x0064 (0x0018) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      InterpMode;                                       		// 0x007C (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x0011
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                           		// 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                              		// 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Max;                                              		// 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      IsValid;                                          		// 0x0018 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              FOV;                                              		// 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[0x9];                                           		// 0x0000 (0x0024) [0x0000000000000001] (CPF_Edit)    
	float                                              Padding[0x3];                                     		// 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                		// 0x0000 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FSHVector                                   G;                                                		// 0x0030 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FSHVector                                   B;                                                		// 0x0060 (0x0030) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned char                                      W;                                                		// 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x0010
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                ArrayNum;                                         		// 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                ArrayMax;                                         		// 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x001C
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    VertexData;                                       		// 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                Data;                                             		// 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	int                                                Stride;                                           		// 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	int                                                NumVertices;                                      		// 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0054
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                BulkDataFlags;                                    		// 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                ElementCount;                                     		// 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	unsigned long long                                 BulkDataOffsetInFile;                             		// 0x0010 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                BulkDataSizeOnDisk;                               		// 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                SavedBulkDataFlags;                               		// 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                SavedElementCount;                                		// 0x0020 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	unsigned long long                                 SavedBulkDataOffsetInFile;                        		// 0x0028 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                SavedBulkDataSizeOnDisk;                          		// 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    BulkData;                                         		// 0x0038 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                LockStatus;                                       		// 0x0040 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    AttachedAr;                                       		// 0x0048 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                bShouldFreeOnEmpty;                               		// 0x0050 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x0020
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                     		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                InlineData[0x4];                                  		// 0x0008 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                NumBits;                                          		// 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                MaxBits;                                          		// 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0038
struct FSparseArray_Mirror
{
	TArray<int>                                        Elements;                                         		// 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FBitArray_Mirror                            AllocationFlags;                                  		// 0x0010 (0x0020) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                FirstFreeIndex;                                   		// 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                NumFreeIndices;                                   		// 0x0034 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Set_Mirror
// 0x004C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                         		// 0x0000 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                InlineHash;                                       		// 0x0038 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Hash;                                             		// 0x0040 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                HashSize;                                         		// 0x0048 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x0050
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Map_Mirror
// 0x0050
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.IpAddr
// 0x0014
struct FIpAddr
{
	int                                                AddrA;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	int                                                AddrB;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
	int                                                AddrC;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	int                                                AddrD;                                            		// 0x000C (0x0004) [0x0000000000000000]               
	int                                                Port;                                             		// 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.HatPointer
// 0x0008
struct FHatPointer
{
	unsigned long long                                 Dummy;                                            		// 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0008(0x0028 - 0x0020)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                     		// 0x0020 (0x0008) [0x0000000006080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline)
};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008(0x0030 - 0x0028)
struct FMatineeRawDistributionFloat : FRawDistributionFloat
{
	float                                              MatineeValue;                                     		// 0x0028 (0x0004) [0x0000000000000000]               
	unsigned long                                      bInMatinee : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0008(0x0028 - 0x0020)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                     		// 0x0020 (0x0008) [0x0000000006080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline)
};

// ScriptStruct Core.ObjectProvider.ObjectProviderSubscription
// 0x0024
struct FObjectProviderSubscription
{
	class UClass*                                      ObjClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                         		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bFireOnce : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Core.ObjectProvider.ObjectProviderPendingCallback
// 0x0020
struct FObjectProviderPendingCallback
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     Value;                                            		// 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Core.ObjectProvider.ObjectPropertyInjection
// 0x0010
struct FObjectPropertyInjection
{
	class UObject*                                     Subscriber;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	class UObjectProperty*                             Property;                                         		// 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Core._Types_Core.SceNpOnlineId
// 0x0014
struct FSceNpOnlineId
{
	unsigned long long                                 Data[0x2];                                        		// 0x0000 (0x0010) [0x0000000000000000]               
	unsigned char                                      Term;                                             		// 0x0010 (0x0001) [0x0000000000000000]               
	unsigned char                                      Dummy[0x3];                                       		// 0x0011 (0x0003) [0x0000000000000000]               
};

// ScriptStruct Core._Types_Core.SceNpId
// 0x0028
struct FSceNpId
{
	struct FSceNpOnlineId                              Handle;                                           		// 0x0000 (0x0018) [0x0000000000000002] (CPF_Const)   
	unsigned long long                                 Opt;                                              		// 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	unsigned long long                                 Reserved;                                         		// 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core._Types_Core.UniqueNetId
// 0x0042
struct FUniqueNetId
{
	unsigned long long                                 Uid;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	struct FSceNpId                                    NpId;                                             		// 0x0008 (0x0028) [0x0000000000000000]               
	struct FString                                     EpicAccountId;                                    		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      Platform;                                         		// 0x0040 (0x0001) [0x0000000000000000]               
	unsigned char                                      SplitscreenID;                                    		// 0x0041 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core._Types_Core.EncryptedKeyIndex
// 0x0004
struct FEncryptedKeyIndex
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core._Types_Core.ProductHashID
// 0x0004
struct FProductHashID
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.DelegateTracker.AsyncDelegateInfo
// 0x0020
struct FAsyncDelegateInfo
{
	int                                                CallbackId;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             AsyncDelegate;                                    		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
