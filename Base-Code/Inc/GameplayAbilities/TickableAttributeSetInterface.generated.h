// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_TickableAttributeSetInterface_generated_h
#error "TickableAttributeSetInterface.generated.h already included, missing '#pragma once' in TickableAttributeSetInterface.h"
#endif
#define GAMEPLAYABILITIES_TickableAttributeSetInterface_generated_h

#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UTickableAttributeSetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTickableAttributeSetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UTickableAttributeSetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableAttributeSetInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UTickableAttributeSetInterface(const UTickableAttributeSetInterface& InCopy); \
public:


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UTickableAttributeSetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYABILITIES_API UTickableAttributeSetInterface(const UTickableAttributeSetInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UTickableAttributeSetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableAttributeSetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTickableAttributeSetInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUTickableAttributeSetInterface(); \
	friend GAMEPLAYABILITIES_API class UClass* Z_Construct_UClass_UTickableAttributeSetInterface(); \
public: \
	DECLARE_CLASS(UTickableAttributeSetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, GameplayAbilities, GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UTickableAttributeSetInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITickableAttributeSetInterface() {} \
public: \
	typedef UTickableAttributeSetInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ITickableAttributeSetInterface() {} \
public: \
	typedef UTickableAttributeSetInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_8_PROLOG
#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayAbilities_Public_TickableAttributeSetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
