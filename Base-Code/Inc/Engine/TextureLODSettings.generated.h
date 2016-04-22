// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureLODSettings_generated_h
#error "TextureLODSettings.generated.h already included, missing '#pragma once' in TextureLODSettings.h"
#endif
#define ENGINE_TextureLODSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_13_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTextureLODSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTextureLODSettings(); \
	public: \
	DECLARE_CLASS(UTextureLODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UTextureLODSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UTextureLODSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_INCLASS \
	private: \
	static void StaticRegisterNativesUTextureLODSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTextureLODSettings(); \
	public: \
	DECLARE_CLASS(UTextureLODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UTextureLODSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UTextureLODSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureLODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLODSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTextureLODSettings(const UTextureLODSettings& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTextureLODSettings(const UTextureLODSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureLODSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLODSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLODSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_102_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_105_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureLODSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS