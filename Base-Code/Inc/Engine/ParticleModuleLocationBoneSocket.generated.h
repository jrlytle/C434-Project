// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationBoneSocket_generated_h
#error "ParticleModuleLocationBoneSocket.generated.h already included, missing '#pragma once' in ParticleModuleLocationBoneSocket.h"
#endif
#define ENGINE_ParticleModuleLocationBoneSocket_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_27_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUParticleModuleLocationBoneSocket(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket(); \
	public: \
	DECLARE_CLASS(UParticleModuleLocationBoneSocket, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationBoneSocket) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleLocationBoneSocket*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_INCLASS \
	private: \
	static void StaticRegisterNativesUParticleModuleLocationBoneSocket(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket(); \
	public: \
	DECLARE_CLASS(UParticleModuleLocationBoneSocket, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationBoneSocket) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UParticleModuleLocationBoneSocket*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationBoneSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBoneSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationBoneSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBoneSocket); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UParticleModuleLocationBoneSocket(const UParticleModuleLocationBoneSocket& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationBoneSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UParticleModuleLocationBoneSocket(const UParticleModuleLocationBoneSocket& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationBoneSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBoneSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBoneSocket)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_45_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationBoneSocket."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h


#define FOREACH_ENUM_ELOCATIONBONESOCKETSELECTIONMETHOD(op) \
	op(BONESOCKETSEL_Sequential) \
	op(BONESOCKETSEL_Random) 
#define FOREACH_ENUM_ELOCATIONBONESOCKETSOURCE(op) \
	op(BONESOCKETSOURCE_Bones) \
	op(BONESOCKETSOURCE_Sockets) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS