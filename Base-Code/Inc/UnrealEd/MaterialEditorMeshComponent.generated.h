// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialEditorMeshComponent_generated_h
#error "MaterialEditorMeshComponent.generated.h already included, missing '#pragma once' in MaterialEditorMeshComponent.h"
#endif
#define UNREALED_MaterialEditorMeshComponent_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialEditorMeshComponent(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UMaterialEditorMeshComponent(); \
	public: \
	DECLARE_CLASS(UMaterialEditorMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialEditorMeshComponent*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialEditorMeshComponent(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UMaterialEditorMeshComponent(); \
	public: \
	DECLARE_CLASS(UMaterialEditorMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorMeshComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialEditorMeshComponent*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorMeshComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialEditorMeshComponent(const UMaterialEditorMeshComponent& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMaterialEditorMeshComponent(const UMaterialEditorMeshComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorMeshComponent)


#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_8_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialEditorMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS