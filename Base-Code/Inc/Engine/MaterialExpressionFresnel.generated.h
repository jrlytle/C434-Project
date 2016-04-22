// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFresnel_generated_h
#error "MaterialExpressionFresnel.generated.h already included, missing '#pragma once' in MaterialExpressionFresnel.h"
#endif
#define ENGINE_MaterialExpressionFresnel_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionFresnel(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionFresnel(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionFresnel, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFresnel) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionFresnel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionFresnel(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionFresnel(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionFresnel, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFresnel) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionFresnel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionFresnel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFresnel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionFresnel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFresnel); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionFresnel(const UMaterialExpressionFresnel& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionFresnel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialExpressionFresnel(const UMaterialExpressionFresnel& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionFresnel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFresnel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFresnel)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionFresnel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
