// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UAnimInstance;
class UObject;
#ifdef ENGINE_SkeletalMeshComponent_generated_h
#error "SkeletalMeshComponent.generated.h already included, missing '#pragma once' in SkeletalMeshComponent.h"
#endif
#define ENGINE_SkeletalMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_255_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentPreClothTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_203_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSpring); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AddPhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics) \
	{ \
		P_FINISH; \
		this->ResetAllBodiesSimulatePhysics(); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		this->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate); \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending) \
	{ \
		P_GET_UBOOL(Z_Param_bNewBlendPhysics); \
		P_FINISH; \
		this->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics); \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_FINISH; \
		this->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		this->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate); \
	} \
 \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace); \
		P_FINISH; \
		this->UnbindClothFromMasterPoseComponent(Z_Param_bRestoreSimulationSpace); \
	} \
 \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent) \
	{ \
		P_FINISH; \
		this->BindClothToMasterPoseComponent(); \
	} \
 \
	DECLARE_FUNCTION(execResetClothTeleportMode) \
	{ \
		P_FINISH; \
		this->ResetClothTeleportMode(); \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset) \
	{ \
		P_FINISH; \
		this->ForceClothNextUpdateTeleportAndReset(); \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport) \
	{ \
		P_FINISH; \
		this->ForceClothNextUpdateTeleport(); \
	} \
 \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		this->SetClothMaxDistanceScale(Z_Param_Scale); \
	} \
 \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetClothMaxDistanceScale(); \
	} \
 \
	DECLARE_FUNCTION(execGetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMorphTarget(Z_Param_MorphTargetName); \
	} \
 \
	DECLARE_FUNCTION(execClearMorphTargets) \
	{ \
		P_FINISH; \
		this->ClearMorphTargets(); \
	} \
 \
	DECLARE_FUNCTION(execSetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight); \
		P_FINISH; \
		this->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight); \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPlayRate(); \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		this->SetPlayRate(Z_Param_Rate); \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPosition(); \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPos); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		this->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies); \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		this->Stop(); \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		this->Play(Z_Param_bLooping); \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_FINISH; \
		this->SetAnimation(Z_Param_NewAnimToPlay); \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		this->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping); \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationMode) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=this->GetAnimationMode(); \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InAnimationMode); \
		P_FINISH; \
		this->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode)); \
	} \
 \
	DECLARE_FUNCTION(execGetAnimInstance) \
	{ \
		P_FINISH; \
		*(UAnimInstance**)Z_Param__Result=this->GetAnimInstance(); \
	} \
 \
	DECLARE_FUNCTION(execSetAnimInstanceClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewClass); \
		P_FINISH; \
		this->SetAnimInstanceClass(Z_Param_NewClass); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSpring); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AddPhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		this->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
	} \
 \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics) \
	{ \
		P_FINISH; \
		this->ResetAllBodiesSimulatePhysics(); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		this->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate); \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending) \
	{ \
		P_GET_UBOOL(Z_Param_bNewBlendPhysics); \
		P_FINISH; \
		this->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics); \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_FINISH; \
		this->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight); \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		this->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate); \
	} \
 \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace); \
		P_FINISH; \
		this->UnbindClothFromMasterPoseComponent(Z_Param_bRestoreSimulationSpace); \
	} \
 \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent) \
	{ \
		P_FINISH; \
		this->BindClothToMasterPoseComponent(); \
	} \
 \
	DECLARE_FUNCTION(execResetClothTeleportMode) \
	{ \
		P_FINISH; \
		this->ResetClothTeleportMode(); \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset) \
	{ \
		P_FINISH; \
		this->ForceClothNextUpdateTeleportAndReset(); \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport) \
	{ \
		P_FINISH; \
		this->ForceClothNextUpdateTeleport(); \
	} \
 \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		this->SetClothMaxDistanceScale(Z_Param_Scale); \
	} \
 \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetClothMaxDistanceScale(); \
	} \
 \
	DECLARE_FUNCTION(execGetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMorphTarget(Z_Param_MorphTargetName); \
	} \
 \
	DECLARE_FUNCTION(execClearMorphTargets) \
	{ \
		P_FINISH; \
		this->ClearMorphTargets(); \
	} \
 \
	DECLARE_FUNCTION(execSetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight); \
		P_FINISH; \
		this->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight); \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPlayRate(); \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		this->SetPlayRate(Z_Param_Rate); \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPosition(); \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPos); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		this->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies); \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		this->Stop(); \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		this->Play(Z_Param_bLooping); \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_FINISH; \
		this->SetAnimation(Z_Param_NewAnimToPlay); \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		this->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping); \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationMode) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=this->GetAnimationMode(); \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InAnimationMode); \
		P_FINISH; \
		this->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode)); \
	} \
 \
	DECLARE_FUNCTION(execGetAnimInstance) \
	{ \
		P_FINISH; \
		*(UAnimInstance**)Z_Param__Result=this->GetAnimInstance(); \
	} \
 \
	DECLARE_FUNCTION(execSetAnimInstanceClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewClass); \
		P_FINISH; \
		this->SetAnimInstanceClass(Z_Param_NewClass); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent(); \
	public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_USkeletalMeshComponent, Engine, NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_INCLASS \
	private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent(); \
	public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_USkeletalMeshComponent, Engine, NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_279_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_282_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h


#define FOREACH_ENUM_EANIMATIONMODE(op) \
	op(EAnimationMode::AnimationBlueprint) \
	op(EAnimationMode::AnimationSingleNode) 
#define FOREACH_ENUM_EKINEMATICBONESUPDATETOPHYSICS(op) \
	op(EKinematicBonesUpdateToPhysics::SkipSimulatingBones) \
	op(EKinematicBonesUpdateToPhysics::SkipAllBones) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
