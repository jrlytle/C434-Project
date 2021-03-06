// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REFERENCEVIEWER_EdGraph_ReferenceViewer_generated_h
#error "EdGraph_ReferenceViewer.generated.h already included, missing '#pragma once' in EdGraph_ReferenceViewer.h"
#endif
#define REFERENCEVIEWER_EdGraph_ReferenceViewer_generated_h

#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_RPC_WRAPPERS
#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEdGraph_ReferenceViewer(); \
	friend REFERENCEVIEWER_API class UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer(); \
	public: \
	DECLARE_CLASS(UEdGraph_ReferenceViewer, UEdGraph, COMPILED_IN_FLAGS(0), 0, ReferenceViewer, NO_API) \
	DECLARE_SERIALIZER(UEdGraph_ReferenceViewer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEdGraph_ReferenceViewer*>(this); }


#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUEdGraph_ReferenceViewer(); \
	friend REFERENCEVIEWER_API class UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer(); \
	public: \
	DECLARE_CLASS(UEdGraph_ReferenceViewer, UEdGraph, COMPILED_IN_FLAGS(0), 0, ReferenceViewer, NO_API) \
	DECLARE_SERIALIZER(UEdGraph_ReferenceViewer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEdGraph_ReferenceViewer*>(this); }


#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraph_ReferenceViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph_ReferenceViewer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraph_ReferenceViewer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph_ReferenceViewer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEdGraph_ReferenceViewer(const UEdGraph_ReferenceViewer& InCopy); \
public:


#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraph_ReferenceViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEdGraph_ReferenceViewer(const UEdGraph_ReferenceViewer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraph_ReferenceViewer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph_ReferenceViewer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph_ReferenceViewer)


#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_7_PROLOG
#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_RPC_WRAPPERS \
	Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_INCLASS \
	Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraph_ReferenceViewer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ReferenceViewer_Classes_EdGraph_ReferenceViewer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
