// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetTypes_generated_h
#error "GameplayAbilityTargetTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTargetTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetTypes_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_521_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_419_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_358_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_256_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_168_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_62_GENERATED_BODY \
	friend GAMEPLAYABILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h


#define FOREACH_ENUM_EABILITYGENERICREPLICATEDEVENT(op) \
	op(EAbilityGenericReplicatedEvent::GenericConfirm) \
	op(EAbilityGenericReplicatedEvent::GenericCancel) \
	op(EAbilityGenericReplicatedEvent::InputPressed) \
	op(EAbilityGenericReplicatedEvent::InputReleased) \
	op(EAbilityGenericReplicatedEvent::GenericSignalFromClient) \
	op(EAbilityGenericReplicatedEvent::GenericSignalFromServer) \
	op(EAbilityGenericReplicatedEvent::GameCustom1) \
	op(EAbilityGenericReplicatedEvent::GameCustom2) \
	op(EAbilityGenericReplicatedEvent::GameCustom3) \
	op(EAbilityGenericReplicatedEvent::GameCustom4) \
	op(EAbilityGenericReplicatedEvent::GameCustom5) \
	op(EAbilityGenericReplicatedEvent::MAX) 
#define FOREACH_ENUM_EGAMEPLAYABILITYTARGETINGLOCATIONTYPE(op) \
	op(EGameplayAbilityTargetingLocationType::LiteralTransform) \
	op(EGameplayAbilityTargetingLocationType::ActorTransform) \
	op(EGameplayAbilityTargetingLocationType::SocketTransform) 
#define FOREACH_ENUM_EGAMEPLAYTARGETINGCONFIRMATION(op) \
	op(EGameplayTargetingConfirmation::Instant) \
	op(EGameplayTargetingConfirmation::UserConfirmed) \
	op(EGameplayTargetingConfirmation::Custom) \
	op(EGameplayTargetingConfirmation::CustomMulti) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
