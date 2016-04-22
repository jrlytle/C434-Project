// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MatineeActor_generated_h
#error "MatineeActor.generated.h already included, missing '#pragma once' in MatineeActor.h"
#endif
#define ENGINE_MatineeActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_42_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInterpGroupActorInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_19_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraCutInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_12_DELEGATE \
static inline void FOnMatineeEvent_DelegateWrapper(const FScriptDelegate& OnMatineeEvent) \
{ \
	OnMatineeEvent.ProcessDelegate<UObject>(NULL); \
}




#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLoopingState) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		this->SetLoopingState(Z_Param_bNewLooping); \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		this->ChangePlaybackDirection(); \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bJump); \
		P_FINISH; \
		this->SetPosition(Z_Param_NewPosition,Z_Param_bJump); \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		this->Pause(); \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		this->Reverse(); \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		this->Stop(); \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		this->Play(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLoopingState) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		this->SetLoopingState(Z_Param_bNewLooping); \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		this->ChangePlaybackDirection(); \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bJump); \
		P_FINISH; \
		this->SetPosition(Z_Param_NewPosition,Z_Param_bJump); \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		this->Pause(); \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		this->Reverse(); \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		this->Stop(); \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		this->Play(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMatineeActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AMatineeActor(); \
	public: \
	DECLARE_CLASS(AMatineeActor, AActor, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(AMatineeActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMatineeActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_INCLASS \
	private: \
	static void StaticRegisterNativesAMatineeActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AMatineeActor(); \
	public: \
	DECLARE_CLASS(AMatineeActor, AActor, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(AMatineeActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMatineeActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMatineeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatineeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMatineeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatineeActor); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API AMatineeActor(const AMatineeActor& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMatineeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API AMatineeActor(const AMatineeActor& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMatineeActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatineeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatineeActor)


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_52_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
