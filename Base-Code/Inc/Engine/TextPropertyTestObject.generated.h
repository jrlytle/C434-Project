// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextPropertyTestObject_generated_h
#error "TextPropertyTestObject.generated.h already included, missing '#pragma once' in TextPropertyTestObject.h"
#endif
#define ENGINE_TextPropertyTestObject_generated_h

#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTextPropertyTestObject(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTextPropertyTestObject(); \
	public: \
	DECLARE_CLASS(UTextPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UTextPropertyTestObject) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UTextPropertyTestObject*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUTextPropertyTestObject(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTextPropertyTestObject(); \
	public: \
	DECLARE_CLASS(UTextPropertyTestObject, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UTextPropertyTestObject) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UTextPropertyTestObject*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextPropertyTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextPropertyTestObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextPropertyTestObject); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTextPropertyTestObject(const UTextPropertyTestObject& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextPropertyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTextPropertyTestObject(const UTextPropertyTestObject& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextPropertyTestObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextPropertyTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextPropertyTestObject)


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextPropertyTestObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
