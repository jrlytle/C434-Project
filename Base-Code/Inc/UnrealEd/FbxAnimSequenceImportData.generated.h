// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxAnimSequenceImportData_generated_h
#error "FbxAnimSequenceImportData.generated.h already included, missing '#pragma once' in FbxAnimSequenceImportData.h"
#endif
#define UNREALED_FbxAnimSequenceImportData_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFbxAnimSequenceImportData(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFbxAnimSequenceImportData(); \
	public: \
	DECLARE_CLASS(UFbxAnimSequenceImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UFbxAnimSequenceImportData) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFbxAnimSequenceImportData*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_INCLASS \
	private: \
	static void StaticRegisterNativesUFbxAnimSequenceImportData(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFbxAnimSequenceImportData(); \
	public: \
	DECLARE_CLASS(UFbxAnimSequenceImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UFbxAnimSequenceImportData) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFbxAnimSequenceImportData*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxAnimSequenceImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAnimSequenceImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxAnimSequenceImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAnimSequenceImportData); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFbxAnimSequenceImportData(const UFbxAnimSequenceImportData& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxAnimSequenceImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFbxAnimSequenceImportData(const UFbxAnimSequenceImportData& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxAnimSequenceImportData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAnimSequenceImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAnimSequenceImportData)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_26_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxAnimSequenceImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h


#define FOREACH_ENUM_EFBXANIMATIONLENGTHIMPORTTYPE(op) \
	op(FBXALIT_ExportedTime) \
	op(FBXALIT_AnimatedKey) \
	op(FBXALIT_SetRange) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
