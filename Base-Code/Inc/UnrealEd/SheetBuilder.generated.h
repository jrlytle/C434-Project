// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SheetBuilder_generated_h
#error "SheetBuilder.generated.h already included, missing '#pragma once' in SheetBuilder.h"
#endif
#define UNREALED_SheetBuilder_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSheetBuilder(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_USheetBuilder(); \
	public: \
	DECLARE_CLASS(USheetBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(USheetBuilder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USheetBuilder*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesUSheetBuilder(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_USheetBuilder(); \
	public: \
	DECLARE_CLASS(USheetBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(USheetBuilder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USheetBuilder*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USheetBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USheetBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USheetBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheetBuilder); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API USheetBuilder(const USheetBuilder& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API USheetBuilder(const USheetBuilder& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USheetBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheetBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USheetBuilder)


#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_19_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h


#define FOREACH_ENUM_ESHEETAXIS(op) \
	op(AX_Horizontal) \
	op(AX_XAxis) \
	op(AX_YAxis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS