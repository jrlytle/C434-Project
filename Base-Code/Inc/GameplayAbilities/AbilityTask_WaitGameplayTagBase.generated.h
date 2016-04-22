// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagBase_generated_h
#error "AbilityTask_WaitGameplayTagBase.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayTagBase.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagBase_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGameplayTagCallback) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCount); \
		P_FINISH; \
		this->GameplayTagCallback(Z_Param_Tag,Z_Param_NewCount); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGameplayTagCallback) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCount); \
		P_FINISH; \
		this->GameplayTagCallback(Z_Param_Tag,Z_Param_NewCount); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTag(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTag(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayTag, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTag) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitGameplayTag*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTag(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTag(); \
	public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayTag, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTag) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_WaitGameplayTag*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTag); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag(const UAbilityTask_WaitGameplayTag& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag(const UAbilityTask_WaitGameplayTag& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_WaitGameplayTag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTag)


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_8_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitGameplayTag."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS