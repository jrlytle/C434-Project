// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RendererSettings_generated_h
#error "RendererSettings.generated.h already included, missing '#pragma once' in RendererSettings.h"
#endif
#define ENGINE_RendererSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesURendererSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URendererSettings(); \
	public: \
	DECLARE_CLASS(URendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(URendererSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<URendererSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_INCLASS \
	private: \
	static void StaticRegisterNativesURendererSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URendererSettings(); \
	public: \
	DECLARE_CLASS(URendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(URendererSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<URendererSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API URendererSettings(const URendererSettings& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API URendererSettings(const URendererSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_91_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_94_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RendererSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h


#define FOREACH_ENUM_EANTIALIASINGMETHODUI(op) \
	op(EAntiAliasingMethodUI::AAM_None) \
	op(EAntiAliasingMethodUI::AAM_FXAA) \
	op(EAntiAliasingMethodUI::AAM_TemporalAA) 
#define FOREACH_ENUM_EEARLYZPASS(op) \
	op(EEarlyZPass::None) \
	op(EEarlyZPass::OpaqueOnly) \
	op(EEarlyZPass::OpaqueAndMasked) \
	op(EEarlyZPass::Auto) 
#define FOREACH_ENUM_ECUSTOMDEPTHSTENCIL(op) \
	op(ECustomDepthStencil::Disabled) \
	op(ECustomDepthStencil::Enabled) \
	op(ECustomDepthStencil::EnabledOnDemand) \
	op(ECustomDepthStencil::EnabledWithStencil) 
#define FOREACH_ENUM_ECOMPOSITINGSAMPLECOUNT(op) \
	op(ECompositingSampleCount::One) \
	op(ECompositingSampleCount::Two) \
	op(ECompositingSampleCount::Four) \
	op(ECompositingSampleCount::Eight) 
#define FOREACH_ENUM_ECLEARSCENEOPTIONS(op) \
	op(EClearSceneOptions::NoClear) \
	op(EClearSceneOptions::HardwareClear) \
	op(EClearSceneOptions::QuadAtMaxZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
