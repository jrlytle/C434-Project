// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class ULocalPlayer;
class UUserWidget;
#ifdef UMG_WidgetComponent_generated_h
#error "WidgetComponent.generated.h already included, missing '#pragma once' in WidgetComponent.h"
#endif
#define UMG_WidgetComponent_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaxInteractionDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		this->SetMaxInteractionDistance(Z_Param_Distance); \
	} \
 \
	DECLARE_FUNCTION(execGetMaxInteractionDistance) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMaxInteractionDistance(); \
	} \
 \
	DECLARE_FUNCTION(execSetDrawSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		this->SetDrawSize(Z_Param_Size); \
	} \
 \
	DECLARE_FUNCTION(execGetDrawSize) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->GetDrawSize(); \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerPlayer) \
	{ \
		P_FINISH; \
		*(ULocalPlayer**)Z_Param__Result=this->GetOwnerPlayer(); \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		this->SetOwnerPlayer(Z_Param_LocalPlayer); \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		this->SetWidget(Z_Param_Widget); \
	} \
 \
	DECLARE_FUNCTION(execGetUserWidgetObject) \
	{ \
		P_FINISH; \
		*(UUserWidget**)Z_Param__Result=this->GetUserWidgetObject(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaxInteractionDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_FINISH; \
		this->SetMaxInteractionDistance(Z_Param_Distance); \
	} \
 \
	DECLARE_FUNCTION(execGetMaxInteractionDistance) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetMaxInteractionDistance(); \
	} \
 \
	DECLARE_FUNCTION(execSetDrawSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		this->SetDrawSize(Z_Param_Size); \
	} \
 \
	DECLARE_FUNCTION(execGetDrawSize) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->GetDrawSize(); \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerPlayer) \
	{ \
		P_FINISH; \
		*(ULocalPlayer**)Z_Param__Result=this->GetOwnerPlayer(); \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		this->SetOwnerPlayer(Z_Param_LocalPlayer); \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		this->SetWidget(Z_Param_Widget); \
	} \
 \
	DECLARE_FUNCTION(execGetUserWidgetObject) \
	{ \
		P_FINISH; \
		*(UUserWidget**)Z_Param__Result=this->GetUserWidgetObject(); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetComponent(); \
	public: \
	DECLARE_CLASS(UWidgetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidgetComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UWidgetComponent*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_INCLASS \
	private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetComponent(); \
	public: \
	DECLARE_CLASS(UWidgetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidgetComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UWidgetComponent*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidgetComponent(const UWidgetComponent& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidgetComponent(const UWidgetComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_30_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h


#define FOREACH_ENUM_EWIDGETBLENDMODE(op) \
	op(EWidgetBlendMode::Opaque) \
	op(EWidgetBlendMode::Masked) \
	op(EWidgetBlendMode::Transparent) 
#define FOREACH_ENUM_EWIDGETSPACE(op) \
	op(EWidgetSpace::World) \
	op(EWidgetSpace::Screen) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
