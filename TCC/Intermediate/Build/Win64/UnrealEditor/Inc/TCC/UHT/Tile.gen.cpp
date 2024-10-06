// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCC/Public/WaveFunction/Tile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TCC_API UClass* Z_Construct_UClass_ATile();
TCC_API UClass* Z_Construct_UClass_ATile_NoRegister();
TCC_API UScriptStruct* Z_Construct_UScriptStruct_FTileArray();
UPackage* Z_Construct_UPackage__Script_TCC();
// End Cross Module References

// Begin ScriptStruct FTileArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileArray;
class UScriptStruct* FTileArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileArray, (UObject*)Z_Construct_UPackage__Script_TCC(), TEXT("TileArray"));
	}
	return Z_Registration_Info_UScriptStruct_TileArray.OuterSingleton;
}
template<> TCC_API UScriptStruct* StaticStruct<FTileArray>()
{
	return FTileArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTileArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveFunction/Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "Category", "TileArray" },
		{ "ModuleRelativePath", "Public/WaveFunction/Tile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTileArray_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTileArray_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileArray, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileArray_Statics::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileArray_Statics::NewProp_Tiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TCC,
	nullptr,
	&NewStructOps,
	"TileArray",
	Z_Construct_UScriptStruct_FTileArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileArray_Statics::PropPointers),
	sizeof(FTileArray),
	alignof(FTileArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTileArray()
{
	if (!Z_Registration_Info_UScriptStruct_TileArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileArray.InnerSingleton, Z_Construct_UScriptStruct_FTileArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TileArray.InnerSingleton;
}
// End ScriptStruct FTileArray

// Begin Class ATile
void ATile::StaticRegisterNativesATile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATile);
UClass* Z_Construct_UClass_ATile_NoRegister()
{
	return ATile::StaticClass();
}
struct Z_Construct_UClass_ATile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WaveFunction/Tile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaveFunction/Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaveFunction/Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidNeighbors_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/WaveFunction/Tile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidNeighbors_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidNeighbors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValidNeighbors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ValidNeighbors_ValueProp = { "ValidNeighbors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileArray, METADATA_PARAMS(0, nullptr) }; // 1996981522
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ValidNeighbors_Key_KeyProp = { "ValidNeighbors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ValidNeighbors = { "ValidNeighbors", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, ValidNeighbors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidNeighbors_MetaData), NewProp_ValidNeighbors_MetaData) }; // 1996981522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ValidNeighbors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ValidNeighbors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ValidNeighbors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TCC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
	&ATile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams), Z_Construct_UClass_ATile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATile()
{
	if (!Z_Registration_Info_UClass_ATile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATile.OuterSingleton, Z_Construct_UClass_ATile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATile.OuterSingleton;
}
template<> TCC_API UClass* StaticClass<ATile>()
{
	return ATile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
ATile::~ATile() {}
// End Class ATile

// Begin Registration
struct Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTileArray::StaticStruct, Z_Construct_UScriptStruct_FTileArray_Statics::NewStructOps, TEXT("TileArray"), &Z_Registration_Info_UScriptStruct_TileArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileArray), 1996981522U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATile, ATile::StaticClass, TEXT("ATile"), &Z_Registration_Info_UClass_ATile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATile), 3274464766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_1003712608(TEXT("/Script/TCC"),
	Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
