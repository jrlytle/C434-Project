// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h
#error "MaterialExpressionLandscapeLayerCoords.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerCoords.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h

#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionLandscapeLayerCoords, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Landscape, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerCoords) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionLandscapeLayerCoords*>(this); }


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionLandscapeLayerCoords, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Landscape, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerCoords) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionLandscapeLayerCoords*>(this); }


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerCoords) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLandscapeLayerCoords); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerCoords); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(const UMaterialExpressionLandscapeLayerCoords& InCopy); \
public:


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(const UMaterialExpressionLandscapeLayerCoords& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLandscapeLayerCoords); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerCoords); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerCoords)


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_31_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionLandscapeLayerCoords."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h


#define FOREACH_ENUM_ELANDSCAPECUSTOMIZEDCOORDTYPE(op) \
	op(LCCT_None) \
	op(LCCT_CustomUV0) \
	op(LCCT_CustomUV1) \
	op(LCCT_CustomUV2) \
	op(LCCT_WeightMapUV) 
#define FOREACH_ENUM_ETERRAINCOORDMAPPINGTYPE(op) \
	op(TCMT_Auto) \
	op(TCMT_XY) \
	op(TCMT_XZ) \
	op(TCMT_YZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS