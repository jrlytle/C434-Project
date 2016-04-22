// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTNode_generated_h
#error "BTNode.generated.h already included, missing '#pragma once' in BTNode.h"
#endif
#define AIMODULE_BTNode_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBTNode(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTNode(); \
	public: \
	DECLARE_CLASS(UBTNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTNode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UBTNode*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_INCLASS \
	private: \
	static void StaticRegisterNativesUBTNode(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTNode(); \
	public: \
	DECLARE_CLASS(UBTNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UBTNode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UBTNode*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTNode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTNode(const UBTNode& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBTNode(const UBTNode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_23_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
