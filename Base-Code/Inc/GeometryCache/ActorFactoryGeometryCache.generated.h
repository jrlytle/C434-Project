// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCACHE_ActorFactoryGeometryCache_generated_h
#error "ActorFactoryGeometryCache.generated.h already included, missing '#pragma once' in ActorFactoryGeometryCache.h"
#endif
#define GEOMETRYCACHE_ActorFactoryGeometryCache_generated_h

#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUActorFactoryGeometryCache(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UActorFactoryGeometryCache(); \
	public: \
	DECLARE_CLASS(UActorFactoryGeometryCache, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, GeometryCache, GEOMETRYCACHE_API) \
	DECLARE_SERIALIZER(UActorFactoryGeometryCache) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactoryGeometryCache*>(this); }


#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUActorFactoryGeometryCache(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UActorFactoryGeometryCache(); \
	public: \
	DECLARE_CLASS(UActorFactoryGeometryCache, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, GeometryCache, GEOMETRYCACHE_API) \
	DECLARE_SERIALIZER(UActorFactoryGeometryCache) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactoryGeometryCache*>(this); }


#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UActorFactoryGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryGeometryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UActorFactoryGeometryCache); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryGeometryCache); \
private: \
	/** Private copy-constructor, should never be used */ \
	GEOMETRYCACHE_API UActorFactoryGeometryCache(const UActorFactoryGeometryCache& InCopy); \
public:


#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHE_API UActorFactoryGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GEOMETRYCACHE_API UActorFactoryGeometryCache(const UActorFactoryGeometryCache& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHE_API, UActorFactoryGeometryCache); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryGeometryCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryGeometryCache)


#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_10_PROLOG
#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_INCLASS \
	Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ActorFactoryGeometryCache."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GeometryCache_Private_ActorFactoryGeometryCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
