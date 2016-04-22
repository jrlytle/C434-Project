// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateChildSize;
struct FMargin;
#ifdef UMG_HorizontalBoxSlot_generated_h
#error "HorizontalBoxSlot.generated.h already included, missing '#pragma once' in HorizontalBoxSlot.h"
#endif
#define UMG_HorizontalBoxSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FSlateChildSize,Z_Param_InSize); \
		P_FINISH; \
		this->SetSize(Z_Param_InSize); \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		this->SetPadding(Z_Param_InPadding); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FSlateChildSize,Z_Param_InSize); \
		P_FINISH; \
		this->SetSize(Z_Param_InSize); \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		this->SetPadding(Z_Param_InPadding); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UHorizontalBoxSlot(); \
	public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UHorizontalBoxSlot*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend UMG_API class UClass* Z_Construct_UClass_UHorizontalBoxSlot(); \
	public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UHorizontalBoxSlot*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UHorizontalBoxSlot(const UHorizontalBoxSlot& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UHorizontalBoxSlot(const UHorizontalBoxSlot& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_9_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HorizontalBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS