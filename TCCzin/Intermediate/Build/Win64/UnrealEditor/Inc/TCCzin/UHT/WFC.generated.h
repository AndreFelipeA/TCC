// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WFC/WFC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCCZIN_WFC_generated_h
#error "WFC.generated.h already included, missing '#pragma once' in WFC.h"
#endif
#define TCCZIN_WFC_generated_h

#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatrixArray_Statics; \
	TCCZIN_API static class UScriptStruct* StaticStruct();


template<> TCCZIN_API UScriptStruct* StaticStruct<struct FMatrixArray>();

#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatrixBool_Statics; \
	TCCZIN_API static class UScriptStruct* StaticStruct();


template<> TCCZIN_API UScriptStruct* StaticStruct<struct FMatrixBool>();

#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatrixObject_Statics; \
	TCCZIN_API static class UScriptStruct* StaticStruct();


template<> TCCZIN_API UScriptStruct* StaticStruct<struct FMatrixObject>();

#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWFC);


#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWFC(); \
	friend struct Z_Construct_UClass_UWFC_Statics; \
public: \
	DECLARE_CLASS(UWFC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCCzin"), NO_API) \
	DECLARE_SERIALIZER(UWFC)


#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWFC(UWFC&&); \
	UWFC(const UWFC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWFC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWFC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWFC) \
	NO_API virtual ~UWFC();


#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_71_PROLOG
#define FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_INCLASS_NO_PURE_DECLS \
	FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCCZIN_API UClass* StaticClass<class UWFC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TCCzin_Source_TCCzin_Public_WFC_WFC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
