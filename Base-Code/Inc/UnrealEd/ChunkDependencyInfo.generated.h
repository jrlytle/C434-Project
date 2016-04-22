// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ChunkDependencyInfo_generated_h
#error "ChunkDependencyInfo.generated.h already included, missing '#pragma once' in ChunkDependencyInfo.h"
#endif
#define UNREALED_ChunkDependencyInfo_generated_h

#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_10_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FChunkDependency(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUChunkDependencyInfo(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UChunkDependencyInfo(); \
	public: \
	DECLARE_CLASS(UChunkDependencyInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UChunkDependencyInfo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UChunkDependencyInfo*>(this); }


#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_INCLASS \
	private: \
	static void StaticRegisterNativesUChunkDependencyInfo(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UChunkDependencyInfo(); \
	public: \
	DECLARE_CLASS(UChunkDependencyInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UChunkDependencyInfo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UChunkDependencyInfo*>(this); }


#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChunkDependencyInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChunkDependencyInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChunkDependencyInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChunkDependencyInfo); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UChunkDependencyInfo(const UChunkDependencyInfo& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChunkDependencyInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UChunkDependencyInfo(const UChunkDependencyInfo& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChunkDependencyInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChunkDependencyInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChunkDependencyInfo)


#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_35_PROLOG
#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_INCLASS \
	Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChunkDependencyInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Private_Commandlets_ChunkDependencyInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
