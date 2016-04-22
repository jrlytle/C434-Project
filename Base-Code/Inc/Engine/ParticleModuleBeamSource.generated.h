// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleBeamSource_generated_h
#error "ParticleModuleBeamSource.generated.h already included, missing '#pragma once' in ParticleModuleBeamSource.h"
#endif
#define ENGINE_ParticleModuleBeamSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleBeamSource(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleBeamSource(); \
	public: \
	DECLARE_CLASS(UParticleModuleBeamSource, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamSource) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleBeamSource*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleBeamSource(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleBeamSource(); \
	public: \
	DECLARE_CLASS(UParticleModuleBeamSource, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamSource) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleBeamSource*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleBeamSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleBeamSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamSource); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleBeamSource(const UParticleModuleBeamSource& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleBeamSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleBeamSource(const UParticleModuleBeamSource& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleBeamSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamSource)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleBeamSource."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
