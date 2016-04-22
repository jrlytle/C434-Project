// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
#ifdef ENGINE_ProjectileMovementComponent_generated_h
#error "ProjectileMovementComponent.generated.h already included, missing '#pragma once' in ProjectileMovementComponent.h"
#endif
#define ENGINE_ProjectileMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_DELEGATE \
struct ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms \
{ \
	FHitResult ImpactResult; \
}; \
static inline void FOnProjectileStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileStopDelegate, const FHitResult& ImpactResult) \
{ \
	ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	OnProjectileStopDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_23_DELEGATE \
struct ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	FVector ImpactVelocity; \
}; \
static inline void FOnProjectileBounceDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileBounceDelegate, const FHitResult& ImpactResult, const FVector& ImpactVelocity) \
{ \
	ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.ImpactVelocity=ImpactVelocity; \
	OnProjectileBounceDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLimitVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVelocity); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->LimitVelocity(Z_Param_NewVelocity); \
	} \
 \
	DECLARE_FUNCTION(execStopSimulating) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		this->StopSimulating(Z_Param_Out_HitResult); \
	} \
 \
	DECLARE_FUNCTION(execSetVelocityInLocalSpace) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVelocity); \
		P_FINISH; \
		this->SetVelocityInLocalSpace(Z_Param_NewVelocity); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLimitVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVelocity); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->LimitVelocity(Z_Param_NewVelocity); \
	} \
 \
	DECLARE_FUNCTION(execStopSimulating) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		this->StopSimulating(Z_Param_Out_HitResult); \
	} \
 \
	DECLARE_FUNCTION(execSetVelocityInLocalSpace) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVelocity); \
		P_FINISH; \
		this->SetVelocityInLocalSpace(Z_Param_NewVelocity); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUProjectileMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent(); \
	public: \
	DECLARE_CLASS(UProjectileMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UProjectileMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UProjectileMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_INCLASS \
	private: \
	static void StaticRegisterNativesUProjectileMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent(); \
	public: \
	DECLARE_CLASS(UProjectileMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UProjectileMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UProjectileMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileMovementComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UProjectileMovementComponent(const UProjectileMovementComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UProjectileMovementComponent(const UProjectileMovementComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProjectileMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS