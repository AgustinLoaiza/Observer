// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_ObserverPawn_generated_h
#error "ObserverPawn.generated.h already included, missing '#pragma once' in ObserverPawn.h"
#endif
#define OBSERVER_ObserverPawn_generated_h

#define Observer_Source_Observer_ObserverPawn_h_15_SPARSE_DATA
#define Observer_Source_Observer_ObserverPawn_h_15_RPC_WRAPPERS
#define Observer_Source_Observer_ObserverPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_ObserverPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObserverPawn(); \
	friend struct Z_Construct_UClass_AObserverPawn_Statics; \
public: \
	DECLARE_CLASS(AObserverPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AObserverPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AObserverPawn*>(this); }


#define Observer_Source_Observer_ObserverPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAObserverPawn(); \
	friend struct Z_Construct_UClass_AObserverPawn_Statics; \
public: \
	DECLARE_CLASS(AObserverPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AObserverPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AObserverPawn*>(this); }


#define Observer_Source_Observer_ObserverPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObserverPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObserverPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObserverPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObserverPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObserverPawn(AObserverPawn&&); \
	NO_API AObserverPawn(const AObserverPawn&); \
public:


#define Observer_Source_Observer_ObserverPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObserverPawn(AObserverPawn&&); \
	NO_API AObserverPawn(const AObserverPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObserverPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObserverPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObserverPawn)


#define Observer_Source_Observer_ObserverPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AObserverPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AObserverPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AObserverPawn, CameraBoom); }


#define Observer_Source_Observer_ObserverPawn_h_12_PROLOG
#define Observer_Source_Observer_ObserverPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_ObserverPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_ObserverPawn_h_15_SPARSE_DATA \
	Observer_Source_Observer_ObserverPawn_h_15_RPC_WRAPPERS \
	Observer_Source_Observer_ObserverPawn_h_15_INCLASS \
	Observer_Source_Observer_ObserverPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_ObserverPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_ObserverPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_ObserverPawn_h_15_SPARSE_DATA \
	Observer_Source_Observer_ObserverPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_ObserverPawn_h_15_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_ObserverPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AObserverPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_ObserverPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
