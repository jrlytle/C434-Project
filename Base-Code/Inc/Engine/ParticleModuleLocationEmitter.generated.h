// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationEmitter_generated_h
#error "ParticleModuleLocationEmitter.generated.h already included, missing '#pragma once' in ParticleModuleLocationEmitter.h"
#endif
#define ENGINE_ParticleModuleLocationEmitter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleLocationEmitter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleLocationEmitter(); \
	public: \
	DECLARE_CLASS(UParticleModuleLocationEmitter, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationEmitter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleLocationEmitter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleLocationEmitter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleLocationEmitter(); \
	public: \
	DECLARE_CLASS(UParticleModuleLocationEmitter, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationEmitter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleLocationEmitter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationEmitter); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleLocationEmitter(const UParticleModuleLocationEmitter& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleLocationEmitter(const UParticleModuleLocationEmitter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationEmitter)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h


#define FOREACH_ENUM_ELOCATIONEMITTERSELECTIONMETHOD(op) \
	op(ELESM_Random) \
	op(ELESM_Sequential) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
