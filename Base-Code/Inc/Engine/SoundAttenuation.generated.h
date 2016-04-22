// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundAttenuation_generated_h
#error "SoundAttenuation.generated.h already included, missing '#pragma once' in SoundAttenuation.h"
#endif
#define ENGINE_SoundAttenuation_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_56_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAttenuationSettings(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundAttenuation(); \
	public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<USoundAttenuation*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_INCLASS \
	private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundAttenuation(); \
	public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<USoundAttenuation*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USoundAttenuation(const USoundAttenuation& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API USoundAttenuation(const USoundAttenuation& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_181_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_184_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundAttenuation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h


#define FOREACH_ENUM_ESOUNDSPATIALIZATIONALGORITHM(op) \
	op(SPATIALIZATION_Default) \
	op(SPATIALIZATION_HRTF) 
#define FOREACH_ENUM_EATTENUATIONSHAPE(op) \
	op(EAttenuationShape::Sphere) \
	op(EAttenuationShape::Capsule) \
	op(EAttenuationShape::Box) \
	op(EAttenuationShape::Cone) 
#define FOREACH_ENUM_ESOUNDDISTANCECALC(op) \
	op(SOUNDDISTANCE_Normal) \
	op(SOUNDDISTANCE_InfiniteXYPlane) \
	op(SOUNDDISTANCE_InfiniteXZPlane) \
	op(SOUNDDISTANCE_InfiniteYZPlane) 
#define FOREACH_ENUM_ESOUNDDISTANCEMODEL(op) \
	op(ATTENUATION_Linear) \
	op(ATTENUATION_Logarithmic) \
	op(ATTENUATION_Inverse) \
	op(ATTENUATION_LogReverse) \
	op(ATTENUATION_NaturalSound) \
	op(ATTENUATION_Custom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS