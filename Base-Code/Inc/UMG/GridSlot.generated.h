// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_GridSlot_generated_h
#error "GridSlot.generated.h already included, missing '#pragma once' in GridSlot.h"
#endif
#define UMG_GridSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetColumnSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumnSpan); \
		P_FINISH; \
		this->SetColumnSpan(Z_Param_InColumnSpan); \
	} \
 \
	DECLARE_FUNCTION(execSetColumn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumn); \
		P_FINISH; \
		this->SetColumn(Z_Param_InColumn); \
	} \
 \
	DECLARE_FUNCTION(execSetRowSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRowSpan); \
		P_FINISH; \
		this->SetRowSpan(Z_Param_InRowSpan); \
	} \
 \
	DECLARE_FUNCTION(execSetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRow); \
		P_FINISH; \
		this->SetRow(Z_Param_InRow); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetColumnSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumnSpan); \
		P_FINISH; \
		this->SetColumnSpan(Z_Param_InColumnSpan); \
	} \
 \
	DECLARE_FUNCTION(execSetColumn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumn); \
		P_FINISH; \
		this->SetColumn(Z_Param_InColumn); \
	} \
 \
	DECLARE_FUNCTION(execSetRowSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRowSpan); \
		P_FINISH; \
		this->SetRowSpan(Z_Param_InRowSpan); \
	} \
 \
	DECLARE_FUNCTION(execSetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRow); \
		P_FINISH; \
		this->SetRow(Z_Param_InRow); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGridSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UGridSlot(); \
	public: \
	DECLARE_CLASS(UGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UGridSlot) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGridSlot*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUGridSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UGridSlot(); \
	public: \
	DECLARE_CLASS(UGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UGridSlot) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGridSlot*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSlot); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGridSlot(const UGridSlot& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGridSlot(const UGridSlot& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSlot)


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_GridSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
