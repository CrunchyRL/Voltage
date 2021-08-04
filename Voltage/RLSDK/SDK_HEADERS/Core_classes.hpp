/*
#############################################################################################
# Rocket League (210617.48985.332260) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: Core_classes.hpp
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

#define CONST_ZeroRotator                                        Rot(0,0,0)
#define CONST_ZeroVector                                         Vect(0,0,0)
#define CONST_UpVector                                           Vect(0,0,1)
#define CONST_RightVector                                        Vect(0,1,0)
#define CONST_ForwardVector                                      Vect(1,0,0)
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxQWORD                                           0xFFFFFFFFFFFFFFFF
#define CONST_MinInt                                             0x80000000
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EEdition
enum class EEdition : int
{
	Edition_Default                                    = 0,
	Edition_China                                      = 1,
	Edition_END                                        = 2
};

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : int
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_END                                       = 3
};

// Enum Core.Object.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : int
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_END                                    = 3
};

// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : int
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_END                                            = 3
};

// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : int
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_END                                            = 6
};

// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : int
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_END                                            = 3
};

// Enum Core.Object.EAxis
enum class EAxis : int
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_END                                           = 5
};

// Enum Core.Object.ETickingGroup
enum class ETickingGroup : int
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_END                                             = 5
};

// Enum Core.Object.EInputEvent
enum class EInputEvent : int
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_END                                             = 5
};

// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : int
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_END                                            = 7
};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : int
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_END                                          = 5
};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : int
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_END                                          = 3
};

// Enum Core._Types_Core.OnlinePlatform
enum class EOnlinePlatform : int
{
	OnlinePlatform_Unknown                             = 0,
	OnlinePlatform_Steam                               = 1,
	OnlinePlatform_PS4                                 = 2,
	OnlinePlatform_PS3                                 = 3,
	OnlinePlatform_Dingo                               = 4,
	OnlinePlatform_QQ                                  = 5,
	OnlinePlatform_OldNNX                              = 6,
	OnlinePlatform_NNX                                 = 7,
	OnlinePlatform_PsyNet                              = 8,
	OnlinePlatform_Deleted                             = 9,
	OnlinePlatform_WeGame                              = 10,
	OnlinePlatform_Epic                                = 11,
	OnlinePlatform_END                                 = 12
};

// Enum Core._Types_Core.EImageType
enum class EImageType : int
{
	EIT_Unknown                                        = 0,
	EIT_JPEG                                           = 1,
	EIT_PNG                                            = 2,
	EIT_END                                            = 3
};

// Enum Core._Types_Core.EInputAPI
enum class EInputAPI : int
{
	InputAPI_Default                                   = 0,
	InputAPI_SteamInput                                = 1,
	InputAPI_END                                       = 2
};

// Enum Core._Types_Core.EFlushResult
enum class EFlushResult : int
{
	FlushResult_Success                                = 0,
	FlushResult_InProgress                             = 1,
	FlushResult_TimedOut                               = 2,
	FlushResult_END                                    = 3
};

// Enum Core._Types_Generated.EContentKeyIndex_ContinuousIntegration
enum class EContentKeyIndex_ContinuousIntegration : int
{
	ContinuousIntegration_A21E529632046B5DAA3373A6051D7164 = 0,
	ContinuousIntegration_8C0B2C5877659E4548B294EA142D4C7A = 1,
	ContinuousIntegration_BC2E369B178A16B81F7B990426A8D59F = 2,
	ContinuousIntegration_0834F4083483791F04893BE705044600 = 3,
	ContinuousIntegration_END                          = 4
};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate34
enum class EContentKeyIndex_PrimeUpdate34 : int
{
	PrimeUpdate34_92E48285E52D9C5376465AFA3C483D21     = 0,
	PrimeUpdate34_798E5021EB2EE0D9150525103009597E     = 1,
	PrimeUpdate34_3E57F996CC259382D4F9D60DD3411999     = 2,
	PrimeUpdate34_980D75703713C7B361FA6663369415DD     = 3,
	PrimeUpdate34_0BB7B0C3C62B7BC62A8CF5AE4224313F     = 4,
	PrimeUpdate34_16684068F60C3BEF59FCA6681DEFC634     = 5,
	PrimeUpdate34_8638D056E206619C71F7358A3112AA75     = 6,
	PrimeUpdate34_119863391AC5E311B66BF5EB49A7E392     = 7,
	PrimeUpdate34_DCA6627ACE5BE1A3D82E699E38B383BA     = 8,
	PrimeUpdate34_F44577CDD9D45CBF49CEDC32EE829FC1     = 9,
	PrimeUpdate34_4D75D62B40DE98B190090EB2851E7598     = 10,
	PrimeUpdate34_D0378645638D7FE611F959E71B989E88     = 11,
	PrimeUpdate34_F67C94735DF24D72CE6E0983445EFF94     = 12,
	PrimeUpdate34_677E188D9A579ADE3F2CD3747D225C24     = 13,
	PrimeUpdate34_F7E58DABA865EC58A2D4496DE3C4375F     = 14,
	PrimeUpdate34_C2BD319DE1987E7D4DD851CCA2A06FCC     = 15,
	PrimeUpdate34_B8CBE903CC7AE40A7F668F6427E57098     = 16,
	PrimeUpdate34_D0A8BEDB5EB633D376B288A6729F2958     = 17,
	PrimeUpdate34_6D8E086B4A152E4BD9059DC67E9A5330     = 18,
	PrimeUpdate34_D93828EBD836F1BEEF0BA345FF2D7D2B     = 19,
	PrimeUpdate34_584D6260FEA4A45FBEC3729A47F32A2C     = 20,
	PrimeUpdate34_525D1944EF49B6263813E9C33FE9A2E7     = 21,
	PrimeUpdate34_EB7F8E2F3CD896BECB59816B49A8225D     = 22,
	PrimeUpdate34_F53E63F89C250939560481ACF2EB4F57     = 23,
	PrimeUpdate34_1EFD13089FD99C03404F686ABB842FC1     = 24,
	PrimeUpdate34_CE1C329C9C4A36B5347CDDFC34E6FE74     = 25,
	PrimeUpdate34_AA31999372C5419377BC328A124FA260     = 26,
	PrimeUpdate34_1FEC83F0FCACE770E7D580C38DBA0B7C     = 27,
	PrimeUpdate34_380201BF1433CCFDC60B75AA5A1F27A0     = 28,
	PrimeUpdate34_0B5FB027AD52B9D07E7C6610F51D049B     = 29,
	PrimeUpdate34_AAF86940AE1401B7904BB3F1B7F0BF84     = 30,
	PrimeUpdate34_A2EEFC632E25737A361937883AA2B9E3     = 31,
	PrimeUpdate34_25DFE6D61E4B7BB4B8F48EA4C2893C30     = 32,
	PrimeUpdate34_9A1D6F3529477B911753DA025ADE429F     = 33,
	PrimeUpdate34_1CA56D0C508FF3D00C3347E82B5396F8     = 34,
	PrimeUpdate34_E648CD9F3659F31EF46715B3FB73EF16     = 35,
	PrimeUpdate34_36892DC2D16FE232BA96D6E8B9E5288E     = 36,
	PrimeUpdate34_AED24E43D476A4470C99AABEE2C53673     = 37,
	PrimeUpdate34_32B30CAF516C298774B59FC806B3B6AA     = 38,
	PrimeUpdate34_02A902A86328CF57E63A7D1AD763DE60     = 39,
	PrimeUpdate34_C4C41667DE1E754135DE7DB5710A24DD     = 40,
	PrimeUpdate34_6AF47E33D558FC35C2FEB7A9D9ACAC59     = 41,
	PrimeUpdate34_9C6ABEFD5E0C4F2DE3A2F7D146FAF952     = 42,
	PrimeUpdate34_F3CA5A2918490945C363517319A0C2EC     = 43,
	PrimeUpdate34_8592B9C622C8A3189DB3B4E2C2362142     = 44,
	PrimeUpdate34_AC0C2D53149AD444AEFA1F9F7F29D39E     = 45,
	PrimeUpdate34_074B3338DD2160921DB2DF191227F03E     = 46,
	PrimeUpdate34_BF336D6E7DAC9A696838C3A788CEA62E     = 47,
	PrimeUpdate34_67FB8392992984DA262E637A376E2318     = 48,
	PrimeUpdate34_775260504F332F70DB926CD3CD7E63A7     = 49,
	PrimeUpdate34_258F7CD5F76794C5180F23D0AB71E40C     = 50,
	PrimeUpdate34_6177123148139D8930D4DFEA95501359     = 51,
	PrimeUpdate34_A09893A74F7796FC0D23ADDF21E51A68     = 52,
	PrimeUpdate34_72481FA8D257BD5935DC6BFAAFFE37B2     = 53,
	PrimeUpdate34_A8A33573BBF97BC994426669BA945F97     = 54,
	PrimeUpdate34_43A538B20CFD5AE55EBE8327D70618AA     = 55,
	PrimeUpdate34_C309EEE625F26444CB456A7C3738519D     = 56,
	PrimeUpdate34_40370551AA833BA691B954D5F223D20E     = 57,
	PrimeUpdate34_1D49DD289EEBB9EF24BD0DC1DC8790C7     = 58,
	PrimeUpdate34_AAE20A592337576246339356A56D13CC     = 59,
	PrimeUpdate34_44C670308CD575930F330390E81F5DFD     = 60,
	PrimeUpdate34_7EA963419DAF9F1F789AA0BCFA32504F     = 61,
	PrimeUpdate34_418B733466B3543D3FF771D598D8E4F8     = 62,
	PrimeUpdate34_185C6E063F04824C1408EA9670595259     = 63,
	PrimeUpdate34_70F0016A0CCAAB0D71EDF0DA29C52171     = 64,
	PrimeUpdate34_3F24725E47D67DD20FE3AD9F35AEF209     = 65,
	PrimeUpdate34_END                                  = 66
};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate33
enum class EContentKeyIndex_PrimeUpdate33 : int
{
	PrimeUpdate33_9859F4962ED9225261C1735A9B0F6A7F     = 0,
	PrimeUpdate33_C212DFEF60853EEB61ACA8181A89A15F     = 1,
	PrimeUpdate33_C418C87964E1BB0C7DCB3E70779FB44B     = 2,
	PrimeUpdate33_1FEB11B693427C63E457203E461639E3     = 3,
	PrimeUpdate33_4ED08FC09FB52F44407423877E04CACA     = 4,
	PrimeUpdate33_DBFAF049AEB30397815B08553C60FB59     = 5,
	PrimeUpdate33_8A88FA4B1CFBE1E21536C648BBD4F23E     = 6,
	PrimeUpdate33_F59B6D4EFACF226D4B590EB3B22A9C34     = 7,
	PrimeUpdate33_B435739A7F1C97EF5F1D7554AC117749     = 8,
	PrimeUpdate33_3920915610E4452D9178C330AC20EBFA     = 9,
	PrimeUpdate33_BE72EF04B58AF461A7D85A77B48EE37A     = 10,
	PrimeUpdate33_E7BE7D7122884CEEF63FBC297632C761     = 11,
	PrimeUpdate33_F23A298C56E7EBF4CF8C6875F03BFE72     = 12,
	PrimeUpdate33_ECB007102C74731082C7272DD98D502A     = 13,
	PrimeUpdate33_618F822EFD2AA0D7B69A35C84C600564     = 14,
	PrimeUpdate33_E80A98F4841B3861D085BBE347233903     = 15,
	PrimeUpdate33_5EE9F2BC8C9CA242782C40CF779804CE     = 16,
	PrimeUpdate33_3A7BDFD41C45E477C990F83772DDE5FF     = 17,
	PrimeUpdate33_ED459D7A6FE5DBCECABA1F93BD49247B     = 18,
	PrimeUpdate33_6C677BD35A184A2BB0EBAB421BC55E39     = 19,
	PrimeUpdate33_7ED0D8CF98C35C1549F175290231FC02     = 20,
	PrimeUpdate33_E48D95A331BB274C1F99297A1AEF0A9A     = 21,
	PrimeUpdate33_78C0060D1C5191F62C68D4DED6FCE798     = 22,
	PrimeUpdate33_15ABD202609BD1609F930B708BCD7208     = 23,
	PrimeUpdate33_3F18B0F70069D6ADF8C0E2B783B36BC5     = 24,
	PrimeUpdate33_9AF0D8EDFCB91756D4F7048012E922D6     = 25,
	PrimeUpdate33_BE2A12592777B870F55FAD163C043192     = 26,
	PrimeUpdate33_EAA00740DF8EF37816AE479E8CCB20B6     = 27,
	PrimeUpdate33_7110D96C5620E2A3360E3887D254A2D6     = 28,
	PrimeUpdate33_0F7338535499E16C2BF19CB546C7C2A6     = 29,
	PrimeUpdate33_E168E8341CB79082D0D9AA4D1FEC97A8     = 30,
	PrimeUpdate33_5C1562652DB849A2BB8B1779333E573D     = 31,
	PrimeUpdate33_2E512914EDDC939A207DE0F77DDA26CF     = 32,
	PrimeUpdate33_CEE13EA70861968B6AAA07CFA66162DB     = 33,
	PrimeUpdate33_END                                  = 34
};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate32
enum class EContentKeyIndex_PrimeUpdate32 : int
{
	PrimeUpdate32_300CBBF87113F4C1E17912EAAEACCF62     = 0,
	PrimeUpdate32_AC64316796AD89170208EA1ADE72EB53     = 1,
	PrimeUpdate32_9F4361589D74380E0351FCF10A7F2032     = 2,
	PrimeUpdate32_950D6028A559ADDDA77671B90D707A89     = 3,
	PrimeUpdate32_BBCA9FD0992D35DE029D78D34001A3A8     = 4,
	PrimeUpdate32_1BAB656F9A701BF05B8483F5C3E95365     = 5,
	PrimeUpdate32_EB99CF7F2BD77FB03F91DB208B6E3E78     = 6,
	PrimeUpdate32_D1993DE64E44D83188D68A0052953321     = 7,
	PrimeUpdate32_43520ABD8E211AE3EFA707DE4736D7A6     = 8,
	PrimeUpdate32_595CDCCADBF7CF6359DCD9CACA14BF45     = 9,
	PrimeUpdate32_EFEB90A98D01EF42CACDF3C6166A4E6B     = 10,
	PrimeUpdate32_B87BF5D0B9F7DE0B688739F591EEC514     = 11,
	PrimeUpdate32_7AB8B7644C5D85D344D09FF1468C412C     = 12,
	PrimeUpdate32_45F3ADEBE4EB02ABAF7B13185A766207     = 13,
	PrimeUpdate32_1427133C46AA4BAD6F54BC030AC7F9A9     = 14,
	PrimeUpdate32_61C0088685FFBE4E0D6F438B118E5987     = 15,
	PrimeUpdate32_84190309583ABA308C0C2E6621E37B9E     = 16,
	PrimeUpdate32_DE9085DF47CD080E0BC98052B543E1CA     = 17,
	PrimeUpdate32_D71B3C1F2C6CCAE81795D360C9E51B87     = 18,
	PrimeUpdate32_FE659BEDDCA2DCBEBFD0D5A71CE5F55E     = 19,
	PrimeUpdate32_C4CB8C293E93DB50EC6C29DE36C52B90     = 20,
	PrimeUpdate32_CE0E00A1192764DEF4798337C1ACE048     = 21,
	PrimeUpdate32_D5BAADF84D6B7ACAC93AC22539969043     = 22,
	PrimeUpdate32_70F2913F8A944F8E9F578CE3F8D789B2     = 23,
	PrimeUpdate32_374EBD593462DC7180BD4F2F8785F548     = 24,
	PrimeUpdate32_851BE21BC1A5E102E86B4239FF2C7645     = 25,
	PrimeUpdate32_E32780FE596DDD89FDA1CED46D30BA08     = 26,
	PrimeUpdate32_1C213CD84626E67147C1AAF044BCE949     = 27,
	PrimeUpdate32_AE65305403939F84C0F5DE5775770C7A     = 28,
	PrimeUpdate32_0EE4F6E8266F4BAA55F56AA6CAED927E     = 29,
	PrimeUpdate32_654A14F505D929128335F21A88B72936     = 30,
	PrimeUpdate32_B80CDD1F4B9BE4A5C31CF96645FDFAD6     = 31,
	PrimeUpdate32_CA43F5822A576ED8067999E2A43C82FC     = 32,
	PrimeUpdate32_C5C0A837BAC4698316A50EA505F4345D     = 33,
	PrimeUpdate32_F082F05E7D651EDE256CCCC9A0699E15     = 34,
	PrimeUpdate32_D845ECFEEB577D15E6204540A327CD8A     = 35,
	PrimeUpdate32_9B27CA53E1CD25849873E3B0DEAA4265     = 36,
	PrimeUpdate32_66EE45220A851279ECFA9ACDBB520988     = 37,
	PrimeUpdate32_END                                  = 38
};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate31
enum class EContentKeyIndex_PrimeUpdate31 : int
{
	PrimeUpdate31_8416552FC13C775C6325D95DAFD2467C     = 0,
	PrimeUpdate31_4D7DD3DF13D1A7A874987ED3471E73C8     = 1,
	PrimeUpdate31_880C8C1A2B7E0D89E198FD070B76C948     = 2,
	PrimeUpdate31_85F5966A74411E8888F7228B41775B64     = 3,
	PrimeUpdate31_0F3CBA7F9849D469C134A6FF10453DB2     = 4,
	PrimeUpdate31_F9E087849D5F5873B1D9C2C2A76E8280     = 5,
	PrimeUpdate31_4F3016BFEEF5686ABF5BCC01EDAB34AB     = 6,
	PrimeUpdate31_289E688E31D67B07097C3607B0E4B766     = 7,
	PrimeUpdate31_FDFE789EC592F2AE370CBDC6644331EA     = 8,
	PrimeUpdate31_3B62BABAB19A41542A3F1A543BA902C7     = 9,
	PrimeUpdate31_2ED307705C547AAE42F52929ED345B54     = 10,
	PrimeUpdate31_88C241C0F02B450B51F0A9AF5DDC359D     = 11,
	PrimeUpdate31_94713368AC068D293F842AD501456252     = 12,
	PrimeUpdate31_7EDA3FFCCA3D799DD992CB9E6E1641BA     = 13,
	PrimeUpdate31_597E29169FCA2B5E0022CB3C17FD6276     = 14,
	PrimeUpdate31_B403B6BC53473983E71404459C5C329D     = 15,
	PrimeUpdate31_DA7EA18B2A78CD2DC80B1647AC96CB4D     = 16,
	PrimeUpdate31_3CE5ABD97423D57980D4CE4984D23723     = 17,
	PrimeUpdate31_END                                  = 18
};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate30
enum class EContentKeyIndex_PrimeUpdate30 : int
{
	PrimeUpdate30_1DB64BB9636815EFA9399659109DD68D     = 0,
	PrimeUpdate30_9234CF28DDEC42BA6D348267FA446B0A     = 1,
	PrimeUpdate30_503AD462D2DCE768AE47BB2329144CAE     = 2,
	PrimeUpdate30_213CA336DDB319FD27DEA933E3501CB2     = 3,
	PrimeUpdate30_F7FD01F704F37BC24F42A1F9316D8A1D     = 4,
	PrimeUpdate30_3087684ADB9F22472E3AFD9BE5BF94F5     = 5,
	PrimeUpdate30_810B945ECFD25E0822A159B328604ECA     = 6,
	PrimeUpdate30_5465981D30DE3D6E327B176D436FEF9D     = 7,
	PrimeUpdate30_9A9242C1EC822F5CABB949FFDF01D97A     = 8,
	PrimeUpdate30_452F33B1387640B277D05CCF28B27094     = 9,
	PrimeUpdate30_33430E4B5498C30E9942BC67BB35E032     = 10,
	PrimeUpdate30_712FAB1F622E61A50F98B76312770661     = 11,
	PrimeUpdate30_2386DB5AA955DDFF74A6A7AF443249B5     = 12,
	PrimeUpdate30_C5BE8F988BD1FF6A53893EC1B454B272     = 13,
	PrimeUpdate30_ED667588F3F916C76D11EADB27036255     = 14,
	PrimeUpdate30_27C7319E6A9E8651E89204245770107E     = 15,
	PrimeUpdate30_966DAC7787B441D0E6195D90634ADFD1     = 16,
	PrimeUpdate30_DF823FCBBF433C11264736998336CFB9     = 17,
	PrimeUpdate30_DC5ABAEFCD0A266C64BF8664FEE15309     = 18,
	PrimeUpdate30_22EC7532DB37341C045127F6263A15FF     = 19,
	PrimeUpdate30_28B8BBA8CBF5B1B73BD72127D5ADCCB5     = 20,
	PrimeUpdate30_AA915328B1E7A7251488C75194A90384     = 21,
	PrimeUpdate30_D76E2A921047B235911605B9B008F606     = 22,
	PrimeUpdate30_55026AC8526C9B85A556C370FFCBE521     = 23,
	PrimeUpdate30_84C1F1262EF1E5DC120A7ED88DBFEF15     = 24,
	PrimeUpdate30_A99C4C15B5858BB823253B065BE66BB2     = 25,
	PrimeUpdate30_END                                  = 26
};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate29
enum class EContentKeyIndex_PrimeUpdate29 : int
{
	PrimeUpdate29_AE206DA0E0A3AAD8B6755870B27FA65E     = 0,
	PrimeUpdate29_30CA52092D2CEDAA55E764986CC47D60     = 1,
	PrimeUpdate29_350E4C7D232183351C9A7CA19AF1D171     = 2,
	PrimeUpdate29_0F4D063A56589D60F7C667659284EF79     = 3,
	PrimeUpdate29_DF40E515A9C2BC9F9B6459DA06BA12B4     = 4,
	PrimeUpdate29_07DAE5D877865DA3A7B27525C6BCD772     = 5,
	PrimeUpdate29_398C669A96F0D8C7A7CB85C6B7F9D40D     = 6,
	PrimeUpdate29_1A0A172C108D12F6B9E2582B8353515A     = 7,
	PrimeUpdate29_DFA1AA4962EC1FAF6388A5D29978701F     = 8,
	PrimeUpdate29_D376C4CD4EBF103692AC688347D9C907     = 9,
	PrimeUpdate29_82BD9EB94679B73DA8574C6DB2C8737E     = 10,
	PrimeUpdate29_6E59D0C3AAAF6C9D2E326F4293999A64     = 11,
	PrimeUpdate29_3F53F796EEBEDA376ACA7199F20CAA63     = 12,
	PrimeUpdate29_C29913CE0063B6A4499E4AFF4C5D56D1     = 13,
	PrimeUpdate29_88F2B75897AE1A5B80B4DCC82C376200     = 14,
	PrimeUpdate29_EF28529F54D54075C40BA9309352A504     = 15,
	PrimeUpdate29_4F3D2425A947760B6BD53B2E51290AE9     = 16,
	PrimeUpdate29_42DC275ACD6AF3B20C30E2A016AECC19     = 17,
	PrimeUpdate29_ADC297BC151083F6529E1A1559605351     = 18,
	PrimeUpdate29_755715CBB92570E53F72C1BEF66C2E93     = 19,
	PrimeUpdate29_907AF3C9F3A0262587FF66ADF42F4D3F     = 20,
	PrimeUpdate29_C271DB65745C937C51A4591C915C5AF0     = 21,
	PrimeUpdate29_END                                  = 22
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0060
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    HashNext;                                         		// 0x0008 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	unsigned long long                                 ObjectFlags;                                      		// 0x0010 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    HashOuterNext;                                    		// 0x0018 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    StateFrame;                                       		// 0x0020 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     Linker;                                           		// 0x0028 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    LinkerIndex;                                      		// 0x0030 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int                                                ObjectInternalInteger;                            		// 0x0038 (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int                                                NetIndex;                                         		// 0x003C (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	class UObject*                                     Outer;                                            		// 0x0040 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FName                                       Name;                                             		// 0x0048 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)
	class UClass*                                      Class;                                            		// 0x0050 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     ObjectArchetype;                                  		// 0x0058 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)
public:
	static TArray<class UObject*>* GObjObjects();

	char const* GetName();
	char const* GetNameCPP();
	char const* GetFullName();
	//char const* GetPackageName();
	UObject* GetPackageObj();

	template<typename T> static T* FindObject(char const* objectFullName);
	template<typename T> static unsigned int CountObject(char const* objectName);
	static UClass* FindClass(char const* classFullName);

	static UClass* FindClass(const std::string& classFullName);

	bool IsA(UClass* pClass);
	bool IsA(int objInternalInteger);

	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Object");
		}

		return uClassPointer;
	};

	struct FRotator RSmoothInterpTo(struct FRotator From, struct FRotator To, float Lambda, float DeltaTime);
	struct FVector VSmoothInterpTo(struct FVector From, struct FVector To, float Lambda, float DeltaTime);
	float FSmoothInterpTo(float From, float To, float Lambda, float DeltaTime);
	float GetSmoothInterpLerpValue(float Lambda, float DeltaTime);
	class UObject* GetTypedOuter(class UClass* ObjClass);
	void MarkPendingKill();
	bool NotNone(class UObject* O);
	void SwapArrayItems();
	void Swap();
	float SumFloat(float Total, float Value);
	int SumInt(int Total, int Value);
	int SortDescendingFloat(float A, float B);
	int SortAscendingFloat(float A, float B);
	int SortDescendingString(struct FString A, struct FString B);
	int SortAscendingString(struct FString A, struct FString B);
	int SortDescendingQWORD(unsigned long long A, unsigned long long B);
	int SortAscendingQWORD(unsigned long long A, unsigned long long B);
	int SortDescendingInt(int A, int B);
	int SortAscendingInt(int A, int B);
	struct FString PadString(struct FString Str, int Characters);
	unsigned long long GetFrameCounter();
	float GetScaledAxisValue(float Value, float Sensitivity, float MaxSensitivity);
	class UObject* GetSingleton(class UClass* ObjClass);
	class UObjectProvider* GetObjectProviderW();
	bool IsAutomationTest();
	unsigned char GetEdition();
	bool IsEdition(unsigned char Edition);
	struct FString ToJson();
	void SetRooted(unsigned long bRooted);
	void ProfNodeEvent(struct FString EventName);
	void ProfNodeSetDepthThreshold(int Depth);
	void ProfNodeSetTimeThresholdSeconds(float Threshold);
	void ProfNodeStop(int AssumedTimerIndex);
	int ProfNodeStart(struct FString TimerName);
	struct FString CreateGuidString();
	struct FString GetStringFromGuid(struct FGuid& InGuid);
	struct FGuid GetGuidFromString(struct FString& InGuidString);
	struct FGuid CreateGuid();
	bool IsGuidValid(struct FGuid& InGuid);
	void InvalidateGuid(struct FGuid& InGuid);
	class UObject* FindStructProperty(class UClass* PropertyClass, struct FName PropertyName, struct FName StructName);
	class UObject* FindProperty(class UClass* PropertyClass, struct FName PropertyName);
	class UObject* DuplicateObject(class UObject* Template, class UObject* ObjOuter, class UClass* DestClass);
	float RunningAverage(float OldAverage, float NewValue, int NewCount);
	float GetCurrentTimeW();
	struct FLinearColor GetMaxLinearColorBrightness(struct FLinearColor C);
	struct FColor GetMaxColorBrightness(struct FColor C);
	struct FLinearColor LABtoRGB(struct FLinearColor C);
	struct FLinearColor RGBtoLAB(struct FLinearColor C);
	struct FLinearColor HSVtoRGB(struct FLinearColor C);
	struct FLinearColor RGBtoHSV(struct FLinearColor C);
	struct FLinearColor IntToLinearColor(int I);
	struct FColor IntToColor(int I);
	int LinearColorToInt(struct FLinearColor C);
	int ColorToInt(struct FColor C);
	bool SolveVelocityQuadratic(float Distance, float Speed, float Accel, float& Time);
	float Sign(float X);
	struct FVector2D MakeVector2D(float X, float Y);
	struct FVector VAbs(struct FVector V);
	struct FVector MakeVector(float X, float Y, float Z);
	struct FVector FlattenVector(struct FVector NormalToFlatten, struct FVector PlaneNormal);
	struct FName GetRealArchetypeName();
	struct FString FormatTime(int Seconds);
	class UObject* GetTextArchetype(class UClass* ArchetypeClass, struct FString Path);
	bool IsArchetype();
	void UnsubscribeFromAllEvents();
	class UObject* NewInstance(class UObject* ObjOuter, struct FName ObjName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FRotator RotatorFromInt(int RotationPitchAndYaw);
	int RotatorToInt(struct FRotator Rotation);
	struct FString GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>& FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	float GetAppSeconds();
	void GetSystemTime(int& Year, int& Month, int& DayOfWeek, int& Day, int& Hour, int& Min, int& Sec, int& MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float RangeByteToFloatUnsigned(unsigned char inputByte);
	float RangeByteToFloatSigned(unsigned char inputByte);
	unsigned char FloatToRangeByteUnsigned(float inputFloat);
	unsigned char FloatToRangeByteSigned(float inputFloat);
	float UnwindHeading(float A);
	float FindDeltaAngle(float A1, float A2);
	float GetHeadingAngle(struct FVector Dir);
	void GetAngularDegreesFromRadians(struct FVector2D& OutFOV);
	void GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D& OutAngDist);
	bool GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutAngularDist);
	bool GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutDotDist);
	bool LinePlaneIntersection(struct FVector LineStart, struct FVector LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, unsigned long bCheckLineSegment, struct FVector& Out_Intersection, float& Out_T);
	struct FVector PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C);
	float PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector& out_ClosestPoint);
	float PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector& OutClosestPoint);
	float PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector& OutClosestPoint);
	void GetPerObjectConfigObjects(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, class UObject*& OutObject);
	bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>& out_SectionNames);
	void ImportJSON(struct FString PropertyName, struct FString& JSON);
	void StaticSaveConfig();
	void SaveConfig();
	class UObject* LoadSeekFreeObject(class UClass* ObjClass, struct FString Path);
	class UObject* FindObject(struct FString ObjectName, class UClass* ObjectClass);
	class UObject* DynamicLoadObject(struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail);
	int EnumFromString(class UObject* E, struct FName ValueName);
	struct FName GetEnum(class UObject* E, int I);
	void Disable(struct FName ProbeFunc);
	void Enable(struct FName ProbeFunc);
	void eventContinuedState();
	void eventPausedState();
	void eventPoppedState();
	void eventPushedState();
	void eventEndState(struct FName NextStateName);
	void eventBeginState(struct FName PreviousStateName);
	void DumpStateStack();
	void PopState(unsigned long bPopAll);
	void PushState(struct FName NewState, struct FName NewLabel);
	struct FName GetStateName();
	bool IsChildState(struct FName TestState, struct FName TestParentState);
	bool IsInState(struct FName TestState, unsigned long bTestStateStack);
	void GotoState(struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack);
	bool IsUTracing();
	void SetUTracing(unsigned long bShouldUTrace);
	struct FName GetFuncName();
	void DebugBreak(int UserFlags, unsigned char DebuggerType);
	struct FString GetScriptTrace();
	void ScriptTrace();
	struct FString ParseLocalizedPropertyPath(struct FString PathName);
	struct FString Localize(struct FString SectionName, struct FString KeyName, struct FString PackageName, unsigned long bOptional);
	void WarnInternal(struct FString S);
	void LogInternal(struct FString S, struct FName Tag, unsigned long bFileOnly);
	struct FLinearColor LinearColorLerp(struct FLinearColor ColorA, struct FLinearColor ColorB, float Alpha);
	struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);
	struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor LC, float Mult);
	struct FLinearColor ConvertFromSRGB(struct FLinearColor OldColor);
	struct FColor LinearColorToColor(struct FLinearColor OldColor);
	struct FLinearColor ColorToLinearColor(struct FColor OldColor);
	struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	struct FColor LerpColor(struct FColor A, struct FColor B, float Alpha);
	struct FColor MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor Add_ColorColor(struct FColor A, struct FColor B);
	struct FColor Multiply_ColorFloat(struct FColor A, float B);
	struct FColor Multiply_FloatColor(float A, struct FColor B);
	struct FColor Subtract_ColorColor(struct FColor A, struct FColor B);
	struct FVector2D EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D& Vector2DCurve);
	void AutoSetTangentsVector(struct FInterpCurveVector& Curve);
	struct FVector EvalInterpCurveVector(float InVal, struct FInterpCurveVector& VectorCurve);
	void AutoSetTangentsFloat(struct FInterpCurveFloat& Curve);
	float EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat& FloatCurve);
	struct FVector2D vect2d(float InX, float InY);
	float GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value);
	float GetRangePctByValue(struct FVector2D Range, float Value);
	float GetRangeValueByPct(struct FVector2D Range, float Pct);
	struct FVector2D V2DNormal(struct FVector2D A);
	float V2DSizeSq(struct FVector2D A);
	float V2DSize(struct FVector2D A);
	float Dot_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	struct FVector2D SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A);
	struct FVector2D AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A);
	struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D& A);
	struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D& A);
	struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B);
	struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B);
	struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	struct FQuat Subtract_QuatQuat(struct FQuat A, struct FQuat B);
	struct FQuat Add_QuatQuat(struct FQuat A, struct FQuat B);
	struct FQuat QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath);
	struct FRotator QuatToRotator(struct FQuat A);
	struct FQuat QuatFromRotator(struct FRotator A);
	struct FQuat QuatFromAxisAndAngle(struct FVector Axis, float Angle);
	struct FQuat QuatFindBetween(struct FVector A, struct FVector B);
	struct FVector QuatRotateVector(struct FQuat A, struct FVector B);
	struct FQuat QuatInvert(struct FQuat A);
	float QuatDot(struct FQuat A, struct FQuat B);
	struct FQuat QuatProduct(struct FQuat A, struct FQuat B);
	struct FVector MatrixGetAxis(struct FMatrix TM, unsigned char Axis);
	struct FVector MatrixGetOrigin(struct FMatrix TM);
	struct FRotator MatrixGetRotator(struct FMatrix TM);
	struct FMatrix MakeRotationMatrix(struct FRotator Rotation);
	struct FMatrix MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation);
	struct FVector InverseTransformNormal(struct FMatrix TM, struct FVector A);
	struct FVector TransformNormal(struct FMatrix TM, struct FVector A);
	struct FVector InverseTransformVector(struct FMatrix TM, struct FVector A);
	struct FVector TransformVector(struct FMatrix TM, struct FVector A);
	struct FMatrix Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B);
	bool NotEqual_NameName(struct FName A, struct FName B);
	bool EqualEqual_NameName(struct FName A, struct FName B);
	bool IsA(struct FName ClassName);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	bool EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString GetPathName();
	struct FString PathName(class UObject* CheckObject);
	TArray<struct FString> SplitString(struct FString Source, struct FString Delimiter, unsigned long bCullEmpty);
	void ParseStringIntoArray(struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray<struct FString>& Pieces);
	bool ContainsWhitespace(struct FString Text);
	struct FString RepeatString(struct FString InValue, int Count);
	struct FString JoinArrayQWord(struct FString delim, unsigned long bIgnoreBlanks, TArray<unsigned long long>& QWordArray);
	struct FString JoinArrayInt(struct FString delim, unsigned long bIgnoreBlanks, TArray<int>& IntArray);
	struct FString JoinArrayName(struct FString delim, unsigned long bIgnoreBlanks, TArray<struct FName>& NameArray);
	struct FString JoinArrayStr(struct FString delim, unsigned long bIgnoreBlanks, TArray<struct FString>& StringArray);
	void JoinArray(struct FString delim, unsigned long bIgnoreBlanks, TArray<struct FString>& StringArray, struct FString& out_Result);
	struct FString GetRightMost(struct FString Text);
	struct FString Split(struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr);
	struct FString Trim(struct FString Src);
	struct FString Repl(struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive);
	int Asc(struct FString S);
	struct FString Chr(int I);
	struct FString Locs(struct FString S);
	struct FString Caps(struct FString S);
	struct FString Right(struct FString S, int I);
	struct FString Left(struct FString S, int I);
	struct FString Mid(struct FString S, int I, int J);
	int InStr(struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos);
	int Len(struct FString S);
	struct FString SubtractEqual_StrStr(struct FString B, struct FString& A);
	struct FString AtEqual_StrStr(struct FString B, struct FString& A);
	struct FString ConcatEqual_StrStr(struct FString B, struct FString& A);
	bool ComplementEqual_StrStr(struct FString A, struct FString B);
	bool NotEqual_StrStr(struct FString A, struct FString B);
	bool EqualEqual_StrStr(struct FString A, struct FString B);
	bool GreaterEqual_StrStr(struct FString A, struct FString B);
	bool LessEqual_StrStr(struct FString A, struct FString B);
	bool Greater_StrStr(struct FString A, struct FString B);
	bool Less_StrStr(struct FString A, struct FString B);
	struct FString At_StrStr(struct FString A, struct FString B);
	struct FString Concat_StrStr(struct FString A, struct FString B);
	struct FRotator RotateRotator(struct FVector Axis, struct FRotator Rot, struct FRotator Direction, float Amount);
	struct FQuat MakeQuat(float X, float Y, float Z, float W);
	struct FRotator MakeRotator(int Pitch, int Yaw, int Roll);
	bool SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int& out_DeltaViewAxis);
	int ClampRotAxisFromRange(int Current, int Min, int Max);
	int ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int& out_DeltaViewAxis);
	struct FRotator FlattenRotatorOnAxis(struct FVector AxisToRemove, struct FRotator RotToFlatten, struct FRotator RotToFlattenTo);
	float RSize(struct FRotator R);
	float RDiff(struct FRotator A, struct FRotator B);
	int NormalizeRotAxis(int Angle);
	struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed);
	struct FRotator RTransform(struct FRotator R, struct FRotator RBasis);
	struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath);
	struct FRotator Normalize(struct FRotator Rot);
	struct FRotator OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z);
	struct FRotator RotRand(unsigned long bRoll);
	struct FVector GetRotatorAxis(struct FRotator A, int Axis);
	void GetUnAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z);
	void GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z);
	bool ClockwiseFrom_IntInt(int A, int B);
	struct FRotator SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator& A);
	struct FRotator AddEqual_RotatorRotator(struct FRotator B, struct FRotator& A);
	struct FRotator Subtract_RotatorRotator(struct FRotator A, struct FRotator B);
	struct FRotator Add_RotatorRotator(struct FRotator A, struct FRotator B);
	struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator& A);
	struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator& A);
	struct FRotator Divide_RotatorFloat(struct FRotator A, float B);
	struct FRotator Multiply_FloatRotator(float A, struct FRotator B);
	struct FRotator Multiply_RotatorFloat(struct FRotator A, float B);
	bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	float GetRadiansBetweenVectors(struct FVector V0, struct FVector v1);
	struct FVector VClamp(struct FVector A, struct FVector Min, struct FVector Max);
	struct FVector vect3d(float X, float Y, float Z);
	bool InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ);
	float NoZDot(struct FVector A, struct FVector B);
	struct FVector ClampLength(struct FVector V, float MaxLength);
	struct FVector VInterpConstantTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed);
	struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed);
	void eventConstruct();
	struct FVector ProjectOnToPlane(struct FVector InVector, struct FVector InNormal, float OverBounce);
	bool IsZero(struct FVector A);
	struct FVector ProjectOnTo(struct FVector X, struct FVector Y);
	struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal);
	struct FVector VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector VRandCone(struct FVector Dir, float ConeHalfAngleRadians);
	struct FVector VRand();
	struct FVector VLerp(struct FVector A, struct FVector B, float Alpha);
	struct FVector Normal2D(struct FVector A);
	struct FVector Normal(struct FVector A);
	float VSizeSq2D(struct FVector A);
	float VSizeSq(struct FVector A);
	float VSize2D(struct FVector A);
	float VSize(struct FVector A);
	struct FVector SubtractEqual_VectorVector(struct FVector B, struct FVector& A);
	struct FVector AddEqual_VectorVector(struct FVector B, struct FVector& A);
	struct FVector DivideEqual_VectorFloat(float B, struct FVector& A);
	struct FVector MultiplyEqual_VectorVector(struct FVector B, struct FVector& A);
	struct FVector MultiplyEqual_VectorFloat(float B, struct FVector& A);
	struct FVector Cross_VectorVector(struct FVector A, struct FVector B);
	float Dot_VectorVector(struct FVector A, struct FVector B);
	bool NotEqual_VectorVector(struct FVector A, struct FVector B);
	bool EqualEqual_VectorVector(struct FVector A, struct FVector B);
	struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B);
	struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B);
	struct FVector Subtract_VectorVector(struct FVector A, struct FVector B);
	struct FVector Add_VectorVector(struct FVector A, struct FVector B);
	struct FVector Divide_VectorFloat(struct FVector A, float B);
	struct FVector Multiply_VectorVector(struct FVector A, struct FVector B);
	struct FVector Multiply_FloatVector(float A, struct FVector B);
	struct FVector Multiply_VectorFloat(struct FVector A, float B);
	struct FVector Subtract_PreVector(struct FVector A);
	float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FPctByRange(float Value, float InMin, float InMax);
	float RandSign(float Value);
	struct FVector CalculateGravityPosition(struct FVector Location, struct FVector Velocity, float Gravity, float Time, struct FVector GravityDirection);
	float RandRange(float InMin, float InMax);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int FloorLog2(int Value);
	int FCeil(float A);
	int FFloor(float A);
	int Round(float A);
	float Lerp(float A, float B, float Alpha);
	float FClamp(float V, float A, float B);
	float FMax(float A, float B);
	float FMin(float A, float B);
	float FRand();
	float Square(float A);
	float Sqrt(float A);
	float Loge(float A);
	float Exp(float A);
	float Atan2(float A, float B);
	float Atan(float A);
	float Tan(float A);
	float Acos(float A);
	float Cos(float A);
	float Asin(float A);
	float Sin(float A);
	float Abs(float A);
	float SubtractEqual_FloatFloat(float B, float& A);
	float AddEqual_FloatFloat(float B, float& A);
	float DivideEqual_FloatFloat(float B, float& A);
	float MultiplyEqual_FloatFloat(float B, float& A);
	bool NotEqual_FloatFloat(float A, float B);
	bool ComplementEqual_FloatFloat(float A, float B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool LessEqual_FloatFloat(float A, float B);
	bool Greater_FloatFloat(float A, float B);
	bool Less_FloatFloat(float A, float B);
	float Subtract_FloatFloat(float A, float B);
	float Add_FloatFloat(float A, float B);
	float Percent_FloatFloat(float A, float B);
	float Divide_FloatFloat(float A, float B);
	float Multiply_FloatFloat(float A, float B);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float Subtract_PreFloat(float A);
	struct FString ToHex(int A);
	int Clamp(int V, int A, int B);
	int Max(int A, int B);
	int Min(int A, int B);
	int Rand(int Max);
	struct FColor FromHexColor(struct FString Hex);
	int FromHex(struct FString Hex);
	unsigned long long QMin(unsigned long long A, unsigned long long B);
	unsigned long long QMax(unsigned long long A, unsigned long long B);
	unsigned long long QSubtract(unsigned long long A, unsigned long long B);
	bool NotEqual_QWordInt(unsigned long long A, int B);
	bool EqualEqual_QWordInt(unsigned long long A, int B);
	bool NotEqual_QWordQWord(unsigned long long A, unsigned long long B);
	bool EqualEqual_QWordQWord(unsigned long long A, unsigned long long B);
	bool GreaterEqual_QWordQWord(unsigned long long A, unsigned long long B);
	bool LessEqual_QWordQWord(unsigned long long A, unsigned long long B);
	bool Greater_QWordQWord(unsigned long long A, unsigned long long B);
	bool Less_QWordQWord(unsigned long long A, unsigned long long B);
	int Subtract_QWordQWord(unsigned long long A, unsigned long long B);
	unsigned long long Add_QWordQWord(unsigned long long A, unsigned long long B);
	int SubtractSubtract_Int(int& A);
	int AddAdd_Int(int& A);
	int SubtractSubtract_PreInt(int& A);
	int AddAdd_PreInt(int& A);
	int SubtractEqual_IntInt(int B, int& A);
	int AddEqual_IntInt(int B, int& A);
	int DivideEqual_IntFloat(float B, int& A);
	int MultiplyEqual_IntFloat(float B, int& A);
	int Or_IntInt(int A, int B);
	int Xor_IntInt(int A, int B);
	int And_IntInt(int A, int B);
	bool NotEqual_IntInt(int A, int B);
	bool EqualEqual_IntInt(int A, int B);
	bool GreaterEqual_IntInt(int A, int B);
	bool LessEqual_IntInt(int A, int B);
	bool Greater_IntInt(int A, int B);
	bool Less_IntInt(int A, int B);
	int GreaterGreaterGreater_IntInt(int A, int B);
	int GreaterGreater_IntInt(int A, int B);
	int LessLess_IntInt(int A, int B);
	int Subtract_IntInt(int A, int B);
	int Add_IntInt(int A, int B);
	int Percent_IntInt(int A, int B);
	int Divide_IntInt(int A, int B);
	int Multiply_IntInt(int A, int B);
	int Subtract_PreInt(int A);
	int Complement_PreInt(int A);
	unsigned char SubtractSubtract_Byte(unsigned char& A);
	unsigned char AddAdd_Byte(unsigned char& A);
	unsigned char SubtractSubtract_PreByte(unsigned char& A);
	unsigned char AddAdd_PreByte(unsigned char& A);
	unsigned char SubtractEqual_ByteByte(unsigned char B, unsigned char& A);
	unsigned char AddEqual_ByteByte(unsigned char B, unsigned char& A);
	unsigned char DivideEqual_ByteByte(unsigned char B, unsigned char& A);
	unsigned char MultiplyEqual_ByteFloat(float B, unsigned char& A);
	unsigned char MultiplyEqual_ByteByte(unsigned char B, unsigned char& A);
	bool OrOr_BoolBool(unsigned long A, unsigned long B);
	bool XorXor_BoolBool(unsigned long A, unsigned long B);
	bool AndAnd_BoolBool(unsigned long A, unsigned long B);
	bool NotEqual_BoolBool(unsigned long A, unsigned long B);
	bool EqualEqual_BoolBool(unsigned long A, unsigned long B);
	bool Not_PreBool(unsigned long A);
	void ProcessEvent(class UFunction* uFunction, void* uParms, void* uResult);
};

// Class Core.Config_ORS
// 0x0060 (0x0060 - 0x00C0)
class UConfig_ORS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                              		// 0x0060 (0x0060) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Config_ORS");
		}

		return uClassPointer;
	};

};

// Class Core.ClassTupleCollection_ORS
// 0x0060 (0x0060 - 0x00C0)
class UClassTupleCollection_ORS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                              		// 0x0060 (0x0060) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassTupleCollection_ORS");
		}

		return uClassPointer;
	};

};

// Class Core.ClassTuple_ORS
// 0x0068 (0x0060 - 0x00C8)
class UClassTuple_ORS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                              		// 0x0060 (0x0068) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassTuple_ORS");
		}

		return uClassPointer;
	};

};

// Class Core.SubscriptionCollection_ORS
// 0x0020 (0x0060 - 0x0080)
class USubscriptionCollection_ORS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0x0060 (0x0020) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.SubscriptionCollection_ORS");
		}

		return uClassPointer;
	};

};


// Class Engine.ScriptGroup_ORS
// 0x0008 (0x0060 - 0x0068)
class UScriptGroup_ORS : public UObject
{
public:
	class UObject* GroupOwner;                                       		// 0x0060 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Engine.ScriptGroup_ORS");
		}

		return uClassPointer;
	};

	void ClearTimerClass(class UClass* EventClass);
	void ClearTimer(class UObject* Event);
	void SetGameTimer(class UObject* Event, float Delay, struct FTimerOptions Options);
	void SetTimer(class UObject* Event, float Delay, struct FTimerOptions Options);
	void Broadcast(class UObject* Event);
	void CreateObjects(class UObject* ObjOuter, TArray<class UClass*>& ObjectClasses);
	class UObject* CreateObject(class UClass* ObjectClass, class UObject* ObjOuter);
	class UObject* GetOrCreateObject(class UClass* ObjectClass, class UObject* ObjOuter);
	class UObject* GetObjectW(class UClass* ObjectClass);
	class UObject* DestroyClass(class UClass* ObjectClass);
	void RemoveAllClasses(class UClass* ObjectClass);
	class UObject* RemoveClass(class UClass* ObjectClass);
	void DestroyObject(class UObject* Object);
	void RemoveObject(class UObject* Object);
	void AddObject(class UObject* Object);
	void SetGroupParent(class UObject* ParentGroup);
};

// Class Core.Group_ORS
// 0x00D0 (0x0068 - 0x0138)
class UGroup_ORS : public UScriptGroup_ORS
{
public:
	unsigned char                                      UnknownData00[0xD0];                              		// 0x0068 (0x00D0) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Group_ORS");
		}

		return uClassPointer;
	};

};

// Class Core.Instance_ORS
// 0x00B0 (0x0060 - 0x0110)
class UInstance_ORS : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                              		// 0x0060 (0x00B0) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Instance_ORS");
		}

		return uClassPointer;
	};

};

// Class Core.Global_ORS
// 0x0018 (0x0060 - 0x0078)
class UGlobal_ORS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x0060 (0x0018) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Global_ORS");
		}

		return uClassPointer;
	};

};

// Class Core.UTF8
// 0x0000 (0x0060 - 0x0060)
class UUTF8 : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.UTF8");
		}

		return uClassPointer;
	};

	void DecodeInline(TArray<unsigned char>& Input, struct FString& Output);
	struct FString Decode(TArray<unsigned char>& Input);
	void EncodeInline(struct FString Input, TArray<unsigned char>& Output);
	TArray<unsigned char> Encode(struct FString Input);
};

// Class Core.TextBuffer
// 0x0030 (0x0060 - 0x0090)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                              		// 0x0060 (0x0030) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBuffer");
		}

		return uClassPointer;
	};

};

// Class Core.Subsystem
// 0x0008 (0x0060 - 0x0068)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Subsystem");
		}

		return uClassPointer;
	};

};

// Class Core.System
// 0x00F8 (0x0068 - 0x0160)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                MaxStaleCacheSize;                                		// 0x006C (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                MaxOverallCacheSize;                              		// 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	int                                                PackageSizeSoftLimit;                             		// 0x0074 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AsyncIOBandwidthLimit;                            		// 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     SavePath;                                         		// 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     CachePath;                                        		// 0x0090 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     CacheExt;                                         		// 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             Paths;                                            		// 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             SeekFreePCPaths;                                  		// 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             ScriptPaths;                                      		// 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             FRScriptPaths;                                    		// 0x00E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             CutdownPaths;                                     		// 0x00F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FName>                               Suppress;                                         		// 0x0100 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FName>                               SuppressPublic;                                   		// 0x0110 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             Extensions;                                       		// 0x0120 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             SeekFreePCExtensions;                             		// 0x0130 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             LocalizationPaths;                                		// 0x0140 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     TextureFileCacheExtension;                        		// 0x0150 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.System");
		}

		return uClassPointer;
	};

};

// Class Core.Subscription
// 0x0018 (0x0060 - 0x0078)
class USubscription : public UObject
{
public:
	struct FScriptDelegate                             __SubscriberCallback__Delegate;                   		// 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Subscription");
		}

		return uClassPointer;
	};

	void __Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74(class USubscription* S);
	class USubscription* GetNone();
	void TriggerAll(TArray<class USubscription*>& Subscriptions);
	class USubscription* Create(struct FScriptDelegate InCallback);
	void eventDispose();
	void TriggerCallback();
	void SetCallback(struct FScriptDelegate InCallback);
	void SubscriberCallback();
};

// Class Core.PropertyChangeDispatcher
// 0x0010 (0x0060 - 0x0070)
class UPropertyChangeDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0060 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.PropertyChangeDispatcher");
		}

		return uClassPointer;
	};

};

// Class Core.PackageMap
// 0x00B0 (0x0060 - 0x0110)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                              		// 0x0060 (0x00B0) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.PackageMap");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectUtil
// 0x0000 (0x0060 - 0x0060)
class UObjectUtil : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectUtil");
		}

		return uClassPointer;
	};

	void ClearNaNValues(class UObject* InObject);
	bool IdenticalDeep(class UObject* Left, class UObject* Right);
	bool Identical(class UObject* Left, class UObject* Right);
	void InitProperties(class UObject* InObject);
	void AllCDOs(class UClass* BaseClass, unsigned long bIncludeAbstract, class UObject*& OutCDO);
	class UObject* GetCDO(class UClass* InClass);
};

// Class Core.ObjectSerializer
// 0x0010 (0x0060 - 0x0070)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0060 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectSerializer");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectRedirector
// 0x0008 (0x0060 - 0x0068)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0060 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectRedirector");
		}

		return uClassPointer;
	};

};

// Class Core.MetaData
// 0x0050 (0x0060 - 0x00B0)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                              		// 0x0060 (0x0050) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MetaData");
		}

		return uClassPointer;
	};

};

// Class Core.Linker
// 0x0188 (0x0060 - 0x01E8)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x188];                             		// 0x0060 (0x0188) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Linker");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerSave
// 0x00C0 (0x01E8 - 0x02A8)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xC0];                              		// 0x01E8 (0x00C0) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerSave");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerLoad
// 0x0628 (0x01E8 - 0x0810)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x628];                             		// 0x01E8 (0x0628) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerLoad");
		}

		return uClassPointer;
	};

};

// Class Core.Interface
// 0x0000 (0x0060 - 0x0060)
class UInterface : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Interface");
		}

		return uClassPointer;
	};

};

// Class Core.FileSystem
// 0x0000 (0x0060 - 0x0060)
class UFileSystem : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FileSystem");
		}

		return uClassPointer;
	};

	void CloseLogFile();
	struct FString GetLogFileName();
	bool DeleteDirectoryTree(struct FString Path);
	bool DeleteFileW(struct FString Path);
	bool AppendStringToFile(struct FString Path, struct FString Text);
	bool SaveStringToFile(struct FString Path, struct FString Text);
	bool SaveBytesToFile(struct FString Path, TArray<unsigned char>& Bytes);
	bool LoadFileToBytes(struct FString Path, int StartOffset, int Length, TArray<unsigned char>& OutBytes);
	bool LoadFileToString(struct FString Path, struct FString& OutText);
	int GetFileSize(struct FString Path);
	struct FString GetFileExtensionWithoutDot(struct FString Path);
	struct FString GetFileExtension(struct FString Path);
	struct FString GetFilePathWithoutExtension(struct FString Path);
	struct FString GetFileNameWithoutExtension(struct FString Path);
	struct FString GetFilename(struct FString Path);
	void FindFiles(struct FString Path, TArray<struct FString>& OutFilenames);
};

// Class Core.Field
// 0x0010 (0x0060 - 0x0070)
class UField : public UObject
{
public:
	class UField*	Next;	// 0x0060 (0x08) NOT AUTO-GENERATED PROPERTY
	unsigned char	UnknownData00[0x8];	// 0x0068 (0x08) NOT AUTO-GENERATED PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Field");
		}

		return uClassPointer;
	};

};

// Class Core.Struct
// 0x00C0 (0x0070 - 0x0130)
class UStruct : public UField
{
public:
	unsigned char	UnknownData00[0x10];	// 0x0070 (0x10) NOT AUTO-GENERATED PROPERTY
	class UField*	SuperField;	// 0x0080 (0x08) NOT AUTO-GENERATED PROPERTY
	class UField*	Children;	// 0x0088 (0x08) NOT AUTO-GENERATED PROPERTY
	unsigned long	PropertySize;	// 0x0090 (0x08) NOT AUTO-GENERATED PROPERTY
	unsigned char	UnknownData01[0x98];	// 0x0094 (0x9C) NOT AUTO-GENERATED PROPERTY
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Struct");
		}

		return uClassPointer;
	};

};

// Class Core.ScriptStruct
// 0x0028 (0x0130 - 0x0158)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x28];                              		// 0x0130 (0x0028) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ScriptStruct");
		}

		return uClassPointer;
	};

};

// Class Core.Function
// 0x0030 (0x0130 - 0x0160)
class UFunction : public UStruct
{
public:
	unsigned long	FunctionFlags;	// NOT AUTO-GENERATED PROPERTY
	unsigned short	iNative;	// NOT AUTO-GENERATED PROPERTY
	unsigned short	RepOffset;	// NOT AUTO-GENERATED PROPERTY
	struct FName	FriendlyName;	// NOT AUTO-GENERATED PROPERTY
	unsigned short	NumParms;	// NOT AUTO-GENERATED PROPERTY
	unsigned short	ParmsSize;	// NOT AUTO-GENERATED PROPERTY
	unsigned long	ReturnValueOffset;	// NOT AUTO-GENERATED PROPERTY
	unsigned char	UnknownData00[0x8];	// NOT AUTO-GENERATED PROPERTY
	void*			Func;	// NOT AUTO-GENERATED PROPERTY 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Function");
		}

		return uClassPointer;
	};

	static UFunction* FindFunction(char const* functionFullName);
};

// Class Core.Property
// 0x0058 (0x0070 - 0x00C8)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x58];                              		// 0x0070 (0x0058) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Property");
		}

		return uClassPointer;
	};

};

// Class Core.StructProperty
// 0x0008 (0x00C8 - 0x00D0)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00C8 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StructProperty");
		}

		return uClassPointer;
	};

};

// Class Core.StrProperty
// 0x0000 (0x00C8 - 0x00C8)
class UStrProperty : public UProperty
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StrProperty");
		}

		return uClassPointer;
	};

};

// Class Core.QWordProperty
// 0x0000 (0x00C8 - 0x00C8)
class UQWordProperty : public UProperty
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.QWordProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectProperty
// 0x0010 (0x00C8 - 0x00D8)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x00C8 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ComponentProperty
// 0x0000 (0x00D8 - 0x00D8)
class UComponentProperty : public UObjectProperty
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ComponentProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ClassProperty
// 0x0008 (0x00D8 - 0x00E0)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00D8 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassProperty");
		}

		return uClassPointer;
	};

};

// Class Core.NameProperty
// 0x0000 (0x00C8 - 0x00C8)
class UNameProperty : public UProperty
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.NameProperty");
		}

		return uClassPointer;
	};

};

// Class Core.MapProperty
// 0x0010 (0x00C8 - 0x00D8)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x00C8 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MapProperty");
		}

		return uClassPointer;
	};

};

// Class Core.IntProperty
// 0x0000 (0x00C8 - 0x00C8)
class UIntProperty : public UProperty
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.IntProperty");
		}

		return uClassPointer;
	};

};

// Class Core.InterfaceProperty
// 0x0008 (0x00C8 - 0x00D0)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00C8 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.InterfaceProperty");
		}

		return uClassPointer;
	};

};

// Class Core.FloatProperty
// 0x0000 (0x00C8 - 0x00C8)
class UFloatProperty : public UProperty
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FloatProperty");
		}

		return uClassPointer;
	};

};

// Class Core.DelegateProperty
// 0x0010 (0x00C8 - 0x00D8)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x00C8 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DelegateProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ByteProperty
// 0x0008 (0x00C8 - 0x00D0)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00C8 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ByteProperty");
		}

		return uClassPointer;
	};

};

// Class Core.BoolProperty
// 0x0008 (0x00C8 - 0x00D0)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00C8 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.BoolProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ArrayProperty
// 0x0008 (0x00C8 - 0x00D0)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00C8 (0x0008) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ArrayProperty");
		}

		return uClassPointer;
	};

};

// Class Core.Enum
// 0x0010 (0x0070 - 0x0080)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0070 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Enum");
		}

		return uClassPointer;
	};

};

// Class Core.Const
// 0x0010 (0x0070 - 0x0080)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0070 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Const");
		}

		return uClassPointer;
	};

};

// Class Core.FeatureSystem
// 0x0020 (0x0060 - 0x0080)
class UFeatureSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0060 (0x0008) MISSED OFFSET
	unsigned long                                      Prime : 1;                                        		// 0x0068 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	unsigned long                                      Matchmaking : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00000010] (CPF_EditInlineNotify)
	unsigned long                                      PrivateMatch : 1;                                 		// 0x0068 (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      SplitscreenMatch : 1;                             		// 0x0068 (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
	unsigned long                                      SplitscreenJoin : 1;                              		// 0x0068 (0x0004) [0x0000000040000000] [0x00000080] (CPF_EditInlineNotify)
	unsigned long                                      SeasonMode : 1;                                   		// 0x0068 (0x0004) [0x0000000040000000] [0x00000100] (CPF_EditInlineNotify)
	unsigned long                                      Tutorial : 1;                                     		// 0x0068 (0x0004) [0x0000000040000000] [0x00000200] (CPF_EditInlineNotify)
	unsigned long                                      Garage : 1;                                       		// 0x0068 (0x0004) [0x0000000040000000] [0x00000400] (CPF_EditInlineNotify)
	unsigned long                                      Options : 1;                                      		// 0x0068 (0x0004) [0x0000000040000000] [0x00000800] (CPF_EditInlineNotify)
	unsigned long                                      ReplaySaves : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00001000] (CPF_EditInlineNotify)
	unsigned long                                      MainMenu : 1;                                     		// 0x0068 (0x0004) [0x0000000040000000] [0x00002000] (CPF_EditInlineNotify)
	unsigned long                                      MidgameMenu : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00004000] (CPF_EditInlineNotify)
	unsigned long                                      Party : 1;                                        		// 0x0068 (0x0004) [0x0000000040000000] [0x00010000] (CPF_EditInlineNotify)
	unsigned long                                      PsyNetParty : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x00020000] (CPF_EditInlineNotify)
	unsigned long                                      PartyUpVoting : 1;                                		// 0x0068 (0x0004) [0x0000000040000000] [0x00040000] (CPF_EditInlineNotify)
	unsigned long                                      Achievements : 1;                                 		// 0x0068 (0x0004) [0x0000000040000000] [0x00080000] (CPF_EditInlineNotify)
	unsigned long                                      Stats : 1;                                        		// 0x0068 (0x0004) [0x0000000040000000] [0x00200000] (CPF_EditInlineNotify)
	unsigned long                                      Leaderboards : 1;                                 		// 0x0068 (0x0004) [0x0000000040000000] [0x00400000] (CPF_EditInlineNotify)
	unsigned long                                      XP : 1;                                           		// 0x0068 (0x0004) [0x0000000040000000] [0x00800000] (CPF_EditInlineNotify)
	unsigned long                                      Chat : 1;                                         		// 0x0068 (0x0004) [0x0000000040000000] [0x01000000] (CPF_EditInlineNotify)
	unsigned long                                      LicenseAgreement : 1;                             		// 0x0068 (0x0004) [0x0000000040000000] [0x02000000] (CPF_EditInlineNotify)
	unsigned long                                      FullCredits : 1;                                  		// 0x0068 (0x0004) [0x0000000040000000] [0x04000000] (CPF_EditInlineNotify)
	unsigned long                                      TrainingDifficulties : 1;                         		// 0x0068 (0x0004) [0x0000000040000000] [0x10000000] (CPF_EditInlineNotify)
	unsigned long                                      Ads : 1;                                          		// 0x0068 (0x0004) [0x0000000040000000] [0x20000000] (CPF_EditInlineNotify)
	unsigned long                                      Microtransactions : 1;                            		// 0x0068 (0x0004) [0x0000000040000000] [0x40000000] (CPF_EditInlineNotify)
	unsigned long                                      Spectator : 1;                                    		// 0x006C (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      CrossPlatformPrivateMatch : 1;                    		// 0x006C (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	unsigned long                                      Lan : 1;                                          		// 0x006C (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      PlayerReporting : 1;                              		// 0x006C (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      PodiumSpotlight : 1;                              		// 0x006C (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
	unsigned long                                      CustomTeamNames : 1;                              		// 0x006C (0x0004) [0x0000000040000000] [0x00000100] (CPF_EditInlineNotify)
	unsigned long                                      CustomTeamColors : 1;                             		// 0x006C (0x0004) [0x0000000040000000] [0x00000200] (CPF_EditInlineNotify)
	unsigned long                                      PlayerTrading : 1;                                		// 0x006C (0x0004) [0x0000000040000000] [0x00000400] (CPF_EditInlineNotify)
	unsigned long                                      GaragePresets : 1;                                		// 0x006C (0x0004) [0x0000000040000000] [0x00000800] (CPF_EditInlineNotify)
	unsigned long                                      PartyChat : 1;                                    		// 0x006C (0x0004) [0x0000000040000000] [0x00001000] (CPF_EditInlineNotify)
	unsigned long                                      OnlineServices : 1;                               		// 0x006C (0x0004) [0x0000000040000000] [0x00010000] (CPF_EditInlineNotify)
	unsigned long                                      RemoveCrossPlatformProducts : 1;                  		// 0x006C (0x0004) [0x0000000040000000] [0x00020000] (CPF_EditInlineNotify)
	unsigned long                                      Mutators : 1;                                     		// 0x006C (0x0004) [0x0000000040000000] [0x00040000] (CPF_EditInlineNotify)
	unsigned long                                      ProductValidation : 1;                            		// 0x006C (0x0004) [0x0000000040000000] [0x00080000] (CPF_EditInlineNotify)
	unsigned long                                      PlayerTitle : 1;                                  		// 0x006C (0x0004) [0x0000000040000000] [0x00100000] (CPF_EditInlineNotify)
	unsigned long                                      DynamicThumbnails : 1;                            		// 0x006C (0x0004) [0x0000000040000000] [0x00200000] (CPF_EditInlineNotify)
	unsigned long                                      MapPrefs : 1;                                     		// 0x006C (0x0004) [0x0000000040000000] [0x00400000] (CPF_EditInlineNotify)
	unsigned long                                      Workshop : 1;                                     		// 0x006C (0x0004) [0x0000000040000000] [0x00800000] (CPF_EditInlineNotify)
	unsigned long                                      Avatars : 1;                                      		// 0x006C (0x0004) [0x0000000040000000] [0x02000000] (CPF_EditInlineNotify)
	unsigned long                                      Tournaments : 1;                                  		// 0x006C (0x0004) [0x0000000040000000] [0x08000000] (CPF_EditInlineNotify)
	unsigned long                                      PreMatchLobby : 1;                                		// 0x006C (0x0004) [0x0000000040000000] [0x10000000] (CPF_EditInlineNotify)
	unsigned long                                      Challenges : 1;                                   		// 0x006C (0x0004) [0x0000000040000000] [0x40000000] (CPF_EditInlineNotify)
	unsigned long                                      AntiAddiction : 1;                                		// 0x0070 (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      Inventory : 1;                                    		// 0x0070 (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      TrainingEditor : 1;                               		// 0x0070 (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
	unsigned long                                      RedeemCode : 1;                                   		// 0x0070 (0x0004) [0x0000000040000000] [0x00000080] (CPF_EditInlineNotify)
	unsigned long                                      VoiceChat : 1;                                    		// 0x0070 (0x0004) [0x0000000040000000] [0x00000100] (CPF_EditInlineNotify)
	unsigned long                                      EditBindings : 1;                                 		// 0x0070 (0x0004) [0x0000000040000000] [0x00000200] (CPF_EditInlineNotify)
	unsigned long                                      UIScale : 1;                                      		// 0x0070 (0x0004) [0x0000000040000000] [0x00000400] (CPF_EditInlineNotify)
	unsigned long                                      SplitScreen : 1;                                  		// 0x0070 (0x0004) [0x0000000040000000] [0x00000800] (CPF_EditInlineNotify)
	unsigned long                                      Crossplay : 1;                                    		// 0x0070 (0x0004) [0x0000000040000000] [0x00001000] (CPF_EditInlineNotify)
	unsigned long                                      CompetitiveDivisions : 1;                         		// 0x0070 (0x0004) [0x0000000040000000] [0x00002000] (CPF_EditInlineNotify)
	unsigned long                                      ControlPresets : 1;                               		// 0x0070 (0x0004) [0x0000000040000000] [0x00020000] (CPF_EditInlineNotify)
	unsigned long                                      FreePlayMapSelection : 1;                         		// 0x0070 (0x0004) [0x0000000040000000] [0x00040000] (CPF_EditInlineNotify)
	unsigned long                                      Clubs : 1;                                        		// 0x0070 (0x0004) [0x0000000040000000] [0x00080000] (CPF_EditInlineNotify)
	unsigned long                                      MatchAdmin : 1;                                   		// 0x0070 (0x0004) [0x0000000040000000] [0x00100000] (CPF_EditInlineNotify)
	unsigned long                                      FilterContent : 1;                                		// 0x0070 (0x0004) [0x0000000040000000] [0x00200000] (CPF_EditInlineNotify)
	unsigned long                                      EncryptContent : 1;                               		// 0x0070 (0x0004) [0x0000000040000000] [0x00400000] (CPF_EditInlineNotify)
	unsigned long                                      GarageSuperSonicTrail : 1;                        		// 0x0070 (0x0004) [0x0000000040000000] [0x02000000] (CPF_EditInlineNotify)
	unsigned long                                      GarageBallExplosions : 1;                         		// 0x0070 (0x0004) [0x0000000040000000] [0x04000000] (CPF_EditInlineNotify)
	unsigned long                                      GarageEngineAudio : 1;                            		// 0x0070 (0x0004) [0x0000000040000000] [0x08000000] (CPF_EditInlineNotify)
	unsigned long                                      EsportsCamera : 1;                                		// 0x0070 (0x0004) [0x0000000040000000] [0x20000000] (CPF_EditInlineNotify)
	unsigned long                                      OnlineXP : 1;                                     		// 0x0070 (0x0004) [0x0000000040000000] [0x80000000] (CPF_EditInlineNotify)
	unsigned long                                      PsyNetFriends : 1;                                		// 0x0074 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      ClanforgeReservation : 1;                         		// 0x0074 (0x0004) [0x0000000040000000] [0x00000008] (CPF_EditInlineNotify)
	unsigned long                                      UserSettingObserver : 1;                          		// 0x0074 (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      Metrics : 1;                                      		// 0x0074 (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
	unsigned long                                      EOSMetrics : 1;                                   		// 0x0074 (0x0004) [0x0000000040000000] [0x00000080] (CPF_EditInlineNotify)
	unsigned long                                      MusicPlaylistSelection : 1;                       		// 0x0074 (0x0004) [0x0000000040000000] [0x00000100] (CPF_EditInlineNotify)
	unsigned long                                      KeyboardAirPitchSafety : 1;                       		// 0x0074 (0x0004) [0x0000000040000000] [0x00000200] (CPF_EditInlineNotify)
	unsigned long                                      SpecialEvents : 1;                                		// 0x0074 (0x0004) [0x0000000040000000] [0x00000800] (CPF_EditInlineNotify)
	unsigned long                                      OnlineShop : 1;                                   		// 0x0074 (0x0004) [0x0000000040000000] [0x00008000] (CPF_EditInlineNotify)
	unsigned long                                      PlayerBannerCustomization : 1;                    		// 0x0074 (0x0004) [0x0000000040000000] [0x00020000] (CPF_EditInlineNotify)
	unsigned long                                      AvatarBorder : 1;                                 		// 0x0074 (0x0004) [0x0000000040000000] [0x00040000] (CPF_EditInlineNotify)
	unsigned long                                      SecureUDP : 1;                                    		// 0x0074 (0x0004) [0x0000000040000000] [0x00080000] (CPF_EditInlineNotify)
	unsigned long                                      PsyNet : 1;                                       		// 0x0074 (0x0004) [0x0000000040000000] [0x00100000] (CPF_EditInlineNotify)
	unsigned long                                      OnlinePlayerStorage : 1;                          		// 0x0074 (0x0004) [0x0000000040000000] [0x00200000] (CPF_EditInlineNotify)
	unsigned long                                      LocalSaveData : 1;                                		// 0x0074 (0x0004) [0x0000000040000000] [0x00400000] (CPF_EditInlineNotify)
	unsigned long                                      CrowdV2 : 1;                                      		// 0x0074 (0x0004) [0x0000000040000000] [0x01000000] (CPF_EditInlineNotify)
	unsigned long                                      ChatBan : 1;                                      		// 0x0074 (0x0004) [0x0000000040000000] [0x02000000] (CPF_EditInlineNotify)
	unsigned long                                      BacktraceCrashDumps : 1;                          		// 0x0074 (0x0004) [0x0000000040000000] [0x04000000] (CPF_EditInlineNotify)
	unsigned long                                      MusicStingers : 1;                                		// 0x0074 (0x0004) [0x0000000040000000] [0x08000000] (CPF_EditInlineNotify)
	unsigned long                                      MonsterCarV2 : 1;                                 		// 0x0074 (0x0004) [0x0000000040000000] [0x20000000] (CPF_EditInlineNotify)
	unsigned long                                      SpotifyButton : 1;                                		// 0x0074 (0x0004) [0x0000000040000000] [0x40000000] (CPF_EditInlineNotify)
	unsigned long                                      RocketPass : 1;                                   		// 0x0074 (0x0004) [0x0000000040000000] [0x80000000] (CPF_EditInlineNotify)
	unsigned long                                      PsyTag : 1;                                       		// 0x0078 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	unsigned long                                      SeasonRewards : 1;                                		// 0x0078 (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      BotDetection : 1;                                 		// 0x0078 (0x0004) [0x0000000040000000] [0x00000008] (CPF_EditInlineNotify)
	unsigned long                                      CrateRoulette : 1;                                		// 0x0078 (0x0004) [0x0000000040000000] [0x00000010] (CPF_EditInlineNotify)
	unsigned long                                      NetworkNext : 1;                                  		// 0x0078 (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      FaceIt : 1;                                       		// 0x0078 (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
	unsigned long                                      OnlinePlayerTitles : 1;                           		// 0x0078 (0x0004) [0x0000000040000000] [0x00000100] (CPF_EditInlineNotify)
	unsigned long                                      RestrictByRegion : 1;                             		// 0x0078 (0x0004) [0x0000000040000000] [0x00000200] (CPF_EditInlineNotify)
	unsigned long                                      FirstTimeExperience : 1;                          		// 0x0078 (0x0004) [0x0000000040000000] [0x00001000] (CPF_EditInlineNotify)
	unsigned long                                      RLBot : 1;                                        		// 0x0078 (0x0004) [0x0000000040000000] [0x00004000] (CPF_EditInlineNotify)
	unsigned long                                      CarMatinee : 1;                                   		// 0x0078 (0x0004) [0x0000000040000000] [0x00008000] (CPF_EditInlineNotify)
	unsigned long                                      SteamInput : 1;                                   		// 0x0078 (0x0004) [0x0000000040000000] [0x00020000] (CPF_EditInlineNotify)
	unsigned long                                      ReplayFXControls : 1;                             		// 0x0078 (0x0004) [0x0000000040000000] [0x00400000] (CPF_EditInlineNotify)
	unsigned long                                      ESportsShop : 1;                                  		// 0x0078 (0x0004) [0x0000000040000000] [0x00800000] (CPF_EditInlineNotify)
	unsigned long                                      TeamColoredBoostMeter : 1;                        		// 0x0078 (0x0004) [0x0000000040000000] [0x40000000] (CPF_EditInlineNotify)
	unsigned long                                      GarageArchive : 1;                                		// 0x0078 (0x0004) [0x0000000040000000] [0x80000000] (CPF_EditInlineNotify)
	unsigned long                                      DynamicRangeAudioSettings : 1;                    		// 0x007C (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	unsigned long                                      AutoTour : 1;                                     		// 0x007C (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      QuickPlay : 1;                                    		// 0x007C (0x0004) [0x0000000040000000] [0x00000008] (CPF_EditInlineNotify)
	unsigned long                                      NewsPanelV2 : 1;                                  		// 0x007C (0x0004) [0x0000000040000000] [0x00000010] (CPF_EditInlineNotify)
	unsigned long                                      Blueprints : 1;                                   		// 0x007C (0x0004) [0x0000000040000000] [0x00000020] (CPF_EditInlineNotify)
	unsigned long                                      GodBall : 1;                                      		// 0x007C (0x0004) [0x0000000040000000] [0x00000040] (CPF_EditInlineNotify)
	unsigned long                                      RocketBucks : 1;                                  		// 0x007C (0x0004) [0x0000000040000000] [0x00000100] (CPF_EditInlineNotify)
	unsigned long                                      DiscordRichPresence : 1;                          		// 0x007C (0x0004) [0x0000000040000000] [0x00001000] (CPF_EditInlineNotify)
	unsigned long                                      SupportACreator : 1;                              		// 0x007C (0x0004) [0x0000000040000000] [0x00002000] (CPF_EditInlineNotify)
	unsigned long                                      CinematicIntro : 1;                               		// 0x007C (0x0004) [0x0000000040000000] [0x00004000] (CPF_EditInlineNotify)
	unsigned long                                      TinyCrowd : 1;                                    		// 0x007C (0x0004) [0x0000000040000000] [0x00008000] (CPF_EditInlineNotify)
	unsigned long                                      CrumbTrail : 1;                                   		// 0x007C (0x0004) [0x0000000040000000] [0x00010000] (CPF_EditInlineNotify)
	unsigned long                                      EpicOnlineServices : 1;                           		// 0x007C (0x0004) [0x0000000040000000] [0x00020000] (CPF_EditInlineNotify)
	unsigned long                                      XPGatedPlaylists : 1;                             		// 0x007C (0x0004) [0x0000000040000000] [0x00080000] (CPF_EditInlineNotify)
	unsigned long                                      TradeInV2 : 1;                                    		// 0x007C (0x0004) [0x0000000040000000] [0x00400000] (CPF_EditInlineNotify)
	unsigned long                                      Football : 1;                                     		// 0x007C (0x0004) [0x0000000040000000] [0x00800000] (CPF_EditInlineNotify)
	unsigned long                                      RumbleSelection : 1;                              		// 0x007C (0x0004) [0x0000000040000000] [0x01000000] (CPF_EditInlineNotify)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FeatureSystem");
		}

		return uClassPointer;
	};

};

// Class Core.Factory
// 0x0058 (0x0060 - 0x00B8)
class UFactory : public UObject
{
public:
	struct FString                                     Category;                                         		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      SupportedClass;                                   		// 0x0070 (0x0008) [0x0000000000000000]               
	class UClass*                                      ContextClass;                                     		// 0x0078 (0x0008) [0x0000000000000000]               
	struct FString                                     Description;                                      		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             Formats;                                          		// 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCreateNew : 1;                                   		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                        		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAssetNameMatchesPackageName : 1;                 		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                AutoPriority;                                     		// 0x00A4 (0x0004) [0x0000000000000000]               
	TArray<struct FString>                             ValidGameNames;                                   		// 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Factory");
		}

		return uClassPointer;
	};

};

// Class Core.TextBufferFactory
// 0x0000 (0x00B8 - 0x00B8)
class UTextBufferFactory : public UFactory
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBufferFactory");
		}

		return uClassPointer;
	};

};

// Class Core.Exporter
// 0x0038 (0x0060 - 0x0098)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0060 (0x0008) MISSED OFFSET
	TArray<struct FString>                             FormatExtension;                                  		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             FormatDescription;                                		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0x10];                              		// 0x0088 (0x0010) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Exporter");
		}

		return uClassPointer;
	};

};

// Class Core.ErrorType
// 0x0010 (0x0060 - 0x0070)
class UErrorType : public UObject
{
public:
	struct FString                                     LocalizationKey;                                  		// 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ErrorType");
		}

		return uClassPointer;
	};

	class UError* CreateError(struct FString InErrorMessage, int InErrorCode);
	struct FString GetLocalizedMessage();
};

// Class Core.ErrorList
// 0x0020 (0x0060 - 0x0080)
class UErrorList : public UObject
{
public:
	struct FString                                     LocalizationPackage;                              		// 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FString                                     LocalizationSection;                              		// 0x0070 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ErrorList");
		}

		return uClassPointer;
	};

	class UErrorType* GetErrorType(struct FName Error);
};

// Class Core.Error
// 0x001C (0x0060 - 0x007C)
class UError : public UObject
{
public:
	class UErrorType*                                  Type;                                             		// 0x0060 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FString                                     Message;                                          		// 0x0068 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	int                                                Code;                                             		// 0x0078 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Error");
		}

		return uClassPointer;
	};

	struct FString GetDebugMessage();
	struct FString GetLocalizedMessage();
};

// Class Core.DelegateTracker
// 0x0028 (0x0060 - 0x0088)
class UDelegateTracker : public UObject
{
public:
	TArray<struct FAsyncDelegateInfo>                  AsyncDelegates;                                   		// 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __PlaceholderDelegate__Delegate;                  		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DelegateTracker");
		}

		return uClassPointer;
	};

	struct FScriptDelegate RemoveDelegate(int CallbackId);
	int AddDelegate(struct FScriptDelegate Callback);
	void PlaceholderDelegate();
};

// Class Core.DebugDrawer
// 0x0060 (0x0060 - 0x00C0)
class UDebugDrawer : public UObject
{
public:
	struct FColor                                      DefaultTextColor;                                 		// 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bSilent : 1;                                      		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bPrintActorsInline : 1;                           		// 0x0064 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int                                                Indentation;                                      		// 0x0068 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FString                                     IndentationString;                                		// 0x0070 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UObject*>                             PrintedObjects;                                   		// 0x0080 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UObject*>                             QueuedObjects;                                    		// 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int                                                PrintObjectCount;                                 		// 0x00A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __LogFunc__Delegate;                              		// 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DebugDrawer");
		}

		return uClassPointer;
	};

	void Reset();
	void PrintText(struct FString Text, struct FColor InColor);
	void eventPrintArrayProperty(struct FString PropertyName, int Index, struct FString Value);
	void eventPrintProperty(struct FString PropertyName, struct FString Value);
	void eventEndSection();
	void eventStartSection();
	void eventPrintObject(struct FString Title, class UObject* ForObj);
	void eventPrintSeperater();
	void eventDebugArrayObject(struct FString Title, int Index, class UObject* ForObj);
	void eventDebugObject(struct FString Title, class UObject* ForObj);
	bool ShouldDisplayDebug(struct FName Category);
	void LogFunc(struct FString Str);
};

// Class Core.Compression
// 0x0000 (0x0060 - 0x0060)
class UCompression : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Compression");
		}

		return uClassPointer;
	};

	bool ZLibCompress(TArray<unsigned char>& Uncompressed, TArray<unsigned char>& OutCompressed);
};

// Class Core.Component
// 0x0010 (0x0060 - 0x0070)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x0060 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FName                                       TemplateName;                                     		// 0x0068 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Component");
		}

		return uClassPointer;
	};

};

// Class Core.StringObjectMap
// 0x0050 (0x0070 - 0x00C0)
class UStringObjectMap : public UComponent
{
public:
	struct FMap_Mirror                                 Map;                                              		// 0x0070 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StringObjectMap");
		}

		return uClassPointer;
	};

	bool Contains(struct FString Key);
	void Remove(struct FString Key);
	bool TryGetObjectW(struct FString Key, class UObject*& OutValue);
	void TryGet();
	class UObject* GetObjectW(struct FString Key);
	void Get();
	void Set(struct FString Key, class UObject* Value);
};

// Class Core.StringMap
// 0x0068 (0x0070 - 0x00D8)
class UStringMap : public UComponent
{
public:
	struct FMap_Mirror                                 Map;                                              		// 0x0070 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FScriptDelegate                             __PairCallback__Delegate;                         		// 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StringMap");
		}

		return uClassPointer;
	};

	void ForEach(struct FScriptDelegate Callback);
	void Append(class UStringMap* Other);
	bool Contains(struct FString Key);
	void Remove(struct FString Key);
	bool TryGet(struct FString Key, struct FString& OutValue);
	struct FString Get(struct FString Key);
	void Set(struct FString Key, struct FString Value);
	void PairCallback(struct FString Key, struct FString Value);
};

// Class Core.ObjectProvider
// 0x0160 (0x0070 - 0x01D0)
class UObjectProvider : public UComponent
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;             		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<class UObject*>                             MyObjects;                                        		// 0x0078 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 ObjectRefs;                                       		// 0x0088 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<class UObject*>                             TreeObjects;                                      		// 0x00D8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToAdds;                                 		// 0x00E8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToRemoves;                              		// 0x00F8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToLists;                                		// 0x0108 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FArray_Mirror                               Injections;                                       		// 0x0118 (0x0010) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<class UClass*>                              PendingInjectionClasses;                          		// 0x0128 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FObjectProviderPendingCallback>      PendingCallbacks;                                 		// 0x0138 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	unsigned char                                      bTriggeringCallbacks;                             		// 0x0148 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UObjectProvider*                             Parent;                                           		// 0x0150 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	TArray<class UObjectProvider*>                     Children;                                         		// 0x0158 (0x0010) [0x000000000448200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UObjectProvider*>                     Proxies;                                          		// 0x0168 (0x0010) [0x000000000448200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	TArray<struct FObjectProviderPendingCallback>      PendingInjectionCallbacks;                        		// 0x0178 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectSubscriptionCallback__Delegate;           		// 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectListSubscriptionCallback__Delegate;       		// 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectChangeCallback__Delegate;                 		// 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectProvider");
		}

		return uClassPointer;
	};

	void SetParent(class UObjectProvider* InParent);
	void RemoveProxy(class UObjectProvider* InProxy);
	void AddProxy(class UObjectProvider* InProxy);
	void SetSingleton(class UClass* ObjClass, class UObject* Replacement);
	void Replace(class UObject* Existing, class UObject* Replacement);
	void AddAndRemoveObjects(TArray<class UObject*>& AddObjects, TArray<class UObject*>& RemoveObjects);
	void RemoveObjects(TArray<class UObject*>& InObjects);
	void RemoveAllObjects(class UClass* ObjectClass);
	void RemoveObject(class UObject* Obj);
	void AddObjects(TArray<class UObject*>& InObjects);
	void AddObject(class UObject* Obj);
	int GetExactCount(class UClass* ObjClass);
	int GetCount(class UClass* ObjClass);
	class UObject* GetOrCreate(class UClass* ObjClass);
	class UObject* GetExact(class UClass* ObjClass);
	class UObject* GetUnsafe(class UClass* ObjClass);
	class UObject* Get(class UClass* ObjClass);
	void AllObjects(class UClass* BaseClass, class UClass* InterfaceClass, class UObject*& Obj);
	bool IsRegisteredForInjection(class UObject* Subscriber);
	void InjectDelayed(class UObject* Subscriber);
	void Inject(class UObject* Subscriber);
	void UnsubscribeAll(class UObject* Subscriber);
	void Unsubscribe(struct FScriptDelegate Callback, struct FScriptDelegate Callback2);
	void SubscribeList(class UClass* BaseClass, struct FScriptDelegate Callback);
	void SubscribeOnce(class UClass* BaseClass, struct FScriptDelegate OnAdd, struct FScriptDelegate OnRemove);
	void Subscribe(class UClass* BaseClass, struct FScriptDelegate OnAdd, struct FScriptDelegate OnRemove);
	void ObjectChangeCallback();
	void ObjectListSubscriptionCallback(class UObjectProvider* Provider);
	void ObjectSubscriptionCallback(class UObject* Obj);
};

// Class Core.DistributionVector
// 0x000C (0x0070 - 0x007C)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionVector");
		}

		return uClassPointer;
	};

	struct FVector GetVectorValue(float F, int LastExtreme);
};

// Class Core.DistributionFloat
// 0x000C (0x0070 - 0x007C)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionFloat");
		}

		return uClassPointer;
	};

	float GetFloatValue(float F);
};

// Class Core.Commandlet
// 0x0054 (0x0060 - 0x00B4)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x0060 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     HelpUsage;                                        		// 0x0070 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     HelpWebLink;                                      		// 0x0080 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FString>                             HelpParamNames;                                   		// 0x0090 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FString>                             HelpParamDescriptions;                            		// 0x00A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	unsigned long                                      IsServer : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Commandlet");
		}

		return uClassPointer;
	};

	int eventMain(struct FString Params);
};

// Class Core.HelpCommandlet
// 0x0004 (0x00B4 - 0x00B8)
class UHelpCommandlet : public UCommandlet
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.HelpCommandlet");
		}

		return uClassPointer;
	};

	int eventMain(struct FString Params);
};

// Class Core.Base64
// 0x0000 (0x0060 - 0x0060)
class UBase64 : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Base64");
		}

		return uClassPointer;
	};

	void DecodeStringInline(struct FString Input, TArray<unsigned char>& Output);
	TArray<unsigned char> DecodeString(struct FString Input);
	void DecodeInline(TArray<unsigned char>& Input, TArray<unsigned char>& Output);
	TArray<unsigned char> Decode(TArray<unsigned char>& Input);
	void EncodeStringInline(TArray<unsigned char>& Input, struct FString& Output);
	struct FString EncodeString(TArray<unsigned char>& Input);
	void EncodeInline(TArray<unsigned char>& Input, TArray<unsigned char>& Output);
	TArray<unsigned char> Encode(TArray<unsigned char>& Input);
};

// Class Core.AsyncTask
// 0x0070 (0x0060 - 0x00D0)
class UAsyncTask : public UObject
{
public:
	unsigned long                                      bComplete : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisposed : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	class UError*                                      Error;                                            		// 0x0068 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventAsyncTaskSuccess__Delegate;                		// 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAsyncTaskFail__Delegate;                   		// 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAsyncTaskComplete__Delegate;               		// 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisposed__Delegate;                        		// 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.AsyncTask");
		}

		return uClassPointer;
	};

	void QueCallbacks();
	class UAsyncTask* CreateError(class UError* InError);
	class UAsyncTask* CreateSuccess();
	class UAsyncTask* Create();
	class UAsyncTask* Watch(class UAsyncTask* Other);
	class UAsyncTask* All(TArray<class UAsyncTask*> Dependents);
	class UAsyncTask* DependOn(class UAsyncTask* Other);
	class UAsyncTask* eventNotifyOnDispose(struct FScriptDelegate Callback);
	void eventClearCallbacks();
	void eventDispose();
	void SetComplete(class UError* InError);
	void eventSetError(class UError* InError);
	class UAsyncTask* eventNotifyOnComplete(struct FScriptDelegate Callback);
	class UAsyncTask* eventNotifyOnFail(struct FScriptDelegate Callback);
	class UAsyncTask* eventNotifyOnSuccess(struct FScriptDelegate Callback);
	void EventDisposed();
	void EventAsyncTaskComplete(class UError* TaskError);
	void EventAsyncTaskFail(class UError* TaskError);
	void EventAsyncTaskSuccess();
};

// Class Core.AsyncResult
// 0x0000 (0x00D0 - 0x00D0)
class UAsyncResult : public UAsyncTask
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.AsyncResult");
		}

		return uClassPointer;
	};

};

// Class Core._Types_Core
// 0x0000 (0x0060 - 0x0060)
class U_Types_Core : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core._Types_Core");
		}

		return uClassPointer;
	};

};

// Class Core.State
// 0x0060 (0x0130 - 0x0190)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x60];                              		// 0x0130 (0x0060) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.State");
		}

		return uClassPointer;
	};

};

// Class Core.Package
// 0x00E8 (0x0060 - 0x0148)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                              		// 0x0060 (0x00E8) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Package");
		}

		return uClassPointer;
	};

};

// Class Core.Class
// 0x0228 (0x0190 - 0x03B8)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[0x228];                             		// 0x0190 (0x0228) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Class");
		}

		return uClassPointer;
	};

};

// Class Core._LoggingDoc
// 0x0000 (0x0060 - 0x0060)
class U_LoggingDoc : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core._LoggingDoc");
		}

		return uClassPointer;
	};

	void TestSpecialLogging();
};

// Class Core.__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812
// 0x0010 (0x0060 - 0x0070)
class U__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812 : public UObject
{
public:
	int                                                DependentsCount;                                  		// 0x0060 (0x0004) [0x0000000000000000]               
	class UAsyncTask*                                  Parent;                                           		// 0x0068 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812");
		}

		return uClassPointer;
	};

	void __AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812();
};

// Class Core.IDisposable
// 0x0000 (0x0060 - 0x0060)
class UIDisposable : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.IDisposable");
		}

		return uClassPointer;
	};

	void eventDispose();
};

// Class Core.ArrayFuncs
// 0x0000 (0x0060 - 0x0060)
class UArrayFuncs : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ArrayFuncs");
		}

		return uClassPointer;
	};

	void GetRandomElement();
	void ShuffleArray();
};

// Class Core.TAsyncResult
// 0x0000 (0x00D0 - 0x00D0)
class UTAsyncResult : public UAsyncTask
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TAsyncResult");
		}

		return uClassPointer;
	};

};

// Class Core.Delegates
// 0x0000 (0x0060 - 0x0060)
class UDelegates : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Delegates");
		}

		return uClassPointer;
	};

};

// Class Core._Types_Generated
// 0x0000 (0x0060 - 0x0060)
class U_Types_Generated : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core._Types_Generated");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
