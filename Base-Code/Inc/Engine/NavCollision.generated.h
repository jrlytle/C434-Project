// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavCollision_generated_h
#error "NavCollision.generated.h already included, missing '#pragma once' in NavCollision.h"
#endif
#define ENGINE_NavCollision_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_29_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_14_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNavCollision(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavCollision(); \
	public: \
	DECLARE_CLASS(UNavCollision, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavCollision) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UNavCollision*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_INCLASS \
	private: \
	static void StaticRegisterNativesUNavCollision(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavCollision(); \
	public: \
	DECLARE_CLASS(UNavCollision, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavCollision) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UNavCollision*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollision) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollision); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollision); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavCollision(const UNavCollision& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavCollision(const UNavCollision& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollision); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollision)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_44_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavCollision."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
