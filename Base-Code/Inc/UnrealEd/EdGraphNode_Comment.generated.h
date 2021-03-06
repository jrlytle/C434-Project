// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EdGraphNode_Comment_generated_h
#error "EdGraphNode_Comment.generated.h already included, missing '#pragma once' in EdGraphNode_Comment.h"
#endif
#define UNREALED_EdGraphNode_Comment_generated_h

#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UEdGraphNode_Comment(); \
	public: \
	DECLARE_CLASS(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEdGraphNode_Comment*>(this); }


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_INCLASS \
	private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UEdGraphNode_Comment(); \
	public: \
	DECLARE_CLASS(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEdGraphNode_Comment*>(this); }


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEdGraphNode_Comment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UEdGraphNode_Comment(const UEdGraphNode_Comment& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UEdGraphNode_Comment(const UEdGraphNode_Comment& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment)


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_23_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h


#define FOREACH_ENUM_ECOMMENTBOXMODE(op) \
	op(ECommentBoxMode::GroupMovement) \
	op(ECommentBoxMode::NoGroupMovement) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
