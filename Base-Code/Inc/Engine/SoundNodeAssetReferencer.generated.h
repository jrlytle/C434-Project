// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeAssetReferencer_generated_h
#error "SoundNodeAssetReferencer.generated.h already included, missing '#pragma once' in SoundNodeAssetReferencer.h"
#endif
#define ENGINE_SoundNodeAssetReferencer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSoundNodeAssetReferencer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeAssetReferencer(); \
	public: \
	DECLARE_CLASS(USoundNodeAssetReferencer, USoundNode, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(USoundNodeAssetReferencer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USoundNodeAssetReferencer*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUSoundNodeAssetReferencer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeAssetReferencer(); \
	public: \
	DECLARE_CLASS(USoundNodeAssetReferencer, USoundNode, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(USoundNodeAssetReferencer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USoundNodeAssetReferencer*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeAssetReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAssetReferencer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeAssetReferencer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAssetReferencer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USoundNodeAssetReferencer(const USoundNodeAssetReferencer& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeAssetReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USoundNodeAssetReferencer(const USoundNodeAssetReferencer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeAssetReferencer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeAssetReferencer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeAssetReferencer)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS