// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxImportUI_generated_h
#error "FbxImportUI.generated.h already included, missing '#pragma once' in FbxImportUI.h"
#endif
#define UNREALED_FbxImportUI_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFbxImportUI(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFbxImportUI(); \
	public: \
	DECLARE_CLASS(UFbxImportUI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UFbxImportUI) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UFbxImportUI*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_INCLASS \
	private: \
	static void StaticRegisterNativesUFbxImportUI(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFbxImportUI(); \
	public: \
	DECLARE_CLASS(UFbxImportUI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UFbxImportUI) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UFbxImportUI*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxImportUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxImportUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxImportUI); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UFbxImportUI(const UFbxImportUI& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UFbxImportUI(const UFbxImportUI& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxImportUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxImportUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxImportUI)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_25_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxImportUI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h


#define FOREACH_ENUM_EFBXIMPORTTYPE(op) \
	op(FBXIT_StaticMesh) \
	op(FBXIT_SkeletalMesh) \
	op(FBXIT_Animation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
