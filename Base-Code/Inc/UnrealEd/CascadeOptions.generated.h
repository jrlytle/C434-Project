// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CascadeOptions_generated_h
#error "CascadeOptions.generated.h already included, missing '#pragma once' in CascadeOptions.h"
#endif
#define UNREALED_CascadeOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCascadeOptions(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UCascadeOptions(); \
	public: \
	DECLARE_CLASS(UCascadeOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UCascadeOptions) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UCascadeOptions*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUCascadeOptions(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UCascadeOptions(); \
	public: \
	DECLARE_CLASS(UCascadeOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UCascadeOptions) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UCascadeOptions*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCascadeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCascadeOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCascadeOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCascadeOptions); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCascadeOptions(const UCascadeOptions& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCascadeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCascadeOptions(const UCascadeOptions& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCascadeOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCascadeOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCascadeOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_13_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CascadeOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
