// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeModulator_generated_h
#error "SoundNodeModulator.generated.h already included, missing '#pragma once' in SoundNodeModulator.h"
#endif
#define ENGINE_SoundNodeModulator_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSoundNodeModulator(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeModulator(); \
	public: \
	DECLARE_CLASS(USoundNodeModulator, USoundNode, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeModulator) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USoundNodeModulator*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUSoundNodeModulator(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeModulator(); \
	public: \
	DECLARE_CLASS(USoundNodeModulator, USoundNode, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeModulator) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USoundNodeModulator*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeModulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeModulator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulator); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USoundNodeModulator(const USoundNodeModulator& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeModulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USoundNodeModulator(const USoundNodeModulator& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeModulator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulator)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeModulator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS