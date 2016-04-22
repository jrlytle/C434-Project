// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h
#error "GameMenuWidgetStyle.generated.h already included, missing '#pragma once' in GameMenuWidgetStyle.h"
#endif
#define GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h

#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_23_GENERATED_BODY \
	friend GAMEMENUBUILDER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameMenuStyle(); \
	GAMEMENUBUILDER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_RPC_WRAPPERS
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameMenuWidgetStyle(); \
	friend GAMEMENUBUILDER_API class UClass* Z_Construct_UClass_UGameMenuWidgetStyle(); \
	public: \
	DECLARE_CLASS(UGameMenuWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), 0, GameMenuBuilder, GAMEMENUBUILDER_API) \
	DECLARE_SERIALIZER(UGameMenuWidgetStyle) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameMenuWidgetStyle*>(this); }


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_INCLASS \
	private: \
	static void StaticRegisterNativesUGameMenuWidgetStyle(); \
	friend GAMEMENUBUILDER_API class UClass* Z_Construct_UClass_UGameMenuWidgetStyle(); \
	public: \
	DECLARE_CLASS(UGameMenuWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), 0, GameMenuBuilder, GAMEMENUBUILDER_API) \
	DECLARE_SERIALIZER(UGameMenuWidgetStyle) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameMenuWidgetStyle*>(this); }


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMenuWidgetStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEMENUBUILDER_API, UGameMenuWidgetStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMenuWidgetStyle); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const UGameMenuWidgetStyle& InCopy); \
public:


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const UGameMenuWidgetStyle& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEMENUBUILDER_API, UGameMenuWidgetStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMenuWidgetStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMenuWidgetStyle)


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_178_PROLOG
#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_RPC_WRAPPERS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_INCLASS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameMenuWidgetStyle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h


#define FOREACH_ENUM_GAMEMENULAYOUTTYPE(op) \
	op(GameMenuLayoutType::Single) \
	op(GameMenuLayoutType::SideBySide) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
