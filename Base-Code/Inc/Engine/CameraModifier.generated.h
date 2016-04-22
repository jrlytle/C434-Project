// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FRotator;
struct FPostProcessSettings;
#ifdef ENGINE_CameraModifier_generated_h
#error "CameraModifier.generated.h already included, missing '#pragma once' in CameraModifier.h"
#endif
#define ENGINE_CameraModifier_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableModifier) \
	{ \
		P_FINISH; \
		this->EnableModifier(); \
	} \
 \
	DECLARE_FUNCTION(execDisableModifier) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		this->DisableModifier(Z_Param_bImmediate); \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		*(AActor**)Z_Param__Result=this->GetViewTarget(); \
	} \
 \
	DECLARE_FUNCTION(execIsDisabled) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsDisabled(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableModifier) \
	{ \
		P_FINISH; \
		this->EnableModifier(); \
	} \
 \
	DECLARE_FUNCTION(execDisableModifier) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		this->DisableModifier(Z_Param_bImmediate); \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		*(AActor**)Z_Param__Result=this->GetViewTarget(); \
	} \
 \
	DECLARE_FUNCTION(execIsDisabled) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsDisabled(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_EVENT_PARMS \
	struct CameraModifier_eventBlueprintModifyCamera_Parms \
	{ \
		float DeltaTime; \
		FVector ViewLocation; \
		FRotator ViewRotation; \
		float FOV; \
		FVector NewViewLocation; \
		FRotator NewViewRotation; \
		float NewFOV; \
	}; \
	struct CameraModifier_eventBlueprintModifyPostProcess_Parms \
	{ \
		float DeltaTime; \
		float PostProcessBlendWeight; \
		FPostProcessSettings PostProcessSettings; \
	};


extern ENGINE_API  FName ENGINE_BlueprintModifyCamera;
extern ENGINE_API  FName ENGINE_BlueprintModifyPostProcess;
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCameraModifier(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCameraModifier(); \
	public: \
	DECLARE_CLASS(UCameraModifier, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UCameraModifier) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UCameraModifier*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUCameraModifier(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCameraModifier(); \
	public: \
	DECLARE_CLASS(UCameraModifier, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UCameraModifier) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UCameraModifier*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCameraModifier(const UCameraModifier& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCameraModifier(const UCameraModifier& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_13_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraModifier."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
