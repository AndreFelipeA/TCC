// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveFunction/Tile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCC_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define TCC_Tile_generated_h

#define FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileArray_Statics; \
	TCC_API static class UScriptStruct* StaticStruct();


template<> TCC_API UScriptStruct* StaticStruct<struct FTileArray>();

#define FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCC"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATile(ATile&&); \
	ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile) \
	NO_API virtual ~ATile();


#define FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_20_PROLOG
#define FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_23_INCLASS_NO_PURE_DECLS \
	FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCC_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TCC_TCC_Source_TCC_Public_WaveFunction_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
