// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphNode_generated_h
#error "EdGraphNode.generated.h already included, missing '#pragma once' in EdGraphNode.h"
#endif
#define ENGINE_EdGraphNode_generated_h

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEdGraphNode(); \
	public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UEdGraphNode*>(this); }


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_INCLASS \
	private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEdGraphNode(); \
	public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UEdGraphNode*>(this); }


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEdGraphNode(const UEdGraphNode& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEdGraphNode(const UEdGraphNode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_86_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h


#define FOREACH_ENUM_ENODEADVANCEDPINS(op) \
	op(ENodeAdvancedPins::NoPins) \
	op(ENodeAdvancedPins::Shown) \
	op(ENodeAdvancedPins::Hidden) 
#define FOREACH_ENUM_ENODETITLETYPE(op) \
	op(ENodeTitleType::FullTitle) \
	op(ENodeTitleType::ListView) \
	op(ENodeTitleType::EditableTitle) \
	op(ENodeTitleType::MenuTitle) \
	op(ENodeTitleType::MAX_TitleTypes) 
#define FOREACH_ENUM_EEDGRAPHPINDIRECTION(op) \
	op(EGPD_Input) \
	op(EGPD_Output) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
