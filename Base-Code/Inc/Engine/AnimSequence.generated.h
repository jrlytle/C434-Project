// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequence_generated_h
#error "AnimSequence.generated.h already included, missing '#pragma once' in AnimSequence.h"
#endif
#define ENGINE_AnimSequence_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_271_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompressedOffsetData(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_239_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_219_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_201_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_186_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_171_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_143_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_107_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_72_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimSequence(); \
	public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequence*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimSequence(); \
	public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequence*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAnimSequence(const UAnimSequence& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAnimSequence(const UAnimSequence& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_328_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_331_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h


#define FOREACH_ENUM_EADDITIVEBASEPOSETYPE(op) \
	op(ABPT_None) \
	op(ABPT_RefPose) \
	op(ABPT_AnimScaled) \
	op(ABPT_AnimFrame) 
#define FOREACH_ENUM_ANIMATIONKEYFORMAT(op) \
	op(AKF_ConstantKeyLerp) \
	op(AKF_VariableKeyLerp) \
	op(AKF_PerTrackCompression) 
#define FOREACH_ENUM_ANIMATIONCOMPRESSIONFORMAT(op) \
	op(ACF_None) \
	op(ACF_Float96NoW) \
	op(ACF_Fixed48NoW) \
	op(ACF_IntervalFixed32NoW) \
	op(ACF_Fixed32NoW) \
	op(ACF_Float32NoW) \
	op(ACF_Identity) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
