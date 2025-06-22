// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCCzin/Public/NWFC.h"
#include "TCCzin/Public/WFC/WFC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNWFC() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TCCZIN_API UClass* Z_Construct_UClass_UNWFC();
TCCZIN_API UClass* Z_Construct_UClass_UNWFC_NoRegister();
TCCZIN_API UClass* Z_Construct_UClass_UWFC_NoRegister();
TCCZIN_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix2DWFC();
TCCZIN_API UScriptStruct* Z_Construct_UScriptStruct_FMatrixObject();
UPackage* Z_Construct_UPackage__Script_TCCzin();
// End Cross Module References

// Begin ScriptStruct FMatrix2DWFC
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Matrix2DWFC;
class UScriptStruct* FMatrix2DWFC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix2DWFC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Matrix2DWFC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrix2DWFC, (UObject*)Z_Construct_UPackage__Script_TCCzin(), TEXT("Matrix2DWFC"));
	}
	return Z_Registration_Info_UScriptStruct_Matrix2DWFC.OuterSingleton;
}
template<> TCCZIN_API UScriptStruct* StaticStruct<FMatrix2DWFC>()
{
	return FMatrix2DWFC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMatrix2DWFC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_MetaData[] = {
		{ "Category", "Matrix2DWFC" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_M_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_M;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrix2DWFC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::NewProp_M_Inner = { "M", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMatrixObject, METADATA_PARAMS(0, nullptr) }; // 553631897
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMatrix2DWFC, M), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_MetaData), NewProp_M_MetaData) }; // 553631897
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::NewProp_M_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::NewProp_M,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
	nullptr,
	&NewStructOps,
	"Matrix2DWFC",
	Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::PropPointers),
	sizeof(FMatrix2DWFC),
	alignof(FMatrix2DWFC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMatrix2DWFC()
{
	if (!Z_Registration_Info_UScriptStruct_Matrix2DWFC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Matrix2DWFC.InnerSingleton, Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Matrix2DWFC.InnerSingleton;
}
// End ScriptStruct FMatrix2DWFC

// Begin Class UNWFC Function NestedWFC
struct Z_Construct_UFunction_UNWFC_NestedWFC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNWFC_NestedWFC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNWFC, nullptr, "NestedWFC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNWFC_NestedWFC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNWFC_NestedWFC_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNWFC_NestedWFC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNWFC_NestedWFC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNWFC::execNestedWFC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NestedWFC();
	P_NATIVE_END;
}
// End Class UNWFC Function NestedWFC

// Begin Class UNWFC
void UNWFC::StaticRegisterNativesUNWFC()
{
	UClass* Class = UNWFC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NestedWFC", &UNWFC::execNestedWFC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNWFC);
UClass* Z_Construct_UClass_UNWFC_NoRegister()
{
	return UNWFC::StaticClass();
}
struct Z_Construct_UClass_UNWFC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NWFC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wfc_MetaData[] = {
		{ "Category", "NWFC" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "NWFC" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "NWFC" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "Category", "NWFC" },
		{ "ModuleRelativePath", "Public/NWFC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_wfc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_C;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNWFC_NestedWFC, "NestedWFC" }, // 899155572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNWFC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNWFC_Statics::NewProp_wfc = { "wfc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNWFC, wfc), Z_Construct_UClass_UWFC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wfc_MetaData), NewProp_wfc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNWFC_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNWFC, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNWFC_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNWFC, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNWFC_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNWFC, C), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNWFC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNWFC_Statics::NewProp_wfc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNWFC_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNWFC_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNWFC_Statics::NewProp_C,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNWFC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNWFC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNWFC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNWFC_Statics::ClassParams = {
	&UNWFC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNWFC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNWFC_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNWFC_Statics::Class_MetaDataParams), Z_Construct_UClass_UNWFC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNWFC()
{
	if (!Z_Registration_Info_UClass_UNWFC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNWFC.OuterSingleton, Z_Construct_UClass_UNWFC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNWFC.OuterSingleton;
}
template<> TCCZIN_API UClass* StaticClass<UNWFC>()
{
	return UNWFC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNWFC);
UNWFC::~UNWFC() {}
// End Class UNWFC

// Begin Registration
struct Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMatrix2DWFC::StaticStruct, Z_Construct_UScriptStruct_FMatrix2DWFC_Statics::NewStructOps, TEXT("Matrix2DWFC"), &Z_Registration_Info_UScriptStruct_Matrix2DWFC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrix2DWFC), 2738846706U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNWFC, UNWFC::StaticClass, TEXT("UNWFC"), &Z_Registration_Info_UClass_UNWFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNWFC), 131480880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_2257473595(TEXT("/Script/TCCzin"),
	Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
