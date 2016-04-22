// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealEdKeyBindings_generated_h
#error "UnrealEdKeyBindings.generated.h already included, missing '#pragma once' in UnrealEdKeyBindings.h"
#endif
#define UNREALED_UnrealEdKeyBindings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_14_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FEditorKeyBinding(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUUnrealEdKeyBindings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UUnrealEdKeyBindings(); \
	public: \
	DECLARE_CLASS(UUnrealEdKeyBindings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UUnrealEdKeyBindings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorKeyBindings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UUnrealEdKeyBindings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_INCLASS \
	private: \
	static void StaticRegisterNativesUUnrealEdKeyBindings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UUnrealEdKeyBindings(); \
	public: \
	DECLARE_CLASS(UUnrealEdKeyBindings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UUnrealEdKeyBindings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorKeyBindings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UUnrealEdKeyBindings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdKeyBindings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdKeyBindings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdKeyBindings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdKeyBindings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UUnrealEdKeyBindings(const UUnrealEdKeyBindings& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdKeyBindings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UUnrealEdKeyBindings(const UUnrealEdKeyBindings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdKeyBindings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdKeyBindings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdKeyBindings)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_38_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UnrealEdKeyBindings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
