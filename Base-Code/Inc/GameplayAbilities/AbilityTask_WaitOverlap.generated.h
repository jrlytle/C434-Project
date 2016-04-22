// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
class UObject;
class UAbilityTask_WaitOverlap;
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitOverlap_generated_h
#error "AbilityTask_WaitOverlap.generated.h already included, missing '#pragma once' in AbilityTask_WaitOverlap.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitOverlap_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_7_DELEGATE \
struct _Script_GameplayAbilities_eventWaitOverlapDelegate_Parms \
{ \
	FGameplayAbilityTargetDataHandle TargetData; \
}; \
static inline void FWaitOverlapDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitOverlapDelegate, FGameplayAbilityTargetDataHandle TargetData) \
{ \
	_Script_GameplayAbilities_eventWaitOverlapDelegate_Parms Parms; \
	Parms.TargetData=TargetData; \
	WaitOverlapDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitForOverlap) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(UAbilityTask_WaitOverlap**)Z_Param__Result=UAbilityTask_WaitOverlap::WaitForOverlap(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execOnHitCallback) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		this->OnHitCallback(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapCallback) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		this->OnOverlapCallback(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitForOverlap) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(UAbilityTask_WaitOverlap**)Z_Param__Result=UAbilityTask_WaitOverlap::WaitForOverlap(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execOnHitCallback) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		this->OnHitCallback(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapCallback) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		this->OnOverlapCallback(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitOverlap(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitOverlap, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitOverlap) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitOverlap*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitOverlap(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitOverlap(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitOverlap, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitOverlap) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitOverlap*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitOverlap); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap(const UAbilityTask_WaitOverlap& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap(const UAbilityTask_WaitOverlap& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitOverlap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitOverlap)


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_17_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitOverlap."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS