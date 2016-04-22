// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UDestructibleMesh;
#ifdef ENGINE_DestructibleComponent_generated_h
#error "DestructibleComponent.generated.h already included, missing '#pragma once' in DestructibleComponent.h"
#endif
#define ENGINE_DestructibleComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_33_DELEGATE \
struct _Script_Engine_eventComponentFractureSignature_Parms \
{ \
	FVector HitPoint; \
	FVector HitDirection; \
}; \
static inline void FComponentFractureSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentFractureSignature, const FVector& HitPoint, const FVector& HitDirection) \
{ \
	_Script_Engine_eventComponentFractureSignature_Parms Parms; \
	Parms.HitPoint=HitPoint; \
	Parms.HitDirection=HitDirection; \
	ComponentFractureSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDestructibleMesh) \
	{ \
		P_FINISH; \
		*(UDestructibleMesh**)Z_Param__Result=this->GetDestructibleMesh(); \
	} \
 \
	DECLARE_FUNCTION(execSetDestructibleMesh) \
	{ \
		P_GET_OBJECT(UDestructibleMesh,Z_Param_NewMesh); \
		P_FINISH; \
		this->SetDestructibleMesh(Z_Param_NewMesh); \
	} \
 \
	DECLARE_FUNCTION(execApplyRadiusDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HurtOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ImpulseStrength); \
		P_GET_UBOOL(Z_Param_bFullDamage); \
		P_FINISH; \
		this->ApplyRadiusDamage(Z_Param_BaseDamage,Z_Param_Out_HurtOrigin,Z_Param_DamageRadius,Z_Param_ImpulseStrength,Z_Param_bFullDamage); \
	} \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpulseDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ImpulseStrength); \
		P_FINISH; \
		this->ApplyDamage(Z_Param_DamageAmount,Z_Param_Out_HitLocation,Z_Param_Out_ImpulseDir,Z_Param_ImpulseStrength); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDestructibleMesh) \
	{ \
		P_FINISH; \
		*(UDestructibleMesh**)Z_Param__Result=this->GetDestructibleMesh(); \
	} \
 \
	DECLARE_FUNCTION(execSetDestructibleMesh) \
	{ \
		P_GET_OBJECT(UDestructibleMesh,Z_Param_NewMesh); \
		P_FINISH; \
		this->SetDestructibleMesh(Z_Param_NewMesh); \
	} \
 \
	DECLARE_FUNCTION(execApplyRadiusDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HurtOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ImpulseStrength); \
		P_GET_UBOOL(Z_Param_bFullDamage); \
		P_FINISH; \
		this->ApplyRadiusDamage(Z_Param_BaseDamage,Z_Param_Out_HurtOrigin,Z_Param_DamageRadius,Z_Param_ImpulseStrength,Z_Param_bFullDamage); \
	} \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpulseDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ImpulseStrength); \
		P_FINISH; \
		this->ApplyDamage(Z_Param_DamageAmount,Z_Param_Out_HitLocation,Z_Param_Out_ImpulseDir,Z_Param_ImpulseStrength); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDestructibleComponent(); \
	public: \
	DECLARE_CLASS(UDestructibleComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UDestructibleComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDestructibleComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_INCLASS \
	private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDestructibleComponent(); \
	public: \
	DECLARE_CLASS(UDestructibleComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UDestructibleComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDestructibleComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UDestructibleComponent(const UDestructibleComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UDestructibleComponent(const UDestructibleComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_40_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DestructibleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_DestructibleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
