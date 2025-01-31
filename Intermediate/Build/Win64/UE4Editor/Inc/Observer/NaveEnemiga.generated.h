// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_NaveEnemiga_generated_h
#error "NaveEnemiga.generated.h already included, missing '#pragma once' in NaveEnemiga.h"
#endif
#define OBSERVER_NaveEnemiga_generated_h

#define Observer_Source_Observer_NaveEnemiga_h_14_SPARSE_DATA
#define Observer_Source_Observer_NaveEnemiga_h_14_RPC_WRAPPERS
#define Observer_Source_Observer_NaveEnemiga_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_NaveEnemiga_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveEnemiga(); \
	friend struct Z_Construct_UClass_ANaveEnemiga_Statics; \
public: \
	DECLARE_CLASS(ANaveEnemiga, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ANaveEnemiga) \
	virtual UObject* _getUObject() const override { return const_cast<ANaveEnemiga*>(this); }


#define Observer_Source_Observer_NaveEnemiga_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANaveEnemiga(); \
	friend struct Z_Construct_UClass_ANaveEnemiga_Statics; \
public: \
	DECLARE_CLASS(ANaveEnemiga, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ANaveEnemiga) \
	virtual UObject* _getUObject() const override { return const_cast<ANaveEnemiga*>(this); }


#define Observer_Source_Observer_NaveEnemiga_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveEnemiga(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveEnemiga) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveEnemiga); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveEnemiga(ANaveEnemiga&&); \
	NO_API ANaveEnemiga(const ANaveEnemiga&); \
public:


#define Observer_Source_Observer_NaveEnemiga_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveEnemiga(ANaveEnemiga&&); \
	NO_API ANaveEnemiga(const ANaveEnemiga&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveEnemiga); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveEnemiga)


#define Observer_Source_Observer_NaveEnemiga_h_14_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_NaveEnemiga_h_11_PROLOG
#define Observer_Source_Observer_NaveEnemiga_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_NaveEnemiga_h_14_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_NaveEnemiga_h_14_SPARSE_DATA \
	Observer_Source_Observer_NaveEnemiga_h_14_RPC_WRAPPERS \
	Observer_Source_Observer_NaveEnemiga_h_14_INCLASS \
	Observer_Source_Observer_NaveEnemiga_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_NaveEnemiga_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_NaveEnemiga_h_14_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_NaveEnemiga_h_14_SPARSE_DATA \
	Observer_Source_Observer_NaveEnemiga_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_NaveEnemiga_h_14_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_NaveEnemiga_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class ANaveEnemiga>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_NaveEnemiga_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
