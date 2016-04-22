// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParticleSize_generated_h
#error "MaterialExpressionParticleSize.generated.h already included, missing '#pragma once' in MaterialExpressionParticleSize.h"
#endif
#define ENGINE_MaterialExpressionParticleSize_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionParticleSize(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionParticleSize(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionParticleSize, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleSize) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionParticleSize*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionParticleSize(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionParticleSize(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionParticleSize, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleSize) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionParticleSize*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleSize) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleSize); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleSize); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionParticleSize(const UMaterialExpressionParticleSize& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionParticleSize(const UMaterialExpressionParticleSize& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleSize); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleSize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleSize)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionParticleSize."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS