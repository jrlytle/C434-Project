// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsSerializer_generated_h
#error "PhysicsSerializer.generated.h already included, missing '#pragma once' in PhysicsSerializer.h"
#endif
#define ENGINE_PhysicsSerializer_generated_h

#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPhysicsSerializer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPhysicsSerializer(); \
	public: \
	DECLARE_CLASS(UPhysicsSerializer, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsSerializer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UPhysicsSerializer*>(this); }


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesUPhysicsSerializer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPhysicsSerializer(); \
	public: \
	DECLARE_CLASS(UPhysicsSerializer, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsSerializer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UPhysicsSerializer*>(this); }


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSerializer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSerializer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSerializer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSerializer); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UPhysicsSerializer(const UPhysicsSerializer& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSerializer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UPhysicsSerializer(const UPhysicsSerializer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSerializer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSerializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSerializer)


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsSerializer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
