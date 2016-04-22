// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
class AActor;
class APawn;
struct FRotator;
struct FVector;
class APlayerController;
#ifdef ENGINE_Controller_generated_h
#error "Controller.generated.h already included, missing '#pragma once' in Controller.h"
#endif
#define ENGINE_Controller_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_11_DELEGATE \
struct _Script_Engine_eventInstigatedAnyDamageSignature_Parms \
{ \
	float Damage; \
	const UDamageType* DamageType; \
	AActor* DamagedActor; \
	AActor* DamageCauser; \
}; \
static inline void FInstigatedAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstigatedAnyDamageSignature, float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) \
{ \
	_Script_Engine_eventInstigatedAnyDamageSignature_Parms Parms; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.DamagedActor=DamagedActor; \
	Parms.DamageCauser=DamageCauser; \
	InstigatedAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_RPC_WRAPPERS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		this->StopMovement(); \
	} \
 \
	DECLARE_FUNCTION(execUnPossess) \
	{ \
		P_FINISH; \
		this->UnPossess(); \
	} \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		this->Possess(Z_Param_InPawn); \
	} \
 \
	DECLARE_FUNCTION(execIsLocalController) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsLocalController(); \
	} \
 \
	DECLARE_FUNCTION(execIsLocalPlayerController) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsLocalPlayerController(); \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotation) \
	{ \
		P_FINISH; \
		*(FRotator*)Z_Param__Result=this->GetDesiredRotation(); \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		*(AActor**)Z_Param__Result=this->GetViewTarget(); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetPawn) \
	{ \
		P_FINISH; \
		*(APawn**)Z_Param__Result=this->K2_GetPawn(); \
	} \
 \
	DECLARE_FUNCTION(execClientSetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bResetCamera); \
		P_FINISH; \
		this->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera); \
	} \
 \
	DECLARE_FUNCTION(execClientSetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		this->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation); \
	} \
 \
	DECLARE_FUNCTION(execCastToPlayerController) \
	{ \
		P_FINISH; \
		*(APlayerController**)Z_Param__Result=this->CastToPlayerController(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerState) \
	{ \
		P_FINISH; \
		this->OnRep_PlayerState(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pawn) \
	{ \
		P_FINISH; \
		this->OnRep_Pawn(); \
	} \
 \
	DECLARE_FUNCTION(execLineOfSightTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_ViewPoint); \
		P_GET_UBOOL(Z_Param_bAlternateChecks); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks); \
	} \
 \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		this->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation); \
	} \
 \
	DECLARE_FUNCTION(execSetControlRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		this->SetControlRotation(Z_Param_Out_NewRotation); \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		*(FRotator*)Z_Param__Result=this->GetControlRotation(); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		this->StopMovement(); \
	} \
 \
	DECLARE_FUNCTION(execUnPossess) \
	{ \
		P_FINISH; \
		this->UnPossess(); \
	} \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		this->Possess(Z_Param_InPawn); \
	} \
 \
	DECLARE_FUNCTION(execIsLocalController) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsLocalController(); \
	} \
 \
	DECLARE_FUNCTION(execIsLocalPlayerController) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsLocalPlayerController(); \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotation) \
	{ \
		P_FINISH; \
		*(FRotator*)Z_Param__Result=this->GetDesiredRotation(); \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		*(AActor**)Z_Param__Result=this->GetViewTarget(); \
	} \
 \
	DECLARE_FUNCTION(execK2_GetPawn) \
	{ \
		P_FINISH; \
		*(APawn**)Z_Param__Result=this->K2_GetPawn(); \
	} \
 \
	DECLARE_FUNCTION(execClientSetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bResetCamera); \
		P_FINISH; \
		this->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera); \
	} \
 \
	DECLARE_FUNCTION(execClientSetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		this->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation); \
	} \
 \
	DECLARE_FUNCTION(execCastToPlayerController) \
	{ \
		P_FINISH; \
		*(APlayerController**)Z_Param__Result=this->CastToPlayerController(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerState) \
	{ \
		P_FINISH; \
		this->OnRep_PlayerState(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pawn) \
	{ \
		P_FINISH; \
		this->OnRep_Pawn(); \
	} \
 \
	DECLARE_FUNCTION(execLineOfSightTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_ViewPoint); \
		P_GET_UBOOL(Z_Param_bAlternateChecks); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks); \
	} \
 \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		this->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation); \
	} \
 \
	DECLARE_FUNCTION(execSetControlRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		this->SetControlRotation(Z_Param_Out_NewRotation); \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		*(FRotator*)Z_Param__Result=this->GetControlRotation(); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_EVENT_PARMS \
	struct Controller_eventClientSetLocation_Parms \
	{ \
		FVector NewLocation; \
		FRotator NewRotation; \
	}; \
	struct Controller_eventClientSetRotation_Parms \
	{ \
		FRotator NewRotation; \
		bool bResetCamera; \
	}; \
	struct Controller_eventReceiveInstigatedAnyDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		AActor* DamagedActor; \
		AActor* DamageCauser; \
	};


extern ENGINE_API  FName ENGINE_ClientSetLocation;
extern ENGINE_API  FName ENGINE_ClientSetRotation;
extern ENGINE_API  FName ENGINE_ReceiveInstigatedAnyDamage;
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAController(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AController(); \
	public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(AController) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_INCLASS \
	private: \
	static void StaticRegisterNativesAController(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AController(); \
	public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(AController) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AController(const AController& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AController(const AController& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_32_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Controller."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS