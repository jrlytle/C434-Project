// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNavAvoidanceData;
struct FVector;
class UMovementComponent;
#ifdef ENGINE_AvoidanceManager_generated_h
#error "AvoidanceManager.generated.h already included, missing '#pragma once' in AvoidanceManager.h"
#endif
#define ENGINE_AvoidanceManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocity) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceData,Z_Param_Out_AvoidanceData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocity(Z_Param_Out_AvoidanceData,Z_Param_DeltaTime); \
	} \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityIgnoringUID) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceData,Z_Param_Out_AvoidanceData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IgnoreThisUID); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocityIgnoringUID(Z_Param_Out_AvoidanceData,Z_Param_DeltaTime,Z_Param_IgnoreThisUID); \
	} \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocityForComponent(Z_Param_MovementComp); \
	} \
 \
	DECLARE_FUNCTION(execRegisterMovementComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AvoidanceWeight); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight); \
	} \
 \
	DECLARE_FUNCTION(execGetNewAvoidanceUID) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetNewAvoidanceUID(); \
	} \
 \
	DECLARE_FUNCTION(execGetObjectCount) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetObjectCount(); \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocity) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceData,Z_Param_Out_AvoidanceData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocity(Z_Param_Out_AvoidanceData,Z_Param_DeltaTime); \
	} \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityIgnoringUID) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceData,Z_Param_Out_AvoidanceData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IgnoreThisUID); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocityIgnoringUID(Z_Param_Out_AvoidanceData,Z_Param_DeltaTime,Z_Param_IgnoreThisUID); \
	} \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetAvoidanceVelocityForComponent(Z_Param_MovementComp); \
	} \
 \
	DECLARE_FUNCTION(execRegisterMovementComponent) \
	{ \
		P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AvoidanceWeight); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight); \
	} \
 \
	DECLARE_FUNCTION(execGetNewAvoidanceUID) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetNewAvoidanceUID(); \
	} \
 \
	DECLARE_FUNCTION(execGetObjectCount) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetObjectCount(); \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAvoidanceManager(); \
	public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UAvoidanceManager*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_INCLASS \
	private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAvoidanceManager(); \
	public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UAvoidanceManager*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAvoidanceManager(const UAvoidanceManager& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAvoidanceManager(const UAvoidanceManager& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_75_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_78_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AvoidanceManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
