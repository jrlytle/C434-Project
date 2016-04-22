// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavMovementComponent_generated_h
#error "NavMovementComponent.generated.h already included, missing '#pragma once' in NavMovementComponent.h"
#endif
#define ENGINE_NavMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsFlying) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsFlying(); \
	} \
 \
	DECLARE_FUNCTION(execIsSwimming) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsSwimming(); \
	} \
 \
	DECLARE_FUNCTION(execIsMovingOnGround) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsMovingOnGround(); \
	} \
 \
	DECLARE_FUNCTION(execIsFalling) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsFalling(); \
	} \
 \
	DECLARE_FUNCTION(execIsCrouching) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsCrouching(); \
	} \
 \
	DECLARE_FUNCTION(execStopMovementKeepPathing) \
	{ \
		P_FINISH; \
		this->StopMovementKeepPathing(); \
	} \
 \
	DECLARE_FUNCTION(execStopActiveMovement) \
	{ \
		P_FINISH; \
		this->StopActiveMovement(); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsFlying) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsFlying(); \
	} \
 \
	DECLARE_FUNCTION(execIsSwimming) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsSwimming(); \
	} \
 \
	DECLARE_FUNCTION(execIsMovingOnGround) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsMovingOnGround(); \
	} \
 \
	DECLARE_FUNCTION(execIsFalling) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsFalling(); \
	} \
 \
	DECLARE_FUNCTION(execIsCrouching) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsCrouching(); \
	} \
 \
	DECLARE_FUNCTION(execStopMovementKeepPathing) \
	{ \
		P_FINISH; \
		this->StopMovementKeepPathing(); \
	} \
 \
	DECLARE_FUNCTION(execStopActiveMovement) \
	{ \
		P_FINISH; \
		this->StopActiveMovement(); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavMovementComponent(); \
	public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UNavMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_INCLASS \
	private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavMovementComponent(); \
	public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UNavMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavMovementComponent(const UNavMovementComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavMovementComponent(const UNavMovementComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
