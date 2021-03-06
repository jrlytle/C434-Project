// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_Blackboard_generated_h
#error "BTDecorator_Blackboard.generated.h already included, missing '#pragma once' in BTDecorator_Blackboard.h"
#endif
#define AIMODULE_BTDecorator_Blackboard_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBTDecorator_Blackboard(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTDecorator_Blackboard(); \
	public: \
	DECLARE_CLASS(UBTDecorator_Blackboard, UBTDecorator_BlackboardBase, COMPILED_IN_FLAGS(0), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_Blackboard) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBTDecorator_Blackboard*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_INCLASS \
	private: \
	static void StaticRegisterNativesUBTDecorator_Blackboard(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTDecorator_Blackboard(); \
	public: \
	DECLARE_CLASS(UBTDecorator_Blackboard, UBTDecorator_BlackboardBase, COMPILED_IN_FLAGS(0), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_Blackboard) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBTDecorator_Blackboard*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_Blackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_Blackboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_Blackboard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_Blackboard); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTDecorator_Blackboard(const UBTDecorator_Blackboard& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_Blackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTDecorator_Blackboard(const UBTDecorator_Blackboard& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_Blackboard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_Blackboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_Blackboard)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_31_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTDecorator_Blackboard."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h


#define FOREACH_ENUM_EBTBLACKBOARDRESTART(op) \
	op(EBTBlackboardRestart::ValueChange) \
	op(EBTBlackboardRestart::ResultChange) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
