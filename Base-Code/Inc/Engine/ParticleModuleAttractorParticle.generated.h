// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleAttractorParticle_generated_h
#error "ParticleModuleAttractorParticle.generated.h already included, missing '#pragma once' in ParticleModuleAttractorParticle.h"
#endif
#define ENGINE_ParticleModuleAttractorParticle_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleAttractorParticle(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleAttractorParticle(); \
	public: \
	DECLARE_CLASS(UParticleModuleAttractorParticle, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAttractorParticle) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleAttractorParticle*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleAttractorParticle(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleAttractorParticle(); \
	public: \
	DECLARE_CLASS(UParticleModuleAttractorParticle, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAttractorParticle) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleAttractorParticle*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorParticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorParticle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorParticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorParticle); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleAttractorParticle(const UParticleModuleAttractorParticle& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorParticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleAttractorParticle(const UParticleModuleAttractorParticle& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorParticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorParticle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorParticle)


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleAttractorParticle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h


#define FOREACH_ENUM_EATTRACTORPARTICLESELECTIONMETHOD(op) \
	op(EAPSM_Random) \
	op(EAPSM_Sequential) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
