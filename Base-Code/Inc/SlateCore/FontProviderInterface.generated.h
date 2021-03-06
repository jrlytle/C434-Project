// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_FontProviderInterface_generated_h
#error "FontProviderInterface.generated.h already included, missing '#pragma once' in FontProviderInterface.h"
#endif
#define SLATECORE_FontProviderInterface_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_RPC_WRAPPERS
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontProviderInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	SLATECORE_API UFontProviderInterface(const UFontProviderInterface& InCopy); \
public:


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	SLATECORE_API UFontProviderInterface(const UFontProviderInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontProviderInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontProviderInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUFontProviderInterface(); \
	friend SLATECORE_API class UClass* Z_Construct_UClass_UFontProviderInterface(); \
public: \
	DECLARE_CLASS(UFontProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, SlateCore, SLATECORE_API) \
	DECLARE_SERIALIZER(UFontProviderInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFontProviderInterface() {} \
public: \
	typedef UFontProviderInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IFontProviderInterface() {} \
public: \
	typedef UFontProviderInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_8_PROLOG
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_RPC_WRAPPERS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
