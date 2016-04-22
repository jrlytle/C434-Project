// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_CollisionDataProvider_generated_h
#error "Interface_CollisionDataProvider.generated.h already included, missing '#pragma once' in Interface_CollisionDataProvider.h"
#endif
#define ENGINE_Interface_CollisionDataProvider_generated_h

#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_40_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTriMeshCollisionData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTriIndices(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterface_CollisionDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterface_CollisionDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUInterface_CollisionDataProvider(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterface_CollisionDataProvider(); \
public: \
	DECLARE_CLASS(UInterface_CollisionDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInterface_CollisionDataProvider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_64_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_67_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
