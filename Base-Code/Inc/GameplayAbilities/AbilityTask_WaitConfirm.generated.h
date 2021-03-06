// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAbilityTask_WaitConfirm;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitConfirm_generated_h
#error "AbilityTask_WaitConfirm.generated.h already included, missing '#pragma once' in AbilityTask_WaitConfirm.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitConfirm_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitConfirm) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(UAbilityTask_WaitConfirm**)Z_Param__Result=UAbilityTask_WaitConfirm::WaitConfirm(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execOnConfirmCallback) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_Ability); \
		P_FINISH; \
		this->OnConfirmCallback(Z_Param_Ability); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitConfirm) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		*(UAbilityTask_WaitConfirm**)Z_Param__Result=UAbilityTask_WaitConfirm::WaitConfirm(Z_Param_WorldContextObject); \
	} \
 \
	DECLARE_FUNCTION(execOnConfirmCallback) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_Ability); \
		P_FINISH; \
		this->OnConfirmCallback(Z_Param_Ability); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitConfirm(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitConfirm, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitConfirm) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitConfirm*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitConfirm(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitConfirm, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitConfirm) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitConfirm*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitConfirm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitConfirm); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitConfirm); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm(const UAbilityTask_WaitConfirm& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm(const UAbilityTask_WaitConfirm& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitConfirm); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitConfirm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitConfirm)


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_7_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitConfirm."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
