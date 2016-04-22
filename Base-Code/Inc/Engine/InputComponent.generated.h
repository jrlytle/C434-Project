// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FKey;
#ifdef ENGINE_InputComponent_generated_h
#error "InputComponent.generated.h already included, missing '#pragma once' in InputComponent.h"
#endif
#define ENGINE_InputComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_458_DELEGATE \
struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms \
{ \
	float Value; \
}; \
static inline void FInputGestureHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputGestureHandlerDynamicSignature, float Value) \
{ \
	_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms Parms; \
	Parms.Value=Value; \
	InputGestureHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_401_DELEGATE \
struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms \
{ \
	FVector AxisValue; \
}; \
static inline void FInputVectorAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputVectorAxisHandlerDynamicSignature, FVector AxisValue) \
{ \
	_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputVectorAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_309_DELEGATE \
struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms \
{ \
	float AxisValue; \
}; \
static inline void FInputAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputAxisHandlerDynamicSignature, float AxisValue) \
{ \
	_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms Parms; \
	Parms.AxisValue=AxisValue; \
	InputAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_262_DELEGATE \
struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	FVector Location; \
}; \
static inline void FInputTouchHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputTouchHandlerDynamicSignature, ETouchIndex::Type FingerIndex, FVector Location) \
{ \
	_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.Location=Location; \
	InputTouchHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_93_DELEGATE \
struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms \
{ \
	FKey Key; \
}; \
static inline void FInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputActionHandlerDynamicSignature, FKey Key) \
{ \
	_Script_Engine_eventInputActionHandlerDynamicSignature_Parms Parms; \
	Parms.Key=Key; \
	InputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		this->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		this->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetControllerKeyTimeDown(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execGetTouchState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		this->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetControllerVectorKeyState(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetControllerAnalogKeyState(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustReleased(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustPressed(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execIsControllerKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsControllerKeyDown(Z_Param_Key); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		this->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		this->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetControllerKeyTimeDown(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execGetTouchState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		this->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->GetControllerVectorKeyState(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execGetControllerAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetControllerAnalogKeyState(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustReleased(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execWasControllerKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->WasControllerKeyJustPressed(Z_Param_Key); \
	} \
 \
	DECLARE_FUNCTION(execIsControllerKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsControllerKeyDown(Z_Param_Key); \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInputComponent(); \
	public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UInputComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_INCLASS \
	private: \
	static void StaticRegisterNativesUInputComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInputComponent(); \
	public: \
	DECLARE_CLASS(UInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInputComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UInputComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInputComponent(const UInputComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInputComponent(const UInputComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_549_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_553_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h


#define FOREACH_ENUM_ECONTROLLERANALOGSTICK(op) \
	op(EControllerAnalogStick::CAS_LeftStick) \
	op(EControllerAnalogStick::CAS_RightStick) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
