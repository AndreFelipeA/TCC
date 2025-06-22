// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCCzin/Public/WFC/ObjectTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TCCZIN_API UClass* Z_Construct_UClass_UObjectTile();
TCCZIN_API UClass* Z_Construct_UClass_UObjectTile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TCCzin();
// End Cross Module References

// Begin Class UObjectTile
void UObjectTile::StaticRegisterNativesUObjectTile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectTile);
UClass* Z_Construct_UClass_UObjectTile_NoRegister()
{
	return UObjectTile::StaticClass();
}
struct Z_Construct_UClass_UObjectTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WFC/ObjectTile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidNeighboursN_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidNeighboursS_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidNeighboursW_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidNeighboursE_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidTiles_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ObjectTile" },
		{ "ModuleRelativePath", "Public/WFC/ObjectTile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidNeighboursN_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidNeighboursN;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidNeighboursS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidNeighboursS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidNeighboursW_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidNeighboursW;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidNeighboursE_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidNeighboursE;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ValidTiles_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValidTiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValidTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectTile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursN_Inner = { "ValidNeighboursN", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursN = { "ValidNeighboursN", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, ValidNeighboursN), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidNeighboursN_MetaData), NewProp_ValidNeighboursN_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursS_Inner = { "ValidNeighboursS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursS = { "ValidNeighboursS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, ValidNeighboursS), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidNeighboursS_MetaData), NewProp_ValidNeighboursS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursW_Inner = { "ValidNeighboursW", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursW = { "ValidNeighboursW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, ValidNeighboursW), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidNeighboursW_MetaData), NewProp_ValidNeighboursW_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursE_Inner = { "ValidNeighboursE", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursE = { "ValidNeighboursE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, ValidNeighboursE), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidNeighboursE_MetaData), NewProp_ValidNeighboursE_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidTiles_ValueProp = { "ValidTiles", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObjectTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidTiles_Key_KeyProp = { "ValidTiles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidTiles = { "ValidTiles", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, ValidTiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidTiles_MetaData), NewProp_ValidTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInterface_MetaData), NewProp_MaterialInterface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectTile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectTile, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursN_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursW_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursE_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidNeighboursE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidTiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidTiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_ValidTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_MaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectTile_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectTile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TCCzin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectTile_Statics::ClassParams = {
	&UObjectTile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectTile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTile_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectTile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectTile()
{
	if (!Z_Registration_Info_UClass_UObjectTile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectTile.OuterSingleton, Z_Construct_UClass_UObjectTile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectTile.OuterSingleton;
}
template<> TCCZIN_API UClass* StaticClass<UObjectTile>()
{
	return UObjectTile::StaticClass();
}
UObjectTile::UObjectTile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTile);
UObjectTile::~UObjectTile() {}
// End Class UObjectTile

// Begin Registration
struct Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_ObjectTile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectTile, UObjectTile::StaticClass, TEXT("UObjectTile"), &Z_Registration_Info_UClass_UObjectTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectTile), 3371317590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_ObjectTile_h_3971332730(TEXT("/Script/TCCzin"),
	Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_ObjectTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCCzin_Source_TCCzin_Public_WFC_ObjectTile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
