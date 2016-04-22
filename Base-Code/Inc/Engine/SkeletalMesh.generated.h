// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshSocket;
#ifdef ENGINE_SkeletalMesh_generated_h
#error "SkeletalMesh.generated.h already included, missing '#pragma once' in SkeletalMesh.h"
#endif
#define ENGINE_SkeletalMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_501_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_450_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_410_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_329_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetMap(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_288_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_167_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_129_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneReference(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_105_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTriangleSortSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_82_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_60_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSectionIndex); \
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections); \
	} \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->FindSocket(Z_Param_InSocketName); \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSectionIndex); \
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections); \
	} \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->FindSocket(Z_Param_InSocketName); \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMesh(); \
	public: \
	DECLARE_CLASS(USkeletalMesh, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_INCLASS \
	private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMesh(); \
	public: \
	DECLARE_CLASS(USkeletalMesh, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USkeletalMesh(const USkeletalMesh& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USkeletalMesh(const USkeletalMesh& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_538_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_541_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h


#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONTYPE(op) \
	op(SMOT_NumOfTriangles) \
	op(SMOT_MaxDeviation) 
#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONIMPORTANCE(op) \
	op(SMOI_Off) \
	op(SMOI_Lowest) \
	op(SMOI_Low) \
	op(SMOI_Normal) \
	op(SMOI_High) \
	op(SMOI_Highest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
