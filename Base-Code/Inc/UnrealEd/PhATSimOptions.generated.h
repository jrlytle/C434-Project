// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PhATSimOptions_generated_h
#error "PhATSimOptions.generated.h already included, missing '#pragma once' in PhATSimOptions.h"
#endif
#define UNREALED_PhATSimOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPhATSimOptions(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UPhATSimOptions(); \
	public: \
	DECLARE_CLASS(UPhATSimOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UPhATSimOptions) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UPhATSimOptions*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUPhATSimOptions(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UPhATSimOptions(); \
	public: \
	DECLARE_CLASS(UPhATSimOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UPhATSimOptions) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UPhATSimOptions*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhATSimOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhATSimOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhATSimOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhATSimOptions); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPhATSimOptions(const UPhATSimOptions& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhATSimOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPhATSimOptions(const UPhATSimOptions& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhATSimOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhATSimOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhATSimOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_7_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhATSimOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_PhATSimOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
