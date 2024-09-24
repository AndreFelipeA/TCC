// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TCCPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCC_TCCPlayerController_generated_h
#error "TCCPlayerController.generated.h already included, missing '#pragma once' in TCCPlayerController.h"
#endif
#define TCC_TCCPlayerController_generated_h

#define FID_TCC_TCC_Source_TCC_TCCPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATCCPlayerController(); \
	friend struct Z_Construct_UClass_ATCCPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATCCPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCC"), NO_API) \
	DECLARE_SERIALIZER(ATCCPlayerController)


#define FID_TCC_TCC_Source_TCC_TCCPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATCCPlayerController(ATCCPlayerController&&); \
	ATCCPlayerController(const ATCCPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATCCPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATCCPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATCCPlayerController) \
	NO_API virtual ~ATCCPlayerController();


#define FID_TCC_TCC_Source_TCC_TCCPlayerController_h_17_PROLOG
#define FID_TCC_TCC_Source_TCC_TCCPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TCC_TCC_Source_TCC_TCCPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_TCC_TCC_Source_TCC_TCCPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCC_API UClass* StaticClass<class ATCCPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TCC_TCC_Source_TCC_TCCPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
