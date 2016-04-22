// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_BorderSlot_generated_h
#error "BorderSlot.generated.h already included, missing '#pragma once' in BorderSlot.h"
#endif
#define UMG_BorderSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		this->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		this->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		this->SetPadding(Z_Param_InPadding); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		this->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		this->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		this->SetPadding(Z_Param_InPadding); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UBorderSlot(); \
	public: \
	DECLARE_CLASS(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UBorderSlot) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBorderSlot*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UBorderSlot(); \
	public: \
	DECLARE_CLASS(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UBorderSlot) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UBorderSlot*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorderSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBorderSlot(const UBorderSlot& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBorderSlot(const UBorderSlot& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorderSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_14_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BorderSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS