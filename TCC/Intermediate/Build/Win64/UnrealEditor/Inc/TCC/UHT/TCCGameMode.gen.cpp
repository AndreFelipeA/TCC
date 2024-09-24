// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCC/TCCGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCCGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TCC_API UClass* Z_Construct_UClass_ATCCGameMode();
TCC_API UClass* Z_Construct_UClass_ATCCGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TCC();
// End Cross Module References

// Begin Class ATCCGameMode
void ATCCGameMode::StaticRegisterNativesATCCGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATCCGameMode);
UClass* Z_Construct_UClass_ATCCGameMode_NoRegister()
{
	return ATCCGameMode::StaticClass();
}
struct Z_Construct_UClass_ATCCGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TCCGameMode.h" },
		{ "ModuleRelativePath", "TCCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATCCGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATCCGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TCC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATCCGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATCCGameMode_Statics::ClassParams = {
	&ATCCGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATCCGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATCCGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATCCGameMode()
{
	if (!Z_Registration_Info_UClass_ATCCGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATCCGameMode.OuterSingleton, Z_Construct_UClass_ATCCGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATCCGameMode.OuterSingleton;
}
template<> TCC_API UClass* StaticClass<ATCCGameMode>()
{
	return ATCCGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATCCGameMode);
ATCCGameMode::~ATCCGameMode() {}
// End Class ATCCGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_TCCGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATCCGameMode, ATCCGameMode::StaticClass, TEXT("ATCCGameMode"), &Z_Registration_Info_UClass_ATCCGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATCCGameMode), 1744209427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_TCCGameMode_h_421411619(TEXT("/Script/TCC"),
	Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_TCCGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TCC_TCC_Source_TCC_TCCGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
