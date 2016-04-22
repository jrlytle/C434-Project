// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateEnums_generated_h
#error "SlateEnums.generated.h already included, missing '#pragma once' in SlateEnums.h"
#endif
#define SLATECORE_SlateEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h


#define FOREACH_ENUM_ESELECTINFO(op) \
	op(ESelectInfo::OnKeyPress) \
	op(ESelectInfo::OnNavigation) \
	op(ESelectInfo::OnMouseClick) \
	op(ESelectInfo::Direct) 
#define FOREACH_ENUM_ETEXTCOMMIT(op) \
	op(ETextCommit::Default) \
	op(ETextCommit::OnEnter) \
	op(ETextCommit::OnUserMovedFocus) \
	op(ETextCommit::OnCleared) 
#define FOREACH_ENUM_ESCROLLDIRECTION(op) \
	op(Scroll_Down) \
	op(Scroll_Up) 
#define FOREACH_ENUM_EORIENTATION(op) \
	op(Orient_Horizontal) \
	op(Orient_Vertical) 
#define FOREACH_ENUM_EMENUPLACEMENT(op) \
	op(MenuPlacement_BelowAnchor) \
	op(MenuPlacement_CenteredBelowAnchor) \
	op(MenuPlacement_ComboBox) \
	op(MenuPlacement_ComboBoxRight) \
	op(MenuPlacement_MenuRight) \
	op(MenuPlacement_AboveAnchor) \
	op(MenuPlacement_CenteredAboveAnchor) \
	op(MenuPlacement_MenuLeft) 
#define FOREACH_ENUM_EVERTICALALIGNMENT(op) \
	op(VAlign_Fill) \
	op(VAlign_Top) \
	op(VAlign_Center) \
	op(VAlign_Bottom) 
#define FOREACH_ENUM_EHORIZONTALALIGNMENT(op) \
	op(HAlign_Fill) \
	op(HAlign_Left) \
	op(HAlign_Center) \
	op(HAlign_Right) 
#define FOREACH_ENUM_EUINAVIGATION(op) \
	op(EUINavigation::Left) \
	op(EUINavigation::Right) \
	op(EUINavigation::Up) \
	op(EUINavigation::Down) \
	op(EUINavigation::Next) \
	op(EUINavigation::Previous) \
	op(EUINavigation::Num) \
	op(EUINavigation::Invalid) 
#define FOREACH_ENUM_EBUTTONPRESSMETHOD(op) \
	op(EButtonPressMethod::DownAndUp) \
	op(EButtonPressMethod::ButtonPress) \
	op(EButtonPressMethod::ButtonRelease) 
#define FOREACH_ENUM_EBUTTONTOUCHMETHOD(op) \
	op(EButtonTouchMethod::DownAndUp) \
	op(EButtonTouchMethod::PreciseTap) 
#define FOREACH_ENUM_EBUTTONCLICKMETHOD(op) \
	op(EButtonClickMethod::DownAndUp) \
	op(EButtonClickMethod::MouseDown) \
	op(EButtonClickMethod::MouseUp) \
	op(EButtonClickMethod::PreciseClick) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
