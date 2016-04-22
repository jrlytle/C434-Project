// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavPathObserverInterface_generated_h
#error "NavPathObserverInterface.generated.h already included, missing '#pragma once' in NavPathObserverInterface.h"
#endif
#define ENGINE_NavPathObserverInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavPathObserverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavPathObserverInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavPathObserverInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavPathObserverInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UNavPathObserverInterface(const UNavPathObserverInterface& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavPathObserverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UNavPathObserverInterface(const UNavPathObserverInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavPathObserverInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavPathObserverInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavPathObserverInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUNavPathObserverInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavPathObserverInterface(); \
public: \
	DECLARE_CLASS(UNavPathObserverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UNavPathObserverInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavPathObserverInterface() {} \
public: \
	typedef UNavPathObserverInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~INavPathObserverInterface() {} \
public: \
	typedef UNavPathObserverInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_6_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
