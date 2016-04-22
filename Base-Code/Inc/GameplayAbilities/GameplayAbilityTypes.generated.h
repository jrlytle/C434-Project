// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h
#error "GameplayAbilityTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_369_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_286_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_260_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_211_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_169_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey(); \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_118_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h


#define FOREACH_ENUM_EGAMEPLAYABILITYTRIGGERSOURCE(op) \
	op(EGameplayAbilityTriggerSource::GameplayEvent) \
	op(EGameplayAbilityTriggerSource::OwnedTagAdded) \
	op(EGameplayAbilityTriggerSource::OwnedTagPresent) 
#define FOREACH_ENUM_EGAMEPLAYABILITYREPLICATIONPOLICY(op) \
	op(EGameplayAbilityReplicationPolicy::ReplicateNo) \
	op(EGameplayAbilityReplicationPolicy::ReplicateYes) 
#define FOREACH_ENUM_EGAMEPLAYABILITYNETEXECUTIONPOLICY(op) \
	op(EGameplayAbilityNetExecutionPolicy::LocalPredicted) \
	op(EGameplayAbilityNetExecutionPolicy::LocalOnly) \
	op(EGameplayAbilityNetExecutionPolicy::ServerInitiated) \
	op(EGameplayAbilityNetExecutionPolicy::ServerOnly) 
#define FOREACH_ENUM_EGAMEPLAYABILITYINSTANCINGPOLICY(op) \
	op(EGameplayAbilityInstancingPolicy::NonInstanced) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerActor) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerExecution) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
