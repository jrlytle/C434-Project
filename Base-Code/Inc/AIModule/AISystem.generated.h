// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISystem_generated_h
#error "AISystem.generated.h already included, missing '#pragma once' in AISystem.h"
#endif
#define AIMODULE_AISystem_generated_h

#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAILoggingVerbose) \
	{ \
		P_FINISH; \
		this->AILoggingVerbose(); \
	} \
 \
	DECLARE_FUNCTION(execAIIgnorePlayers) \
	{ \
		P_FINISH; \
		this->AIIgnorePlayers(); \
	}


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAILoggingVerbose) \
	{ \
		P_FINISH; \
		this->AILoggingVerbose(); \
	} \
 \
	DECLARE_FUNCTION(execAIIgnorePlayers) \
	{ \
		P_FINISH; \
		this->AIIgnorePlayers(); \
	}


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAISystem(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAISystem(); \
	public: \
	DECLARE_CLASS(UAISystem, UAISystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAISystem) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAISystem*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesUAISystem(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAISystem(); \
	public: \
	DECLARE_CLASS(UAISystem, UAISystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UAISystem) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAISystem*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystem); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAISystem(const UAISystem& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAISystem(const UAISystem& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystem)


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_20_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AISystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_AISystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
