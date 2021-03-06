// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ThumbnailManager_generated_h
#error "ThumbnailManager.generated.h already included, missing '#pragma once' in ThumbnailManager.h"
#endif
#define UNREALED_ThumbnailManager_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_36_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FThumbnailRenderingInfo(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUThumbnailManager(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UThumbnailManager(); \
	public: \
	DECLARE_CLASS(UThumbnailManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UThumbnailManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UThumbnailManager*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_INCLASS \
	private: \
	static void StaticRegisterNativesUThumbnailManager(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UThumbnailManager(); \
	public: \
	DECLARE_CLASS(UThumbnailManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UThumbnailManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UThumbnailManager*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThumbnailManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThumbnailManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailManager); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UThumbnailManager(const UThumbnailManager& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThumbnailManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UThumbnailManager(const UThumbnailManager& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThumbnailManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailManager)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_73_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_76_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ThumbnailManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h


#define FOREACH_ENUM_ETHUMBNAILPRIMTYPE(op) \
	op(TPT_None) \
	op(TPT_Sphere) \
	op(TPT_Cube) \
	op(TPT_Plane) \
	op(TPT_Cylinder) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
