// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAnimMontage;
class UAbilityTask_PlayMontageAndWait;
#ifdef GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h
#error "AbilityTask_PlayMontageAndWait.generated.h already included, missing '#pragma once' in AbilityTask_PlayMontageAndWait.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_6_DELEGATE \
static inline void FMontageWaitSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitSimpleDelegate) \
{ \
	MontageWaitSimpleDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}




#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSection); \
		P_FINISH; \
		*(UAbilityTask_PlayMontageAndWait**)Z_Param__Result=UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(Z_Param_WorldContextObject,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_Rate,Z_Param_StartSection); \
	} \
 \
	DECLARE_FUNCTION(execOnMontageInterrupted) \
	{ \
		P_FINISH; \
		this->OnMontageInterrupted(); \
	} \
 \
	DECLARE_FUNCTION(execOnMontageBlendingOut) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		this->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSection); \
		P_FINISH; \
		*(UAbilityTask_PlayMontageAndWait**)Z_Param__Result=UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(Z_Param_WorldContextObject,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_Rate,Z_Param_StartSection); \
	} \
 \
	DECLARE_FUNCTION(execOnMontageInterrupted) \
	{ \
		P_FINISH; \
		this->OnMontageInterrupted(); \
	} \
 \
	DECLARE_FUNCTION(execOnMontageBlendingOut) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		this->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAbilityTask_PlayMontageAndWait(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait(); \
	public: \
	DECLARE_CLASS(UAbilityTask_PlayMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayMontageAndWait) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_PlayMontageAndWait*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUAbilityTask_PlayMontageAndWait(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait(); \
	public: \
	DECLARE_CLASS(UAbilityTask_PlayMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayMontageAndWait) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_PlayMontageAndWait*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayMontageAndWait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_PlayMontageAndWait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayMontageAndWait); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait(const UAbilityTask_PlayMontageAndWait& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait(const UAbilityTask_PlayMontageAndWait& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilityTask_PlayMontageAndWait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayMontageAndWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayMontageAndWait)


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_8_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_PlayMontageAndWait."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS