// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelScriptBlueprint_generated_h
#error "LevelScriptBlueprint.generated.h already included, missing '#pragma once' in LevelScriptBlueprint.h"
#endif
#define ENGINE_LevelScriptBlueprint_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULevelScriptBlueprint(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevelScriptBlueprint(); \
	public: \
	DECLARE_CLASS(ULevelScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ULevelScriptBlueprint) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelScriptBlueprint*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesULevelScriptBlueprint(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevelScriptBlueprint(); \
	public: \
	DECLARE_CLASS(ULevelScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ULevelScriptBlueprint) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelScriptBlueprint*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelScriptBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelScriptBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelScriptBlueprint); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ULevelScriptBlueprint(const ULevelScriptBlueprint& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ULevelScriptBlueprint(const ULevelScriptBlueprint& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelScriptBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelScriptBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelScriptBlueprint)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelScriptBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS