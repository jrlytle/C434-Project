// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NiagaraEffectRendererProperties_generated_h
#error "NiagaraEffectRendererProperties.generated.h already included, missing '#pragma once' in NiagaraEffectRendererProperties.h"
#endif
#define ENGINE_NiagaraEffectRendererProperties_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNiagaraEffectRendererProperties(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNiagaraEffectRendererProperties(); \
	public: \
	DECLARE_CLASS(UNiagaraEffectRendererProperties, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNiagaraEffectRendererProperties) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UNiagaraEffectRendererProperties*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUNiagaraEffectRendererProperties(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNiagaraEffectRendererProperties(); \
	public: \
	DECLARE_CLASS(UNiagaraEffectRendererProperties, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNiagaraEffectRendererProperties) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UNiagaraEffectRendererProperties*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEffectRendererProperties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEffectRendererProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEffectRendererProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEffectRendererProperties); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNiagaraEffectRendererProperties(const UNiagaraEffectRendererProperties& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNiagaraEffectRendererProperties(const UNiagaraEffectRendererProperties& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEffectRendererProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEffectRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraEffectRendererProperties)


#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraEffectRendererProperties."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_NiagaraEffectRendererProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS