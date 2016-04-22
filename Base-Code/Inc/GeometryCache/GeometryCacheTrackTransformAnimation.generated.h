// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeometryCacheMeshData;
#ifdef GEOMETRYCACHE_GeometryCacheTrackTransformAnimation_generated_h
#error "GeometryCacheTrackTransformAnimation.generated.h already included, missing '#pragma once' in GeometryCacheTrackTransformAnimation.h"
#endif
#define GEOMETRYCACHE_GeometryCacheTrackTransformAnimation_generated_h

#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_NewMeshData); \
		P_FINISH; \
		this->SetMesh(Z_Param_Out_NewMeshData); \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_NewMeshData); \
		P_FINISH; \
		this->SetMesh(Z_Param_Out_NewMeshData); \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGeometryCacheTrack_TransformAnimation(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation(); \
	public: \
	DECLARE_CLASS(UGeometryCacheTrack_TransformAnimation, UGeometryCacheTrack, COMPILED_IN_FLAGS(0), 0, GeometryCache, NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheTrack_TransformAnimation) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCacheTrack_TransformAnimation*>(this); }


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUGeometryCacheTrack_TransformAnimation(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation(); \
	public: \
	DECLARE_CLASS(UGeometryCacheTrack_TransformAnimation, UGeometryCacheTrack, COMPILED_IN_FLAGS(0), 0, GeometryCache, NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheTrack_TransformAnimation) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCacheTrack_TransformAnimation*>(this); }


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheTrack_TransformAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheTrack_TransformAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheTrack_TransformAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrack_TransformAnimation); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGeometryCacheTrack_TransformAnimation(const UGeometryCacheTrack_TransformAnimation& InCopy); \
public:


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheTrack_TransformAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGeometryCacheTrack_TransformAnimation(const UGeometryCacheTrack_TransformAnimation& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheTrack_TransformAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrack_TransformAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheTrack_TransformAnimation)


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_9_PROLOG
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_INCLASS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheTrack_TransformAnimation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
