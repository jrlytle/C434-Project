// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UAnimSequenceBase;
#ifdef ENGINE_AnimNotify_generated_h
#error "AnimNotify.generated.h already included, missing '#pragma once' in AnimNotify.h"
#endif
#define ENGINE_AnimNotify_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_RPC_WRAPPERS \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNotifyName) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetNotifyName_Implementation(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNotifyName) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetNotifyName_Implementation(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_EVENT_PARMS \
	struct AnimNotify_eventGetNotifyName_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct AnimNotify_eventReceived_Notify_Parms \
	{ \
		USkeletalMeshComponent* MeshComp; \
		UAnimSequenceBase* Animation; \
		bool ReturnValue; \
 \
		/** Constructor, intializes return property only **/ \
		AnimNotify_eventReceived_Notify_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


extern ENGINE_API  FName ENGINE_GetNotifyName;
extern ENGINE_API  FName ENGINE_Received_Notify;
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimNotify(); \
	public: \
	DECLARE_CLASS(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UAnimNotify) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UAnimNotify*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimNotify(); \
	public: \
	DECLARE_CLASS(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UAnimNotify) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UAnimNotify*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAnimNotify(const UAnimNotify& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UAnimNotify(const UAnimNotify& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_12_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimNotify."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
