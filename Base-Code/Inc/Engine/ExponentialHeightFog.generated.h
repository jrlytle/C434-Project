// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ExponentialHeightFog_generated_h
#error "ExponentialHeightFog.generated.h already included, missing '#pragma once' in ExponentialHeightFog.h"
#endif
#define ENGINE_ExponentialHeightFog_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		this->OnRep_bEnabled(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		this->OnRep_bEnabled(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAExponentialHeightFog(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AExponentialHeightFog(); \
	public: \
	DECLARE_CLASS(AExponentialHeightFog, AInfo, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(AExponentialHeightFog) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AExponentialHeightFog*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesAExponentialHeightFog(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AExponentialHeightFog(); \
	public: \
	DECLARE_CLASS(AExponentialHeightFog, AInfo, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(AExponentialHeightFog) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AExponentialHeightFog*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AExponentialHeightFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExponentialHeightFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AExponentialHeightFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExponentialHeightFog); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API AExponentialHeightFog(const AExponentialHeightFog& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AExponentialHeightFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API AExponentialHeightFog(const AExponentialHeightFog& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AExponentialHeightFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExponentialHeightFog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExponentialHeightFog)


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ExponentialHeightFog."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
