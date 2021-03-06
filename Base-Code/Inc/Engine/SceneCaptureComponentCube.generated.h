// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SceneCaptureComponentCube_generated_h
#error "SceneCaptureComponentCube.generated.h already included, missing '#pragma once' in SceneCaptureComponentCube.h"
#endif
#define ENGINE_SceneCaptureComponentCube_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateContent) \
	{ \
		P_FINISH; \
		this->UpdateContent(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateContent) \
	{ \
		P_FINISH; \
		this->UpdateContent(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSceneCaptureComponentCube(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USceneCaptureComponentCube(); \
	public: \
	DECLARE_CLASS(USceneCaptureComponentCube, USceneCaptureComponent, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USceneCaptureComponentCube) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USceneCaptureComponentCube*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUSceneCaptureComponentCube(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USceneCaptureComponentCube(); \
	public: \
	DECLARE_CLASS(USceneCaptureComponentCube, USceneCaptureComponent, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USceneCaptureComponentCube) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USceneCaptureComponentCube*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponentCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USceneCaptureComponentCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponentCube); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USceneCaptureComponentCube(const USceneCaptureComponentCube& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USceneCaptureComponentCube(const USceneCaptureComponentCube& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USceneCaptureComponentCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponentCube); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponentCube)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponentCube."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
