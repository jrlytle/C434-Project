// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UAbilitySystemComponent;
#ifdef GAMEPLAYABILITIES_GameplayTagResponseTable_generated_h
#error "GameplayTagResponseTable.generated.h already included, missing '#pragma once' in GameplayTagResponseTable.h"
#endif
#define GAMEPLAYABILITIES_GameplayTagResponseTable_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_29_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry(); \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_15_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReponsePair(); \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTagResponseEvent) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCount); \
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		this->TagResponseEvent(Z_Param_Tag,Z_Param_NewCount,Z_Param_ASC,Z_Param_idx); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTagResponseEvent) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCount); \
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		this->TagResponseEvent(Z_Param_Tag,Z_Param_NewCount,Z_Param_ASC,Z_Param_idx); \
	}


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameplayTagReponseTable(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UGameplayTagReponseTable(); \
	public: \
	DECLARE_CLASS(UGameplayTagReponseTable, UDataAsset, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UGameplayTagReponseTable) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTagReponseTable*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_INCLASS \
	private: \
	static void StaticRegisterNativesUGameplayTagReponseTable(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UGameplayTagReponseTable(); \
	public: \
	DECLARE_CLASS(UGameplayTagReponseTable, UDataAsset, COMPILED_IN_FLAGS(0), 0, GameplayAbilities, NO_API) \
	DECLARE_SERIALIZER(UGameplayTagReponseTable) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTagReponseTable*>(this); }


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagReponseTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagReponseTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagReponseTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagReponseTable); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayTagReponseTable(const UGameplayTagReponseTable& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagReponseTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayTagReponseTable(const UGameplayTagReponseTable& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagReponseTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagReponseTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagReponseTable)


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_47_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_INCLASS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagReponseTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_GameplayTagResponseTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS