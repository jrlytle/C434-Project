// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeModulatorContinuous_generated_h
#error "SoundNodeModulatorContinuous.generated.h already included, missing '#pragma once' in SoundNodeModulatorContinuous.h"
#endif
#define ENGINE_SoundNodeModulatorContinuous_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_20_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSoundNodeModulatorContinuous(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeModulatorContinuous(); \
	public: \
	DECLARE_CLASS(USoundNodeModulatorContinuous, USoundNode, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(USoundNodeModulatorContinuous) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USoundNodeModulatorContinuous*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_INCLASS \
	private: \
	static void StaticRegisterNativesUSoundNodeModulatorContinuous(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeModulatorContinuous(); \
	public: \
	DECLARE_CLASS(USoundNodeModulatorContinuous, USoundNode, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(USoundNodeModulatorContinuous) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USoundNodeModulatorContinuous*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeModulatorContinuous(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulatorContinuous) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeModulatorContinuous); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulatorContinuous); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USoundNodeModulatorContinuous(const USoundNodeModulatorContinuous& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeModulatorContinuous(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USoundNodeModulatorContinuous(const USoundNodeModulatorContinuous& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeModulatorContinuous); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulatorContinuous); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulatorContinuous)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_66_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeModulatorContinuous."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h


#define FOREACH_ENUM_MODULATIONPARAMMODE(op) \
	op(MPM_Normal) \
	op(MPM_Abs) \
	op(MPM_Direct) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
