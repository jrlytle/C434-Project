// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionRotator_generated_h
#error "MaterialExpressionRotator.generated.h already included, missing '#pragma once' in MaterialExpressionRotator.h"
#endif
#define ENGINE_MaterialExpressionRotator_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionRotator(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionRotator(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionRotator, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionRotator) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionRotator*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionRotator(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionRotator(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionRotator, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionRotator) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionRotator*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionRotator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRotator); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionRotator(const UMaterialExpressionRotator& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionRotator(const UMaterialExpressionRotator& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionRotator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRotator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRotator)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_8_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionRotator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
