// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Damage_generated_h
#error "AISenseConfig_Damage.generated.h already included, missing '#pragma once' in AISenseConfig_Damage.h"
#endif
#define AIMODULE_AISenseConfig_Damage_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAISenseConfig_Damage(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAISenseConfig_Damage(); \
	public: \
	DECLARE_CLASS(UAISenseConfig_Damage, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Damage) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAISenseConfig_Damage*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUAISenseConfig_Damage(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAISenseConfig_Damage(); \
	public: \
	DECLARE_CLASS(UAISenseConfig_Damage, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Damage) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAISenseConfig_Damage*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseConfig_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Damage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseConfig_Damage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Damage); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAISenseConfig_Damage(const UAISenseConfig_Damage& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseConfig_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAISenseConfig_Damage(const UAISenseConfig_Damage& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseConfig_Damage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Damage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Damage)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_11_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS