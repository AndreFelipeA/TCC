// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NWFC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCCZIN_NWFC_generated_h
#error "NWFC.generated.h already included, missing '#pragma once' in NWFC.h"
#endif
#define TCCZIN_NWFC_generated_h

#define FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNestedWFC);


#define FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNWFC(); \
	friend struct Z_Construct_UClass_UNWFC_Statics; \
public: \
	DECLARE_CLASS(UNWFC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCCzin"), NO_API) \
	DECLARE_SERIALIZER(UNWFC)


#define FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNWFC(UNWFC&&); \
	UNWFC(const UNWFC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNWFC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNWFC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNWFC) \
	NO_API virtual ~UNWFC();


#define FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_14_PROLOG
#define FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_INCLASS_NO_PURE_DECLS \
	FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCCZIN_API UClass* StaticClass<class UNWFC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TCC_TCCzin_Source_TCCzin_Public_NWFC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
