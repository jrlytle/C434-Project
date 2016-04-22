// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Distribution_generated_h
#error "Distribution.generated.h already included, missing '#pragma once' in Distribution.h"
#endif
#define ENGINE_Distribution_generated_h

#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDistribution(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDistribution(); \
	public: \
	DECLARE_CLASS(UDistribution, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDistribution) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UDistribution*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_INCLASS \
	private: \
	static void StaticRegisterNativesUDistribution(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDistribution(); \
	public: \
	DECLARE_CLASS(UDistribution, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDistribution) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UDistribution*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistribution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistribution) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistribution); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistribution); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDistribution(const UDistribution& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistribution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDistribution(const UDistribution& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistribution); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistribution); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistribution)


#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_60_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_63_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Distribution."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h


#define FOREACH_ENUM_DISTRIBUTIONPARAMMODE(op) \
	op(DPM_Normal) \
	op(DPM_Abs) \
	op(DPM_Direct) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
