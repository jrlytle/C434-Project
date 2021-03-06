// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSimulation_generated_h
#error "NiagaraSimulation.generated.h already included, missing '#pragma once' in NiagaraSimulation.h"
#endif
#define NIAGARA_NiagaraSimulation_generated_h

#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_59_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FDeprecatedNiagaraEmitterProperties(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_34_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_RPC_WRAPPERS
#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNiagaraEmitterProperties(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraEmitterProperties(); \
	public: \
	DECLARE_CLASS(UNiagaraEmitterProperties, UObject, COMPILED_IN_FLAGS(0), 0, Niagara, NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEmitterProperties) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UNiagaraEmitterProperties*>(this); }


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_INCLASS \
	private: \
	static void StaticRegisterNativesUNiagaraEmitterProperties(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraEmitterProperties(); \
	public: \
	DECLARE_CLASS(UNiagaraEmitterProperties, UObject, COMPILED_IN_FLAGS(0), 0, Niagara, NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEmitterProperties) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UNiagaraEmitterProperties*>(this); }


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitterProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitterProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitterProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterProperties); \
private: \
	/** Private copy-constructor, should never be used */ \
	NIAGARA_API UNiagaraEmitterProperties(const UNiagaraEmitterProperties& InCopy); \
public:


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitterProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NIAGARA_API UNiagaraEmitterProperties(const UNiagaraEmitterProperties& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitterProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitterProperties)


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_93_PROLOG
#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_INCLASS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h_96_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraEmitterProperties."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Classes_NiagaraSimulation_h


#define FOREACH_ENUM_EEMITTERRENDERMODULETYPE(op) \
	op(RMT_None) \
	op(RMT_Sprites) \
	op(RMT_Ribbon) \
	op(RMT_Trails) \
	op(RMT_Meshes) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
