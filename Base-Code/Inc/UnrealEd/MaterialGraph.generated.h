// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialGraph_generated_h
#error "MaterialGraph.generated.h already included, missing '#pragma once' in MaterialGraph.h"
#endif
#define UNREALED_MaterialGraph_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialGraph(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UMaterialGraph(); \
	public: \
	DECLARE_CLASS(UMaterialGraph, UEdGraph, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UMaterialGraph) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialGraph*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialGraph(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UMaterialGraph(); \
	public: \
	DECLARE_CLASS(UMaterialGraph, UEdGraph, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UMaterialGraph) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialGraph*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraph); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialGraph(const UMaterialGraph& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialGraph(const UMaterialGraph& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraph)


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_79_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_82_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
