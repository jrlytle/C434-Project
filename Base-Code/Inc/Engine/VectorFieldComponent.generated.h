// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorFieldComponent_generated_h
#error "VectorFieldComponent.generated.h already included, missing '#pragma once' in VectorFieldComponent.h"
#endif
#define ENGINE_VectorFieldComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		this->SetIntensity(Z_Param_NewIntensity); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		this->SetIntensity(Z_Param_NewIntensity); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUVectorFieldComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UVectorFieldComponent(); \
	public: \
	DECLARE_CLASS(UVectorFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVectorFieldComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUVectorFieldComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UVectorFieldComponent(); \
	public: \
	DECLARE_CLASS(UVectorFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVectorFieldComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UVectorFieldComponent(const UVectorFieldComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UVectorFieldComponent(const UVectorFieldComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorFieldComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS