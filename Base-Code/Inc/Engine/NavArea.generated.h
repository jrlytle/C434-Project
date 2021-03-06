// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavArea_generated_h
#error "NavArea.generated.h already included, missing '#pragma once' in NavArea.h"
#endif
#define ENGINE_NavArea_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNavArea(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavArea(); \
	public: \
	DECLARE_CLASS(UNavArea, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavArea) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UNavArea*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUNavArea(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavArea(); \
	public: \
	DECLARE_CLASS(UNavArea, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavArea) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UNavArea*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavArea(const UNavArea& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavArea(const UNavArea& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavArea."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
