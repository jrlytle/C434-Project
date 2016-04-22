// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeInfo_generated_h
#error "LandscapeInfo.generated.h already included, missing '#pragma once' in LandscapeInfo.h"
#endif
#define LANDSCAPE_LandscapeInfo_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_31_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeInfo(); \
	public: \
	DECLARE_CLASS(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0), 0, Landscape, NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULandscapeInfo*>(this); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_INCLASS \
	private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeInfo(); \
	public: \
	DECLARE_CLASS(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0), 0, Landscape, NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULandscapeInfo*>(this); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULandscapeInfo(const ULandscapeInfo& InCopy); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULandscapeInfo(const ULandscapeInfo& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_86_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
