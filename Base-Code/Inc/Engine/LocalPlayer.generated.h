// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayer_generated_h
#error "LocalPlayer.generated.h already included, missing '#pragma once' in LocalPlayer.h"
#endif
#define ENGINE_LocalPlayer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULocalPlayer(); \
	public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UEngine) \
	virtual UObject* _getUObject() const override { return const_cast<ULocalPlayer*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_INCLASS \
	private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULocalPlayer(); \
	public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UEngine) \
	virtual UObject* _getUObject() const override { return const_cast<ULocalPlayer*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULocalPlayer(const ULocalPlayer& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULocalPlayer(const ULocalPlayer& InCopy); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer)


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_142_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_145_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocalPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS