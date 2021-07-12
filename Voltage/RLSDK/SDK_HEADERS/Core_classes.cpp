/*
#############################################################################################
# Rocket League (210513.57953.327225) SDK
# Generated with the UE3SDKGenerator v4.2.0
# ========================================================================================= #
# File: Core_classes.cpp
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

TArray<class UObject*>* UObject::GObjObjects()
{
	TArray<class UObject*>* objectArray = reinterpret_cast<TArray<class UObject*>*>(GObjects);
	return objectArray;
}

char const* UObject::GetName()
{
	static char charBuffer[512];
	memset(charBuffer, 0, sizeof charBuffer);
	std::string name = this->Name.ToString();
	sprintf_s(charBuffer, "%s", name.c_str());

	return charBuffer;
}

char const* UObject::GetNameCPP()
{
	static char charBuffer[512];

	if (this->IsA(UClass::StaticClass()))
	{
		UClass* uClass = reinterpret_cast<UClass*>(this);

		while (uClass)
		{
			std::string className = uClass->GetName();

			if (className == "Actor")
			{
				strcpy_s(charBuffer, "A");
				break;
			}
			else if (className == "Object")
			{
				strcpy_s(charBuffer, "U");
				break;
			}

			uClass = reinterpret_cast<UClass*>(uClass->SuperField);
		}
	}
	else
	{
		strcpy_s(charBuffer, "F");
	}

	strcat_s(charBuffer, this->GetName());

	return charBuffer;
}

char const* UObject::GetFullName()
{
	if (this->Class && this->Outer)
	{
		static char charBuffer[1024];
		char tempBuffer[1024];
		strcpy_s(charBuffer, this->GetName());

		for (UObject* uOuter = this->Outer; uOuter; uOuter = uOuter->Outer)
		{
			strcpy_s(tempBuffer, uOuter->GetName());
			strcat_s(tempBuffer, ".");

			size_t len1 = strlen(tempBuffer);
			size_t len2 = strlen(charBuffer);

			memmove(charBuffer + len1, charBuffer, len1 + len2 + 1);
			memcpy(charBuffer, tempBuffer, len1);
		}

		strcpy_s(tempBuffer, this->Class->GetName());
		strcat_s(tempBuffer, " ");

		size_t len1 = strlen(tempBuffer);
		size_t len2 = strlen(charBuffer);

		memmove(charBuffer + len1, charBuffer, len1 + len2 + 1);
		memcpy(charBuffer, tempBuffer, len1);

		return charBuffer;
	}

	return "null";
}

UObject* UObject::GetPackageObj()
{
	UObject* uPackage = nullptr;

	for (UObject* uOuter = this->Outer; uOuter; uOuter = uOuter->Outer)
	{
		uPackage = uOuter;
	}

	return uPackage;
}

template<typename T> T* UObject::FindObject(char const* objectFullName)
{
	for (UObject* uObject : *UObject::GObjObjects())
	{
		if (uObject && uObject->IsA(T::StaticClass()))
		{
			if (uObject->GetFullName() == objectFullName)
			{
				return reinterpret_cast<T*>(uObject);
			}
		}
	}

	return nullptr;
}

template<typename T> static unsigned int UObject::CountObject(char const* objectName)
{
	static std::map<std::string, int> countCache;

	if (countCache.find(objectName) == countCache.end())
	{
		countCache[objectName] = 0;

		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA(T::StaticClass()))
			{
				if (uObject->GetName() == objectName)
				{
					countCache[std::string(uObject->GetName())]++;
				}
			}
		}
	}

	return countCache[objectName];
}

class UClass* UObject::FindClass(char const* classFullName)
{
	static bool initialized = false;
	static std::map<std::string, UClass*> foundClasses{};

	if (!initialized)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				std::string objectFullName = uObject->GetFullName();

				if (objectFullName.find("Class") == 0)
				{
					foundClasses[objectFullName] = reinterpret_cast<UClass*>(uObject);
				}
			}
		}

		initialized = true;
	}

	if (foundClasses.find(classFullName) != foundClasses.end())
	{
		return foundClasses[classFullName];
	}

	return nullptr;
}

bool UObject::IsA(UClass* uClass)
{
	for (UClass* uSuperClass = this->Class; uSuperClass; uSuperClass = reinterpret_cast<UClass*>(uSuperClass->SuperField))
	{
		if (uSuperClass == uClass)
		{
			return true;
		}
	}

	return false;
}

bool UObject::IsA(int objInternalInteger)
{
	UClass* uClass = UObject::GObjObjects()->At(objInternalInteger)->Class;

	if (uClass)
	{
		return this->IsA(uClass);
	}

	return false;
}

template<typename T>
T GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<T>(vtable[index]);
}

void UObject::ProcessEvent(class UFunction* pFunction, void* pParms, void* pResult = nullptr)
{
	GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 67)(this, pFunction, pParms);
}

// Function Core.Object.RSmoothInterpTo
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                From                           (CPF_Parm)
// struct FRotator                To                             (CPF_Parm)
// float                          Lambda                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

struct FRotator UObject::RSmoothInterpTo(struct FRotator From, struct FRotator To, float Lambda, float DeltaTime)
{
	static UFunction* pFnRSmoothInterpTo = nullptr;

	if (!pFnRSmoothInterpTo)
	{
		pFnRSmoothInterpTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RSMOOTHINTERPTO));
	}

	UObject_execRSmoothInterpTo_Parms RSmoothInterpTo_Parms;
	memcpy_s(&RSmoothInterpTo_Parms.From, 0xC, &From, 0xC);
	memcpy_s(&RSmoothInterpTo_Parms.To, 0xC, &To, 0xC);
	memcpy_s(&RSmoothInterpTo_Parms.Lambda, 0x4, &Lambda, 0x4);
	memcpy_s(&RSmoothInterpTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(pFnRSmoothInterpTo, &RSmoothInterpTo_Parms, nullptr);

	return RSmoothInterpTo_Parms.ReturnValue;
};

// Function Core.Object.VSmoothInterpTo
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 From                           (CPF_Parm)
// struct FVector                 To                             (CPF_Parm)
// float                          Lambda                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

struct FVector UObject::VSmoothInterpTo(struct FVector From, struct FVector To, float Lambda, float DeltaTime)
{
	static UFunction* pFnVSmoothInterpTo = nullptr;

	if (!pFnVSmoothInterpTo)
	{
		pFnVSmoothInterpTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VSMOOTHINTERPTO));
	}

	UObject_execVSmoothInterpTo_Parms VSmoothInterpTo_Parms;
	memcpy_s(&VSmoothInterpTo_Parms.From, 0xC, &From, 0xC);
	memcpy_s(&VSmoothInterpTo_Parms.To, 0xC, &To, 0xC);
	memcpy_s(&VSmoothInterpTo_Parms.Lambda, 0x4, &Lambda, 0x4);
	memcpy_s(&VSmoothInterpTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(pFnVSmoothInterpTo, &VSmoothInterpTo_Parms, nullptr);

	return VSmoothInterpTo_Parms.ReturnValue;
};

// Function Core.Object.FSmoothInterpTo
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          From                           (CPF_Parm)
// float                          To                             (CPF_Parm)
// float                          Lambda                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

float UObject::FSmoothInterpTo(float From, float To, float Lambda, float DeltaTime)
{
	static UFunction* pFnFSmoothInterpTo = nullptr;

	if (!pFnFSmoothInterpTo)
	{
		pFnFSmoothInterpTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FSMOOTHINTERPTO));
	}

	UObject_execFSmoothInterpTo_Parms FSmoothInterpTo_Parms;
	memcpy_s(&FSmoothInterpTo_Parms.From, 0x4, &From, 0x4);
	memcpy_s(&FSmoothInterpTo_Parms.To, 0x4, &To, 0x4);
	memcpy_s(&FSmoothInterpTo_Parms.Lambda, 0x4, &Lambda, 0x4);
	memcpy_s(&FSmoothInterpTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(pFnFSmoothInterpTo, &FSmoothInterpTo_Parms, nullptr);

	return FSmoothInterpTo_Parms.ReturnValue;
};

// Function Core.Object.GetSmoothInterpLerpValue
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Lambda                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

float UObject::GetSmoothInterpLerpValue(float Lambda, float DeltaTime)
{
	static UFunction* pFnGetSmoothInterpLerpValue = nullptr;

	if (!pFnGetSmoothInterpLerpValue)
	{
		pFnGetSmoothInterpLerpValue = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSMOOTHINTERPLERPVALUE));
	}

	UObject_execGetSmoothInterpLerpValue_Parms GetSmoothInterpLerpValue_Parms;
	memcpy_s(&GetSmoothInterpLerpValue_Parms.Lambda, 0x4, &Lambda, 0x4);
	memcpy_s(&GetSmoothInterpLerpValue_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(pFnGetSmoothInterpLerpValue, &GetSmoothInterpLerpValue_Parms, nullptr);

	return GetSmoothInterpLerpValue_Parms.ReturnValue;
};

// Function Core.Object.GetTypedOuter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)

class UObject* UObject::GetTypedOuter(class UClass* ObjClass)
{
	static UFunction* pFnGetTypedOuter = nullptr;

	if (!pFnGetTypedOuter)
	{
		pFnGetTypedOuter = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETTYPEDOUTER));
	}

	UObject_execGetTypedOuter_Parms GetTypedOuter_Parms;
	memcpy_s(&GetTypedOuter_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetTypedOuter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTypedOuter, &GetTypedOuter_Parms, nullptr);

	pFnGetTypedOuter->FunctionFlags |= 0x400;

	return GetTypedOuter_Parms.ReturnValue;
};

// Function Core.Object.MarkPendingKill
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::MarkPendingKill()
{
	static UFunction* pFnMarkPendingKill = nullptr;

	if (!pFnMarkPendingKill)
	{
		pFnMarkPendingKill = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MARKPENDINGKILL));
	}

	UObject_execMarkPendingKill_Parms MarkPendingKill_Parms;

	pFnMarkPendingKill->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMarkPendingKill, &MarkPendingKill_Parms, nullptr);

	pFnMarkPendingKill->FunctionFlags |= 0x400;
};

// Function Core.Object.NotNone
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 O                              (CPF_Parm)

bool UObject::NotNone(class UObject* O)
{
	static UFunction* pFnNotNone = nullptr;

	if (!pFnNotNone)
	{
		pFnNotNone = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTNONE));
	}

	UObject_execNotNone_Parms NotNone_Parms;
	memcpy_s(&NotNone_Parms.O, 0x8, &O, 0x8);

	this->ProcessEvent(pFnNotNone, &NotNone_Parms, nullptr);

	return NotNone_Parms.ReturnValue;
};

// Function Core.Object.SwapArrayItems
// [0x80022001] (FUNC_Final | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UObject::SwapArrayItems()
{
	static UFunction* pFnSwapArrayItems = nullptr;

	if (!pFnSwapArrayItems)
	{
		pFnSwapArrayItems = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SWAPARRAYITEMS));
	}

	UObject_execSwapArrayItems_Parms SwapArrayItems_Parms;

	this->ProcessEvent(pFnSwapArrayItems, &SwapArrayItems_Parms, nullptr);
};

// Function Core.Object.Swap
// [0x80022001] (FUNC_Final | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UObject::Swap()
{
	static UFunction* pFnSwap = nullptr;

	if (!pFnSwap)
	{
		pFnSwap = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SWAP));
	}

	UObject_execSwap_Parms Swap_Parms;

	this->ProcessEvent(pFnSwap, &Swap_Parms, nullptr);
};

// Function Core.Object.SumFloat
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Total                          (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::SumFloat(float Total, float Value)
{
	static UFunction* pFnSumFloat = nullptr;

	if (!pFnSumFloat)
	{
		pFnSumFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUMFLOAT));
	}

	UObject_execSumFloat_Parms SumFloat_Parms;
	memcpy_s(&SumFloat_Parms.Total, 0x4, &Total, 0x4);
	memcpy_s(&SumFloat_Parms.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(pFnSumFloat, &SumFloat_Parms, nullptr);

	return SumFloat_Parms.ReturnValue;
};

// Function Core.Object.SumInt
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Total                          (CPF_Parm)
// int                            Value                          (CPF_Parm)

int UObject::SumInt(int Total, int Value)
{
	static UFunction* pFnSumInt = nullptr;

	if (!pFnSumInt)
	{
		pFnSumInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUMINT));
	}

	UObject_execSumInt_Parms SumInt_Parms;
	memcpy_s(&SumInt_Parms.Total, 0x4, &Total, 0x4);
	memcpy_s(&SumInt_Parms.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(pFnSumInt, &SumInt_Parms, nullptr);

	return SumInt_Parms.ReturnValue;
};

// Function Core.Object.SortDescendingFloat
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

int UObject::SortDescendingFloat(float A, float B)
{
	static UFunction* pFnSortDescendingFloat = nullptr;

	if (!pFnSortDescendingFloat)
	{
		pFnSortDescendingFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTDESCENDINGFLOAT));
	}

	UObject_execSortDescendingFloat_Parms SortDescendingFloat_Parms;
	memcpy_s(&SortDescendingFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&SortDescendingFloat_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnSortDescendingFloat, &SortDescendingFloat_Parms, nullptr);

	return SortDescendingFloat_Parms.ReturnValue;
};

// Function Core.Object.SortAscendingFloat
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

int UObject::SortAscendingFloat(float A, float B)
{
	static UFunction* pFnSortAscendingFloat = nullptr;

	if (!pFnSortAscendingFloat)
	{
		pFnSortAscendingFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTASCENDINGFLOAT));
	}

	UObject_execSortAscendingFloat_Parms SortAscendingFloat_Parms;
	memcpy_s(&SortAscendingFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&SortAscendingFloat_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnSortAscendingFloat, &SortAscendingFloat_Parms, nullptr);

	return SortAscendingFloat_Parms.ReturnValue;
};

// Function Core.Object.SortDescendingString
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

int UObject::SortDescendingString(struct FString A, struct FString B)
{
	static UFunction* pFnSortDescendingString = nullptr;

	if (!pFnSortDescendingString)
	{
		pFnSortDescendingString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTDESCENDINGSTRING));
	}

	UObject_execSortDescendingString_Parms SortDescendingString_Parms;
	memcpy_s(&SortDescendingString_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&SortDescendingString_Parms.B, 0x10, &B, 0x10);

	this->ProcessEvent(pFnSortDescendingString, &SortDescendingString_Parms, nullptr);

	return SortDescendingString_Parms.ReturnValue;
};

// Function Core.Object.SortAscendingString
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

int UObject::SortAscendingString(struct FString A, struct FString B)
{
	static UFunction* pFnSortAscendingString = nullptr;

	if (!pFnSortAscendingString)
	{
		pFnSortAscendingString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTASCENDINGSTRING));
	}

	UObject_execSortAscendingString_Parms SortAscendingString_Parms;
	memcpy_s(&SortAscendingString_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&SortAscendingString_Parms.B, 0x10, &B, 0x10);

	this->ProcessEvent(pFnSortAscendingString, &SortAscendingString_Parms, nullptr);

	return SortAscendingString_Parms.ReturnValue;
};

// Function Core.Object.SortDescendingQWORD
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

int UObject::SortDescendingQWORD(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnSortDescendingQWORD = nullptr;

	if (!pFnSortDescendingQWORD)
	{
		pFnSortDescendingQWORD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTDESCENDINGQWORD));
	}

	UObject_execSortDescendingQWORD_Parms SortDescendingQWORD_Parms;
	SortDescendingQWORD_Parms.A = A;
	SortDescendingQWORD_Parms.B = B;

	this->ProcessEvent(pFnSortDescendingQWORD, &SortDescendingQWORD_Parms, nullptr);

	return SortDescendingQWORD_Parms.ReturnValue;
};

// Function Core.Object.SortAscendingQWORD
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

int UObject::SortAscendingQWORD(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnSortAscendingQWORD = nullptr;

	if (!pFnSortAscendingQWORD)
	{
		pFnSortAscendingQWORD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTASCENDINGQWORD));
	}

	UObject_execSortAscendingQWORD_Parms SortAscendingQWORD_Parms;
	SortAscendingQWORD_Parms.A = A;
	SortAscendingQWORD_Parms.B = B;

	this->ProcessEvent(pFnSortAscendingQWORD, &SortAscendingQWORD_Parms, nullptr);

	return SortAscendingQWORD_Parms.ReturnValue;
};

// Function Core.Object.SortDescendingInt
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::SortDescendingInt(int A, int B)
{
	static UFunction* pFnSortDescendingInt = nullptr;

	if (!pFnSortDescendingInt)
	{
		pFnSortDescendingInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTDESCENDINGINT));
	}

	UObject_execSortDescendingInt_Parms SortDescendingInt_Parms;
	memcpy_s(&SortDescendingInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&SortDescendingInt_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnSortDescendingInt, &SortDescendingInt_Parms, nullptr);

	return SortDescendingInt_Parms.ReturnValue;
};

// Function Core.Object.SortAscendingInt
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::SortAscendingInt(int A, int B)
{
	static UFunction* pFnSortAscendingInt = nullptr;

	if (!pFnSortAscendingInt)
	{
		pFnSortAscendingInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SORTASCENDINGINT));
	}

	UObject_execSortAscendingInt_Parms SortAscendingInt_Parms;
	memcpy_s(&SortAscendingInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&SortAscendingInt_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnSortAscendingInt, &SortAscendingInt_Parms, nullptr);

	return SortAscendingInt_Parms.ReturnValue;
};

// Function Core.Object.PadString
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Str                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int                            Characters                     (CPF_Parm)

struct FString UObject::PadString(struct FString Str, int Characters)
{
	static UFunction* pFnPadString = nullptr;

	if (!pFnPadString)
	{
		pFnPadString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PADSTRING));
	}

	UObject_execPadString_Parms PadString_Parms;
	memcpy_s(&PadString_Parms.Str, 0x10, &Str, 0x10);
	memcpy_s(&PadString_Parms.Characters, 0x4, &Characters, 0x4);

	this->ProcessEvent(pFnPadString, &PadString_Parms, nullptr);

	return PadString_Parms.ReturnValue;
};

// Function Core.Object.GetFrameCounter
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long long             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned long long UObject::GetFrameCounter()
{
	static UFunction* pFnGetFrameCounter = nullptr;

	if (!pFnGetFrameCounter)
	{
		pFnGetFrameCounter = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETFRAMECOUNTER));
	}

	UObject_execGetFrameCounter_Parms GetFrameCounter_Parms;

	pFnGetFrameCounter->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFrameCounter, &GetFrameCounter_Parms, nullptr);

	pFnGetFrameCounter->FunctionFlags |= 0x400;

	return GetFrameCounter_Parms.ReturnValue;
};

// Function Core.Object.GetScaledAxisValue
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Value                          (CPF_Parm)
// float                          Sensitivity                    (CPF_Parm)
// float                          MaxSensitivity                 (CPF_Parm)

float UObject::GetScaledAxisValue(float Value, float Sensitivity, float MaxSensitivity)
{
	static UFunction* pFnGetScaledAxisValue = nullptr;

	if (!pFnGetScaledAxisValue)
	{
		pFnGetScaledAxisValue = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSCALEDAXISVALUE));
	}

	UObject_execGetScaledAxisValue_Parms GetScaledAxisValue_Parms;
	memcpy_s(&GetScaledAxisValue_Parms.Value, 0x4, &Value, 0x4);
	memcpy_s(&GetScaledAxisValue_Parms.Sensitivity, 0x4, &Sensitivity, 0x4);
	memcpy_s(&GetScaledAxisValue_Parms.MaxSensitivity, 0x4, &MaxSensitivity, 0x4);

	pFnGetScaledAxisValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetScaledAxisValue, &GetScaledAxisValue_Parms, nullptr);

	pFnGetScaledAxisValue->FunctionFlags |= 0x400;

	return GetScaledAxisValue_Parms.ReturnValue;
};

// Function Core.Object.GetSingleton
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)

class UObject* UObject::GetSingleton(class UClass* ObjClass)
{
	static UFunction* pFnGetSingleton = nullptr;

	if (!pFnGetSingleton)
	{
		pFnGetSingleton = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSINGLETON));
	}

	UObject_execGetSingleton_Parms GetSingleton_Parms;
	memcpy_s(&GetSingleton_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetSingleton->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSingleton, &GetSingleton_Parms, nullptr);

	pFnGetSingleton->FunctionFlags |= 0x400;

	return GetSingleton_Parms.ReturnValue;
};

// Function Core.Object.GetObjectProvider
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObjectProvider*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)

class UObjectProvider* UObject::GetObjectProviderW()
{
	static UFunction* pFnGetObjectProviderW = nullptr;

	if (!pFnGetObjectProviderW)
	{
		pFnGetObjectProviderW = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETOBJECTPROVIDER));
	}

	UObject_execGetObjectProviderW_Parms GetObjectProviderW_Parms;

	pFnGetObjectProviderW->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetObjectProviderW, &GetObjectProviderW_Parms, nullptr);

	pFnGetObjectProviderW->FunctionFlags |= 0x400;

	return GetObjectProviderW_Parms.ReturnValue;
};

// Function Core.Object.IsAutomationTest
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsAutomationTest()
{
	static UFunction* pFnIsAutomationTest = nullptr;

	if (!pFnIsAutomationTest)
	{
		pFnIsAutomationTest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISAUTOMATIONTEST));
	}

	UObject_execIsAutomationTest_Parms IsAutomationTest_Parms;

	pFnIsAutomationTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsAutomationTest, &IsAutomationTest_Parms, nullptr);

	pFnIsAutomationTest->FunctionFlags |= 0x400;

	return IsAutomationTest_Parms.ReturnValue;
};

// Function Core.Object.GetEdition
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

unsigned char UObject::GetEdition()
{
	static UFunction* pFnGetEdition = nullptr;

	if (!pFnGetEdition)
	{
		pFnGetEdition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETEDITION));
	}

	UObject_execGetEdition_Parms GetEdition_Parms;

	pFnGetEdition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetEdition, &GetEdition_Parms, nullptr);

	pFnGetEdition->FunctionFlags |= 0x400;

	return GetEdition_Parms.ReturnValue;
};

// Function Core.Object.IsEdition
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  Edition                        (CPF_Parm)

bool UObject::IsEdition(unsigned char Edition)
{
	static UFunction* pFnIsEdition = nullptr;

	if (!pFnIsEdition)
	{
		pFnIsEdition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISEDITION));
	}

	UObject_execIsEdition_Parms IsEdition_Parms;
	IsEdition_Parms.Edition = Edition;

	pFnIsEdition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsEdition, &IsEdition_Parms, nullptr);

	pFnIsEdition->FunctionFlags |= 0x400;

	return IsEdition_Parms.ReturnValue;
};

// Function Core.Object.ToJson
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UObject::ToJson()
{
	static UFunction* pFnToJson = nullptr;

	if (!pFnToJson)
	{
		pFnToJson = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TOJSON));
	}

	UObject_execToJson_Parms ToJson_Parms;

	pFnToJson->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnToJson, &ToJson_Parms, nullptr);

	pFnToJson->FunctionFlags |= 0x400;

	return ToJson_Parms.ReturnValue;
};

// Function Core.Object.SetRooted
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRooted                        (CPF_Parm)

void UObject::SetRooted(unsigned long bRooted)
{
	static UFunction* pFnSetRooted = nullptr;

	if (!pFnSetRooted)
	{
		pFnSetRooted = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SETROOTED));
	}

	UObject_execSetRooted_Parms SetRooted_Parms;
	SetRooted_Parms.bRooted = bRooted;

	pFnSetRooted->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRooted, &SetRooted_Parms, nullptr);

	pFnSetRooted->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeEvent
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 EventName                      (CPF_Parm | CPF_NeedCtorLink)

void UObject::ProfNodeEvent(struct FString EventName)
{
	static UFunction* pFnProfNodeEvent = nullptr;

	if (!pFnProfNodeEvent)
	{
		pFnProfNodeEvent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROFNODEEVENT));
	}

	UObject_execProfNodeEvent_Parms ProfNodeEvent_Parms;
	memcpy_s(&ProfNodeEvent_Parms.EventName, 0x10, &EventName, 0x10);

	pFnProfNodeEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfNodeEvent, &ProfNodeEvent_Parms, nullptr);

	pFnProfNodeEvent->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeSetDepthThreshold
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            Depth                          (CPF_Parm)

void UObject::ProfNodeSetDepthThreshold(int Depth)
{
	static UFunction* pFnProfNodeSetDepthThreshold = nullptr;

	if (!pFnProfNodeSetDepthThreshold)
	{
		pFnProfNodeSetDepthThreshold = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROFNODESETDEPTHTHRESHOLD));
	}

	UObject_execProfNodeSetDepthThreshold_Parms ProfNodeSetDepthThreshold_Parms;
	memcpy_s(&ProfNodeSetDepthThreshold_Parms.Depth, 0x4, &Depth, 0x4);

	pFnProfNodeSetDepthThreshold->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfNodeSetDepthThreshold, &ProfNodeSetDepthThreshold_Parms, nullptr);

	pFnProfNodeSetDepthThreshold->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeSetTimeThresholdSeconds
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Threshold                      (CPF_Parm)

void UObject::ProfNodeSetTimeThresholdSeconds(float Threshold)
{
	static UFunction* pFnProfNodeSetTimeThresholdSeconds = nullptr;

	if (!pFnProfNodeSetTimeThresholdSeconds)
	{
		pFnProfNodeSetTimeThresholdSeconds = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROFNODESETTIMETHRESHOLDSECONDS));
	}

	UObject_execProfNodeSetTimeThresholdSeconds_Parms ProfNodeSetTimeThresholdSeconds_Parms;
	memcpy_s(&ProfNodeSetTimeThresholdSeconds_Parms.Threshold, 0x4, &Threshold, 0x4);

	pFnProfNodeSetTimeThresholdSeconds->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfNodeSetTimeThresholdSeconds, &ProfNodeSetTimeThresholdSeconds_Parms, nullptr);

	pFnProfNodeSetTimeThresholdSeconds->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeStop
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            AssumedTimerIndex              (CPF_OptionalParm | CPF_Parm)

void UObject::ProfNodeStop(int AssumedTimerIndex)
{
	static UFunction* pFnProfNodeStop = nullptr;

	if (!pFnProfNodeStop)
	{
		pFnProfNodeStop = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROFNODESTOP));
	}

	UObject_execProfNodeStop_Parms ProfNodeStop_Parms;
	memcpy_s(&ProfNodeStop_Parms.AssumedTimerIndex, 0x4, &AssumedTimerIndex, 0x4);

	pFnProfNodeStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfNodeStop, &ProfNodeStop_Parms, nullptr);

	pFnProfNodeStop->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeStart
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 TimerName                      (CPF_Parm | CPF_NeedCtorLink)

int UObject::ProfNodeStart(struct FString TimerName)
{
	static UFunction* pFnProfNodeStart = nullptr;

	if (!pFnProfNodeStart)
	{
		pFnProfNodeStart = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROFNODESTART));
	}

	UObject_execProfNodeStart_Parms ProfNodeStart_Parms;
	memcpy_s(&ProfNodeStart_Parms.TimerName, 0x10, &TimerName, 0x10);

	pFnProfNodeStart->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProfNodeStart, &ProfNodeStart_Parms, nullptr);

	pFnProfNodeStart->FunctionFlags |= 0x400;

	return ProfNodeStart_Parms.ReturnValue;
};

// Function Core.Object.CreateGuidString
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UObject::CreateGuidString()
{
	static UFunction* pFnCreateGuidString = nullptr;

	if (!pFnCreateGuidString)
	{
		pFnCreateGuidString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CREATEGUIDSTRING));
	}

	UObject_execCreateGuidString_Parms CreateGuidString_Parms;

	this->ProcessEvent(pFnCreateGuidString, &CreateGuidString_Parms, nullptr);

	return CreateGuidString_Parms.ReturnValue;
};

// Function Core.Object.GetStringFromGuid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FGuid                   InGuid                         (CPF_Const | CPF_Parm | CPF_OutParm)

struct FString UObject::GetStringFromGuid(struct FGuid& InGuid)
{
	static UFunction* pFnGetStringFromGuid = nullptr;

	if (!pFnGetStringFromGuid)
	{
		pFnGetStringFromGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSTRINGFROMGUID));
	}

	UObject_execGetStringFromGuid_Parms GetStringFromGuid_Parms;

	pFnGetStringFromGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetStringFromGuid, &GetStringFromGuid_Parms, nullptr);

	pFnGetStringFromGuid->FunctionFlags |= 0x400;
	memcpy_s(&GetStringFromGuid_Parms.InGuid, 0x10, &InGuid, 0x10);

	return GetStringFromGuid_Parms.ReturnValue;
};

// Function Core.Object.GetGuidFromString
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGuid                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 InGuidString                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FGuid UObject::GetGuidFromString(struct FString& InGuidString)
{
	static UFunction* pFnGetGuidFromString = nullptr;

	if (!pFnGetGuidFromString)
	{
		pFnGetGuidFromString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETGUIDFROMSTRING));
	}

	UObject_execGetGuidFromString_Parms GetGuidFromString_Parms;

	pFnGetGuidFromString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetGuidFromString, &GetGuidFromString_Parms, nullptr);

	pFnGetGuidFromString->FunctionFlags |= 0x400;
	memcpy_s(&GetGuidFromString_Parms.InGuidString, 0x10, &InGuidString, 0x10);

	return GetGuidFromString_Parms.ReturnValue;
};

// Function Core.Object.CreateGuid
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FGuid                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FGuid UObject::CreateGuid()
{
	static UFunction* pFnCreateGuid = nullptr;

	if (!pFnCreateGuid)
	{
		pFnCreateGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CREATEGUID));
	}

	UObject_execCreateGuid_Parms CreateGuid_Parms;

	pFnCreateGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateGuid, &CreateGuid_Parms, nullptr);

	pFnCreateGuid->FunctionFlags |= 0x400;

	return CreateGuid_Parms.ReturnValue;
};

// Function Core.Object.IsGuidValid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FGuid                   InGuid                         (CPF_Const | CPF_Parm | CPF_OutParm)

bool UObject::IsGuidValid(struct FGuid& InGuid)
{
	static UFunction* pFnIsGuidValid = nullptr;

	if (!pFnIsGuidValid)
	{
		pFnIsGuidValid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISGUIDVALID));
	}

	UObject_execIsGuidValid_Parms IsGuidValid_Parms;

	pFnIsGuidValid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsGuidValid, &IsGuidValid_Parms, nullptr);

	pFnIsGuidValid->FunctionFlags |= 0x400;
	memcpy_s(&IsGuidValid_Parms.InGuid, 0x10, &InGuid, 0x10);

	return IsGuidValid_Parms.ReturnValue;
};

// Function Core.Object.InvalidateGuid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGuid                   InGuid                         (CPF_Parm | CPF_OutParm)

void UObject::InvalidateGuid(struct FGuid& InGuid)
{
	static UFunction* pFnInvalidateGuid = nullptr;

	if (!pFnInvalidateGuid)
	{
		pFnInvalidateGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INVALIDATEGUID));
	}

	UObject_execInvalidateGuid_Parms InvalidateGuid_Parms;

	pFnInvalidateGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInvalidateGuid, &InvalidateGuid_Parms, nullptr);

	pFnInvalidateGuid->FunctionFlags |= 0x400;
	memcpy_s(&InvalidateGuid_Parms.InGuid, 0x10, &InGuid, 0x10);
};

// Function Core.Object.FindStructProperty
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  PropertyClass                  (CPF_Parm)
// struct FName                   PropertyName                   (CPF_Parm)
// struct FName                   StructName                     (CPF_Parm)

class UObject* UObject::FindStructProperty(class UClass* PropertyClass, struct FName PropertyName, struct FName StructName)
{
	static UFunction* pFnFindStructProperty = nullptr;

	if (!pFnFindStructProperty)
	{
		pFnFindStructProperty = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINDSTRUCTPROPERTY));
	}

	UObject_execFindStructProperty_Parms FindStructProperty_Parms;
	memcpy_s(&FindStructProperty_Parms.PropertyClass, 0x8, &PropertyClass, 0x8);
	memcpy_s(&FindStructProperty_Parms.PropertyName, 0x8, &PropertyName, 0x8);
	memcpy_s(&FindStructProperty_Parms.StructName, 0x8, &StructName, 0x8);

	pFnFindStructProperty->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindStructProperty, &FindStructProperty_Parms, nullptr);

	pFnFindStructProperty->FunctionFlags |= 0x400;

	return FindStructProperty_Parms.ReturnValue;
};

// Function Core.Object.FindProperty
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  PropertyClass                  (CPF_Parm)
// struct FName                   PropertyName                   (CPF_Parm)

class UObject* UObject::FindProperty(class UClass* PropertyClass, struct FName PropertyName)
{
	static UFunction* pFnFindProperty = nullptr;

	if (!pFnFindProperty)
	{
		pFnFindProperty = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINDPROPERTY));
	}

	UObject_execFindProperty_Parms FindProperty_Parms;
	memcpy_s(&FindProperty_Parms.PropertyClass, 0x8, &PropertyClass, 0x8);
	memcpy_s(&FindProperty_Parms.PropertyName, 0x8, &PropertyName, 0x8);

	pFnFindProperty->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindProperty, &FindProperty_Parms, nullptr);

	pFnFindProperty->FunctionFlags |= 0x400;

	return FindProperty_Parms.ReturnValue;
};

// Function Core.Object.DuplicateObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UObject*                 Template                       (CPF_Parm)
// class UObject*                 ObjOuter                       (CPF_OptionalParm | CPF_Parm)
// class UClass*                  DestClass                      (CPF_OptionalParm | CPF_Parm)

class UObject* UObject::DuplicateObject(class UObject* Template, class UObject* ObjOuter, class UClass* DestClass)
{
	static UFunction* pFnDuplicateObject = nullptr;

	if (!pFnDuplicateObject)
	{
		pFnDuplicateObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DUPLICATEOBJECT));
	}

	UObject_execDuplicateObject_Parms DuplicateObject_Parms;
	memcpy_s(&DuplicateObject_Parms.Template, 0x8, &Template, 0x8);
	memcpy_s(&DuplicateObject_Parms.ObjOuter, 0x8, &ObjOuter, 0x8);
	memcpy_s(&DuplicateObject_Parms.DestClass, 0x8, &DestClass, 0x8);

	pFnDuplicateObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDuplicateObject, &DuplicateObject_Parms, nullptr);

	pFnDuplicateObject->FunctionFlags |= 0x400;

	return DuplicateObject_Parms.ReturnValue;
};

// Function Core.Object.RunningAverage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          OldAverage                     (CPF_Parm)
// float                          NewValue                       (CPF_Parm)
// int                            NewCount                       (CPF_Parm)

float UObject::RunningAverage(float OldAverage, float NewValue, int NewCount)
{
	static UFunction* pFnRunningAverage = nullptr;

	if (!pFnRunningAverage)
	{
		pFnRunningAverage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RUNNINGAVERAGE));
	}

	UObject_execRunningAverage_Parms RunningAverage_Parms;
	memcpy_s(&RunningAverage_Parms.OldAverage, 0x4, &OldAverage, 0x4);
	memcpy_s(&RunningAverage_Parms.NewValue, 0x4, &NewValue, 0x4);
	memcpy_s(&RunningAverage_Parms.NewCount, 0x4, &NewCount, 0x4);

	pFnRunningAverage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRunningAverage, &RunningAverage_Parms, nullptr);

	pFnRunningAverage->FunctionFlags |= 0x400;

	return RunningAverage_Parms.ReturnValue;
};

// Function Core.Object.GetCurrentTime
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UObject::GetCurrentTimeW()
{
	static UFunction* pFnGetCurrentTimeW = nullptr;

	if (!pFnGetCurrentTimeW)
	{
		pFnGetCurrentTimeW = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETCURRENTTIME));
	}

	UObject_execGetCurrentTimeW_Parms GetCurrentTimeW_Parms;

	pFnGetCurrentTimeW->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetCurrentTimeW, &GetCurrentTimeW_Parms, nullptr);

	pFnGetCurrentTimeW->FunctionFlags |= 0x400;

	return GetCurrentTimeW_Parms.ReturnValue;
};

// Function Core.Object.GetMaxLinearColorBrightness
// [0x00020501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            C                              (CPF_Parm)

struct FLinearColor UObject::GetMaxLinearColorBrightness(struct FLinearColor C)
{
	static UFunction* pFnGetMaxLinearColorBrightness = nullptr;

	if (!pFnGetMaxLinearColorBrightness)
	{
		pFnGetMaxLinearColorBrightness = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETMAXLINEARCOLORBRIGHTNESS));
	}

	UObject_execGetMaxLinearColorBrightness_Parms GetMaxLinearColorBrightness_Parms;
	memcpy_s(&GetMaxLinearColorBrightness_Parms.C, 0x10, &C, 0x10);

	pFnGetMaxLinearColorBrightness->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetMaxLinearColorBrightness, &GetMaxLinearColorBrightness_Parms, nullptr);

	pFnGetMaxLinearColorBrightness->FunctionFlags |= 0x400;

	return GetMaxLinearColorBrightness_Parms.ReturnValue;
};

// Function Core.Object.GetMaxColorBrightness
// [0x00020103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  C                              (CPF_Parm)

struct FColor UObject::GetMaxColorBrightness(struct FColor C)
{
	static UFunction* pFnGetMaxColorBrightness = nullptr;

	if (!pFnGetMaxColorBrightness)
	{
		pFnGetMaxColorBrightness = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETMAXCOLORBRIGHTNESS));
	}

	UObject_execGetMaxColorBrightness_Parms GetMaxColorBrightness_Parms;
	memcpy_s(&GetMaxColorBrightness_Parms.C, 0x4, &C, 0x4);

	this->ProcessEvent(pFnGetMaxColorBrightness, &GetMaxColorBrightness_Parms, nullptr);

	return GetMaxColorBrightness_Parms.ReturnValue;
};

// Function Core.Object.LABtoRGB
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            C                              (CPF_Parm)

struct FLinearColor UObject::LABtoRGB(struct FLinearColor C)
{
	static UFunction* pFnLABtoRGB = nullptr;

	if (!pFnLABtoRGB)
	{
		pFnLABtoRGB = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LABTORGB));
	}

	UObject_execLABtoRGB_Parms LABtoRGB_Parms;
	memcpy_s(&LABtoRGB_Parms.C, 0x10, &C, 0x10);

	pFnLABtoRGB->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLABtoRGB, &LABtoRGB_Parms, nullptr);

	pFnLABtoRGB->FunctionFlags |= 0x400;

	return LABtoRGB_Parms.ReturnValue;
};

// Function Core.Object.RGBtoLAB
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            C                              (CPF_Parm)

struct FLinearColor UObject::RGBtoLAB(struct FLinearColor C)
{
	static UFunction* pFnRGBtoLAB = nullptr;

	if (!pFnRGBtoLAB)
	{
		pFnRGBtoLAB = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RGBTOLAB));
	}

	UObject_execRGBtoLAB_Parms RGBtoLAB_Parms;
	memcpy_s(&RGBtoLAB_Parms.C, 0x10, &C, 0x10);

	pFnRGBtoLAB->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRGBtoLAB, &RGBtoLAB_Parms, nullptr);

	pFnRGBtoLAB->FunctionFlags |= 0x400;

	return RGBtoLAB_Parms.ReturnValue;
};

// Function Core.Object.HSVtoRGB
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            C                              (CPF_Parm)

struct FLinearColor UObject::HSVtoRGB(struct FLinearColor C)
{
	static UFunction* pFnHSVtoRGB = nullptr;

	if (!pFnHSVtoRGB)
	{
		pFnHSVtoRGB = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_HSVTORGB));
	}

	UObject_execHSVtoRGB_Parms HSVtoRGB_Parms;
	memcpy_s(&HSVtoRGB_Parms.C, 0x10, &C, 0x10);

	pFnHSVtoRGB->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHSVtoRGB, &HSVtoRGB_Parms, nullptr);

	pFnHSVtoRGB->FunctionFlags |= 0x400;

	return HSVtoRGB_Parms.ReturnValue;
};

// Function Core.Object.RGBtoHSV
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            C                              (CPF_Parm)

struct FLinearColor UObject::RGBtoHSV(struct FLinearColor C)
{
	static UFunction* pFnRGBtoHSV = nullptr;

	if (!pFnRGBtoHSV)
	{
		pFnRGBtoHSV = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RGBTOHSV));
	}

	UObject_execRGBtoHSV_Parms RGBtoHSV_Parms;
	memcpy_s(&RGBtoHSV_Parms.C, 0x10, &C, 0x10);

	pFnRGBtoHSV->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRGBtoHSV, &RGBtoHSV_Parms, nullptr);

	pFnRGBtoHSV->FunctionFlags |= 0x400;

	return RGBtoHSV_Parms.ReturnValue;
};

// Function Core.Object.IntToLinearColor
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            I                              (CPF_Parm)

struct FLinearColor UObject::IntToLinearColor(int I)
{
	static UFunction* pFnIntToLinearColor = nullptr;

	if (!pFnIntToLinearColor)
	{
		pFnIntToLinearColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INTTOLINEARCOLOR));
	}

	UObject_execIntToLinearColor_Parms IntToLinearColor_Parms;
	memcpy_s(&IntToLinearColor_Parms.I, 0x4, &I, 0x4);

	this->ProcessEvent(pFnIntToLinearColor, &IntToLinearColor_Parms, nullptr);

	return IntToLinearColor_Parms.ReturnValue;
};

// Function Core.Object.IntToColor
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            I                              (CPF_Parm)

struct FColor UObject::IntToColor(int I)
{
	static UFunction* pFnIntToColor = nullptr;

	if (!pFnIntToColor)
	{
		pFnIntToColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INTTOCOLOR));
	}

	UObject_execIntToColor_Parms IntToColor_Parms;
	memcpy_s(&IntToColor_Parms.I, 0x4, &I, 0x4);

	pFnIntToColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIntToColor, &IntToColor_Parms, nullptr);

	pFnIntToColor->FunctionFlags |= 0x400;

	return IntToColor_Parms.ReturnValue;
};

// Function Core.Object.LinearColorToInt
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            C                              (CPF_Parm)

int UObject::LinearColorToInt(struct FLinearColor C)
{
	static UFunction* pFnLinearColorToInt = nullptr;

	if (!pFnLinearColorToInt)
	{
		pFnLinearColorToInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LINEARCOLORTOINT));
	}

	UObject_execLinearColorToInt_Parms LinearColorToInt_Parms;
	memcpy_s(&LinearColorToInt_Parms.C, 0x10, &C, 0x10);

	this->ProcessEvent(pFnLinearColorToInt, &LinearColorToInt_Parms, nullptr);

	return LinearColorToInt_Parms.ReturnValue;
};

// Function Core.Object.ColorToInt
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  C                              (CPF_Parm)

int UObject::ColorToInt(struct FColor C)
{
	static UFunction* pFnColorToInt = nullptr;

	if (!pFnColorToInt)
	{
		pFnColorToInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_COLORTOINT));
	}

	UObject_execColorToInt_Parms ColorToInt_Parms;
	memcpy_s(&ColorToInt_Parms.C, 0x4, &C, 0x4);

	pFnColorToInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnColorToInt, &ColorToInt_Parms, nullptr);

	pFnColorToInt->FunctionFlags |= 0x400;

	return ColorToInt_Parms.ReturnValue;
};

// Function Core.Object.SolveVelocityQuadratic
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Distance                       (CPF_Parm)
// float                          Speed                          (CPF_Parm)
// float                          Accel                          (CPF_Parm)
// float                          Time                           (CPF_Parm | CPF_OutParm)

bool UObject::SolveVelocityQuadratic(float Distance, float Speed, float Accel, float& Time)
{
	static UFunction* pFnSolveVelocityQuadratic = nullptr;

	if (!pFnSolveVelocityQuadratic)
	{
		pFnSolveVelocityQuadratic = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SOLVEVELOCITYQUADRATIC));
	}

	UObject_execSolveVelocityQuadratic_Parms SolveVelocityQuadratic_Parms;
	memcpy_s(&SolveVelocityQuadratic_Parms.Distance, 0x4, &Distance, 0x4);
	memcpy_s(&SolveVelocityQuadratic_Parms.Speed, 0x4, &Speed, 0x4);
	memcpy_s(&SolveVelocityQuadratic_Parms.Accel, 0x4, &Accel, 0x4);

	pFnSolveVelocityQuadratic->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSolveVelocityQuadratic, &SolveVelocityQuadratic_Parms, nullptr);

	pFnSolveVelocityQuadratic->FunctionFlags |= 0x400;
	memcpy_s(&SolveVelocityQuadratic_Parms.Time, 0x4, &Time, 0x4);

	return SolveVelocityQuadratic_Parms.ReturnValue;
};

// Function Core.Object.Sign
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)

float UObject::Sign(float X)
{
	static UFunction* pFnSign = nullptr;

	if (!pFnSign)
	{
		pFnSign = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SIGN));
	}

	UObject_execSign_Parms Sign_Parms;
	memcpy_s(&Sign_Parms.X, 0x4, &X, 0x4);

	pFnSign->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSign, &Sign_Parms, nullptr);

	pFnSign->FunctionFlags |= 0x400;

	return Sign_Parms.ReturnValue;
};

// Function Core.Object.MakeVector2D
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

struct FVector2D UObject::MakeVector2D(float X, float Y)
{
	static UFunction* pFnMakeVector2D = nullptr;

	if (!pFnMakeVector2D)
	{
		pFnMakeVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKEVECTOR2D));
	}

	UObject_execMakeVector2D_Parms MakeVector2D_Parms;
	memcpy_s(&MakeVector2D_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&MakeVector2D_Parms.Y, 0x4, &Y, 0x4);

	this->ProcessEvent(pFnMakeVector2D, &MakeVector2D_Parms, nullptr);

	return MakeVector2D_Parms.ReturnValue;
};

// Function Core.Object.VAbs
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 V                              (CPF_Parm)

struct FVector UObject::VAbs(struct FVector V)
{
	static UFunction* pFnVAbs = nullptr;

	if (!pFnVAbs)
	{
		pFnVAbs = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VABS));
	}

	UObject_execVAbs_Parms VAbs_Parms;
	memcpy_s(&VAbs_Parms.V, 0xC, &V, 0xC);

	this->ProcessEvent(pFnVAbs, &VAbs_Parms, nullptr);

	return VAbs_Parms.ReturnValue;
};

// Function Core.Object.MakeVector
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// float                          Z                              (CPF_Parm)

struct FVector UObject::MakeVector(float X, float Y, float Z)
{
	static UFunction* pFnMakeVector = nullptr;

	if (!pFnMakeVector)
	{
		pFnMakeVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKEVECTOR));
	}

	UObject_execMakeVector_Parms MakeVector_Parms;
	memcpy_s(&MakeVector_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&MakeVector_Parms.Y, 0x4, &Y, 0x4);
	memcpy_s(&MakeVector_Parms.Z, 0x4, &Z, 0x4);

	this->ProcessEvent(pFnMakeVector, &MakeVector_Parms, nullptr);

	return MakeVector_Parms.ReturnValue;
};

// Function Core.Object.FlattenVector
// [0x00020103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 NormalToFlatten                (CPF_Parm)
// struct FVector                 PlaneNormal                    (CPF_Parm)

struct FVector UObject::FlattenVector(struct FVector NormalToFlatten, struct FVector PlaneNormal)
{
	static UFunction* pFnFlattenVector = nullptr;

	if (!pFnFlattenVector)
	{
		pFnFlattenVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FLATTENVECTOR));
	}

	UObject_execFlattenVector_Parms FlattenVector_Parms;
	memcpy_s(&FlattenVector_Parms.NormalToFlatten, 0xC, &NormalToFlatten, 0xC);
	memcpy_s(&FlattenVector_Parms.PlaneNormal, 0xC, &PlaneNormal, 0xC);

	this->ProcessEvent(pFnFlattenVector, &FlattenVector_Parms, nullptr);

	return FlattenVector_Parms.ReturnValue;
};

// Function Core.Object.GetRealArchetypeName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetRealArchetypeName()
{
	static UFunction* pFnGetRealArchetypeName = nullptr;

	if (!pFnGetRealArchetypeName)
	{
		pFnGetRealArchetypeName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETREALARCHETYPENAME));
	}

	UObject_execGetRealArchetypeName_Parms GetRealArchetypeName_Parms;

	pFnGetRealArchetypeName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetRealArchetypeName, &GetRealArchetypeName_Parms, nullptr);

	pFnGetRealArchetypeName->FunctionFlags |= 0x400;

	return GetRealArchetypeName_Parms.ReturnValue;
};

// Function Core.Object.FormatTime
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            Seconds                        (CPF_Parm)

struct FString UObject::FormatTime(int Seconds)
{
	static UFunction* pFnFormatTime = nullptr;

	if (!pFnFormatTime)
	{
		pFnFormatTime = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FORMATTIME));
	}

	UObject_execFormatTime_Parms FormatTime_Parms;
	memcpy_s(&FormatTime_Parms.Seconds, 0x4, &Seconds, 0x4);

	this->ProcessEvent(pFnFormatTime, &FormatTime_Parms, nullptr);

	return FormatTime_Parms.ReturnValue;
};

// Function Core.Object.GetTextArchetype
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ArchetypeClass                 (CPF_Parm)
// struct FString                 Path                           (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

class UObject* UObject::GetTextArchetype(class UClass* ArchetypeClass, struct FString Path)
{
	static UFunction* pFnGetTextArchetype = nullptr;

	if (!pFnGetTextArchetype)
	{
		pFnGetTextArchetype = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETTEXTARCHETYPE));
	}

	UObject_execGetTextArchetype_Parms GetTextArchetype_Parms;
	memcpy_s(&GetTextArchetype_Parms.ArchetypeClass, 0x8, &ArchetypeClass, 0x8);
	memcpy_s(&GetTextArchetype_Parms.Path, 0x10, &Path, 0x10);

	pFnGetTextArchetype->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTextArchetype, &GetTextArchetype_Parms, nullptr);

	pFnGetTextArchetype->FunctionFlags |= 0x400;

	return GetTextArchetype_Parms.ReturnValue;
};

// Function Core.Object.IsArchetype
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsArchetype()
{
	static UFunction* pFnIsArchetype = nullptr;

	if (!pFnIsArchetype)
	{
		pFnIsArchetype = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISARCHETYPE));
	}

	UObject_execIsArchetype_Parms IsArchetype_Parms;

	pFnIsArchetype->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsArchetype, &IsArchetype_Parms, nullptr);

	pFnIsArchetype->FunctionFlags |= 0x400;

	return IsArchetype_Parms.ReturnValue;
};

// Function Core.Object.UnsubscribeFromAllEvents
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::UnsubscribeFromAllEvents()
{
	static UFunction* pFnUnsubscribeFromAllEvents = nullptr;

	if (!pFnUnsubscribeFromAllEvents)
	{
		pFnUnsubscribeFromAllEvents = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_UNSUBSCRIBEFROMALLEVENTS));
	}

	UObject_execUnsubscribeFromAllEvents_Parms UnsubscribeFromAllEvents_Parms;

	pFnUnsubscribeFromAllEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnsubscribeFromAllEvents, &UnsubscribeFromAllEvents_Parms, nullptr);

	pFnUnsubscribeFromAllEvents->FunctionFlags |= 0x400;
};

// Function Core.Object.NewInstance
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UObject*                 ObjOuter                       (CPF_OptionalParm | CPF_Parm)
// struct FName                   ObjName                        (CPF_OptionalParm | CPF_Parm)

class UObject* UObject::NewInstance(class UObject* ObjOuter, struct FName ObjName)
{
	static UFunction* pFnNewInstance = nullptr;

	if (!pFnNewInstance)
	{
		pFnNewInstance = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NEWINSTANCE));
	}

	UObject_execNewInstance_Parms NewInstance_Parms;
	memcpy_s(&NewInstance_Parms.ObjOuter, 0x8, &ObjOuter, 0x8);
	memcpy_s(&NewInstance_Parms.ObjName, 0x8, &ObjName, 0x8);

	pFnNewInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNewInstance, &NewInstance_Parms, nullptr);

	pFnNewInstance->FunctionFlags |= 0x400;

	return NewInstance_Parms.ReturnValue;
};

// Function Core.Object.PrintDebugInfo
// [0x00020100] (FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UObject::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* pFnPrintDebugInfo = nullptr;

	if (!pFnPrintDebugInfo)
	{
		pFnPrintDebugInfo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PRINTDEBUGINFO));
	}

	UObject_execPrintDebugInfo_Parms PrintDebugInfo_Parms;
	memcpy_s(&PrintDebugInfo_Parms.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(pFnPrintDebugInfo, &PrintDebugInfo_Parms, nullptr);
};

// Function Core.Object.RotatorFromInt
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            RotationPitchAndYaw            (CPF_Parm)

struct FRotator UObject::RotatorFromInt(int RotationPitchAndYaw)
{
	static UFunction* pFnRotatorFromInt = nullptr;

	if (!pFnRotatorFromInt)
	{
		pFnRotatorFromInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ROTATORFROMINT));
	}

	UObject_execRotatorFromInt_Parms RotatorFromInt_Parms;
	memcpy_s(&RotatorFromInt_Parms.RotationPitchAndYaw, 0x4, &RotationPitchAndYaw, 0x4);

	this->ProcessEvent(pFnRotatorFromInt, &RotatorFromInt_Parms, nullptr);

	return RotatorFromInt_Parms.ReturnValue;
};

// Function Core.Object.RotatorToInt
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rotation                       (CPF_Parm)

int UObject::RotatorToInt(struct FRotator Rotation)
{
	static UFunction* pFnRotatorToInt = nullptr;

	if (!pFnRotatorToInt)
	{
		pFnRotatorToInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ROTATORTOINT));
	}

	UObject_execRotatorToInt_Parms RotatorToInt_Parms;
	memcpy_s(&RotatorToInt_Parms.Rotation, 0xC, &Rotation, 0xC);

	this->ProcessEvent(pFnRotatorToInt, &RotatorToInt_Parms, nullptr);

	return RotatorToInt_Parms.ReturnValue;
};

// Function Core.Object.GetLanguage
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UObject::GetLanguage()
{
	static UFunction* pFnGetLanguage = nullptr;

	if (!pFnGetLanguage)
	{
		pFnGetLanguage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETLANGUAGE));
	}

	UObject_execGetLanguage_Parms GetLanguage_Parms;

	pFnGetLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLanguage, &GetLanguage_Parms, nullptr);

	pFnGetLanguage->FunctionFlags |= 0x400;

	return GetLanguage_Parms.ReturnValue;
};

// Function Core.Object.GetRandomOptionSumFrequency
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<float>                  FreqList                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int UObject::GetRandomOptionSumFrequency(TArray<float>& FreqList)
{
	static UFunction* pFnGetRandomOptionSumFrequency = nullptr;

	if (!pFnGetRandomOptionSumFrequency)
	{
		pFnGetRandomOptionSumFrequency = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETRANDOMOPTIONSUMFREQUENCY));
	}

	UObject_execGetRandomOptionSumFrequency_Parms GetRandomOptionSumFrequency_Parms;

	this->ProcessEvent(pFnGetRandomOptionSumFrequency, &GetRandomOptionSumFrequency_Parms, nullptr);
	memcpy_s(&GetRandomOptionSumFrequency_Parms.FreqList, 0x10, &FreqList, 0x10);

	return GetRandomOptionSumFrequency_Parms.ReturnValue;
};

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UObject::GetBuildChangelistNumber()
{
	static UFunction* pFnGetBuildChangelistNumber = nullptr;

	if (!pFnGetBuildChangelistNumber)
	{
		pFnGetBuildChangelistNumber = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETBUILDCHANGELISTNUMBER));
	}

	UObject_execGetBuildChangelistNumber_Parms GetBuildChangelistNumber_Parms;

	pFnGetBuildChangelistNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetBuildChangelistNumber, &GetBuildChangelistNumber_Parms, nullptr);

	pFnGetBuildChangelistNumber->FunctionFlags |= 0x400;

	return GetBuildChangelistNumber_Parms.ReturnValue;
};

// Function Core.Object.GetEngineVersion
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int UObject::GetEngineVersion()
{
	static UFunction* pFnGetEngineVersion = nullptr;

	if (!pFnGetEngineVersion)
	{
		pFnGetEngineVersion = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETENGINEVERSION));
	}

	UObject_execGetEngineVersion_Parms GetEngineVersion_Parms;

	pFnGetEngineVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetEngineVersion, &GetEngineVersion_Parms, nullptr);

	pFnGetEngineVersion->FunctionFlags |= 0x400;

	return GetEngineVersion_Parms.ReturnValue;
};

// Function Core.Object.GetAppSeconds
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UObject::GetAppSeconds()
{
	static UFunction* pFnGetAppSeconds = nullptr;

	if (!pFnGetAppSeconds)
	{
		pFnGetAppSeconds = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETAPPSECONDS));
	}

	UObject_execGetAppSeconds_Parms GetAppSeconds_Parms;

	pFnGetAppSeconds->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAppSeconds, &GetAppSeconds_Parms, nullptr);

	pFnGetAppSeconds->FunctionFlags |= 0x400;

	return GetAppSeconds_Parms.ReturnValue;
};

// Function Core.Object.GetSystemTime
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            Year                           (CPF_Parm | CPF_OutParm)
// int                            Month                          (CPF_Parm | CPF_OutParm)
// int                            DayOfWeek                      (CPF_Parm | CPF_OutParm)
// int                            Day                            (CPF_Parm | CPF_OutParm)
// int                            Hour                           (CPF_Parm | CPF_OutParm)
// int                            Min                            (CPF_Parm | CPF_OutParm)
// int                            Sec                            (CPF_Parm | CPF_OutParm)
// int                            MSec                           (CPF_Parm | CPF_OutParm)

void UObject::GetSystemTime(int& Year, int& Month, int& DayOfWeek, int& Day, int& Hour, int& Min, int& Sec, int& MSec)
{
	static UFunction* pFnGetSystemTime = nullptr;

	if (!pFnGetSystemTime)
	{
		pFnGetSystemTime = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSYSTEMTIME));
	}

	UObject_execGetSystemTime_Parms GetSystemTime_Parms;

	pFnGetSystemTime->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSystemTime, &GetSystemTime_Parms, nullptr);

	pFnGetSystemTime->FunctionFlags |= 0x400;
	memcpy_s(&GetSystemTime_Parms.Year, 0x4, &Year, 0x4);
	memcpy_s(&GetSystemTime_Parms.Month, 0x4, &Month, 0x4);
	memcpy_s(&GetSystemTime_Parms.DayOfWeek, 0x4, &DayOfWeek, 0x4);
	memcpy_s(&GetSystemTime_Parms.Day, 0x4, &Day, 0x4);
	memcpy_s(&GetSystemTime_Parms.Hour, 0x4, &Hour, 0x4);
	memcpy_s(&GetSystemTime_Parms.Min, 0x4, &Min, 0x4);
	memcpy_s(&GetSystemTime_Parms.Sec, 0x4, &Sec, 0x4);
	memcpy_s(&GetSystemTime_Parms.MSec, 0x4, &MSec, 0x4);
};

// Function Core.Object.TimeStamp
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UObject::TimeStamp()
{
	static UFunction* pFnTimeStamp = nullptr;

	if (!pFnTimeStamp)
	{
		pFnTimeStamp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TIMESTAMP));
	}

	UObject_execTimeStamp_Parms TimeStamp_Parms;

	pFnTimeStamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTimeStamp, &TimeStamp_Parms, nullptr);

	pFnTimeStamp->FunctionFlags |= 0x400;

	return TimeStamp_Parms.ReturnValue;
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                SourceRotation                 (CPF_Parm)
// struct FVector                 SourceVector                   (CPF_Parm)
// unsigned long                  bInverse                       (CPF_OptionalParm | CPF_Parm)

struct FVector UObject::TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse)
{
	static UFunction* pFnTransformVectorByRotation = nullptr;

	if (!pFnTransformVectorByRotation)
	{
		pFnTransformVectorByRotation = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TRANSFORMVECTORBYROTATION));
	}

	UObject_execTransformVectorByRotation_Parms TransformVectorByRotation_Parms;
	memcpy_s(&TransformVectorByRotation_Parms.SourceRotation, 0xC, &SourceRotation, 0xC);
	memcpy_s(&TransformVectorByRotation_Parms.SourceVector, 0xC, &SourceVector, 0xC);
	TransformVectorByRotation_Parms.bInverse = bInverse;

	pFnTransformVectorByRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTransformVectorByRotation, &TransformVectorByRotation_Parms, nullptr);

	pFnTransformVectorByRotation->FunctionFlags |= 0x400;

	return TransformVectorByRotation_Parms.ReturnValue;
};

// Function Core.Object.GetPackageName
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetPackageName()
{
	static UFunction* pFnGetPackageName = nullptr;

	if (!pFnGetPackageName)
	{
		pFnGetPackageName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETPACKAGENAME));
	}

	UObject_execGetPackageName_Parms GetPackageName_Parms;

	this->ProcessEvent(pFnGetPackageName, &GetPackageName_Parms, nullptr);

	return GetPackageName_Parms.ReturnValue;
};

// Function Core.Object.IsPendingKill
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsPendingKill()
{
	static UFunction* pFnIsPendingKill = nullptr;

	if (!pFnIsPendingKill)
	{
		pFnIsPendingKill = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISPENDINGKILL));
	}

	UObject_execIsPendingKill_Parms IsPendingKill_Parms;

	pFnIsPendingKill->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPendingKill, &IsPendingKill_Parms, nullptr);

	pFnIsPendingKill->FunctionFlags |= 0x400;

	return IsPendingKill_Parms.ReturnValue;
};

// Function Core.Object.RangeByteToFloatUnsigned
// [0x00020501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  inputByte                      (CPF_Parm)

float UObject::RangeByteToFloatUnsigned(unsigned char inputByte)
{
	static UFunction* pFnRangeByteToFloatUnsigned = nullptr;

	if (!pFnRangeByteToFloatUnsigned)
	{
		pFnRangeByteToFloatUnsigned = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RANGEBYTETOFLOATUNSIGNED));
	}

	UObject_execRangeByteToFloatUnsigned_Parms RangeByteToFloatUnsigned_Parms;
	RangeByteToFloatUnsigned_Parms.inputByte = inputByte;

	pFnRangeByteToFloatUnsigned->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRangeByteToFloatUnsigned, &RangeByteToFloatUnsigned_Parms, nullptr);

	pFnRangeByteToFloatUnsigned->FunctionFlags |= 0x400;

	return RangeByteToFloatUnsigned_Parms.ReturnValue;
};

// Function Core.Object.RangeByteToFloatSigned
// [0x00020501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  inputByte                      (CPF_Parm)

float UObject::RangeByteToFloatSigned(unsigned char inputByte)
{
	static UFunction* pFnRangeByteToFloatSigned = nullptr;

	if (!pFnRangeByteToFloatSigned)
	{
		pFnRangeByteToFloatSigned = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RANGEBYTETOFLOATSIGNED));
	}

	UObject_execRangeByteToFloatSigned_Parms RangeByteToFloatSigned_Parms;
	RangeByteToFloatSigned_Parms.inputByte = inputByte;

	pFnRangeByteToFloatSigned->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRangeByteToFloatSigned, &RangeByteToFloatSigned_Parms, nullptr);

	pFnRangeByteToFloatSigned->FunctionFlags |= 0x400;

	return RangeByteToFloatSigned_Parms.ReturnValue;
};

// Function Core.Object.FloatToRangeByteUnsigned
// [0x00020501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inputFloat                     (CPF_Parm)

unsigned char UObject::FloatToRangeByteUnsigned(float inputFloat)
{
	static UFunction* pFnFloatToRangeByteUnsigned = nullptr;

	if (!pFnFloatToRangeByteUnsigned)
	{
		pFnFloatToRangeByteUnsigned = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FLOATTORANGEBYTEUNSIGNED));
	}

	UObject_execFloatToRangeByteUnsigned_Parms FloatToRangeByteUnsigned_Parms;
	memcpy_s(&FloatToRangeByteUnsigned_Parms.inputFloat, 0x4, &inputFloat, 0x4);

	pFnFloatToRangeByteUnsigned->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFloatToRangeByteUnsigned, &FloatToRangeByteUnsigned_Parms, nullptr);

	pFnFloatToRangeByteUnsigned->FunctionFlags |= 0x400;

	return FloatToRangeByteUnsigned_Parms.ReturnValue;
};

// Function Core.Object.FloatToRangeByteSigned
// [0x00020501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inputFloat                     (CPF_Parm)

unsigned char UObject::FloatToRangeByteSigned(float inputFloat)
{
	static UFunction* pFnFloatToRangeByteSigned = nullptr;

	if (!pFnFloatToRangeByteSigned)
	{
		pFnFloatToRangeByteSigned = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FLOATTORANGEBYTESIGNED));
	}

	UObject_execFloatToRangeByteSigned_Parms FloatToRangeByteSigned_Parms;
	memcpy_s(&FloatToRangeByteSigned_Parms.inputFloat, 0x4, &inputFloat, 0x4);

	pFnFloatToRangeByteSigned->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFloatToRangeByteSigned, &FloatToRangeByteSigned_Parms, nullptr);

	pFnFloatToRangeByteSigned->FunctionFlags |= 0x400;

	return FloatToRangeByteSigned_Parms.ReturnValue;
};

// Function Core.Object.UnwindHeading
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::UnwindHeading(float A)
{
	static UFunction* pFnUnwindHeading = nullptr;

	if (!pFnUnwindHeading)
	{
		pFnUnwindHeading = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_UNWINDHEADING));
	}

	UObject_execUnwindHeading_Parms UnwindHeading_Parms;
	memcpy_s(&UnwindHeading_Parms.A, 0x4, &A, 0x4);

	this->ProcessEvent(pFnUnwindHeading, &UnwindHeading_Parms, nullptr);

	return UnwindHeading_Parms.ReturnValue;
};

// Function Core.Object.FindDeltaAngle
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A1                             (CPF_Parm)
// float                          A2                             (CPF_Parm)

float UObject::FindDeltaAngle(float A1, float A2)
{
	static UFunction* pFnFindDeltaAngle = nullptr;

	if (!pFnFindDeltaAngle)
	{
		pFnFindDeltaAngle = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINDDELTAANGLE));
	}

	UObject_execFindDeltaAngle_Parms FindDeltaAngle_Parms;
	memcpy_s(&FindDeltaAngle_Parms.A1, 0x4, &A1, 0x4);
	memcpy_s(&FindDeltaAngle_Parms.A2, 0x4, &A2, 0x4);

	this->ProcessEvent(pFnFindDeltaAngle, &FindDeltaAngle_Parms, nullptr);

	return FindDeltaAngle_Parms.ReturnValue;
};

// Function Core.Object.GetHeadingAngle
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)

float UObject::GetHeadingAngle(struct FVector Dir)
{
	static UFunction* pFnGetHeadingAngle = nullptr;

	if (!pFnGetHeadingAngle)
	{
		pFnGetHeadingAngle = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETHEADINGANGLE));
	}

	UObject_execGetHeadingAngle_Parms GetHeadingAngle_Parms;
	memcpy_s(&GetHeadingAngle_Parms.Dir, 0xC, &Dir, 0xC);

	this->ProcessEvent(pFnGetHeadingAngle, &GetHeadingAngle_Parms, nullptr);

	return GetHeadingAngle_Parms.ReturnValue;
};

// Function Core.Object.GetAngularDegreesFromRadians
// [0x00422103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               OutFOV                         (CPF_Parm | CPF_OutParm)

void UObject::GetAngularDegreesFromRadians(struct FVector2D& OutFOV)
{
	static UFunction* pFnGetAngularDegreesFromRadians = nullptr;

	if (!pFnGetAngularDegreesFromRadians)
	{
		pFnGetAngularDegreesFromRadians = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETANGULARDEGREESFROMRADIANS));
	}

	UObject_execGetAngularDegreesFromRadians_Parms GetAngularDegreesFromRadians_Parms;

	this->ProcessEvent(pFnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Parms, nullptr);
	memcpy_s(&GetAngularDegreesFromRadians_Parms.OutFOV, 0x8, &OutFOV, 0x8);
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               DotDist                        (CPF_Parm)
// struct FVector2D               OutAngDist                     (CPF_Parm | CPF_OutParm)

void UObject::GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D& OutAngDist)
{
	static UFunction* pFnGetAngularFromDotDist = nullptr;

	if (!pFnGetAngularFromDotDist)
	{
		pFnGetAngularFromDotDist = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETANGULARFROMDOTDIST));
	}

	UObject_execGetAngularFromDotDist_Parms GetAngularFromDotDist_Parms;
	memcpy_s(&GetAngularFromDotDist_Parms.DotDist, 0x8, &DotDist, 0x8);

	pFnGetAngularFromDotDist->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAngularFromDotDist, &GetAngularFromDotDist_Parms, nullptr);

	pFnGetAngularFromDotDist->FunctionFlags |= 0x400;
	memcpy_s(&GetAngularFromDotDist_Parms.OutAngDist, 0x8, &OutAngDist, 0x8);
};

// Function Core.Object.GetAngularDistance
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// struct FVector2D               OutAngularDist                 (CPF_Parm | CPF_OutParm)

bool UObject::GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutAngularDist)
{
	static UFunction* pFnGetAngularDistance = nullptr;

	if (!pFnGetAngularDistance)
	{
		pFnGetAngularDistance = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETANGULARDISTANCE));
	}

	UObject_execGetAngularDistance_Parms GetAngularDistance_Parms;
	memcpy_s(&GetAngularDistance_Parms.Direction, 0xC, &Direction, 0xC);
	memcpy_s(&GetAngularDistance_Parms.AxisX, 0xC, &AxisX, 0xC);
	memcpy_s(&GetAngularDistance_Parms.AxisY, 0xC, &AxisY, 0xC);
	memcpy_s(&GetAngularDistance_Parms.AxisZ, 0xC, &AxisZ, 0xC);

	pFnGetAngularDistance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAngularDistance, &GetAngularDistance_Parms, nullptr);

	pFnGetAngularDistance->FunctionFlags |= 0x400;
	memcpy_s(&GetAngularDistance_Parms.OutAngularDist, 0x8, &OutAngularDist, 0x8);

	return GetAngularDistance_Parms.ReturnValue;
};

// Function Core.Object.GetDotDistance
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// struct FVector2D               OutDotDist                     (CPF_Parm | CPF_OutParm)

bool UObject::GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutDotDist)
{
	static UFunction* pFnGetDotDistance = nullptr;

	if (!pFnGetDotDistance)
	{
		pFnGetDotDistance = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETDOTDISTANCE));
	}

	UObject_execGetDotDistance_Parms GetDotDistance_Parms;
	memcpy_s(&GetDotDistance_Parms.Direction, 0xC, &Direction, 0xC);
	memcpy_s(&GetDotDistance_Parms.AxisX, 0xC, &AxisX, 0xC);
	memcpy_s(&GetDotDistance_Parms.AxisY, 0xC, &AxisY, 0xC);
	memcpy_s(&GetDotDistance_Parms.AxisZ, 0xC, &AxisZ, 0xC);

	pFnGetDotDistance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDotDistance, &GetDotDistance_Parms, nullptr);

	pFnGetDotDistance->FunctionFlags |= 0x400;
	memcpy_s(&GetDotDistance_Parms.OutDotDist, 0x8, &OutDotDist, 0x8);

	return GetDotDistance_Parms.ReturnValue;
};

// Function Core.Object.LinePlaneIntersection
// [0x00C24003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 LineStart                      (CPF_Parm)
// struct FVector                 LineEnd                        (CPF_Parm)
// struct FVector                 PlaneOrigin                    (CPF_Parm)
// struct FVector                 PlaneNormal                    (CPF_Parm)
// unsigned long                  bCheckLineSegment              (CPF_OptionalParm | CPF_Parm)
// struct FVector                 Out_Intersection               (CPF_Parm | CPF_OutParm)
// float                          Out_T                          (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

bool UObject::LinePlaneIntersection(struct FVector LineStart, struct FVector LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, unsigned long bCheckLineSegment, struct FVector& Out_Intersection, float& Out_T)
{
	static UFunction* pFnLinePlaneIntersection = nullptr;

	if (!pFnLinePlaneIntersection)
	{
		pFnLinePlaneIntersection = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LINEPLANEINTERSECTION));
	}

	UObject_execLinePlaneIntersection_Parms LinePlaneIntersection_Parms;
	memcpy_s(&LinePlaneIntersection_Parms.LineStart, 0xC, &LineStart, 0xC);
	memcpy_s(&LinePlaneIntersection_Parms.LineEnd, 0xC, &LineEnd, 0xC);
	memcpy_s(&LinePlaneIntersection_Parms.PlaneOrigin, 0xC, &PlaneOrigin, 0xC);
	memcpy_s(&LinePlaneIntersection_Parms.PlaneNormal, 0xC, &PlaneNormal, 0xC);
	LinePlaneIntersection_Parms.bCheckLineSegment = bCheckLineSegment;

	this->ProcessEvent(pFnLinePlaneIntersection, &LinePlaneIntersection_Parms, nullptr);
	memcpy_s(&LinePlaneIntersection_Parms.Out_Intersection, 0xC, &Out_Intersection, 0xC);
	memcpy_s(&LinePlaneIntersection_Parms.Out_T, 0x4, &Out_T, 0x4);

	return LinePlaneIntersection_Parms.ReturnValue;
};

// Function Core.Object.PointProjectToPlane
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 C                              (CPF_Parm)

struct FVector UObject::PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C)
{
	static UFunction* pFnPointProjectToPlane = nullptr;

	if (!pFnPointProjectToPlane)
	{
		pFnPointProjectToPlane = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_POINTPROJECTTOPLANE));
	}

	UObject_execPointProjectToPlane_Parms PointProjectToPlane_Parms;
	memcpy_s(&PointProjectToPlane_Parms.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointProjectToPlane_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&PointProjectToPlane_Parms.B, 0xC, &B, 0xC);
	memcpy_s(&PointProjectToPlane_Parms.C, 0xC, &C, 0xC);

	pFnPointProjectToPlane->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPointProjectToPlane, &PointProjectToPlane_Parms, nullptr);

	pFnPointProjectToPlane->FunctionFlags |= 0x400;

	return PointProjectToPlane_Parms.ReturnValue;
};

// Function Core.Object.PointDistToPlane
// [0x00C24103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FRotator                Orientation                    (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 out_ClosestPoint               (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector& out_ClosestPoint)
{
	static UFunction* pFnPointDistToPlane = nullptr;

	if (!pFnPointDistToPlane)
	{
		pFnPointDistToPlane = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_POINTDISTTOPLANE));
	}

	UObject_execPointDistToPlane_Parms PointDistToPlane_Parms;
	memcpy_s(&PointDistToPlane_Parms.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointDistToPlane_Parms.Orientation, 0xC, &Orientation, 0xC);
	memcpy_s(&PointDistToPlane_Parms.Origin, 0xC, &Origin, 0xC);

	this->ProcessEvent(pFnPointDistToPlane, &PointDistToPlane_Parms, nullptr);
	memcpy_s(&PointDistToPlane_Parms.out_ClosestPoint, 0xC, &out_ClosestPoint, 0xC);

	return PointDistToPlane_Parms.ReturnValue;
};

// Function Core.Object.PointDistToSegment
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 StartPoint                     (CPF_Parm)
// struct FVector                 EndPoint                       (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector& OutClosestPoint)
{
	static UFunction* pFnPointDistToSegment = nullptr;

	if (!pFnPointDistToSegment)
	{
		pFnPointDistToSegment = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_POINTDISTTOSEGMENT));
	}

	UObject_execPointDistToSegment_Parms PointDistToSegment_Parms;
	memcpy_s(&PointDistToSegment_Parms.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointDistToSegment_Parms.StartPoint, 0xC, &StartPoint, 0xC);
	memcpy_s(&PointDistToSegment_Parms.EndPoint, 0xC, &EndPoint, 0xC);

	pFnPointDistToSegment->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPointDistToSegment, &PointDistToSegment_Parms, nullptr);

	pFnPointDistToSegment->FunctionFlags |= 0x400;
	memcpy_s(&PointDistToSegment_Parms.OutClosestPoint, 0xC, &OutClosestPoint, 0xC);

	return PointDistToSegment_Parms.ReturnValue;
};

// Function Core.Object.PointDistToLine
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 Line                           (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector& OutClosestPoint)
{
	static UFunction* pFnPointDistToLine = nullptr;

	if (!pFnPointDistToLine)
	{
		pFnPointDistToLine = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_POINTDISTTOLINE));
	}

	UObject_execPointDistToLine_Parms PointDistToLine_Parms;
	memcpy_s(&PointDistToLine_Parms.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointDistToLine_Parms.Line, 0xC, &Line, 0xC);
	memcpy_s(&PointDistToLine_Parms.Origin, 0xC, &Origin, 0xC);

	pFnPointDistToLine->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPointDistToLine, &PointDistToLine_Parms, nullptr);

	pFnPointDistToLine->FunctionFlags |= 0x400;
	memcpy_s(&PointDistToLine_Parms.OutClosestPoint, 0xC, &OutClosestPoint, 0xC);

	return PointDistToLine_Parms.ReturnValue;
};

// Function Core.Object.GetPerObjectConfigObjects
// [0x00426405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UClass*                  SearchClass                    (CPF_Parm)
// class UObject*                 ObjectOuter                    (CPF_OptionalParm | CPF_Parm)
// int                            MaxResults                     (CPF_OptionalParm | CPF_Parm)
// class UObject*                 OutObject                      (CPF_Parm | CPF_OutParm)

void UObject::GetPerObjectConfigObjects(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, class UObject*& OutObject)
{
	static UFunction* pFnGetPerObjectConfigObjects = nullptr;

	if (!pFnGetPerObjectConfigObjects)
	{
		pFnGetPerObjectConfigObjects = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETPEROBJECTCONFIGOBJECTS));
	}

	UObject_execGetPerObjectConfigObjects_Parms GetPerObjectConfigObjects_Parms;
	memcpy_s(&GetPerObjectConfigObjects_Parms.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&GetPerObjectConfigObjects_Parms.ObjectOuter, 0x8, &ObjectOuter, 0x8);
	memcpy_s(&GetPerObjectConfigObjects_Parms.MaxResults, 0x4, &MaxResults, 0x4);

	pFnGetPerObjectConfigObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPerObjectConfigObjects, &GetPerObjectConfigObjects_Parms, nullptr);

	pFnGetPerObjectConfigObjects->FunctionFlags |= 0x400;
	memcpy_s(&GetPerObjectConfigObjects_Parms.OutObject, 0x8, &OutObject, 0x8);
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  SearchClass                    (CPF_Parm)
// class UObject*                 ObjectOuter                    (CPF_OptionalParm | CPF_Parm)
// int                            MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FString>         out_SectionNames               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UObject::GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>& out_SectionNames)
{
	static UFunction* pFnGetPerObjectConfigSections = nullptr;

	if (!pFnGetPerObjectConfigSections)
	{
		pFnGetPerObjectConfigSections = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETPEROBJECTCONFIGSECTIONS));
	}

	UObject_execGetPerObjectConfigSections_Parms GetPerObjectConfigSections_Parms;
	memcpy_s(&GetPerObjectConfigSections_Parms.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&GetPerObjectConfigSections_Parms.ObjectOuter, 0x8, &ObjectOuter, 0x8);
	memcpy_s(&GetPerObjectConfigSections_Parms.MaxResults, 0x4, &MaxResults, 0x4);

	pFnGetPerObjectConfigSections->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPerObjectConfigSections, &GetPerObjectConfigSections_Parms, nullptr);

	pFnGetPerObjectConfigSections->FunctionFlags |= 0x400;
	memcpy_s(&GetPerObjectConfigSections_Parms.out_SectionNames, 0x10, &out_SectionNames, 0x10);

	return GetPerObjectConfigSections_Parms.ReturnValue;
};

// Function Core.Object.ImportJSON
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 PropertyName                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 JSON                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::ImportJSON(struct FString PropertyName, struct FString& JSON)
{
	static UFunction* pFnImportJSON = nullptr;

	if (!pFnImportJSON)
	{
		pFnImportJSON = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_IMPORTJSON));
	}

	UObject_execImportJSON_Parms ImportJSON_Parms;
	memcpy_s(&ImportJSON_Parms.PropertyName, 0x10, &PropertyName, 0x10);

	pFnImportJSON->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnImportJSON, &ImportJSON_Parms, nullptr);

	pFnImportJSON->FunctionFlags |= 0x400;
	memcpy_s(&ImportJSON_Parms.JSON, 0x10, &JSON, 0x10);
};

// Function Core.Object.StaticSaveConfig
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::StaticSaveConfig()
{
	static UFunction* pFnStaticSaveConfig = nullptr;

	if (!pFnStaticSaveConfig)
	{
		pFnStaticSaveConfig = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_STATICSAVECONFIG));
	}

	UObject_execStaticSaveConfig_Parms StaticSaveConfig_Parms;

	pFnStaticSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStaticSaveConfig, &StaticSaveConfig_Parms, nullptr);

	pFnStaticSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.SaveConfig
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::SaveConfig()
{
	static UFunction* pFnSaveConfig = nullptr;

	if (!pFnSaveConfig)
	{
		pFnSaveConfig = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SAVECONFIG));
	}

	UObject_execSaveConfig_Parms SaveConfig_Parms;

	pFnSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSaveConfig, &SaveConfig_Parms, nullptr);

	pFnSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.LoadSeekFreeObject
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

class UObject* UObject::LoadSeekFreeObject(class UClass* ObjClass, struct FString Path)
{
	static UFunction* pFnLoadSeekFreeObject = nullptr;

	if (!pFnLoadSeekFreeObject)
	{
		pFnLoadSeekFreeObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LOADSEEKFREEOBJECT));
	}

	UObject_execLoadSeekFreeObject_Parms LoadSeekFreeObject_Parms;
	memcpy_s(&LoadSeekFreeObject_Parms.ObjClass, 0x8, &ObjClass, 0x8);
	memcpy_s(&LoadSeekFreeObject_Parms.Path, 0x10, &Path, 0x10);

	pFnLoadSeekFreeObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoadSeekFreeObject, &LoadSeekFreeObject_Parms, nullptr);

	pFnLoadSeekFreeObject->FunctionFlags |= 0x400;

	return LoadSeekFreeObject_Parms.ReturnValue;
};

// Function Core.Object.FindObject
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ObjectName                     (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)

class UObject* UObject::FindObject(struct FString ObjectName, class UClass* ObjectClass)
{
	static UFunction* pFnFindObject = nullptr;

	if (!pFnFindObject)
	{
		pFnFindObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINDOBJECT));
	}

	UObject_execFindObject_Parms FindObject_Parms;
	memcpy_s(&FindObject_Parms.ObjectName, 0x10, &ObjectName, 0x10);
	memcpy_s(&FindObject_Parms.ObjectClass, 0x8, &ObjectClass, 0x8);

	pFnFindObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindObject, &FindObject_Parms, nullptr);

	pFnFindObject->FunctionFlags |= 0x400;

	return FindObject_Parms.ReturnValue;
};

// Function Core.Object.DynamicLoadObject
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ObjectName                     (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)
// unsigned long                  MayFail                        (CPF_OptionalParm | CPF_Parm)

class UObject* UObject::DynamicLoadObject(struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail)
{
	static UFunction* pFnDynamicLoadObject = nullptr;

	if (!pFnDynamicLoadObject)
	{
		pFnDynamicLoadObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DYNAMICLOADOBJECT));
	}

	UObject_execDynamicLoadObject_Parms DynamicLoadObject_Parms;
	memcpy_s(&DynamicLoadObject_Parms.ObjectName, 0x10, &ObjectName, 0x10);
	memcpy_s(&DynamicLoadObject_Parms.ObjectClass, 0x8, &ObjectClass, 0x8);
	DynamicLoadObject_Parms.MayFail = MayFail;

	pFnDynamicLoadObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDynamicLoadObject, &DynamicLoadObject_Parms, nullptr);

	pFnDynamicLoadObject->FunctionFlags |= 0x400;

	return DynamicLoadObject_Parms.ReturnValue;
};

// Function Core.Object.EnumFromString
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 E                              (CPF_Parm)
// struct FName                   ValueName                      (CPF_Parm | CPF_CoerceParm)

int UObject::EnumFromString(class UObject* E, struct FName ValueName)
{
	static UFunction* pFnEnumFromString = nullptr;

	if (!pFnEnumFromString)
	{
		pFnEnumFromString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ENUMFROMSTRING));
	}

	UObject_execEnumFromString_Parms EnumFromString_Parms;
	memcpy_s(&EnumFromString_Parms.E, 0x8, &E, 0x8);
	memcpy_s(&EnumFromString_Parms.ValueName, 0x8, &ValueName, 0x8);

	pFnEnumFromString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnumFromString, &EnumFromString_Parms, nullptr);

	pFnEnumFromString->FunctionFlags |= 0x400;

	return EnumFromString_Parms.ReturnValue;
};

// Function Core.Object.GetEnum
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 E                              (CPF_Parm)
// int                            I                              (CPF_Parm | CPF_CoerceParm)

struct FName UObject::GetEnum(class UObject* E, int I)
{
	static UFunction* pFnGetEnum = nullptr;

	if (!pFnGetEnum)
	{
		pFnGetEnum = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETENUM));
	}

	UObject_execGetEnum_Parms GetEnum_Parms;
	memcpy_s(&GetEnum_Parms.E, 0x8, &E, 0x8);
	memcpy_s(&GetEnum_Parms.I, 0x4, &I, 0x4);

	pFnGetEnum->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetEnum, &GetEnum_Parms, nullptr);

	pFnGetEnum->FunctionFlags |= 0x400;

	return GetEnum_Parms.ReturnValue;
};

// Function Core.Object.Disable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Disable(struct FName ProbeFunc)
{
	static UFunction* pFnDisable = nullptr;

	if (!pFnDisable)
	{
		pFnDisable = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DISABLE));
	}

	UObject_execDisable_Parms Disable_Parms;
	memcpy_s(&Disable_Parms.ProbeFunc, 0x8, &ProbeFunc, 0x8);

	pFnDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDisable, &Disable_Parms, nullptr);

	pFnDisable->FunctionFlags |= 0x400;
};

// Function Core.Object.Enable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Enable(struct FName ProbeFunc)
{
	static UFunction* pFnEnable = nullptr;

	if (!pFnEnable)
	{
		pFnEnable = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ENABLE));
	}

	UObject_execEnable_Parms Enable_Parms;
	memcpy_s(&Enable_Parms.ProbeFunc, 0x8, &ProbeFunc, 0x8);

	pFnEnable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnable, &Enable_Parms, nullptr);

	pFnEnable->FunctionFlags |= 0x400;
};

// Function Core.Object.ContinuedState
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventContinuedState()
{
	static UFunction* pFnContinuedState = nullptr;

	if (!pFnContinuedState)
	{
		pFnContinuedState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CONTINUEDSTATE));
	}

	UObject_eventContinuedState_Parms ContinuedState_Parms;

	this->ProcessEvent(pFnContinuedState, &ContinuedState_Parms, nullptr);
};

// Function Core.Object.PausedState
// [0x00020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventPausedState()
{
	static UFunction* pFnPausedState = nullptr;

	if (!pFnPausedState)
	{
		pFnPausedState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PAUSEDSTATE));
	}

	UObject_eventPausedState_Parms PausedState_Parms;

	this->ProcessEvent(pFnPausedState, &PausedState_Parms, nullptr);
};

// Function Core.Object.PoppedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventPoppedState()
{
	static UFunction* pFnPoppedState = nullptr;

	if (!pFnPoppedState)
	{
		pFnPoppedState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_POPPEDSTATE));
	}

	UObject_eventPoppedState_Parms PoppedState_Parms;

	this->ProcessEvent(pFnPoppedState, &PoppedState_Parms, nullptr);
};

// Function Core.Object.PushedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventPushedState()
{
	static UFunction* pFnPushedState = nullptr;

	if (!pFnPushedState)
	{
		pFnPushedState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PUSHEDSTATE));
	}

	UObject_eventPushedState_Parms PushedState_Parms;

	this->ProcessEvent(pFnPushedState, &PushedState_Parms, nullptr);
};

// Function Core.Object.EndState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   NextStateName                  (CPF_Parm)

void UObject::eventEndState(struct FName NextStateName)
{
	static UFunction* pFnEndState = nullptr;

	if (!pFnEndState)
	{
		pFnEndState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ENDSTATE));
	}

	UObject_eventEndState_Parms EndState_Parms;
	memcpy_s(&EndState_Parms.NextStateName, 0x8, &NextStateName, 0x8);

	this->ProcessEvent(pFnEndState, &EndState_Parms, nullptr);
};

// Function Core.Object.BeginState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   PreviousStateName              (CPF_Parm)

void UObject::eventBeginState(struct FName PreviousStateName)
{
	static UFunction* pFnBeginState = nullptr;

	if (!pFnBeginState)
	{
		pFnBeginState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_BEGINSTATE));
	}

	UObject_eventBeginState_Parms BeginState_Parms;
	memcpy_s(&BeginState_Parms.PreviousStateName, 0x8, &PreviousStateName, 0x8);

	this->ProcessEvent(pFnBeginState, &BeginState_Parms, nullptr);
};

// Function Core.Object.DumpStateStack
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::DumpStateStack()
{
	static UFunction* pFnDumpStateStack = nullptr;

	if (!pFnDumpStateStack)
	{
		pFnDumpStateStack = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DUMPSTATESTACK));
	}

	UObject_execDumpStateStack_Parms DumpStateStack_Parms;

	pFnDumpStateStack->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDumpStateStack, &DumpStateStack_Parms, nullptr);

	pFnDumpStateStack->FunctionFlags |= 0x400;
};

// Function Core.Object.PopState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPopAll                        (CPF_OptionalParm | CPF_Parm)

void UObject::PopState(unsigned long bPopAll)
{
	static UFunction* pFnPopState = nullptr;

	if (!pFnPopState)
	{
		pFnPopState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_POPSTATE));
	}

	UObject_execPopState_Parms PopState_Parms;
	PopState_Parms.bPopAll = bPopAll;

	pFnPopState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPopState, &PopState_Parms, nullptr);

	pFnPopState->FunctionFlags |= 0x400;
};

// Function Core.Object.PushState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   NewState                       (CPF_Parm)
// struct FName                   NewLabel                       (CPF_OptionalParm | CPF_Parm)

void UObject::PushState(struct FName NewState, struct FName NewLabel)
{
	static UFunction* pFnPushState = nullptr;

	if (!pFnPushState)
	{
		pFnPushState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PUSHSTATE));
	}

	UObject_execPushState_Parms PushState_Parms;
	memcpy_s(&PushState_Parms.NewState, 0x8, &NewState, 0x8);
	memcpy_s(&PushState_Parms.NewLabel, 0x8, &NewLabel, 0x8);

	pFnPushState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPushState, &PushState_Parms, nullptr);

	pFnPushState->FunctionFlags |= 0x400;
};

// Function Core.Object.GetStateName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetStateName()
{
	static UFunction* pFnGetStateName = nullptr;

	if (!pFnGetStateName)
	{
		pFnGetStateName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSTATENAME));
	}

	UObject_execGetStateName_Parms GetStateName_Parms;

	pFnGetStateName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetStateName, &GetStateName_Parms, nullptr);

	pFnGetStateName->FunctionFlags |= 0x400;

	return GetStateName_Parms.ReturnValue;
};

// Function Core.Object.IsChildState
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestState                      (CPF_Parm)
// struct FName                   TestParentState                (CPF_Parm)

bool UObject::IsChildState(struct FName TestState, struct FName TestParentState)
{
	static UFunction* pFnIsChildState = nullptr;

	if (!pFnIsChildState)
	{
		pFnIsChildState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISCHILDSTATE));
	}

	UObject_execIsChildState_Parms IsChildState_Parms;
	memcpy_s(&IsChildState_Parms.TestState, 0x8, &TestState, 0x8);
	memcpy_s(&IsChildState_Parms.TestParentState, 0x8, &TestParentState, 0x8);

	pFnIsChildState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsChildState, &IsChildState_Parms, nullptr);

	pFnIsChildState->FunctionFlags |= 0x400;

	return IsChildState_Parms.ReturnValue;
};

// Function Core.Object.IsInState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestState                      (CPF_Parm)
// unsigned long                  bTestStateStack                (CPF_OptionalParm | CPF_Parm)

bool UObject::IsInState(struct FName TestState, unsigned long bTestStateStack)
{
	static UFunction* pFnIsInState = nullptr;

	if (!pFnIsInState)
	{
		pFnIsInState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISINSTATE));
	}

	UObject_execIsInState_Parms IsInState_Parms;
	memcpy_s(&IsInState_Parms.TestState, 0x8, &TestState, 0x8);
	IsInState_Parms.bTestStateStack = bTestStateStack;

	pFnIsInState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsInState, &IsInState_Parms, nullptr);

	pFnIsInState->FunctionFlags |= 0x400;

	return IsInState_Parms.ReturnValue;
};

// Function Core.Object.GotoState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   NewState                       (CPF_OptionalParm | CPF_Parm)
// struct FName                   Label                          (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bForceEvents                   (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bKeepStack                     (CPF_OptionalParm | CPF_Parm)

void UObject::GotoState(struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack)
{
	static UFunction* pFnGotoState = nullptr;

	if (!pFnGotoState)
	{
		pFnGotoState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GOTOSTATE));
	}

	UObject_execGotoState_Parms GotoState_Parms;
	memcpy_s(&GotoState_Parms.NewState, 0x8, &NewState, 0x8);
	memcpy_s(&GotoState_Parms.Label, 0x8, &Label, 0x8);
	GotoState_Parms.bForceEvents = bForceEvents;
	GotoState_Parms.bKeepStack = bKeepStack;

	pFnGotoState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGotoState, &GotoState_Parms, nullptr);

	pFnGotoState->FunctionFlags |= 0x400;
};

// Function Core.Object.IsUTracing
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsUTracing()
{
	static UFunction* pFnIsUTracing = nullptr;

	if (!pFnIsUTracing)
	{
		pFnIsUTracing = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISUTRACING));
	}

	UObject_execIsUTracing_Parms IsUTracing_Parms;

	pFnIsUTracing->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsUTracing, &IsUTracing_Parms, nullptr);

	pFnIsUTracing->FunctionFlags |= 0x400;

	return IsUTracing_Parms.ReturnValue;
};

// Function Core.Object.SetUTracing
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bShouldUTrace                  (CPF_Parm)

void UObject::SetUTracing(unsigned long bShouldUTrace)
{
	static UFunction* pFnSetUTracing = nullptr;

	if (!pFnSetUTracing)
	{
		pFnSetUTracing = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SETUTRACING));
	}

	UObject_execSetUTracing_Parms SetUTracing_Parms;
	SetUTracing_Parms.bShouldUTrace = bShouldUTrace;

	pFnSetUTracing->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetUTracing, &SetUTracing_Parms, nullptr);

	pFnSetUTracing->FunctionFlags |= 0x400;
};

// Function Core.Object.GetFuncName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetFuncName()
{
	static UFunction* pFnGetFuncName = nullptr;

	if (!pFnGetFuncName)
	{
		pFnGetFuncName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETFUNCNAME));
	}

	UObject_execGetFuncName_Parms GetFuncName_Parms;

	pFnGetFuncName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFuncName, &GetFuncName_Parms, nullptr);

	pFnGetFuncName->FunctionFlags |= 0x400;

	return GetFuncName_Parms.ReturnValue;
};

// Function Core.Object.DebugBreak
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            UserFlags                      (CPF_OptionalParm | CPF_Parm)
// unsigned char                  DebuggerType                   (CPF_OptionalParm | CPF_Parm)

void UObject::DebugBreak(int UserFlags, unsigned char DebuggerType)
{
	static UFunction* pFnDebugBreak = nullptr;

	if (!pFnDebugBreak)
	{
		pFnDebugBreak = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DEBUGBREAK));
	}

	UObject_execDebugBreak_Parms DebugBreak_Parms;
	memcpy_s(&DebugBreak_Parms.UserFlags, 0x4, &UserFlags, 0x4);
	DebugBreak_Parms.DebuggerType = DebuggerType;

	pFnDebugBreak->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDebugBreak, &DebugBreak_Parms, nullptr);

	pFnDebugBreak->FunctionFlags |= 0x400;
};

// Function Core.Object.GetScriptTrace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UObject::GetScriptTrace()
{
	static UFunction* pFnGetScriptTrace = nullptr;

	if (!pFnGetScriptTrace)
	{
		pFnGetScriptTrace = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETSCRIPTTRACE));
	}

	UObject_execGetScriptTrace_Parms GetScriptTrace_Parms;

	pFnGetScriptTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetScriptTrace, &GetScriptTrace_Parms, nullptr);

	pFnGetScriptTrace->FunctionFlags |= 0x400;

	return GetScriptTrace_Parms.ReturnValue;
};

// Function Core.Object.ScriptTrace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::ScriptTrace()
{
	static UFunction* pFnScriptTrace = nullptr;

	if (!pFnScriptTrace)
	{
		pFnScriptTrace = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SCRIPTTRACE));
	}

	UObject_execScriptTrace_Parms ScriptTrace_Parms;

	pFnScriptTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnScriptTrace, &ScriptTrace_Parms, nullptr);

	pFnScriptTrace->FunctionFlags |= 0x400;
};

// Function Core.Object.ParseLocalizedPropertyPath
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 PathName                       (CPF_Parm | CPF_NeedCtorLink)

struct FString UObject::ParseLocalizedPropertyPath(struct FString PathName)
{
	static UFunction* pFnParseLocalizedPropertyPath = nullptr;

	if (!pFnParseLocalizedPropertyPath)
	{
		pFnParseLocalizedPropertyPath = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PARSELOCALIZEDPROPERTYPATH));
	}

	UObject_execParseLocalizedPropertyPath_Parms ParseLocalizedPropertyPath_Parms;
	memcpy_s(&ParseLocalizedPropertyPath_Parms.PathName, 0x10, &PathName, 0x10);

	this->ProcessEvent(pFnParseLocalizedPropertyPath, &ParseLocalizedPropertyPath_Parms, nullptr);

	return ParseLocalizedPropertyPath_Parms.ReturnValue;
};

// Function Core.Object.Localize
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 SectionName                    (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 KeyName                        (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 PackageName                    (CPF_OptionalParm | CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bOptional                      (CPF_OptionalParm | CPF_Parm)

struct FString UObject::Localize(struct FString SectionName, struct FString KeyName, struct FString PackageName, unsigned long bOptional)
{
	static UFunction* pFnLocalize = nullptr;

	if (!pFnLocalize)
	{
		pFnLocalize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LOCALIZE));
	}

	UObject_execLocalize_Parms Localize_Parms;
	memcpy_s(&Localize_Parms.SectionName, 0x10, &SectionName, 0x10);
	memcpy_s(&Localize_Parms.KeyName, 0x10, &KeyName, 0x10);
	memcpy_s(&Localize_Parms.PackageName, 0x10, &PackageName, 0x10);
	Localize_Parms.bOptional = bOptional;

	pFnLocalize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLocalize, &Localize_Parms, nullptr);

	pFnLocalize->FunctionFlags |= 0x400;

	return Localize_Parms.ReturnValue;
};

// Function Core.Object.WarnInternal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UObject::WarnInternal(struct FString S)
{
	static UFunction* pFnWarnInternal = nullptr;

	if (!pFnWarnInternal)
	{
		pFnWarnInternal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_WARNINTERNAL));
	}

	UObject_execWarnInternal_Parms WarnInternal_Parms;
	memcpy_s(&WarnInternal_Parms.S, 0x10, &S, 0x10);

	pFnWarnInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWarnInternal, &WarnInternal_Parms, nullptr);

	pFnWarnInternal->FunctionFlags |= 0x400;
};

// Function Core.Object.LogInternal
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FName                   Tag                            (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bFileOnly                      (CPF_OptionalParm | CPF_Parm)

void UObject::LogInternal(struct FString S, struct FName Tag, unsigned long bFileOnly)
{
	static UFunction* pFnLogInternal = nullptr;

	if (!pFnLogInternal)
	{
		pFnLogInternal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LOGINTERNAL));
	}

	UObject_execLogInternal_Parms LogInternal_Parms;
	memcpy_s(&LogInternal_Parms.S, 0x10, &S, 0x10);
	memcpy_s(&LogInternal_Parms.Tag, 0x8, &Tag, 0x8);
	LogInternal_Parms.bFileOnly = bFileOnly;

	pFnLogInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogInternal, &LogInternal_Parms, nullptr);

	pFnLogInternal->FunctionFlags |= 0x400;
};

// Function Core.Object.LinearColorLerp
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            ColorA                         (CPF_Parm)
// struct FLinearColor            ColorB                         (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FLinearColor UObject::LinearColorLerp(struct FLinearColor ColorA, struct FLinearColor ColorB, float Alpha)
{
	static UFunction* pFnLinearColorLerp = nullptr;

	if (!pFnLinearColorLerp)
	{
		pFnLinearColorLerp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LINEARCOLORLERP));
	}

	UObject_execLinearColorLerp_Parms LinearColorLerp_Parms;
	memcpy_s(&LinearColorLerp_Parms.ColorA, 0x10, &ColorA, 0x10);
	memcpy_s(&LinearColorLerp_Parms.ColorB, 0x10, &ColorB, 0x10);
	memcpy_s(&LinearColorLerp_Parms.Alpha, 0x4, &Alpha, 0x4);

	this->ProcessEvent(pFnLinearColorLerp, &LinearColorLerp_Parms, nullptr);

	return LinearColorLerp_Parms.ReturnValue;
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            A                              (CPF_Parm)
// struct FLinearColor            B                              (CPF_Parm)

struct FLinearColor UObject::Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B)
{
	static UFunction* pFnSubtract_LinearColorLinearColor = nullptr;

	if (!pFnSubtract_LinearColorLinearColor)
	{
		pFnSubtract_LinearColorLinearColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_LINEARCOLORLINEARCOLOR));
	}

	UObject_execSubtract_LinearColorLinearColor_Parms Subtract_LinearColorLinearColor_Parms;
	memcpy_s(&Subtract_LinearColorLinearColor_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&Subtract_LinearColorLinearColor_Parms.B, 0x10, &B, 0x10);

	this->ProcessEvent(pFnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Parms, nullptr);

	return Subtract_LinearColorLinearColor_Parms.ReturnValue;
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            LC                             (CPF_Parm)
// float                          Mult                           (CPF_Parm)

struct FLinearColor UObject::Multiply_LinearColorFloat(struct FLinearColor LC, float Mult)
{
	static UFunction* pFnMultiply_LinearColorFloat = nullptr;

	if (!pFnMultiply_LinearColorFloat)
	{
		pFnMultiply_LinearColorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_LINEARCOLORFLOAT));
	}

	UObject_execMultiply_LinearColorFloat_Parms Multiply_LinearColorFloat_Parms;
	memcpy_s(&Multiply_LinearColorFloat_Parms.LC, 0x10, &LC, 0x10);
	memcpy_s(&Multiply_LinearColorFloat_Parms.Mult, 0x4, &Mult, 0x4);

	this->ProcessEvent(pFnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Parms, nullptr);

	return Multiply_LinearColorFloat_Parms.ReturnValue;
};

// Function Core.Object.ConvertFromSRGB
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            OldColor                       (CPF_Parm)

struct FLinearColor UObject::ConvertFromSRGB(struct FLinearColor OldColor)
{
	static UFunction* pFnConvertFromSRGB = nullptr;

	if (!pFnConvertFromSRGB)
	{
		pFnConvertFromSRGB = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CONVERTFROMSRGB));
	}

	UObject_execConvertFromSRGB_Parms ConvertFromSRGB_Parms;
	memcpy_s(&ConvertFromSRGB_Parms.OldColor, 0x10, &OldColor, 0x10);

	pFnConvertFromSRGB->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnConvertFromSRGB, &ConvertFromSRGB_Parms, nullptr);

	pFnConvertFromSRGB->FunctionFlags |= 0x400;

	return ConvertFromSRGB_Parms.ReturnValue;
};

// Function Core.Object.LinearColorToColor
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            OldColor                       (CPF_Parm)

struct FColor UObject::LinearColorToColor(struct FLinearColor OldColor)
{
	static UFunction* pFnLinearColorToColor = nullptr;

	if (!pFnLinearColorToColor)
	{
		pFnLinearColorToColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LINEARCOLORTOCOLOR));
	}

	UObject_execLinearColorToColor_Parms LinearColorToColor_Parms;
	memcpy_s(&LinearColorToColor_Parms.OldColor, 0x10, &OldColor, 0x10);

	this->ProcessEvent(pFnLinearColorToColor, &LinearColorToColor_Parms, nullptr);

	return LinearColorToColor_Parms.ReturnValue;
};

// Function Core.Object.ColorToLinearColor
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  OldColor                       (CPF_Parm)

struct FLinearColor UObject::ColorToLinearColor(struct FColor OldColor)
{
	static UFunction* pFnColorToLinearColor = nullptr;

	if (!pFnColorToLinearColor)
	{
		pFnColorToLinearColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_COLORTOLINEARCOLOR));
	}

	UObject_execColorToLinearColor_Parms ColorToLinearColor_Parms;
	memcpy_s(&ColorToLinearColor_Parms.OldColor, 0x4, &OldColor, 0x4);

	pFnColorToLinearColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnColorToLinearColor, &ColorToLinearColor_Parms, nullptr);

	pFnColorToLinearColor->FunctionFlags |= 0x400;

	return ColorToLinearColor_Parms.ReturnValue;
};

// Function Core.Object.MakeLinearColor
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          R                              (CPF_Parm)
// float                          G                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_OptionalParm | CPF_Parm)

struct FLinearColor UObject::MakeLinearColor(float R, float G, float B, float A)
{
	static UFunction* pFnMakeLinearColor = nullptr;

	if (!pFnMakeLinearColor)
	{
		pFnMakeLinearColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKELINEARCOLOR));
	}

	UObject_execMakeLinearColor_Parms MakeLinearColor_Parms;
	memcpy_s(&MakeLinearColor_Parms.R, 0x4, &R, 0x4);
	memcpy_s(&MakeLinearColor_Parms.G, 0x4, &G, 0x4);
	memcpy_s(&MakeLinearColor_Parms.B, 0x4, &B, 0x4);
	memcpy_s(&MakeLinearColor_Parms.A, 0x4, &A, 0x4);

	pFnMakeLinearColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMakeLinearColor, &MakeLinearColor_Parms, nullptr);

	pFnMakeLinearColor->FunctionFlags |= 0x400;

	return MakeLinearColor_Parms.ReturnValue;
};

// Function Core.Object.LerpColor
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FColor UObject::LerpColor(struct FColor A, struct FColor B, float Alpha)
{
	static UFunction* pFnLerpColor = nullptr;

	if (!pFnLerpColor)
	{
		pFnLerpColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LERPCOLOR));
	}

	UObject_execLerpColor_Parms LerpColor_Parms;
	memcpy_s(&LerpColor_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&LerpColor_Parms.B, 0x4, &B, 0x4);
	memcpy_s(&LerpColor_Parms.Alpha, 0x4, &Alpha, 0x4);

	pFnLerpColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLerpColor, &LerpColor_Parms, nullptr);

	pFnLerpColor->FunctionFlags |= 0x400;

	return LerpColor_Parms.ReturnValue;
};

// Function Core.Object.MakeColor
// [0x00826003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  R                              (CPF_Parm)
// unsigned char                  G                              (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  A                              (CPF_OptionalParm | CPF_Parm)

struct FColor UObject::MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static UFunction* pFnMakeColor = nullptr;

	if (!pFnMakeColor)
	{
		pFnMakeColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKECOLOR));
	}

	UObject_execMakeColor_Parms MakeColor_Parms;
	MakeColor_Parms.R = R;
	MakeColor_Parms.G = G;
	MakeColor_Parms.B = B;
	MakeColor_Parms.A = A;

	this->ProcessEvent(pFnMakeColor, &MakeColor_Parms, nullptr);

	return MakeColor_Parms.ReturnValue;
};

// Function Core.Object.Add_ColorColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Add_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* pFnAdd_ColorColor = nullptr;

	if (!pFnAdd_ColorColor)
	{
		pFnAdd_ColorColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_COLORCOLOR));
	}

	UObject_execAdd_ColorColor_Parms Add_ColorColor_Parms;
	memcpy_s(&Add_ColorColor_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Add_ColorColor_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnAdd_ColorColor, &Add_ColorColor_Parms, nullptr);

	return Add_ColorColor_Parms.ReturnValue;
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FColor UObject::Multiply_ColorFloat(struct FColor A, float B)
{
	static UFunction* pFnMultiply_ColorFloat = nullptr;

	if (!pFnMultiply_ColorFloat)
	{
		pFnMultiply_ColorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_COLORFLOAT));
	}

	UObject_execMultiply_ColorFloat_Parms Multiply_ColorFloat_Parms;
	memcpy_s(&Multiply_ColorFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_ColorFloat_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnMultiply_ColorFloat, &Multiply_ColorFloat_Parms, nullptr);

	return Multiply_ColorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Multiply_FloatColor(float A, struct FColor B)
{
	static UFunction* pFnMultiply_FloatColor = nullptr;

	if (!pFnMultiply_FloatColor)
	{
		pFnMultiply_FloatColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_FLOATCOLOR));
	}

	UObject_execMultiply_FloatColor_Parms Multiply_FloatColor_Parms;
	memcpy_s(&Multiply_FloatColor_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatColor_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnMultiply_FloatColor, &Multiply_FloatColor_Parms, nullptr);

	return Multiply_FloatColor_Parms.ReturnValue;
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Subtract_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* pFnSubtract_ColorColor = nullptr;

	if (!pFnSubtract_ColorColor)
	{
		pFnSubtract_ColorColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_COLORCOLOR));
	}

	UObject_execSubtract_ColorColor_Parms Subtract_ColorColor_Parms;
	memcpy_s(&Subtract_ColorColor_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Subtract_ColorColor_Parms.B, 0x4, &B, 0x4);

	this->ProcessEvent(pFnSubtract_ColorColor, &Subtract_ColorColor_Parms, nullptr);

	return Subtract_ColorColor_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InVal                          (CPF_Parm)
// struct FInterpCurveVector2D    Vector2DCurve                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FVector2D UObject::EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D& Vector2DCurve)
{
	static UFunction* pFnEvalInterpCurveVector2D = nullptr;

	if (!pFnEvalInterpCurveVector2D)
	{
		pFnEvalInterpCurveVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EVALINTERPCURVEVECTOR2D));
	}

	UObject_execEvalInterpCurveVector2D_Parms EvalInterpCurveVector2D_Parms;
	memcpy_s(&EvalInterpCurveVector2D_Parms.InVal, 0x4, &InVal, 0x4);

	pFnEvalInterpCurveVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEvalInterpCurveVector2D, &EvalInterpCurveVector2D_Parms, nullptr);

	pFnEvalInterpCurveVector2D->FunctionFlags |= 0x400;
	memcpy_s(&EvalInterpCurveVector2D_Parms.Vector2DCurve, 0x18, &Vector2DCurve, 0x18);

	return EvalInterpCurveVector2D_Parms.ReturnValue;
};

// Function Core.Object.AutoSetTangentsVector
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FInterpCurveVector      Curve                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::AutoSetTangentsVector(struct FInterpCurveVector& Curve)
{
	static UFunction* pFnAutoSetTangentsVector = nullptr;

	if (!pFnAutoSetTangentsVector)
	{
		pFnAutoSetTangentsVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_AUTOSETTANGENTSVECTOR));
	}

	UObject_execAutoSetTangentsVector_Parms AutoSetTangentsVector_Parms;

	pFnAutoSetTangentsVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAutoSetTangentsVector, &AutoSetTangentsVector_Parms, nullptr);

	pFnAutoSetTangentsVector->FunctionFlags |= 0x400;
	memcpy_s(&AutoSetTangentsVector_Parms.Curve, 0x18, &Curve, 0x18);
};

// Function Core.Object.EvalInterpCurveVector
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InVal                          (CPF_Parm)
// struct FInterpCurveVector      VectorCurve                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FVector UObject::EvalInterpCurveVector(float InVal, struct FInterpCurveVector& VectorCurve)
{
	static UFunction* pFnEvalInterpCurveVector = nullptr;

	if (!pFnEvalInterpCurveVector)
	{
		pFnEvalInterpCurveVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EVALINTERPCURVEVECTOR));
	}

	UObject_execEvalInterpCurveVector_Parms EvalInterpCurveVector_Parms;
	memcpy_s(&EvalInterpCurveVector_Parms.InVal, 0x4, &InVal, 0x4);

	pFnEvalInterpCurveVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEvalInterpCurveVector, &EvalInterpCurveVector_Parms, nullptr);

	pFnEvalInterpCurveVector->FunctionFlags |= 0x400;
	memcpy_s(&EvalInterpCurveVector_Parms.VectorCurve, 0x18, &VectorCurve, 0x18);

	return EvalInterpCurveVector_Parms.ReturnValue;
};

// Function Core.Object.AutoSetTangentsFloat
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FInterpCurveFloat       Curve                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::AutoSetTangentsFloat(struct FInterpCurveFloat& Curve)
{
	static UFunction* pFnAutoSetTangentsFloat = nullptr;

	if (!pFnAutoSetTangentsFloat)
	{
		pFnAutoSetTangentsFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_AUTOSETTANGENTSFLOAT));
	}

	UObject_execAutoSetTangentsFloat_Parms AutoSetTangentsFloat_Parms;

	pFnAutoSetTangentsFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAutoSetTangentsFloat, &AutoSetTangentsFloat_Parms, nullptr);

	pFnAutoSetTangentsFloat->FunctionFlags |= 0x400;
	memcpy_s(&AutoSetTangentsFloat_Parms.Curve, 0x18, &Curve, 0x18);
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InVal                          (CPF_Parm)
// struct FInterpCurveFloat       FloatCurve                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UObject::EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat& FloatCurve)
{
	static UFunction* pFnEvalInterpCurveFloat = nullptr;

	if (!pFnEvalInterpCurveFloat)
	{
		pFnEvalInterpCurveFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EVALINTERPCURVEFLOAT));
	}

	UObject_execEvalInterpCurveFloat_Parms EvalInterpCurveFloat_Parms;
	memcpy_s(&EvalInterpCurveFloat_Parms.InVal, 0x4, &InVal, 0x4);

	pFnEvalInterpCurveFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEvalInterpCurveFloat, &EvalInterpCurveFloat_Parms, nullptr);

	pFnEvalInterpCurveFloat->FunctionFlags |= 0x400;
	memcpy_s(&EvalInterpCurveFloat_Parms.FloatCurve, 0x18, &FloatCurve, 0x18);

	return EvalInterpCurveFloat_Parms.ReturnValue;
};

// Function Core.Object.vect2d
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InX                            (CPF_Parm)
// float                          InY                            (CPF_Parm)

struct FVector2D UObject::vect2d(float InX, float InY)
{
	static UFunction* pFnvect2d = nullptr;

	if (!pFnvect2d)
	{
		pFnvect2d = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VECT2D));
	}

	UObject_execvect2d_Parms vect2d_Parms;
	memcpy_s(&vect2d_Parms.InX, 0x4, &InX, 0x4);
	memcpy_s(&vect2d_Parms.InY, 0x4, &InY, 0x4);

	this->ProcessEvent(pFnvect2d, &vect2d_Parms, nullptr);

	return vect2d_Parms.ReturnValue;
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               InputRange                     (CPF_Parm)
// struct FVector2D               OutputRange                    (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value)
{
	static UFunction* pFnGetMappedRangeValue = nullptr;

	if (!pFnGetMappedRangeValue)
	{
		pFnGetMappedRangeValue = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETMAPPEDRANGEVALUE));
	}

	UObject_execGetMappedRangeValue_Parms GetMappedRangeValue_Parms;
	memcpy_s(&GetMappedRangeValue_Parms.InputRange, 0x8, &InputRange, 0x8);
	memcpy_s(&GetMappedRangeValue_Parms.OutputRange, 0x8, &OutputRange, 0x8);
	memcpy_s(&GetMappedRangeValue_Parms.Value, 0x4, &Value, 0x4);

	pFnGetMappedRangeValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetMappedRangeValue, &GetMappedRangeValue_Parms, nullptr);

	pFnGetMappedRangeValue->FunctionFlags |= 0x400;

	return GetMappedRangeValue_Parms.ReturnValue;
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               Range                          (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::GetRangePctByValue(struct FVector2D Range, float Value)
{
	static UFunction* pFnGetRangePctByValue = nullptr;

	if (!pFnGetRangePctByValue)
	{
		pFnGetRangePctByValue = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETRANGEPCTBYVALUE));
	}

	UObject_execGetRangePctByValue_Parms GetRangePctByValue_Parms;
	memcpy_s(&GetRangePctByValue_Parms.Range, 0x8, &Range, 0x8);
	memcpy_s(&GetRangePctByValue_Parms.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(pFnGetRangePctByValue, &GetRangePctByValue_Parms, nullptr);

	return GetRangePctByValue_Parms.ReturnValue;
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               Range                          (CPF_Parm)
// float                          Pct                            (CPF_Parm)

float UObject::GetRangeValueByPct(struct FVector2D Range, float Pct)
{
	static UFunction* pFnGetRangeValueByPct = nullptr;

	if (!pFnGetRangeValueByPct)
	{
		pFnGetRangeValueByPct = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETRANGEVALUEBYPCT));
	}

	UObject_execGetRangeValueByPct_Parms GetRangeValueByPct_Parms;
	memcpy_s(&GetRangeValueByPct_Parms.Range, 0x8, &Range, 0x8);
	memcpy_s(&GetRangeValueByPct_Parms.Pct, 0x4, &Pct, 0x4);

	this->ProcessEvent(pFnGetRangeValueByPct, &GetRangeValueByPct_Parms, nullptr);

	return GetRangeValueByPct_Parms.ReturnValue;
};

// Function Core.Object.V2DNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)

struct FVector2D UObject::V2DNormal(struct FVector2D A)
{
	static UFunction* pFnV2DNormal = nullptr;

	if (!pFnV2DNormal)
	{
		pFnV2DNormal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_V2DNORMAL));
	}

	UObject_execV2DNormal_Parms V2DNormal_Parms;
	memcpy_s(&V2DNormal_Parms.A, 0x8, &A, 0x8);

	pFnV2DNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnV2DNormal, &V2DNormal_Parms, nullptr);

	pFnV2DNormal->FunctionFlags |= 0x400;

	return V2DNormal_Parms.ReturnValue;
};

// Function Core.Object.V2DSizeSq
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)

float UObject::V2DSizeSq(struct FVector2D A)
{
	static UFunction* pFnV2DSizeSq = nullptr;

	if (!pFnV2DSizeSq)
	{
		pFnV2DSizeSq = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_V2DSIZESQ));
	}

	UObject_execV2DSizeSq_Parms V2DSizeSq_Parms;
	memcpy_s(&V2DSizeSq_Parms.A, 0x8, &A, 0x8);

	pFnV2DSizeSq->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnV2DSizeSq, &V2DSizeSq_Parms, nullptr);

	pFnV2DSizeSq->FunctionFlags |= 0x400;

	return V2DSizeSq_Parms.ReturnValue;
};

// Function Core.Object.V2DSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)

float UObject::V2DSize(struct FVector2D A)
{
	static UFunction* pFnV2DSize = nullptr;

	if (!pFnV2DSize)
	{
		pFnV2DSize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_V2DSIZE));
	}

	UObject_execV2DSize_Parms V2DSize_Parms;
	memcpy_s(&V2DSize_Parms.A, 0x8, &A, 0x8);

	pFnV2DSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnV2DSize, &V2DSize_Parms, nullptr);

	pFnV2DSize->FunctionFlags |= 0x400;

	return V2DSize_Parms.ReturnValue;
};

// Function Core.Object.Dot_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

float UObject::Dot_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* pFnDot_Vector2DVector2D = nullptr;

	if (!pFnDot_Vector2DVector2D)
	{
		pFnDot_Vector2DVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DOT_VECTOR2DVECTOR2D));
	}

	UObject_execDot_Vector2DVector2D_Parms Dot_Vector2DVector2D_Parms;
	memcpy_s(&Dot_Vector2DVector2D_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&Dot_Vector2DVector2D_Parms.B, 0x8, &B, 0x8);

	pFnDot_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDot_Vector2DVector2D, &Dot_Vector2DVector2D_Parms, nullptr);

	pFnDot_Vector2DVector2D->FunctionFlags |= 0x400;

	return Dot_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A)
{
	static UFunction* pFnSubtractEqual_Vector2DVector2D = nullptr;

	if (!pFnSubtractEqual_Vector2DVector2D)
	{
		pFnSubtractEqual_Vector2DVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_VECTOR2DVECTOR2D));
	}

	UObject_execSubtractEqual_Vector2DVector2D_Parms SubtractEqual_Vector2DVector2D_Parms;
	memcpy_s(&SubtractEqual_Vector2DVector2D_Parms.B, 0x8, &B, 0x8);

	pFnSubtractEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_Vector2DVector2D, &SubtractEqual_Vector2DVector2D_Parms, nullptr);

	pFnSubtractEqual_Vector2DVector2D->FunctionFlags |= 0x400;
	memcpy_s(&SubtractEqual_Vector2DVector2D_Parms.A, 0x8, &A, 0x8);

	return SubtractEqual_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_Vector2DVector2D
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A)
{
	static UFunction* pFnAddEqual_Vector2DVector2D = nullptr;

	if (!pFnAddEqual_Vector2DVector2D)
	{
		pFnAddEqual_Vector2DVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDEQUAL_VECTOR2DVECTOR2D));
	}

	UObject_execAddEqual_Vector2DVector2D_Parms AddEqual_Vector2DVector2D_Parms;
	memcpy_s(&AddEqual_Vector2DVector2D_Parms.B, 0x8, &B, 0x8);

	pFnAddEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_Vector2DVector2D, &AddEqual_Vector2DVector2D_Parms, nullptr);

	pFnAddEqual_Vector2DVector2D->FunctionFlags |= 0x400;
	memcpy_s(&AddEqual_Vector2DVector2D_Parms.A, 0x8, &A, 0x8);

	return AddEqual_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_Vector2DFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::DivideEqual_Vector2DFloat(float B, struct FVector2D& A)
{
	static UFunction* pFnDivideEqual_Vector2DFloat = nullptr;

	if (!pFnDivideEqual_Vector2DFloat)
	{
		pFnDivideEqual_Vector2DFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDEEQUAL_VECTOR2DFLOAT));
	}

	UObject_execDivideEqual_Vector2DFloat_Parms DivideEqual_Vector2DFloat_Parms;
	memcpy_s(&DivideEqual_Vector2DFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivideEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_Vector2DFloat, &DivideEqual_Vector2DFloat_Parms, nullptr);

	pFnDivideEqual_Vector2DFloat->FunctionFlags |= 0x400;
	memcpy_s(&DivideEqual_Vector2DFloat_Parms.A, 0x8, &A, 0x8);

	return DivideEqual_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::MultiplyEqual_Vector2DFloat(float B, struct FVector2D& A)
{
	static UFunction* pFnMultiplyEqual_Vector2DFloat = nullptr;

	if (!pFnMultiplyEqual_Vector2DFloat)
	{
		pFnMultiplyEqual_Vector2DFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_VECTOR2DFLOAT));
	}

	UObject_execMultiplyEqual_Vector2DFloat_Parms MultiplyEqual_Vector2DFloat_Parms;
	memcpy_s(&MultiplyEqual_Vector2DFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiplyEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_Vector2DFloat, &MultiplyEqual_Vector2DFloat_Parms, nullptr);

	pFnMultiplyEqual_Vector2DFloat->FunctionFlags |= 0x400;
	memcpy_s(&MultiplyEqual_Vector2DFloat_Parms.A, 0x8, &A, 0x8);

	return MultiplyEqual_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_Vector2DFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector2D UObject::Divide_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* pFnDivide_Vector2DFloat = nullptr;

	if (!pFnDivide_Vector2DFloat)
	{
		pFnDivide_Vector2DFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDE_VECTOR2DFLOAT));
	}

	UObject_execDivide_Vector2DFloat_Parms Divide_Vector2DFloat_Parms;
	memcpy_s(&Divide_Vector2DFloat_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&Divide_Vector2DFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivide_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_Vector2DFloat, &Divide_Vector2DFloat_Parms, nullptr);

	pFnDivide_Vector2DFloat->FunctionFlags |= 0x400;

	return Divide_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_Vector2DFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector2D UObject::Multiply_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* pFnMultiply_Vector2DFloat = nullptr;

	if (!pFnMultiply_Vector2DFloat)
	{
		pFnMultiply_Vector2DFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_VECTOR2DFLOAT));
	}

	UObject_execMultiply_Vector2DFloat_Parms Multiply_Vector2DFloat_Parms;
	memcpy_s(&Multiply_Vector2DFloat_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&Multiply_Vector2DFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiply_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_Vector2DFloat, &Multiply_Vector2DFloat_Parms, nullptr);

	pFnMultiply_Vector2DFloat->FunctionFlags |= 0x400;

	return Multiply_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

struct FVector2D UObject::Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* pFnSubtract_Vector2DVector2D = nullptr;

	if (!pFnSubtract_Vector2DVector2D)
	{
		pFnSubtract_Vector2DVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_VECTOR2DVECTOR2D));
	}

	UObject_execSubtract_Vector2DVector2D_Parms Subtract_Vector2DVector2D_Parms;
	memcpy_s(&Subtract_Vector2DVector2D_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&Subtract_Vector2DVector2D_Parms.B, 0x8, &B, 0x8);

	pFnSubtract_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_Vector2DVector2D, &Subtract_Vector2DVector2D_Parms, nullptr);

	pFnSubtract_Vector2DVector2D->FunctionFlags |= 0x400;

	return Subtract_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

struct FVector2D UObject::Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* pFnAdd_Vector2DVector2D = nullptr;

	if (!pFnAdd_Vector2DVector2D)
	{
		pFnAdd_Vector2DVector2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_VECTOR2DVECTOR2D));
	}

	UObject_execAdd_Vector2DVector2D_Parms Add_Vector2DVector2D_Parms;
	memcpy_s(&Add_Vector2DVector2D_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&Add_Vector2DVector2D_Parms.B, 0x8, &B, 0x8);

	pFnAdd_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_Vector2DVector2D, &Add_Vector2DVector2D_Parms, nullptr);

	pFnAdd_Vector2DVector2D->FunctionFlags |= 0x400;

	return Add_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.Subtract_QuatQuat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::Subtract_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnSubtract_QuatQuat = nullptr;

	if (!pFnSubtract_QuatQuat)
	{
		pFnSubtract_QuatQuat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_QUATQUAT));
	}

	UObject_execSubtract_QuatQuat_Parms Subtract_QuatQuat_Parms;
	memcpy_s(&Subtract_QuatQuat_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&Subtract_QuatQuat_Parms.B, 0x10, &B, 0x10);

	pFnSubtract_QuatQuat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_QuatQuat, &Subtract_QuatQuat_Parms, nullptr);

	pFnSubtract_QuatQuat->FunctionFlags |= 0x400;

	return Subtract_QuatQuat_Parms.ReturnValue;
};

// Function Core.Object.Add_QuatQuat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::Add_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnAdd_QuatQuat = nullptr;

	if (!pFnAdd_QuatQuat)
	{
		pFnAdd_QuatQuat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_QUATQUAT));
	}

	UObject_execAdd_QuatQuat_Parms Add_QuatQuat_Parms;
	memcpy_s(&Add_QuatQuat_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&Add_QuatQuat_Parms.B, 0x10, &B, 0x10);

	pFnAdd_QuatQuat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_QuatQuat, &Add_QuatQuat_Parms, nullptr);

	pFnAdd_QuatQuat->FunctionFlags |= 0x400;

	return Add_QuatQuat_Parms.ReturnValue;
};

// Function Core.Object.QuatSlerp
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// unsigned long                  bShortestPath                  (CPF_OptionalParm | CPF_Parm)

struct FQuat UObject::QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath)
{
	static UFunction* pFnQuatSlerp = nullptr;

	if (!pFnQuatSlerp)
	{
		pFnQuatSlerp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATSLERP));
	}

	UObject_execQuatSlerp_Parms QuatSlerp_Parms;
	memcpy_s(&QuatSlerp_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&QuatSlerp_Parms.B, 0x10, &B, 0x10);
	memcpy_s(&QuatSlerp_Parms.Alpha, 0x4, &Alpha, 0x4);
	QuatSlerp_Parms.bShortestPath = bShortestPath;

	pFnQuatSlerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatSlerp, &QuatSlerp_Parms, nullptr);

	pFnQuatSlerp->FunctionFlags |= 0x400;

	return QuatSlerp_Parms.ReturnValue;
};

// Function Core.Object.QuatToRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)

struct FRotator UObject::QuatToRotator(struct FQuat A)
{
	static UFunction* pFnQuatToRotator = nullptr;

	if (!pFnQuatToRotator)
	{
		pFnQuatToRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATTOROTATOR));
	}

	UObject_execQuatToRotator_Parms QuatToRotator_Parms;
	memcpy_s(&QuatToRotator_Parms.A, 0x10, &A, 0x10);

	pFnQuatToRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatToRotator, &QuatToRotator_Parms, nullptr);

	pFnQuatToRotator->FunctionFlags |= 0x400;

	return QuatToRotator_Parms.ReturnValue;
};

// Function Core.Object.QuatFromRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)

struct FQuat UObject::QuatFromRotator(struct FRotator A)
{
	static UFunction* pFnQuatFromRotator = nullptr;

	if (!pFnQuatFromRotator)
	{
		pFnQuatFromRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATFROMROTATOR));
	}

	UObject_execQuatFromRotator_Parms QuatFromRotator_Parms;
	memcpy_s(&QuatFromRotator_Parms.A, 0xC, &A, 0xC);

	pFnQuatFromRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatFromRotator, &QuatFromRotator_Parms, nullptr);

	pFnQuatFromRotator->FunctionFlags |= 0x400;

	return QuatFromRotator_Parms.ReturnValue;
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Axis                           (CPF_Parm)
// float                          Angle                          (CPF_Parm)

struct FQuat UObject::QuatFromAxisAndAngle(struct FVector Axis, float Angle)
{
	static UFunction* pFnQuatFromAxisAndAngle = nullptr;

	if (!pFnQuatFromAxisAndAngle)
	{
		pFnQuatFromAxisAndAngle = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATFROMAXISANDANGLE));
	}

	UObject_execQuatFromAxisAndAngle_Parms QuatFromAxisAndAngle_Parms;
	memcpy_s(&QuatFromAxisAndAngle_Parms.Axis, 0xC, &Axis, 0xC);
	memcpy_s(&QuatFromAxisAndAngle_Parms.Angle, 0x4, &Angle, 0x4);

	pFnQuatFromAxisAndAngle->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Parms, nullptr);

	pFnQuatFromAxisAndAngle->FunctionFlags |= 0x400;

	return QuatFromAxisAndAngle_Parms.ReturnValue;
};

// Function Core.Object.QuatFindBetween
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FQuat UObject::QuatFindBetween(struct FVector A, struct FVector B)
{
	static UFunction* pFnQuatFindBetween = nullptr;

	if (!pFnQuatFindBetween)
	{
		pFnQuatFindBetween = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATFINDBETWEEN));
	}

	UObject_execQuatFindBetween_Parms QuatFindBetween_Parms;
	memcpy_s(&QuatFindBetween_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&QuatFindBetween_Parms.B, 0xC, &B, 0xC);

	pFnQuatFindBetween->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatFindBetween, &QuatFindBetween_Parms, nullptr);

	pFnQuatFindBetween->FunctionFlags |= 0x400;

	return QuatFindBetween_Parms.ReturnValue;
};

// Function Core.Object.QuatRotateVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::QuatRotateVector(struct FQuat A, struct FVector B)
{
	static UFunction* pFnQuatRotateVector = nullptr;

	if (!pFnQuatRotateVector)
	{
		pFnQuatRotateVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATROTATEVECTOR));
	}

	UObject_execQuatRotateVector_Parms QuatRotateVector_Parms;
	memcpy_s(&QuatRotateVector_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&QuatRotateVector_Parms.B, 0xC, &B, 0xC);

	pFnQuatRotateVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatRotateVector, &QuatRotateVector_Parms, nullptr);

	pFnQuatRotateVector->FunctionFlags |= 0x400;

	return QuatRotateVector_Parms.ReturnValue;
};

// Function Core.Object.QuatInvert
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)

struct FQuat UObject::QuatInvert(struct FQuat A)
{
	static UFunction* pFnQuatInvert = nullptr;

	if (!pFnQuatInvert)
	{
		pFnQuatInvert = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATINVERT));
	}

	UObject_execQuatInvert_Parms QuatInvert_Parms;
	memcpy_s(&QuatInvert_Parms.A, 0x10, &A, 0x10);

	pFnQuatInvert->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatInvert, &QuatInvert_Parms, nullptr);

	pFnQuatInvert->FunctionFlags |= 0x400;

	return QuatInvert_Parms.ReturnValue;
};

// Function Core.Object.QuatDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

float UObject::QuatDot(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnQuatDot = nullptr;

	if (!pFnQuatDot)
	{
		pFnQuatDot = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATDOT));
	}

	UObject_execQuatDot_Parms QuatDot_Parms;
	memcpy_s(&QuatDot_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&QuatDot_Parms.B, 0x10, &B, 0x10);

	pFnQuatDot->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatDot, &QuatDot_Parms, nullptr);

	pFnQuatDot->FunctionFlags |= 0x400;

	return QuatDot_Parms.ReturnValue;
};

// Function Core.Object.QuatProduct
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::QuatProduct(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnQuatProduct = nullptr;

	if (!pFnQuatProduct)
	{
		pFnQuatProduct = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QUATPRODUCT));
	}

	UObject_execQuatProduct_Parms QuatProduct_Parms;
	memcpy_s(&QuatProduct_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&QuatProduct_Parms.B, 0x10, &B, 0x10);

	pFnQuatProduct->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatProduct, &QuatProduct_Parms, nullptr);

	pFnQuatProduct->FunctionFlags |= 0x400;

	return QuatProduct_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// unsigned char                  Axis                           (CPF_Parm)

struct FVector UObject::MatrixGetAxis(struct FMatrix TM, unsigned char Axis)
{
	static UFunction* pFnMatrixGetAxis = nullptr;

	if (!pFnMatrixGetAxis)
	{
		pFnMatrixGetAxis = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MATRIXGETAXIS));
	}

	UObject_execMatrixGetAxis_Parms MatrixGetAxis_Parms;
	memcpy_s(&MatrixGetAxis_Parms.TM, 0x40, &TM, 0x40);
	MatrixGetAxis_Parms.Axis = Axis;

	pFnMatrixGetAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMatrixGetAxis, &MatrixGetAxis_Parms, nullptr);

	pFnMatrixGetAxis->FunctionFlags |= 0x400;

	return MatrixGetAxis_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)

struct FVector UObject::MatrixGetOrigin(struct FMatrix TM)
{
	static UFunction* pFnMatrixGetOrigin = nullptr;

	if (!pFnMatrixGetOrigin)
	{
		pFnMatrixGetOrigin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MATRIXGETORIGIN));
	}

	UObject_execMatrixGetOrigin_Parms MatrixGetOrigin_Parms;
	memcpy_s(&MatrixGetOrigin_Parms.TM, 0x40, &TM, 0x40);

	pFnMatrixGetOrigin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMatrixGetOrigin, &MatrixGetOrigin_Parms, nullptr);

	pFnMatrixGetOrigin->FunctionFlags |= 0x400;

	return MatrixGetOrigin_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)

struct FRotator UObject::MatrixGetRotator(struct FMatrix TM)
{
	static UFunction* pFnMatrixGetRotator = nullptr;

	if (!pFnMatrixGetRotator)
	{
		pFnMatrixGetRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MATRIXGETROTATOR));
	}

	UObject_execMatrixGetRotator_Parms MatrixGetRotator_Parms;
	memcpy_s(&MatrixGetRotator_Parms.TM, 0x40, &TM, 0x40);

	pFnMatrixGetRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMatrixGetRotator, &MatrixGetRotator_Parms, nullptr);

	pFnMatrixGetRotator->FunctionFlags |= 0x400;

	return MatrixGetRotator_Parms.ReturnValue;
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rotation                       (CPF_Parm)

struct FMatrix UObject::MakeRotationMatrix(struct FRotator Rotation)
{
	static UFunction* pFnMakeRotationMatrix = nullptr;

	if (!pFnMakeRotationMatrix)
	{
		pFnMakeRotationMatrix = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKEROTATIONMATRIX));
	}

	UObject_execMakeRotationMatrix_Parms MakeRotationMatrix_Parms;
	memcpy_s(&MakeRotationMatrix_Parms.Rotation, 0xC, &Rotation, 0xC);

	pFnMakeRotationMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMakeRotationMatrix, &MakeRotationMatrix_Parms, nullptr);

	pFnMakeRotationMatrix->FunctionFlags |= 0x400;

	return MakeRotationMatrix_Parms.ReturnValue;
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Translation                    (CPF_Parm)
// struct FRotator                Rotation                       (CPF_Parm)

struct FMatrix UObject::MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* pFnMakeRotationTranslationMatrix = nullptr;

	if (!pFnMakeRotationTranslationMatrix)
	{
		pFnMakeRotationTranslationMatrix = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKEROTATIONTRANSLATIONMATRIX));
	}

	UObject_execMakeRotationTranslationMatrix_Parms MakeRotationTranslationMatrix_Parms;
	memcpy_s(&MakeRotationTranslationMatrix_Parms.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&MakeRotationTranslationMatrix_Parms.Rotation, 0xC, &Rotation, 0xC);

	pFnMakeRotationTranslationMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Parms, nullptr);

	pFnMakeRotationTranslationMatrix->FunctionFlags |= 0x400;

	return MakeRotationTranslationMatrix_Parms.ReturnValue;
};

// Function Core.Object.InverseTransformNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::InverseTransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnInverseTransformNormal = nullptr;

	if (!pFnInverseTransformNormal)
	{
		pFnInverseTransformNormal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INVERSETRANSFORMNORMAL));
	}

	UObject_execInverseTransformNormal_Parms InverseTransformNormal_Parms;
	memcpy_s(&InverseTransformNormal_Parms.TM, 0x40, &TM, 0x40);
	memcpy_s(&InverseTransformNormal_Parms.A, 0xC, &A, 0xC);

	pFnInverseTransformNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInverseTransformNormal, &InverseTransformNormal_Parms, nullptr);

	pFnInverseTransformNormal->FunctionFlags |= 0x400;

	return InverseTransformNormal_Parms.ReturnValue;
};

// Function Core.Object.TransformNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::TransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnTransformNormal = nullptr;

	if (!pFnTransformNormal)
	{
		pFnTransformNormal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TRANSFORMNORMAL));
	}

	UObject_execTransformNormal_Parms TransformNormal_Parms;
	memcpy_s(&TransformNormal_Parms.TM, 0x40, &TM, 0x40);
	memcpy_s(&TransformNormal_Parms.A, 0xC, &A, 0xC);

	pFnTransformNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTransformNormal, &TransformNormal_Parms, nullptr);

	pFnTransformNormal->FunctionFlags |= 0x400;

	return TransformNormal_Parms.ReturnValue;
};

// Function Core.Object.InverseTransformVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::InverseTransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnInverseTransformVector = nullptr;

	if (!pFnInverseTransformVector)
	{
		pFnInverseTransformVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INVERSETRANSFORMVECTOR));
	}

	UObject_execInverseTransformVector_Parms InverseTransformVector_Parms;
	memcpy_s(&InverseTransformVector_Parms.TM, 0x40, &TM, 0x40);
	memcpy_s(&InverseTransformVector_Parms.A, 0xC, &A, 0xC);

	pFnInverseTransformVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInverseTransformVector, &InverseTransformVector_Parms, nullptr);

	pFnInverseTransformVector->FunctionFlags |= 0x400;

	return InverseTransformVector_Parms.ReturnValue;
};

// Function Core.Object.TransformVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::TransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnTransformVector = nullptr;

	if (!pFnTransformVector)
	{
		pFnTransformVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TRANSFORMVECTOR));
	}

	UObject_execTransformVector_Parms TransformVector_Parms;
	memcpy_s(&TransformVector_Parms.TM, 0x40, &TM, 0x40);
	memcpy_s(&TransformVector_Parms.A, 0xC, &A, 0xC);

	pFnTransformVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTransformVector, &TransformVector_Parms, nullptr);

	pFnTransformVector->FunctionFlags |= 0x400;

	return TransformVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 A                              (CPF_Parm)
// struct FMatrix                 B                              (CPF_Parm)

struct FMatrix UObject::Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B)
{
	static UFunction* pFnMultiply_MatrixMatrix = nullptr;

	if (!pFnMultiply_MatrixMatrix)
	{
		pFnMultiply_MatrixMatrix = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_MATRIXMATRIX));
	}

	UObject_execMultiply_MatrixMatrix_Parms Multiply_MatrixMatrix_Parms;
	memcpy_s(&Multiply_MatrixMatrix_Parms.A, 0x40, &A, 0x40);
	memcpy_s(&Multiply_MatrixMatrix_Parms.B, 0x40, &B, 0x40);

	pFnMultiply_MatrixMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Parms, nullptr);

	pFnMultiply_MatrixMatrix->FunctionFlags |= 0x400;

	return Multiply_MatrixMatrix_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_NameName
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)

bool UObject::NotEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* pFnNotEqual_NameName = nullptr;

	if (!pFnNotEqual_NameName)
	{
		pFnNotEqual_NameName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_NAMENAME));
	}

	UObject_execNotEqual_NameName_Parms NotEqual_NameName_Parms;
	memcpy_s(&NotEqual_NameName_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&NotEqual_NameName_Parms.B, 0x8, &B, 0x8);

	pFnNotEqual_NameName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_NameName, &NotEqual_NameName_Parms, nullptr);

	pFnNotEqual_NameName->FunctionFlags |= 0x400;

	return NotEqual_NameName_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_NameName
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)

bool UObject::EqualEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* pFnEqualEqual_NameName = nullptr;

	if (!pFnEqualEqual_NameName)
	{
		pFnEqualEqual_NameName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_NAMENAME));
	}

	UObject_execEqualEqual_NameName_Parms EqualEqual_NameName_Parms;
	memcpy_s(&EqualEqual_NameName_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&EqualEqual_NameName_Parms.B, 0x8, &B, 0x8);

	pFnEqualEqual_NameName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_NameName, &EqualEqual_NameName_Parms, nullptr);

	pFnEqualEqual_NameName->FunctionFlags |= 0x400;

	return EqualEqual_NameName_Parms.ReturnValue;
};

// Function Core.Object.IsA
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ClassName                      (CPF_Parm)

bool UObject::IsA(struct FName ClassName)
{
	static UFunction* pFnIsA = nullptr;

	if (!pFnIsA)
	{
		pFnIsA = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISA));
	}

	UObject_execIsA_Parms IsA_Parms;
	memcpy_s(&IsA_Parms.ClassName, 0x8, &ClassName, 0x8);

	pFnIsA->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsA, &IsA_Parms, nullptr);

	pFnIsA->FunctionFlags |= 0x400;

	return IsA_Parms.ReturnValue;
};

// Function Core.Object.ClassIsChildOf
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  TestClass                      (CPF_Parm)
// class UClass*                  ParentClass                    (CPF_Parm)

bool UObject::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static UFunction* pFnClassIsChildOf = nullptr;

	if (!pFnClassIsChildOf)
	{
		pFnClassIsChildOf = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLASSISCHILDOF));
	}

	UObject_execClassIsChildOf_Parms ClassIsChildOf_Parms;
	memcpy_s(&ClassIsChildOf_Parms.TestClass, 0x8, &TestClass, 0x8);
	memcpy_s(&ClassIsChildOf_Parms.ParentClass, 0x8, &ParentClass, 0x8);

	pFnClassIsChildOf->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClassIsChildOf, &ClassIsChildOf_Parms, nullptr);

	pFnClassIsChildOf->FunctionFlags |= 0x400;

	return ClassIsChildOf_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UInterface*              A                              (CPF_Parm)
// class UInterface*              B                              (CPF_Parm)

bool UObject::NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* pFnNotEqual_InterfaceInterface = nullptr;

	if (!pFnNotEqual_InterfaceInterface)
	{
		pFnNotEqual_InterfaceInterface = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_INTERFACEINTERFACE));
	}

	UObject_execNotEqual_InterfaceInterface_Parms NotEqual_InterfaceInterface_Parms;
	memcpy_s(&NotEqual_InterfaceInterface_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&NotEqual_InterfaceInterface_Parms.B, 0x10, &B, 0x10);

	pFnNotEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Parms, nullptr);

	pFnNotEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return NotEqual_InterfaceInterface_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UInterface*              A                              (CPF_Parm)
// class UInterface*              B                              (CPF_Parm)

bool UObject::EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* pFnEqualEqual_InterfaceInterface = nullptr;

	if (!pFnEqualEqual_InterfaceInterface)
	{
		pFnEqualEqual_InterfaceInterface = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_INTERFACEINTERFACE));
	}

	UObject_execEqualEqual_InterfaceInterface_Parms EqualEqual_InterfaceInterface_Parms;
	memcpy_s(&EqualEqual_InterfaceInterface_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&EqualEqual_InterfaceInterface_Parms.B, 0x10, &B, 0x10);

	pFnEqualEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Parms, nullptr);

	pFnEqualEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return EqualEqual_InterfaceInterface_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_ObjectObject
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)

bool UObject::NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* pFnNotEqual_ObjectObject = nullptr;

	if (!pFnNotEqual_ObjectObject)
	{
		pFnNotEqual_ObjectObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_OBJECTOBJECT));
	}

	UObject_execNotEqual_ObjectObject_Parms NotEqual_ObjectObject_Parms;
	memcpy_s(&NotEqual_ObjectObject_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&NotEqual_ObjectObject_Parms.B, 0x8, &B, 0x8);

	pFnNotEqual_ObjectObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_ObjectObject, &NotEqual_ObjectObject_Parms, nullptr);

	pFnNotEqual_ObjectObject->FunctionFlags |= 0x400;

	return NotEqual_ObjectObject_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)

bool UObject::EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* pFnEqualEqual_ObjectObject = nullptr;

	if (!pFnEqualEqual_ObjectObject)
	{
		pFnEqualEqual_ObjectObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_OBJECTOBJECT));
	}

	UObject_execEqualEqual_ObjectObject_Parms EqualEqual_ObjectObject_Parms;
	memcpy_s(&EqualEqual_ObjectObject_Parms.A, 0x8, &A, 0x8);
	memcpy_s(&EqualEqual_ObjectObject_Parms.B, 0x8, &B, 0x8);

	pFnEqualEqual_ObjectObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Parms, nullptr);

	pFnEqualEqual_ObjectObject->FunctionFlags |= 0x400;

	return EqualEqual_ObjectObject_Parms.ReturnValue;
};

// Function Core.Object.GetPathName
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UObject::GetPathName()
{
	static UFunction* pFnGetPathName = nullptr;

	if (!pFnGetPathName)
	{
		pFnGetPathName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETPATHNAME));
	}

	UObject_execGetPathName_Parms GetPathName_Parms;

	this->ProcessEvent(pFnGetPathName, &GetPathName_Parms, nullptr);

	return GetPathName_Parms.ReturnValue;
};

// Function Core.Object.PathName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class UObject*                 CheckObject                    (CPF_Parm)

struct FString UObject::PathName(class UObject* CheckObject)
{
	static UFunction* pFnPathName = nullptr;

	if (!pFnPathName)
	{
		pFnPathName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PATHNAME));
	}

	UObject_execPathName_Parms PathName_Parms;
	memcpy_s(&PathName_Parms.CheckObject, 0x8, &CheckObject, 0x8);

	pFnPathName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPathName, &PathName_Parms, nullptr);

	pFnPathName->FunctionFlags |= 0x400;

	return PathName_Parms.ReturnValue;
};

// Function Core.Object.SplitString
// [0x00026003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FString>         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Source                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Delimiter                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bCullEmpty                     (CPF_OptionalParm | CPF_Parm)

TArray<struct FString> UObject::SplitString(struct FString Source, struct FString Delimiter, unsigned long bCullEmpty)
{
	static UFunction* pFnSplitString = nullptr;

	if (!pFnSplitString)
	{
		pFnSplitString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SPLITSTRING));
	}

	UObject_execSplitString_Parms SplitString_Parms;
	memcpy_s(&SplitString_Parms.Source, 0x10, &Source, 0x10);
	memcpy_s(&SplitString_Parms.Delimiter, 0x10, &Delimiter, 0x10);
	SplitString_Parms.bCullEmpty = bCullEmpty;

	this->ProcessEvent(pFnSplitString, &SplitString_Parms, nullptr);

	return SplitString_Parms.ReturnValue;
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 BaseString                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bCullEmpty                     (CPF_Parm)
// TArray<struct FString>         Pieces                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::ParseStringIntoArray(struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray<struct FString>& Pieces)
{
	static UFunction* pFnParseStringIntoArray = nullptr;

	if (!pFnParseStringIntoArray)
	{
		pFnParseStringIntoArray = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PARSESTRINGINTOARRAY));
	}

	UObject_execParseStringIntoArray_Parms ParseStringIntoArray_Parms;
	memcpy_s(&ParseStringIntoArray_Parms.BaseString, 0x10, &BaseString, 0x10);
	memcpy_s(&ParseStringIntoArray_Parms.delim, 0x10, &delim, 0x10);
	ParseStringIntoArray_Parms.bCullEmpty = bCullEmpty;

	pFnParseStringIntoArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParseStringIntoArray, &ParseStringIntoArray_Parms, nullptr);

	pFnParseStringIntoArray->FunctionFlags |= 0x400;
	memcpy_s(&ParseStringIntoArray_Parms.Pieces, 0x10, &Pieces, 0x10);
};

// Function Core.Object.ContainsWhitespace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Text                           (CPF_Parm | CPF_NeedCtorLink)

bool UObject::ContainsWhitespace(struct FString Text)
{
	static UFunction* pFnContainsWhitespace = nullptr;

	if (!pFnContainsWhitespace)
	{
		pFnContainsWhitespace = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CONTAINSWHITESPACE));
	}

	UObject_execContainsWhitespace_Parms ContainsWhitespace_Parms;
	memcpy_s(&ContainsWhitespace_Parms.Text, 0x10, &Text, 0x10);

	pFnContainsWhitespace->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnContainsWhitespace, &ContainsWhitespace_Parms, nullptr);

	pFnContainsWhitespace->FunctionFlags |= 0x400;

	return ContainsWhitespace_Parms.ReturnValue;
};

// Function Core.Object.RepeatString
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 InValue                        (CPF_Parm | CPF_NeedCtorLink)
// int                            Count                          (CPF_Parm)

struct FString UObject::RepeatString(struct FString InValue, int Count)
{
	static UFunction* pFnRepeatString = nullptr;

	if (!pFnRepeatString)
	{
		pFnRepeatString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_REPEATSTRING));
	}

	UObject_execRepeatString_Parms RepeatString_Parms;
	memcpy_s(&RepeatString_Parms.InValue, 0x10, &InValue, 0x10);
	memcpy_s(&RepeatString_Parms.Count, 0x4, &Count, 0x4);

	this->ProcessEvent(pFnRepeatString, &RepeatString_Parms, nullptr);

	return RepeatString_Parms.ReturnValue;
};

// Function Core.Object.JoinArrayQWord
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// TArray<unsigned long long>     QWordArray                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::JoinArrayQWord(struct FString delim, unsigned long bIgnoreBlanks, TArray<unsigned long long>& QWordArray)
{
	static UFunction* pFnJoinArrayQWord = nullptr;

	if (!pFnJoinArrayQWord)
	{
		pFnJoinArrayQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_JOINARRAYQWORD));
	}

	UObject_execJoinArrayQWord_Parms JoinArrayQWord_Parms;
	memcpy_s(&JoinArrayQWord_Parms.delim, 0x10, &delim, 0x10);
	JoinArrayQWord_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent(pFnJoinArrayQWord, &JoinArrayQWord_Parms, nullptr);
	memcpy_s(&JoinArrayQWord_Parms.QWordArray, 0x10, &QWordArray, 0x10);

	return JoinArrayQWord_Parms.ReturnValue;
};

// Function Core.Object.JoinArrayInt
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// TArray<int>                    IntArray                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::JoinArrayInt(struct FString delim, unsigned long bIgnoreBlanks, TArray<int>& IntArray)
{
	static UFunction* pFnJoinArrayInt = nullptr;

	if (!pFnJoinArrayInt)
	{
		pFnJoinArrayInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_JOINARRAYINT));
	}

	UObject_execJoinArrayInt_Parms JoinArrayInt_Parms;
	memcpy_s(&JoinArrayInt_Parms.delim, 0x10, &delim, 0x10);
	JoinArrayInt_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent(pFnJoinArrayInt, &JoinArrayInt_Parms, nullptr);
	memcpy_s(&JoinArrayInt_Parms.IntArray, 0x10, &IntArray, 0x10);

	return JoinArrayInt_Parms.ReturnValue;
};

// Function Core.Object.JoinArrayName
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// TArray<struct FName>           NameArray                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::JoinArrayName(struct FString delim, unsigned long bIgnoreBlanks, TArray<struct FName>& NameArray)
{
	static UFunction* pFnJoinArrayName = nullptr;

	if (!pFnJoinArrayName)
	{
		pFnJoinArrayName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_JOINARRAYNAME));
	}

	UObject_execJoinArrayName_Parms JoinArrayName_Parms;
	memcpy_s(&JoinArrayName_Parms.delim, 0x10, &delim, 0x10);
	JoinArrayName_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent(pFnJoinArrayName, &JoinArrayName_Parms, nullptr);
	memcpy_s(&JoinArrayName_Parms.NameArray, 0x10, &NameArray, 0x10);

	return JoinArrayName_Parms.ReturnValue;
};

// Function Core.Object.JoinArrayStr
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// TArray<struct FString>         StringArray                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::JoinArrayStr(struct FString delim, unsigned long bIgnoreBlanks, TArray<struct FString>& StringArray)
{
	static UFunction* pFnJoinArrayStr = nullptr;

	if (!pFnJoinArrayStr)
	{
		pFnJoinArrayStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_JOINARRAYSTR));
	}

	UObject_execJoinArrayStr_Parms JoinArrayStr_Parms;
	memcpy_s(&JoinArrayStr_Parms.delim, 0x10, &delim, 0x10);
	JoinArrayStr_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent(pFnJoinArrayStr, &JoinArrayStr_Parms, nullptr);
	memcpy_s(&JoinArrayStr_Parms.StringArray, 0x10, &StringArray, 0x10);

	return JoinArrayStr_Parms.ReturnValue;
};

// Function Core.Object.JoinArray
// [0x00426401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// TArray<struct FString>         StringArray                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 out_Result                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::JoinArray(struct FString delim, unsigned long bIgnoreBlanks, TArray<struct FString>& StringArray, struct FString& out_Result)
{
	static UFunction* pFnJoinArray = nullptr;

	if (!pFnJoinArray)
	{
		pFnJoinArray = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_JOINARRAY));
	}

	UObject_execJoinArray_Parms JoinArray_Parms;
	memcpy_s(&JoinArray_Parms.delim, 0x10, &delim, 0x10);
	JoinArray_Parms.bIgnoreBlanks = bIgnoreBlanks;

	pFnJoinArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnJoinArray, &JoinArray_Parms, nullptr);

	pFnJoinArray->FunctionFlags |= 0x400;
	memcpy_s(&JoinArray_Parms.StringArray, 0x10, &StringArray, 0x10);
	memcpy_s(&JoinArray_Parms.out_Result, 0x10, &out_Result, 0x10);
};

// Function Core.Object.GetRightMost
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

struct FString UObject::GetRightMost(struct FString Text)
{
	static UFunction* pFnGetRightMost = nullptr;

	if (!pFnGetRightMost)
	{
		pFnGetRightMost = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETRIGHTMOST));
	}

	UObject_execGetRightMost_Parms GetRightMost_Parms;
	memcpy_s(&GetRightMost_Parms.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(pFnGetRightMost, &GetRightMost_Parms, nullptr);

	return GetRightMost_Parms.ReturnValue;
};

// Function Core.Object.Split
// [0x00026003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 SplitStr                       (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bOmitSplitStr                  (CPF_OptionalParm | CPF_Parm)

struct FString UObject::Split(struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr)
{
	static UFunction* pFnSplit = nullptr;

	if (!pFnSplit)
	{
		pFnSplit = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SPLIT));
	}

	UObject_execSplit_Parms Split_Parms;
	memcpy_s(&Split_Parms.Text, 0x10, &Text, 0x10);
	memcpy_s(&Split_Parms.SplitStr, 0x10, &SplitStr, 0x10);
	Split_Parms.bOmitSplitStr = bOmitSplitStr;

	this->ProcessEvent(pFnSplit, &Split_Parms, nullptr);

	return Split_Parms.ReturnValue;
};

// Function Core.Object.Trim
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Src                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

struct FString UObject::Trim(struct FString Src)
{
	static UFunction* pFnTrim = nullptr;

	if (!pFnTrim)
	{
		pFnTrim = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TRIM));
	}

	UObject_execTrim_Parms Trim_Parms;
	memcpy_s(&Trim_Parms.Src, 0x10, &Src, 0x10);

	pFnTrim->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTrim, &Trim_Parms, nullptr);

	pFnTrim->FunctionFlags |= 0x400;

	return Trim_Parms.ReturnValue;
};

// Function Core.Object.Repl
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Src                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 Match                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 With                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bCaseSensitive                 (CPF_OptionalParm | CPF_Parm)

struct FString UObject::Repl(struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive)
{
	static UFunction* pFnRepl = nullptr;

	if (!pFnRepl)
	{
		pFnRepl = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_REPL));
	}

	UObject_execRepl_Parms Repl_Parms;
	memcpy_s(&Repl_Parms.Src, 0x10, &Src, 0x10);
	memcpy_s(&Repl_Parms.Match, 0x10, &Match, 0x10);
	memcpy_s(&Repl_Parms.With, 0x10, &With, 0x10);
	Repl_Parms.bCaseSensitive = bCaseSensitive;

	pFnRepl->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRepl, &Repl_Parms, nullptr);

	pFnRepl->FunctionFlags |= 0x400;

	return Repl_Parms.ReturnValue;
};

// Function Core.Object.Asc
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 S                              (CPF_Parm | CPF_NeedCtorLink)

int UObject::Asc(struct FString S)
{
	static UFunction* pFnAsc = nullptr;

	if (!pFnAsc)
	{
		pFnAsc = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ASC));
	}

	UObject_execAsc_Parms Asc_Parms;
	memcpy_s(&Asc_Parms.S, 0x10, &S, 0x10);

	pFnAsc->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAsc, &Asc_Parms, nullptr);

	pFnAsc->FunctionFlags |= 0x400;

	return Asc_Parms.ReturnValue;
};

// Function Core.Object.Chr
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

struct FString UObject::Chr(int I)
{
	static UFunction* pFnChr = nullptr;

	if (!pFnChr)
	{
		pFnChr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CHR));
	}

	UObject_execChr_Parms Chr_Parms;
	memcpy_s(&Chr_Parms.I, 0x4, &I, 0x4);

	pFnChr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnChr, &Chr_Parms, nullptr);

	pFnChr->FunctionFlags |= 0x400;

	return Chr_Parms.ReturnValue;
};

// Function Core.Object.Locs
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

struct FString UObject::Locs(struct FString S)
{
	static UFunction* pFnLocs = nullptr;

	if (!pFnLocs)
	{
		pFnLocs = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LOCS));
	}

	UObject_execLocs_Parms Locs_Parms;
	memcpy_s(&Locs_Parms.S, 0x10, &S, 0x10);

	pFnLocs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLocs, &Locs_Parms, nullptr);

	pFnLocs->FunctionFlags |= 0x400;

	return Locs_Parms.ReturnValue;
};

// Function Core.Object.Caps
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

struct FString UObject::Caps(struct FString S)
{
	static UFunction* pFnCaps = nullptr;

	if (!pFnCaps)
	{
		pFnCaps = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CAPS));
	}

	UObject_execCaps_Parms Caps_Parms;
	memcpy_s(&Caps_Parms.S, 0x10, &S, 0x10);

	pFnCaps->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCaps, &Caps_Parms, nullptr);

	pFnCaps->FunctionFlags |= 0x400;

	return Caps_Parms.ReturnValue;
};

// Function Core.Object.Right
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

struct FString UObject::Right(struct FString S, int I)
{
	static UFunction* pFnRight = nullptr;

	if (!pFnRight)
	{
		pFnRight = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RIGHT));
	}

	UObject_execRight_Parms Right_Parms;
	memcpy_s(&Right_Parms.S, 0x10, &S, 0x10);
	memcpy_s(&Right_Parms.I, 0x4, &I, 0x4);

	pFnRight->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRight, &Right_Parms, nullptr);

	pFnRight->FunctionFlags |= 0x400;

	return Right_Parms.ReturnValue;
};

// Function Core.Object.Left
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

struct FString UObject::Left(struct FString S, int I)
{
	static UFunction* pFnLeft = nullptr;

	if (!pFnLeft)
	{
		pFnLeft = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LEFT));
	}

	UObject_execLeft_Parms Left_Parms;
	memcpy_s(&Left_Parms.S, 0x10, &S, 0x10);
	memcpy_s(&Left_Parms.I, 0x4, &I, 0x4);

	pFnLeft->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLeft, &Left_Parms, nullptr);

	pFnLeft->FunctionFlags |= 0x400;

	return Left_Parms.ReturnValue;
};

// Function Core.Object.Mid
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)
// int                            J                              (CPF_OptionalParm | CPF_Parm)

struct FString UObject::Mid(struct FString S, int I, int J)
{
	static UFunction* pFnMid = nullptr;

	if (!pFnMid)
	{
		pFnMid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MID));
	}

	UObject_execMid_Parms Mid_Parms;
	memcpy_s(&Mid_Parms.S, 0x10, &S, 0x10);
	memcpy_s(&Mid_Parms.I, 0x4, &I, 0x4);
	memcpy_s(&Mid_Parms.J, 0x4, &J, 0x4);

	pFnMid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMid, &Mid_Parms, nullptr);

	pFnMid->FunctionFlags |= 0x400;

	return Mid_Parms.ReturnValue;
};

// Function Core.Object.InStr
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 T                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bSearchFromRight               (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bIgnoreCase                    (CPF_OptionalParm | CPF_Parm)
// int                            StartPos                       (CPF_OptionalParm | CPF_Parm)

int UObject::InStr(struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos)
{
	static UFunction* pFnInStr = nullptr;

	if (!pFnInStr)
	{
		pFnInStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INSTR));
	}

	UObject_execInStr_Parms InStr_Parms;
	memcpy_s(&InStr_Parms.S, 0x10, &S, 0x10);
	memcpy_s(&InStr_Parms.T, 0x10, &T, 0x10);
	InStr_Parms.bSearchFromRight = bSearchFromRight;
	InStr_Parms.bIgnoreCase = bIgnoreCase;
	memcpy_s(&InStr_Parms.StartPos, 0x4, &StartPos, 0x4);

	pFnInStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInStr, &InStr_Parms, nullptr);

	pFnInStr->FunctionFlags |= 0x400;

	return InStr_Parms.ReturnValue;
};

// Function Core.Object.Len
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int UObject::Len(struct FString S)
{
	static UFunction* pFnLen = nullptr;

	if (!pFnLen)
	{
		pFnLen = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LEN));
	}

	UObject_execLen_Parms Len_Parms;
	memcpy_s(&Len_Parms.S, 0x10, &S, 0x10);

	pFnLen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLen, &Len_Parms, nullptr);

	pFnLen->FunctionFlags |= 0x400;

	return Len_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_StrStr
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::SubtractEqual_StrStr(struct FString B, struct FString& A)
{
	static UFunction* pFnSubtractEqual_StrStr = nullptr;

	if (!pFnSubtractEqual_StrStr)
	{
		pFnSubtractEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_STRSTR));
	}

	UObject_execSubtractEqual_StrStr_Parms SubtractEqual_StrStr_Parms;
	memcpy_s(&SubtractEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnSubtractEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_StrStr, &SubtractEqual_StrStr_Parms, nullptr);

	pFnSubtractEqual_StrStr->FunctionFlags |= 0x400;
	memcpy_s(&SubtractEqual_StrStr_Parms.A, 0x10, &A, 0x10);

	return SubtractEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.AtEqual_StrStr
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::AtEqual_StrStr(struct FString B, struct FString& A)
{
	static UFunction* pFnAtEqual_StrStr = nullptr;

	if (!pFnAtEqual_StrStr)
	{
		pFnAtEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ATEQUAL_STRSTR));
	}

	UObject_execAtEqual_StrStr_Parms AtEqual_StrStr_Parms;
	memcpy_s(&AtEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnAtEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAtEqual_StrStr, &AtEqual_StrStr_Parms, nullptr);

	pFnAtEqual_StrStr->FunctionFlags |= 0x400;
	memcpy_s(&AtEqual_StrStr_Parms.A, 0x10, &A, 0x10);

	return AtEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.ConcatEqual_StrStr
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UObject::ConcatEqual_StrStr(struct FString B, struct FString& A)
{
	static UFunction* pFnConcatEqual_StrStr = nullptr;

	if (!pFnConcatEqual_StrStr)
	{
		pFnConcatEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CONCATEQUAL_STRSTR));
	}

	UObject_execConcatEqual_StrStr_Parms ConcatEqual_StrStr_Parms;
	memcpy_s(&ConcatEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnConcatEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnConcatEqual_StrStr, &ConcatEqual_StrStr_Parms, nullptr);

	pFnConcatEqual_StrStr->FunctionFlags |= 0x400;
	memcpy_s(&ConcatEqual_StrStr_Parms.A, 0x10, &A, 0x10);

	return ConcatEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.ComplementEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::ComplementEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnComplementEqual_StrStr = nullptr;

	if (!pFnComplementEqual_StrStr)
	{
		pFnComplementEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_COMPLEMENTEQUAL_STRSTR));
	}

	UObject_execComplementEqual_StrStr_Parms ComplementEqual_StrStr_Parms;
	memcpy_s(&ComplementEqual_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&ComplementEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnComplementEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnComplementEqual_StrStr, &ComplementEqual_StrStr_Parms, nullptr);

	pFnComplementEqual_StrStr->FunctionFlags |= 0x400;

	return ComplementEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::NotEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnNotEqual_StrStr = nullptr;

	if (!pFnNotEqual_StrStr)
	{
		pFnNotEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_STRSTR));
	}

	UObject_execNotEqual_StrStr_Parms NotEqual_StrStr_Parms;
	memcpy_s(&NotEqual_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&NotEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnNotEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_StrStr, &NotEqual_StrStr_Parms, nullptr);

	pFnNotEqual_StrStr->FunctionFlags |= 0x400;

	return NotEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::EqualEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnEqualEqual_StrStr = nullptr;

	if (!pFnEqualEqual_StrStr)
	{
		pFnEqualEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_STRSTR));
	}

	UObject_execEqualEqual_StrStr_Parms EqualEqual_StrStr_Parms;
	memcpy_s(&EqualEqual_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&EqualEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnEqualEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_StrStr, &EqualEqual_StrStr_Parms, nullptr);

	pFnEqualEqual_StrStr->FunctionFlags |= 0x400;

	return EqualEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::GreaterEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnGreaterEqual_StrStr = nullptr;

	if (!pFnGreaterEqual_StrStr)
	{
		pFnGreaterEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATEREQUAL_STRSTR));
	}

	UObject_execGreaterEqual_StrStr_Parms GreaterEqual_StrStr_Parms;
	memcpy_s(&GreaterEqual_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&GreaterEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnGreaterEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_StrStr, &GreaterEqual_StrStr_Parms, nullptr);

	pFnGreaterEqual_StrStr->FunctionFlags |= 0x400;

	return GreaterEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::LessEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnLessEqual_StrStr = nullptr;

	if (!pFnLessEqual_StrStr)
	{
		pFnLessEqual_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESSEQUAL_STRSTR));
	}

	UObject_execLessEqual_StrStr_Parms LessEqual_StrStr_Parms;
	memcpy_s(&LessEqual_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&LessEqual_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnLessEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_StrStr, &LessEqual_StrStr_Parms, nullptr);

	pFnLessEqual_StrStr->FunctionFlags |= 0x400;

	return LessEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Greater_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::Greater_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnGreater_StrStr = nullptr;

	if (!pFnGreater_StrStr)
	{
		pFnGreater_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATER_STRSTR));
	}

	UObject_execGreater_StrStr_Parms Greater_StrStr_Parms;
	memcpy_s(&Greater_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&Greater_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnGreater_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_StrStr, &Greater_StrStr_Parms, nullptr);

	pFnGreater_StrStr->FunctionFlags |= 0x400;

	return Greater_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Less_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 A                              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::Less_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnLess_StrStr = nullptr;

	if (!pFnLess_StrStr)
	{
		pFnLess_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESS_STRSTR));
	}

	UObject_execLess_StrStr_Parms Less_StrStr_Parms;
	memcpy_s(&Less_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&Less_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnLess_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_StrStr, &Less_StrStr_Parms, nullptr);

	pFnLess_StrStr->FunctionFlags |= 0x400;

	return Less_StrStr_Parms.ReturnValue;
};

// Function Core.Object.At_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 A                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

struct FString UObject::At_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnAt_StrStr = nullptr;

	if (!pFnAt_StrStr)
	{
		pFnAt_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_AT_STRSTR));
	}

	UObject_execAt_StrStr_Parms At_StrStr_Parms;
	memcpy_s(&At_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&At_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnAt_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAt_StrStr, &At_StrStr_Parms, nullptr);

	pFnAt_StrStr->FunctionFlags |= 0x400;

	return At_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Concat_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 A                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

struct FString UObject::Concat_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnConcat_StrStr = nullptr;

	if (!pFnConcat_StrStr)
	{
		pFnConcat_StrStr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CONCAT_STRSTR));
	}

	UObject_execConcat_StrStr_Parms Concat_StrStr_Parms;
	memcpy_s(&Concat_StrStr_Parms.A, 0x10, &A, 0x10);
	memcpy_s(&Concat_StrStr_Parms.B, 0x10, &B, 0x10);

	pFnConcat_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnConcat_StrStr, &Concat_StrStr_Parms, nullptr);

	pFnConcat_StrStr->FunctionFlags |= 0x400;

	return Concat_StrStr_Parms.ReturnValue;
};

// Function Core.Object.RotateRotator
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Axis                           (CPF_Parm)
// struct FRotator                Rot                            (CPF_Parm)
// struct FRotator                Direction                      (CPF_Parm)
// float                          Amount                         (CPF_Parm)

struct FRotator UObject::RotateRotator(struct FVector Axis, struct FRotator Rot, struct FRotator Direction, float Amount)
{
	static UFunction* pFnRotateRotator = nullptr;

	if (!pFnRotateRotator)
	{
		pFnRotateRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ROTATEROTATOR));
	}

	UObject_execRotateRotator_Parms RotateRotator_Parms;
	memcpy_s(&RotateRotator_Parms.Axis, 0xC, &Axis, 0xC);
	memcpy_s(&RotateRotator_Parms.Rot, 0xC, &Rot, 0xC);
	memcpy_s(&RotateRotator_Parms.Direction, 0xC, &Direction, 0xC);
	memcpy_s(&RotateRotator_Parms.Amount, 0x4, &Amount, 0x4);

	this->ProcessEvent(pFnRotateRotator, &RotateRotator_Parms, nullptr);

	return RotateRotator_Parms.ReturnValue;
};

// Function Core.Object.MakeQuat
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// float                          Z                              (CPF_Parm)
// float                          W                              (CPF_Parm)

struct FQuat UObject::MakeQuat(float X, float Y, float Z, float W)
{
	static UFunction* pFnMakeQuat = nullptr;

	if (!pFnMakeQuat)
	{
		pFnMakeQuat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKEQUAT));
	}

	UObject_execMakeQuat_Parms MakeQuat_Parms;
	memcpy_s(&MakeQuat_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&MakeQuat_Parms.Y, 0x4, &Y, 0x4);
	memcpy_s(&MakeQuat_Parms.Z, 0x4, &Z, 0x4);
	memcpy_s(&MakeQuat_Parms.W, 0x4, &W, 0x4);

	this->ProcessEvent(pFnMakeQuat, &MakeQuat_Parms, nullptr);

	return MakeQuat_Parms.ReturnValue;
};

// Function Core.Object.MakeRotator
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Pitch                          (CPF_Parm)
// int                            Yaw                            (CPF_Parm)
// int                            Roll                           (CPF_Parm)

struct FRotator UObject::MakeRotator(int Pitch, int Yaw, int Roll)
{
	static UFunction* pFnMakeRotator = nullptr;

	if (!pFnMakeRotator)
	{
		pFnMakeRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAKEROTATOR));
	}

	UObject_execMakeRotator_Parms MakeRotator_Parms;
	memcpy_s(&MakeRotator_Parms.Pitch, 0x4, &Pitch, 0x4);
	memcpy_s(&MakeRotator_Parms.Yaw, 0x4, &Yaw, 0x4);
	memcpy_s(&MakeRotator_Parms.Roll, 0x4, &Roll, 0x4);

	this->ProcessEvent(pFnMakeRotator, &MakeRotator_Parms, nullptr);

	return MakeRotator_Parms.ReturnValue;
};

// Function Core.Object.SClampRotAxis
// [0x00422103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// int                            ViewAxis                       (CPF_Parm)
// int                            MaxLimit                       (CPF_Parm)
// int                            MinLimit                       (CPF_Parm)
// float                          InterpolationSpeed             (CPF_Parm)
// int                            out_DeltaViewAxis              (CPF_Parm | CPF_OutParm)

bool UObject::SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int& out_DeltaViewAxis)
{
	static UFunction* pFnSClampRotAxis = nullptr;

	if (!pFnSClampRotAxis)
	{
		pFnSClampRotAxis = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SCLAMPROTAXIS));
	}

	UObject_execSClampRotAxis_Parms SClampRotAxis_Parms;
	memcpy_s(&SClampRotAxis_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&SClampRotAxis_Parms.ViewAxis, 0x4, &ViewAxis, 0x4);
	memcpy_s(&SClampRotAxis_Parms.MaxLimit, 0x4, &MaxLimit, 0x4);
	memcpy_s(&SClampRotAxis_Parms.MinLimit, 0x4, &MinLimit, 0x4);
	memcpy_s(&SClampRotAxis_Parms.InterpolationSpeed, 0x4, &InterpolationSpeed, 0x4);

	this->ProcessEvent(pFnSClampRotAxis, &SClampRotAxis_Parms, nullptr);
	memcpy_s(&SClampRotAxis_Parms.out_DeltaViewAxis, 0x4, &out_DeltaViewAxis, 0x4);

	return SClampRotAxis_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromRange
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Current                        (CPF_Parm)
// int                            Min                            (CPF_Parm)
// int                            Max                            (CPF_Parm)

int UObject::ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static UFunction* pFnClampRotAxisFromRange = nullptr;

	if (!pFnClampRotAxisFromRange)
	{
		pFnClampRotAxisFromRange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLAMPROTAXISFROMRANGE));
	}

	UObject_execClampRotAxisFromRange_Parms ClampRotAxisFromRange_Parms;
	memcpy_s(&ClampRotAxisFromRange_Parms.Current, 0x4, &Current, 0x4);
	memcpy_s(&ClampRotAxisFromRange_Parms.Min, 0x4, &Min, 0x4);
	memcpy_s(&ClampRotAxisFromRange_Parms.Max, 0x4, &Max, 0x4);

	this->ProcessEvent(pFnClampRotAxisFromRange, &ClampRotAxisFromRange_Parms, nullptr);

	return ClampRotAxisFromRange_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromBase
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Current                        (CPF_Parm)
// int                            Center                         (CPF_Parm)
// int                            MaxDelta                       (CPF_Parm)

int UObject::ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static UFunction* pFnClampRotAxisFromBase = nullptr;

	if (!pFnClampRotAxisFromBase)
	{
		pFnClampRotAxisFromBase = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLAMPROTAXISFROMBASE));
	}

	UObject_execClampRotAxisFromBase_Parms ClampRotAxisFromBase_Parms;
	memcpy_s(&ClampRotAxisFromBase_Parms.Current, 0x4, &Current, 0x4);
	memcpy_s(&ClampRotAxisFromBase_Parms.Center, 0x4, &Center, 0x4);
	memcpy_s(&ClampRotAxisFromBase_Parms.MaxDelta, 0x4, &MaxDelta, 0x4);

	this->ProcessEvent(pFnClampRotAxisFromBase, &ClampRotAxisFromBase_Parms, nullptr);

	return ClampRotAxisFromBase_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxis
// [0x00422103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ViewAxis                       (CPF_Parm)
// int                            MaxLimit                       (CPF_Parm)
// int                            MinLimit                       (CPF_Parm)
// int                            out_DeltaViewAxis              (CPF_Parm | CPF_OutParm)

void UObject::ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int& out_DeltaViewAxis)
{
	static UFunction* pFnClampRotAxis = nullptr;

	if (!pFnClampRotAxis)
	{
		pFnClampRotAxis = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLAMPROTAXIS));
	}

	UObject_execClampRotAxis_Parms ClampRotAxis_Parms;
	memcpy_s(&ClampRotAxis_Parms.ViewAxis, 0x4, &ViewAxis, 0x4);
	memcpy_s(&ClampRotAxis_Parms.MaxLimit, 0x4, &MaxLimit, 0x4);
	memcpy_s(&ClampRotAxis_Parms.MinLimit, 0x4, &MinLimit, 0x4);

	this->ProcessEvent(pFnClampRotAxis, &ClampRotAxis_Parms, nullptr);
	memcpy_s(&ClampRotAxis_Parms.out_DeltaViewAxis, 0x4, &out_DeltaViewAxis, 0x4);
};

// Function Core.Object.FlattenRotatorOnAxis
// [0x00826003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 AxisToRemove                   (CPF_Parm)
// struct FRotator                RotToFlatten                   (CPF_Parm)
// struct FRotator                RotToFlattenTo                 (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::FlattenRotatorOnAxis(struct FVector AxisToRemove, struct FRotator RotToFlatten, struct FRotator RotToFlattenTo)
{
	static UFunction* pFnFlattenRotatorOnAxis = nullptr;

	if (!pFnFlattenRotatorOnAxis)
	{
		pFnFlattenRotatorOnAxis = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FLATTENROTATORONAXIS));
	}

	UObject_execFlattenRotatorOnAxis_Parms FlattenRotatorOnAxis_Parms;
	memcpy_s(&FlattenRotatorOnAxis_Parms.AxisToRemove, 0xC, &AxisToRemove, 0xC);
	memcpy_s(&FlattenRotatorOnAxis_Parms.RotToFlatten, 0xC, &RotToFlatten, 0xC);
	memcpy_s(&FlattenRotatorOnAxis_Parms.RotToFlattenTo, 0xC, &RotToFlattenTo, 0xC);

	this->ProcessEvent(pFnFlattenRotatorOnAxis, &FlattenRotatorOnAxis_Parms, nullptr);

	return FlattenRotatorOnAxis_Parms.ReturnValue;
};

// Function Core.Object.RSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                R                              (CPF_Parm)

float UObject::RSize(struct FRotator R)
{
	static UFunction* pFnRSize = nullptr;

	if (!pFnRSize)
	{
		pFnRSize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RSIZE));
	}

	UObject_execRSize_Parms RSize_Parms;
	memcpy_s(&RSize_Parms.R, 0xC, &R, 0xC);

	pFnRSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRSize, &RSize_Parms, nullptr);

	pFnRSize->FunctionFlags |= 0x400;

	return RSize_Parms.ReturnValue;
};

// Function Core.Object.RDiff
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

float UObject::RDiff(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnRDiff = nullptr;

	if (!pFnRDiff)
	{
		pFnRDiff = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RDIFF));
	}

	UObject_execRDiff_Parms RDiff_Parms;
	memcpy_s(&RDiff_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&RDiff_Parms.B, 0xC, &B, 0xC);

	pFnRDiff->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRDiff, &RDiff_Parms, nullptr);

	pFnRDiff->FunctionFlags |= 0x400;

	return RDiff_Parms.ReturnValue;
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Angle                          (CPF_Parm)

int UObject::NormalizeRotAxis(int Angle)
{
	static UFunction* pFnNormalizeRotAxis = nullptr;

	if (!pFnNormalizeRotAxis)
	{
		pFnNormalizeRotAxis = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NORMALIZEROTAXIS));
	}

	UObject_execNormalizeRotAxis_Parms NormalizeRotAxis_Parms;
	memcpy_s(&NormalizeRotAxis_Parms.Angle, 0x4, &Angle, 0x4);

	pFnNormalizeRotAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormalizeRotAxis, &NormalizeRotAxis_Parms, nullptr);

	pFnNormalizeRotAxis->FunctionFlags |= 0x400;

	return NormalizeRotAxis_Parms.ReturnValue;
};

// Function Core.Object.RInterpTo
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Current                        (CPF_Parm)
// struct FRotator                Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// unsigned long                  bConstantInterpSpeed           (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed)
{
	static UFunction* pFnRInterpTo = nullptr;

	if (!pFnRInterpTo)
	{
		pFnRInterpTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RINTERPTO));
	}

	UObject_execRInterpTo_Parms RInterpTo_Parms;
	memcpy_s(&RInterpTo_Parms.Current, 0xC, &Current, 0xC);
	memcpy_s(&RInterpTo_Parms.Target, 0xC, &Target, 0xC);
	memcpy_s(&RInterpTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&RInterpTo_Parms.InterpSpeed, 0x4, &InterpSpeed, 0x4);
	RInterpTo_Parms.bConstantInterpSpeed = bConstantInterpSpeed;

	pFnRInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRInterpTo, &RInterpTo_Parms, nullptr);

	pFnRInterpTo->FunctionFlags |= 0x400;

	return RInterpTo_Parms.ReturnValue;
};

// Function Core.Object.RTransform
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                R                              (CPF_Parm)
// struct FRotator                RBasis                         (CPF_Parm)

struct FRotator UObject::RTransform(struct FRotator R, struct FRotator RBasis)
{
	static UFunction* pFnRTransform = nullptr;

	if (!pFnRTransform)
	{
		pFnRTransform = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RTRANSFORM));
	}

	UObject_execRTransform_Parms RTransform_Parms;
	memcpy_s(&RTransform_Parms.R, 0xC, &R, 0xC);
	memcpy_s(&RTransform_Parms.RBasis, 0xC, &RBasis, 0xC);

	pFnRTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRTransform, &RTransform_Parms, nullptr);

	pFnRTransform->FunctionFlags |= 0x400;

	return RTransform_Parms.ReturnValue;
};

// Function Core.Object.RLerp
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// unsigned long                  bShortestPath                  (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RLerp(struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath)
{
	static UFunction* pFnRLerp = nullptr;

	if (!pFnRLerp)
	{
		pFnRLerp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RLERP));
	}

	UObject_execRLerp_Parms RLerp_Parms;
	memcpy_s(&RLerp_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&RLerp_Parms.B, 0xC, &B, 0xC);
	memcpy_s(&RLerp_Parms.Alpha, 0x4, &Alpha, 0x4);
	RLerp_Parms.bShortestPath = bShortestPath;

	pFnRLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRLerp, &RLerp_Parms, nullptr);

	pFnRLerp->FunctionFlags |= 0x400;

	return RLerp_Parms.ReturnValue;
};

// Function Core.Object.Normalize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rot                            (CPF_Parm)

struct FRotator UObject::Normalize(struct FRotator Rot)
{
	static UFunction* pFnNormalize = nullptr;

	if (!pFnNormalize)
	{
		pFnNormalize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NORMALIZE));
	}

	UObject_execNormalize_Parms Normalize_Parms;
	memcpy_s(&Normalize_Parms.Rot, 0xC, &Rot, 0xC);

	pFnNormalize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormalize, &Normalize_Parms, nullptr);

	pFnNormalize->FunctionFlags |= 0x400;

	return Normalize_Parms.ReturnValue;
};

// Function Core.Object.OrthoRotation
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)
// struct FVector                 Z                              (CPF_Parm)

struct FRotator UObject::OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z)
{
	static UFunction* pFnOrthoRotation = nullptr;

	if (!pFnOrthoRotation)
	{
		pFnOrthoRotation = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ORTHOROTATION));
	}

	UObject_execOrthoRotation_Parms OrthoRotation_Parms;
	memcpy_s(&OrthoRotation_Parms.X, 0xC, &X, 0xC);
	memcpy_s(&OrthoRotation_Parms.Y, 0xC, &Y, 0xC);
	memcpy_s(&OrthoRotation_Parms.Z, 0xC, &Z, 0xC);

	pFnOrthoRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOrthoRotation, &OrthoRotation_Parms, nullptr);

	pFnOrthoRotation->FunctionFlags |= 0x400;

	return OrthoRotation_Parms.ReturnValue;
};

// Function Core.Object.RotRand
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bRoll                          (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RotRand(unsigned long bRoll)
{
	static UFunction* pFnRotRand = nullptr;

	if (!pFnRotRand)
	{
		pFnRotRand = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ROTRAND));
	}

	UObject_execRotRand_Parms RotRand_Parms;
	RotRand_Parms.bRoll = bRoll;

	pFnRotRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRotRand, &RotRand_Parms, nullptr);

	pFnRotRand->FunctionFlags |= 0x400;

	return RotRand_Parms.ReturnValue;
};

// Function Core.Object.GetRotatorAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// int                            Axis                           (CPF_Parm)

struct FVector UObject::GetRotatorAxis(struct FRotator A, int Axis)
{
	static UFunction* pFnGetRotatorAxis = nullptr;

	if (!pFnGetRotatorAxis)
	{
		pFnGetRotatorAxis = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETROTATORAXIS));
	}

	UObject_execGetRotatorAxis_Parms GetRotatorAxis_Parms;
	memcpy_s(&GetRotatorAxis_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&GetRotatorAxis_Parms.Axis, 0x4, &Axis, 0x4);

	pFnGetRotatorAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetRotatorAxis, &GetRotatorAxis_Parms, nullptr);

	pFnGetRotatorAxis->FunctionFlags |= 0x400;

	return GetRotatorAxis_Parms.ReturnValue;
};

// Function Core.Object.GetUnAxes
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm | CPF_OutParm)

void UObject::GetUnAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z)
{
	static UFunction* pFnGetUnAxes = nullptr;

	if (!pFnGetUnAxes)
	{
		pFnGetUnAxes = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETUNAXES));
	}

	UObject_execGetUnAxes_Parms GetUnAxes_Parms;
	memcpy_s(&GetUnAxes_Parms.A, 0xC, &A, 0xC);

	pFnGetUnAxes->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUnAxes, &GetUnAxes_Parms, nullptr);

	pFnGetUnAxes->FunctionFlags |= 0x400;
	memcpy_s(&GetUnAxes_Parms.X, 0xC, &X, 0xC);
	memcpy_s(&GetUnAxes_Parms.Y, 0xC, &Y, 0xC);
	memcpy_s(&GetUnAxes_Parms.Z, 0xC, &Z, 0xC);
};

// Function Core.Object.GetAxes
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm | CPF_OutParm)

void UObject::GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z)
{
	static UFunction* pFnGetAxes = nullptr;

	if (!pFnGetAxes)
	{
		pFnGetAxes = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETAXES));
	}

	UObject_execGetAxes_Parms GetAxes_Parms;
	memcpy_s(&GetAxes_Parms.A, 0xC, &A, 0xC);

	pFnGetAxes->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAxes, &GetAxes_Parms, nullptr);

	pFnGetAxes->FunctionFlags |= 0x400;
	memcpy_s(&GetAxes_Parms.X, 0xC, &X, 0xC);
	memcpy_s(&GetAxes_Parms.Y, 0xC, &Y, 0xC);
	memcpy_s(&GetAxes_Parms.Z, 0xC, &Z, 0xC);
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::ClockwiseFrom_IntInt(int A, int B)
{
	static UFunction* pFnClockwiseFrom_IntInt = nullptr;

	if (!pFnClockwiseFrom_IntInt)
	{
		pFnClockwiseFrom_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLOCKWISEFROM_INTINT));
	}

	UObject_execClockwiseFrom_IntInt_Parms ClockwiseFrom_IntInt_Parms;
	memcpy_s(&ClockwiseFrom_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&ClockwiseFrom_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnClockwiseFrom_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Parms, nullptr);

	pFnClockwiseFrom_IntInt->FunctionFlags |= 0x400;

	return ClockwiseFrom_IntInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator& A)
{
	static UFunction* pFnSubtractEqual_RotatorRotator = nullptr;

	if (!pFnSubtractEqual_RotatorRotator)
	{
		pFnSubtractEqual_RotatorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_ROTATORROTATOR));
	}

	UObject_execSubtractEqual_RotatorRotator_Parms SubtractEqual_RotatorRotator_Parms;
	memcpy_s(&SubtractEqual_RotatorRotator_Parms.B, 0xC, &B, 0xC);

	pFnSubtractEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Parms, nullptr);

	pFnSubtractEqual_RotatorRotator->FunctionFlags |= 0x400;
	memcpy_s(&SubtractEqual_RotatorRotator_Parms.A, 0xC, &A, 0xC);

	return SubtractEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::AddEqual_RotatorRotator(struct FRotator B, struct FRotator& A)
{
	static UFunction* pFnAddEqual_RotatorRotator = nullptr;

	if (!pFnAddEqual_RotatorRotator)
	{
		pFnAddEqual_RotatorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDEQUAL_ROTATORROTATOR));
	}

	UObject_execAddEqual_RotatorRotator_Parms AddEqual_RotatorRotator_Parms;
	memcpy_s(&AddEqual_RotatorRotator_Parms.B, 0xC, &B, 0xC);

	pFnAddEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Parms, nullptr);

	pFnAddEqual_RotatorRotator->FunctionFlags |= 0x400;
	memcpy_s(&AddEqual_RotatorRotator_Parms.A, 0xC, &A, 0xC);

	return AddEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.Subtract_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Subtract_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnSubtract_RotatorRotator = nullptr;

	if (!pFnSubtract_RotatorRotator)
	{
		pFnSubtract_RotatorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_ROTATORROTATOR));
	}

	UObject_execSubtract_RotatorRotator_Parms Subtract_RotatorRotator_Parms;
	memcpy_s(&Subtract_RotatorRotator_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Subtract_RotatorRotator_Parms.B, 0xC, &B, 0xC);

	pFnSubtract_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_RotatorRotator, &Subtract_RotatorRotator_Parms, nullptr);

	pFnSubtract_RotatorRotator->FunctionFlags |= 0x400;

	return Subtract_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.Add_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Add_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnAdd_RotatorRotator = nullptr;

	if (!pFnAdd_RotatorRotator)
	{
		pFnAdd_RotatorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_ROTATORROTATOR));
	}

	UObject_execAdd_RotatorRotator_Parms Add_RotatorRotator_Parms;
	memcpy_s(&Add_RotatorRotator_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Add_RotatorRotator_Parms.B, 0xC, &B, 0xC);

	pFnAdd_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_RotatorRotator, &Add_RotatorRotator_Parms, nullptr);

	pFnAdd_RotatorRotator->FunctionFlags |= 0x400;

	return Add_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::DivideEqual_RotatorFloat(float B, struct FRotator& A)
{
	static UFunction* pFnDivideEqual_RotatorFloat = nullptr;

	if (!pFnDivideEqual_RotatorFloat)
	{
		pFnDivideEqual_RotatorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDEEQUAL_ROTATORFLOAT));
	}

	UObject_execDivideEqual_RotatorFloat_Parms DivideEqual_RotatorFloat_Parms;
	memcpy_s(&DivideEqual_RotatorFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivideEqual_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Parms, nullptr);

	pFnDivideEqual_RotatorFloat->FunctionFlags |= 0x400;
	memcpy_s(&DivideEqual_RotatorFloat_Parms.A, 0xC, &A, 0xC);

	return DivideEqual_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::MultiplyEqual_RotatorFloat(float B, struct FRotator& A)
{
	static UFunction* pFnMultiplyEqual_RotatorFloat = nullptr;

	if (!pFnMultiplyEqual_RotatorFloat)
	{
		pFnMultiplyEqual_RotatorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_ROTATORFLOAT));
	}

	UObject_execMultiplyEqual_RotatorFloat_Parms MultiplyEqual_RotatorFloat_Parms;
	memcpy_s(&MultiplyEqual_RotatorFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiplyEqual_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Parms, nullptr);

	pFnMultiplyEqual_RotatorFloat->FunctionFlags |= 0x400;
	memcpy_s(&MultiplyEqual_RotatorFloat_Parms.A, 0xC, &A, 0xC);

	return MultiplyEqual_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_RotatorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FRotator UObject::Divide_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* pFnDivide_RotatorFloat = nullptr;

	if (!pFnDivide_RotatorFloat)
	{
		pFnDivide_RotatorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDE_ROTATORFLOAT));
	}

	UObject_execDivide_RotatorFloat_Parms Divide_RotatorFloat_Parms;
	memcpy_s(&Divide_RotatorFloat_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Divide_RotatorFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivide_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_RotatorFloat, &Divide_RotatorFloat_Parms, nullptr);

	pFnDivide_RotatorFloat->FunctionFlags |= 0x400;

	return Divide_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Multiply_FloatRotator(float A, struct FRotator B)
{
	static UFunction* pFnMultiply_FloatRotator = nullptr;

	if (!pFnMultiply_FloatRotator)
	{
		pFnMultiply_FloatRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_FLOATROTATOR));
	}

	UObject_execMultiply_FloatRotator_Parms Multiply_FloatRotator_Parms;
	memcpy_s(&Multiply_FloatRotator_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatRotator_Parms.B, 0xC, &B, 0xC);

	pFnMultiply_FloatRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_FloatRotator, &Multiply_FloatRotator_Parms, nullptr);

	pFnMultiply_FloatRotator->FunctionFlags |= 0x400;

	return Multiply_FloatRotator_Parms.ReturnValue;
};

// Function Core.Object.Multiply_RotatorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FRotator UObject::Multiply_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* pFnMultiply_RotatorFloat = nullptr;

	if (!pFnMultiply_RotatorFloat)
	{
		pFnMultiply_RotatorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_ROTATORFLOAT));
	}

	UObject_execMultiply_RotatorFloat_Parms Multiply_RotatorFloat_Parms;
	memcpy_s(&Multiply_RotatorFloat_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Multiply_RotatorFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiply_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_RotatorFloat, &Multiply_RotatorFloat_Parms, nullptr);

	pFnMultiply_RotatorFloat->FunctionFlags |= 0x400;

	return Multiply_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

bool UObject::NotEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnNotEqual_RotatorRotator = nullptr;

	if (!pFnNotEqual_RotatorRotator)
	{
		pFnNotEqual_RotatorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_ROTATORROTATOR));
	}

	UObject_execNotEqual_RotatorRotator_Parms NotEqual_RotatorRotator_Parms;
	memcpy_s(&NotEqual_RotatorRotator_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&NotEqual_RotatorRotator_Parms.B, 0xC, &B, 0xC);

	pFnNotEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Parms, nullptr);

	pFnNotEqual_RotatorRotator->FunctionFlags |= 0x400;

	return NotEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

bool UObject::EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnEqualEqual_RotatorRotator = nullptr;

	if (!pFnEqualEqual_RotatorRotator)
	{
		pFnEqualEqual_RotatorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_ROTATORROTATOR));
	}

	UObject_execEqualEqual_RotatorRotator_Parms EqualEqual_RotatorRotator_Parms;
	memcpy_s(&EqualEqual_RotatorRotator_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&EqualEqual_RotatorRotator_Parms.B, 0xC, &B, 0xC);

	pFnEqualEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Parms, nullptr);

	pFnEqualEqual_RotatorRotator->FunctionFlags |= 0x400;

	return EqualEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.GetRadiansBetweenVectors
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 V0                             (CPF_Parm)
// struct FVector                 v1                             (CPF_Parm)

float UObject::GetRadiansBetweenVectors(struct FVector V0, struct FVector v1)
{
	static UFunction* pFnGetRadiansBetweenVectors = nullptr;

	if (!pFnGetRadiansBetweenVectors)
	{
		pFnGetRadiansBetweenVectors = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GETRADIANSBETWEENVECTORS));
	}

	UObject_execGetRadiansBetweenVectors_Parms GetRadiansBetweenVectors_Parms;
	memcpy_s(&GetRadiansBetweenVectors_Parms.V0, 0xC, &V0, 0xC);
	memcpy_s(&GetRadiansBetweenVectors_Parms.v1, 0xC, &v1, 0xC);

	this->ProcessEvent(pFnGetRadiansBetweenVectors, &GetRadiansBetweenVectors_Parms, nullptr);

	return GetRadiansBetweenVectors_Parms.ReturnValue;
};

// Function Core.Object.VClamp
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 Min                            (CPF_Parm)
// struct FVector                 Max                            (CPF_Parm)

struct FVector UObject::VClamp(struct FVector A, struct FVector Min, struct FVector Max)
{
	static UFunction* pFnVClamp = nullptr;

	if (!pFnVClamp)
	{
		pFnVClamp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VCLAMP));
	}

	UObject_execVClamp_Parms VClamp_Parms;
	memcpy_s(&VClamp_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&VClamp_Parms.Min, 0xC, &Min, 0xC);
	memcpy_s(&VClamp_Parms.Max, 0xC, &Max, 0xC);

	this->ProcessEvent(pFnVClamp, &VClamp_Parms, nullptr);

	return VClamp_Parms.ReturnValue;
};

// Function Core.Object.vect3d
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// float                          Z                              (CPF_Parm)

struct FVector UObject::vect3d(float X, float Y, float Z)
{
	static UFunction* pFnvect3d = nullptr;

	if (!pFnvect3d)
	{
		pFnvect3d = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VECT3D));
	}

	UObject_execvect3d_Parms vect3d_Parms;
	memcpy_s(&vect3d_Parms.X, 0x4, &X, 0x4);
	memcpy_s(&vect3d_Parms.Y, 0x4, &Y, 0x4);
	memcpy_s(&vect3d_Parms.Z, 0x4, &Z, 0x4);

	this->ProcessEvent(pFnvect3d, &vect3d_Parms, nullptr);

	return vect3d_Parms.ReturnValue;
};

// Function Core.Object.InCylinder
// [0x00824103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FRotator                Dir                            (CPF_Parm)
// float                          Width                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// unsigned long                  bIgnoreZ                       (CPF_OptionalParm | CPF_Parm)

bool UObject::InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ)
{
	static UFunction* pFnInCylinder = nullptr;

	if (!pFnInCylinder)
	{
		pFnInCylinder = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_INCYLINDER));
	}

	UObject_execInCylinder_Parms InCylinder_Parms;
	memcpy_s(&InCylinder_Parms.Origin, 0xC, &Origin, 0xC);
	memcpy_s(&InCylinder_Parms.Dir, 0xC, &Dir, 0xC);
	memcpy_s(&InCylinder_Parms.Width, 0x4, &Width, 0x4);
	memcpy_s(&InCylinder_Parms.A, 0xC, &A, 0xC);
	InCylinder_Parms.bIgnoreZ = bIgnoreZ;

	this->ProcessEvent(pFnInCylinder, &InCylinder_Parms, nullptr);

	return InCylinder_Parms.ReturnValue;
};

// Function Core.Object.NoZDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

float UObject::NoZDot(struct FVector A, struct FVector B)
{
	static UFunction* pFnNoZDot = nullptr;

	if (!pFnNoZDot)
	{
		pFnNoZDot = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOZDOT));
	}

	UObject_execNoZDot_Parms NoZDot_Parms;
	memcpy_s(&NoZDot_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&NoZDot_Parms.B, 0xC, &B, 0xC);

	pFnNoZDot->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNoZDot, &NoZDot_Parms, nullptr);

	pFnNoZDot->FunctionFlags |= 0x400;

	return NoZDot_Parms.ReturnValue;
};

// Function Core.Object.ClampLength
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 V                              (CPF_Parm)
// float                          MaxLength                      (CPF_Parm)

struct FVector UObject::ClampLength(struct FVector V, float MaxLength)
{
	static UFunction* pFnClampLength = nullptr;

	if (!pFnClampLength)
	{
		pFnClampLength = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLAMPLENGTH));
	}

	UObject_execClampLength_Parms ClampLength_Parms;
	memcpy_s(&ClampLength_Parms.V, 0xC, &V, 0xC);
	memcpy_s(&ClampLength_Parms.MaxLength, 0x4, &MaxLength, 0x4);

	pFnClampLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClampLength, &ClampLength_Parms, nullptr);

	pFnClampLength->FunctionFlags |= 0x400;

	return ClampLength_Parms.ReturnValue;
};

// Function Core.Object.VInterpConstantTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Current                        (CPF_Parm)
// struct FVector                 Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

struct FVector UObject::VInterpConstantTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnVInterpConstantTo = nullptr;

	if (!pFnVInterpConstantTo)
	{
		pFnVInterpConstantTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VINTERPCONSTANTTO));
	}

	UObject_execVInterpConstantTo_Parms VInterpConstantTo_Parms;
	memcpy_s(&VInterpConstantTo_Parms.Current, 0xC, &Current, 0xC);
	memcpy_s(&VInterpConstantTo_Parms.Target, 0xC, &Target, 0xC);
	memcpy_s(&VInterpConstantTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&VInterpConstantTo_Parms.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	pFnVInterpConstantTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVInterpConstantTo, &VInterpConstantTo_Parms, nullptr);

	pFnVInterpConstantTo->FunctionFlags |= 0x400;

	return VInterpConstantTo_Parms.ReturnValue;
};

// Function Core.Object.VInterpTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Current                        (CPF_Parm)
// struct FVector                 Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

struct FVector UObject::VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnVInterpTo = nullptr;

	if (!pFnVInterpTo)
	{
		pFnVInterpTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VINTERPTO));
	}

	UObject_execVInterpTo_Parms VInterpTo_Parms;
	memcpy_s(&VInterpTo_Parms.Current, 0xC, &Current, 0xC);
	memcpy_s(&VInterpTo_Parms.Target, 0xC, &Target, 0xC);
	memcpy_s(&VInterpTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&VInterpTo_Parms.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	pFnVInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVInterpTo, &VInterpTo_Parms, nullptr);

	pFnVInterpTo->FunctionFlags |= 0x400;

	return VInterpTo_Parms.ReturnValue;
};

// Function Core.Object.Construct
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventConstruct()
{
	static UFunction* pFnConstruct = nullptr;

	if (!pFnConstruct)
	{
		pFnConstruct = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CONSTRUCT));
	}

	UObject_eventConstruct_Parms Construct_Parms;

	this->ProcessEvent(pFnConstruct, &Construct_Parms, nullptr);
};

// Function Core.Object.ProjectOnToPlane
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 InVector                       (CPF_Parm)
// struct FVector                 InNormal                       (CPF_Parm)
// float                          OverBounce                     (CPF_OptionalParm | CPF_Parm)

struct FVector UObject::ProjectOnToPlane(struct FVector InVector, struct FVector InNormal, float OverBounce)
{
	static UFunction* pFnProjectOnToPlane = nullptr;

	if (!pFnProjectOnToPlane)
	{
		pFnProjectOnToPlane = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROJECTONTOPLANE));
	}

	UObject_execProjectOnToPlane_Parms ProjectOnToPlane_Parms;
	memcpy_s(&ProjectOnToPlane_Parms.InVector, 0xC, &InVector, 0xC);
	memcpy_s(&ProjectOnToPlane_Parms.InNormal, 0xC, &InNormal, 0xC);
	memcpy_s(&ProjectOnToPlane_Parms.OverBounce, 0x4, &OverBounce, 0x4);

	pFnProjectOnToPlane->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProjectOnToPlane, &ProjectOnToPlane_Parms, nullptr);

	pFnProjectOnToPlane->FunctionFlags |= 0x400;

	return ProjectOnToPlane_Parms.ReturnValue;
};

// Function Core.Object.IsZero
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

bool UObject::IsZero(struct FVector A)
{
	static UFunction* pFnIsZero = nullptr;

	if (!pFnIsZero)
	{
		pFnIsZero = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ISZERO));
	}

	UObject_execIsZero_Parms IsZero_Parms;
	memcpy_s(&IsZero_Parms.A, 0xC, &A, 0xC);

	pFnIsZero->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsZero, &IsZero_Parms, nullptr);

	pFnIsZero->FunctionFlags |= 0x400;

	return IsZero_Parms.ReturnValue;
};

// Function Core.Object.ProjectOnTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)

struct FVector UObject::ProjectOnTo(struct FVector X, struct FVector Y)
{
	static UFunction* pFnProjectOnTo = nullptr;

	if (!pFnProjectOnTo)
	{
		pFnProjectOnTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PROJECTONTO));
	}

	UObject_execProjectOnTo_Parms ProjectOnTo_Parms;
	memcpy_s(&ProjectOnTo_Parms.X, 0xC, &X, 0xC);
	memcpy_s(&ProjectOnTo_Parms.Y, 0xC, &Y, 0xC);

	pFnProjectOnTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProjectOnTo, &ProjectOnTo_Parms, nullptr);

	pFnProjectOnTo->FunctionFlags |= 0x400;

	return ProjectOnTo_Parms.ReturnValue;
};

// Function Core.Object.MirrorVectorByNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 InVect                         (CPF_Parm)
// struct FVector                 InNormal                       (CPF_Parm)

struct FVector UObject::MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal)
{
	static UFunction* pFnMirrorVectorByNormal = nullptr;

	if (!pFnMirrorVectorByNormal)
	{
		pFnMirrorVectorByNormal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MIRRORVECTORBYNORMAL));
	}

	UObject_execMirrorVectorByNormal_Parms MirrorVectorByNormal_Parms;
	memcpy_s(&MirrorVectorByNormal_Parms.InVect, 0xC, &InVect, 0xC);
	memcpy_s(&MirrorVectorByNormal_Parms.InNormal, 0xC, &InNormal, 0xC);

	pFnMirrorVectorByNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMirrorVectorByNormal, &MirrorVectorByNormal_Parms, nullptr);

	pFnMirrorVectorByNormal->FunctionFlags |= 0x400;

	return MirrorVectorByNormal_Parms.ReturnValue;
};

// Function Core.Object.VRandCone2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)
// float                          HorizontalConeHalfAngleRadians (CPF_Parm)
// float                          VerticalConeHalfAngleRadians   (CPF_Parm)

struct FVector UObject::VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static UFunction* pFnVRandCone2 = nullptr;

	if (!pFnVRandCone2)
	{
		pFnVRandCone2 = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VRANDCONE2));
	}

	UObject_execVRandCone2_Parms VRandCone2_Parms;
	memcpy_s(&VRandCone2_Parms.Dir, 0xC, &Dir, 0xC);
	memcpy_s(&VRandCone2_Parms.HorizontalConeHalfAngleRadians, 0x4, &HorizontalConeHalfAngleRadians, 0x4);
	memcpy_s(&VRandCone2_Parms.VerticalConeHalfAngleRadians, 0x4, &VerticalConeHalfAngleRadians, 0x4);

	pFnVRandCone2->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVRandCone2, &VRandCone2_Parms, nullptr);

	pFnVRandCone2->FunctionFlags |= 0x400;

	return VRandCone2_Parms.ReturnValue;
};

// Function Core.Object.VRandCone
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)
// float                          ConeHalfAngleRadians           (CPF_Parm)

struct FVector UObject::VRandCone(struct FVector Dir, float ConeHalfAngleRadians)
{
	static UFunction* pFnVRandCone = nullptr;

	if (!pFnVRandCone)
	{
		pFnVRandCone = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VRANDCONE));
	}

	UObject_execVRandCone_Parms VRandCone_Parms;
	memcpy_s(&VRandCone_Parms.Dir, 0xC, &Dir, 0xC);
	memcpy_s(&VRandCone_Parms.ConeHalfAngleRadians, 0x4, &ConeHalfAngleRadians, 0x4);

	pFnVRandCone->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVRandCone, &VRandCone_Parms, nullptr);

	pFnVRandCone->FunctionFlags |= 0x400;

	return VRandCone_Parms.ReturnValue;
};

// Function Core.Object.VRand
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UObject::VRand()
{
	static UFunction* pFnVRand = nullptr;

	if (!pFnVRand)
	{
		pFnVRand = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VRAND));
	}

	UObject_execVRand_Parms VRand_Parms;

	pFnVRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVRand, &VRand_Parms, nullptr);

	pFnVRand->FunctionFlags |= 0x400;

	return VRand_Parms.ReturnValue;
};

// Function Core.Object.VLerp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FVector UObject::VLerp(struct FVector A, struct FVector B, float Alpha)
{
	static UFunction* pFnVLerp = nullptr;

	if (!pFnVLerp)
	{
		pFnVLerp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VLERP));
	}

	UObject_execVLerp_Parms VLerp_Parms;
	memcpy_s(&VLerp_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&VLerp_Parms.B, 0xC, &B, 0xC);
	memcpy_s(&VLerp_Parms.Alpha, 0x4, &Alpha, 0x4);

	pFnVLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVLerp, &VLerp_Parms, nullptr);

	pFnVLerp->FunctionFlags |= 0x400;

	return VLerp_Parms.ReturnValue;
};

// Function Core.Object.Normal2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Normal2D(struct FVector A)
{
	static UFunction* pFnNormal2D = nullptr;

	if (!pFnNormal2D)
	{
		pFnNormal2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NORMAL2D));
	}

	UObject_execNormal2D_Parms Normal2D_Parms;
	memcpy_s(&Normal2D_Parms.A, 0xC, &A, 0xC);

	pFnNormal2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormal2D, &Normal2D_Parms, nullptr);

	pFnNormal2D->FunctionFlags |= 0x400;

	return Normal2D_Parms.ReturnValue;
};

// Function Core.Object.Normal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Normal(struct FVector A)
{
	static UFunction* pFnNormal = nullptr;

	if (!pFnNormal)
	{
		pFnNormal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NORMAL));
	}

	UObject_execNormal_Parms Normal_Parms;
	memcpy_s(&Normal_Parms.A, 0xC, &A, 0xC);

	pFnNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormal, &Normal_Parms, nullptr);

	pFnNormal->FunctionFlags |= 0x400;

	return Normal_Parms.ReturnValue;
};

// Function Core.Object.VSizeSq2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSizeSq2D(struct FVector A)
{
	static UFunction* pFnVSizeSq2D = nullptr;

	if (!pFnVSizeSq2D)
	{
		pFnVSizeSq2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VSIZESQ2D));
	}

	UObject_execVSizeSq2D_Parms VSizeSq2D_Parms;
	memcpy_s(&VSizeSq2D_Parms.A, 0xC, &A, 0xC);

	pFnVSizeSq2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSizeSq2D, &VSizeSq2D_Parms, nullptr);

	pFnVSizeSq2D->FunctionFlags |= 0x400;

	return VSizeSq2D_Parms.ReturnValue;
};

// Function Core.Object.VSizeSq
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSizeSq(struct FVector A)
{
	static UFunction* pFnVSizeSq = nullptr;

	if (!pFnVSizeSq)
	{
		pFnVSizeSq = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VSIZESQ));
	}

	UObject_execVSizeSq_Parms VSizeSq_Parms;
	memcpy_s(&VSizeSq_Parms.A, 0xC, &A, 0xC);

	pFnVSizeSq->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSizeSq, &VSizeSq_Parms, nullptr);

	pFnVSizeSq->FunctionFlags |= 0x400;

	return VSizeSq_Parms.ReturnValue;
};

// Function Core.Object.VSize2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSize2D(struct FVector A)
{
	static UFunction* pFnVSize2D = nullptr;

	if (!pFnVSize2D)
	{
		pFnVSize2D = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VSIZE2D));
	}

	UObject_execVSize2D_Parms VSize2D_Parms;
	memcpy_s(&VSize2D_Parms.A, 0xC, &A, 0xC);

	pFnVSize2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSize2D, &VSize2D_Parms, nullptr);

	pFnVSize2D->FunctionFlags |= 0x400;

	return VSize2D_Parms.ReturnValue;
};

// Function Core.Object.VSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSize(struct FVector A)
{
	static UFunction* pFnVSize = nullptr;

	if (!pFnVSize)
	{
		pFnVSize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_VSIZE));
	}

	UObject_execVSize_Parms VSize_Parms;
	memcpy_s(&VSize_Parms.A, 0xC, &A, 0xC);

	pFnVSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSize, &VSize_Parms, nullptr);

	pFnVSize->FunctionFlags |= 0x400;

	return VSize_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_VectorVector
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::SubtractEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* pFnSubtractEqual_VectorVector = nullptr;

	if (!pFnSubtractEqual_VectorVector)
	{
		pFnSubtractEqual_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_VECTORVECTOR));
	}

	UObject_execSubtractEqual_VectorVector_Parms SubtractEqual_VectorVector_Parms;
	memcpy_s(&SubtractEqual_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnSubtractEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Parms, nullptr);

	pFnSubtractEqual_VectorVector->FunctionFlags |= 0x400;
	memcpy_s(&SubtractEqual_VectorVector_Parms.A, 0xC, &A, 0xC);

	return SubtractEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_VectorVector
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::AddEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* pFnAddEqual_VectorVector = nullptr;

	if (!pFnAddEqual_VectorVector)
	{
		pFnAddEqual_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDEQUAL_VECTORVECTOR));
	}

	UObject_execAddEqual_VectorVector_Parms AddEqual_VectorVector_Parms;
	memcpy_s(&AddEqual_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnAddEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_VectorVector, &AddEqual_VectorVector_Parms, nullptr);

	pFnAddEqual_VectorVector->FunctionFlags |= 0x400;
	memcpy_s(&AddEqual_VectorVector_Parms.A, 0xC, &A, 0xC);

	return AddEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_VectorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::DivideEqual_VectorFloat(float B, struct FVector& A)
{
	static UFunction* pFnDivideEqual_VectorFloat = nullptr;

	if (!pFnDivideEqual_VectorFloat)
	{
		pFnDivideEqual_VectorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDEEQUAL_VECTORFLOAT));
	}

	UObject_execDivideEqual_VectorFloat_Parms DivideEqual_VectorFloat_Parms;
	memcpy_s(&DivideEqual_VectorFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivideEqual_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Parms, nullptr);

	pFnDivideEqual_VectorFloat->FunctionFlags |= 0x400;
	memcpy_s(&DivideEqual_VectorFloat_Parms.A, 0xC, &A, 0xC);

	return DivideEqual_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::MultiplyEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* pFnMultiplyEqual_VectorVector = nullptr;

	if (!pFnMultiplyEqual_VectorVector)
	{
		pFnMultiplyEqual_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_VECTORVECTOR));
	}

	UObject_execMultiplyEqual_VectorVector_Parms MultiplyEqual_VectorVector_Parms;
	memcpy_s(&MultiplyEqual_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnMultiplyEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Parms, nullptr);

	pFnMultiplyEqual_VectorVector->FunctionFlags |= 0x400;
	memcpy_s(&MultiplyEqual_VectorVector_Parms.A, 0xC, &A, 0xC);

	return MultiplyEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::MultiplyEqual_VectorFloat(float B, struct FVector& A)
{
	static UFunction* pFnMultiplyEqual_VectorFloat = nullptr;

	if (!pFnMultiplyEqual_VectorFloat)
	{
		pFnMultiplyEqual_VectorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_VECTORFLOAT));
	}

	UObject_execMultiplyEqual_VectorFloat_Parms MultiplyEqual_VectorFloat_Parms;
	memcpy_s(&MultiplyEqual_VectorFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiplyEqual_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Parms, nullptr);

	pFnMultiplyEqual_VectorFloat->FunctionFlags |= 0x400;
	memcpy_s(&MultiplyEqual_VectorFloat_Parms.A, 0xC, &A, 0xC);

	return MultiplyEqual_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Cross_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Cross_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnCross_VectorVector = nullptr;

	if (!pFnCross_VectorVector)
	{
		pFnCross_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CROSS_VECTORVECTOR));
	}

	UObject_execCross_VectorVector_Parms Cross_VectorVector_Parms;
	memcpy_s(&Cross_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Cross_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnCross_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCross_VectorVector, &Cross_VectorVector_Parms, nullptr);

	pFnCross_VectorVector->FunctionFlags |= 0x400;

	return Cross_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Dot_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

float UObject::Dot_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnDot_VectorVector = nullptr;

	if (!pFnDot_VectorVector)
	{
		pFnDot_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DOT_VECTORVECTOR));
	}

	UObject_execDot_VectorVector_Parms Dot_VectorVector_Parms;
	memcpy_s(&Dot_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Dot_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnDot_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDot_VectorVector, &Dot_VectorVector_Parms, nullptr);

	pFnDot_VectorVector->FunctionFlags |= 0x400;

	return Dot_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

bool UObject::NotEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnNotEqual_VectorVector = nullptr;

	if (!pFnNotEqual_VectorVector)
	{
		pFnNotEqual_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_VECTORVECTOR));
	}

	UObject_execNotEqual_VectorVector_Parms NotEqual_VectorVector_Parms;
	memcpy_s(&NotEqual_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&NotEqual_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnNotEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_VectorVector, &NotEqual_VectorVector_Parms, nullptr);

	pFnNotEqual_VectorVector->FunctionFlags |= 0x400;

	return NotEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

bool UObject::EqualEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnEqualEqual_VectorVector = nullptr;

	if (!pFnEqualEqual_VectorVector)
	{
		pFnEqualEqual_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_VECTORVECTOR));
	}

	UObject_execEqualEqual_VectorVector_Parms EqualEqual_VectorVector_Parms;
	memcpy_s(&EqualEqual_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&EqualEqual_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnEqualEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_VectorVector, &EqualEqual_VectorVector_Parms, nullptr);

	pFnEqualEqual_VectorVector->FunctionFlags |= 0x400;

	return EqualEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FVector UObject::GreaterGreater_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* pFnGreaterGreater_VectorRotator = nullptr;

	if (!pFnGreaterGreater_VectorRotator)
	{
		pFnGreaterGreater_VectorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATERGREATER_VECTORROTATOR));
	}

	UObject_execGreaterGreater_VectorRotator_Parms GreaterGreater_VectorRotator_Parms;
	memcpy_s(&GreaterGreater_VectorRotator_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&GreaterGreater_VectorRotator_Parms.B, 0xC, &B, 0xC);

	pFnGreaterGreater_VectorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Parms, nullptr);

	pFnGreaterGreater_VectorRotator->FunctionFlags |= 0x400;

	return GreaterGreater_VectorRotator_Parms.ReturnValue;
};

// Function Core.Object.LessLess_VectorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FVector UObject::LessLess_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* pFnLessLess_VectorRotator = nullptr;

	if (!pFnLessLess_VectorRotator)
	{
		pFnLessLess_VectorRotator = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESSLESS_VECTORROTATOR));
	}

	UObject_execLessLess_VectorRotator_Parms LessLess_VectorRotator_Parms;
	memcpy_s(&LessLess_VectorRotator_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&LessLess_VectorRotator_Parms.B, 0xC, &B, 0xC);

	pFnLessLess_VectorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessLess_VectorRotator, &LessLess_VectorRotator_Parms, nullptr);

	pFnLessLess_VectorRotator->FunctionFlags |= 0x400;

	return LessLess_VectorRotator_Parms.ReturnValue;
};

// Function Core.Object.Subtract_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Subtract_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnSubtract_VectorVector = nullptr;

	if (!pFnSubtract_VectorVector)
	{
		pFnSubtract_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_VECTORVECTOR));
	}

	UObject_execSubtract_VectorVector_Parms Subtract_VectorVector_Parms;
	memcpy_s(&Subtract_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Subtract_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnSubtract_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_VectorVector, &Subtract_VectorVector_Parms, nullptr);

	pFnSubtract_VectorVector->FunctionFlags |= 0x400;

	return Subtract_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Add_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Add_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnAdd_VectorVector = nullptr;

	if (!pFnAdd_VectorVector)
	{
		pFnAdd_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_VECTORVECTOR));
	}

	UObject_execAdd_VectorVector_Parms Add_VectorVector_Parms;
	memcpy_s(&Add_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Add_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnAdd_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_VectorVector, &Add_VectorVector_Parms, nullptr);

	pFnAdd_VectorVector->FunctionFlags |= 0x400;

	return Add_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Divide_VectorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector UObject::Divide_VectorFloat(struct FVector A, float B)
{
	static UFunction* pFnDivide_VectorFloat = nullptr;

	if (!pFnDivide_VectorFloat)
	{
		pFnDivide_VectorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDE_VECTORFLOAT));
	}

	UObject_execDivide_VectorFloat_Parms Divide_VectorFloat_Parms;
	memcpy_s(&Divide_VectorFloat_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Divide_VectorFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivide_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_VectorFloat, &Divide_VectorFloat_Parms, nullptr);

	pFnDivide_VectorFloat->FunctionFlags |= 0x400;

	return Divide_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Multiply_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnMultiply_VectorVector = nullptr;

	if (!pFnMultiply_VectorVector)
	{
		pFnMultiply_VectorVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_VECTORVECTOR));
	}

	UObject_execMultiply_VectorVector_Parms Multiply_VectorVector_Parms;
	memcpy_s(&Multiply_VectorVector_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Multiply_VectorVector_Parms.B, 0xC, &B, 0xC);

	pFnMultiply_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_VectorVector, &Multiply_VectorVector_Parms, nullptr);

	pFnMultiply_VectorVector->FunctionFlags |= 0x400;

	return Multiply_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Multiply_FloatVector(float A, struct FVector B)
{
	static UFunction* pFnMultiply_FloatVector = nullptr;

	if (!pFnMultiply_FloatVector)
	{
		pFnMultiply_FloatVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_FLOATVECTOR));
	}

	UObject_execMultiply_FloatVector_Parms Multiply_FloatVector_Parms;
	memcpy_s(&Multiply_FloatVector_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatVector_Parms.B, 0xC, &B, 0xC);

	pFnMultiply_FloatVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_FloatVector, &Multiply_FloatVector_Parms, nullptr);

	pFnMultiply_FloatVector->FunctionFlags |= 0x400;

	return Multiply_FloatVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_VectorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector UObject::Multiply_VectorFloat(struct FVector A, float B)
{
	static UFunction* pFnMultiply_VectorFloat = nullptr;

	if (!pFnMultiply_VectorFloat)
	{
		pFnMultiply_VectorFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_VECTORFLOAT));
	}

	UObject_execMultiply_VectorFloat_Parms Multiply_VectorFloat_Parms;
	memcpy_s(&Multiply_VectorFloat_Parms.A, 0xC, &A, 0xC);
	memcpy_s(&Multiply_VectorFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiply_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_VectorFloat, &Multiply_VectorFloat_Parms, nullptr);

	pFnMultiply_VectorFloat->FunctionFlags |= 0x400;

	return Multiply_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreVector
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Subtract_PreVector(struct FVector A)
{
	static UFunction* pFnSubtract_PreVector = nullptr;

	if (!pFnSubtract_PreVector)
	{
		pFnSubtract_PreVector = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_PREVECTOR));
	}

	UObject_execSubtract_PreVector_Parms Subtract_PreVector_Parms;
	memcpy_s(&Subtract_PreVector_Parms.A, 0xC, &A, 0xC);

	pFnSubtract_PreVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_PreVector, &Subtract_PreVector_Parms, nullptr);

	pFnSubtract_PreVector->FunctionFlags |= 0x400;

	return Subtract_PreVector_Parms.ReturnValue;
};

// Function Core.Object.FInterpConstantTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

float UObject::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnFInterpConstantTo = nullptr;

	if (!pFnFInterpConstantTo)
	{
		pFnFInterpConstantTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINTERPCONSTANTTO));
	}

	UObject_execFInterpConstantTo_Parms FInterpConstantTo_Parms;
	memcpy_s(&FInterpConstantTo_Parms.Current, 0x4, &Current, 0x4);
	memcpy_s(&FInterpConstantTo_Parms.Target, 0x4, &Target, 0x4);
	memcpy_s(&FInterpConstantTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&FInterpConstantTo_Parms.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	pFnFInterpConstantTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpConstantTo, &FInterpConstantTo_Parms, nullptr);

	pFnFInterpConstantTo->FunctionFlags |= 0x400;

	return FInterpConstantTo_Parms.ReturnValue;
};

// Function Core.Object.FInterpTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

float UObject::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnFInterpTo = nullptr;

	if (!pFnFInterpTo)
	{
		pFnFInterpTo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINTERPTO));
	}

	UObject_execFInterpTo_Parms FInterpTo_Parms;
	memcpy_s(&FInterpTo_Parms.Current, 0x4, &Current, 0x4);
	memcpy_s(&FInterpTo_Parms.Target, 0x4, &Target, 0x4);
	memcpy_s(&FInterpTo_Parms.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&FInterpTo_Parms.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	pFnFInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpTo, &FInterpTo_Parms, nullptr);

	pFnFInterpTo->FunctionFlags |= 0x400;

	return FInterpTo_Parms.ReturnValue;
};

// Function Core.Object.FPctByRange
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Value                          (CPF_Parm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)

float UObject::FPctByRange(float Value, float InMin, float InMax)
{
	static UFunction* pFnFPctByRange = nullptr;

	if (!pFnFPctByRange)
	{
		pFnFPctByRange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FPCTBYRANGE));
	}

	UObject_execFPctByRange_Parms FPctByRange_Parms;
	memcpy_s(&FPctByRange_Parms.Value, 0x4, &Value, 0x4);
	memcpy_s(&FPctByRange_Parms.InMin, 0x4, &InMin, 0x4);
	memcpy_s(&FPctByRange_Parms.InMax, 0x4, &InMax, 0x4);

	this->ProcessEvent(pFnFPctByRange, &FPctByRange_Parms, nullptr);

	return FPctByRange_Parms.ReturnValue;
};

// Function Core.Object.RandSign
// [0x00026003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Value                          (CPF_OptionalParm | CPF_Parm)

float UObject::RandSign(float Value)
{
	static UFunction* pFnRandSign = nullptr;

	if (!pFnRandSign)
	{
		pFnRandSign = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RANDSIGN));
	}

	UObject_execRandSign_Parms RandSign_Parms;
	memcpy_s(&RandSign_Parms.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(pFnRandSign, &RandSign_Parms, nullptr);

	return RandSign_Parms.ReturnValue;
};

// Function Core.Object.CalculateGravityPosition
// [0x00026003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Location                       (CPF_Parm)
// struct FVector                 Velocity                       (CPF_Parm)
// float                          Gravity                        (CPF_Parm)
// float                          Time                           (CPF_Parm)
// struct FVector                 GravityDirection               (CPF_OptionalParm | CPF_Parm)

struct FVector UObject::CalculateGravityPosition(struct FVector Location, struct FVector Velocity, float Gravity, float Time, struct FVector GravityDirection)
{
	static UFunction* pFnCalculateGravityPosition = nullptr;

	if (!pFnCalculateGravityPosition)
	{
		pFnCalculateGravityPosition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CALCULATEGRAVITYPOSITION));
	}

	UObject_execCalculateGravityPosition_Parms CalculateGravityPosition_Parms;
	memcpy_s(&CalculateGravityPosition_Parms.Location, 0xC, &Location, 0xC);
	memcpy_s(&CalculateGravityPosition_Parms.Velocity, 0xC, &Velocity, 0xC);
	memcpy_s(&CalculateGravityPosition_Parms.Gravity, 0x4, &Gravity, 0x4);
	memcpy_s(&CalculateGravityPosition_Parms.Time, 0x4, &Time, 0x4);
	memcpy_s(&CalculateGravityPosition_Parms.GravityDirection, 0xC, &GravityDirection, 0xC);

	this->ProcessEvent(pFnCalculateGravityPosition, &CalculateGravityPosition_Parms, nullptr);

	return CalculateGravityPosition_Parms.ReturnValue;
};

// Function Core.Object.RandRange
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)

float UObject::RandRange(float InMin, float InMax)
{
	static UFunction* pFnRandRange = nullptr;

	if (!pFnRandRange)
	{
		pFnRandRange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RANDRANGE));
	}

	UObject_execRandRange_Parms RandRange_Parms;
	memcpy_s(&RandRange_Parms.InMin, 0x4, &InMin, 0x4);
	memcpy_s(&RandRange_Parms.InMax, 0x4, &InMax, 0x4);

	this->ProcessEvent(pFnRandRange, &RandRange_Parms, nullptr);

	return RandRange_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* pFnFInterpEaseInOut = nullptr;

	if (!pFnFInterpEaseInOut)
	{
		pFnFInterpEaseInOut = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINTERPEASEINOUT));
	}

	UObject_execFInterpEaseInOut_Parms FInterpEaseInOut_Parms;
	memcpy_s(&FInterpEaseInOut_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&FInterpEaseInOut_Parms.B, 0x4, &B, 0x4);
	memcpy_s(&FInterpEaseInOut_Parms.Alpha, 0x4, &Alpha, 0x4);
	memcpy_s(&FInterpEaseInOut_Parms.Exp, 0x4, &Exp, 0x4);

	pFnFInterpEaseInOut->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpEaseInOut, &FInterpEaseInOut_Parms, nullptr);

	pFnFInterpEaseInOut->FunctionFlags |= 0x400;

	return FInterpEaseInOut_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseOut
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* pFnFInterpEaseOut = nullptr;

	if (!pFnFInterpEaseOut)
	{
		pFnFInterpEaseOut = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINTERPEASEOUT));
	}

	UObject_execFInterpEaseOut_Parms FInterpEaseOut_Parms;
	memcpy_s(&FInterpEaseOut_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&FInterpEaseOut_Parms.B, 0x4, &B, 0x4);
	memcpy_s(&FInterpEaseOut_Parms.Alpha, 0x4, &Alpha, 0x4);
	memcpy_s(&FInterpEaseOut_Parms.Exp, 0x4, &Exp, 0x4);

	pFnFInterpEaseOut->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpEaseOut, &FInterpEaseOut_Parms, nullptr);

	pFnFInterpEaseOut->FunctionFlags |= 0x400;

	return FInterpEaseOut_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseIn
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static UFunction* pFnFInterpEaseIn = nullptr;

	if (!pFnFInterpEaseIn)
	{
		pFnFInterpEaseIn = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FINTERPEASEIN));
	}

	UObject_execFInterpEaseIn_Parms FInterpEaseIn_Parms;
	memcpy_s(&FInterpEaseIn_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&FInterpEaseIn_Parms.B, 0x4, &B, 0x4);
	memcpy_s(&FInterpEaseIn_Parms.Alpha, 0x4, &Alpha, 0x4);
	memcpy_s(&FInterpEaseIn_Parms.Exp, 0x4, &Exp, 0x4);

	pFnFInterpEaseIn->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpEaseIn, &FInterpEaseIn_Parms, nullptr);

	pFnFInterpEaseIn->FunctionFlags |= 0x400;

	return FInterpEaseIn_Parms.ReturnValue;
};

// Function Core.Object.FCubicInterp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          P0                             (CPF_Parm)
// float                          T0                             (CPF_Parm)
// float                          P1                             (CPF_Parm)
// float                          T1                             (CPF_Parm)
// float                          A                              (CPF_Parm)

float UObject::FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static UFunction* pFnFCubicInterp = nullptr;

	if (!pFnFCubicInterp)
	{
		pFnFCubicInterp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FCUBICINTERP));
	}

	UObject_execFCubicInterp_Parms FCubicInterp_Parms;
	memcpy_s(&FCubicInterp_Parms.P0, 0x4, &P0, 0x4);
	memcpy_s(&FCubicInterp_Parms.T0, 0x4, &T0, 0x4);
	memcpy_s(&FCubicInterp_Parms.P1, 0x4, &P1, 0x4);
	memcpy_s(&FCubicInterp_Parms.T1, 0x4, &T1, 0x4);
	memcpy_s(&FCubicInterp_Parms.A, 0x4, &A, 0x4);

	pFnFCubicInterp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFCubicInterp, &FCubicInterp_Parms, nullptr);

	pFnFCubicInterp->FunctionFlags |= 0x400;

	return FCubicInterp_Parms.ReturnValue;
};

// Function Core.Object.FloorLog2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Value                          (CPF_Parm)

int UObject::FloorLog2(int Value)
{
	static UFunction* pFnFloorLog2 = nullptr;

	if (!pFnFloorLog2)
	{
		pFnFloorLog2 = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FLOORLOG2));
	}

	UObject_execFloorLog2_Parms FloorLog2_Parms;
	memcpy_s(&FloorLog2_Parms.Value, 0x4, &Value, 0x4);

	pFnFloorLog2->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFloorLog2, &FloorLog2_Parms, nullptr);

	pFnFloorLog2->FunctionFlags |= 0x400;

	return FloorLog2_Parms.ReturnValue;
};

// Function Core.Object.FCeil
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int UObject::FCeil(float A)
{
	static UFunction* pFnFCeil = nullptr;

	if (!pFnFCeil)
	{
		pFnFCeil = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FCEIL));
	}

	UObject_execFCeil_Parms FCeil_Parms;
	memcpy_s(&FCeil_Parms.A, 0x4, &A, 0x4);

	pFnFCeil->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFCeil, &FCeil_Parms, nullptr);

	pFnFCeil->FunctionFlags |= 0x400;

	return FCeil_Parms.ReturnValue;
};

// Function Core.Object.FFloor
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int UObject::FFloor(float A)
{
	static UFunction* pFnFFloor = nullptr;

	if (!pFnFFloor)
	{
		pFnFFloor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FFLOOR));
	}

	UObject_execFFloor_Parms FFloor_Parms;
	memcpy_s(&FFloor_Parms.A, 0x4, &A, 0x4);

	pFnFFloor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFFloor, &FFloor_Parms, nullptr);

	pFnFFloor->FunctionFlags |= 0x400;

	return FFloor_Parms.ReturnValue;
};

// Function Core.Object.Round
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int UObject::Round(float A)
{
	static UFunction* pFnRound = nullptr;

	if (!pFnRound)
	{
		pFnRound = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ROUND));
	}

	UObject_execRound_Parms Round_Parms;
	memcpy_s(&Round_Parms.A, 0x4, &A, 0x4);

	pFnRound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRound, &Round_Parms, nullptr);

	pFnRound->FunctionFlags |= 0x400;

	return Round_Parms.ReturnValue;
};

// Function Core.Object.Lerp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

float UObject::Lerp(float A, float B, float Alpha)
{
	static UFunction* pFnLerp = nullptr;

	if (!pFnLerp)
	{
		pFnLerp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LERP));
	}

	UObject_execLerp_Parms Lerp_Parms;
	memcpy_s(&Lerp_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Lerp_Parms.B, 0x4, &B, 0x4);
	memcpy_s(&Lerp_Parms.Alpha, 0x4, &Alpha, 0x4);

	pFnLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLerp, &Lerp_Parms, nullptr);

	pFnLerp->FunctionFlags |= 0x400;

	return Lerp_Parms.ReturnValue;
};

// Function Core.Object.FClamp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          V                              (CPF_Parm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FClamp(float V, float A, float B)
{
	static UFunction* pFnFClamp = nullptr;

	if (!pFnFClamp)
	{
		pFnFClamp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FCLAMP));
	}

	UObject_execFClamp_Parms FClamp_Parms;
	memcpy_s(&FClamp_Parms.V, 0x4, &V, 0x4);
	memcpy_s(&FClamp_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&FClamp_Parms.B, 0x4, &B, 0x4);

	pFnFClamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFClamp, &FClamp_Parms, nullptr);

	pFnFClamp->FunctionFlags |= 0x400;

	return FClamp_Parms.ReturnValue;
};

// Function Core.Object.FMax
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FMax(float A, float B)
{
	static UFunction* pFnFMax = nullptr;

	if (!pFnFMax)
	{
		pFnFMax = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FMAX));
	}

	UObject_execFMax_Parms FMax_Parms;
	memcpy_s(&FMax_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&FMax_Parms.B, 0x4, &B, 0x4);

	pFnFMax->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFMax, &FMax_Parms, nullptr);

	pFnFMax->FunctionFlags |= 0x400;

	return FMax_Parms.ReturnValue;
};

// Function Core.Object.FMin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FMin(float A, float B)
{
	static UFunction* pFnFMin = nullptr;

	if (!pFnFMin)
	{
		pFnFMin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FMIN));
	}

	UObject_execFMin_Parms FMin_Parms;
	memcpy_s(&FMin_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&FMin_Parms.B, 0x4, &B, 0x4);

	pFnFMin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFMin, &FMin_Parms, nullptr);

	pFnFMin->FunctionFlags |= 0x400;

	return FMin_Parms.ReturnValue;
};

// Function Core.Object.FRand
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UObject::FRand()
{
	static UFunction* pFnFRand = nullptr;

	if (!pFnFRand)
	{
		pFnFRand = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FRAND));
	}

	UObject_execFRand_Parms FRand_Parms;

	pFnFRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFRand, &FRand_Parms, nullptr);

	pFnFRand->FunctionFlags |= 0x400;

	return FRand_Parms.ReturnValue;
};

// Function Core.Object.Square
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Square(float A)
{
	static UFunction* pFnSquare = nullptr;

	if (!pFnSquare)
	{
		pFnSquare = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SQUARE));
	}

	UObject_execSquare_Parms Square_Parms;
	memcpy_s(&Square_Parms.A, 0x4, &A, 0x4);

	pFnSquare->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSquare, &Square_Parms, nullptr);

	pFnSquare->FunctionFlags |= 0x400;

	return Square_Parms.ReturnValue;
};

// Function Core.Object.Sqrt
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Sqrt(float A)
{
	static UFunction* pFnSqrt = nullptr;

	if (!pFnSqrt)
	{
		pFnSqrt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SQRT));
	}

	UObject_execSqrt_Parms Sqrt_Parms;
	memcpy_s(&Sqrt_Parms.A, 0x4, &A, 0x4);

	pFnSqrt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSqrt, &Sqrt_Parms, nullptr);

	pFnSqrt->FunctionFlags |= 0x400;

	return Sqrt_Parms.ReturnValue;
};

// Function Core.Object.Loge
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Loge(float A)
{
	static UFunction* pFnLoge = nullptr;

	if (!pFnLoge)
	{
		pFnLoge = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LOGE));
	}

	UObject_execLoge_Parms Loge_Parms;
	memcpy_s(&Loge_Parms.A, 0x4, &A, 0x4);

	pFnLoge->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoge, &Loge_Parms, nullptr);

	pFnLoge->FunctionFlags |= 0x400;

	return Loge_Parms.ReturnValue;
};

// Function Core.Object.Exp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Exp(float A)
{
	static UFunction* pFnExp = nullptr;

	if (!pFnExp)
	{
		pFnExp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EXP));
	}

	UObject_execExp_Parms Exp_Parms;
	memcpy_s(&Exp_Parms.A, 0x4, &A, 0x4);

	pFnExp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnExp, &Exp_Parms, nullptr);

	pFnExp->FunctionFlags |= 0x400;

	return Exp_Parms.ReturnValue;
};

// Function Core.Object.Atan2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Atan2(float A, float B)
{
	static UFunction* pFnAtan2 = nullptr;

	if (!pFnAtan2)
	{
		pFnAtan2 = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ATAN2));
	}

	UObject_execAtan2_Parms Atan2_Parms;
	memcpy_s(&Atan2_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Atan2_Parms.B, 0x4, &B, 0x4);

	pFnAtan2->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAtan2, &Atan2_Parms, nullptr);

	pFnAtan2->FunctionFlags |= 0x400;

	return Atan2_Parms.ReturnValue;
};

// Function Core.Object.Atan
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Atan(float A)
{
	static UFunction* pFnAtan = nullptr;

	if (!pFnAtan)
	{
		pFnAtan = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ATAN));
	}

	UObject_execAtan_Parms Atan_Parms;
	memcpy_s(&Atan_Parms.A, 0x4, &A, 0x4);

	pFnAtan->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAtan, &Atan_Parms, nullptr);

	pFnAtan->FunctionFlags |= 0x400;

	return Atan_Parms.ReturnValue;
};

// Function Core.Object.Tan
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Tan(float A)
{
	static UFunction* pFnTan = nullptr;

	if (!pFnTan)
	{
		pFnTan = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TAN));
	}

	UObject_execTan_Parms Tan_Parms;
	memcpy_s(&Tan_Parms.A, 0x4, &A, 0x4);

	pFnTan->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTan, &Tan_Parms, nullptr);

	pFnTan->FunctionFlags |= 0x400;

	return Tan_Parms.ReturnValue;
};

// Function Core.Object.Acos
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Acos(float A)
{
	static UFunction* pFnAcos = nullptr;

	if (!pFnAcos)
	{
		pFnAcos = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ACOS));
	}

	UObject_execAcos_Parms Acos_Parms;
	memcpy_s(&Acos_Parms.A, 0x4, &A, 0x4);

	pFnAcos->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcos, &Acos_Parms, nullptr);

	pFnAcos->FunctionFlags |= 0x400;

	return Acos_Parms.ReturnValue;
};

// Function Core.Object.Cos
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Cos(float A)
{
	static UFunction* pFnCos = nullptr;

	if (!pFnCos)
	{
		pFnCos = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_COS));
	}

	UObject_execCos_Parms Cos_Parms;
	memcpy_s(&Cos_Parms.A, 0x4, &A, 0x4);

	pFnCos->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCos, &Cos_Parms, nullptr);

	pFnCos->FunctionFlags |= 0x400;

	return Cos_Parms.ReturnValue;
};

// Function Core.Object.Asin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Asin(float A)
{
	static UFunction* pFnAsin = nullptr;

	if (!pFnAsin)
	{
		pFnAsin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ASIN));
	}

	UObject_execAsin_Parms Asin_Parms;
	memcpy_s(&Asin_Parms.A, 0x4, &A, 0x4);

	pFnAsin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAsin, &Asin_Parms, nullptr);

	pFnAsin->FunctionFlags |= 0x400;

	return Asin_Parms.ReturnValue;
};

// Function Core.Object.Sin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Sin(float A)
{
	static UFunction* pFnSin = nullptr;

	if (!pFnSin)
	{
		pFnSin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SIN));
	}

	UObject_execSin_Parms Sin_Parms;
	memcpy_s(&Sin_Parms.A, 0x4, &A, 0x4);

	pFnSin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSin, &Sin_Parms, nullptr);

	pFnSin->FunctionFlags |= 0x400;

	return Sin_Parms.ReturnValue;
};

// Function Core.Object.Abs
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Abs(float A)
{
	static UFunction* pFnAbs = nullptr;

	if (!pFnAbs)
	{
		pFnAbs = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ABS));
	}

	UObject_execAbs_Parms Abs_Parms;
	memcpy_s(&Abs_Parms.A, 0x4, &A, 0x4);

	pFnAbs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAbs, &Abs_Parms, nullptr);

	pFnAbs->FunctionFlags |= 0x400;

	return Abs_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::SubtractEqual_FloatFloat(float B, float& A)
{
	static UFunction* pFnSubtractEqual_FloatFloat = nullptr;

	if (!pFnSubtractEqual_FloatFloat)
	{
		pFnSubtractEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_FLOATFLOAT));
	}

	UObject_execSubtractEqual_FloatFloat_Parms SubtractEqual_FloatFloat_Parms;
	memcpy_s(&SubtractEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnSubtractEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Parms, nullptr);

	pFnSubtractEqual_FloatFloat->FunctionFlags |= 0x400;
	memcpy_s(&SubtractEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);

	return SubtractEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::AddEqual_FloatFloat(float B, float& A)
{
	static UFunction* pFnAddEqual_FloatFloat = nullptr;

	if (!pFnAddEqual_FloatFloat)
	{
		pFnAddEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDEQUAL_FLOATFLOAT));
	}

	UObject_execAddEqual_FloatFloat_Parms AddEqual_FloatFloat_Parms;
	memcpy_s(&AddEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnAddEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_FloatFloat, &AddEqual_FloatFloat_Parms, nullptr);

	pFnAddEqual_FloatFloat->FunctionFlags |= 0x400;
	memcpy_s(&AddEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);

	return AddEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::DivideEqual_FloatFloat(float B, float& A)
{
	static UFunction* pFnDivideEqual_FloatFloat = nullptr;

	if (!pFnDivideEqual_FloatFloat)
	{
		pFnDivideEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDEEQUAL_FLOATFLOAT));
	}

	UObject_execDivideEqual_FloatFloat_Parms DivideEqual_FloatFloat_Parms;
	memcpy_s(&DivideEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivideEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Parms, nullptr);

	pFnDivideEqual_FloatFloat->FunctionFlags |= 0x400;
	memcpy_s(&DivideEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);

	return DivideEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::MultiplyEqual_FloatFloat(float B, float& A)
{
	static UFunction* pFnMultiplyEqual_FloatFloat = nullptr;

	if (!pFnMultiplyEqual_FloatFloat)
	{
		pFnMultiplyEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_FLOATFLOAT));
	}

	UObject_execMultiplyEqual_FloatFloat_Parms MultiplyEqual_FloatFloat_Parms;
	memcpy_s(&MultiplyEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiplyEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Parms, nullptr);

	pFnMultiplyEqual_FloatFloat->FunctionFlags |= 0x400;
	memcpy_s(&MultiplyEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);

	return MultiplyEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::NotEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnNotEqual_FloatFloat = nullptr;

	if (!pFnNotEqual_FloatFloat)
	{
		pFnNotEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_FLOATFLOAT));
	}

	UObject_execNotEqual_FloatFloat_Parms NotEqual_FloatFloat_Parms;
	memcpy_s(&NotEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&NotEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnNotEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_FloatFloat, &NotEqual_FloatFloat_Parms, nullptr);

	pFnNotEqual_FloatFloat->FunctionFlags |= 0x400;

	return NotEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::ComplementEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnComplementEqual_FloatFloat = nullptr;

	if (!pFnComplementEqual_FloatFloat)
	{
		pFnComplementEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_COMPLEMENTEQUAL_FLOATFLOAT));
	}

	UObject_execComplementEqual_FloatFloat_Parms ComplementEqual_FloatFloat_Parms;
	memcpy_s(&ComplementEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&ComplementEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnComplementEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Parms, nullptr);

	pFnComplementEqual_FloatFloat->FunctionFlags |= 0x400;

	return ComplementEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::EqualEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnEqualEqual_FloatFloat = nullptr;

	if (!pFnEqualEqual_FloatFloat)
	{
		pFnEqualEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_FLOATFLOAT));
	}

	UObject_execEqualEqual_FloatFloat_Parms EqualEqual_FloatFloat_Parms;
	memcpy_s(&EqualEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&EqualEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnEqualEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Parms, nullptr);

	pFnEqualEqual_FloatFloat->FunctionFlags |= 0x400;

	return EqualEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::GreaterEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnGreaterEqual_FloatFloat = nullptr;

	if (!pFnGreaterEqual_FloatFloat)
	{
		pFnGreaterEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATEREQUAL_FLOATFLOAT));
	}

	UObject_execGreaterEqual_FloatFloat_Parms GreaterEqual_FloatFloat_Parms;
	memcpy_s(&GreaterEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnGreaterEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Parms, nullptr);

	pFnGreaterEqual_FloatFloat->FunctionFlags |= 0x400;

	return GreaterEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::LessEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnLessEqual_FloatFloat = nullptr;

	if (!pFnLessEqual_FloatFloat)
	{
		pFnLessEqual_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESSEQUAL_FLOATFLOAT));
	}

	UObject_execLessEqual_FloatFloat_Parms LessEqual_FloatFloat_Parms;
	memcpy_s(&LessEqual_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&LessEqual_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnLessEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_FloatFloat, &LessEqual_FloatFloat_Parms, nullptr);

	pFnLessEqual_FloatFloat->FunctionFlags |= 0x400;

	return LessEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Greater_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::Greater_FloatFloat(float A, float B)
{
	static UFunction* pFnGreater_FloatFloat = nullptr;

	if (!pFnGreater_FloatFloat)
	{
		pFnGreater_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATER_FLOATFLOAT));
	}

	UObject_execGreater_FloatFloat_Parms Greater_FloatFloat_Parms;
	memcpy_s(&Greater_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Greater_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnGreater_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_FloatFloat, &Greater_FloatFloat_Parms, nullptr);

	pFnGreater_FloatFloat->FunctionFlags |= 0x400;

	return Greater_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Less_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::Less_FloatFloat(float A, float B)
{
	static UFunction* pFnLess_FloatFloat = nullptr;

	if (!pFnLess_FloatFloat)
	{
		pFnLess_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESS_FLOATFLOAT));
	}

	UObject_execLess_FloatFloat_Parms Less_FloatFloat_Parms;
	memcpy_s(&Less_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Less_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnLess_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_FloatFloat, &Less_FloatFloat_Parms, nullptr);

	pFnLess_FloatFloat->FunctionFlags |= 0x400;

	return Less_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Subtract_FloatFloat(float A, float B)
{
	static UFunction* pFnSubtract_FloatFloat = nullptr;

	if (!pFnSubtract_FloatFloat)
	{
		pFnSubtract_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_FLOATFLOAT));
	}

	UObject_execSubtract_FloatFloat_Parms Subtract_FloatFloat_Parms;
	memcpy_s(&Subtract_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Subtract_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnSubtract_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_FloatFloat, &Subtract_FloatFloat_Parms, nullptr);

	pFnSubtract_FloatFloat->FunctionFlags |= 0x400;

	return Subtract_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Add_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Add_FloatFloat(float A, float B)
{
	static UFunction* pFnAdd_FloatFloat = nullptr;

	if (!pFnAdd_FloatFloat)
	{
		pFnAdd_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_FLOATFLOAT));
	}

	UObject_execAdd_FloatFloat_Parms Add_FloatFloat_Parms;
	memcpy_s(&Add_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Add_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnAdd_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_FloatFloat, &Add_FloatFloat_Parms, nullptr);

	pFnAdd_FloatFloat->FunctionFlags |= 0x400;

	return Add_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Percent_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Percent_FloatFloat(float A, float B)
{
	static UFunction* pFnPercent_FloatFloat = nullptr;

	if (!pFnPercent_FloatFloat)
	{
		pFnPercent_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PERCENT_FLOATFLOAT));
	}

	UObject_execPercent_FloatFloat_Parms Percent_FloatFloat_Parms;
	memcpy_s(&Percent_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Percent_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnPercent_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPercent_FloatFloat, &Percent_FloatFloat_Parms, nullptr);

	pFnPercent_FloatFloat->FunctionFlags |= 0x400;

	return Percent_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Divide_FloatFloat(float A, float B)
{
	static UFunction* pFnDivide_FloatFloat = nullptr;

	if (!pFnDivide_FloatFloat)
	{
		pFnDivide_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDE_FLOATFLOAT));
	}

	UObject_execDivide_FloatFloat_Parms Divide_FloatFloat_Parms;
	memcpy_s(&Divide_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Divide_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivide_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_FloatFloat, &Divide_FloatFloat_Parms, nullptr);

	pFnDivide_FloatFloat->FunctionFlags |= 0x400;

	return Divide_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Multiply_FloatFloat(float A, float B)
{
	static UFunction* pFnMultiply_FloatFloat = nullptr;

	if (!pFnMultiply_FloatFloat)
	{
		pFnMultiply_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_FLOATFLOAT));
	}

	UObject_execMultiply_FloatFloat_Parms Multiply_FloatFloat_Parms;
	memcpy_s(&Multiply_FloatFloat_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiply_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_FloatFloat, &Multiply_FloatFloat_Parms, nullptr);

	pFnMultiply_FloatFloat->FunctionFlags |= 0x400;

	return Multiply_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Base                           (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static UFunction* pFnMultiplyMultiply_FloatFloat = nullptr;

	if (!pFnMultiplyMultiply_FloatFloat)
	{
		pFnMultiplyMultiply_FloatFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYMULTIPLY_FLOATFLOAT));
	}

	UObject_execMultiplyMultiply_FloatFloat_Parms MultiplyMultiply_FloatFloat_Parms;
	memcpy_s(&MultiplyMultiply_FloatFloat_Parms.Base, 0x4, &Base, 0x4);
	memcpy_s(&MultiplyMultiply_FloatFloat_Parms.Exp, 0x4, &Exp, 0x4);

	pFnMultiplyMultiply_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Parms, nullptr);

	pFnMultiplyMultiply_FloatFloat->FunctionFlags |= 0x400;

	return MultiplyMultiply_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreFloat
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Subtract_PreFloat(float A)
{
	static UFunction* pFnSubtract_PreFloat = nullptr;

	if (!pFnSubtract_PreFloat)
	{
		pFnSubtract_PreFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_PREFLOAT));
	}

	UObject_execSubtract_PreFloat_Parms Subtract_PreFloat_Parms;
	memcpy_s(&Subtract_PreFloat_Parms.A, 0x4, &A, 0x4);

	pFnSubtract_PreFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_PreFloat, &Subtract_PreFloat_Parms, nullptr);

	pFnSubtract_PreFloat->FunctionFlags |= 0x400;

	return Subtract_PreFloat_Parms.ReturnValue;
};

// Function Core.Object.ToHex
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            A                              (CPF_Parm)

struct FString UObject::ToHex(int A)
{
	static UFunction* pFnToHex = nullptr;

	if (!pFnToHex)
	{
		pFnToHex = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_TOHEX));
	}

	UObject_execToHex_Parms ToHex_Parms;
	memcpy_s(&ToHex_Parms.A, 0x4, &A, 0x4);

	pFnToHex->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnToHex, &ToHex_Parms, nullptr);

	pFnToHex->FunctionFlags |= 0x400;

	return ToHex_Parms.ReturnValue;
};

// Function Core.Object.Clamp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            V                              (CPF_Parm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Clamp(int V, int A, int B)
{
	static UFunction* pFnClamp = nullptr;

	if (!pFnClamp)
	{
		pFnClamp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_CLAMP));
	}

	UObject_execClamp_Parms Clamp_Parms;
	memcpy_s(&Clamp_Parms.V, 0x4, &V, 0x4);
	memcpy_s(&Clamp_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Clamp_Parms.B, 0x4, &B, 0x4);

	pFnClamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClamp, &Clamp_Parms, nullptr);

	pFnClamp->FunctionFlags |= 0x400;

	return Clamp_Parms.ReturnValue;
};

// Function Core.Object.Max
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Max(int A, int B)
{
	static UFunction* pFnMax = nullptr;

	if (!pFnMax)
	{
		pFnMax = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MAX));
	}

	UObject_execMax_Parms Max_Parms;
	memcpy_s(&Max_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Max_Parms.B, 0x4, &B, 0x4);

	pFnMax->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMax, &Max_Parms, nullptr);

	pFnMax->FunctionFlags |= 0x400;

	return Max_Parms.ReturnValue;
};

// Function Core.Object.Min
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Min(int A, int B)
{
	static UFunction* pFnMin = nullptr;

	if (!pFnMin)
	{
		pFnMin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MIN));
	}

	UObject_execMin_Parms Min_Parms;
	memcpy_s(&Min_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Min_Parms.B, 0x4, &B, 0x4);

	pFnMin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMin, &Min_Parms, nullptr);

	pFnMin->FunctionFlags |= 0x400;

	return Min_Parms.ReturnValue;
};

// Function Core.Object.Rand
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            Max                            (CPF_Parm)

int UObject::Rand(int Max)
{
	static UFunction* pFnRand = nullptr;

	if (!pFnRand)
	{
		pFnRand = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_RAND));
	}

	UObject_execRand_Parms Rand_Parms;
	memcpy_s(&Rand_Parms.Max, 0x4, &Max, 0x4);

	pFnRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRand, &Rand_Parms, nullptr);

	pFnRand->FunctionFlags |= 0x400;

	return Rand_Parms.ReturnValue;
};

// Function Core.Object.FromHexColor
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Hex                            (CPF_Parm | CPF_NeedCtorLink)

struct FColor UObject::FromHexColor(struct FString Hex)
{
	static UFunction* pFnFromHexColor = nullptr;

	if (!pFnFromHexColor)
	{
		pFnFromHexColor = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FROMHEXCOLOR));
	}

	UObject_execFromHexColor_Parms FromHexColor_Parms;
	memcpy_s(&FromHexColor_Parms.Hex, 0x10, &Hex, 0x10);

	this->ProcessEvent(pFnFromHexColor, &FromHexColor_Parms, nullptr);

	return FromHexColor_Parms.ReturnValue;
};

// Function Core.Object.FromHex
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Hex                            (CPF_Parm | CPF_NeedCtorLink)

int UObject::FromHex(struct FString Hex)
{
	static UFunction* pFnFromHex = nullptr;

	if (!pFnFromHex)
	{
		pFnFromHex = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_FROMHEX));
	}

	UObject_execFromHex_Parms FromHex_Parms;
	memcpy_s(&FromHex_Parms.Hex, 0x10, &Hex, 0x10);

	pFnFromHex->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFromHex, &FromHex_Parms, nullptr);

	pFnFromHex->FunctionFlags |= 0x400;

	return FromHex_Parms.ReturnValue;
};

// Function Core.Object.QMin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long long             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

unsigned long long UObject::QMin(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnQMin = nullptr;

	if (!pFnQMin)
	{
		pFnQMin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QMIN));
	}

	UObject_execQMin_Parms QMin_Parms;
	QMin_Parms.A = A;
	QMin_Parms.B = B;

	pFnQMin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQMin, &QMin_Parms, nullptr);

	pFnQMin->FunctionFlags |= 0x400;

	return QMin_Parms.ReturnValue;
};

// Function Core.Object.QMax
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long long             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

unsigned long long UObject::QMax(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnQMax = nullptr;

	if (!pFnQMax)
	{
		pFnQMax = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QMAX));
	}

	UObject_execQMax_Parms QMax_Parms;
	QMax_Parms.A = A;
	QMax_Parms.B = B;

	pFnQMax->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQMax, &QMax_Parms, nullptr);

	pFnQMax->FunctionFlags |= 0x400;

	return QMax_Parms.ReturnValue;
};

// Function Core.Object.QSubtract
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long long             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

unsigned long long UObject::QSubtract(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnQSubtract = nullptr;

	if (!pFnQSubtract)
	{
		pFnQSubtract = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_QSUBTRACT));
	}

	UObject_execQSubtract_Parms QSubtract_Parms;
	QSubtract_Parms.A = A;
	QSubtract_Parms.B = B;

	pFnQSubtract->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQSubtract, &QSubtract_Parms, nullptr);

	pFnQSubtract->FunctionFlags |= 0x400;

	return QSubtract_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_QWordInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::NotEqual_QWordInt(unsigned long long A, int B)
{
	static UFunction* pFnNotEqual_QWordInt = nullptr;

	if (!pFnNotEqual_QWordInt)
	{
		pFnNotEqual_QWordInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_QWORDINT));
	}

	UObject_execNotEqual_QWordInt_Parms NotEqual_QWordInt_Parms;
	NotEqual_QWordInt_Parms.A = A;
	memcpy_s(&NotEqual_QWordInt_Parms.B, 0x4, &B, 0x4);

	pFnNotEqual_QWordInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_QWordInt, &NotEqual_QWordInt_Parms, nullptr);

	pFnNotEqual_QWordInt->FunctionFlags |= 0x400;

	return NotEqual_QWordInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_QWordInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::EqualEqual_QWordInt(unsigned long long A, int B)
{
	static UFunction* pFnEqualEqual_QWordInt = nullptr;

	if (!pFnEqualEqual_QWordInt)
	{
		pFnEqualEqual_QWordInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_QWORDINT));
	}

	UObject_execEqualEqual_QWordInt_Parms EqualEqual_QWordInt_Parms;
	EqualEqual_QWordInt_Parms.A = A;
	memcpy_s(&EqualEqual_QWordInt_Parms.B, 0x4, &B, 0x4);

	pFnEqualEqual_QWordInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_QWordInt, &EqualEqual_QWordInt_Parms, nullptr);

	pFnEqualEqual_QWordInt->FunctionFlags |= 0x400;

	return EqualEqual_QWordInt_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

bool UObject::NotEqual_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnNotEqual_QWordQWord = nullptr;

	if (!pFnNotEqual_QWordQWord)
	{
		pFnNotEqual_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_QWORDQWORD));
	}

	UObject_execNotEqual_QWordQWord_Parms NotEqual_QWordQWord_Parms;
	NotEqual_QWordQWord_Parms.A = A;
	NotEqual_QWordQWord_Parms.B = B;

	pFnNotEqual_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_QWordQWord, &NotEqual_QWordQWord_Parms, nullptr);

	pFnNotEqual_QWordQWord->FunctionFlags |= 0x400;

	return NotEqual_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

bool UObject::EqualEqual_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnEqualEqual_QWordQWord = nullptr;

	if (!pFnEqualEqual_QWordQWord)
	{
		pFnEqualEqual_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_QWORDQWORD));
	}

	UObject_execEqualEqual_QWordQWord_Parms EqualEqual_QWordQWord_Parms;
	EqualEqual_QWordQWord_Parms.A = A;
	EqualEqual_QWordQWord_Parms.B = B;

	pFnEqualEqual_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_QWordQWord, &EqualEqual_QWordQWord_Parms, nullptr);

	pFnEqualEqual_QWordQWord->FunctionFlags |= 0x400;

	return EqualEqual_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

bool UObject::GreaterEqual_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnGreaterEqual_QWordQWord = nullptr;

	if (!pFnGreaterEqual_QWordQWord)
	{
		pFnGreaterEqual_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATEREQUAL_QWORDQWORD));
	}

	UObject_execGreaterEqual_QWordQWord_Parms GreaterEqual_QWordQWord_Parms;
	GreaterEqual_QWordQWord_Parms.A = A;
	GreaterEqual_QWordQWord_Parms.B = B;

	pFnGreaterEqual_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_QWordQWord, &GreaterEqual_QWordQWord_Parms, nullptr);

	pFnGreaterEqual_QWordQWord->FunctionFlags |= 0x400;

	return GreaterEqual_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

bool UObject::LessEqual_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnLessEqual_QWordQWord = nullptr;

	if (!pFnLessEqual_QWordQWord)
	{
		pFnLessEqual_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESSEQUAL_QWORDQWORD));
	}

	UObject_execLessEqual_QWordQWord_Parms LessEqual_QWordQWord_Parms;
	LessEqual_QWordQWord_Parms.A = A;
	LessEqual_QWordQWord_Parms.B = B;

	pFnLessEqual_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_QWordQWord, &LessEqual_QWordQWord_Parms, nullptr);

	pFnLessEqual_QWordQWord->FunctionFlags |= 0x400;

	return LessEqual_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.Greater_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

bool UObject::Greater_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnGreater_QWordQWord = nullptr;

	if (!pFnGreater_QWordQWord)
	{
		pFnGreater_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATER_QWORDQWORD));
	}

	UObject_execGreater_QWordQWord_Parms Greater_QWordQWord_Parms;
	Greater_QWordQWord_Parms.A = A;
	Greater_QWordQWord_Parms.B = B;

	pFnGreater_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_QWordQWord, &Greater_QWordQWord_Parms, nullptr);

	pFnGreater_QWordQWord->FunctionFlags |= 0x400;

	return Greater_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.Less_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

bool UObject::Less_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnLess_QWordQWord = nullptr;

	if (!pFnLess_QWordQWord)
	{
		pFnLess_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESS_QWORDQWORD));
	}

	UObject_execLess_QWordQWord_Parms Less_QWordQWord_Parms;
	Less_QWordQWord_Parms.A = A;
	Less_QWordQWord_Parms.B = B;

	pFnLess_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_QWordQWord, &Less_QWordQWord_Parms, nullptr);

	pFnLess_QWordQWord->FunctionFlags |= 0x400;

	return Less_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.Subtract_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

int UObject::Subtract_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnSubtract_QWordQWord = nullptr;

	if (!pFnSubtract_QWordQWord)
	{
		pFnSubtract_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_QWORDQWORD));
	}

	UObject_execSubtract_QWordQWord_Parms Subtract_QWordQWord_Parms;
	Subtract_QWordQWord_Parms.A = A;
	Subtract_QWordQWord_Parms.B = B;

	pFnSubtract_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_QWordQWord, &Subtract_QWordQWord_Parms, nullptr);

	pFnSubtract_QWordQWord->FunctionFlags |= 0x400;

	return Subtract_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.Add_QWordQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long long             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long long             A                              (CPF_Parm)
// unsigned long long             B                              (CPF_Parm)

unsigned long long UObject::Add_QWordQWord(unsigned long long A, unsigned long long B)
{
	static UFunction* pFnAdd_QWordQWord = nullptr;

	if (!pFnAdd_QWordQWord)
	{
		pFnAdd_QWordQWord = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_QWORDQWORD));
	}

	UObject_execAdd_QWordQWord_Parms Add_QWordQWord_Parms;
	Add_QWordQWord_Parms.A = A;
	Add_QWordQWord_Parms.B = B;

	pFnAdd_QWordQWord->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_QWordQWord, &Add_QWordQWord_Parms, nullptr);

	pFnAdd_QWordQWord->FunctionFlags |= 0x400;

	return Add_QWordQWord_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Int
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::SubtractSubtract_Int(int& A)
{
	static UFunction* pFnSubtractSubtract_Int = nullptr;

	if (!pFnSubtractSubtract_Int)
	{
		pFnSubtractSubtract_Int = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTSUBTRACT_INT));
	}

	UObject_execSubtractSubtract_Int_Parms SubtractSubtract_Int_Parms;

	pFnSubtractSubtract_Int->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_Int, &SubtractSubtract_Int_Parms, nullptr);

	pFnSubtractSubtract_Int->FunctionFlags |= 0x400;
	memcpy_s(&SubtractSubtract_Int_Parms.A, 0x4, &A, 0x4);

	return SubtractSubtract_Int_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_Int
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::AddAdd_Int(int& A)
{
	static UFunction* pFnAddAdd_Int = nullptr;

	if (!pFnAddAdd_Int)
	{
		pFnAddAdd_Int = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDADD_INT));
	}

	UObject_execAddAdd_Int_Parms AddAdd_Int_Parms;

	pFnAddAdd_Int->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_Int, &AddAdd_Int_Parms, nullptr);

	pFnAddAdd_Int->FunctionFlags |= 0x400;
	memcpy_s(&AddAdd_Int_Parms.A, 0x4, &A, 0x4);

	return AddAdd_Int_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreInt
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::SubtractSubtract_PreInt(int& A)
{
	static UFunction* pFnSubtractSubtract_PreInt = nullptr;

	if (!pFnSubtractSubtract_PreInt)
	{
		pFnSubtractSubtract_PreInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTSUBTRACT_PREINT));
	}

	UObject_execSubtractSubtract_PreInt_Parms SubtractSubtract_PreInt_Parms;

	pFnSubtractSubtract_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Parms, nullptr);

	pFnSubtractSubtract_PreInt->FunctionFlags |= 0x400;
	memcpy_s(&SubtractSubtract_PreInt_Parms.A, 0x4, &A, 0x4);

	return SubtractSubtract_PreInt_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_PreInt
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::AddAdd_PreInt(int& A)
{
	static UFunction* pFnAddAdd_PreInt = nullptr;

	if (!pFnAddAdd_PreInt)
	{
		pFnAddAdd_PreInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDADD_PREINT));
	}

	UObject_execAddAdd_PreInt_Parms AddAdd_PreInt_Parms;

	pFnAddAdd_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_PreInt, &AddAdd_PreInt_Parms, nullptr);

	pFnAddAdd_PreInt->FunctionFlags |= 0x400;
	memcpy_s(&AddAdd_PreInt_Parms.A, 0x4, &A, 0x4);

	return AddAdd_PreInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_IntInt
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            B                              (CPF_Parm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::SubtractEqual_IntInt(int B, int& A)
{
	static UFunction* pFnSubtractEqual_IntInt = nullptr;

	if (!pFnSubtractEqual_IntInt)
	{
		pFnSubtractEqual_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_INTINT));
	}

	UObject_execSubtractEqual_IntInt_Parms SubtractEqual_IntInt_Parms;
	memcpy_s(&SubtractEqual_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnSubtractEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_IntInt, &SubtractEqual_IntInt_Parms, nullptr);

	pFnSubtractEqual_IntInt->FunctionFlags |= 0x400;
	memcpy_s(&SubtractEqual_IntInt_Parms.A, 0x4, &A, 0x4);

	return SubtractEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_IntInt
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            B                              (CPF_Parm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::AddEqual_IntInt(int B, int& A)
{
	static UFunction* pFnAddEqual_IntInt = nullptr;

	if (!pFnAddEqual_IntInt)
	{
		pFnAddEqual_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDEQUAL_INTINT));
	}

	UObject_execAddEqual_IntInt_Parms AddEqual_IntInt_Parms;
	memcpy_s(&AddEqual_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnAddEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_IntInt, &AddEqual_IntInt_Parms, nullptr);

	pFnAddEqual_IntInt->FunctionFlags |= 0x400;
	memcpy_s(&AddEqual_IntInt_Parms.A, 0x4, &A, 0x4);

	return AddEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_IntFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::DivideEqual_IntFloat(float B, int& A)
{
	static UFunction* pFnDivideEqual_IntFloat = nullptr;

	if (!pFnDivideEqual_IntFloat)
	{
		pFnDivideEqual_IntFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDEEQUAL_INTFLOAT));
	}

	UObject_execDivideEqual_IntFloat_Parms DivideEqual_IntFloat_Parms;
	memcpy_s(&DivideEqual_IntFloat_Parms.B, 0x4, &B, 0x4);

	pFnDivideEqual_IntFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_IntFloat, &DivideEqual_IntFloat_Parms, nullptr);

	pFnDivideEqual_IntFloat->FunctionFlags |= 0x400;
	memcpy_s(&DivideEqual_IntFloat_Parms.A, 0x4, &A, 0x4);

	return DivideEqual_IntFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// int                            A                              (CPF_Parm | CPF_OutParm)

int UObject::MultiplyEqual_IntFloat(float B, int& A)
{
	static UFunction* pFnMultiplyEqual_IntFloat = nullptr;

	if (!pFnMultiplyEqual_IntFloat)
	{
		pFnMultiplyEqual_IntFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_INTFLOAT));
	}

	UObject_execMultiplyEqual_IntFloat_Parms MultiplyEqual_IntFloat_Parms;
	memcpy_s(&MultiplyEqual_IntFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiplyEqual_IntFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Parms, nullptr);

	pFnMultiplyEqual_IntFloat->FunctionFlags |= 0x400;
	memcpy_s(&MultiplyEqual_IntFloat_Parms.A, 0x4, &A, 0x4);

	return MultiplyEqual_IntFloat_Parms.ReturnValue;
};

// Function Core.Object.Or_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Or_IntInt(int A, int B)
{
	static UFunction* pFnOr_IntInt = nullptr;

	if (!pFnOr_IntInt)
	{
		pFnOr_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_OR_INTINT));
	}

	UObject_execOr_IntInt_Parms Or_IntInt_Parms;
	memcpy_s(&Or_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Or_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnOr_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOr_IntInt, &Or_IntInt_Parms, nullptr);

	pFnOr_IntInt->FunctionFlags |= 0x400;

	return Or_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Xor_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Xor_IntInt(int A, int B)
{
	static UFunction* pFnXor_IntInt = nullptr;

	if (!pFnXor_IntInt)
	{
		pFnXor_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_XOR_INTINT));
	}

	UObject_execXor_IntInt_Parms Xor_IntInt_Parms;
	memcpy_s(&Xor_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Xor_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnXor_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnXor_IntInt, &Xor_IntInt_Parms, nullptr);

	pFnXor_IntInt->FunctionFlags |= 0x400;

	return Xor_IntInt_Parms.ReturnValue;
};

// Function Core.Object.And_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::And_IntInt(int A, int B)
{
	static UFunction* pFnAnd_IntInt = nullptr;

	if (!pFnAnd_IntInt)
	{
		pFnAnd_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_AND_INTINT));
	}

	UObject_execAnd_IntInt_Parms And_IntInt_Parms;
	memcpy_s(&And_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&And_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnAnd_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAnd_IntInt, &And_IntInt_Parms, nullptr);

	pFnAnd_IntInt->FunctionFlags |= 0x400;

	return And_IntInt_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::NotEqual_IntInt(int A, int B)
{
	static UFunction* pFnNotEqual_IntInt = nullptr;

	if (!pFnNotEqual_IntInt)
	{
		pFnNotEqual_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_INTINT));
	}

	UObject_execNotEqual_IntInt_Parms NotEqual_IntInt_Parms;
	memcpy_s(&NotEqual_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&NotEqual_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnNotEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_IntInt, &NotEqual_IntInt_Parms, nullptr);

	pFnNotEqual_IntInt->FunctionFlags |= 0x400;

	return NotEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::EqualEqual_IntInt(int A, int B)
{
	static UFunction* pFnEqualEqual_IntInt = nullptr;

	if (!pFnEqualEqual_IntInt)
	{
		pFnEqualEqual_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_INTINT));
	}

	UObject_execEqualEqual_IntInt_Parms EqualEqual_IntInt_Parms;
	memcpy_s(&EqualEqual_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&EqualEqual_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnEqualEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_IntInt, &EqualEqual_IntInt_Parms, nullptr);

	pFnEqualEqual_IntInt->FunctionFlags |= 0x400;

	return EqualEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::GreaterEqual_IntInt(int A, int B)
{
	static UFunction* pFnGreaterEqual_IntInt = nullptr;

	if (!pFnGreaterEqual_IntInt)
	{
		pFnGreaterEqual_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATEREQUAL_INTINT));
	}

	UObject_execGreaterEqual_IntInt_Parms GreaterEqual_IntInt_Parms;
	memcpy_s(&GreaterEqual_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterEqual_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnGreaterEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_IntInt, &GreaterEqual_IntInt_Parms, nullptr);

	pFnGreaterEqual_IntInt->FunctionFlags |= 0x400;

	return GreaterEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::LessEqual_IntInt(int A, int B)
{
	static UFunction* pFnLessEqual_IntInt = nullptr;

	if (!pFnLessEqual_IntInt)
	{
		pFnLessEqual_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESSEQUAL_INTINT));
	}

	UObject_execLessEqual_IntInt_Parms LessEqual_IntInt_Parms;
	memcpy_s(&LessEqual_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&LessEqual_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnLessEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_IntInt, &LessEqual_IntInt_Parms, nullptr);

	pFnLessEqual_IntInt->FunctionFlags |= 0x400;

	return LessEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Greater_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::Greater_IntInt(int A, int B)
{
	static UFunction* pFnGreater_IntInt = nullptr;

	if (!pFnGreater_IntInt)
	{
		pFnGreater_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATER_INTINT));
	}

	UObject_execGreater_IntInt_Parms Greater_IntInt_Parms;
	memcpy_s(&Greater_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Greater_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_IntInt, &Greater_IntInt_Parms, nullptr);

	pFnGreater_IntInt->FunctionFlags |= 0x400;

	return Greater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Less_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

bool UObject::Less_IntInt(int A, int B)
{
	static UFunction* pFnLess_IntInt = nullptr;

	if (!pFnLess_IntInt)
	{
		pFnLess_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESS_INTINT));
	}

	UObject_execLess_IntInt_Parms Less_IntInt_Parms;
	memcpy_s(&Less_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Less_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnLess_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_IntInt, &Less_IntInt_Parms, nullptr);

	pFnLess_IntInt->FunctionFlags |= 0x400;

	return Less_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::GreaterGreaterGreater_IntInt(int A, int B)
{
	static UFunction* pFnGreaterGreaterGreater_IntInt = nullptr;

	if (!pFnGreaterGreaterGreater_IntInt)
	{
		pFnGreaterGreaterGreater_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATERGREATERGREATER_INTINT));
	}

	UObject_execGreaterGreaterGreater_IntInt_Parms GreaterGreaterGreater_IntInt_Parms;
	memcpy_s(&GreaterGreaterGreater_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterGreaterGreater_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnGreaterGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Parms, nullptr);

	pFnGreaterGreaterGreater_IntInt->FunctionFlags |= 0x400;

	return GreaterGreaterGreater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreater_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::GreaterGreater_IntInt(int A, int B)
{
	static UFunction* pFnGreaterGreater_IntInt = nullptr;

	if (!pFnGreaterGreater_IntInt)
	{
		pFnGreaterGreater_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_GREATERGREATER_INTINT));
	}

	UObject_execGreaterGreater_IntInt_Parms GreaterGreater_IntInt_Parms;
	memcpy_s(&GreaterGreater_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterGreater_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterGreater_IntInt, &GreaterGreater_IntInt_Parms, nullptr);

	pFnGreaterGreater_IntInt->FunctionFlags |= 0x400;

	return GreaterGreater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.LessLess_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::LessLess_IntInt(int A, int B)
{
	static UFunction* pFnLessLess_IntInt = nullptr;

	if (!pFnLessLess_IntInt)
	{
		pFnLessLess_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_LESSLESS_INTINT));
	}

	UObject_execLessLess_IntInt_Parms LessLess_IntInt_Parms;
	memcpy_s(&LessLess_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&LessLess_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnLessLess_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessLess_IntInt, &LessLess_IntInt_Parms, nullptr);

	pFnLessLess_IntInt->FunctionFlags |= 0x400;

	return LessLess_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Subtract_IntInt(int A, int B)
{
	static UFunction* pFnSubtract_IntInt = nullptr;

	if (!pFnSubtract_IntInt)
	{
		pFnSubtract_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_INTINT));
	}

	UObject_execSubtract_IntInt_Parms Subtract_IntInt_Parms;
	memcpy_s(&Subtract_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Subtract_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnSubtract_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_IntInt, &Subtract_IntInt_Parms, nullptr);

	pFnSubtract_IntInt->FunctionFlags |= 0x400;

	return Subtract_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Add_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Add_IntInt(int A, int B)
{
	static UFunction* pFnAdd_IntInt = nullptr;

	if (!pFnAdd_IntInt)
	{
		pFnAdd_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADD_INTINT));
	}

	UObject_execAdd_IntInt_Parms Add_IntInt_Parms;
	memcpy_s(&Add_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Add_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnAdd_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_IntInt, &Add_IntInt_Parms, nullptr);

	pFnAdd_IntInt->FunctionFlags |= 0x400;

	return Add_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Percent_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Percent_IntInt(int A, int B)
{
	static UFunction* pFnPercent_IntInt = nullptr;

	if (!pFnPercent_IntInt)
	{
		pFnPercent_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_PERCENT_INTINT));
	}

	UObject_execPercent_IntInt_Parms Percent_IntInt_Parms;
	memcpy_s(&Percent_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Percent_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnPercent_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPercent_IntInt, &Percent_IntInt_Parms, nullptr);

	pFnPercent_IntInt->FunctionFlags |= 0x400;

	return Percent_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Divide_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Divide_IntInt(int A, int B)
{
	static UFunction* pFnDivide_IntInt = nullptr;

	if (!pFnDivide_IntInt)
	{
		pFnDivide_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDE_INTINT));
	}

	UObject_execDivide_IntInt_Parms Divide_IntInt_Parms;
	memcpy_s(&Divide_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Divide_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnDivide_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_IntInt, &Divide_IntInt_Parms, nullptr);

	pFnDivide_IntInt->FunctionFlags |= 0x400;

	return Divide_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Multiply_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)

int UObject::Multiply_IntInt(int A, int B)
{
	static UFunction* pFnMultiply_IntInt = nullptr;

	if (!pFnMultiply_IntInt)
	{
		pFnMultiply_IntInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLY_INTINT));
	}

	UObject_execMultiply_IntInt_Parms Multiply_IntInt_Parms;
	memcpy_s(&Multiply_IntInt_Parms.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_IntInt_Parms.B, 0x4, &B, 0x4);

	pFnMultiply_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_IntInt, &Multiply_IntInt_Parms, nullptr);

	pFnMultiply_IntInt->FunctionFlags |= 0x400;

	return Multiply_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreInt
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)

int UObject::Subtract_PreInt(int A)
{
	static UFunction* pFnSubtract_PreInt = nullptr;

	if (!pFnSubtract_PreInt)
	{
		pFnSubtract_PreInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACT_PREINT));
	}

	UObject_execSubtract_PreInt_Parms Subtract_PreInt_Parms;
	memcpy_s(&Subtract_PreInt_Parms.A, 0x4, &A, 0x4);

	pFnSubtract_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_PreInt, &Subtract_PreInt_Parms, nullptr);

	pFnSubtract_PreInt->FunctionFlags |= 0x400;

	return Subtract_PreInt_Parms.ReturnValue;
};

// Function Core.Object.Complement_PreInt
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int                            A                              (CPF_Parm)

int UObject::Complement_PreInt(int A)
{
	static UFunction* pFnComplement_PreInt = nullptr;

	if (!pFnComplement_PreInt)
	{
		pFnComplement_PreInt = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_COMPLEMENT_PREINT));
	}

	UObject_execComplement_PreInt_Parms Complement_PreInt_Parms;
	memcpy_s(&Complement_PreInt_Parms.A, 0x4, &A, 0x4);

	pFnComplement_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnComplement_PreInt, &Complement_PreInt_Parms, nullptr);

	pFnComplement_PreInt->FunctionFlags |= 0x400;

	return Complement_PreInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Byte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::SubtractSubtract_Byte(unsigned char& A)
{
	static UFunction* pFnSubtractSubtract_Byte = nullptr;

	if (!pFnSubtractSubtract_Byte)
	{
		pFnSubtractSubtract_Byte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTSUBTRACT_BYTE));
	}

	UObject_execSubtractSubtract_Byte_Parms SubtractSubtract_Byte_Parms;

	pFnSubtractSubtract_Byte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_Byte, &SubtractSubtract_Byte_Parms, nullptr);

	pFnSubtractSubtract_Byte->FunctionFlags |= 0x400;
	A = SubtractSubtract_Byte_Parms.A;

	return SubtractSubtract_Byte_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_Byte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::AddAdd_Byte(unsigned char& A)
{
	static UFunction* pFnAddAdd_Byte = nullptr;

	if (!pFnAddAdd_Byte)
	{
		pFnAddAdd_Byte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDADD_BYTE));
	}

	UObject_execAddAdd_Byte_Parms AddAdd_Byte_Parms;

	pFnAddAdd_Byte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_Byte, &AddAdd_Byte_Parms, nullptr);

	pFnAddAdd_Byte->FunctionFlags |= 0x400;
	A = AddAdd_Byte_Parms.A;

	return AddAdd_Byte_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::SubtractSubtract_PreByte(unsigned char& A)
{
	static UFunction* pFnSubtractSubtract_PreByte = nullptr;

	if (!pFnSubtractSubtract_PreByte)
	{
		pFnSubtractSubtract_PreByte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTSUBTRACT_PREBYTE));
	}

	UObject_execSubtractSubtract_PreByte_Parms SubtractSubtract_PreByte_Parms;

	pFnSubtractSubtract_PreByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Parms, nullptr);

	pFnSubtractSubtract_PreByte->FunctionFlags |= 0x400;
	A = SubtractSubtract_PreByte_Parms.A;

	return SubtractSubtract_PreByte_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_PreByte
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::AddAdd_PreByte(unsigned char& A)
{
	static UFunction* pFnAddAdd_PreByte = nullptr;

	if (!pFnAddAdd_PreByte)
	{
		pFnAddAdd_PreByte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDADD_PREBYTE));
	}

	UObject_execAddAdd_PreByte_Parms AddAdd_PreByte_Parms;

	pFnAddAdd_PreByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_PreByte, &AddAdd_PreByte_Parms, nullptr);

	pFnAddAdd_PreByte->FunctionFlags |= 0x400;
	A = AddAdd_PreByte_Parms.A;

	return AddAdd_PreByte_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::SubtractEqual_ByteByte(unsigned char B, unsigned char& A)
{
	static UFunction* pFnSubtractEqual_ByteByte = nullptr;

	if (!pFnSubtractEqual_ByteByte)
	{
		pFnSubtractEqual_ByteByte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_SUBTRACTEQUAL_BYTEBYTE));
	}

	UObject_execSubtractEqual_ByteByte_Parms SubtractEqual_ByteByte_Parms;
	SubtractEqual_ByteByte_Parms.B = B;

	pFnSubtractEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Parms, nullptr);

	pFnSubtractEqual_ByteByte->FunctionFlags |= 0x400;
	A = SubtractEqual_ByteByte_Parms.A;

	return SubtractEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::AddEqual_ByteByte(unsigned char B, unsigned char& A)
{
	static UFunction* pFnAddEqual_ByteByte = nullptr;

	if (!pFnAddEqual_ByteByte)
	{
		pFnAddEqual_ByteByte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ADDEQUAL_BYTEBYTE));
	}

	UObject_execAddEqual_ByteByte_Parms AddEqual_ByteByte_Parms;
	AddEqual_ByteByte_Parms.B = B;

	pFnAddEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_ByteByte, &AddEqual_ByteByte_Parms, nullptr);

	pFnAddEqual_ByteByte->FunctionFlags |= 0x400;
	A = AddEqual_ByteByte_Parms.A;

	return AddEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::DivideEqual_ByteByte(unsigned char B, unsigned char& A)
{
	static UFunction* pFnDivideEqual_ByteByte = nullptr;

	if (!pFnDivideEqual_ByteByte)
	{
		pFnDivideEqual_ByteByte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_DIVIDEEQUAL_BYTEBYTE));
	}

	UObject_execDivideEqual_ByteByte_Parms DivideEqual_ByteByte_Parms;
	DivideEqual_ByteByte_Parms.B = B;

	pFnDivideEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_ByteByte, &DivideEqual_ByteByte_Parms, nullptr);

	pFnDivideEqual_ByteByte->FunctionFlags |= 0x400;
	A = DivideEqual_ByteByte_Parms.A;

	return DivideEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::MultiplyEqual_ByteFloat(float B, unsigned char& A)
{
	static UFunction* pFnMultiplyEqual_ByteFloat = nullptr;

	if (!pFnMultiplyEqual_ByteFloat)
	{
		pFnMultiplyEqual_ByteFloat = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_BYTEFLOAT));
	}

	UObject_execMultiplyEqual_ByteFloat_Parms MultiplyEqual_ByteFloat_Parms;
	memcpy_s(&MultiplyEqual_ByteFloat_Parms.B, 0x4, &B, 0x4);

	pFnMultiplyEqual_ByteFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Parms, nullptr);

	pFnMultiplyEqual_ByteFloat->FunctionFlags |= 0x400;
	A = MultiplyEqual_ByteFloat_Parms.A;

	return MultiplyEqual_ByteFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned char                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  A                              (CPF_Parm | CPF_OutParm)

unsigned char UObject::MultiplyEqual_ByteByte(unsigned char B, unsigned char& A)
{
	static UFunction* pFnMultiplyEqual_ByteByte = nullptr;

	if (!pFnMultiplyEqual_ByteByte)
	{
		pFnMultiplyEqual_ByteByte = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_MULTIPLYEQUAL_BYTEBYTE));
	}

	UObject_execMultiplyEqual_ByteByte_Parms MultiplyEqual_ByteByte_Parms;
	MultiplyEqual_ByteByte_Parms.B = B;

	pFnMultiplyEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Parms, nullptr);

	pFnMultiplyEqual_ByteByte->FunctionFlags |= 0x400;
	A = MultiplyEqual_ByteByte_Parms.A;

	return MultiplyEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.OrOr_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm | CPF_SkipParm)

bool UObject::OrOr_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnOrOr_BoolBool = nullptr;

	if (!pFnOrOr_BoolBool)
	{
		pFnOrOr_BoolBool = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_OROR_BOOLBOOL));
	}

	UObject_execOrOr_BoolBool_Parms OrOr_BoolBool_Parms;
	OrOr_BoolBool_Parms.A = A;
	OrOr_BoolBool_Parms.B = B;

	pFnOrOr_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOrOr_BoolBool, &OrOr_BoolBool_Parms, nullptr);

	pFnOrOr_BoolBool->FunctionFlags |= 0x400;

	return OrOr_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.XorXor_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

bool UObject::XorXor_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnXorXor_BoolBool = nullptr;

	if (!pFnXorXor_BoolBool)
	{
		pFnXorXor_BoolBool = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_XORXOR_BOOLBOOL));
	}

	UObject_execXorXor_BoolBool_Parms XorXor_BoolBool_Parms;
	XorXor_BoolBool_Parms.A = A;
	XorXor_BoolBool_Parms.B = B;

	pFnXorXor_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnXorXor_BoolBool, &XorXor_BoolBool_Parms, nullptr);

	pFnXorXor_BoolBool->FunctionFlags |= 0x400;

	return XorXor_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.AndAnd_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm | CPF_SkipParm)

bool UObject::AndAnd_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnAndAnd_BoolBool = nullptr;

	if (!pFnAndAnd_BoolBool)
	{
		pFnAndAnd_BoolBool = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_ANDAND_BOOLBOOL));
	}

	UObject_execAndAnd_BoolBool_Parms AndAnd_BoolBool_Parms;
	AndAnd_BoolBool_Parms.A = A;
	AndAnd_BoolBool_Parms.B = B;

	pFnAndAnd_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAndAnd_BoolBool, &AndAnd_BoolBool_Parms, nullptr);

	pFnAndAnd_BoolBool->FunctionFlags |= 0x400;

	return AndAnd_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

bool UObject::NotEqual_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnNotEqual_BoolBool = nullptr;

	if (!pFnNotEqual_BoolBool)
	{
		pFnNotEqual_BoolBool = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOTEQUAL_BOOLBOOL));
	}

	UObject_execNotEqual_BoolBool_Parms NotEqual_BoolBool_Parms;
	NotEqual_BoolBool_Parms.A = A;
	NotEqual_BoolBool_Parms.B = B;

	pFnNotEqual_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_BoolBool, &NotEqual_BoolBool_Parms, nullptr);

	pFnNotEqual_BoolBool->FunctionFlags |= 0x400;

	return NotEqual_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

bool UObject::EqualEqual_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnEqualEqual_BoolBool = nullptr;

	if (!pFnEqualEqual_BoolBool)
	{
		pFnEqualEqual_BoolBool = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_EQUALEQUAL_BOOLBOOL));
	}

	UObject_execEqualEqual_BoolBool_Parms EqualEqual_BoolBool_Parms;
	EqualEqual_BoolBool_Parms.A = A;
	EqualEqual_BoolBool_Parms.B = B;

	pFnEqualEqual_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_BoolBool, &EqualEqual_BoolBool_Parms, nullptr);

	pFnEqualEqual_BoolBool->FunctionFlags |= 0x400;

	return EqualEqual_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.Not_PreBool
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)

bool UObject::Not_PreBool(unsigned long A)
{
	static UFunction* pFnNot_PreBool = nullptr;

	if (!pFnNot_PreBool)
	{
		pFnNot_PreBool = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECT_NOT_PREBOOL));
	}

	UObject_execNot_PreBool_Parms Not_PreBool_Parms;
	Not_PreBool_Parms.A = A;

	pFnNot_PreBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNot_PreBool, &Not_PreBool_Parms, nullptr);

	pFnNot_PreBool->FunctionFlags |= 0x400;

	return Not_PreBool_Parms.ReturnValue;
};

// Function Core.UTF8.DecodeInline
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 Output                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UUTF8::DecodeInline(TArray<unsigned char>& Input, struct FString& Output)
{
	static UFunction* pFnDecodeInline = nullptr;

	if (!pFnDecodeInline)
	{
		pFnDecodeInline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_UTF8_DECODEINLINE));
	}

	UUTF8_execDecodeInline_Parms DecodeInline_Parms;

	pFnDecodeInline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecodeInline, &DecodeInline_Parms, nullptr);

	pFnDecodeInline->FunctionFlags |= 0x400;
	memcpy_s(&DecodeInline_Parms.Input, 0x10, &Input, 0x10);
	memcpy_s(&DecodeInline_Parms.Output, 0x10, &Output, 0x10);
};

// Function Core.UTF8.Decode
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UUTF8::Decode(TArray<unsigned char>& Input)
{
	static UFunction* pFnDecode = nullptr;

	if (!pFnDecode)
	{
		pFnDecode = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_UTF8_DECODE));
	}

	UUTF8_execDecode_Parms Decode_Parms;

	pFnDecode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecode, &Decode_Parms, nullptr);

	pFnDecode->FunctionFlags |= 0x400;
	memcpy_s(&Decode_Parms.Input, 0x10, &Input, 0x10);

	return Decode_Parms.ReturnValue;
};

// Function Core.UTF8.EncodeInline
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 Input                          (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Output                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UUTF8::EncodeInline(struct FString Input, TArray<unsigned char>& Output)
{
	static UFunction* pFnEncodeInline = nullptr;

	if (!pFnEncodeInline)
	{
		pFnEncodeInline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_UTF8_ENCODEINLINE));
	}

	UUTF8_execEncodeInline_Parms EncodeInline_Parms;
	memcpy_s(&EncodeInline_Parms.Input, 0x10, &Input, 0x10);

	pFnEncodeInline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncodeInline, &EncodeInline_Parms, nullptr);

	pFnEncodeInline->FunctionFlags |= 0x400;
	memcpy_s(&EncodeInline_Parms.Output, 0x10, &Output, 0x10);
};

// Function Core.UTF8.Encode
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Input                          (CPF_Parm | CPF_NeedCtorLink)

TArray<unsigned char> UUTF8::Encode(struct FString Input)
{
	static UFunction* pFnEncode = nullptr;

	if (!pFnEncode)
	{
		pFnEncode = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_UTF8_ENCODE));
	}

	UUTF8_execEncode_Parms Encode_Parms;
	memcpy_s(&Encode_Parms.Input, 0x10, &Input, 0x10);

	pFnEncode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncode, &Encode_Parms, nullptr);

	pFnEncode->FunctionFlags |= 0x400;

	return Encode_Parms.ReturnValue;
};

// Function Core.Subscription.__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74
// [0x40042003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Private | FUNC_Const | FUNC_AllFlags)
// Parameter info:
// class USubscription*           S                              (CPF_Parm)

void USubscription::__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74(class USubscription* S)
{
	static UFunction* pFn__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74 = nullptr;

	if (!pFn__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74)
	{
		pFn__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74 = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION___SUBSCRIPTION__TRIGGERALL_DD23D598441796B09EC4B188D6BC9F74));
	}

	USubscription_exec__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74_Parms __Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74_Parms;
	memcpy_s(&__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74_Parms.S, 0x8, &S, 0x8);

	this->ProcessEvent(pFn__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74, &__Subscription__TriggerAll_DD23D598441796B09EC4B188D6BC9F74_Parms, nullptr);
};

// Function Core.Subscription.GetNone
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USubscription*           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class USubscription* USubscription::GetNone()
{
	static UFunction* pFnGetNone = nullptr;

	if (!pFnGetNone)
	{
		pFnGetNone = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_GETNONE));
	}

	USubscription_execGetNone_Parms GetNone_Parms;

	pFnGetNone->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetNone, &GetNone_Parms, nullptr);

	pFnGetNone->FunctionFlags |= 0x400;

	return GetNone_Parms.ReturnValue;
};

// Function Core.Subscription.TriggerAll
// [0x00422003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class USubscription*>   Subscriptions                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void USubscription::TriggerAll(TArray<class USubscription*>& Subscriptions)
{
	static UFunction* pFnTriggerAll = nullptr;

	if (!pFnTriggerAll)
	{
		pFnTriggerAll = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_TRIGGERALL));
	}

	USubscription_execTriggerAll_Parms TriggerAll_Parms;

	this->ProcessEvent(pFnTriggerAll, &TriggerAll_Parms, nullptr);
	memcpy_s(&TriggerAll_Parms.Subscriptions, 0x10, &Subscriptions, 0x10);
};

// Function Core.Subscription.Create
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USubscription*           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

class USubscription* USubscription::Create(struct FScriptDelegate InCallback)
{
	static UFunction* pFnCreate = nullptr;

	if (!pFnCreate)
	{
		pFnCreate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_CREATE));
	}

	USubscription_execCreate_Parms Create_Parms;
	memcpy_s(&Create_Parms.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(pFnCreate, &Create_Parms, nullptr);

	return Create_Parms.ReturnValue;
};

// Function Core.Subscription.Dispose
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USubscription::eventDispose()
{
	static UFunction* pFnDispose = nullptr;

	if (!pFnDispose)
	{
		pFnDispose = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_DISPOSE));
	}

	USubscription_eventDispose_Parms Dispose_Parms;

	this->ProcessEvent(pFnDispose, &Dispose_Parms, nullptr);
};

// Function Core.Subscription.TriggerCallback
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USubscription::TriggerCallback()
{
	static UFunction* pFnTriggerCallback = nullptr;

	if (!pFnTriggerCallback)
	{
		pFnTriggerCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_TRIGGERCALLBACK));
	}

	USubscription_execTriggerCallback_Parms TriggerCallback_Parms;

	this->ProcessEvent(pFnTriggerCallback, &TriggerCallback_Parms, nullptr);
};

// Function Core.Subscription.SetCallback
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InCallback                     (CPF_Parm | CPF_NeedCtorLink)

void USubscription::SetCallback(struct FScriptDelegate InCallback)
{
	static UFunction* pFnSetCallback = nullptr;

	if (!pFnSetCallback)
	{
		pFnSetCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_SETCALLBACK));
	}

	USubscription_execSetCallback_Parms SetCallback_Parms;
	memcpy_s(&SetCallback_Parms.InCallback, 0x18, &InCallback, 0x18);

	this->ProcessEvent(pFnSetCallback, &SetCallback_Parms, nullptr);
};

// Function Core.Subscription.SubscriberCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void USubscription::SubscriberCallback()
{
	static UFunction* pFnSubscriberCallback = nullptr;

	if (!pFnSubscriberCallback)
	{
		pFnSubscriberCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_SUBSCRIPTION_SUBSCRIBERCALLBACK));
	}

	USubscription_execSubscriberCallback_Parms SubscriberCallback_Parms;

	this->ProcessEvent(pFnSubscriberCallback, &SubscriberCallback_Parms, nullptr);
};

// Function Core.ObjectUtil.ClearNaNValues
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 InObject                       (CPF_Parm)

void UObjectUtil::ClearNaNValues(class UObject* InObject)
{
	static UFunction* pFnClearNaNValues = nullptr;

	if (!pFnClearNaNValues)
	{
		pFnClearNaNValues = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTUTIL_CLEARNANVALUES));
	}

	UObjectUtil_execClearNaNValues_Parms ClearNaNValues_Parms;
	memcpy_s(&ClearNaNValues_Parms.InObject, 0x8, &InObject, 0x8);

	pFnClearNaNValues->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearNaNValues, &ClearNaNValues_Parms, nullptr);

	pFnClearNaNValues->FunctionFlags |= 0x400;
};

// Function Core.ObjectUtil.IdenticalDeep
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 Left                           (CPF_Parm)
// class UObject*                 Right                          (CPF_Parm)

bool UObjectUtil::IdenticalDeep(class UObject* Left, class UObject* Right)
{
	static UFunction* pFnIdenticalDeep = nullptr;

	if (!pFnIdenticalDeep)
	{
		pFnIdenticalDeep = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTUTIL_IDENTICALDEEP));
	}

	UObjectUtil_execIdenticalDeep_Parms IdenticalDeep_Parms;
	memcpy_s(&IdenticalDeep_Parms.Left, 0x8, &Left, 0x8);
	memcpy_s(&IdenticalDeep_Parms.Right, 0x8, &Right, 0x8);

	pFnIdenticalDeep->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIdenticalDeep, &IdenticalDeep_Parms, nullptr);

	pFnIdenticalDeep->FunctionFlags |= 0x400;

	return IdenticalDeep_Parms.ReturnValue;
};

// Function Core.ObjectUtil.Identical
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 Left                           (CPF_Parm)
// class UObject*                 Right                          (CPF_Parm)

bool UObjectUtil::Identical(class UObject* Left, class UObject* Right)
{
	static UFunction* pFnIdentical = nullptr;

	if (!pFnIdentical)
	{
		pFnIdentical = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTUTIL_IDENTICAL));
	}

	UObjectUtil_execIdentical_Parms Identical_Parms;
	memcpy_s(&Identical_Parms.Left, 0x8, &Left, 0x8);
	memcpy_s(&Identical_Parms.Right, 0x8, &Right, 0x8);

	pFnIdentical->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIdentical, &Identical_Parms, nullptr);

	pFnIdentical->FunctionFlags |= 0x400;

	return Identical_Parms.ReturnValue;
};

// Function Core.ObjectUtil.InitProperties
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 InObject                       (CPF_Parm)

void UObjectUtil::InitProperties(class UObject* InObject)
{
	static UFunction* pFnInitProperties = nullptr;

	if (!pFnInitProperties)
	{
		pFnInitProperties = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTUTIL_INITPROPERTIES));
	}

	UObjectUtil_execInitProperties_Parms InitProperties_Parms;
	memcpy_s(&InitProperties_Parms.InObject, 0x8, &InObject, 0x8);

	pFnInitProperties->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInitProperties, &InitProperties_Parms, nullptr);

	pFnInitProperties->FunctionFlags |= 0x400;
};

// Function Core.ObjectUtil.AllCDOs
// [0x00426405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UClass*                  BaseClass                      (CPF_Parm)
// unsigned long                  bIncludeAbstract               (CPF_OptionalParm | CPF_Parm)
// class UObject*                 OutCDO                         (CPF_Parm | CPF_OutParm)

void UObjectUtil::AllCDOs(class UClass* BaseClass, unsigned long bIncludeAbstract, class UObject*& OutCDO)
{
	static UFunction* pFnAllCDOs = nullptr;

	if (!pFnAllCDOs)
	{
		pFnAllCDOs = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTUTIL_ALLCDOS));
	}

	UObjectUtil_execAllCDOs_Parms AllCDOs_Parms;
	memcpy_s(&AllCDOs_Parms.BaseClass, 0x8, &BaseClass, 0x8);
	AllCDOs_Parms.bIncludeAbstract = bIncludeAbstract;

	pFnAllCDOs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllCDOs, &AllCDOs_Parms, nullptr);

	pFnAllCDOs->FunctionFlags |= 0x400;
	memcpy_s(&AllCDOs_Parms.OutCDO, 0x8, &OutCDO, 0x8);
};

// Function Core.ObjectUtil.GetCDO
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  InClass                        (CPF_Parm)

class UObject* UObjectUtil::GetCDO(class UClass* InClass)
{
	static UFunction* pFnGetCDO = nullptr;

	if (!pFnGetCDO)
	{
		pFnGetCDO = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTUTIL_GETCDO));
	}

	UObjectUtil_execGetCDO_Parms GetCDO_Parms;
	memcpy_s(&GetCDO_Parms.InClass, 0x8, &InClass, 0x8);

	pFnGetCDO->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetCDO, &GetCDO_Parms, nullptr);

	pFnGetCDO->FunctionFlags |= 0x400;

	return GetCDO_Parms.ReturnValue;
};

// Function Core.FileSystem.CloseLogFile
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UFileSystem::CloseLogFile()
{
	static UFunction* pFnCloseLogFile = nullptr;

	if (!pFnCloseLogFile)
	{
		pFnCloseLogFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_CLOSELOGFILE));
	}

	UFileSystem_execCloseLogFile_Parms CloseLogFile_Parms;

	pFnCloseLogFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCloseLogFile, &CloseLogFile_Parms, nullptr);

	pFnCloseLogFile->FunctionFlags |= 0x400;
};

// Function Core.FileSystem.GetLogFileName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UFileSystem::GetLogFileName()
{
	static UFunction* pFnGetLogFileName = nullptr;

	if (!pFnGetLogFileName)
	{
		pFnGetLogFileName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETLOGFILENAME));
	}

	UFileSystem_execGetLogFileName_Parms GetLogFileName_Parms;

	pFnGetLogFileName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLogFileName, &GetLogFileName_Parms, nullptr);

	pFnGetLogFileName->FunctionFlags |= 0x400;

	return GetLogFileName_Parms.ReturnValue;
};

// Function Core.FileSystem.DeleteDirectoryTree
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

bool UFileSystem::DeleteDirectoryTree(struct FString Path)
{
	static UFunction* pFnDeleteDirectoryTree = nullptr;

	if (!pFnDeleteDirectoryTree)
	{
		pFnDeleteDirectoryTree = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_DELETEDIRECTORYTREE));
	}

	UFileSystem_execDeleteDirectoryTree_Parms DeleteDirectoryTree_Parms;
	memcpy_s(&DeleteDirectoryTree_Parms.Path, 0x10, &Path, 0x10);

	pFnDeleteDirectoryTree->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteDirectoryTree, &DeleteDirectoryTree_Parms, nullptr);

	pFnDeleteDirectoryTree->FunctionFlags |= 0x400;

	return DeleteDirectoryTree_Parms.ReturnValue;
};

// Function Core.FileSystem.DeleteFile
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

bool UFileSystem::DeleteFileW(struct FString Path)
{
	static UFunction* pFnDeleteFileW = nullptr;

	if (!pFnDeleteFileW)
	{
		pFnDeleteFileW = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_DELETEFILE));
	}

	UFileSystem_execDeleteFileW_Parms DeleteFileW_Parms;
	memcpy_s(&DeleteFileW_Parms.Path, 0x10, &Path, 0x10);

	pFnDeleteFileW->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteFileW, &DeleteFileW_Parms, nullptr);

	pFnDeleteFileW->FunctionFlags |= 0x400;

	return DeleteFileW_Parms.ReturnValue;
};

// Function Core.FileSystem.AppendStringToFile
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_Parm | CPF_NeedCtorLink)

bool UFileSystem::AppendStringToFile(struct FString Path, struct FString Text)
{
	static UFunction* pFnAppendStringToFile = nullptr;

	if (!pFnAppendStringToFile)
	{
		pFnAppendStringToFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_APPENDSTRINGTOFILE));
	}

	UFileSystem_execAppendStringToFile_Parms AppendStringToFile_Parms;
	memcpy_s(&AppendStringToFile_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&AppendStringToFile_Parms.Text, 0x10, &Text, 0x10);

	pFnAppendStringToFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAppendStringToFile, &AppendStringToFile_Parms, nullptr);

	pFnAppendStringToFile->FunctionFlags |= 0x400;

	return AppendStringToFile_Parms.ReturnValue;
};

// Function Core.FileSystem.SaveStringToFile
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_Parm | CPF_NeedCtorLink)

bool UFileSystem::SaveStringToFile(struct FString Path, struct FString Text)
{
	static UFunction* pFnSaveStringToFile = nullptr;

	if (!pFnSaveStringToFile)
	{
		pFnSaveStringToFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_SAVESTRINGTOFILE));
	}

	UFileSystem_execSaveStringToFile_Parms SaveStringToFile_Parms;
	memcpy_s(&SaveStringToFile_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&SaveStringToFile_Parms.Text, 0x10, &Text, 0x10);

	pFnSaveStringToFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSaveStringToFile, &SaveStringToFile_Parms, nullptr);

	pFnSaveStringToFile->FunctionFlags |= 0x400;

	return SaveStringToFile_Parms.ReturnValue;
};

// Function Core.FileSystem.SaveBytesToFile
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Bytes                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UFileSystem::SaveBytesToFile(struct FString Path, TArray<unsigned char>& Bytes)
{
	static UFunction* pFnSaveBytesToFile = nullptr;

	if (!pFnSaveBytesToFile)
	{
		pFnSaveBytesToFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_SAVEBYTESTOFILE));
	}

	UFileSystem_execSaveBytesToFile_Parms SaveBytesToFile_Parms;
	memcpy_s(&SaveBytesToFile_Parms.Path, 0x10, &Path, 0x10);

	pFnSaveBytesToFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSaveBytesToFile, &SaveBytesToFile_Parms, nullptr);

	pFnSaveBytesToFile->FunctionFlags |= 0x400;
	memcpy_s(&SaveBytesToFile_Parms.Bytes, 0x10, &Bytes, 0x10);

	return SaveBytesToFile_Parms.ReturnValue;
};

// Function Core.FileSystem.LoadFileToBytes
// [0x00426401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// int                            StartOffset                    (CPF_OptionalParm | CPF_Parm)
// int                            Length                         (CPF_OptionalParm | CPF_Parm)
// TArray<unsigned char>          OutBytes                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UFileSystem::LoadFileToBytes(struct FString Path, int StartOffset, int Length, TArray<unsigned char>& OutBytes)
{
	static UFunction* pFnLoadFileToBytes = nullptr;

	if (!pFnLoadFileToBytes)
	{
		pFnLoadFileToBytes = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_LOADFILETOBYTES));
	}

	UFileSystem_execLoadFileToBytes_Parms LoadFileToBytes_Parms;
	memcpy_s(&LoadFileToBytes_Parms.Path, 0x10, &Path, 0x10);
	memcpy_s(&LoadFileToBytes_Parms.StartOffset, 0x4, &StartOffset, 0x4);
	memcpy_s(&LoadFileToBytes_Parms.Length, 0x4, &Length, 0x4);

	pFnLoadFileToBytes->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoadFileToBytes, &LoadFileToBytes_Parms, nullptr);

	pFnLoadFileToBytes->FunctionFlags |= 0x400;
	memcpy_s(&LoadFileToBytes_Parms.OutBytes, 0x10, &OutBytes, 0x10);

	return LoadFileToBytes_Parms.ReturnValue;
};

// Function Core.FileSystem.LoadFileToString
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 OutText                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UFileSystem::LoadFileToString(struct FString Path, struct FString& OutText)
{
	static UFunction* pFnLoadFileToString = nullptr;

	if (!pFnLoadFileToString)
	{
		pFnLoadFileToString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_LOADFILETOSTRING));
	}

	UFileSystem_execLoadFileToString_Parms LoadFileToString_Parms;
	memcpy_s(&LoadFileToString_Parms.Path, 0x10, &Path, 0x10);

	pFnLoadFileToString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoadFileToString, &LoadFileToString_Parms, nullptr);

	pFnLoadFileToString->FunctionFlags |= 0x400;
	memcpy_s(&LoadFileToString_Parms.OutText, 0x10, &OutText, 0x10);

	return LoadFileToString_Parms.ReturnValue;
};

// Function Core.FileSystem.GetFileSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

int UFileSystem::GetFileSize(struct FString Path)
{
	static UFunction* pFnGetFileSize = nullptr;

	if (!pFnGetFileSize)
	{
		pFnGetFileSize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETFILESIZE));
	}

	UFileSystem_execGetFileSize_Parms GetFileSize_Parms;
	memcpy_s(&GetFileSize_Parms.Path, 0x10, &Path, 0x10);

	pFnGetFileSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFileSize, &GetFileSize_Parms, nullptr);

	pFnGetFileSize->FunctionFlags |= 0x400;

	return GetFileSize_Parms.ReturnValue;
};

// Function Core.FileSystem.GetFileExtensionWithoutDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UFileSystem::GetFileExtensionWithoutDot(struct FString Path)
{
	static UFunction* pFnGetFileExtensionWithoutDot = nullptr;

	if (!pFnGetFileExtensionWithoutDot)
	{
		pFnGetFileExtensionWithoutDot = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETFILEEXTENSIONWITHOUTDOT));
	}

	UFileSystem_execGetFileExtensionWithoutDot_Parms GetFileExtensionWithoutDot_Parms;
	memcpy_s(&GetFileExtensionWithoutDot_Parms.Path, 0x10, &Path, 0x10);

	pFnGetFileExtensionWithoutDot->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFileExtensionWithoutDot, &GetFileExtensionWithoutDot_Parms, nullptr);

	pFnGetFileExtensionWithoutDot->FunctionFlags |= 0x400;

	return GetFileExtensionWithoutDot_Parms.ReturnValue;
};

// Function Core.FileSystem.GetFileExtension
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UFileSystem::GetFileExtension(struct FString Path)
{
	static UFunction* pFnGetFileExtension = nullptr;

	if (!pFnGetFileExtension)
	{
		pFnGetFileExtension = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETFILEEXTENSION));
	}

	UFileSystem_execGetFileExtension_Parms GetFileExtension_Parms;
	memcpy_s(&GetFileExtension_Parms.Path, 0x10, &Path, 0x10);

	pFnGetFileExtension->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFileExtension, &GetFileExtension_Parms, nullptr);

	pFnGetFileExtension->FunctionFlags |= 0x400;

	return GetFileExtension_Parms.ReturnValue;
};

// Function Core.FileSystem.GetFilePathWithoutExtension
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UFileSystem::GetFilePathWithoutExtension(struct FString Path)
{
	static UFunction* pFnGetFilePathWithoutExtension = nullptr;

	if (!pFnGetFilePathWithoutExtension)
	{
		pFnGetFilePathWithoutExtension = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETFILEPATHWITHOUTEXTENSION));
	}

	UFileSystem_execGetFilePathWithoutExtension_Parms GetFilePathWithoutExtension_Parms;
	memcpy_s(&GetFilePathWithoutExtension_Parms.Path, 0x10, &Path, 0x10);

	pFnGetFilePathWithoutExtension->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFilePathWithoutExtension, &GetFilePathWithoutExtension_Parms, nullptr);

	pFnGetFilePathWithoutExtension->FunctionFlags |= 0x400;

	return GetFilePathWithoutExtension_Parms.ReturnValue;
};

// Function Core.FileSystem.GetFileNameWithoutExtension
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UFileSystem::GetFileNameWithoutExtension(struct FString Path)
{
	static UFunction* pFnGetFileNameWithoutExtension = nullptr;

	if (!pFnGetFileNameWithoutExtension)
	{
		pFnGetFileNameWithoutExtension = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETFILENAMEWITHOUTEXTENSION));
	}

	UFileSystem_execGetFileNameWithoutExtension_Parms GetFileNameWithoutExtension_Parms;
	memcpy_s(&GetFileNameWithoutExtension_Parms.Path, 0x10, &Path, 0x10);

	pFnGetFileNameWithoutExtension->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFileNameWithoutExtension, &GetFileNameWithoutExtension_Parms, nullptr);

	pFnGetFileNameWithoutExtension->FunctionFlags |= 0x400;

	return GetFileNameWithoutExtension_Parms.ReturnValue;
};

// Function Core.FileSystem.GetFilename
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FString UFileSystem::GetFilename(struct FString Path)
{
	static UFunction* pFnGetFilename = nullptr;

	if (!pFnGetFilename)
	{
		pFnGetFilename = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_GETFILENAME));
	}

	UFileSystem_execGetFilename_Parms GetFilename_Parms;
	memcpy_s(&GetFilename_Parms.Path, 0x10, &Path, 0x10);

	pFnGetFilename->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFilename, &GetFilename_Parms, nullptr);

	pFnGetFilename->FunctionFlags |= 0x400;

	return GetFilename_Parms.ReturnValue;
};

// Function Core.FileSystem.FindFiles
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 Path                           (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FString>         OutFilenames                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UFileSystem::FindFiles(struct FString Path, TArray<struct FString>& OutFilenames)
{
	static UFunction* pFnFindFiles = nullptr;

	if (!pFnFindFiles)
	{
		pFnFindFiles = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_FILESYSTEM_FINDFILES));
	}

	UFileSystem_execFindFiles_Parms FindFiles_Parms;
	memcpy_s(&FindFiles_Parms.Path, 0x10, &Path, 0x10);

	pFnFindFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindFiles, &FindFiles_Parms, nullptr);

	pFnFindFiles->FunctionFlags |= 0x400;
	memcpy_s(&FindFiles_Parms.OutFilenames, 0x10, &OutFilenames, 0x10);
};

UFunction* UFunction::FindFunction(char const* functionFullName)
{
	static bool initialized = false;
	static std::map<std::string, UFunction*> foundFunctions{};

	if (!initialized)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				std::string objectFullName = uObject->GetFullName();

				if (objectFullName.find("Function") == 0)
				{
					foundFunctions[objectFullName] = reinterpret_cast<UFunction*>(uObject);
				}
			}
		}

		initialized = true;
	}

	if (foundFunctions.find(functionFullName) != foundFunctions.end())
	{
		return foundFunctions[functionFullName];
	}

	return nullptr;
}

// Function Core.ErrorType.CreateError
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UError*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 InErrorMessage                 (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int                            InErrorCode                    (CPF_OptionalParm | CPF_Parm)

class UError* UErrorType::CreateError(struct FString InErrorMessage, int InErrorCode)
{
	static UFunction* pFnCreateError = nullptr;

	if (!pFnCreateError)
	{
		pFnCreateError = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ERRORTYPE_CREATEERROR));
	}

	UErrorType_execCreateError_Parms CreateError_Parms;
	memcpy_s(&CreateError_Parms.InErrorMessage, 0x10, &InErrorMessage, 0x10);
	memcpy_s(&CreateError_Parms.InErrorCode, 0x4, &InErrorCode, 0x4);

	pFnCreateError->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateError, &CreateError_Parms, nullptr);

	pFnCreateError->FunctionFlags |= 0x400;

	return CreateError_Parms.ReturnValue;
};

// Function Core.ErrorType.GetLocalizedMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UErrorType::GetLocalizedMessage()
{
	static UFunction* pFnGetLocalizedMessage = nullptr;

	if (!pFnGetLocalizedMessage)
	{
		pFnGetLocalizedMessage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ERRORTYPE_GETLOCALIZEDMESSAGE));
	}

	UErrorType_execGetLocalizedMessage_Parms GetLocalizedMessage_Parms;

	pFnGetLocalizedMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLocalizedMessage, &GetLocalizedMessage_Parms, nullptr);

	pFnGetLocalizedMessage->FunctionFlags |= 0x400;

	return GetLocalizedMessage_Parms.ReturnValue;
};

// Function Core.ErrorList.GetErrorType
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UErrorType*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Error                          (CPF_Parm)

class UErrorType* UErrorList::GetErrorType(struct FName Error)
{
	static UFunction* pFnGetErrorType = nullptr;

	if (!pFnGetErrorType)
	{
		pFnGetErrorType = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ERRORLIST_GETERRORTYPE));
	}

	UErrorList_execGetErrorType_Parms GetErrorType_Parms;
	memcpy_s(&GetErrorType_Parms.Error, 0x8, &Error, 0x8);

	pFnGetErrorType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetErrorType, &GetErrorType_Parms, nullptr);

	pFnGetErrorType->FunctionFlags |= 0x400;

	return GetErrorType_Parms.ReturnValue;
};

// Function Core.Error.GetDebugMessage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UError::GetDebugMessage()
{
	static UFunction* pFnGetDebugMessage = nullptr;

	if (!pFnGetDebugMessage)
	{
		pFnGetDebugMessage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ERROR_GETDEBUGMESSAGE));
	}

	UError_execGetDebugMessage_Parms GetDebugMessage_Parms;

	this->ProcessEvent(pFnGetDebugMessage, &GetDebugMessage_Parms, nullptr);

	return GetDebugMessage_Parms.ReturnValue;
};

// Function Core.Error.GetLocalizedMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UError::GetLocalizedMessage()
{
	static UFunction* pFnGetLocalizedMessage = nullptr;

	if (!pFnGetLocalizedMessage)
	{
		pFnGetLocalizedMessage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ERROR_GETLOCALIZEDMESSAGE));
	}

	UError_execGetLocalizedMessage_Parms GetLocalizedMessage_Parms;

	pFnGetLocalizedMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLocalizedMessage, &GetLocalizedMessage_Parms, nullptr);

	pFnGetLocalizedMessage->FunctionFlags |= 0x400;

	return GetLocalizedMessage_Parms.ReturnValue;
};

// Function Core.DelegateTracker.RemoveDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int                            CallbackId                     (CPF_Parm)

struct FScriptDelegate UDelegateTracker::RemoveDelegate(int CallbackId)
{
	static UFunction* pFnRemoveDelegate = nullptr;

	if (!pFnRemoveDelegate)
	{
		pFnRemoveDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DELEGATETRACKER_REMOVEDELEGATE));
	}

	UDelegateTracker_execRemoveDelegate_Parms RemoveDelegate_Parms;
	memcpy_s(&RemoveDelegate_Parms.CallbackId, 0x4, &CallbackId, 0x4);

	pFnRemoveDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveDelegate, &RemoveDelegate_Parms, nullptr);

	pFnRemoveDelegate->FunctionFlags |= 0x400;

	return RemoveDelegate_Parms.ReturnValue;
};

// Function Core.DelegateTracker.AddDelegate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

int UDelegateTracker::AddDelegate(struct FScriptDelegate Callback)
{
	static UFunction* pFnAddDelegate = nullptr;

	if (!pFnAddDelegate)
	{
		pFnAddDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DELEGATETRACKER_ADDDELEGATE));
	}

	UDelegateTracker_execAddDelegate_Parms AddDelegate_Parms;
	memcpy_s(&AddDelegate_Parms.Callback, 0x18, &Callback, 0x18);

	pFnAddDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddDelegate, &AddDelegate_Parms, nullptr);

	pFnAddDelegate->FunctionFlags |= 0x400;

	return AddDelegate_Parms.ReturnValue;
};

// Function Core.DelegateTracker.PlaceholderDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UDelegateTracker::PlaceholderDelegate()
{
	static UFunction* pFnPlaceholderDelegate = nullptr;

	if (!pFnPlaceholderDelegate)
	{
		pFnPlaceholderDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DELEGATETRACKER_PLACEHOLDERDELEGATE));
	}

	UDelegateTracker_execPlaceholderDelegate_Parms PlaceholderDelegate_Parms;

	this->ProcessEvent(pFnPlaceholderDelegate, &PlaceholderDelegate_Parms, nullptr);
};

// Function Core.DebugDrawer.Reset
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UDebugDrawer::Reset()
{
	static UFunction* pFnReset = nullptr;

	if (!pFnReset)
	{
		pFnReset = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_RESET));
	}

	UDebugDrawer_execReset_Parms Reset_Parms;

	this->ProcessEvent(pFnReset, &Reset_Parms, nullptr);
};

// Function Core.DebugDrawer.PrintText
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FColor                  InColor                        (CPF_OptionalParm | CPF_Parm)

void UDebugDrawer::PrintText(struct FString Text, struct FColor InColor)
{
	static UFunction* pFnPrintText = nullptr;

	if (!pFnPrintText)
	{
		pFnPrintText = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_PRINTTEXT));
	}

	UDebugDrawer_execPrintText_Parms PrintText_Parms;
	memcpy_s(&PrintText_Parms.Text, 0x10, &Text, 0x10);
	memcpy_s(&PrintText_Parms.InColor, 0x4, &InColor, 0x4);

	this->ProcessEvent(pFnPrintText, &PrintText_Parms, nullptr);
};

// Function Core.DebugDrawer.PrintArrayProperty
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 PropertyName                   (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// struct FString                 Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UDebugDrawer::eventPrintArrayProperty(struct FString PropertyName, int Index, struct FString Value)
{
	static UFunction* pFnPrintArrayProperty = nullptr;

	if (!pFnPrintArrayProperty)
	{
		pFnPrintArrayProperty = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_PRINTARRAYPROPERTY));
	}

	UDebugDrawer_eventPrintArrayProperty_Parms PrintArrayProperty_Parms;
	memcpy_s(&PrintArrayProperty_Parms.PropertyName, 0x10, &PropertyName, 0x10);
	memcpy_s(&PrintArrayProperty_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&PrintArrayProperty_Parms.Value, 0x10, &Value, 0x10);

	this->ProcessEvent(pFnPrintArrayProperty, &PrintArrayProperty_Parms, nullptr);
};

// Function Core.DebugDrawer.PrintProperty
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 PropertyName                   (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UDebugDrawer::eventPrintProperty(struct FString PropertyName, struct FString Value)
{
	static UFunction* pFnPrintProperty = nullptr;

	if (!pFnPrintProperty)
	{
		pFnPrintProperty = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_PRINTPROPERTY));
	}

	UDebugDrawer_eventPrintProperty_Parms PrintProperty_Parms;
	memcpy_s(&PrintProperty_Parms.PropertyName, 0x10, &PropertyName, 0x10);
	memcpy_s(&PrintProperty_Parms.Value, 0x10, &Value, 0x10);

	this->ProcessEvent(pFnPrintProperty, &PrintProperty_Parms, nullptr);
};

// Function Core.DebugDrawer.EndSection
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UDebugDrawer::eventEndSection()
{
	static UFunction* pFnEndSection = nullptr;

	if (!pFnEndSection)
	{
		pFnEndSection = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_ENDSECTION));
	}

	UDebugDrawer_eventEndSection_Parms EndSection_Parms;

	this->ProcessEvent(pFnEndSection, &EndSection_Parms, nullptr);
};

// Function Core.DebugDrawer.StartSection
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UDebugDrawer::eventStartSection()
{
	static UFunction* pFnStartSection = nullptr;

	if (!pFnStartSection)
	{
		pFnStartSection = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_STARTSECTION));
	}

	UDebugDrawer_eventStartSection_Parms StartSection_Parms;

	this->ProcessEvent(pFnStartSection, &StartSection_Parms, nullptr);
};

// Function Core.DebugDrawer.PrintObject
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Title                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class UObject*                 ForObj                         (CPF_Parm)

void UDebugDrawer::eventPrintObject(struct FString Title, class UObject* ForObj)
{
	static UFunction* pFnPrintObject = nullptr;

	if (!pFnPrintObject)
	{
		pFnPrintObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_PRINTOBJECT));
	}

	UDebugDrawer_eventPrintObject_Parms PrintObject_Parms;
	memcpy_s(&PrintObject_Parms.Title, 0x10, &Title, 0x10);
	memcpy_s(&PrintObject_Parms.ForObj, 0x8, &ForObj, 0x8);

	this->ProcessEvent(pFnPrintObject, &PrintObject_Parms, nullptr);
};

// Function Core.DebugDrawer.PrintSeperater
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UDebugDrawer::eventPrintSeperater()
{
	static UFunction* pFnPrintSeperater = nullptr;

	if (!pFnPrintSeperater)
	{
		pFnPrintSeperater = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_PRINTSEPERATER));
	}

	UDebugDrawer_eventPrintSeperater_Parms PrintSeperater_Parms;

	this->ProcessEvent(pFnPrintSeperater, &PrintSeperater_Parms, nullptr);
};

// Function Core.DebugDrawer.DebugArrayObject
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Title                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// class UObject*                 ForObj                         (CPF_Parm)

void UDebugDrawer::eventDebugArrayObject(struct FString Title, int Index, class UObject* ForObj)
{
	static UFunction* pFnDebugArrayObject = nullptr;

	if (!pFnDebugArrayObject)
	{
		pFnDebugArrayObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_DEBUGARRAYOBJECT));
	}

	UDebugDrawer_eventDebugArrayObject_Parms DebugArrayObject_Parms;
	memcpy_s(&DebugArrayObject_Parms.Title, 0x10, &Title, 0x10);
	memcpy_s(&DebugArrayObject_Parms.Index, 0x4, &Index, 0x4);
	memcpy_s(&DebugArrayObject_Parms.ForObj, 0x8, &ForObj, 0x8);

	this->ProcessEvent(pFnDebugArrayObject, &DebugArrayObject_Parms, nullptr);
};

// Function Core.DebugDrawer.DebugObject
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Title                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class UObject*                 ForObj                         (CPF_Parm)

void UDebugDrawer::eventDebugObject(struct FString Title, class UObject* ForObj)
{
	static UFunction* pFnDebugObject = nullptr;

	if (!pFnDebugObject)
	{
		pFnDebugObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_DEBUGOBJECT));
	}

	UDebugDrawer_eventDebugObject_Parms DebugObject_Parms;
	memcpy_s(&DebugObject_Parms.Title, 0x10, &Title, 0x10);
	memcpy_s(&DebugObject_Parms.ForObj, 0x8, &ForObj, 0x8);

	this->ProcessEvent(pFnDebugObject, &DebugObject_Parms, nullptr);
};

// Function Core.DebugDrawer.ShouldDisplayDebug
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Category                       (CPF_Parm)

bool UDebugDrawer::ShouldDisplayDebug(struct FName Category)
{
	static UFunction* pFnShouldDisplayDebug = nullptr;

	if (!pFnShouldDisplayDebug)
	{
		pFnShouldDisplayDebug = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_SHOULDDISPLAYDEBUG));
	}

	UDebugDrawer_execShouldDisplayDebug_Parms ShouldDisplayDebug_Parms;
	memcpy_s(&ShouldDisplayDebug_Parms.Category, 0x8, &Category, 0x8);

	this->ProcessEvent(pFnShouldDisplayDebug, &ShouldDisplayDebug_Parms, nullptr);

	return ShouldDisplayDebug_Parms.ReturnValue;
};

// Function Core.DebugDrawer.LogFunc
// [0x00120003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 Str                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UDebugDrawer::LogFunc(struct FString Str)
{
	static UFunction* pFnLogFunc = nullptr;

	if (!pFnLogFunc)
	{
		pFnLogFunc = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DEBUGDRAWER_LOGFUNC));
	}

	UDebugDrawer_execLogFunc_Parms LogFunc_Parms;
	memcpy_s(&LogFunc_Parms.Str, 0x10, &Str, 0x10);

	this->ProcessEvent(pFnLogFunc, &LogFunc_Parms, nullptr);
};

// Function Core.Compression.ZLibCompress
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<unsigned char>          Uncompressed                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          OutCompressed                  (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UCompression::ZLibCompress(TArray<unsigned char>& Uncompressed, TArray<unsigned char>& OutCompressed)
{
	static UFunction* pFnZLibCompress = nullptr;

	if (!pFnZLibCompress)
	{
		pFnZLibCompress = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_COMPRESSION_ZLIBCOMPRESS));
	}

	UCompression_execZLibCompress_Parms ZLibCompress_Parms;

	pFnZLibCompress->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnZLibCompress, &ZLibCompress_Parms, nullptr);

	pFnZLibCompress->FunctionFlags |= 0x400;
	memcpy_s(&ZLibCompress_Parms.Uncompressed, 0x10, &Uncompressed, 0x10);
	memcpy_s(&ZLibCompress_Parms.OutCompressed, 0x10, &OutCompressed, 0x10);

	return ZLibCompress_Parms.ReturnValue;
};

// Function Core.StringObjectMap.Contains
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

bool UStringObjectMap::Contains(struct FString Key)
{
	static UFunction* pFnContains = nullptr;

	if (!pFnContains)
	{
		pFnContains = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_CONTAINS));
	}

	UStringObjectMap_execContains_Parms Contains_Parms;
	memcpy_s(&Contains_Parms.Key, 0x10, &Key, 0x10);

	pFnContains->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnContains, &Contains_Parms, nullptr);

	pFnContains->FunctionFlags |= 0x400;

	return Contains_Parms.ReturnValue;
};

// Function Core.StringObjectMap.Remove
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

void UStringObjectMap::Remove(struct FString Key)
{
	static UFunction* pFnRemove = nullptr;

	if (!pFnRemove)
	{
		pFnRemove = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_REMOVE));
	}

	UStringObjectMap_execRemove_Parms Remove_Parms;
	memcpy_s(&Remove_Parms.Key, 0x10, &Key, 0x10);

	pFnRemove->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemove, &Remove_Parms, nullptr);

	pFnRemove->FunctionFlags |= 0x400;
};

// Function Core.StringObjectMap.TryGetObject
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 OutValue                       (CPF_Parm | CPF_OutParm)

bool UStringObjectMap::TryGetObjectW(struct FString Key, class UObject*& OutValue)
{
	static UFunction* pFnTryGetObjectW = nullptr;

	if (!pFnTryGetObjectW)
	{
		pFnTryGetObjectW = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_TRYGETOBJECT));
	}

	UStringObjectMap_execTryGetObjectW_Parms TryGetObjectW_Parms;
	memcpy_s(&TryGetObjectW_Parms.Key, 0x10, &Key, 0x10);

	pFnTryGetObjectW->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTryGetObjectW, &TryGetObjectW_Parms, nullptr);

	pFnTryGetObjectW->FunctionFlags |= 0x400;
	memcpy_s(&TryGetObjectW_Parms.OutValue, 0x8, &OutValue, 0x8);

	return TryGetObjectW_Parms.ReturnValue;
};

// Function Core.StringObjectMap.TryGet
// [0x80020001] (FUNC_Final | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UStringObjectMap::TryGet()
{
	static UFunction* pFnTryGet = nullptr;

	if (!pFnTryGet)
	{
		pFnTryGet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_TRYGET));
	}

	UStringObjectMap_execTryGet_Parms TryGet_Parms;

	this->ProcessEvent(pFnTryGet, &TryGet_Parms, nullptr);
};

// Function Core.StringObjectMap.GetObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

class UObject* UStringObjectMap::GetObjectW(struct FString Key)
{
	static UFunction* pFnGetObjectW = nullptr;

	if (!pFnGetObjectW)
	{
		pFnGetObjectW = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_GETOBJECT));
	}

	UStringObjectMap_execGetObjectW_Parms GetObjectW_Parms;
	memcpy_s(&GetObjectW_Parms.Key, 0x10, &Key, 0x10);

	pFnGetObjectW->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetObjectW, &GetObjectW_Parms, nullptr);

	pFnGetObjectW->FunctionFlags |= 0x400;

	return GetObjectW_Parms.ReturnValue;
};

// Function Core.StringObjectMap.Get
// [0x80020001] (FUNC_Final | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UStringObjectMap::Get()
{
	static UFunction* pFnGet = nullptr;

	if (!pFnGet)
	{
		pFnGet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_GET));
	}

	UStringObjectMap_execGet_Parms Get_Parms;

	this->ProcessEvent(pFnGet, &Get_Parms, nullptr);
};

// Function Core.StringObjectMap.Set
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 Value                          (CPF_Parm)

void UStringObjectMap::Set(struct FString Key, class UObject* Value)
{
	static UFunction* pFnSet = nullptr;

	if (!pFnSet)
	{
		pFnSet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGOBJECTMAP_SET));
	}

	UStringObjectMap_execSet_Parms Set_Parms;
	memcpy_s(&Set_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&Set_Parms.Value, 0x8, &Value, 0x8);

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSet, &Set_Parms, nullptr);

	pFnSet->FunctionFlags |= 0x400;
};

// Function Core.StringMap.ForEach
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UStringMap::ForEach(struct FScriptDelegate Callback)
{
	static UFunction* pFnForEach = nullptr;

	if (!pFnForEach)
	{
		pFnForEach = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_FOREACH));
	}

	UStringMap_execForEach_Parms ForEach_Parms;
	memcpy_s(&ForEach_Parms.Callback, 0x18, &Callback, 0x18);

	pFnForEach->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnForEach, &ForEach_Parms, nullptr);

	pFnForEach->FunctionFlags |= 0x400;
};

// Function Core.StringMap.Append
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UStringMap*              Other                          (CPF_Parm | CPF_EditInline)

void UStringMap::Append(class UStringMap* Other)
{
	static UFunction* pFnAppend = nullptr;

	if (!pFnAppend)
	{
		pFnAppend = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_APPEND));
	}

	UStringMap_execAppend_Parms Append_Parms;
	memcpy_s(&Append_Parms.Other, 0x8, &Other, 0x8);

	pFnAppend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAppend, &Append_Parms, nullptr);

	pFnAppend->FunctionFlags |= 0x400;
};

// Function Core.StringMap.Contains
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

bool UStringMap::Contains(struct FString Key)
{
	static UFunction* pFnContains = nullptr;

	if (!pFnContains)
	{
		pFnContains = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_CONTAINS));
	}

	UStringMap_execContains_Parms Contains_Parms;
	memcpy_s(&Contains_Parms.Key, 0x10, &Key, 0x10);

	pFnContains->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnContains, &Contains_Parms, nullptr);

	pFnContains->FunctionFlags |= 0x400;

	return Contains_Parms.ReturnValue;
};

// Function Core.StringMap.Remove
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

void UStringMap::Remove(struct FString Key)
{
	static UFunction* pFnRemove = nullptr;

	if (!pFnRemove)
	{
		pFnRemove = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_REMOVE));
	}

	UStringMap_execRemove_Parms Remove_Parms;
	memcpy_s(&Remove_Parms.Key, 0x10, &Key, 0x10);

	pFnRemove->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemove, &Remove_Parms, nullptr);

	pFnRemove->FunctionFlags |= 0x400;
};

// Function Core.StringMap.TryGet
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 OutValue                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UStringMap::TryGet(struct FString Key, struct FString& OutValue)
{
	static UFunction* pFnTryGet = nullptr;

	if (!pFnTryGet)
	{
		pFnTryGet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_TRYGET));
	}

	UStringMap_execTryGet_Parms TryGet_Parms;
	memcpy_s(&TryGet_Parms.Key, 0x10, &Key, 0x10);

	pFnTryGet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTryGet, &TryGet_Parms, nullptr);

	pFnTryGet->FunctionFlags |= 0x400;
	memcpy_s(&TryGet_Parms.OutValue, 0x10, &OutValue, 0x10);

	return TryGet_Parms.ReturnValue;
};

// Function Core.StringMap.Get
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)

struct FString UStringMap::Get(struct FString Key)
{
	static UFunction* pFnGet = nullptr;

	if (!pFnGet)
	{
		pFnGet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_GET));
	}

	UStringMap_execGet_Parms Get_Parms;
	memcpy_s(&Get_Parms.Key, 0x10, &Key, 0x10);

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGet, &Get_Parms, nullptr);

	pFnGet->FunctionFlags |= 0x400;

	return Get_Parms.ReturnValue;
};

// Function Core.StringMap.Set
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UStringMap::Set(struct FString Key, struct FString Value)
{
	static UFunction* pFnSet = nullptr;

	if (!pFnSet)
	{
		pFnSet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_SET));
	}

	UStringMap_execSet_Parms Set_Parms;
	memcpy_s(&Set_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&Set_Parms.Value, 0x10, &Value, 0x10);

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSet, &Set_Parms, nullptr);

	pFnSet->FunctionFlags |= 0x400;
};

// Function Core.StringMap.PairCallback
// [0x00140001] (FUNC_Final | FUNC_Private | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)

void UStringMap::PairCallback(struct FString Key, struct FString Value)
{
	static UFunction* pFnPairCallback = nullptr;

	if (!pFnPairCallback)
	{
		pFnPairCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_STRINGMAP_PAIRCALLBACK));
	}

	UStringMap_execPairCallback_Parms PairCallback_Parms;
	memcpy_s(&PairCallback_Parms.Key, 0x10, &Key, 0x10);
	memcpy_s(&PairCallback_Parms.Value, 0x10, &Value, 0x10);

	this->ProcessEvent(pFnPairCallback, &PairCallback_Parms, nullptr);
};

// Function Core.ObjectProvider.SetParent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObjectProvider*         InParent                       (CPF_Parm | CPF_EditInline)

void UObjectProvider::SetParent(class UObjectProvider* InParent)
{
	static UFunction* pFnSetParent = nullptr;

	if (!pFnSetParent)
	{
		pFnSetParent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_SETPARENT));
	}

	UObjectProvider_execSetParent_Parms SetParent_Parms;
	memcpy_s(&SetParent_Parms.InParent, 0x8, &InParent, 0x8);

	pFnSetParent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetParent, &SetParent_Parms, nullptr);

	pFnSetParent->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.RemoveProxy
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObjectProvider*         InProxy                        (CPF_Parm | CPF_EditInline)

void UObjectProvider::RemoveProxy(class UObjectProvider* InProxy)
{
	static UFunction* pFnRemoveProxy = nullptr;

	if (!pFnRemoveProxy)
	{
		pFnRemoveProxy = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_REMOVEPROXY));
	}

	UObjectProvider_execRemoveProxy_Parms RemoveProxy_Parms;
	memcpy_s(&RemoveProxy_Parms.InProxy, 0x8, &InProxy, 0x8);

	pFnRemoveProxy->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveProxy, &RemoveProxy_Parms, nullptr);

	pFnRemoveProxy->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.AddProxy
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObjectProvider*         InProxy                        (CPF_Parm | CPF_EditInline)

void UObjectProvider::AddProxy(class UObjectProvider* InProxy)
{
	static UFunction* pFnAddProxy = nullptr;

	if (!pFnAddProxy)
	{
		pFnAddProxy = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_ADDPROXY));
	}

	UObjectProvider_execAddProxy_Parms AddProxy_Parms;
	memcpy_s(&AddProxy_Parms.InProxy, 0x8, &InProxy, 0x8);

	pFnAddProxy->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddProxy, &AddProxy_Parms, nullptr);

	pFnAddProxy->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.SetSingleton
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  ObjClass                       (CPF_Parm)
// class UObject*                 Replacement                    (CPF_Parm)

void UObjectProvider::SetSingleton(class UClass* ObjClass, class UObject* Replacement)
{
	static UFunction* pFnSetSingleton = nullptr;

	if (!pFnSetSingleton)
	{
		pFnSetSingleton = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_SETSINGLETON));
	}

	UObjectProvider_execSetSingleton_Parms SetSingleton_Parms;
	memcpy_s(&SetSingleton_Parms.ObjClass, 0x8, &ObjClass, 0x8);
	memcpy_s(&SetSingleton_Parms.Replacement, 0x8, &Replacement, 0x8);

	pFnSetSingleton->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSingleton, &SetSingleton_Parms, nullptr);

	pFnSetSingleton->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.Replace
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Existing                       (CPF_Parm)
// class UObject*                 Replacement                    (CPF_Parm)

void UObjectProvider::Replace(class UObject* Existing, class UObject* Replacement)
{
	static UFunction* pFnReplace = nullptr;

	if (!pFnReplace)
	{
		pFnReplace = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_REPLACE));
	}

	UObjectProvider_execReplace_Parms Replace_Parms;
	memcpy_s(&Replace_Parms.Existing, 0x8, &Existing, 0x8);
	memcpy_s(&Replace_Parms.Replacement, 0x8, &Replacement, 0x8);

	pFnReplace->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReplace, &Replace_Parms, nullptr);

	pFnReplace->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.AddAndRemoveObjects
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class UObject*>         AddObjects                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<class UObject*>         RemoveObjects                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObjectProvider::AddAndRemoveObjects(TArray<class UObject*>& AddObjects, TArray<class UObject*>& RemoveObjects)
{
	static UFunction* pFnAddAndRemoveObjects = nullptr;

	if (!pFnAddAndRemoveObjects)
	{
		pFnAddAndRemoveObjects = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_ADDANDREMOVEOBJECTS));
	}

	UObjectProvider_execAddAndRemoveObjects_Parms AddAndRemoveObjects_Parms;

	pFnAddAndRemoveObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAndRemoveObjects, &AddAndRemoveObjects_Parms, nullptr);

	pFnAddAndRemoveObjects->FunctionFlags |= 0x400;
	memcpy_s(&AddAndRemoveObjects_Parms.AddObjects, 0x10, &AddObjects, 0x10);
	memcpy_s(&AddAndRemoveObjects_Parms.RemoveObjects, 0x10, &RemoveObjects, 0x10);
};

// Function Core.ObjectProvider.RemoveObjects
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class UObject*>         InObjects                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObjectProvider::RemoveObjects(TArray<class UObject*>& InObjects)
{
	static UFunction* pFnRemoveObjects = nullptr;

	if (!pFnRemoveObjects)
	{
		pFnRemoveObjects = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_REMOVEOBJECTS));
	}

	UObjectProvider_execRemoveObjects_Parms RemoveObjects_Parms;

	pFnRemoveObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveObjects, &RemoveObjects_Parms, nullptr);

	pFnRemoveObjects->FunctionFlags |= 0x400;
	memcpy_s(&RemoveObjects_Parms.InObjects, 0x10, &InObjects, 0x10);
};

// Function Core.ObjectProvider.RemoveAllObjects
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  ObjectClass                    (CPF_Parm)

void UObjectProvider::RemoveAllObjects(class UClass* ObjectClass)
{
	static UFunction* pFnRemoveAllObjects = nullptr;

	if (!pFnRemoveAllObjects)
	{
		pFnRemoveAllObjects = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_REMOVEALLOBJECTS));
	}

	UObjectProvider_execRemoveAllObjects_Parms RemoveAllObjects_Parms;
	memcpy_s(&RemoveAllObjects_Parms.ObjectClass, 0x8, &ObjectClass, 0x8);

	pFnRemoveAllObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveAllObjects, &RemoveAllObjects_Parms, nullptr);

	pFnRemoveAllObjects->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.RemoveObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Obj                            (CPF_Parm)

void UObjectProvider::RemoveObject(class UObject* Obj)
{
	static UFunction* pFnRemoveObject = nullptr;

	if (!pFnRemoveObject)
	{
		pFnRemoveObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_REMOVEOBJECT));
	}

	UObjectProvider_execRemoveObject_Parms RemoveObject_Parms;
	memcpy_s(&RemoveObject_Parms.Obj, 0x8, &Obj, 0x8);

	pFnRemoveObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveObject, &RemoveObject_Parms, nullptr);

	pFnRemoveObject->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.AddObjects
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class UObject*>         InObjects                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObjectProvider::AddObjects(TArray<class UObject*>& InObjects)
{
	static UFunction* pFnAddObjects = nullptr;

	if (!pFnAddObjects)
	{
		pFnAddObjects = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_ADDOBJECTS));
	}

	UObjectProvider_execAddObjects_Parms AddObjects_Parms;

	pFnAddObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddObjects, &AddObjects_Parms, nullptr);

	pFnAddObjects->FunctionFlags |= 0x400;
	memcpy_s(&AddObjects_Parms.InObjects, 0x10, &InObjects, 0x10);
};

// Function Core.ObjectProvider.AddObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Obj                            (CPF_Parm)

void UObjectProvider::AddObject(class UObject* Obj)
{
	static UFunction* pFnAddObject = nullptr;

	if (!pFnAddObject)
	{
		pFnAddObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_ADDOBJECT));
	}

	UObjectProvider_execAddObject_Parms AddObject_Parms;
	memcpy_s(&AddObject_Parms.Obj, 0x8, &Obj, 0x8);

	pFnAddObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddObject, &AddObject_Parms, nullptr);

	pFnAddObject->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.GetExactCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  ObjClass                       (CPF_Parm)

int UObjectProvider::GetExactCount(class UClass* ObjClass)
{
	static UFunction* pFnGetExactCount = nullptr;

	if (!pFnGetExactCount)
	{
		pFnGetExactCount = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_GETEXACTCOUNT));
	}

	UObjectProvider_execGetExactCount_Parms GetExactCount_Parms;
	memcpy_s(&GetExactCount_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetExactCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetExactCount, &GetExactCount_Parms, nullptr);

	pFnGetExactCount->FunctionFlags |= 0x400;

	return GetExactCount_Parms.ReturnValue;
};

// Function Core.ObjectProvider.GetCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  ObjClass                       (CPF_Parm)

int UObjectProvider::GetCount(class UClass* ObjClass)
{
	static UFunction* pFnGetCount = nullptr;

	if (!pFnGetCount)
	{
		pFnGetCount = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_GETCOUNT));
	}

	UObjectProvider_execGetCount_Parms GetCount_Parms;
	memcpy_s(&GetCount_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetCount, &GetCount_Parms, nullptr);

	pFnGetCount->FunctionFlags |= 0x400;

	return GetCount_Parms.ReturnValue;
};

// Function Core.ObjectProvider.GetOrCreate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)

class UObject* UObjectProvider::GetOrCreate(class UClass* ObjClass)
{
	static UFunction* pFnGetOrCreate = nullptr;

	if (!pFnGetOrCreate)
	{
		pFnGetOrCreate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_GETORCREATE));
	}

	UObjectProvider_execGetOrCreate_Parms GetOrCreate_Parms;
	memcpy_s(&GetOrCreate_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetOrCreate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetOrCreate, &GetOrCreate_Parms, nullptr);

	pFnGetOrCreate->FunctionFlags |= 0x400;

	return GetOrCreate_Parms.ReturnValue;
};

// Function Core.ObjectProvider.GetExact
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)

class UObject* UObjectProvider::GetExact(class UClass* ObjClass)
{
	static UFunction* pFnGetExact = nullptr;

	if (!pFnGetExact)
	{
		pFnGetExact = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_GETEXACT));
	}

	UObjectProvider_execGetExact_Parms GetExact_Parms;
	memcpy_s(&GetExact_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetExact->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetExact, &GetExact_Parms, nullptr);

	pFnGetExact->FunctionFlags |= 0x400;

	return GetExact_Parms.ReturnValue;
};

// Function Core.ObjectProvider.GetUnsafe
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)

class UObject* UObjectProvider::GetUnsafe(class UClass* ObjClass)
{
	static UFunction* pFnGetUnsafe = nullptr;

	if (!pFnGetUnsafe)
	{
		pFnGetUnsafe = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_GETUNSAFE));
	}

	UObjectProvider_execGetUnsafe_Parms GetUnsafe_Parms;
	memcpy_s(&GetUnsafe_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGetUnsafe->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUnsafe, &GetUnsafe_Parms, nullptr);

	pFnGetUnsafe->FunctionFlags |= 0x400;

	return GetUnsafe_Parms.ReturnValue;
};

// Function Core.ObjectProvider.Get
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  ObjClass                       (CPF_Parm)

class UObject* UObjectProvider::Get(class UClass* ObjClass)
{
	static UFunction* pFnGet = nullptr;

	if (!pFnGet)
	{
		pFnGet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_GET));
	}

	UObjectProvider_execGet_Parms Get_Parms;
	memcpy_s(&Get_Parms.ObjClass, 0x8, &ObjClass, 0x8);

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGet, &Get_Parms, nullptr);

	pFnGet->FunctionFlags |= 0x400;

	return Get_Parms.ReturnValue;
};

// Function Core.ObjectProvider.AllObjects
// [0x00424405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UClass*                  BaseClass                      (CPF_Parm)
// class UClass*                  InterfaceClass                 (CPF_OptionalParm | CPF_Parm)
// class UObject*                 Obj                            (CPF_Parm | CPF_OutParm)

void UObjectProvider::AllObjects(class UClass* BaseClass, class UClass* InterfaceClass, class UObject*& Obj)
{
	static UFunction* pFnAllObjects = nullptr;

	if (!pFnAllObjects)
	{
		pFnAllObjects = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_ALLOBJECTS));
	}

	UObjectProvider_execAllObjects_Parms AllObjects_Parms;
	memcpy_s(&AllObjects_Parms.BaseClass, 0x8, &BaseClass, 0x8);
	memcpy_s(&AllObjects_Parms.InterfaceClass, 0x8, &InterfaceClass, 0x8);

	pFnAllObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllObjects, &AllObjects_Parms, nullptr);

	pFnAllObjects->FunctionFlags |= 0x400;
	memcpy_s(&AllObjects_Parms.Obj, 0x8, &Obj, 0x8);
};

// Function Core.ObjectProvider.IsRegisteredForInjection
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 Subscriber                     (CPF_Parm)

bool UObjectProvider::IsRegisteredForInjection(class UObject* Subscriber)
{
	static UFunction* pFnIsRegisteredForInjection = nullptr;

	if (!pFnIsRegisteredForInjection)
	{
		pFnIsRegisteredForInjection = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_ISREGISTEREDFORINJECTION));
	}

	UObjectProvider_execIsRegisteredForInjection_Parms IsRegisteredForInjection_Parms;
	memcpy_s(&IsRegisteredForInjection_Parms.Subscriber, 0x8, &Subscriber, 0x8);

	pFnIsRegisteredForInjection->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsRegisteredForInjection, &IsRegisteredForInjection_Parms, nullptr);

	pFnIsRegisteredForInjection->FunctionFlags |= 0x400;

	return IsRegisteredForInjection_Parms.ReturnValue;
};

// Function Core.ObjectProvider.InjectDelayed
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Subscriber                     (CPF_Parm)

void UObjectProvider::InjectDelayed(class UObject* Subscriber)
{
	static UFunction* pFnInjectDelayed = nullptr;

	if (!pFnInjectDelayed)
	{
		pFnInjectDelayed = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_INJECTDELAYED));
	}

	UObjectProvider_execInjectDelayed_Parms InjectDelayed_Parms;
	memcpy_s(&InjectDelayed_Parms.Subscriber, 0x8, &Subscriber, 0x8);

	pFnInjectDelayed->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInjectDelayed, &InjectDelayed_Parms, nullptr);

	pFnInjectDelayed->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.Inject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Subscriber                     (CPF_Parm)

void UObjectProvider::Inject(class UObject* Subscriber)
{
	static UFunction* pFnInject = nullptr;

	if (!pFnInject)
	{
		pFnInject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_INJECT));
	}

	UObjectProvider_execInject_Parms Inject_Parms;
	memcpy_s(&Inject_Parms.Subscriber, 0x8, &Subscriber, 0x8);

	pFnInject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInject, &Inject_Parms, nullptr);

	pFnInject->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.UnsubscribeAll
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Subscriber                     (CPF_Parm)

void UObjectProvider::UnsubscribeAll(class UObject* Subscriber)
{
	static UFunction* pFnUnsubscribeAll = nullptr;

	if (!pFnUnsubscribeAll)
	{
		pFnUnsubscribeAll = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_UNSUBSCRIBEALL));
	}

	UObjectProvider_execUnsubscribeAll_Parms UnsubscribeAll_Parms;
	memcpy_s(&UnsubscribeAll_Parms.Subscriber, 0x8, &Subscriber, 0x8);

	pFnUnsubscribeAll->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnsubscribeAll, &UnsubscribeAll_Parms, nullptr);

	pFnUnsubscribeAll->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.Unsubscribe
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback2                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UObjectProvider::Unsubscribe(struct FScriptDelegate Callback, struct FScriptDelegate Callback2)
{
	static UFunction* pFnUnsubscribe = nullptr;

	if (!pFnUnsubscribe)
	{
		pFnUnsubscribe = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_UNSUBSCRIBE));
	}

	UObjectProvider_execUnsubscribe_Parms Unsubscribe_Parms;
	memcpy_s(&Unsubscribe_Parms.Callback, 0x18, &Callback, 0x18);
	memcpy_s(&Unsubscribe_Parms.Callback2, 0x18, &Callback2, 0x18);

	pFnUnsubscribe->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnsubscribe, &Unsubscribe_Parms, nullptr);

	pFnUnsubscribe->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.SubscribeList
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  BaseClass                      (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UObjectProvider::SubscribeList(class UClass* BaseClass, struct FScriptDelegate Callback)
{
	static UFunction* pFnSubscribeList = nullptr;

	if (!pFnSubscribeList)
	{
		pFnSubscribeList = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_SUBSCRIBELIST));
	}

	UObjectProvider_execSubscribeList_Parms SubscribeList_Parms;
	memcpy_s(&SubscribeList_Parms.BaseClass, 0x8, &BaseClass, 0x8);
	memcpy_s(&SubscribeList_Parms.Callback, 0x18, &Callback, 0x18);

	pFnSubscribeList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubscribeList, &SubscribeList_Parms, nullptr);

	pFnSubscribeList->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.SubscribeOnce
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  BaseClass                      (CPF_Parm)
// struct FScriptDelegate         OnAdd                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnRemove                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UObjectProvider::SubscribeOnce(class UClass* BaseClass, struct FScriptDelegate OnAdd, struct FScriptDelegate OnRemove)
{
	static UFunction* pFnSubscribeOnce = nullptr;

	if (!pFnSubscribeOnce)
	{
		pFnSubscribeOnce = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_SUBSCRIBEONCE));
	}

	UObjectProvider_execSubscribeOnce_Parms SubscribeOnce_Parms;
	memcpy_s(&SubscribeOnce_Parms.BaseClass, 0x8, &BaseClass, 0x8);
	memcpy_s(&SubscribeOnce_Parms.OnAdd, 0x18, &OnAdd, 0x18);
	memcpy_s(&SubscribeOnce_Parms.OnRemove, 0x18, &OnRemove, 0x18);

	pFnSubscribeOnce->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubscribeOnce, &SubscribeOnce_Parms, nullptr);

	pFnSubscribeOnce->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.Subscribe
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  BaseClass                      (CPF_Parm)
// struct FScriptDelegate         OnAdd                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnRemove                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UObjectProvider::Subscribe(class UClass* BaseClass, struct FScriptDelegate OnAdd, struct FScriptDelegate OnRemove)
{
	static UFunction* pFnSubscribe = nullptr;

	if (!pFnSubscribe)
	{
		pFnSubscribe = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_SUBSCRIBE));
	}

	UObjectProvider_execSubscribe_Parms Subscribe_Parms;
	memcpy_s(&Subscribe_Parms.BaseClass, 0x8, &BaseClass, 0x8);
	memcpy_s(&Subscribe_Parms.OnAdd, 0x18, &OnAdd, 0x18);
	memcpy_s(&Subscribe_Parms.OnRemove, 0x18, &OnRemove, 0x18);

	pFnSubscribe->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubscribe, &Subscribe_Parms, nullptr);

	pFnSubscribe->FunctionFlags |= 0x400;
};

// Function Core.ObjectProvider.ObjectChangeCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UObjectProvider::ObjectChangeCallback()
{
	static UFunction* pFnObjectChangeCallback = nullptr;

	if (!pFnObjectChangeCallback)
	{
		pFnObjectChangeCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_OBJECTCHANGECALLBACK));
	}

	UObjectProvider_execObjectChangeCallback_Parms ObjectChangeCallback_Parms;

	this->ProcessEvent(pFnObjectChangeCallback, &ObjectChangeCallback_Parms, nullptr);
};

// Function Core.ObjectProvider.ObjectListSubscriptionCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UObjectProvider*         Provider                       (CPF_Parm | CPF_EditInline)

void UObjectProvider::ObjectListSubscriptionCallback(class UObjectProvider* Provider)
{
	static UFunction* pFnObjectListSubscriptionCallback = nullptr;

	if (!pFnObjectListSubscriptionCallback)
	{
		pFnObjectListSubscriptionCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_OBJECTLISTSUBSCRIPTIONCALLBACK));
	}

	UObjectProvider_execObjectListSubscriptionCallback_Parms ObjectListSubscriptionCallback_Parms;
	memcpy_s(&ObjectListSubscriptionCallback_Parms.Provider, 0x8, &Provider, 0x8);

	this->ProcessEvent(pFnObjectListSubscriptionCallback, &ObjectListSubscriptionCallback_Parms, nullptr);
};

// Function Core.ObjectProvider.ObjectSubscriptionCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Obj                            (CPF_Parm)

void UObjectProvider::ObjectSubscriptionCallback(class UObject* Obj)
{
	static UFunction* pFnObjectSubscriptionCallback = nullptr;

	if (!pFnObjectSubscriptionCallback)
	{
		pFnObjectSubscriptionCallback = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_OBJECTPROVIDER_OBJECTSUBSCRIPTIONCALLBACK));
	}

	UObjectProvider_execObjectSubscriptionCallback_Parms ObjectSubscriptionCallback_Parms;
	memcpy_s(&ObjectSubscriptionCallback_Parms.Obj, 0x8, &Obj, 0x8);

	this->ProcessEvent(pFnObjectSubscriptionCallback, &ObjectSubscriptionCallback_Parms, nullptr);
};

// Function Core.DistributionVector.GetVectorValue
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          F                              (CPF_OptionalParm | CPF_Parm)
// int                            LastExtreme                    (CPF_OptionalParm | CPF_Parm)

struct FVector UDistributionVector::GetVectorValue(float F, int LastExtreme)
{
	static UFunction* pFnGetVectorValue = nullptr;

	if (!pFnGetVectorValue)
	{
		pFnGetVectorValue = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DISTRIBUTIONVECTOR_GETVECTORVALUE));
	}

	UDistributionVector_execGetVectorValue_Parms GetVectorValue_Parms;
	memcpy_s(&GetVectorValue_Parms.F, 0x4, &F, 0x4);
	memcpy_s(&GetVectorValue_Parms.LastExtreme, 0x4, &LastExtreme, 0x4);

	pFnGetVectorValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVectorValue, &GetVectorValue_Parms, nullptr);

	pFnGetVectorValue->FunctionFlags |= 0x400;

	return GetVectorValue_Parms.ReturnValue;
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          F                              (CPF_OptionalParm | CPF_Parm)

float UDistributionFloat::GetFloatValue(float F)
{
	static UFunction* pFnGetFloatValue = nullptr;

	if (!pFnGetFloatValue)
	{
		pFnGetFloatValue = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_DISTRIBUTIONFLOAT_GETFLOATVALUE));
	}

	UDistributionFloat_execGetFloatValue_Parms GetFloatValue_Parms;
	memcpy_s(&GetFloatValue_Parms.F, 0x4, &F, 0x4);

	pFnGetFloatValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFloatValue, &GetFloatValue_Parms, nullptr);

	pFnGetFloatValue->FunctionFlags |= 0x400;

	return GetFloatValue_Parms.ReturnValue;
};

// Function Core.HelpCommandlet.Main
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Params                         (CPF_Parm | CPF_NeedCtorLink)

int UHelpCommandlet::eventMain(struct FString Params)
{
	static UFunction* pFnMain = nullptr;

	if (!pFnMain)
	{
		pFnMain = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_HELPCOMMANDLET_MAIN));
	}

	UHelpCommandlet_eventMain_Parms Main_Parms;
	memcpy_s(&Main_Parms.Params, 0x10, &Params, 0x10);

	this->ProcessEvent(pFnMain, &Main_Parms, nullptr);

	return Main_Parms.ReturnValue;
};

// Function Core.Commandlet.Main
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int                            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Params                         (CPF_Parm | CPF_NeedCtorLink)

int UCommandlet::eventMain(struct FString Params)
{
	static UFunction* pFnMain = nullptr;

	if (!pFnMain)
	{
		pFnMain = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_COMMANDLET_MAIN));
	}

	UCommandlet_eventMain_Parms Main_Parms;
	memcpy_s(&Main_Parms.Params, 0x10, &Params, 0x10);

	this->ProcessEvent(pFnMain, &Main_Parms, nullptr);

	return Main_Parms.ReturnValue;
};

// Function Core.Base64.DecodeStringInline
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 Input                          (CPF_Parm | CPF_NeedCtorLink)
// TArray<unsigned char>          Output                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UBase64::DecodeStringInline(struct FString Input, TArray<unsigned char>& Output)
{
	static UFunction* pFnDecodeStringInline = nullptr;

	if (!pFnDecodeStringInline)
	{
		pFnDecodeStringInline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_DECODESTRINGINLINE));
	}

	UBase64_execDecodeStringInline_Parms DecodeStringInline_Parms;
	memcpy_s(&DecodeStringInline_Parms.Input, 0x10, &Input, 0x10);

	pFnDecodeStringInline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecodeStringInline, &DecodeStringInline_Parms, nullptr);

	pFnDecodeStringInline->FunctionFlags |= 0x400;
	memcpy_s(&DecodeStringInline_Parms.Output, 0x10, &Output, 0x10);
};

// Function Core.Base64.DecodeString
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Input                          (CPF_Parm | CPF_NeedCtorLink)

TArray<unsigned char> UBase64::DecodeString(struct FString Input)
{
	static UFunction* pFnDecodeString = nullptr;

	if (!pFnDecodeString)
	{
		pFnDecodeString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_DECODESTRING));
	}

	UBase64_execDecodeString_Parms DecodeString_Parms;
	memcpy_s(&DecodeString_Parms.Input, 0x10, &Input, 0x10);

	pFnDecodeString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecodeString, &DecodeString_Parms, nullptr);

	pFnDecodeString->FunctionFlags |= 0x400;

	return DecodeString_Parms.ReturnValue;
};

// Function Core.Base64.DecodeInline
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Output                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UBase64::DecodeInline(TArray<unsigned char>& Input, TArray<unsigned char>& Output)
{
	static UFunction* pFnDecodeInline = nullptr;

	if (!pFnDecodeInline)
	{
		pFnDecodeInline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_DECODEINLINE));
	}

	UBase64_execDecodeInline_Parms DecodeInline_Parms;

	pFnDecodeInline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecodeInline, &DecodeInline_Parms, nullptr);

	pFnDecodeInline->FunctionFlags |= 0x400;
	memcpy_s(&DecodeInline_Parms.Input, 0x10, &Input, 0x10);
	memcpy_s(&DecodeInline_Parms.Output, 0x10, &Output, 0x10);
};

// Function Core.Base64.Decode
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

TArray<unsigned char> UBase64::Decode(TArray<unsigned char>& Input)
{
	static UFunction* pFnDecode = nullptr;

	if (!pFnDecode)
	{
		pFnDecode = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_DECODE));
	}

	UBase64_execDecode_Parms Decode_Parms;

	pFnDecode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecode, &Decode_Parms, nullptr);

	pFnDecode->FunctionFlags |= 0x400;
	memcpy_s(&Decode_Parms.Input, 0x10, &Input, 0x10);

	return Decode_Parms.ReturnValue;
};

// Function Core.Base64.EncodeStringInline
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 Output                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UBase64::EncodeStringInline(TArray<unsigned char>& Input, struct FString& Output)
{
	static UFunction* pFnEncodeStringInline = nullptr;

	if (!pFnEncodeStringInline)
	{
		pFnEncodeStringInline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_ENCODESTRINGINLINE));
	}

	UBase64_execEncodeStringInline_Parms EncodeStringInline_Parms;

	pFnEncodeStringInline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncodeStringInline, &EncodeStringInline_Parms, nullptr);

	pFnEncodeStringInline->FunctionFlags |= 0x400;
	memcpy_s(&EncodeStringInline_Parms.Input, 0x10, &Input, 0x10);
	memcpy_s(&EncodeStringInline_Parms.Output, 0x10, &Output, 0x10);
};

// Function Core.Base64.EncodeString
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UBase64::EncodeString(TArray<unsigned char>& Input)
{
	static UFunction* pFnEncodeString = nullptr;

	if (!pFnEncodeString)
	{
		pFnEncodeString = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_ENCODESTRING));
	}

	UBase64_execEncodeString_Parms EncodeString_Parms;

	pFnEncodeString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncodeString, &EncodeString_Parms, nullptr);

	pFnEncodeString->FunctionFlags |= 0x400;
	memcpy_s(&EncodeString_Parms.Input, 0x10, &Input, 0x10);

	return EncodeString_Parms.ReturnValue;
};

// Function Core.Base64.EncodeInline
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Output                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UBase64::EncodeInline(TArray<unsigned char>& Input, TArray<unsigned char>& Output)
{
	static UFunction* pFnEncodeInline = nullptr;

	if (!pFnEncodeInline)
	{
		pFnEncodeInline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_ENCODEINLINE));
	}

	UBase64_execEncodeInline_Parms EncodeInline_Parms;

	pFnEncodeInline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncodeInline, &EncodeInline_Parms, nullptr);

	pFnEncodeInline->FunctionFlags |= 0x400;
	memcpy_s(&EncodeInline_Parms.Input, 0x10, &Input, 0x10);
	memcpy_s(&EncodeInline_Parms.Output, 0x10, &Output, 0x10);
};

// Function Core.Base64.Encode
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<unsigned char>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// TArray<unsigned char>          Input                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

TArray<unsigned char> UBase64::Encode(TArray<unsigned char>& Input)
{
	static UFunction* pFnEncode = nullptr;

	if (!pFnEncode)
	{
		pFnEncode = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_BASE64_ENCODE));
	}

	UBase64_execEncode_Parms Encode_Parms;

	pFnEncode->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncode, &Encode_Parms, nullptr);

	pFnEncode->FunctionFlags |= 0x400;
	memcpy_s(&Encode_Parms.Input, 0x10, &Input, 0x10);

	return Encode_Parms.ReturnValue;
};

// Function Core.AsyncTask.QueCallbacks
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UAsyncTask::QueCallbacks()
{
	static UFunction* pFnQueCallbacks = nullptr;

	if (!pFnQueCallbacks)
	{
		pFnQueCallbacks = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_QUECALLBACKS));
	}

	UAsyncTask_execQueCallbacks_Parms QueCallbacks_Parms;

	pFnQueCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQueCallbacks, &QueCallbacks_Parms, nullptr);

	pFnQueCallbacks->FunctionFlags |= 0x400;
};

// Function Core.AsyncTask.CreateError
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UError*                  InError                        (CPF_Parm)

class UAsyncTask* UAsyncTask::CreateError(class UError* InError)
{
	static UFunction* pFnCreateError = nullptr;

	if (!pFnCreateError)
	{
		pFnCreateError = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_CREATEERROR));
	}

	UAsyncTask_execCreateError_Parms CreateError_Parms;
	memcpy_s(&CreateError_Parms.InError, 0x8, &InError, 0x8);

	this->ProcessEvent(pFnCreateError, &CreateError_Parms, nullptr);

	return CreateError_Parms.ReturnValue;
};

// Function Core.AsyncTask.CreateSuccess
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAsyncTask* UAsyncTask::CreateSuccess()
{
	static UFunction* pFnCreateSuccess = nullptr;

	if (!pFnCreateSuccess)
	{
		pFnCreateSuccess = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_CREATESUCCESS));
	}

	UAsyncTask_execCreateSuccess_Parms CreateSuccess_Parms;

	this->ProcessEvent(pFnCreateSuccess, &CreateSuccess_Parms, nullptr);

	return CreateSuccess_Parms.ReturnValue;
};

// Function Core.AsyncTask.Create
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UAsyncTask* UAsyncTask::Create()
{
	static UFunction* pFnCreate = nullptr;

	if (!pFnCreate)
	{
		pFnCreate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_CREATE));
	}

	UAsyncTask_execCreate_Parms Create_Parms;

	this->ProcessEvent(pFnCreate, &Create_Parms, nullptr);

	return Create_Parms.ReturnValue;
};

// Function Core.AsyncTask.Watch
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAsyncTask*              Other                          (CPF_Parm)

class UAsyncTask* UAsyncTask::Watch(class UAsyncTask* Other)
{
	static UFunction* pFnWatch = nullptr;

	if (!pFnWatch)
	{
		pFnWatch = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_WATCH));
	}

	UAsyncTask_execWatch_Parms Watch_Parms;
	memcpy_s(&Watch_Parms.Other, 0x8, &Other, 0x8);

	this->ProcessEvent(pFnWatch, &Watch_Parms, nullptr);

	return Watch_Parms.ReturnValue;
};

// Function Core.AsyncTask.All
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<class UAsyncTask*>      Dependents                     (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UAsyncTask::All(TArray<class UAsyncTask*> Dependents)
{
	static UFunction* pFnAll = nullptr;

	if (!pFnAll)
	{
		pFnAll = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_ALL));
	}

	UAsyncTask_execAll_Parms All_Parms;
	memcpy_s(&All_Parms.Dependents, 0x10, &Dependents, 0x10);

	this->ProcessEvent(pFnAll, &All_Parms, nullptr);

	return All_Parms.ReturnValue;
};

// Function Core.AsyncTask.DependOn
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAsyncTask*              Other                          (CPF_Parm)

class UAsyncTask* UAsyncTask::DependOn(class UAsyncTask* Other)
{
	static UFunction* pFnDependOn = nullptr;

	if (!pFnDependOn)
	{
		pFnDependOn = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_DEPENDON));
	}

	UAsyncTask_execDependOn_Parms DependOn_Parms;
	memcpy_s(&DependOn_Parms.Other, 0x8, &Other, 0x8);

	this->ProcessEvent(pFnDependOn, &DependOn_Parms, nullptr);

	return DependOn_Parms.ReturnValue;
};

// Function Core.AsyncTask.NotifyOnDispose
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UAsyncTask::eventNotifyOnDispose(struct FScriptDelegate Callback)
{
	static UFunction* pFnNotifyOnDispose = nullptr;

	if (!pFnNotifyOnDispose)
	{
		pFnNotifyOnDispose = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_NOTIFYONDISPOSE));
	}

	UAsyncTask_eventNotifyOnDispose_Parms NotifyOnDispose_Parms;
	memcpy_s(&NotifyOnDispose_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnNotifyOnDispose, &NotifyOnDispose_Parms, nullptr);

	return NotifyOnDispose_Parms.ReturnValue;
};

// Function Core.AsyncTask.ClearCallbacks
// [0x00080802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Protected | FUNC_AllFlags)
// Parameter info:

void UAsyncTask::eventClearCallbacks()
{
	static UFunction* pFnClearCallbacks = nullptr;

	if (!pFnClearCallbacks)
	{
		pFnClearCallbacks = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_CLEARCALLBACKS));
	}

	UAsyncTask_eventClearCallbacks_Parms ClearCallbacks_Parms;

	this->ProcessEvent(pFnClearCallbacks, &ClearCallbacks_Parms, nullptr);
};

// Function Core.AsyncTask.Dispose
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UAsyncTask::eventDispose()
{
	static UFunction* pFnDispose = nullptr;

	if (!pFnDispose)
	{
		pFnDispose = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_DISPOSE));
	}

	UAsyncTask_eventDispose_Parms Dispose_Parms;

	this->ProcessEvent(pFnDispose, &Dispose_Parms, nullptr);
};

// Function Core.AsyncTask.SetComplete
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UError*                  InError                        (CPF_OptionalParm | CPF_Parm)

void UAsyncTask::SetComplete(class UError* InError)
{
	static UFunction* pFnSetComplete = nullptr;

	if (!pFnSetComplete)
	{
		pFnSetComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_SETCOMPLETE));
	}

	UAsyncTask_execSetComplete_Parms SetComplete_Parms;
	memcpy_s(&SetComplete_Parms.InError, 0x8, &InError, 0x8);

	this->ProcessEvent(pFnSetComplete, &SetComplete_Parms, nullptr);
};

// Function Core.AsyncTask.SetError
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UError*                  InError                        (CPF_Parm)

void UAsyncTask::eventSetError(class UError* InError)
{
	static UFunction* pFnSetError = nullptr;

	if (!pFnSetError)
	{
		pFnSetError = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_SETERROR));
	}

	UAsyncTask_eventSetError_Parms SetError_Parms;
	memcpy_s(&SetError_Parms.InError, 0x8, &InError, 0x8);

	this->ProcessEvent(pFnSetError, &SetError_Parms, nullptr);
};

// Function Core.AsyncTask.NotifyOnComplete
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UAsyncTask::eventNotifyOnComplete(struct FScriptDelegate Callback)
{
	static UFunction* pFnNotifyOnComplete = nullptr;

	if (!pFnNotifyOnComplete)
	{
		pFnNotifyOnComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_NOTIFYONCOMPLETE));
	}

	UAsyncTask_eventNotifyOnComplete_Parms NotifyOnComplete_Parms;
	memcpy_s(&NotifyOnComplete_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnNotifyOnComplete, &NotifyOnComplete_Parms, nullptr);

	return NotifyOnComplete_Parms.ReturnValue;
};

// Function Core.AsyncTask.NotifyOnFail
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UAsyncTask::eventNotifyOnFail(struct FScriptDelegate Callback)
{
	static UFunction* pFnNotifyOnFail = nullptr;

	if (!pFnNotifyOnFail)
	{
		pFnNotifyOnFail = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_NOTIFYONFAIL));
	}

	UAsyncTask_eventNotifyOnFail_Parms NotifyOnFail_Parms;
	memcpy_s(&NotifyOnFail_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnNotifyOnFail, &NotifyOnFail_Parms, nullptr);

	return NotifyOnFail_Parms.ReturnValue;
};

// Function Core.AsyncTask.NotifyOnSuccess
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAsyncTask*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

class UAsyncTask* UAsyncTask::eventNotifyOnSuccess(struct FScriptDelegate Callback)
{
	static UFunction* pFnNotifyOnSuccess = nullptr;

	if (!pFnNotifyOnSuccess)
	{
		pFnNotifyOnSuccess = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_NOTIFYONSUCCESS));
	}

	UAsyncTask_eventNotifyOnSuccess_Parms NotifyOnSuccess_Parms;
	memcpy_s(&NotifyOnSuccess_Parms.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(pFnNotifyOnSuccess, &NotifyOnSuccess_Parms, nullptr);

	return NotifyOnSuccess_Parms.ReturnValue;
};

// Function Core.AsyncTask.EventDisposed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAsyncTask::EventDisposed()
{
	static UFunction* pFnEventDisposed = nullptr;

	if (!pFnEventDisposed)
	{
		pFnEventDisposed = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_EVENTDISPOSED));
	}

	UAsyncTask_execEventDisposed_Parms EventDisposed_Parms;

	this->ProcessEvent(pFnEventDisposed, &EventDisposed_Parms, nullptr);
};

// Function Core.AsyncTask.EventAsyncTaskComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UError*                  TaskError                      (CPF_Parm)

void UAsyncTask::EventAsyncTaskComplete(class UError* TaskError)
{
	static UFunction* pFnEventAsyncTaskComplete = nullptr;

	if (!pFnEventAsyncTaskComplete)
	{
		pFnEventAsyncTaskComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_EVENTASYNCTASKCOMPLETE));
	}

	UAsyncTask_execEventAsyncTaskComplete_Parms EventAsyncTaskComplete_Parms;
	memcpy_s(&EventAsyncTaskComplete_Parms.TaskError, 0x8, &TaskError, 0x8);

	this->ProcessEvent(pFnEventAsyncTaskComplete, &EventAsyncTaskComplete_Parms, nullptr);
};

// Function Core.AsyncTask.EventAsyncTaskFail
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UError*                  TaskError                      (CPF_Parm)

void UAsyncTask::EventAsyncTaskFail(class UError* TaskError)
{
	static UFunction* pFnEventAsyncTaskFail = nullptr;

	if (!pFnEventAsyncTaskFail)
	{
		pFnEventAsyncTaskFail = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_EVENTASYNCTASKFAIL));
	}

	UAsyncTask_execEventAsyncTaskFail_Parms EventAsyncTaskFail_Parms;
	memcpy_s(&EventAsyncTaskFail_Parms.TaskError, 0x8, &TaskError, 0x8);

	this->ProcessEvent(pFnEventAsyncTaskFail, &EventAsyncTaskFail_Parms, nullptr);
};

// Function Core.AsyncTask.EventAsyncTaskSuccess
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UAsyncTask::EventAsyncTaskSuccess()
{
	static UFunction* pFnEventAsyncTaskSuccess = nullptr;

	if (!pFnEventAsyncTaskSuccess)
	{
		pFnEventAsyncTaskSuccess = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ASYNCTASK_EVENTASYNCTASKSUCCESS));
	}

	UAsyncTask_execEventAsyncTaskSuccess_Parms EventAsyncTaskSuccess_Parms;

	this->ProcessEvent(pFnEventAsyncTaskSuccess, &EventAsyncTaskSuccess_Parms, nullptr);
};

// Function Core._LoggingDoc.TestSpecialLogging
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void U_LoggingDoc::TestSpecialLogging()
{
	static UFunction* pFnTestSpecialLogging = nullptr;

	if (!pFnTestSpecialLogging)
	{
		pFnTestSpecialLogging = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE__LOGGINGDOC_TESTSPECIALLOGGING));
	}

	U_LoggingDoc_execTestSpecialLogging_Parms TestSpecialLogging_Parms;

	this->ProcessEvent(pFnTestSpecialLogging, &TestSpecialLogging_Parms, nullptr);
};

// Function Core.__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812.__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void U__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812::__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812()
{
	static UFunction* pFn__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812 = nullptr;

	if (!pFn__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812)
	{
		pFn__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812 = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE___ASYNCTASK__ALL_2C3F245B4F175665D439CCAE11AF6812___ASYNCTASK__ALL_2C3F245B4F175665D439CCAE11AF6812));
	}

	U__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812_exec__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812_Parms __AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812_Parms;

	this->ProcessEvent(pFn__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812, &__AsyncTask__All_2C3F245B4F175665D439CCAE11AF6812_Parms, nullptr);
};

// Function Core.IDisposable.Dispose
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UIDisposable::eventDispose()
{
	static UFunction* pFnDispose = nullptr;

	if (!pFnDispose)
	{
		pFnDispose = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_IDISPOSABLE_DISPOSE));
	}

	UIDisposable_eventDispose_Parms Dispose_Parms;

	this->ProcessEvent(pFnDispose, &Dispose_Parms, nullptr);
};

// Function Core.ArrayFuncs.GetRandomElement
// [0x80022001] (FUNC_Final | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UArrayFuncs::GetRandomElement()
{
	static UFunction* pFnGetRandomElement = nullptr;

	if (!pFnGetRandomElement)
	{
		pFnGetRandomElement = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ARRAYFUNCS_GETRANDOMELEMENT));
	}

	UArrayFuncs_execGetRandomElement_Parms GetRandomElement_Parms;

	this->ProcessEvent(pFnGetRandomElement, &GetRandomElement_Parms, nullptr);
};

// Function Core.ArrayFuncs.ShuffleArray
// [0x80022001] (FUNC_Final | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UArrayFuncs::ShuffleArray()
{
	static UFunction* pFnShuffleArray = nullptr;

	if (!pFnShuffleArray)
	{
		pFnShuffleArray = reinterpret_cast<UFunction*>(UObject::GObjObjects()->At(IDX_FUNCTION_CORE_ARRAYFUNCS_SHUFFLEARRAY));
	}

	UArrayFuncs_execShuffleArray_Parms ShuffleArray_Parms;

	this->ProcessEvent(pFnShuffleArray, &ShuffleArray_Parms, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
