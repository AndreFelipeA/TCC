// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TCCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCC_TCCCharacter_generated_h
#error "TCCCharacter.generated.h already included, missing '#pragma once' in TCCCharacter.h"
#endif
#define TCC_TCCCharacter_generated_h

#define FID_TCC_TCC_Source_TCC_TCCCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATCCCharacter(); \
	friend struct Z_Construct_UClass_ATCCCharacter_Statics; \
public: \
	DECLARE_CLASS(ATCCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCC"), NO_API) \
	DECLARE_SERIALIZER(ATCCCharacter)


#define FID_TCC_TCC_Source_TCC_TCCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATCCCharacter(ATCCCharacter&&); \
	ATCCCharacter(const ATCCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATCCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATCCCharacter) \
	NO_API virtual ~ATCCCharacter();


#define FID_TCC_TCC_Source_TCC_TCCCharacter_h_9_PROLOG
#define FID_TCC_TCC_Source_TCC_TCCCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TCC_TCC_Source_TCC_TCCCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TCC_TCC_Source_TCC_TCCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCC_API UClass* StaticClass<class ATCCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TCC_TCC_Source_TCC_TCCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
