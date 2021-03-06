// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
struct FSlateBrush;
struct FLinearColor;
#ifdef UMG_Image_generated_h
#error "Image.generated.h already included, missing '#pragma once' in Image.h"
#endif
#define UMG_Image_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetDynamicMaterial(); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		this->SetBrushFromMaterial(Z_Param_Material); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		this->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset); \
		P_FINISH; \
		this->SetBrushFromAsset(Z_Param_Asset); \
	} \
 \
	DECLARE_FUNCTION(execSetBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		this->SetBrush(Z_Param_Out_InBrush); \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		this->SetOpacity(Z_Param_InOpacity); \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetDynamicMaterial(); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		this->SetBrushFromMaterial(Z_Param_Material); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		this->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize); \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset); \
		P_FINISH; \
		this->SetBrushFromAsset(Z_Param_Asset); \
	} \
 \
	DECLARE_FUNCTION(execSetBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		this->SetBrush(Z_Param_Out_InBrush); \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		this->SetOpacity(Z_Param_InOpacity); \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUImage(); \
	friend UMG_API class UClass* Z_Construct_UClass_UImage(); \
	public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UImage) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UImage*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUImage(); \
	friend UMG_API class UClass* Z_Construct_UClass_UImage(); \
	public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UImage) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UImage*>(this); }


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UImage(const UImage& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UImage(const UImage& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage)


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_14_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_17_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Image."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Image_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
