// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TCCGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCC_TCCGameMode_generated_h
#error "TCCGameMode.generated.h already included, missing '#pragma once' in TCCGameMode.h"
#endif
#define TCC_TCCGameMode_generated_h

#define FID_TCC_TCC_Source_TCC_TCCGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATCCGameMode(); \
	friend struct Z_Construct_UClass_ATCCGameMode_Statics; \
public: \
	DECLARE_CLASS(ATCCGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCC"), TCC_API) \
	DECLARE_SERIALIZER(ATCCGameMode)


#define FID_TCC_TCC_Source_TCC_TCCGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATCCGameMode(ATCCGameMode&&); \
	ATCCGameMode(const ATCCGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TCC_API, ATCCGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCCGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATCCGameMode) \
	TCC_API virtual ~ATCCGameMode();


#define FID_TCC_TCC_Source_TCC_TCCGameMode_h_9_PROLOG
#define FID_TCC_TCC_Source_TCC_TCCGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TCC_TCC_Source_TCC_TCCGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_TCC_TCC_Source_TCC_TCCGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCC_API UClass* StaticClass<class ATCCGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TCC_TCC_Source_TCC_TCCGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
