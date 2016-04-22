// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h
#error "BlueprintEditorSettings.generated.h already included, missing '#pragma once' in BlueprintEditorSettings.h"
#endif
#define BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h

#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend BLUEPRINTGRAPH_API class UClass* Z_Construct_UClass_UBlueprintEditorSettings(); \
	public: \
	DECLARE_CLASS(UBlueprintEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, BlueprintGraph, NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UBlueprintEditorSettings*>(this); }


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend BLUEPRINTGRAPH_API class UClass* Z_Construct_UClass_UBlueprintEditorSettings(); \
	public: \
	DECLARE_CLASS(UBlueprintEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, BlueprintGraph, NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UBlueprintEditorSettings*>(this); }


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBlueprintEditorSettings(const UBlueprintEditorSettings& InCopy); \
public:


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBlueprintEditorSettings(const UBlueprintEditorSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings)


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_16_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h


#define FOREACH_ENUM_ESAVEONCOMPILE(op) \
	op(SoC_Never) \
	op(SoC_SuccessOnly) \
	op(SoC_Always) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
