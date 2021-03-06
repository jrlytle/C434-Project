// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraph_generated_h
#error "EnvironmentQueryGraph.generated.h already included, missing '#pragma once' in EnvironmentQueryGraph.h"
#endif
#define ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraph_generated_h

#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEnvironmentQueryGraph(); \
	friend ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraph(); \
	public: \
	DECLARE_CLASS(UEnvironmentQueryGraph, UAIGraph, COMPILED_IN_FLAGS(0), 0, EnvironmentQueryEditor, NO_API) \
	DECLARE_SERIALIZER(UEnvironmentQueryGraph) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEnvironmentQueryGraph*>(this); }


#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUEnvironmentQueryGraph(); \
	friend ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraph(); \
	public: \
	DECLARE_CLASS(UEnvironmentQueryGraph, UAIGraph, COMPILED_IN_FLAGS(0), 0, EnvironmentQueryEditor, NO_API) \
	DECLARE_SERIALIZER(UEnvironmentQueryGraph) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEnvironmentQueryGraph*>(this); }


#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryGraph); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEnvironmentQueryGraph(const UEnvironmentQueryGraph& InCopy); \
public:


#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEnvironmentQueryGraph(const UEnvironmentQueryGraph& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryGraph)


#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_11_PROLOG
#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_INCLASS \
	Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvironmentQueryGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_EnvironmentQueryEditor_Classes_EnvironmentQueryGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
