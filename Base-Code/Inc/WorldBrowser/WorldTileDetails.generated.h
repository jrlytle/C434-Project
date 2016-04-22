// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDBROWSER_WorldTileDetails_generated_h
#error "WorldTileDetails.generated.h already included, missing '#pragma once' in WorldTileDetails.h"
#endif
#define WORLDBROWSER_WorldTileDetails_generated_h

#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_15_GENERATED_BODY \
	friend WORLDBROWSER_API class UScriptStruct* Z_Construct_UScriptStruct_FTileLODEntryDetails(); \
	WORLDBROWSER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_RPC_WRAPPERS
#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUWorldTileDetails(); \
	friend WORLDBROWSER_API class UClass* Z_Construct_UClass_UWorldTileDetails(); \
	public: \
	DECLARE_CLASS(UWorldTileDetails, UObject, COMPILED_IN_FLAGS(0), 0, WorldBrowser, NO_API) \
	DECLARE_SERIALIZER(UWorldTileDetails) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UWorldTileDetails*>(this); }


#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_INCLASS \
	private: \
	static void StaticRegisterNativesUWorldTileDetails(); \
	friend WORLDBROWSER_API class UClass* Z_Construct_UClass_UWorldTileDetails(); \
	public: \
	DECLARE_CLASS(UWorldTileDetails, UObject, COMPILED_IN_FLAGS(0), 0, WorldBrowser, NO_API) \
	DECLARE_SERIALIZER(UWorldTileDetails) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UWorldTileDetails*>(this); }


#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldTileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldTileDetails) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldTileDetails); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldTileDetails); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWorldTileDetails(const UWorldTileDetails& InCopy); \
public:


#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldTileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWorldTileDetails(const UWorldTileDetails& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldTileDetails); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldTileDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldTileDetails)


#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_37_PROLOG
#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_RPC_WRAPPERS \
	Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_INCLASS \
	Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldTileDetails."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_WorldBrowser_Private_Tiles_WorldTileDetails_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS