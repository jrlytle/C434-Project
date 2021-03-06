// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYMODE_GeomModifier_Clip_generated_h
#error "GeomModifier_Clip.generated.h already included, missing '#pragma once' in GeomModifier_Clip.h"
#endif
#define GEOMETRYMODE_GeomModifier_Clip_generated_h

#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGeomModifier_Clip(); \
	friend GEOMETRYMODE_API class UClass* Z_Construct_UClass_UGeomModifier_Clip(); \
	public: \
	DECLARE_CLASS(UGeomModifier_Clip, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), 0, GeometryMode, NO_API) \
	DECLARE_SERIALIZER(UGeomModifier_Clip) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGeomModifier_Clip*>(this); }


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUGeomModifier_Clip(); \
	friend GEOMETRYMODE_API class UClass* Z_Construct_UClass_UGeomModifier_Clip(); \
	public: \
	DECLARE_CLASS(UGeomModifier_Clip, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), 0, GeometryMode, NO_API) \
	DECLARE_SERIALIZER(UGeomModifier_Clip) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGeomModifier_Clip*>(this); }


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Clip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Clip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Clip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Clip); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGeomModifier_Clip(const UGeomModifier_Clip& InCopy); \
public:


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Clip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGeomModifier_Clip(const UGeomModifier_Clip& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Clip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Clip); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Clip)


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_11_PROLOG
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_INCLASS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeomModifier_Clip."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Clip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
