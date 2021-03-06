// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateConduitNode_generated_h
#error "AnimStateConduitNode.generated.h already included, missing '#pragma once' in AnimStateConduitNode.h"
#endif
#define ANIMGRAPH_AnimStateConduitNode_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimStateConduitNode(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimStateConduitNode(); \
	public: \
	DECLARE_CLASS(UAnimStateConduitNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateConduitNode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimStateConduitNode*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimStateConduitNode(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimStateConduitNode(); \
	public: \
	DECLARE_CLASS(UAnimStateConduitNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateConduitNode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimStateConduitNode*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateConduitNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateConduitNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateConduitNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateConduitNode); \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimStateConduitNode(const UAnimStateConduitNode& InCopy); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateConduitNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimStateConduitNode(const UAnimStateConduitNode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateConduitNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateConduitNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateConduitNode)


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_7_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateConduitNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimStateConduitNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
