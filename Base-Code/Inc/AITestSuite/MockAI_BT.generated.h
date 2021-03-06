// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AITESTSUITE_MockAI_BT_generated_h
#error "MockAI_BT.generated.h already included, missing '#pragma once' in MockAI_BT.h"
#endif
#define AITESTSUITE_MockAI_BT_generated_h

#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_RPC_WRAPPERS
#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMockAI_BT(); \
	friend AITESTSUITE_API class UClass* Z_Construct_UClass_UMockAI_BT(); \
	public: \
	DECLARE_CLASS(UMockAI_BT, UMockAI, COMPILED_IN_FLAGS(0), 0, AITestSuite, NO_API) \
	DECLARE_SERIALIZER(UMockAI_BT) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMockAI_BT*>(this); }


#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUMockAI_BT(); \
	friend AITESTSUITE_API class UClass* Z_Construct_UClass_UMockAI_BT(); \
	public: \
	DECLARE_CLASS(UMockAI_BT, UMockAI, COMPILED_IN_FLAGS(0), 0, AITestSuite, NO_API) \
	DECLARE_SERIALIZER(UMockAI_BT) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMockAI_BT*>(this); }


#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockAI_BT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockAI_BT) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockAI_BT); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockAI_BT); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMockAI_BT(const UMockAI_BT& InCopy); \
public:


#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockAI_BT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMockAI_BT(const UMockAI_BT& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockAI_BT); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockAI_BT); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockAI_BT)


#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_7_PROLOG
#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_RPC_WRAPPERS \
	Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_INCLASS \
	Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MockAI_BT."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
