// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_StaticMeshLightingInfo_generated_h
#error "StaticMeshLightingInfo.generated.h already included, missing '#pragma once' in StaticMeshLightingInfo.h"
#endif
#define STATSVIEWER_StaticMeshLightingInfo_generated_h

#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUStaticMeshLightingInfo(); \
	friend STATSVIEWER_API class UClass* Z_Construct_UClass_UStaticMeshLightingInfo(); \
	public: \
	DECLARE_CLASS(UStaticMeshLightingInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, StatsViewer, STATSVIEWER_API) \
	DECLARE_SERIALIZER(UStaticMeshLightingInfo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UStaticMeshLightingInfo*>(this); }


#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesUStaticMeshLightingInfo(); \
	friend STATSVIEWER_API class UClass* Z_Construct_UClass_UStaticMeshLightingInfo(); \
	public: \
	DECLARE_CLASS(UStaticMeshLightingInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, StatsViewer, STATSVIEWER_API) \
	DECLARE_SERIALIZER(UStaticMeshLightingInfo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UStaticMeshLightingInfo*>(this); }


#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshLightingInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UStaticMeshLightingInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshLightingInfo); \
private: \
	/** Private copy-constructor, should never be used */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const UStaticMeshLightingInfo& InCopy); \
public:


#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const UStaticMeshLightingInfo& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UStaticMeshLightingInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshLightingInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshLightingInfo)


#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_17_PROLOG
#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_INCLASS \
	Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshLightingInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h


#define FOREACH_ENUM_ESTATICMESHLIGHTINGINFOOBJECTSETS(op) \
	op(StaticMeshLightingInfoObjectSets_CurrentLevel) \
	op(StaticMeshLightingInfoObjectSets_SelectedLevels) \
	op(StaticMeshLightingInfoObjectSets_AllLevels) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
