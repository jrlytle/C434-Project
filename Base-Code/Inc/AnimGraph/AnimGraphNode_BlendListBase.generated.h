// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_BlendListBase_generated_h
#error "AnimGraphNode_BlendListBase.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendListBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendListBase_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListBase(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_BlendListBase(); \
	public: \
	DECLARE_CLASS(UAnimGraphNode_BlendListBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_BlendListBase*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListBase(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_BlendListBase(); \
	public: \
	DECLARE_CLASS(UAnimGraphNode_BlendListBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_BlendListBase*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListBase(const UAnimGraphNode_BlendListBase& InCopy); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListBase(const UAnimGraphNode_BlendListBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListBase)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_7_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_BlendListBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_BlendListBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
