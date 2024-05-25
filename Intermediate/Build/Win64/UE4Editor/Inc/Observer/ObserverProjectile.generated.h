// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef OBSERVER_ObserverProjectile_generated_h
#error "ObserverProjectile.generated.h already included, missing '#pragma once' in ObserverProjectile.h"
#endif
#define OBSERVER_ObserverProjectile_generated_h

#define Observer_Source_Observer_ObserverProjectile_h_18_SPARSE_DATA
#define Observer_Source_Observer_ObserverProjectile_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Observer_Source_Observer_ObserverProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Observer_Source_Observer_ObserverProjectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObserverProjectile(); \
	friend struct Z_Construct_UClass_AObserverProjectile_Statics; \
public: \
	DECLARE_CLASS(AObserverProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AObserverProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Observer_Source_Observer_ObserverProjectile_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAObserverProjectile(); \
	friend struct Z_Construct_UClass_AObserverProjectile_Statics; \
public: \
	DECLARE_CLASS(AObserverProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AObserverProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Observer_Source_Observer_ObserverProjectile_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObserverProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObserverProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObserverProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObserverProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObserverProjectile(AObserverProjectile&&); \
	NO_API AObserverProjectile(const AObserverProjectile&); \
public:


#define Observer_Source_Observer_ObserverProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObserverProjectile(AObserverProjectile&&); \
	NO_API AObserverProjectile(const AObserverProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObserverProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObserverProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObserverProjectile)


#define Observer_Source_Observer_ObserverProjectile_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AObserverProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AObserverProjectile, ProjectileMovement); }


#define Observer_Source_Observer_ObserverProjectile_h_15_PROLOG
#define Observer_Source_Observer_ObserverProjectile_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_ObserverProjectile_h_18_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_ObserverProjectile_h_18_SPARSE_DATA \
	Observer_Source_Observer_ObserverProjectile_h_18_RPC_WRAPPERS \
	Observer_Source_Observer_ObserverProjectile_h_18_INCLASS \
	Observer_Source_Observer_ObserverProjectile_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_ObserverProjectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_ObserverProjectile_h_18_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_ObserverProjectile_h_18_SPARSE_DATA \
	Observer_Source_Observer_ObserverProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_ObserverProjectile_h_18_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_ObserverProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AObserverProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_ObserverProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
