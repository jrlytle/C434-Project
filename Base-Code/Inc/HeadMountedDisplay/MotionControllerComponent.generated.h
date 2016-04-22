// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h
#error "MotionControllerComponent.generated.h already included, missing '#pragma once' in MotionControllerComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsTracked(); \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsTracked(); \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent(); \
	public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, HeadMountedDisplay, NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMotionControllerComponent*>(this); }


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent(); \
	public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, HeadMountedDisplay, NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMotionControllerComponent*>(this); }


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMotionControllerComponent(const UMotionControllerComponent& InCopy); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMotionControllerComponent(const UMotionControllerComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_8_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS