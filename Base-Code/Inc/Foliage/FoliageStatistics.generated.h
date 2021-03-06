// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UStaticMesh;
struct FBox;
struct FVector;
#ifdef FOLIAGE_FoliageStatistics_generated_h
#error "FoliageStatistics.generated.h already included, missing '#pragma once' in FoliageStatistics.h"
#endif
#define FOLIAGE_FoliageStatistics_generated_h

#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFoliageOverlappingBoxCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FBox,Z_Param_Box); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingBoxCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Box); \
	} \
 \
	DECLARE_FUNCTION(execFoliageOverlappingSphereCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_CenterPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius); \
	}


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFoliageOverlappingBoxCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FBox,Z_Param_Box); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingBoxCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Box); \
	} \
 \
	DECLARE_FUNCTION(execFoliageOverlappingSphereCount) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_CenterPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius); \
	}


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFoliageStatistics(); \
	friend FOLIAGE_API class UClass* Z_Construct_UClass_UFoliageStatistics(); \
	public: \
	DECLARE_CLASS(UFoliageStatistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, Foliage, NO_API) \
	DECLARE_SERIALIZER(UFoliageStatistics) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFoliageStatistics*>(this); }


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUFoliageStatistics(); \
	friend FOLIAGE_API class UClass* Z_Construct_UClass_UFoliageStatistics(); \
	public: \
	DECLARE_CLASS(UFoliageStatistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, Foliage, NO_API) \
	DECLARE_SERIALIZER(UFoliageStatistics) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFoliageStatistics*>(this); }


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageStatistics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageStatistics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageStatistics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageStatistics); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFoliageStatistics(const UFoliageStatistics& InCopy); \
public:


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageStatistics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFoliageStatistics(const UFoliageStatistics& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageStatistics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageStatistics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageStatistics)


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_7_PROLOG
#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_INCLASS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageStatistics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
