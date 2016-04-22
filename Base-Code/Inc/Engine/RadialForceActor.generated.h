// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RadialForceActor_generated_h
#error "RadialForceActor.generated.h already included, missing '#pragma once' in RadialForceActor.h"
#endif
#define ENGINE_RadialForceActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleForce) \
	{ \
		P_FINISH; \
		this->ToggleForce(); \
	} \
 \
	DECLARE_FUNCTION(execDisableForce) \
	{ \
		P_FINISH; \
		this->DisableForce(); \
	} \
 \
	DECLARE_FUNCTION(execEnableForce) \
	{ \
		P_FINISH; \
		this->EnableForce(); \
	} \
 \
	DECLARE_FUNCTION(execFireImpulse) \
	{ \
		P_FINISH; \
		this->FireImpulse(); \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleForce) \
	{ \
		P_FINISH; \
		this->ToggleForce(); \
	} \
 \
	DECLARE_FUNCTION(execDisableForce) \
	{ \
		P_FINISH; \
		this->DisableForce(); \
	} \
 \
	DECLARE_FUNCTION(execEnableForce) \
	{ \
		P_FINISH; \
		this->EnableForce(); \
	} \
 \
	DECLARE_FUNCTION(execFireImpulse) \
	{ \
		P_FINISH; \
		this->FireImpulse(); \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesARadialForceActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ARadialForceActor(); \
	public: \
	DECLARE_CLASS(ARadialForceActor, ARigidBodyBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ARadialForceActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ARadialForceActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesARadialForceActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ARadialForceActor(); \
	public: \
	DECLARE_CLASS(ARadialForceActor, ARigidBodyBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ARadialForceActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ARadialForceActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARadialForceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadialForceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARadialForceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadialForceActor); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ARadialForceActor(const ARadialForceActor& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARadialForceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ARadialForceActor(const ARadialForceActor& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARadialForceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadialForceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadialForceActor)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_8_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RadialForceActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS