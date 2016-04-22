// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef ENGINE_PawnNoiseEmitterComponent_generated_h
#error "PawnNoiseEmitterComponent.generated.h already included, missing '#pragma once' in PawnNoiseEmitterComponent.h"
#endif
#define ENGINE_PawnNoiseEmitterComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeNoise) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NoiseLocation); \
		P_FINISH; \
		this->MakeNoise(Z_Param_NoiseMaker,Z_Param_Loudness,Z_Param_Out_NoiseLocation); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeNoise) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Loudness); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NoiseLocation); \
		P_FINISH; \
		this->MakeNoise(Z_Param_NoiseMaker,Z_Param_Loudness,Z_Param_Out_NoiseLocation); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPawnNoiseEmitterComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent(); \
	public: \
	DECLARE_CLASS(UPawnNoiseEmitterComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UPawnNoiseEmitterComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPawnNoiseEmitterComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUPawnNoiseEmitterComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent(); \
	public: \
	DECLARE_CLASS(UPawnNoiseEmitterComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UPawnNoiseEmitterComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPawnNoiseEmitterComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnNoiseEmitterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnNoiseEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnNoiseEmitterComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPawnNoiseEmitterComponent(const UPawnNoiseEmitterComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPawnNoiseEmitterComponent(const UPawnNoiseEmitterComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnNoiseEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnNoiseEmitterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnNoiseEmitterComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnNoiseEmitterComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS