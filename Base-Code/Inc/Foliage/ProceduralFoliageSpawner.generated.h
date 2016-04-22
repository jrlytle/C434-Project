// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageSpawner_generated_h
#error "ProceduralFoliageSpawner.generated.h already included, missing '#pragma once' in ProceduralFoliageSpawner.h"
#endif
#define FOLIAGE_ProceduralFoliageSpawner_generated_h

#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimulate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSteps); \
		P_FINISH; \
		this->Simulate(Z_Param_NumSteps); \
	}


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimulate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSteps); \
		P_FINISH; \
		this->Simulate(Z_Param_NumSteps); \
	}


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUProceduralFoliageSpawner(); \
	friend FOLIAGE_API class UClass* Z_Construct_UClass_UProceduralFoliageSpawner(); \
	public: \
	DECLARE_CLASS(UProceduralFoliageSpawner, UObject, COMPILED_IN_FLAGS(0), 0, Foliage, NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawner) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UProceduralFoliageSpawner*>(this); }


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUProceduralFoliageSpawner(); \
	friend FOLIAGE_API class UClass* Z_Construct_UClass_UProceduralFoliageSpawner(); \
	public: \
	DECLARE_CLASS(UProceduralFoliageSpawner, UObject, COMPILED_IN_FLAGS(0), 0, Foliage, NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawner) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UProceduralFoliageSpawner*>(this); }


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawner); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UProceduralFoliageSpawner(const UProceduralFoliageSpawner& InCopy); \
public:


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UProceduralFoliageSpawner(const UProceduralFoliageSpawner& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawner)


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_12_PROLOG
#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_INCLASS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralFoliageSpawner."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
