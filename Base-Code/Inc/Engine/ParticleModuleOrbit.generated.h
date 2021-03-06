// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleOrbit_generated_h
#error "ParticleModuleOrbit.generated.h already included, missing '#pragma once' in ParticleModuleOrbit.h"
#endif
#define ENGINE_ParticleModuleOrbit_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_26_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleOrbit(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleOrbit(); \
	public: \
	DECLARE_CLASS(UParticleModuleOrbit, UParticleModuleOrbitBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleOrbit) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleOrbit*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleOrbit(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleOrbit(); \
	public: \
	DECLARE_CLASS(UParticleModuleOrbit, UParticleModuleOrbitBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleOrbit) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleOrbit*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrbit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrbit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrbit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrbit); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleOrbit(const UParticleModuleOrbit& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrbit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UParticleModuleOrbit(const UParticleModuleOrbit& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrbit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrbit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrbit)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_57_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_60_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleOrbit."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h


#define FOREACH_ENUM_EORBITCHAINMODE(op) \
	op(EOChainMode_Add) \
	op(EOChainMode_Scale) \
	op(EOChainMode_Link) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
