// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UCanvasPanelSlot;
#ifdef UMG_CanvasPanel_generated_h
#error "CanvasPanel.generated.h already included, missing '#pragma once' in CanvasPanel.h"
#endif
#define UMG_CanvasPanel_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToCanvas) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		*(UCanvasPanelSlot**)Z_Param__Result=this->AddChildToCanvas(Z_Param_Content); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToCanvas) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		*(UCanvasPanelSlot**)Z_Param__Result=this->AddChildToCanvas(Z_Param_Content); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCanvasPanel(); \
	public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UCanvasPanel) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCanvasPanel*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_INCLASS \
	private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend UMG_API class UClass* Z_Construct_UClass_UCanvasPanel(); \
	public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UCanvasPanel) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCanvasPanel*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCanvasPanel(const UCanvasPanel& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCanvasPanel(const UCanvasPanel& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel)


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_19_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CanvasPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS