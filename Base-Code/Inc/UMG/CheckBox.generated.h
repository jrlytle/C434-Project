// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_CheckBox_generated_h
#error "CheckBox.generated.h already included, missing '#pragma once' in CheckBox.h"
#endif
#define UMG_CheckBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_9_DELEGATE \
struct _Script_UMG_eventOnCheckBoxComponentStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCheckBoxComponentStateChanged, bool bIsChecked) \
{ \
	_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	OnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCheckedState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCheckedState); \
		P_FINISH; \
		this->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState)); \
	} \
 \
	DECLARE_FUNCTION(execSetIsChecked) \
	{ \
		P_GET_UBOOL(Z_Param_InIsChecked); \
		P_FINISH; \
		this->SetIsChecked(Z_Param_InIsChecked); \
	} \
 \
	DECLARE_FUNCTION(execGetCheckedState) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<ECheckBoxState>*)Z_Param__Result=this->GetCheckedState(); \
	} \
 \
	DECLARE_FUNCTION(execIsChecked) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsChecked(); \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPressed(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCheckedState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCheckedState); \
		P_FINISH; \
		this->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState)); \
	} \
 \
	DECLARE_FUNCTION(execSetIsChecked) \
	{ \
		P_GET_UBOOL(Z_Param_InIsChecked); \
		P_FINISH; \
		this->SetIsChecked(Z_Param_InIsChecked); \
	} \
 \
	DECLARE_FUNCTION(execGetCheckedState) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<ECheckBoxState>*)Z_Param__Result=this->GetCheckedState(); \
	} \
 \
	DECLARE_FUNCTION(execIsChecked) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsChecked(); \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPressed(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCheckBox(); \
	public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UCheckBox) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCheckBox*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_INCLASS \
	private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCheckBox(); \
	public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UCheckBox) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCheckBox*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCheckBox(const UCheckBox& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCheckBox(const UCheckBox& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox)


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_19_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheckBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_CheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS