// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_AbilitySystemInterface_generated_h
#error "AbilitySystemInterface.generated.h already included, missing '#pragma once' in AbilitySystemInterface.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemInterface_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilitySystemInterface(const UAbilitySystemInterface& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UAbilitySystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UAbilitySystemInterface(const UAbilitySystemInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UAbilitySystemInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUAbilitySystemInterface(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UAbilitySystemInterface(); \
public: \
	DECLARE_CLASS(UAbilitySystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UAbilitySystemInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAbilitySystemInterface() {} \
public: \
	typedef UAbilitySystemInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IAbilitySystemInterface() {} \
public: \
	typedef UAbilitySystemInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_12_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_AbilitySystemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
