// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_PropertyBinding_generated_h
#error "PropertyBinding.generated.h already included, missing '#pragma once' in PropertyBinding.h"
#endif
#define UMG_PropertyBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPropertyBinding(); \
	friend UMG_API class UClass* Z_Construct_UClass_UPropertyBinding(); \
	public: \
	DECLARE_CLASS(UPropertyBinding, UObject, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UPropertyBinding) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UPropertyBinding*>(this); }


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUPropertyBinding(); \
	friend UMG_API class UClass* Z_Construct_UClass_UPropertyBinding(); \
	public: \
	DECLARE_CLASS(UPropertyBinding, UObject, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UPropertyBinding) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UPropertyBinding*>(this); }


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBinding); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPropertyBinding(const UPropertyBinding& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPropertyBinding(const UPropertyBinding& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS