// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationQueryFilter_generated_h
#error "NavigationQueryFilter.generated.h already included, missing '#pragma once' in NavigationQueryFilter.h"
#endif
#define ENGINE_NavigationQueryFilter_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_46_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_13_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNavigationQueryFilter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavigationQueryFilter(); \
	public: \
	DECLARE_CLASS(UNavigationQueryFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavigationQueryFilter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UNavigationQueryFilter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_INCLASS \
	private: \
	static void StaticRegisterNativesUNavigationQueryFilter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavigationQueryFilter(); \
	public: \
	DECLARE_CLASS(UNavigationQueryFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UNavigationQueryFilter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UNavigationQueryFilter*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationQueryFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationQueryFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationQueryFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationQueryFilter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavigationQueryFilter(const UNavigationQueryFilter& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationQueryFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNavigationQueryFilter(const UNavigationQueryFilter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationQueryFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationQueryFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationQueryFilter)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_201_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h_204_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationQueryFilter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavFilters_NavigationQueryFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
