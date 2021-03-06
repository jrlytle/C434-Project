// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DistributionFloatUniform_generated_h
#error "DistributionFloatUniform.generated.h already included, missing '#pragma once' in DistributionFloatUniform.h"
#endif
#define ENGINE_DistributionFloatUniform_generated_h

#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDistributionFloatUniform(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDistributionFloatUniform(); \
	public: \
	DECLARE_CLASS(UDistributionFloatUniform, UDistributionFloat, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDistributionFloatUniform) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDistributionFloatUniform*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUDistributionFloatUniform(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDistributionFloatUniform(); \
	public: \
	DECLARE_CLASS(UDistributionFloatUniform, UDistributionFloat, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDistributionFloatUniform) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDistributionFloatUniform*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatUniform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatUniform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatUniform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatUniform); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDistributionFloatUniform(const UDistributionFloatUniform& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionFloatUniform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDistributionFloatUniform(const UDistributionFloatUniform& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionFloatUniform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloatUniform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloatUniform)


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_9_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DistributionFloatUniform."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
