// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequenceBase_generated_h
#error "AnimSequenceBase.generated.h already included, missing '#pragma once' in AnimSequenceBase.h"
#endif
#define ENGINE_AnimSequenceBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayLength) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPlayLength(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayLength) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetPlayLength(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimSequenceBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimSequenceBase(); \
	public: \
	DECLARE_CLASS(UAnimSequenceBase, UAnimationAsset, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSequenceBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequenceBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimSequenceBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimSequenceBase(); \
	public: \
	DECLARE_CLASS(UAnimSequenceBase, UAnimationAsset, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSequenceBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequenceBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSequenceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSequenceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UAnimSequenceBase(const UAnimSequenceBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSequenceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UAnimSequenceBase(const UAnimSequenceBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSequenceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceBase)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_27_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequenceBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h


#define FOREACH_ENUM_ETYPEADVANCEANIM(op) \
	op(ETAA_Default) \
	op(ETAA_Finished) \
	op(ETAA_Looped) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
