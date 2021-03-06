// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Console_generated_h
#error "Console.generated.h already included, missing '#pragma once' in Console.h"
#endif
#define ENGINE_Console_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteNode(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUConsole(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UConsole(); \
	public: \
	DECLARE_CLASS(UConsole, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UConsole) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UGameViewportClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UConsole*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_INCLASS \
	private: \
	static void StaticRegisterNativesUConsole(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UConsole(); \
	public: \
	DECLARE_CLASS(UConsole, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UConsole) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UGameViewportClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UConsole*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsole); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UConsole(const UConsole& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UConsole(const UConsole& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsole)


#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_53_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Console_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Console."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Console_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
