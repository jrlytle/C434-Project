// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HierarchicalInstancedStaticMeshComponent_generated_h
#error "HierarchicalInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in HierarchicalInstancedStaticMeshComponent.h"
#endif
#define ENGINE_HierarchicalInstancedStaticMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FClusterNode(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveInstances) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InstancesToRemove); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->RemoveInstances(Z_Param_Out_InstancesToRemove); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveInstances) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InstancesToRemove); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->RemoveInstances(Z_Param_Out_InstancesToRemove); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent(); \
	public: \
	DECLARE_CLASS(UHierarchicalInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UHierarchicalInstancedStaticMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_INCLASS \
	private: \
	static void StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent(); \
	public: \
	DECLARE_CLASS(UHierarchicalInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UHierarchicalInstancedStaticMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalInstancedStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalInstancedStaticMeshComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(const UHierarchicalInstancedStaticMeshComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(const UHierarchicalInstancedStaticMeshComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalInstancedStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_76_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HierarchicalInstancedStaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
