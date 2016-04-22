// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTree_generated_h
#error "EdGraphSchema_BehaviorTree.generated.h already included, missing '#pragma once' in EdGraphSchema_BehaviorTree.h"
#endif
#define BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTree_generated_h

#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_12_GENERATED_BODY \
	friend BEHAVIORTREEEDITOR_API class UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange(); \
	BEHAVIORTREEEDITOR_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_RPC_WRAPPERS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEdGraphSchema_BehaviorTree(); \
	friend BEHAVIORTREEEDITOR_API class UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree(); \
	public: \
	DECLARE_CLASS(UEdGraphSchema_BehaviorTree, UAIGraphSchema, COMPILED_IN_FLAGS(0), 0, BehaviorTreeEditor, BEHAVIORTREEEDITOR_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_BehaviorTree) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEdGraphSchema_BehaviorTree*>(this); }


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_INCLASS \
	private: \
	static void StaticRegisterNativesUEdGraphSchema_BehaviorTree(); \
	friend BEHAVIORTREEEDITOR_API class UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree(); \
	public: \
	DECLARE_CLASS(UEdGraphSchema_BehaviorTree, UAIGraphSchema, COMPILED_IN_FLAGS(0), 0, BehaviorTreeEditor, BEHAVIORTREEEDITOR_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_BehaviorTree) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEdGraphSchema_BehaviorTree*>(this); }


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UEdGraphSchema_BehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_BehaviorTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UEdGraphSchema_BehaviorTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_BehaviorTree); \
private: \
	/** Private copy-constructor, should never be used */ \
	BEHAVIORTREEEDITOR_API UEdGraphSchema_BehaviorTree(const UEdGraphSchema_BehaviorTree& InCopy); \
public:


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BEHAVIORTREEEDITOR_API UEdGraphSchema_BehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	BEHAVIORTREEEDITOR_API UEdGraphSchema_BehaviorTree(const UEdGraphSchema_BehaviorTree& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BEHAVIORTREEEDITOR_API, UEdGraphSchema_BehaviorTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_BehaviorTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_BehaviorTree)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_26_PROLOG
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_RPC_WRAPPERS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_INCLASS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphSchema_BehaviorTree."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
