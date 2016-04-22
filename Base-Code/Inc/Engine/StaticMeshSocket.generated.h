// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StaticMeshSocket_generated_h
#error "StaticMeshSocket.generated.h already included, missing '#pragma once' in StaticMeshSocket.h"
#endif
#define ENGINE_StaticMeshSocket_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUStaticMeshSocket(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshSocket(); \
	public: \
	DECLARE_CLASS(UStaticMeshSocket, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMeshSocket) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UStaticMeshSocket*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUStaticMeshSocket(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshSocket(); \
	public: \
	DECLARE_CLASS(UStaticMeshSocket, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMeshSocket) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UStaticMeshSocket*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStaticMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMeshSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSocket); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UStaticMeshSocket(const UStaticMeshSocket& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStaticMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UStaticMeshSocket(const UStaticMeshSocket& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMeshSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSocket)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshSocket."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS