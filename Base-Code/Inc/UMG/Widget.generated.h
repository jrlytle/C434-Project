// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventReply;
struct FGeometry;
struct FPointerEvent;
class UWidget;
class UObject;
struct FSlateBrush;
struct FLinearColor;
struct FSlateColor;
class UPanelWidget;
struct FVector2D;
class APlayerController;
struct FWidgetTransform;
#ifdef UMG_Widget_generated_h
#error "Widget.generated.h already included, missing '#pragma once' in Widget.h"
#endif
#define UMG_Widget_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_117_DELEGATE \
struct Widget_eventOnPointerEvent_Parms \
{ \
	FGeometry MyGeometry; \
	FPointerEvent MouseEvent; \
	FEventReply ReturnValue; \
}; \
static inline FEventReply FOnPointerEvent_DelegateWrapper(const FScriptDelegate& OnPointerEvent, FGeometry MyGeometry, const FPointerEvent& MouseEvent) \
{ \
	Widget_eventOnPointerEvent_Parms Parms; \
	Parms.MyGeometry=MyGeometry; \
	Parms.MouseEvent=MouseEvent; \
	OnPointerEvent.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_116_DELEGATE \
struct Widget_eventOnReply_Parms \
{ \
	FEventReply ReturnValue; \
}; \
static inline FEventReply FOnReply_DelegateWrapper(const FScriptDelegate& OnReply) \
{ \
	Widget_eventOnReply_Parms Parms; \
	OnReply.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_113_DELEGATE \
struct Widget_eventGenerateWidgetForObject_Parms \
{ \
	UObject* Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGenerateWidgetForObject_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetForObject_DelegateWrapper(const FScriptDelegate& GenerateWidgetForObject, UObject* Item) \
{ \
	Widget_eventGenerateWidgetForObject_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetForObject.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_112_DELEGATE \
struct Widget_eventGenerateWidgetForString_Parms \
{ \
	FString Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGenerateWidgetForString_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetForString_DelegateWrapper(const FScriptDelegate& GenerateWidgetForString, const FString& Item) \
{ \
	Widget_eventGenerateWidgetForString_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetForString.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_109_DELEGATE \
struct Widget_eventGetWidget_Parms \
{ \
	UWidget* ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetWidget_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGetWidget_DelegateWrapper(const FScriptDelegate& GetWidget) \
{ \
	Widget_eventGetWidget_Parms Parms; \
	GetWidget.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_108_DELEGATE \
struct Widget_eventGetCheckBoxState_Parms \
{ \
	TEnumAsByte<ECheckBoxState> ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetCheckBoxState_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline ECheckBoxState FGetCheckBoxState_DelegateWrapper(const FScriptDelegate& GetCheckBoxState) \
{ \
	Widget_eventGetCheckBoxState_Parms Parms; \
	GetCheckBoxState.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_107_DELEGATE \
struct Widget_eventGetMouseCursor_Parms \
{ \
	TEnumAsByte<EMouseCursor::Type> ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetMouseCursor_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline EMouseCursor::Type FGetMouseCursor_DelegateWrapper(const FScriptDelegate& GetMouseCursor) \
{ \
	Widget_eventGetMouseCursor_Parms Parms; \
	GetMouseCursor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_106_DELEGATE \
struct Widget_eventGetSlateVisibility_Parms \
{ \
	TEnumAsByte<ESlateVisibility> ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetSlateVisibility_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline ESlateVisibility FGetSlateVisibility_DelegateWrapper(const FScriptDelegate& GetSlateVisibility) \
{ \
	Widget_eventGetSlateVisibility_Parms Parms; \
	GetSlateVisibility.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_105_DELEGATE \
struct Widget_eventGetSlateBrush_Parms \
{ \
	FSlateBrush ReturnValue; \
}; \
static inline FSlateBrush FGetSlateBrush_DelegateWrapper(const FScriptDelegate& GetSlateBrush) \
{ \
	Widget_eventGetSlateBrush_Parms Parms; \
	GetSlateBrush.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_104_DELEGATE \
struct Widget_eventGetLinearColor_Parms \
{ \
	FLinearColor ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetLinearColor_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FLinearColor FGetLinearColor_DelegateWrapper(const FScriptDelegate& GetLinearColor) \
{ \
	Widget_eventGetLinearColor_Parms Parms; \
	GetLinearColor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_103_DELEGATE \
struct Widget_eventGetSlateColor_Parms \
{ \
	FSlateColor ReturnValue; \
}; \
static inline FSlateColor FGetSlateColor_DelegateWrapper(const FScriptDelegate& GetSlateColor) \
{ \
	Widget_eventGetSlateColor_Parms Parms; \
	GetSlateColor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_102_DELEGATE \
struct Widget_eventGetText_Parms \
{ \
	FText ReturnValue; \
}; \
static inline FText FGetText_DelegateWrapper(const FScriptDelegate& GetText) \
{ \
	Widget_eventGetText_Parms Parms; \
	GetText.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_101_DELEGATE \
struct Widget_eventGetInt32_Parms \
{ \
	int32 ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetInt32_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline int32 FGetInt32_DelegateWrapper(const FScriptDelegate& GetInt32) \
{ \
	Widget_eventGetInt32_Parms Parms; \
	GetInt32.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_100_DELEGATE \
struct Widget_eventGetFloat_Parms \
{ \
	float ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetFloat_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline float FGetFloat_DelegateWrapper(const FScriptDelegate& GetFloat) \
{ \
	Widget_eventGetFloat_Parms Parms; \
	GetFloat.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_99_DELEGATE \
struct Widget_eventGetBool_Parms \
{ \
	bool ReturnValue; \
 \
	/** Constructor, intializes return property only **/ \
	Widget_eventGetBool_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FGetBool_DelegateWrapper(const FScriptDelegate& GetBool) \
{ \
	Widget_eventGetBool_Parms Parms; \
	GetBool.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}




#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveFromParent) \
	{ \
		P_FINISH; \
		this->RemoveFromParent(); \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		*(UPanelWidget**)Z_Param__Result=this->GetParent(); \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredSize) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->GetDesiredSize(); \
	} \
 \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility) \
	{ \
		P_FINISH; \
		this->InvalidateLayoutAndVolatility(); \
	} \
 \
	DECLARE_FUNCTION(execForceLayoutPrepass) \
	{ \
		P_FINISH; \
		this->ForceLayoutPrepass(); \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		this->SetUserFocus(Z_Param_PlayerController); \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocusedDescendants) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasUserFocusedDescendants(Z_Param_PlayerController); \
	} \
 \
	DECLARE_FUNCTION(execHasFocusedDescendants) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasFocusedDescendants(); \
	} \
 \
	DECLARE_FUNCTION(execHasAnyUserFocus) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasAnyUserFocus(); \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasUserFocus(Z_Param_PlayerController); \
	} \
 \
	DECLARE_FUNCTION(execSetKeyboardFocus) \
	{ \
		P_FINISH; \
		this->SetKeyboardFocus(); \
	} \
 \
	DECLARE_FUNCTION(execHasMouseCapture) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasMouseCapture(); \
	} \
 \
	DECLARE_FUNCTION(execHasKeyboardFocus) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasKeyboardFocus(); \
	} \
 \
	DECLARE_FUNCTION(execIsHovered) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsHovered(); \
	} \
 \
	DECLARE_FUNCTION(execForceVolatile) \
	{ \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		this->ForceVolatile(Z_Param_bForce); \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVisibility); \
		P_FINISH; \
		this->SetVisibility(ESlateVisibility(Z_Param_InVisibility)); \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<ESlateVisibility>*)Z_Param__Result=this->GetVisibility(); \
	} \
 \
	DECLARE_FUNCTION(execIsVisible) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsVisible(); \
	} \
 \
	DECLARE_FUNCTION(execResetCursor) \
	{ \
		P_FINISH; \
		this->ResetCursor(); \
	} \
 \
	DECLARE_FUNCTION(execSetCursor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCursor); \
		P_FINISH; \
		this->SetCursor(EMouseCursor::Type(Z_Param_InCursor)); \
	} \
 \
	DECLARE_FUNCTION(execSetToolTip) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		this->SetToolTip(Z_Param_Widget); \
	} \
 \
	DECLARE_FUNCTION(execSetToolTipText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InToolTipText); \
		P_FINISH; \
		this->SetToolTipText(Z_Param_Out_InToolTipText); \
	} \
 \
	DECLARE_FUNCTION(execSetIsEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsEnabled); \
		P_FINISH; \
		this->SetIsEnabled(Z_Param_bInIsEnabled); \
	} \
 \
	DECLARE_FUNCTION(execGetIsEnabled) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->GetIsEnabled(); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransformPivot) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Pivot); \
		P_FINISH; \
		this->SetRenderTransformPivot(Z_Param_Pivot); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTranslation) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Translation); \
		P_FINISH; \
		this->SetRenderTranslation(Z_Param_Translation); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		this->SetRenderAngle(Z_Param_Angle); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderShear) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Shear); \
		P_FINISH; \
		this->SetRenderShear(Z_Param_Shear); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		this->SetRenderScale(Z_Param_Scale); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransform) \
	{ \
		P_GET_STRUCT(FWidgetTransform,Z_Param_InTransform); \
		P_FINISH; \
		this->SetRenderTransform(Z_Param_InTransform); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFromParent) \
	{ \
		P_FINISH; \
		this->RemoveFromParent(); \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		*(UPanelWidget**)Z_Param__Result=this->GetParent(); \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredSize) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->GetDesiredSize(); \
	} \
 \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility) \
	{ \
		P_FINISH; \
		this->InvalidateLayoutAndVolatility(); \
	} \
 \
	DECLARE_FUNCTION(execForceLayoutPrepass) \
	{ \
		P_FINISH; \
		this->ForceLayoutPrepass(); \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		this->SetUserFocus(Z_Param_PlayerController); \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocusedDescendants) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasUserFocusedDescendants(Z_Param_PlayerController); \
	} \
 \
	DECLARE_FUNCTION(execHasFocusedDescendants) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasFocusedDescendants(); \
	} \
 \
	DECLARE_FUNCTION(execHasAnyUserFocus) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasAnyUserFocus(); \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasUserFocus(Z_Param_PlayerController); \
	} \
 \
	DECLARE_FUNCTION(execSetKeyboardFocus) \
	{ \
		P_FINISH; \
		this->SetKeyboardFocus(); \
	} \
 \
	DECLARE_FUNCTION(execHasMouseCapture) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasMouseCapture(); \
	} \
 \
	DECLARE_FUNCTION(execHasKeyboardFocus) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->HasKeyboardFocus(); \
	} \
 \
	DECLARE_FUNCTION(execIsHovered) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsHovered(); \
	} \
 \
	DECLARE_FUNCTION(execForceVolatile) \
	{ \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		this->ForceVolatile(Z_Param_bForce); \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVisibility); \
		P_FINISH; \
		this->SetVisibility(ESlateVisibility(Z_Param_InVisibility)); \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		*(TEnumAsByte<ESlateVisibility>*)Z_Param__Result=this->GetVisibility(); \
	} \
 \
	DECLARE_FUNCTION(execIsVisible) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsVisible(); \
	} \
 \
	DECLARE_FUNCTION(execResetCursor) \
	{ \
		P_FINISH; \
		this->ResetCursor(); \
	} \
 \
	DECLARE_FUNCTION(execSetCursor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCursor); \
		P_FINISH; \
		this->SetCursor(EMouseCursor::Type(Z_Param_InCursor)); \
	} \
 \
	DECLARE_FUNCTION(execSetToolTip) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		this->SetToolTip(Z_Param_Widget); \
	} \
 \
	DECLARE_FUNCTION(execSetToolTipText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InToolTipText); \
		P_FINISH; \
		this->SetToolTipText(Z_Param_Out_InToolTipText); \
	} \
 \
	DECLARE_FUNCTION(execSetIsEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsEnabled); \
		P_FINISH; \
		this->SetIsEnabled(Z_Param_bInIsEnabled); \
	} \
 \
	DECLARE_FUNCTION(execGetIsEnabled) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->GetIsEnabled(); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransformPivot) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Pivot); \
		P_FINISH; \
		this->SetRenderTransformPivot(Z_Param_Pivot); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTranslation) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Translation); \
		P_FINISH; \
		this->SetRenderTranslation(Z_Param_Translation); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		this->SetRenderAngle(Z_Param_Angle); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderShear) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Shear); \
		P_FINISH; \
		this->SetRenderShear(Z_Param_Shear); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		this->SetRenderScale(Z_Param_Scale); \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransform) \
	{ \
		P_GET_STRUCT(FWidgetTransform,Z_Param_InTransform); \
		P_FINISH; \
		this->SetRenderTransform(Z_Param_InTransform); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUWidget(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidget(); \
	public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_INCLASS \
	private: \
	static void StaticRegisterNativesUWidget(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidget(); \
	public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidget) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidget(const UWidget& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidget(const UWidget& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget)


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_89_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_92_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Widget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Widget_h


#define FOREACH_ENUM_EWIDGETDESIGNFLAGS(op) \
	op(EWidgetDesignFlags::None) \
	op(EWidgetDesignFlags::Designing) \
	op(EWidgetDesignFlags::ShowOutline) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
