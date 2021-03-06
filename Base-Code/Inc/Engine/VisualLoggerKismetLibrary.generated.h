// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FBox;
struct FLinearColor;
struct FVector;
#ifdef ENGINE_VisualLoggerKismetLibrary_generated_h
#error "VisualLoggerKismetLibrary.generated.h already included, missing '#pragma once' in VisualLoggerKismetLibrary.h"
#endif
#define ENGINE_VisualLoggerKismetLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBox,Z_Param_BoxShape); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory); \
	} \
 \
	DECLARE_FUNCTION(execLogLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory); \
	} \
 \
	DECLARE_FUNCTION(execLogText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory); \
	}


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBox,Z_Param_BoxShape); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory); \
	} \
 \
	DECLARE_FUNCTION(execLogLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory); \
	} \
 \
	DECLARE_FUNCTION(execLogText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory); \
	}


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary(); \
	public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVisualLoggerKismetLibrary*>(this); }


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary(); \
	public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVisualLoggerKismetLibrary*>(this); }


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary)


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VisualLoggerKismetLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
