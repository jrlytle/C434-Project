// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkyLight_generated_h
#error "SkyLight.generated.h already included, missing '#pragma once' in SkyLight.h"
#endif
#define ENGINE_SkyLight_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		this->OnRep_bEnabled(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		this->OnRep_bEnabled(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASkyLight(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ASkyLight(); \
	public: \
	DECLARE_CLASS(ASkyLight, AInfo, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ASkyLight) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ASkyLight*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesASkyLight(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ASkyLight(); \
	public: \
	DECLARE_CLASS(ASkyLight, AInfo, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ASkyLight) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ASkyLight*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyLight); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASkyLight(const ASkyLight& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASkyLight(const ASkyLight& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkyLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
