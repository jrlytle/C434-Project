// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealEdTypes_generated_h
#error "UnrealEdTypes.generated.h already included, missing '#pragma once' in UnrealEdTypes.h"
#endif
#define UNREALED_UnrealEdTypes_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_74_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_53_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassScalarParameterValue(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_35_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_17_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterValue(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUUnrealEdTypes(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UUnrealEdTypes(); \
	public: \
	DECLARE_CLASS(UUnrealEdTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UUnrealEdTypes) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("UnrealEd");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UUnrealEdTypes*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_INCLASS \
	private: \
	static void StaticRegisterNativesUUnrealEdTypes(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UUnrealEdTypes(); \
	public: \
	DECLARE_CLASS(UUnrealEdTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UUnrealEdTypes) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("UnrealEd");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UUnrealEdTypes*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdTypes); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UUnrealEdTypes(const UUnrealEdTypes& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UUnrealEdTypes(const UUnrealEdTypes& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdTypes)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_129_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_132_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UnrealEdTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h


#define FOREACH_ENUM_ELEVELVIEWPORTTYPE(op) \
	op(LVT_OrthoXY) \
	op(LVT_OrthoXZ) \
	op(LVT_OrthoYZ) \
	op(LVT_Perspective) \
	op(LVT_OrthoFreelook) \
	op(LVT_OrthoNegativeXY) \
	op(LVT_OrthoNegativeXZ) \
	op(LVT_OrthoNegativeYZ) \
	op(LVT_MAX) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS