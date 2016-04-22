// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerSettings_generated_h
#error "SequencerSettings.generated.h already included, missing '#pragma once' in SequencerSettings.h"
#endif
#define SEQUENCER_SequencerSettings_generated_h

#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSequencerSettingsContainer(); \
	friend SEQUENCER_API class UClass* Z_Construct_UClass_USequencerSettingsContainer(); \
	public: \
	DECLARE_CLASS(USequencerSettingsContainer, UObject, COMPILED_IN_FLAGS(0), 0, Sequencer, NO_API) \
	DECLARE_SERIALIZER(USequencerSettingsContainer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<USequencerSettingsContainer*>(this); }


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUSequencerSettingsContainer(); \
	friend SEQUENCER_API class UClass* Z_Construct_UClass_USequencerSettingsContainer(); \
	public: \
	DECLARE_CLASS(USequencerSettingsContainer, UObject, COMPILED_IN_FLAGS(0), 0, Sequencer, NO_API) \
	DECLARE_SERIALIZER(USequencerSettingsContainer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<USequencerSettingsContainer*>(this); }


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettingsContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettingsContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettingsContainer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USequencerSettingsContainer(const USequencerSettingsContainer& InCopy); \
public:


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USequencerSettingsContainer(const USequencerSettingsContainer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettingsContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettingsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettingsContainer)


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_8_PROLOG
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_INCLASS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSequencerSettings(); \
	friend SEQUENCER_API class UClass* Z_Construct_UClass_USequencerSettings(); \
	public: \
	DECLARE_CLASS(USequencerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Sequencer, NO_API) \
	DECLARE_SERIALIZER(USequencerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<USequencerSettings*>(this); }


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_INCLASS \
	private: \
	static void StaticRegisterNativesUSequencerSettings(); \
	friend SEQUENCER_API class UClass* Z_Construct_UClass_USequencerSettings(); \
	public: \
	DECLARE_CLASS(USequencerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Sequencer, NO_API) \
	DECLARE_SERIALIZER(USequencerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<USequencerSettings*>(this); }


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USequencerSettings(const USequencerSettings& InCopy); \
public:


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USequencerSettings(const USequencerSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettings)


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_39_PROLOG
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_INCLASS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SequencerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_RPC_WRAPPERS
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULevelEditorSequencerSettings(); \
	friend SEQUENCER_API class UClass* Z_Construct_UClass_ULevelEditorSequencerSettings(); \
	public: \
	DECLARE_CLASS(ULevelEditorSequencerSettings, USequencerSettings, COMPILED_IN_FLAGS(0), 0, Sequencer, NO_API) \
	DECLARE_SERIALIZER(ULevelEditorSequencerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelEditorSequencerSettings*>(this); }


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_INCLASS \
	private: \
	static void StaticRegisterNativesULevelEditorSequencerSettings(); \
	friend SEQUENCER_API class UClass* Z_Construct_UClass_ULevelEditorSequencerSettings(); \
	public: \
	DECLARE_CLASS(ULevelEditorSequencerSettings, USequencerSettings, COMPILED_IN_FLAGS(0), 0, Sequencer, NO_API) \
	DECLARE_SERIALIZER(ULevelEditorSequencerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelEditorSequencerSettings*>(this); }


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorSequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorSequencerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorSequencerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorSequencerSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelEditorSequencerSettings(const ULevelEditorSequencerSettings& InCopy); \
public:


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorSequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelEditorSequencerSettings(const ULevelEditorSequencerSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorSequencerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorSequencerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorSequencerSettings)


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_226_PROLOG
#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_RPC_WRAPPERS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_INCLASS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Sequencer_Private_SequencerSettings_h_230_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelEditorSequencerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Sequencer_Private_SequencerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS