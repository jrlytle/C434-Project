// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEM_TurnBasedMatchInterface_generated_h
#error "TurnBasedMatchInterface.generated.h already included, missing '#pragma once' in TurnBasedMatchInterface.h"
#endif
#define ONLINESUBSYSTEM_TurnBasedMatchInterface_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_EVENT_PARMS \
	struct TurnBasedMatchInterface_eventOnMatchEnded_Parms \
	{ \
		FString Match; \
	}; \
	struct TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms \
	{ \
		FString Match; \
		bool bDidBecomeActive; \
	};


extern ONLINESUBSYSTEM_API  FName ONLINESUBSYSTEM_OnMatchEnded;
extern ONLINESUBSYSTEM_API  FName ONLINESUBSYSTEM_OnMatchReceivedTurn;
#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedMatchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedMatchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedMatchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedMatchInterface); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTurnBasedMatchInterface(const UTurnBasedMatchInterface& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedMatchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTurnBasedMatchInterface(const UTurnBasedMatchInterface& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedMatchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedMatchInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedMatchInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUTurnBasedMatchInterface(); \
	friend ONLINESUBSYSTEM_API class UClass* Z_Construct_UClass_UTurnBasedMatchInterface(); \
public: \
	DECLARE_CLASS(UTurnBasedMatchInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, OnlineSubsystem, NO_API) \
	DECLARE_SERIALIZER(UTurnBasedMatchInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITurnBasedMatchInterface() {} \
public: \
	typedef UTurnBasedMatchInterface UClassType; \
	static void Execute_OnMatchEnded(UObject* O, const FString& Match); \
	static void Execute_OnMatchReceivedTurn(UObject* O, const FString& Match, bool bDidBecomeActive); \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ITurnBasedMatchInterface() {} \
public: \
	typedef UTurnBasedMatchInterface UClassType; \
	static void Execute_OnMatchEnded(UObject* O, const FString& Match); \
	static void Execute_OnMatchReceivedTurn(UObject* O, const FString& Match, bool bDidBecomeActive); \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_9_PROLOG \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_EVENT_PARMS


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystem_Public_Interfaces_TurnBasedMatchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS