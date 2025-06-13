// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCCzin/Public/WFC/WFC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWFC() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TCCZIN_API UClass* Z_Construct_UClass_ATile_NoRegister();
TCCZIN_API UClass* Z_Construct_UClass_UObjectTile_NoRegister();
TCCZIN_API UClass* Z_Construct_UClass_UWFC();
TCCZIN_API UClass* Z_Construct_UClass_UWFC_NoRegister();
TCCZIN_API UScriptStruct* Z_Construct_UScriptStruct_FMatrixArray();
TCCZIN_API UScriptStruct* Z_Construct_UScriptStruct_FMatrixBool();
TCCZIN_API UScriptStruct* Z_Construct_UScriptStruct_FMatrixObject();
UPackage* Z_Construct_UPackage__Script_TCCzin();
// End Cross Module References

// Begin ScriptStruct FMatrixArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatrixArray;
class UScriptStruct* FMatrixArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatrixArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrixArray, (UObject*)Z_Construct_UPackage__Script_TCCzin(), TEXT("MatrixArray"));
	}
	return Z_Registration_Info_UScriptStruct_MatrixArray.OuterSingleton;
}
template<> TCCZIN_API UScriptStruct* StaticStruct<FMatrixArray>()
{
	return FMatrixArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrixArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_MetaData[] = {
		{ "Category", "MatrixArray" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_M_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_M;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrixArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatrixArray_Statics::NewProp_M_Inner = { "M", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatrixArray_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrixArray, M), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_MetaData), NewProp_M_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrixArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixArray_Statics::NewProp_M_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixArray_Statics::NewProp_M,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrixArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
	nullptr,
	&NewStructOps,
	"MatrixArray",
	Z_Construct_UScriptStruct_FMatrixArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixArray_Statics::PropPointers),
	sizeof(FMatrixArray),
	alignof(FMatrixArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrixArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrixArray()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatrixArray.InnerSingleton, Z_Construct_UScriptStruct_FMatrixArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MatrixArray.InnerSingleton;
}
// End ScriptStruct FMatrixArray

// Begin ScriptStruct FMatrixBool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatrixBool;
class UScriptStruct* FMatrixBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatrixBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrixBool, (UObject*)Z_Construct_UPackage__Script_TCCzin(), TEXT("MatrixBool"));
	}
	return Z_Registration_Info_UScriptStruct_MatrixBool.OuterSingleton;
}
template<> TCCZIN_API UScriptStruct* StaticStruct<FMatrixBool>()
{
	return FMatrixBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrixBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_MetaData[] = {
		{ "Category", "MatrixBool" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_M_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_M;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrixBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatrixBool_Statics::NewProp_M_Inner = { "M", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatrixBool_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrixBool, M), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_MetaData), NewProp_M_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrixBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixBool_Statics::NewProp_M_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixBool_Statics::NewProp_M,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrixBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
	nullptr,
	&NewStructOps,
	"MatrixBool",
	Z_Construct_UScriptStruct_FMatrixBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixBool_Statics::PropPointers),
	sizeof(FMatrixBool),
	alignof(FMatrixBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrixBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrixBool()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatrixBool.InnerSingleton, Z_Construct_UScriptStruct_FMatrixBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MatrixBool.InnerSingleton;
}
// End ScriptStruct FMatrixBool

// Begin ScriptStruct FMatrixObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatrixObject;
class UScriptStruct* FMatrixObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatrixObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrixObject, (UObject*)Z_Construct_UPackage__Script_TCCzin(), TEXT("MatrixObject"));
	}
	return Z_Registration_Info_UScriptStruct_MatrixObject.OuterSingleton;
}
template<> TCCZIN_API UScriptStruct* StaticStruct<FMatrixObject>()
{
	return FMatrixObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrixObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_MetaData[] = {
		{ "Category", "MatrixObject" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_M_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_M;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrixObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatrixObject_Statics::NewProp_M_Inner = { "M", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObjectTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatrixObject_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrixObject, M), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_MetaData), NewProp_M_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrixObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixObject_Statics::NewProp_M_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixObject_Statics::NewProp_M,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrixObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
	nullptr,
	&NewStructOps,
	"MatrixObject",
	Z_Construct_UScriptStruct_FMatrixObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixObject_Statics::PropPointers),
	sizeof(FMatrixObject),
	alignof(FMatrixObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrixObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrixObject()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatrixObject.InnerSingleton, Z_Construct_UScriptStruct_FMatrixObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MatrixObject.InnerSingleton;
}
// End ScriptStruct FMatrixObject

// Begin Class UWFC Function WFC
struct Z_Construct_UFunction_UWFC_WFC_Statics
{
	struct WFC_eventWFC_Parms
	{
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TArray<FMatrixObject>\n" },
#endif
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray<FMatrixObject>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWFC_WFC_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WFC_eventWFC_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWFC_WFC_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WFC_eventWFC_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWFC_WFC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWFC_WFC_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWFC_WFC_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_WFC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWFC_WFC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWFC, nullptr, "WFC", nullptr, nullptr, Z_Construct_UFunction_UWFC_WFC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_WFC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWFC_WFC_Statics::WFC_eventWFC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWFC_WFC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWFC_WFC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWFC_WFC_Statics::WFC_eventWFC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWFC_WFC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWFC_WFC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWFC::execWFC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WFC(Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UWFC Function WFC

// Begin Class UWFC
void UWFC::StaticRegisterNativesUWFC()
{
	UClass* Class = UWFC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WFC", &UWFC::execWFC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWFC);
UClass* Z_Construct_UClass_UWFC_NoRegister()
{
	return UWFC::StaticClass();
}
struct Z_Construct_UClass_UWFC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WFC/WFC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "Category", "WFC" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "WFC" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "WFC" },
		{ "ModuleRelativePath", "Public/WFC/WFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Tiles_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWFC_WFC, "WFC" }, // 2764519656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWFC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWFC_Statics::NewProp_Tiles_ValueProp = { "Tiles", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObjectTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWFC_Statics::NewProp_Tiles_Key_KeyProp = { "Tiles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWFC_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWFC, Tiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWFC_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWFC, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWFC_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWFC, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWFC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWFC_Statics::NewProp_Tiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWFC_Statics::NewProp_Tiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWFC_Statics::NewProp_Tiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWFC_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWFC_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWFC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWFC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWFC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWFC_Statics::ClassParams = {
	&UWFC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWFC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWFC_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWFC_Statics::Class_MetaDataParams), Z_Construct_UClass_UWFC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWFC()
{
	if (!Z_Registration_Info_UClass_UWFC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWFC.OuterSingleton, Z_Construct_UClass_UWFC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWFC.OuterSingleton;
}
template<> TCCZIN_API UClass* StaticClass<UWFC>()
{
	return UWFC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWFC);
UWFC::~UWFC() {}
// End Class UWFC

// Begin Registration
struct Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_WFC_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMatrixArray::StaticStruct, Z_Construct_UScriptStruct_FMatrixArray_Statics::NewStructOps, TEXT("MatrixArray"), &Z_Registration_Info_UScriptStruct_MatrixArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrixArray), 4068369908U) },
		{ FMatrixBool::StaticStruct, Z_Construct_UScriptStruct_FMatrixBool_Statics::NewStructOps, TEXT("MatrixBool"), &Z_Registration_Info_UScriptStruct_MatrixBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrixBool), 295143149U) },
		{ FMatrixObject::StaticStruct, Z_Construct_UScriptStruct_FMatrixObject_Statics::NewStructOps, TEXT("MatrixObject"), &Z_Registration_Info_UScriptStruct_MatrixObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrixObject), 553631897U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWFC, UWFC::StaticClass, TEXT("UWFC"), &Z_Registration_Info_UClass_UWFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWFC), 3829536261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_WFC_h_3471570764(TEXT("/Script/TCCzin"),
	Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_WFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_WFC_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_WFC_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_WFC_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
