// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleSystemReplay_generated_h
#error "ParticleSystemReplay.generated.h already included, missing '#pragma once' in ParticleSystemReplay.h"
#endif
#define ENGINE_ParticleSystemReplay_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_49_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_10_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleSystemReplay(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleSystemReplay(); \
	public: \
	DECLARE_CLASS(UParticleSystemReplay, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UParticleSystemReplay) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UParticleSystemReplay*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleSystemReplay(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleSystemReplay(); \
	public: \
	DECLARE_CLASS(UParticleSystemReplay, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UParticleSystemReplay) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UParticleSystemReplay*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemReplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemReplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemReplay); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UParticleSystemReplay(const UParticleSystemReplay& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UParticleSystemReplay(const UParticleSystemReplay& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemReplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemReplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemReplay)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_61_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_64_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleSystemReplay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
