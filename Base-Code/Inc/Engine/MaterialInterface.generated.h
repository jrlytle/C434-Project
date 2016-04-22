// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicalMaterial;
class UMaterial;
#ifdef ENGINE_MaterialInterface_generated_h
#error "MaterialInterface.generated.h already included, missing '#pragma once' in MaterialInterface.h"
#endif
#define ENGINE_MaterialInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_111_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_36_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialRelevance(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPhysicalMaterial) \
	{ \
		P_FINISH; \
		*(UPhysicalMaterial**)Z_Param__Result=this->GetPhysicalMaterial(); \
	} \
 \
	DECLARE_FUNCTION(execGetBaseMaterial) \
	{ \
		P_FINISH; \
		*(UMaterial**)Z_Param__Result=this->GetBaseMaterial(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPhysicalMaterial) \
	{ \
		P_FINISH; \
		*(UPhysicalMaterial**)Z_Param__Result=this->GetPhysicalMaterial(); \
	} \
 \
	DECLARE_FUNCTION(execGetBaseMaterial) \
	{ \
		P_FINISH; \
		*(UMaterial**)Z_Param__Result=this->GetBaseMaterial(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface(); \
	public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UMaterialInterface*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface(); \
	public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UMaterialInterface*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UMaterialInterface(const UMaterialInterface& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UMaterialInterface(const UMaterialInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_161_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_164_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h


#define FOREACH_ENUM_EMATERIALUSAGE(op) \
	op(MATUSAGE_SkeletalMesh) \
	op(MATUSAGE_ParticleSprites) \
	op(MATUSAGE_BeamTrails) \
	op(MATUSAGE_MeshParticles) \
	op(MATUSAGE_StaticLighting) \
	op(MATUSAGE_MorphTargets) \
	op(MATUSAGE_SplineMesh) \
	op(MATUSAGE_Landscape) \
	op(MATUSAGE_InstancedStaticMeshes) \
	op(MATUSAGE_Clothing) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
