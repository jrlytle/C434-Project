// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDepthOfFieldFunction_generated_h
#error "MaterialExpressionDepthOfFieldFunction.generated.h already included, missing '#pragma once' in MaterialExpressionDepthOfFieldFunction.h"
#endif
#define ENGINE_MaterialExpressionDepthOfFieldFunction_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionDepthOfFieldFunction, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDepthOfFieldFunction) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionDepthOfFieldFunction*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionDepthOfFieldFunction, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDepthOfFieldFunction) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionDepthOfFieldFunction*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDepthOfFieldFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDepthOfFieldFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDepthOfFieldFunction); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const UMaterialExpressionDepthOfFieldFunction& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const UMaterialExpressionDepthOfFieldFunction& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDepthOfFieldFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDepthOfFieldFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDepthOfFieldFunction)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionDepthOfFieldFunction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h


#define FOREACH_ENUM_EDEPTHOFFIELDFUNCTIONVALUE(op) \
	op(TDOF_NearAndFarMask) \
	op(TDOF_NearMask) \
	op(TDOF_FarMask) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
