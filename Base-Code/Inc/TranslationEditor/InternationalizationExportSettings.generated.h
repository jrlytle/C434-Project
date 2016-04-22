// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSLATIONEDITOR_InternationalizationExportSettings_generated_h
#error "InternationalizationExportSettings.generated.h already included, missing '#pragma once' in InternationalizationExportSettings.h"
#endif
#define TRANSLATIONEDITOR_InternationalizationExportSettings_generated_h

#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_RPC_WRAPPERS
#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInternationalizationExportSettings(); \
	friend TRANSLATIONEDITOR_API class UClass* Z_Construct_UClass_UInternationalizationExportSettings(); \
	public: \
	DECLARE_CLASS(UInternationalizationExportSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TranslationEditor, TRANSLATIONEDITOR_API) \
	DECLARE_SERIALIZER(UInternationalizationExportSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("InternationalizationExport");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UInternationalizationExportSettings*>(this); }


#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesUInternationalizationExportSettings(); \
	friend TRANSLATIONEDITOR_API class UClass* Z_Construct_UClass_UInternationalizationExportSettings(); \
	public: \
	DECLARE_CLASS(UInternationalizationExportSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TranslationEditor, TRANSLATIONEDITOR_API) \
	DECLARE_SERIALIZER(UInternationalizationExportSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("InternationalizationExport");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UInternationalizationExportSettings*>(this); }


#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRANSLATIONEDITOR_API UInternationalizationExportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternationalizationExportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRANSLATIONEDITOR_API, UInternationalizationExportSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternationalizationExportSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	TRANSLATIONEDITOR_API UInternationalizationExportSettings(const UInternationalizationExportSettings& InCopy); \
public:


#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRANSLATIONEDITOR_API UInternationalizationExportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	TRANSLATIONEDITOR_API UInternationalizationExportSettings(const UInternationalizationExportSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRANSLATIONEDITOR_API, UInternationalizationExportSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternationalizationExportSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternationalizationExportSettings)


#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_6_PROLOG
#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_RPC_WRAPPERS \
	Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_INCLASS \
	Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InternationalizationExportSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS