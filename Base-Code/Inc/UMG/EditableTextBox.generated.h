// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_EditableTextBox_generated_h
#error "EditableTextBox.generated.h already included, missing '#pragma once' in EditableTextBox.h"
#endif
#define UMG_EditableTextBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_21_DELEGATE \
struct EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxCommittedEvent, const FText& Text, ETextCommit::Type CommitMethod) \
{ \
	EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	OnEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_20_DELEGATE \
struct EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms \
{ \
	FText Text; \
}; \
static inline void FOnEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextBoxChangedEvent, const FText& Text) \
{ \
	EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms Parms; \
	Parms.Text=Text; \
	OnEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearError) \
	{ \
		P_FINISH; \
		this->ClearError(); \
	} \
 \
	DECLARE_FUNCTION(execSetError) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InError); \
		P_FINISH; \
		this->SetError(Z_Param_InError); \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		this->SetText(Z_Param_InText); \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		*(FText*)Z_Param__Result=this->GetText(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearError) \
	{ \
		P_FINISH; \
		this->ClearError(); \
	} \
 \
	DECLARE_FUNCTION(execSetError) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InError); \
		P_FINISH; \
		this->SetError(Z_Param_InError); \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		this->SetText(Z_Param_InText); \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		*(FText*)Z_Param__Result=this->GetText(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEditableTextBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_UEditableTextBox(); \
	public: \
	DECLARE_CLASS(UEditableTextBox, UWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UEditableTextBox) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEditableTextBox*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUEditableTextBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_UEditableTextBox(); \
	public: \
	DECLARE_CLASS(UEditableTextBox, UWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UEditableTextBox) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEditableTextBox*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableTextBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextBox); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditableTextBox(const UEditableTextBox& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditableTextBox(const UEditableTextBox& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableTextBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableTextBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableTextBox)


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditableTextBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_EditableTextBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
