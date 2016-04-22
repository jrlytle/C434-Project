// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UGameplayTask_WaitDelay;
#ifdef GAMEPLAYTASKS_GameplayTask_WaitDelay_generated_h
#error "GameplayTask_WaitDelay.generated.h already included, missing '#pragma once' in GameplayTask_WaitDelay.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_WaitDelay_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_12_DELEGATE \
static inline void FTaskDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelayDelegate) \
{ \
	TaskDelayDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}




#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTaskWaitDelay) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time); \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTaskWaitDelay) \
	{ \
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time); \
	}


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameplayTask_WaitDelay(); \
	friend GAMEPLAYTASKS_API class UClass* Z_Construct_UClass_UGameplayTask_WaitDelay(); \
	public: \
	DECLARE_CLASS(UGameplayTask_WaitDelay, UGameplayTask, COMPILED_IN_FLAGS(0), 0, GameplayTasks, GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_WaitDelay) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask_WaitDelay*>(this); }


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUGameplayTask_WaitDelay(); \
	friend GAMEPLAYTASKS_API class UClass* Z_Construct_UClass_UGameplayTask_WaitDelay(); \
	public: \
	DECLARE_CLASS(UGameplayTask_WaitDelay, UGameplayTask, COMPILED_IN_FLAGS(0), 0, GameplayTasks, GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_WaitDelay) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask_WaitDelay*>(this); }


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_WaitDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_WaitDelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_WaitDelay); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(const UGameplayTask_WaitDelay& InCopy); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_WaitDelay(const UGameplayTask_WaitDelay& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_WaitDelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_WaitDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_WaitDelay)


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_7_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS