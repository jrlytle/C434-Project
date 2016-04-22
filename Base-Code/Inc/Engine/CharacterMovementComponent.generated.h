// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
class AActor;
struct FHitResult;
class ACharacter;
#ifdef ENGINE_CharacterMovementComponent_generated_h
#error "CharacterMovementComponent.generated.h already included, missing '#pragma once' in CharacterMovementComponent.h"
#endif
#define ENGINE_CharacterMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_85_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentPreClothTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_21_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_RPC_WRAPPERS \
	virtual void ClientAdjustRootMotionPosition_Implementation(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAckGoodMove_Implementation(float TimeStamp); \
	virtual bool ServerMoveOld_Validate(float , FVector_NetQuantize10 , uint8 ); \
	virtual void ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags); \
	virtual bool ServerMoveDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMove_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMove_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		this->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		this->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		this->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execClientAckGoodMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		this->ClientAckGoodMove_Implementation(Z_Param_TimeStamp); \
	} \
 \
	DECLARE_FUNCTION(execServerMoveOld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_FINISH; \
		if (!this->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate")); \
			return; \
		} \
		this->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags); \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		if (!this->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		if (!this->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate")); \
			return; \
		} \
		this->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execServerMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		if (!this->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMove_Validate")); \
			return; \
		} \
		this->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		this->CapsuleTouched(Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorZ); \
		P_FINISH; \
		this->SetWalkableFloorZ(Z_Param_InWalkableFloorZ); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorZ(); \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorAngle); \
		P_FINISH; \
		this->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorAngle(); \
	} \
 \
	DECLARE_FUNCTION(execIsWalkable) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsWalkable(Z_Param_Out_Hit); \
	} \
 \
	DECLARE_FUNCTION(execGetValidPerchRadius) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetValidPerchRadius(); \
	} \
 \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPerchRadiusThreshold(); \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_FINISH; \
		this->AddForce(Z_Param_Force); \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bVelocityChange); \
		P_FINISH; \
		this->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange); \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogInputModifier) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetAnalogInputModifier(); \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAcceleration) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetCurrentAcceleration(); \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAcceleration) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMaxAcceleration(); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->K2_GetModifiedMaxAcceleration(); \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeight) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMaxJumpHeight(); \
	} \
 \
	DECLARE_FUNCTION(execCalcVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Friction); \
		P_GET_UBOOL(Z_Param_bFluid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BrakingDeceleration); \
		P_FINISH; \
		this->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration); \
	} \
 \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetImpartedMovementBaseVelocity(); \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBase) \
	{ \
		P_FINISH; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetMovementBase(); \
	} \
 \
	DECLARE_FUNCTION(execDisableMovement) \
	{ \
		P_FINISH; \
		this->DisableMovement(); \
	} \
 \
	DECLARE_FUNCTION(execIsWalking) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsWalking(); \
	} \
 \
	DECLARE_FUNCTION(execSetMovementMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		this->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOwner) \
	{ \
		P_FINISH; \
		*(ACharacter**)Z_Param__Result=this->GetCharacterOwner(); \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		this->SetAvoidanceEnabled(Z_Param_bEnable); \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		this->SetGroupsToIgnore(Z_Param_GroupFlags); \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		this->SetGroupsToAvoid(Z_Param_GroupFlags); \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		this->SetAvoidanceGroup(Z_Param_GroupFlags); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		this->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		this->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		this->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execClientAckGoodMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		this->ClientAckGoodMove_Implementation(Z_Param_TimeStamp); \
	} \
 \
	DECLARE_FUNCTION(execServerMoveOld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_FINISH; \
		if (!this->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate")); \
			return; \
		} \
		this->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags); \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		if (!this->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		if (!this->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate")); \
			return; \
		} \
		this->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execServerMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		if (!this->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMove_Validate")); \
			return; \
		} \
		this->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		this->CapsuleTouched(Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorZ); \
		P_FINISH; \
		this->SetWalkableFloorZ(Z_Param_InWalkableFloorZ); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorZ(); \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorAngle); \
		P_FINISH; \
		this->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorAngle(); \
	} \
 \
	DECLARE_FUNCTION(execIsWalkable) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsWalkable(Z_Param_Out_Hit); \
	} \
 \
	DECLARE_FUNCTION(execGetValidPerchRadius) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetValidPerchRadius(); \
	} \
 \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPerchRadiusThreshold(); \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_FINISH; \
		this->AddForce(Z_Param_Force); \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bVelocityChange); \
		P_FINISH; \
		this->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange); \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogInputModifier) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetAnalogInputModifier(); \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAcceleration) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetCurrentAcceleration(); \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAcceleration) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMaxAcceleration(); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->K2_GetModifiedMaxAcceleration(); \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeight) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMaxJumpHeight(); \
	} \
 \
	DECLARE_FUNCTION(execCalcVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Friction); \
		P_GET_UBOOL(Z_Param_bFluid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BrakingDeceleration); \
		P_FINISH; \
		this->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration); \
	} \
 \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetImpartedMovementBaseVelocity(); \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBase) \
	{ \
		P_FINISH; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetMovementBase(); \
	} \
 \
	DECLARE_FUNCTION(execDisableMovement) \
	{ \
		P_FINISH; \
		this->DisableMovement(); \
	} \
 \
	DECLARE_FUNCTION(execIsWalking) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsWalking(); \
	} \
 \
	DECLARE_FUNCTION(execSetMovementMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		this->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOwner) \
	{ \
		P_FINISH; \
		*(ACharacter**)Z_Param__Result=this->GetCharacterOwner(); \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		this->SetAvoidanceEnabled(Z_Param_bEnable); \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		this->SetGroupsToIgnore(Z_Param_GroupFlags); \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		this->SetGroupsToAvoid(Z_Param_GroupFlags); \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		this->SetAvoidanceGroup(Z_Param_GroupFlags); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_EVENT_PARMS \
	struct CharacterMovementComponent_eventClientAckGoodMove_Parms \
	{ \
		float TimeStamp; \
	}; \
	struct CharacterMovementComponent_eventClientAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms \
	{ \
		float TimeStamp; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMove_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMoveDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMoveDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMoveOld_Parms \
	{ \
		float OldTimeStamp; \
		FVector_NetQuantize10 OldAccel; \
		uint8 OldMoveFlags; \
	};


extern ENGINE_API  FName ENGINE_ClientAckGoodMove;
extern ENGINE_API  FName ENGINE_ClientAdjustPosition;
extern ENGINE_API  FName ENGINE_ClientAdjustRootMotionPosition;
extern ENGINE_API  FName ENGINE_ClientVeryShortAdjustPosition;
extern ENGINE_API  FName ENGINE_ServerMove;
extern ENGINE_API  FName ENGINE_ServerMoveDual;
extern ENGINE_API  FName ENGINE_ServerMoveDualHybridRootMotion;
extern ENGINE_API  FName ENGINE_ServerMoveOld;
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCharacterMovementComponent(); \
	public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_INCLASS \
	private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCharacterMovementComponent(); \
	public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_121_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS