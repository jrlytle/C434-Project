// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTROTUTORIALS_TutorialStateSettings_generated_h
#error "TutorialStateSettings.generated.h already included, missing '#pragma once' in TutorialStateSettings.h"
#endif
#define INTROTUTORIALS_TutorialStateSettings_generated_h

#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_12_GENERATED_BODY \
	friend INTROTUTORIALS_API class UScriptStruct* Z_Construct_UScriptStruct_FTutorialProgress(); \
	INTROTUTORIALS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_RPC_WRAPPERS
#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTutorialStateSettings(); \
	friend INTROTUTORIALS_API class UClass* Z_Construct_UClass_UTutorialStateSettings(); \
	public: \
	DECLARE_CLASS(UTutorialStateSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, IntroTutorials, NO_API) \
	DECLARE_SERIALIZER(UTutorialStateSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UTutorialStateSettings*>(this); }


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_INCLASS \
	private: \
	static void StaticRegisterNativesUTutorialStateSettings(); \
	friend INTROTUTORIALS_API class UClass* Z_Construct_UClass_UTutorialStateSettings(); \
	public: \
	DECLARE_CLASS(UTutorialStateSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, IntroTutorials, NO_API) \
	DECLARE_SERIALIZER(UTutorialStateSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UTutorialStateSettings*>(this); }


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialStateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialStateSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialStateSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialStateSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTutorialStateSettings(const UTutorialStateSettings& InCopy); \
public:


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialStateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTutorialStateSettings(const UTutorialStateSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialStateSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialStateSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialStateSettings)


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_33_PROLOG
#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_RPC_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_INCLASS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TutorialStateSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
