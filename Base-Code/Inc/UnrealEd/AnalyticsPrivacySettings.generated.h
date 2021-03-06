// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AnalyticsPrivacySettings_generated_h
#error "AnalyticsPrivacySettings.generated.h already included, missing '#pragma once' in AnalyticsPrivacySettings.h"
#endif
#define UNREALED_AnalyticsPrivacySettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnalyticsPrivacySettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UAnalyticsPrivacySettings(); \
	public: \
	DECLARE_CLASS(UAnalyticsPrivacySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UAnalyticsPrivacySettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UAnalyticsPrivacySettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUAnalyticsPrivacySettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UAnalyticsPrivacySettings(); \
	public: \
	DECLARE_CLASS(UAnalyticsPrivacySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UAnalyticsPrivacySettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UAnalyticsPrivacySettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnalyticsPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsPrivacySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnalyticsPrivacySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsPrivacySettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UAnalyticsPrivacySettings(const UAnalyticsPrivacySettings& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnalyticsPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UAnalyticsPrivacySettings(const UAnalyticsPrivacySettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnalyticsPrivacySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsPrivacySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsPrivacySettings)


#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_14_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnalyticsPrivacySettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
