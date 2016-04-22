// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SizeBox_generated_h
#error "SizeBox.generated.h already included, missing '#pragma once' in SizeBox.h"
#endif
#define UMG_SizeBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearMaxDesiredHeight) \
	{ \
		P_FINISH; \
		this->ClearMaxDesiredHeight(); \
	} \
 \
	DECLARE_FUNCTION(execSetMaxDesiredHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMaxDesiredHeight); \
		P_FINISH; \
		this->SetMaxDesiredHeight(Z_Param_InMaxDesiredHeight); \
	} \
 \
	DECLARE_FUNCTION(execClearMaxDesiredWidth) \
	{ \
		P_FINISH; \
		this->ClearMaxDesiredWidth(); \
	} \
 \
	DECLARE_FUNCTION(execSetMaxDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMaxDesiredWidth); \
		P_FINISH; \
		this->SetMaxDesiredWidth(Z_Param_InMaxDesiredWidth); \
	} \
 \
	DECLARE_FUNCTION(execClearMinDesiredHeight) \
	{ \
		P_FINISH; \
		this->ClearMinDesiredHeight(); \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredHeight); \
		P_FINISH; \
		this->SetMinDesiredHeight(Z_Param_InMinDesiredHeight); \
	} \
 \
	DECLARE_FUNCTION(execClearMinDesiredWidth) \
	{ \
		P_FINISH; \
		this->ClearMinDesiredWidth(); \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredWidth); \
		P_FINISH; \
		this->SetMinDesiredWidth(Z_Param_InMinDesiredWidth); \
	} \
 \
	DECLARE_FUNCTION(execClearHeightOverride) \
	{ \
		P_FINISH; \
		this->ClearHeightOverride(); \
	} \
 \
	DECLARE_FUNCTION(execSetHeightOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InHeightOverride); \
		P_FINISH; \
		this->SetHeightOverride(Z_Param_InHeightOverride); \
	} \
 \
	DECLARE_FUNCTION(execClearWidthOverride) \
	{ \
		P_FINISH; \
		this->ClearWidthOverride(); \
	} \
 \
	DECLARE_FUNCTION(execSetWidthOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWidthOverride); \
		P_FINISH; \
		this->SetWidthOverride(Z_Param_InWidthOverride); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearMaxDesiredHeight) \
	{ \
		P_FINISH; \
		this->ClearMaxDesiredHeight(); \
	} \
 \
	DECLARE_FUNCTION(execSetMaxDesiredHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMaxDesiredHeight); \
		P_FINISH; \
		this->SetMaxDesiredHeight(Z_Param_InMaxDesiredHeight); \
	} \
 \
	DECLARE_FUNCTION(execClearMaxDesiredWidth) \
	{ \
		P_FINISH; \
		this->ClearMaxDesiredWidth(); \
	} \
 \
	DECLARE_FUNCTION(execSetMaxDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMaxDesiredWidth); \
		P_FINISH; \
		this->SetMaxDesiredWidth(Z_Param_InMaxDesiredWidth); \
	} \
 \
	DECLARE_FUNCTION(execClearMinDesiredHeight) \
	{ \
		P_FINISH; \
		this->ClearMinDesiredHeight(); \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredHeight); \
		P_FINISH; \
		this->SetMinDesiredHeight(Z_Param_InMinDesiredHeight); \
	} \
 \
	DECLARE_FUNCTION(execClearMinDesiredWidth) \
	{ \
		P_FINISH; \
		this->ClearMinDesiredWidth(); \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredWidth); \
		P_FINISH; \
		this->SetMinDesiredWidth(Z_Param_InMinDesiredWidth); \
	} \
 \
	DECLARE_FUNCTION(execClearHeightOverride) \
	{ \
		P_FINISH; \
		this->ClearHeightOverride(); \
	} \
 \
	DECLARE_FUNCTION(execSetHeightOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InHeightOverride); \
		P_FINISH; \
		this->SetHeightOverride(Z_Param_InHeightOverride); \
	} \
 \
	DECLARE_FUNCTION(execClearWidthOverride) \
	{ \
		P_FINISH; \
		this->ClearWidthOverride(); \
	} \
 \
	DECLARE_FUNCTION(execSetWidthOverride) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWidthOverride); \
		P_FINISH; \
		this->SetWidthOverride(Z_Param_InWidthOverride); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSizeBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_USizeBox(); \
	public: \
	DECLARE_CLASS(USizeBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(USizeBox) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USizeBox*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesUSizeBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_USizeBox(); \
	public: \
	DECLARE_CLASS(USizeBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(USizeBox) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USizeBox*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBox); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USizeBox(const USizeBox& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USizeBox(const USizeBox& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBox)


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SizeBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SizeBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
