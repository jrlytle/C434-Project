// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_CheckedStateBinding_generated_h
#error "CheckedStateBinding.generated.h already included, missing '#pragma once' in CheckedStateBinding.h"
#endif
#define UMG_CheckedStateBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<ECheckBoxState>*)Z_Param__Result=this->GetValue(); \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<ECheckBoxState>*)Z_Param__Result=this->GetValue(); \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCheckedStateBinding(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCheckedStateBinding(); \
	public: \
	DECLARE_CLASS(UCheckedStateBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UCheckedStateBinding) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCheckedStateBinding*>(this); }


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUCheckedStateBinding(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCheckedStateBinding(); \
	public: \
	DECLARE_CLASS(UCheckedStateBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UCheckedStateBinding) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCheckedStateBinding*>(this); }


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckedStateBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckedStateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckedStateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckedStateBinding); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCheckedStateBinding(const UCheckedStateBinding& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCheckedStateBinding(const UCheckedStateBinding& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckedStateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckedStateBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCheckedStateBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_7_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
