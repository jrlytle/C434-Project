// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class APawn;
#ifdef ENGINE_PawnMovementComponent_generated_h
#error "PawnMovementComponent.generated.h already included, missing '#pragma once' in PawnMovementComponent.h"
#endif
#define ENGINE_PawnMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->K2_GetInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		*(APawn**)Z_Param__Result=this->GetPawnOwner(); \
	} \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsMoveInputIgnored(); \
	} \
 \
	DECLARE_FUNCTION(execConsumeInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->ConsumeInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execGetLastInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetLastInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execGetPendingInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetPendingInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execAddInputVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldVector); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		this->AddInputVector(Z_Param_WorldVector,Z_Param_bForce); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->K2_GetInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		*(APawn**)Z_Param__Result=this->GetPawnOwner(); \
	} \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsMoveInputIgnored(); \
	} \
 \
	DECLARE_FUNCTION(execConsumeInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->ConsumeInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execGetLastInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetLastInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execGetPendingInputVector) \
	{ \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetPendingInputVector(); \
	} \
 \
	DECLARE_FUNCTION(execAddInputVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldVector); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		this->AddInputVector(Z_Param_WorldVector,Z_Param_bForce); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPawnMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent(); \
	public: \
	DECLARE_CLASS(UPawnMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UPawnMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPawnMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesUPawnMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent(); \
	public: \
	DECLARE_CLASS(UPawnMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UPawnMovementComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPawnMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovementComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPawnMovementComponent(const UPawnMovementComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPawnMovementComponent(const UPawnMovementComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS