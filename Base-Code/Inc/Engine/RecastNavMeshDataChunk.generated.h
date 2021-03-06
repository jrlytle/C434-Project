// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RecastNavMeshDataChunk_generated_h
#error "RecastNavMeshDataChunk.generated.h already included, missing '#pragma once' in RecastNavMeshDataChunk.h"
#endif
#define ENGINE_RecastNavMeshDataChunk_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesURecastNavMeshDataChunk(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URecastNavMeshDataChunk(); \
	public: \
	DECLARE_CLASS(URecastNavMeshDataChunk, UNavigationDataChunk, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(URecastNavMeshDataChunk) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<URecastNavMeshDataChunk*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_INCLASS \
	private: \
	static void StaticRegisterNativesURecastNavMeshDataChunk(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URecastNavMeshDataChunk(); \
	public: \
	DECLARE_CLASS(URecastNavMeshDataChunk, UNavigationDataChunk, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(URecastNavMeshDataChunk) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<URecastNavMeshDataChunk*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URecastNavMeshDataChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecastNavMeshDataChunk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecastNavMeshDataChunk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecastNavMeshDataChunk); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API URecastNavMeshDataChunk(const URecastNavMeshDataChunk& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URecastNavMeshDataChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API URecastNavMeshDataChunk(const URecastNavMeshDataChunk& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecastNavMeshDataChunk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecastNavMeshDataChunk); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecastNavMeshDataChunk)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RecastNavMeshDataChunk."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_RecastNavMeshDataChunk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
