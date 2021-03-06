// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionStaticSwitchParameter_generated_h
#error "MaterialExpressionStaticSwitchParameter.generated.h already included, missing '#pragma once' in MaterialExpressionStaticSwitchParameter.h"
#endif
#define ENGINE_MaterialExpressionStaticSwitchParameter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionStaticSwitchParameter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionStaticSwitchParameter, UMaterialExpressionStaticBoolParameter, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticSwitchParameter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionStaticSwitchParameter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialExpressionStaticSwitchParameter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter(); \
	public: \
	DECLARE_CLASS(UMaterialExpressionStaticSwitchParameter, UMaterialExpressionStaticBoolParameter, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticSwitchParameter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialExpressionStaticSwitchParameter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticSwitchParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticSwitchParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticSwitchParameter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticSwitchParameter); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UMaterialExpressionStaticSwitchParameter(const UMaterialExpressionStaticSwitchParameter& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticSwitchParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UMaterialExpressionStaticSwitchParameter(const UMaterialExpressionStaticSwitchParameter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticSwitchParameter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticSwitchParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticSwitchParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_8_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionStaticSwitchParameter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticSwitchParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
