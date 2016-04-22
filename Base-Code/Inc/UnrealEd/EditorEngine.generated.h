// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorEngine_generated_h
#error "EditorEngine.generated.h already included, missing '#pragma once' in EditorEngine.h"
#endif
#define UNREALED_EditorEngine_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_125_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FCopySelectedInfo(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_74_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FPIELoginInfo(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_47_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UEditorEngine(); \
	public: \
	DECLARE_CLASS(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UEditorEngine) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEditorEngine*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_INCLASS \
	private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UEditorEngine(); \
	public: \
	DECLARE_CLASS(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UEditorEngine) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEditorEngine*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditorEngine(const UEditorEngine& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditorEngine(const UEditorEngine& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_283_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_287_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h


#define FOREACH_ENUM_EPASTETO(op) \
	op(PT_OriginalLocation) \
	op(PT_Here) \
	op(PT_WorldOrigin) 
#define FOREACH_ENUM_EMAPSETBRUSHFLAGS(op) \
	op(MSB_BrushColor) \
	op(MSB_Group) \
	op(MSB_PolyFlags) \
	op(MSB_BrushType) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
