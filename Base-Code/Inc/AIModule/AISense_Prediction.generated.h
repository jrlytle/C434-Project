// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AActor;
class AAIController;
#ifdef AIMODULE_AISense_Prediction_generated_h
#error "AISense_Prediction.generated.h already included, missing '#pragma once' in AISense_Prediction.h"
#endif
#define AIMODULE_AISense_Prediction_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_14_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPawnPredictionEvent) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Requestor); \
		P_GET_OBJECT(AActor,Z_Param_PredictedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PredictionTime); \
		P_FINISH; \
		UAISense_Prediction::RequestPawnPredictionEvent(Z_Param_Requestor,Z_Param_PredictedActor,Z_Param_PredictionTime); \
	} \
 \
	DECLARE_FUNCTION(execRequestControllerPredictionEvent) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Requestor); \
		P_GET_OBJECT(AActor,Z_Param_PredictedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PredictionTime); \
		P_FINISH; \
		UAISense_Prediction::RequestControllerPredictionEvent(Z_Param_Requestor,Z_Param_PredictedActor,Z_Param_PredictionTime); \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPawnPredictionEvent) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Requestor); \
		P_GET_OBJECT(AActor,Z_Param_PredictedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PredictionTime); \
		P_FINISH; \
		UAISense_Prediction::RequestPawnPredictionEvent(Z_Param_Requestor,Z_Param_PredictedActor,Z_Param_PredictionTime); \
	} \
 \
	DECLARE_FUNCTION(execRequestControllerPredictionEvent) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Requestor); \
		P_GET_OBJECT(AActor,Z_Param_PredictedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PredictionTime); \
		P_FINISH; \
		UAISense_Prediction::RequestControllerPredictionEvent(Z_Param_Requestor,Z_Param_PredictedActor,Z_Param_PredictionTime); \
	}


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAISense_Prediction(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAISense_Prediction(); \
	public: \
	DECLARE_CLASS(UAISense_Prediction, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAISense_Prediction) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAISense_Prediction*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_INCLASS \
	private: \
	static void StaticRegisterNativesUAISense_Prediction(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAISense_Prediction(); \
	public: \
	DECLARE_CLASS(UAISense_Prediction, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAISense_Prediction) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAISense_Prediction*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Prediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Prediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Prediction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Prediction); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAISense_Prediction(const UAISense_Prediction& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Prediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAISense_Prediction(const UAISense_Prediction& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Prediction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Prediction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Prediction)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_34_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Prediction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
