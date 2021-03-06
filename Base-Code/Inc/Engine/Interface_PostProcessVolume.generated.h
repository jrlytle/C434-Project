// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_PostProcessVolume_generated_h
#error "Interface_PostProcessVolume.generated.h already included, missing '#pragma once' in Interface_PostProcessVolume.h"
#endif
#define ENGINE_Interface_PostProcessVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UInterface_PostProcessVolume(const UInterface_PostProcessVolume& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UInterface_PostProcessVolume(const UInterface_PostProcessVolume& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUInterface_PostProcessVolume(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterface_PostProcessVolume(); \
public: \
	DECLARE_CLASS(UInterface_PostProcessVolume, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_PostProcessVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
