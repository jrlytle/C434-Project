// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbility_CharacterJump_generated_h
#error "GameplayAbility_CharacterJump.generated.h already included, missing '#pragma once' in GameplayAbility_CharacterJump.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbility_CharacterJump_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameplayAbility_CharacterJump(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump(); \
	public: \
	DECLARE_CLASS(UGameplayAbility_CharacterJump, UGameplayAbility, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UGameplayAbility_CharacterJump) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility_CharacterJump*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUGameplayAbility_CharacterJump(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump(); \
	public: \
	DECLARE_CLASS(UGameplayAbility_CharacterJump, UGameplayAbility, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UGameplayAbility_CharacterJump) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility_CharacterJump*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbility_CharacterJump(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility_CharacterJump) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility_CharacterJump); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility_CharacterJump); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayAbility_CharacterJump(const UGameplayAbility_CharacterJump& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbility_CharacterJump(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayAbility_CharacterJump(const UGameplayAbility_CharacterJump& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility_CharacterJump); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility_CharacterJump); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility_CharacterJump)


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_11_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayAbility_CharacterJump."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS