// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureRenderTarget_generated_h
#error "TextureRenderTarget.generated.h already included, missing '#pragma once' in TextureRenderTarget.h"
#endif
#define ENGINE_TextureRenderTarget_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTextureRenderTarget(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTextureRenderTarget(); \
	public: \
	DECLARE_CLASS(UTextureRenderTarget, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UTextureRenderTarget*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUTextureRenderTarget(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTextureRenderTarget(); \
	public: \
	DECLARE_CLASS(UTextureRenderTarget, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UTextureRenderTarget*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UTextureRenderTarget(const UTextureRenderTarget& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UTextureRenderTarget(const UTextureRenderTarget& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureRenderTarget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
