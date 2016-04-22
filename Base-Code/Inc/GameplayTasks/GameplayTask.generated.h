// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTask_generated_h
#error "GameplayTask.generated.h already included, missing '#pragma once' in GameplayTask.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_36_GENERATED_BODY \
	friend GAMEPLAYTASKS_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_140_DELEGATE \
static inline void FGenericGameplayTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& GenericGameplayTaskDelegate) \
{ \
	GenericGameplayTaskDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}




#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask) \
	{ \
		P_FINISH; \
		this->EndTask(); \
	} \
 \
	DECLARE_FUNCTION(execReadyForActivation) \
	{ \
		P_FINISH; \
		this->ReadyForActivation(); \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask) \
	{ \
		P_FINISH; \
		this->EndTask(); \
	} \
 \
	DECLARE_FUNCTION(execReadyForActivation) \
	{ \
		P_FINISH; \
		this->ReadyForActivation(); \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend GAMEPLAYTASKS_API class UClass* Z_Construct_UClass_UGameplayTask(); \
	public: \
	DECLARE_CLASS(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, GameplayTasks, NO_API) \
	DECLARE_SERIALIZER(UGameplayTask) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UGameplayTask*>(this); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_INCLASS \
	private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend GAMEPLAYTASKS_API class UClass* Z_Construct_UClass_UGameplayTask(); \
	public: \
	DECLARE_CLASS(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, GameplayTasks, NO_API) \
	DECLARE_SERIALIZER(UGameplayTask) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UGameplayTask*>(this); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayTask(const UGameplayTask& InCopy); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGameplayTask(const UGameplayTask& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask)


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_133_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h


#define FOREACH_ENUM_ETASKRESOURCEOVERLAPPOLICY(op) \
	op(ETaskResourceOverlapPolicy::StartOnTop) \
	op(ETaskResourceOverlapPolicy::StartAtEnd) 
#define FOREACH_ENUM_EGAMEPLAYTASKSTATE(op) \
	op(EGameplayTaskState::Uninitialized) \
	op(EGameplayTaskState::AwaitingActivation) \
	op(EGameplayTaskState::Paused) \
	op(EGameplayTaskState::Active) \
	op(EGameplayTaskState::Finished) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS