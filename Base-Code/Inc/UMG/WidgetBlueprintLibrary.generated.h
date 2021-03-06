// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNavigationEvent;
struct FInputEvent;
struct FControllerEvent;
struct FPointerEvent;
struct FCharacterEvent;
struct FAnalogInputEvent;
struct FKeyEvent;
class UObject;
class UInterface;
class UUserWidget;
struct FSlateBrush;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
class UDragDropOperation;
struct FEventReply;
class UWidget;
struct FKey;
struct FVector2D;
struct FPaintContext;
class UFont;
struct FLinearColor;
class APlayerController;
#ifdef UMG_WidgetBlueprintLibrary_generated_h
#error "WidgetBlueprintLibrary.generated.h already included, missing '#pragma once' in WidgetBlueprintLibrary.h"
#endif
#define UMG_WidgetBlueprintLibrary_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent) \
	{ \
		P_GET_STRUCT_REF(FNavigationEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromControllerEvent) \
	{ \
		P_GET_STRUCT_REF(FControllerEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromControllerEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent) \
	{ \
		P_GET_STRUCT_REF(FCharacterEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent) \
	{ \
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FKeyEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(Z_Param_WorldContextObject,Z_Param_Interface,Z_Param_Out_FoundWidgets,Z_Param_TopLevelOnly); \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_WidgetClass,Z_Param_TopLevelOnly); \
	} \
 \
	DECLARE_FUNCTION(execDismissAllMenus) \
	{ \
		P_FINISH; \
		UWidgetBlueprintLibrary::DismissAllMenus(); \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=UWidgetBlueprintLibrary::GetDynamicMaterial(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execNoResourceBrush) \
	{ \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::NoResourceBrush(); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetBrushResourceToMaterial(Z_Param_Out_Brush,Z_Param_Material); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToTexture) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetBrushResourceToTexture(Z_Param_Out_Brush,Z_Param_Texture); \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UMaterialInterface**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResource) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UObject**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResource(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromMaterial(Z_Param_Material,Z_Param_Width,Z_Param_Height); \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromTexture(Z_Param_Texture,Z_Param_Width,Z_Param_Height); \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_BrushAsset); \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromAsset(Z_Param_BrushAsset); \
	} \
 \
	DECLARE_FUNCTION(execCancelDragDrop) \
	{ \
		P_FINISH; \
		UWidgetBlueprintLibrary::CancelDragDrop(); \
	} \
 \
	DECLARE_FUNCTION(execGetDragDroppingContent) \
	{ \
		P_FINISH; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::GetDragDroppingContent(); \
	} \
 \
	DECLARE_FUNCTION(execIsDragDropping) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::IsDragDropping(); \
	} \
 \
	DECLARE_FUNCTION(execEndDragDrop) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::EndDragDrop(Z_Param_Out_Reply); \
	} \
 \
	DECLARE_FUNCTION(execDetectDragIfPressed) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDragIfPressed(Z_Param_Out_PointerEvent,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
	} \
 \
	DECLARE_FUNCTION(execDetectDrag) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDrag(Z_Param_Out_Reply,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_STRUCT(FVector2D,Z_Param_NewMousePosition); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetMousePosition(Z_Param_Out_Reply,Z_Param_NewMousePosition); \
	} \
 \
	DECLARE_FUNCTION(execReleaseJoystickCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseJoystickCapture(Z_Param_Out_Reply,Z_Param_bInAllJoysticks); \
	} \
 \
	DECLARE_FUNCTION(execClearUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ClearUserFocus(Z_Param_Out_Reply,Z_Param_bInAllUsers); \
	} \
 \
	DECLARE_FUNCTION(execCaptureJoystick) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureJoystick(Z_Param_Out_Reply,Z_Param_CapturingWidget,Z_Param_bInAllJoysticks); \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_FocusWidget); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetUserFocus(Z_Param_Out_Reply,Z_Param_FocusWidget,Z_Param_bInAllUsers); \
	} \
 \
	DECLARE_FUNCTION(execUnlockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::UnlockMouse(Z_Param_Out_Reply); \
	} \
 \
	DECLARE_FUNCTION(execLockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::LockMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
	} \
 \
	DECLARE_FUNCTION(execReleaseMouseCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseMouseCapture(Z_Param_Out_Reply); \
	} \
 \
	DECLARE_FUNCTION(execCaptureMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
	} \
 \
	DECLARE_FUNCTION(execUnhandled) \
	{ \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Unhandled(); \
	} \
 \
	DECLARE_FUNCTION(execHandled) \
	{ \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Handled(); \
	} \
 \
	DECLARE_FUNCTION(execDrawTextFormatted) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FontSize); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FontTypeFace); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawTextFormatted(Z_Param_Out_Context,Z_Param_Out_Text,Z_Param_Position,Z_Param_Font,Z_Param_FontSize,Z_Param_FontTypeFace,Z_Param_Tint); \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawText(Z_Param_Out_Context,Z_Param_InString,Z_Param_Position,Z_Param_Tint); \
	} \
 \
	DECLARE_FUNCTION(execDrawLines) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawLines(Z_Param_Out_Context,Z_Param_Out_Points,Z_Param_Tint,Z_Param_bAntiAlias); \
	} \
 \
	DECLARE_FUNCTION(execDrawLine) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionA); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionB); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawLine(Z_Param_Out_Context,Z_Param_PositionA,Z_Param_PositionB,Z_Param_Tint,Z_Param_bAntiAlias); \
	} \
 \
	DECLARE_FUNCTION(execDrawBox) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawBox(Z_Param_Out_Context,Z_Param_Position,Z_Param_Size,Z_Param_Brush,Z_Param_Tint); \
	} \
 \
	DECLARE_FUNCTION(execSetFocusToGameViewport) \
	{ \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetFocusToGameViewport(); \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(Z_Param_Target); \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameAndUI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetInputMode_GameAndUI(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport,Z_Param_bHideCursorDuringCapture); \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_UIOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetInputMode_UIOnly(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport); \
	} \
 \
	DECLARE_FUNCTION(execCreateDragDropOperation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_OperationClass); \
		P_FINISH; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::CreateDragDropOperation(Z_Param_OperationClass); \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetType); \
		P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer); \
		P_FINISH; \
		*(UUserWidget**)Z_Param__Result=UWidgetBlueprintLibrary::Create(Z_Param_WorldContextObject,Z_Param_WidgetType,Z_Param_OwningPlayer); \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent) \
	{ \
		P_GET_STRUCT_REF(FNavigationEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromControllerEvent) \
	{ \
		P_GET_STRUCT_REF(FControllerEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromControllerEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent) \
	{ \
		P_GET_STRUCT_REF(FCharacterEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent) \
	{ \
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FKeyEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Event); \
		P_FINISH; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(Z_Param_Out_Event); \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(Z_Param_WorldContextObject,Z_Param_Interface,Z_Param_Out_FoundWidgets,Z_Param_TopLevelOnly); \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_WidgetClass,Z_Param_TopLevelOnly); \
	} \
 \
	DECLARE_FUNCTION(execDismissAllMenus) \
	{ \
		P_FINISH; \
		UWidgetBlueprintLibrary::DismissAllMenus(); \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=UWidgetBlueprintLibrary::GetDynamicMaterial(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execNoResourceBrush) \
	{ \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::NoResourceBrush(); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetBrushResourceToMaterial(Z_Param_Out_Brush,Z_Param_Material); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToTexture) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetBrushResourceToTexture(Z_Param_Out_Brush,Z_Param_Texture); \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UMaterialInterface**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResource) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		*(UObject**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResource(Z_Param_Out_Brush); \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromMaterial(Z_Param_Material,Z_Param_Width,Z_Param_Height); \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromTexture(Z_Param_Texture,Z_Param_Width,Z_Param_Height); \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_BrushAsset); \
		P_FINISH; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromAsset(Z_Param_BrushAsset); \
	} \
 \
	DECLARE_FUNCTION(execCancelDragDrop) \
	{ \
		P_FINISH; \
		UWidgetBlueprintLibrary::CancelDragDrop(); \
	} \
 \
	DECLARE_FUNCTION(execGetDragDroppingContent) \
	{ \
		P_FINISH; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::GetDragDroppingContent(); \
	} \
 \
	DECLARE_FUNCTION(execIsDragDropping) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::IsDragDropping(); \
	} \
 \
	DECLARE_FUNCTION(execEndDragDrop) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::EndDragDrop(Z_Param_Out_Reply); \
	} \
 \
	DECLARE_FUNCTION(execDetectDragIfPressed) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDragIfPressed(Z_Param_Out_PointerEvent,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
	} \
 \
	DECLARE_FUNCTION(execDetectDrag) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDrag(Z_Param_Out_Reply,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_STRUCT(FVector2D,Z_Param_NewMousePosition); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetMousePosition(Z_Param_Out_Reply,Z_Param_NewMousePosition); \
	} \
 \
	DECLARE_FUNCTION(execReleaseJoystickCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseJoystickCapture(Z_Param_Out_Reply,Z_Param_bInAllJoysticks); \
	} \
 \
	DECLARE_FUNCTION(execClearUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ClearUserFocus(Z_Param_Out_Reply,Z_Param_bInAllUsers); \
	} \
 \
	DECLARE_FUNCTION(execCaptureJoystick) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureJoystick(Z_Param_Out_Reply,Z_Param_CapturingWidget,Z_Param_bInAllJoysticks); \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_FocusWidget); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetUserFocus(Z_Param_Out_Reply,Z_Param_FocusWidget,Z_Param_bInAllUsers); \
	} \
 \
	DECLARE_FUNCTION(execUnlockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::UnlockMouse(Z_Param_Out_Reply); \
	} \
 \
	DECLARE_FUNCTION(execLockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::LockMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
	} \
 \
	DECLARE_FUNCTION(execReleaseMouseCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseMouseCapture(Z_Param_Out_Reply); \
	} \
 \
	DECLARE_FUNCTION(execCaptureMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
	} \
 \
	DECLARE_FUNCTION(execUnhandled) \
	{ \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Unhandled(); \
	} \
 \
	DECLARE_FUNCTION(execHandled) \
	{ \
		P_FINISH; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Handled(); \
	} \
 \
	DECLARE_FUNCTION(execDrawTextFormatted) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FontSize); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FontTypeFace); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawTextFormatted(Z_Param_Out_Context,Z_Param_Out_Text,Z_Param_Position,Z_Param_Font,Z_Param_FontSize,Z_Param_FontTypeFace,Z_Param_Tint); \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawText(Z_Param_Out_Context,Z_Param_InString,Z_Param_Position,Z_Param_Tint); \
	} \
 \
	DECLARE_FUNCTION(execDrawLines) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawLines(Z_Param_Out_Context,Z_Param_Out_Points,Z_Param_Tint,Z_Param_bAntiAlias); \
	} \
 \
	DECLARE_FUNCTION(execDrawLine) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionA); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionB); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawLine(Z_Param_Out_Context,Z_Param_PositionA,Z_Param_PositionB,Z_Param_Tint,Z_Param_bAntiAlias); \
	} \
 \
	DECLARE_FUNCTION(execDrawBox) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		UWidgetBlueprintLibrary::DrawBox(Z_Param_Out_Context,Z_Param_Position,Z_Param_Size,Z_Param_Brush,Z_Param_Tint); \
	} \
 \
	DECLARE_FUNCTION(execSetFocusToGameViewport) \
	{ \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetFocusToGameViewport(); \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(Z_Param_Target); \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameAndUI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetInputMode_GameAndUI(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport,Z_Param_bHideCursorDuringCapture); \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_UIOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_FINISH; \
		UWidgetBlueprintLibrary::SetInputMode_UIOnly(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport); \
	} \
 \
	DECLARE_FUNCTION(execCreateDragDropOperation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_OperationClass); \
		P_FINISH; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::CreateDragDropOperation(Z_Param_OperationClass); \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetType); \
		P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer); \
		P_FINISH; \
		*(UUserWidget**)Z_Param__Result=UWidgetBlueprintLibrary::Create(Z_Param_WorldContextObject,Z_Param_WidgetType,Z_Param_OwningPlayer); \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetBlueprintLibrary(); \
	public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UWidgetBlueprintLibrary*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetBlueprintLibrary(); \
	public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UWidgetBlueprintLibrary*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
