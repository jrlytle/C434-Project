// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCollisionBase_generated_h
#error "ParticleModuleCollisionBase.generated.h already included, missing '#pragma once' in ParticleModuleCollisionBase.h"
#endif
#define ENGINE_ParticleModuleCollisionBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleCollisionBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleCollisionBase(); \
	public: \
	DECLARE_CLASS(UParticleModuleCollisionBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleCollisionBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleCollisionBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleCollisionBase(); \
	public: \
	DECLARE_CLASS(UParticleModuleCollisionBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleCollisionBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCollisionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UParticleModuleCollisionBase(const UParticleModuleCollisionBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UParticleModuleCollisionBase(const UParticleModuleCollisionBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCollisionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleCollisionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h


#define FOREACH_ENUM_EPARTICLECOLLISIONCOMPLETE(op) \
	op(EPCC_Kill) \
	op(EPCC_Freeze) \
	op(EPCC_HaltCollisions) \
	op(EPCC_FreezeTranslation) \
	op(EPCC_FreezeRotation) \
	op(EPCC_FreezeMovement) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
