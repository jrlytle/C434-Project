// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_FontImportOptions_generated_h
#error "FontImportOptions.generated.h already included, missing '#pragma once' in FontImportOptions.h"
#endif
#define ENGINE_FontImportOptions_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_23_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFontImportOptions(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UFontImportOptions(); \
	public: \
	DECLARE_CLASS(UFontImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UFontImportOptions) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UFontImportOptions*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_INCLASS \
	private: \
	static void StaticRegisterNativesUFontImportOptions(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UFontImportOptions(); \
	public: \
	DECLARE_CLASS(UFontImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UFontImportOptions) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UFontImportOptions*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontImportOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontImportOptions); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UFontImportOptions(const UFontImportOptions& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UFontImportOptions(const UFontImportOptions& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontImportOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontImportOptions)


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_178_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_182_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FontImportOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h


#define FOREACH_ENUM_EFONTIMPORTCHARACTERSET(op) \
	op(FontICS_Default) \
	op(FontICS_Ansi) \
	op(FontICS_Symbol) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS