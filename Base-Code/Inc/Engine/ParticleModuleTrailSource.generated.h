// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTrailSource_generated_h
#error "ParticleModuleTrailSource.generated.h already included, missing '#pragma once' in ParticleModuleTrailSource.h"
#endif
#define ENGINE_ParticleModuleTrailSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleTrailSource(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleTrailSource(); \
	public: \
	DECLARE_CLASS(UParticleModuleTrailSource, UParticleModuleTrailBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTrailSource) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleTrailSource*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleTrailSource(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleTrailSource(); \
	public: \
	DECLARE_CLASS(UParticleModuleTrailSource, UParticleModuleTrailBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTrailSource) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleTrailSource*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTrailSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTrailSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTrailSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTrailSource); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleTrailSource(const UParticleModuleTrailSource& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTrailSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleTrailSource(const UParticleModuleTrailSource& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTrailSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTrailSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTrailSource)


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_32_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleTrailSource."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h


#define FOREACH_ENUM_ETRAIL2SOURCEMETHOD(op) \
	op(PET2SRCM_Default) \
	op(PET2SRCM_Particle) \
	op(PET2SRCM_Actor) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
