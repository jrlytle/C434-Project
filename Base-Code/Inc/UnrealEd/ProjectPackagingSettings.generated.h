// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ProjectPackagingSettings_generated_h
#error "ProjectPackagingSettings.generated.h already included, missing '#pragma once' in ProjectPackagingSettings.h"
#endif
#define UNREALED_ProjectPackagingSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUProjectPackagingSettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UProjectPackagingSettings(); \
	public: \
	DECLARE_CLASS(UProjectPackagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UProjectPackagingSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UProjectPackagingSettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_INCLASS \
	private: \
	static void StaticRegisterNativesUProjectPackagingSettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UProjectPackagingSettings(); \
	public: \
	DECLARE_CLASS(UProjectPackagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UProjectPackagingSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UProjectPackagingSettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectPackagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectPackagingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectPackagingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectPackagingSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UProjectPackagingSettings(const UProjectPackagingSettings& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectPackagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UProjectPackagingSettings(const UProjectPackagingSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectPackagingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectPackagingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectPackagingSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_49_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProjectPackagingSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h


#define FOREACH_ENUM_EPROJECTPACKAGINGINTERNATIONALIZATIONPRESETS(op) \
	op(EProjectPackagingInternationalizationPresets::English) \
	op(EProjectPackagingInternationalizationPresets::EFIGS) \
	op(EProjectPackagingInternationalizationPresets::EFIGSCJK) \
	op(EProjectPackagingInternationalizationPresets::CJK) \
	op(EProjectPackagingInternationalizationPresets::All) 
#define FOREACH_ENUM_EPROJECTPACKAGINGBUILDCONFIGURATIONS(op) \
	op(PPBC_DebugGame) \
	op(PPBC_Development) \
	op(PPBC_Shipping) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS