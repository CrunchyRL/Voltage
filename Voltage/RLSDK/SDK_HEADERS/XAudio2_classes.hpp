/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: XAudio2_classes.hpp
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

// Class XAudio2.XAudio2Device
// 0x00BC (0x03A4 - 0x0460)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0xBC];                              		// 0x03A4 (0x00BC) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->At(IDX_CLASS_XAUDIO2_XAUDIO2DEVICE));
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