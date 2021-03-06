// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlatformInterfaceDelegateResult;
#ifdef ENGINE_PlatformInterfaceBase_generated_h
#error "PlatformInterfaceBase.generated.h already included, missing '#pragma once' in PlatformInterfaceBase.h"
#endif
#define ENGINE_PlatformInterfaceBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_103_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_75_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_37_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_94_DELEGATE \
struct _Script_Engine_eventPlatformInterfaceDelegate_Parms \
{ \
	FPlatformInterfaceDelegateResult Result; \
}; \
static inline void FPlatformInterfaceDelegate_DelegateWrapper(const FScriptDelegate& PlatformInterfaceDelegate, const FPlatformInterfaceDelegateResult& Result) \
{ \
	_Script_Engine_eventPlatformInterfaceDelegate_Parms Parms; \
	Parms.Result=Result; \
	PlatformInterfaceDelegate.ProcessDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPlatformInterfaceBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPlatformInterfaceBase(); \
	public: \
	DECLARE_CLASS(UPlatformInterfaceBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UPlatformInterfaceBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_INCLASS \
	private: \
	static void StaticRegisterNativesUPlatformInterfaceBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPlatformInterfaceBase(); \
	public: \
	DECLARE_CLASS(UPlatformInterfaceBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UPlatformInterfaceBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UPlatformInterfaceBase(const UPlatformInterfaceBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UPlatformInterfaceBase(const UPlatformInterfaceBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_110_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_113_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlatformInterfaceBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h


#define FOREACH_ENUM_EPLATFORMINTERFACEDATATYPE(op) \
	op(PIDT_None) \
	op(PIDT_Int) \
	op(PIDT_Float) \
	op(PIDT_String) \
	op(PIDT_Object) \
	op(PIDT_Custom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
