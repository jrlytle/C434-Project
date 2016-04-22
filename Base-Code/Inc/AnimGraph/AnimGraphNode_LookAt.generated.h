// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_LookAt_generated_h
#error "AnimGraphNode_LookAt.generated.h already included, missing '#pragma once' in AnimGraphNode_LookAt.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LookAt_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimGraphNode_LookAt(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_LookAt(); \
	public: \
	DECLARE_CLASS(UAnimGraphNode_LookAt, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LookAt) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_LookAt*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimGraphNode_LookAt(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_LookAt(); \
	public: \
	DECLARE_CLASS(UAnimGraphNode_LookAt, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LookAt) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_LookAt*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LookAt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LookAt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LookAt); \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const UAnimGraphNode_LookAt& InCopy); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const UAnimGraphNode_LookAt& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LookAt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LookAt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LookAt)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_10_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_LookAt."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_LookAt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS