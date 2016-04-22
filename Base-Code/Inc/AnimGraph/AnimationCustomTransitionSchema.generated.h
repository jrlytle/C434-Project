// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationCustomTransitionSchema_generated_h
#error "AnimationCustomTransitionSchema.generated.h already included, missing '#pragma once' in AnimationCustomTransitionSchema.h"
#endif
#define ANIMGRAPH_AnimationCustomTransitionSchema_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimationCustomTransitionSchema(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema(); \
	public: \
	DECLARE_CLASS(UAnimationCustomTransitionSchema, UAnimationGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationCustomTransitionSchema) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationCustomTransitionSchema*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimationCustomTransitionSchema(); \
	friend ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema(); \
	public: \
	DECLARE_CLASS(UAnimationCustomTransitionSchema, UAnimationGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, AnimGraph, ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationCustomTransitionSchema) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationCustomTransitionSchema*>(this); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationCustomTransitionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCustomTransitionSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationCustomTransitionSchema); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCustomTransitionSchema); \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimationCustomTransitionSchema(const UAnimationCustomTransitionSchema& InCopy); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationCustomTransitionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ANIMGRAPH_API UAnimationCustomTransitionSchema(const UAnimationCustomTransitionSchema& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationCustomTransitionSchema); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCustomTransitionSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCustomTransitionSchema)


#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_7_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationCustomTransitionSchema."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimationCustomTransitionSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
