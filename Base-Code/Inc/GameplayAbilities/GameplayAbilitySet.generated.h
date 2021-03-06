// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilitySet_generated_h
#error "GameplayAbilitySet.generated.h already included, missing '#pragma once' in GameplayAbilitySet.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilitySet_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_41_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityBindInfo(); \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameplayAbilitySet(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UGameplayAbilitySet(); \
	public: \
	DECLARE_CLASS(UGameplayAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UGameplayAbilitySet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbilitySet*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_INCLASS \
	private: \
	static void StaticRegisterNativesUGameplayAbilitySet(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UGameplayAbilitySet(); \
	public: \
	DECLARE_CLASS(UGameplayAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UGameplayAbilitySet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbilitySet*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitySet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbilitySet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitySet); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayAbilitySet(const UGameplayAbilitySet& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayAbilitySet(const UGameplayAbilitySet& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbilitySet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitySet)


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_56_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayAbilitySet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_GameplayAbilitySet_h


#define FOREACH_ENUM_EGAMEPLAYABILITYINPUTBINDS(op) \
	op(EGameplayAbilityInputBinds::Ability1) \
	op(EGameplayAbilityInputBinds::Ability2) \
	op(EGameplayAbilityInputBinds::Ability3) \
	op(EGameplayAbilityInputBinds::Ability4) \
	op(EGameplayAbilityInputBinds::Ability5) \
	op(EGameplayAbilityInputBinds::Ability6) \
	op(EGameplayAbilityInputBinds::Ability7) \
	op(EGameplayAbilityInputBinds::Ability8) \
	op(EGameplayAbilityInputBinds::Ability9) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
