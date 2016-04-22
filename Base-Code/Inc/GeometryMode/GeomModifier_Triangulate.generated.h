// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYMODE_GeomModifier_Triangulate_generated_h
#error "GeomModifier_Triangulate.generated.h already included, missing '#pragma once' in GeomModifier_Triangulate.h"
#endif
#define GEOMETRYMODE_GeomModifier_Triangulate_generated_h

#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGeomModifier_Triangulate(); \
	friend GEOMETRYMODE_API class UClass* Z_Construct_UClass_UGeomModifier_Triangulate(); \
	public: \
	DECLARE_CLASS(UGeomModifier_Triangulate, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), 0, GeometryMode, NO_API) \
	DECLARE_SERIALIZER(UGeomModifier_Triangulate) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGeomModifier_Triangulate*>(this); }


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUGeomModifier_Triangulate(); \
	friend GEOMETRYMODE_API class UClass* Z_Construct_UClass_UGeomModifier_Triangulate(); \
	public: \
	DECLARE_CLASS(UGeomModifier_Triangulate, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), 0, GeometryMode, NO_API) \
	DECLARE_SERIALIZER(UGeomModifier_Triangulate) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGeomModifier_Triangulate*>(this); }


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Triangulate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Triangulate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Triangulate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Triangulate); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGeomModifier_Triangulate(const UGeomModifier_Triangulate& InCopy); \
public:


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Triangulate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGeomModifier_Triangulate(const UGeomModifier_Triangulate& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Triangulate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Triangulate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Triangulate)


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_11_PROLOG
#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_INCLASS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeomModifier_Triangulate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_GeometryMode_Classes_GeomModifier_Triangulate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
