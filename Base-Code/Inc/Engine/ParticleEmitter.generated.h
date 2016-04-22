// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleEmitter_generated_h
#error "ParticleEmitter.generated.h already included, missing '#pragma once' in ParticleEmitter.h"
#endif
#define ENGINE_ParticleEmitter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_58_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleEmitter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleEmitter(); \
	public: \
	DECLARE_CLASS(UParticleEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleEmitter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UParticleEmitter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleEmitter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleEmitter(); \
	public: \
	DECLARE_CLASS(UParticleEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleEmitter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UParticleEmitter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleEmitter); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleEmitter(const UParticleEmitter& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleEmitter(const UParticleEmitter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleEmitter)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_83_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_86_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h


#define FOREACH_ENUM_EEMITTERRENDERMODE(op) \
	op(ERM_Normal) \
	op(ERM_Point) \
	op(ERM_Cross) \
	op(ERM_LightsOnly) \
	op(ERM_None) 
#define FOREACH_ENUM_EPARTICLESUBUVINTERPMETHOD(op) \
	op(PSUVIM_None) \
	op(PSUVIM_Linear) \
	op(PSUVIM_Linear_Blend) \
	op(PSUVIM_Random) \
	op(PSUVIM_Random_Blend) 
#define FOREACH_ENUM_EPARTICLEBURSTMETHOD(op) \
	op(EPBM_Instant) \
	op(EPBM_Interpolated) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS