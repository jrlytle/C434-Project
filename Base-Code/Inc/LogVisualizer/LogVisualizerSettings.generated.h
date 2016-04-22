// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGVISUALIZER_LogVisualizerSettings_generated_h
#error "LogVisualizerSettings.generated.h already included, missing '#pragma once' in LogVisualizerSettings.h"
#endif
#define LOGVISUALIZER_LogVisualizerSettings_generated_h

#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_29_GENERATED_BODY \
	friend LOGVISUALIZER_API class UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFilters(); \
	LOGVISUALIZER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_14_GENERATED_BODY \
	friend LOGVISUALIZER_API class UScriptStruct* Z_Construct_UScriptStruct_FCategoryFilter(); \
	LOGVISUALIZER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_RPC_WRAPPERS
#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULogVisualizerSettings(); \
	friend LOGVISUALIZER_API class UClass* Z_Construct_UClass_ULogVisualizerSettings(); \
	public: \
	DECLARE_CLASS(ULogVisualizerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, LogVisualizer, NO_API) \
	DECLARE_SERIALIZER(ULogVisualizerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<ULogVisualizerSettings*>(this); }


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_INCLASS \
	private: \
	static void StaticRegisterNativesULogVisualizerSettings(); \
	friend LOGVISUALIZER_API class UClass* Z_Construct_UClass_ULogVisualizerSettings(); \
	public: \
	DECLARE_CLASS(ULogVisualizerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, LogVisualizer, NO_API) \
	DECLARE_SERIALIZER(ULogVisualizerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<ULogVisualizerSettings*>(this); }


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogVisualizerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogVisualizerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogVisualizerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogVisualizerSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULogVisualizerSettings(const ULogVisualizerSettings& InCopy); \
public:


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogVisualizerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULogVisualizerSettings(const ULogVisualizerSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogVisualizerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogVisualizerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogVisualizerSettings)


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_46_PROLOG
#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_RPC_WRAPPERS \
	Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_INCLASS \
	Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LogVisualizerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
