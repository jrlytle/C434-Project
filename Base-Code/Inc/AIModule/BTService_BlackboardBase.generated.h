// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTService_BlackboardBase_generated_h
#error "BTService_BlackboardBase.generated.h already included, missing '#pragma once' in BTService_BlackboardBase.h"
#endif
#define AIMODULE_BTService_BlackboardBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBTService_BlackboardBase(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTService_BlackboardBase(); \
	public: \
	DECLARE_CLASS(UBTService_BlackboardBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTService_BlackboardBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBTService_BlackboardBase*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesUBTService_BlackboardBase(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTService_BlackboardBase(); \
	public: \
	DECLARE_CLASS(UBTService_BlackboardBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTService_BlackboardBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBTService_BlackboardBase*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlackboardBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_BlackboardBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlackboardBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTService_BlackboardBase(const UBTService_BlackboardBase& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTService_BlackboardBase(const UBTService_BlackboardBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_BlackboardBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlackboardBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_6_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTService_BlackboardBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
