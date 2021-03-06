// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpFilter_Classes_generated_h
#error "InterpFilter_Classes.generated.h already included, missing '#pragma once' in InterpFilter_Classes.h"
#endif
#define ENGINE_InterpFilter_Classes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInterpFilter_Classes(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpFilter_Classes(); \
	public: \
	DECLARE_CLASS(UInterpFilter_Classes, UInterpFilter, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInterpFilter_Classes) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UInterpFilter_Classes*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUInterpFilter_Classes(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpFilter_Classes(); \
	public: \
	DECLARE_CLASS(UInterpFilter_Classes, UInterpFilter, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInterpFilter_Classes) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UInterpFilter_Classes*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpFilter_Classes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpFilter_Classes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpFilter_Classes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpFilter_Classes); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterpFilter_Classes(const UInterpFilter_Classes& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpFilter_Classes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterpFilter_Classes(const UInterpFilter_Classes& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpFilter_Classes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpFilter_Classes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpFilter_Classes)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpFilter_Classes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
