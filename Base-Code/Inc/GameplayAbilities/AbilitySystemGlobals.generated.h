// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h
#error "AbilitySystemGlobals.generated.h already included, missing '#pragma once' in AbilitySystemGlobals.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCosts) \
	{ \
		P_FINISH; \
		this->ToggleIgnoreAbilitySystemCosts(); \
	} \
 \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCooldowns) \
	{ \
		P_FINISH; \
		this->ToggleIgnoreAbilitySystemCooldowns(); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCosts) \
	{ \
		P_FINISH; \
		this->ToggleIgnoreAbilitySystemCosts(); \
	} \
 \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCooldowns) \
	{ \
		P_FINISH; \
		this->ToggleIgnoreAbilitySystemCooldowns(); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilitySystemGlobals(); \
	public: \
	DECLARE_CLASS(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UAbilitySystemGlobals*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_INCLASS \
	private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilitySystemGlobals(); \
	public: \
	DECLARE_CLASS(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UAbilitySystemGlobals*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemGlobals); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAbilitySystemGlobals(const UAbilitySystemGlobals& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAbilitySystemGlobals(const UAbilitySystemGlobals& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemGlobals); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals)


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_22_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemGlobals."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemGlobals_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
