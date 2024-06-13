// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Boqueron_generated_h
#error "Boqueron.generated.h already included, missing '#pragma once' in Boqueron.h"
#endif
#define OBSERVER_Boqueron_generated_h

#define Observer_Source_Observer_Boqueron_h_13_SPARSE_DATA
#define Observer_Source_Observer_Boqueron_h_13_RPC_WRAPPERS
#define Observer_Source_Observer_Boqueron_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Boqueron_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoqueron(); \
	friend struct Z_Construct_UClass_ABoqueron_Statics; \
public: \
	DECLARE_CLASS(ABoqueron, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ABoqueron) \
	virtual UObject* _getUObject() const override { return const_cast<ABoqueron*>(this); }


#define Observer_Source_Observer_Boqueron_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABoqueron(); \
	friend struct Z_Construct_UClass_ABoqueron_Statics; \
public: \
	DECLARE_CLASS(ABoqueron, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ABoqueron) \
	virtual UObject* _getUObject() const override { return const_cast<ABoqueron*>(this); }


#define Observer_Source_Observer_Boqueron_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoqueron(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoqueron) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoqueron); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoqueron); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoqueron(ABoqueron&&); \
	NO_API ABoqueron(const ABoqueron&); \
public:


#define Observer_Source_Observer_Boqueron_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoqueron(ABoqueron&&); \
	NO_API ABoqueron(const ABoqueron&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoqueron); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoqueron); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoqueron)


#define Observer_Source_Observer_Boqueron_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Disparador() { return STRUCT_OFFSET(ABoqueron, Disparador); } \
	FORCEINLINE static uint32 __PPO__Escudo() { return STRUCT_OFFSET(ABoqueron, Escudo); } \
	FORCEINLINE static uint32 __PPO__MuroEspinas() { return STRUCT_OFFSET(ABoqueron, MuroEspinas); } \
	FORCEINLINE static uint32 __PPO__TrampaChina() { return STRUCT_OFFSET(ABoqueron, TrampaChina); } \
	FORCEINLINE static uint32 __PPO__newDisparador() { return STRUCT_OFFSET(ABoqueron, newDisparador); } \
	FORCEINLINE static uint32 __PPO__newEscudo() { return STRUCT_OFFSET(ABoqueron, newEscudo); } \
	FORCEINLINE static uint32 __PPO__newMuroEspinas() { return STRUCT_OFFSET(ABoqueron, newMuroEspinas); } \
	FORCEINLINE static uint32 __PPO__newTrampaChina() { return STRUCT_OFFSET(ABoqueron, newTrampaChina); }


#define Observer_Source_Observer_Boqueron_h_10_PROLOG
#define Observer_Source_Observer_Boqueron_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Boqueron_h_13_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Boqueron_h_13_SPARSE_DATA \
	Observer_Source_Observer_Boqueron_h_13_RPC_WRAPPERS \
	Observer_Source_Observer_Boqueron_h_13_INCLASS \
	Observer_Source_Observer_Boqueron_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Boqueron_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Boqueron_h_13_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Boqueron_h_13_SPARSE_DATA \
	Observer_Source_Observer_Boqueron_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Boqueron_h_13_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Boqueron_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class ABoqueron>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Boqueron_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
