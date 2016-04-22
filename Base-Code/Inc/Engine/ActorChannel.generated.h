// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorChannel_generated_h
#error "ActorChannel.generated.h already included, missing '#pragma once' in ActorChannel.h"
#endif
#define ENGINE_ActorChannel_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UActorChannel(); \
	public: \
	DECLARE_CLASS(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UActorChannel) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActorChannel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_INCLASS \
	private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UActorChannel(); \
	public: \
	DECLARE_CLASS(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UActorChannel) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActorChannel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UActorChannel(const UActorChannel& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UActorChannel(const UActorChannel& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel)


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ActorChannel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
