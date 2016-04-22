// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsConstraintActor_generated_h
#error "PhysicsConstraintActor.generated.h already included, missing '#pragma once' in PhysicsConstraintActor.h"
#endif
#define ENGINE_PhysicsConstraintActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPhysicsConstraintActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APhysicsConstraintActor(); \
	public: \
	DECLARE_CLASS(APhysicsConstraintActor, ARigidBodyBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(APhysicsConstraintActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APhysicsConstraintActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesAPhysicsConstraintActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APhysicsConstraintActor(); \
	public: \
	DECLARE_CLASS(APhysicsConstraintActor, ARigidBodyBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(APhysicsConstraintActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APhysicsConstraintActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsConstraintActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APhysicsConstraintActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsConstraintActor); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API APhysicsConstraintActor(const APhysicsConstraintActor& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API APhysicsConstraintActor(const APhysicsConstraintActor& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APhysicsConstraintActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsConstraintActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsConstraintActor)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsConstraintActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS