// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionMax_generated_h
#error "MaterialExpressionMax.generated.h already included, missing '#pragma once' in MaterialExpressionMax.h"
#endif
#define ENGINE_MaterialExpressionMax_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionMax(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionMax(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionMax, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMax) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionMax*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionMax(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionMax(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionMax, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMax) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionMax*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMax(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMax) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMax); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMax); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UMaterialExpressionMax(const UMaterialExpressionMax& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMax(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UMaterialExpressionMax(const UMaterialExpressionMax& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMax); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMax); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMax)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_8_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionMax."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMax_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
