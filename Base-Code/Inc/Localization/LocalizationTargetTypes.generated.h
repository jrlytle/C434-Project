// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCALIZATION_LocalizationTargetTypes_generated_h
#error "LocalizationTargetTypes.generated.h already included, missing '#pragma once' in LocalizationTargetTypes.h"
#endif
#define LOCALIZATION_LocalizationTargetTypes_generated_h

#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_260_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_217_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_183_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_160_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_149_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_136_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_99_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_66_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_55_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_44_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_33_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_22_GENERATED_BODY \
	friend LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory(); \
	LOCALIZATION_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_RPC_WRAPPERS
#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULocalizationTarget(); \
	friend LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTarget(); \
	public: \
	DECLARE_CLASS(ULocalizationTarget, UObject, COMPILED_IN_FLAGS(0), 0, Localization, NO_API) \
	DECLARE_SERIALIZER(ULocalizationTarget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ULocalizationTargetSet) \
	virtual UObject* _getUObject() const { return const_cast<ULocalizationTarget*>(this); }


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_INCLASS \
	private: \
	static void StaticRegisterNativesULocalizationTarget(); \
	friend LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTarget(); \
	public: \
	DECLARE_CLASS(ULocalizationTarget, UObject, COMPILED_IN_FLAGS(0), 0, Localization, NO_API) \
	DECLARE_SERIALIZER(ULocalizationTarget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ULocalizationTargetSet) \
	virtual UObject* _getUObject() const { return const_cast<ULocalizationTarget*>(this); }


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizationTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationTarget); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULocalizationTarget(const ULocalizationTarget& InCopy); \
public:


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizationTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULocalizationTarget(const ULocalizationTarget& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationTarget)


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_313_PROLOG
#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_RPC_WRAPPERS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_INCLASS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_316_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_RPC_WRAPPERS
#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULocalizationTargetSet(); \
	friend LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTargetSet(); \
	public: \
	DECLARE_CLASS(ULocalizationTargetSet, UObject, COMPILED_IN_FLAGS(0), 0, Localization, NO_API) \
	DECLARE_SERIALIZER(ULocalizationTargetSet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ULocalizationSettings) \
	virtual UObject* _getUObject() const { return const_cast<ULocalizationTargetSet*>(this); }


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_INCLASS \
	private: \
	static void StaticRegisterNativesULocalizationTargetSet(); \
	friend LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTargetSet(); \
	public: \
	DECLARE_CLASS(ULocalizationTargetSet, UObject, COMPILED_IN_FLAGS(0), 0, Localization, NO_API) \
	DECLARE_SERIALIZER(ULocalizationTargetSet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ULocalizationSettings) \
	virtual UObject* _getUObject() const { return const_cast<ULocalizationTargetSet*>(this); }


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizationTargetSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationTargetSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationTargetSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationTargetSet); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULocalizationTargetSet(const ULocalizationTargetSet& InCopy); \
public:


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizationTargetSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULocalizationTargetSet(const ULocalizationTargetSet& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationTargetSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationTargetSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationTargetSet)


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_334_PROLOG
#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_RPC_WRAPPERS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_INCLASS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h_337_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Localization_Public_LocalizationTargetTypes_h


#define FOREACH_ENUM_ELOCALIZATIONTARGETLOADINGPOLICY(op) \
	op(ELocalizationTargetLoadingPolicy::Never) \
	op(ELocalizationTargetLoadingPolicy::Always) \
	op(ELocalizationTargetLoadingPolicy::Editor) \
	op(ELocalizationTargetLoadingPolicy::Game) \
	op(ELocalizationTargetLoadingPolicy::PropertyNames) \
	op(ELocalizationTargetLoadingPolicy::ToolTips) 
#define FOREACH_ENUM_ELOCALIZATIONTARGETCONFLICTSTATUS(op) \
	op(ELocalizationTargetConflictStatus::Unknown) \
	op(ELocalizationTargetConflictStatus::ConflictsPresent) \
	op(ELocalizationTargetConflictStatus::Clear) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
