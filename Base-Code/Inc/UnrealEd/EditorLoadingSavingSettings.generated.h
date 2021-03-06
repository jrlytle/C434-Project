// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorLoadingSavingSettings_generated_h
#error "EditorLoadingSavingSettings.generated.h already included, missing '#pragma once' in EditorLoadingSavingSettings.h"
#endif
#define UNREALED_EditorLoadingSavingSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_40_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_24_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportWildcard(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEditorLoadingSavingSettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UEditorLoadingSavingSettings(); \
	public: \
	DECLARE_CLASS(UEditorLoadingSavingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UEditorLoadingSavingSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UEditorLoadingSavingSettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_INCLASS \
	private: \
	static void StaticRegisterNativesUEditorLoadingSavingSettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UEditorLoadingSavingSettings(); \
	public: \
	DECLARE_CLASS(UEditorLoadingSavingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UEditorLoadingSavingSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UEditorLoadingSavingSettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingSavingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingSavingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingSavingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingSavingSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditorLoadingSavingSettings(const UEditorLoadingSavingSettings& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingSavingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditorLoadingSavingSettings(const UEditorLoadingSavingSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingSavingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingSavingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingSavingSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_69_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorLoadingSavingSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h


#define FOREACH_ENUM_ELOADLEVELATSTARTUP(op) \
	op(ELoadLevelAtStartup::None) \
	op(ELoadLevelAtStartup::ProjectDefault) \
	op(ELoadLevelAtStartup::LastOpened) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
