// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReverbEffect_generated_h
#error "ReverbEffect.generated.h already included, missing '#pragma once' in ReverbEffect.h"
#endif
#define ENGINE_ReverbEffect_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUReverbEffect(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UReverbEffect(); \
	public: \
	DECLARE_CLASS(UReverbEffect, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UReverbEffect) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UReverbEffect*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUReverbEffect(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UReverbEffect(); \
	public: \
	DECLARE_CLASS(UReverbEffect, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UReverbEffect) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UReverbEffect*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReverbEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReverbEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbEffect); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UReverbEffect(const UReverbEffect& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReverbEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UReverbEffect(const UReverbEffect& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReverbEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbEffect)


#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReverbEffect."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
