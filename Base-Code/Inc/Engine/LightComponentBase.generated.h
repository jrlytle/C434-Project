// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_LightComponentBase_generated_h
#error "LightComponentBase.generated.h already included, missing '#pragma once' in LightComponentBase.h"
#endif
#define ENGINE_LightComponentBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLightColor) \
	{ \
		P_FINISH; \
		*(FLinearColor*)Z_Param__Result=this->GetLightColor(); \
	} \
 \
	DECLARE_FUNCTION(execSetCastShadows) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		this->SetCastShadows(Z_Param_bNewValue); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLightColor) \
	{ \
		P_FINISH; \
		*(FLinearColor*)Z_Param__Result=this->GetLightColor(); \
	} \
 \
	DECLARE_FUNCTION(execSetCastShadows) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		this->SetCastShadows(Z_Param_bNewValue); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULightComponentBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULightComponentBase(); \
	public: \
	DECLARE_CLASS(ULightComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ULightComponentBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULightComponentBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesULightComponentBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULightComponentBase(); \
	public: \
	DECLARE_CLASS(ULightComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ULightComponentBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULightComponentBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponentBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULightComponentBase(const ULightComponentBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULightComponentBase(const ULightComponentBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponentBase)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_6_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightComponentBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
