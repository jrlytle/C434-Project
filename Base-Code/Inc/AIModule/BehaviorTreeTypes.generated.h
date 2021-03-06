// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTreeTypes_generated_h
#error "BehaviorTreeTypes.generated.h already included, missing '#pragma once' in BehaviorTreeTypes.h"
#endif
#define AIMODULE_BehaviorTreeTypes_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_436_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBehaviorTreeTypes(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBehaviorTreeTypes(); \
	public: \
	DECLARE_CLASS(UBehaviorTreeTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeTypes) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UBehaviorTreeTypes*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_INCLASS \
	private: \
	static void StaticRegisterNativesUBehaviorTreeTypes(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBehaviorTreeTypes(); \
	public: \
	DECLARE_CLASS(UBehaviorTreeTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeTypes) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UBehaviorTreeTypes*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeTypes); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBehaviorTreeTypes(const UBehaviorTreeTypes& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBehaviorTreeTypes(const UBehaviorTreeTypes& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeTypes)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_520_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h


#define FOREACH_ENUM_EBTFLOWABORTMODE(op) \
	op(EBTFlowAbortMode::None) \
	op(EBTFlowAbortMode::LowerPriority) \
	op(EBTFlowAbortMode::Self) \
	op(EBTFlowAbortMode::Both) 
#define FOREACH_ENUM_EBTNODERESULT(op) \
	op(EBTNodeResult::Succeeded) \
	op(EBTNodeResult::Failed) \
	op(EBTNodeResult::Aborted) \
	op(EBTNodeResult::InProgress) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
