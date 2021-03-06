// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SphereComponent_generated_h
#error "SphereComponent.generated.h already included, missing '#pragma once' in SphereComponent.h"
#endif
#define ENGINE_SphereComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShapeScale) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetShapeScale(); \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledSphereRadius) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetUnscaledSphereRadius(); \
	} \
 \
	DECLARE_FUNCTION(execGetScaledSphereRadius) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetScaledSphereRadius(); \
	} \
 \
	DECLARE_FUNCTION(execSetSphereRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSphereRadius); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		this->SetSphereRadius(Z_Param_InSphereRadius,Z_Param_bUpdateOverlaps); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShapeScale) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetShapeScale(); \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledSphereRadius) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetUnscaledSphereRadius(); \
	} \
 \
	DECLARE_FUNCTION(execGetScaledSphereRadius) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetScaledSphereRadius(); \
	} \
 \
	DECLARE_FUNCTION(execSetSphereRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSphereRadius); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		this->SetSphereRadius(Z_Param_InSphereRadius,Z_Param_bUpdateOverlaps); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSphereComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USphereComponent(); \
	public: \
	DECLARE_CLASS(USphereComponent, UShapeComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(USphereComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USphereComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUSphereComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USphereComponent(); \
	public: \
	DECLARE_CLASS(USphereComponent, UShapeComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(USphereComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USphereComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USphereComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USphereComponent(const USphereComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USphereComponent(const USphereComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USphereComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SphereComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
