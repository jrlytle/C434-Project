// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIPerceptionListenerInterface_generated_h
#error "AIPerceptionListenerInterface.generated.h already included, missing '#pragma once' in AIPerceptionListenerInterface.h"
#endif
#define AIMODULE_AIPerceptionListenerInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionListenerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionListenerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionListenerInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAIPerceptionListenerInterface(const UAIPerceptionListenerInterface& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAIPerceptionListenerInterface(const UAIPerceptionListenerInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionListenerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionListenerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionListenerInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUAIPerceptionListenerInterface(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAIPerceptionListenerInterface(); \
public: \
	DECLARE_CLASS(UAIPerceptionListenerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionListenerInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAIPerceptionListenerInterface() {} \
public: \
	typedef UAIPerceptionListenerInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IAIPerceptionListenerInterface() {} \
public: \
	typedef UAIPerceptionListenerInterface UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_9_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
