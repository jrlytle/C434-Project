// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Slider_generated_h
#error "Slider.generated.h already included, missing '#pragma once' in Slider.h"
#endif
#define UMG_Slider_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_9_DELEGATE \
struct _Script_UMG_eventOnFloatValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEvent, float Value) \
{ \
	_Script_UMG_eventOnFloatValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	OnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_8_DELEGATE \
static inline void FOnMouseCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEvent) \
{ \
	OnMouseCaptureEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_7_DELEGATE \
static inline void FOnMouseCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEvent) \
{ \
	OnMouseCaptureBeginEvent.ProcessMulticastDelegate<UObject>(NULL); \
}




#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		this->SetLocked(Z_Param_InValue); \
	} \
 \
	DECLARE_FUNCTION(execSetIndentHandle) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		this->SetIndentHandle(Z_Param_InValue); \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		this->SetValue(Z_Param_InValue); \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetValue(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		this->SetLocked(Z_Param_InValue); \
	} \
 \
	DECLARE_FUNCTION(execSetIndentHandle) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		this->SetIndentHandle(Z_Param_InValue); \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		this->SetValue(Z_Param_InValue); \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetValue(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSlider(); \
	friend UMG_API class UClass* Z_Construct_UClass_USlider(); \
	public: \
	DECLARE_CLASS(USlider, UWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(USlider) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USlider*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesUSlider(); \
	friend UMG_API class UClass* Z_Construct_UClass_USlider(); \
	public: \
	DECLARE_CLASS(USlider, UWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(USlider) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USlider*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USlider(const USlider& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USlider(const USlider& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider)


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Slider_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Slider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Slider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
