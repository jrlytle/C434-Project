// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCollisionGPU_generated_h
#error "ParticleModuleCollisionGPU.generated.h already included, missing '#pragma once' in ParticleModuleCollisionGPU.h"
#endif
#define ENGINE_ParticleModuleCollisionGPU_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleCollisionGPU(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleCollisionGPU(); \
	public: \
	DECLARE_CLASS(UParticleModuleCollisionGPU, UParticleModuleCollisionBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionGPU) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleCollisionGPU*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleCollisionGPU(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleCollisionGPU(); \
	public: \
	DECLARE_CLASS(UParticleModuleCollisionGPU, UParticleModuleCollisionBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionGPU) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleCollisionGPU*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleCollisionGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionGPU) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleCollisionGPU); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionGPU); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleCollisionGPU(const UParticleModuleCollisionGPU& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleCollisionGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleCollisionGPU(const UParticleModuleCollisionGPU& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleCollisionGPU); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionGPU); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionGPU)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleCollisionGPU."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h


#define FOREACH_ENUM_EPARTICLECOLLISIONRESPONSE(op) \
	op(EParticleCollisionResponse::Bounce) \
	op(EParticleCollisionResponse::Stop) \
	op(EParticleCollisionResponse::Kill) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
