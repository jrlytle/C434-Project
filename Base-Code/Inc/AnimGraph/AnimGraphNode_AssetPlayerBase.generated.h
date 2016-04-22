// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_AssetPlayerBase_generated_h
#error "AnimGraphNode_AssetPlayerBase.generated.h already included, missing '#pragma once' in AnimGraphNode_AssetPlayerBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_AssetPlayerBase_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimGraphNode_AssetPlayerBase(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase(); \
	public: \
	DECLARE_CLASS(UAnimGraphNode_AssetPlayerBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_AssetPlayerBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_AssetPlayerBase*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimGraphNode_AssetPlayerBase(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase(); \
	public: \
	DECLARE_CLASS(UAnimGraphNode_AssetPlayerBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_AssetPlayerBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_AssetPlayerBase*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_AssetPlayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_AssetPlayerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_AssetPlayerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_AssetPlayerBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_AssetPlayerBase(const UAnimGraphNode_AssetPlayerBase& InCopy); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_AssetPlayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_AssetPlayerBase(const UAnimGraphNode_AssetPlayerBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_AssetPlayerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_AssetPlayerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_AssetPlayerBase)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_11_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_AssetPlayerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS