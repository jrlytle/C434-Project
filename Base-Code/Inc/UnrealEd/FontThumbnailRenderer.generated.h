// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FontThumbnailRenderer_generated_h
#error "FontThumbnailRenderer.generated.h already included, missing '#pragma once' in FontThumbnailRenderer.h"
#endif
#define UNREALED_FontThumbnailRenderer_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFontThumbnailRenderer(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFontThumbnailRenderer(); \
	public: \
	DECLARE_CLASS(UFontThumbnailRenderer, UTextureThumbnailRenderer, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UFontThumbnailRenderer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFontThumbnailRenderer*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUFontThumbnailRenderer(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFontThumbnailRenderer(); \
	public: \
	DECLARE_CLASS(UFontThumbnailRenderer, UTextureThumbnailRenderer, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UFontThumbnailRenderer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFontThumbnailRenderer*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontThumbnailRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontThumbnailRenderer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFontThumbnailRenderer(const UFontThumbnailRenderer& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFontThumbnailRenderer(const UFontThumbnailRenderer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontThumbnailRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontThumbnailRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontThumbnailRenderer)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_11_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FontThumbnailRenderer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_FontThumbnailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
