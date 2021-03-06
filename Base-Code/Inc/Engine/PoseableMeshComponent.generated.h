// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
struct FTransform;
#ifdef ENGINE_PoseableMeshComponent_generated_h
#error "PoseableMeshComponent.generated.h already included, missing '#pragma once' in PoseableMeshComponent.h"
#endif
#define ENGINE_PoseableMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		this->ResetBoneTransformByName(Z_Param_BoneName); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetBoneScaleByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FRotator*)Z_Param__Result=this->GetBoneRotationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetBoneLocationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FTransform*)Z_Param__Result=this->GetBoneTransformByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InScale3D); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneScaleByName(Z_Param_BoneName,Z_Param_InScale3D,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneRotationByName(Z_Param_BoneName,Z_Param_InRotation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneLocationByName(Z_Param_BoneName,Z_Param_InLocation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneTransformByName(Z_Param_BoneName,Z_Param_Out_InTransform,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		this->ResetBoneTransformByName(Z_Param_BoneName); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetBoneScaleByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FRotator*)Z_Param__Result=this->GetBoneRotationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetBoneLocationByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		*(FTransform*)Z_Param__Result=this->GetBoneTransformByName(Z_Param_BoneName,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneScaleByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InScale3D); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneScaleByName(Z_Param_BoneName,Z_Param_InScale3D,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneRotationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneRotationByName(Z_Param_BoneName,Z_Param_InRotation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneLocationByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneLocationByName(Z_Param_BoneName,Z_Param_InLocation,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	} \
 \
	DECLARE_FUNCTION(execSetBoneTransformByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BoneSpace); \
		P_FINISH; \
		this->SetBoneTransformByName(Z_Param_BoneName,Z_Param_Out_InTransform,EBoneSpaces::Type(Z_Param_BoneSpace)); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPoseableMeshComponent(); \
	public: \
	DECLARE_CLASS(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UPoseableMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPoseableMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPoseableMeshComponent(); \
	public: \
	DECLARE_CLASS(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UPoseableMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPoseableMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPoseableMeshComponent(const UPoseableMeshComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPoseableMeshComponent(const UPoseableMeshComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PoseableMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
