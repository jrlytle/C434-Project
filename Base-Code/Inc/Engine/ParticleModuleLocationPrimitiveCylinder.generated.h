// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationPrimitiveCylinder_generated_h
#error "ParticleModuleLocationPrimitiveCylinder.generated.h already included, missing '#pragma once' in ParticleModuleLocationPrimitiveCylinder.h"
#endif
#define ENGINE_ParticleModuleLocationPrimitiveCylinder_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder(); \
	public: \
	DECLARE_CLASS(UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveCylinder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleLocationPrimitiveCylinder*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder(); \
	public: \
	DECLARE_CLASS(UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveCylinder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleLocationPrimitiveCylinder*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationPrimitiveCylinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveCylinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationPrimitiveCylinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveCylinder); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleLocationPrimitiveCylinder(const UParticleModuleLocationPrimitiveCylinder& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationPrimitiveCylinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleLocationPrimitiveCylinder(const UParticleModuleLocationPrimitiveCylinder& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationPrimitiveCylinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveCylinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveCylinder)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationPrimitiveCylinder."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h


#define FOREACH_ENUM_CYLINDERHEIGHTAXIS(op) \
	op(PMLPC_HEIGHTAXIS_X) \
	op(PMLPC_HEIGHTAXIS_Y) \
	op(PMLPC_HEIGHTAXIS_Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS