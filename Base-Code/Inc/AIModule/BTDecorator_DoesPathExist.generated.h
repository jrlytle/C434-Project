// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_DoesPathExist_generated_h
#error "BTDecorator_DoesPathExist.generated.h already included, missing '#pragma once' in BTDecorator_DoesPathExist.h"
#endif
#define AIMODULE_BTDecorator_DoesPathExist_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBTDecorator_DoesPathExist(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist(); \
	public: \
	DECLARE_CLASS(UBTDecorator_DoesPathExist, UBTDecorator, COMPILED_IN_FLAGS(0), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_DoesPathExist) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBTDecorator_DoesPathExist*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_INCLASS \
	private: \
	static void StaticRegisterNativesUBTDecorator_DoesPathExist(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist(); \
	public: \
	DECLARE_CLASS(UBTDecorator_DoesPathExist, UBTDecorator, COMPILED_IN_FLAGS(0), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_DoesPathExist) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBTDecorator_DoesPathExist*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_DoesPathExist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_DoesPathExist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_DoesPathExist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_DoesPathExist); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTDecorator_DoesPathExist(const UBTDecorator_DoesPathExist& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_DoesPathExist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTDecorator_DoesPathExist(const UBTDecorator_DoesPathExist& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_DoesPathExist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_DoesPathExist); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_DoesPathExist)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_24_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTDecorator_DoesPathExist."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h


#define FOREACH_ENUM_EPATHEXISTANCEQUERYTYPE(op) \
	op(EPathExistanceQueryType::NavmeshRaycast2D) \
	op(EPathExistanceQueryType::HierarchicalQuery) \
	op(EPathExistanceQueryType::RegularPathFinding) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS