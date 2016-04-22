// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_generated_h
#error "K2Node.generated.h already included, missing '#pragma once' in K2Node.h"
#endif
#define BLUEPRINTGRAPH_K2Node_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_16_GENERATED_BODY \
	friend BLUEPRINTGRAPH_API class UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty(); \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUK2Node(); \
	friend BLUEPRINTGRAPH_API class UClass* Z_Construct_UClass_UK2Node(); \
	public: \
	DECLARE_CLASS(UK2Node, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), 0, BlueprintGraph, BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node*>(this); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_INCLASS \
	private: \
	static void StaticRegisterNativesUK2Node(); \
	friend BLUEPRINTGRAPH_API class UClass* Z_Construct_UClass_UK2Node(); \
	public: \
	DECLARE_CLASS(UK2Node, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), 0, BlueprintGraph, BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node*>(this); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node); \
private: \
	/** Private copy-constructor, should never be used */ \
	BLUEPRINTGRAPH_API UK2Node(const UK2Node& InCopy); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	BLUEPRINTGRAPH_API UK2Node(const UK2Node& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_95_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_98_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS