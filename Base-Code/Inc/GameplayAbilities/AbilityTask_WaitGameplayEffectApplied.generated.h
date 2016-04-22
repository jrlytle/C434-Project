// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FGameplayEffectSpec;
struct FActiveGameplayEffectHandle;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectApplied_generated_h
#error "AbilityTask_WaitGameplayEffectApplied.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectApplied.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectApplied_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnApplyGameplayEffectCallback) \
	{ \
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_SpecApplied); \
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle); \
		P_FINISH; \
		this->OnApplyGameplayEffectCallback(Z_Param_Target,Z_Param_Out_SpecApplied,Z_Param_ActiveHandle); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnApplyGameplayEffectCallback) \
	{ \
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_SpecApplied); \
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle); \
		P_FINISH; \
		this->OnApplyGameplayEffectCallback(Z_Param_Target,Z_Param_Out_SpecApplied,Z_Param_ActiveHandle); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectApplied, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectApplied) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitGameplayEffectApplied*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectApplied, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectApplied) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitGameplayEffectApplied*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectApplied) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEffectApplied); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectApplied); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied(const UAbilityTask_WaitGameplayEffectApplied& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied(const UAbilityTask_WaitGameplayEffectApplied& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayEffectApplied); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectApplied); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectApplied)


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_9_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitGameplayEffectApplied."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
