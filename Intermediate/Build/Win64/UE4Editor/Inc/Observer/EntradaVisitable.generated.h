// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_EntradaVisitable_generated_h
#error "EntradaVisitable.generated.h already included, missing '#pragma once' in EntradaVisitable.h"
#endif
#define OBSERVER_EntradaVisitable_generated_h

#define Observer_Source_Observer_EntradaVisitable_h_13_SPARSE_DATA
#define Observer_Source_Observer_EntradaVisitable_h_13_RPC_WRAPPERS
#define Observer_Source_Observer_EntradaVisitable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_EntradaVisitable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API UEntradaVisitable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntradaVisitable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, UEntradaVisitable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntradaVisitable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API UEntradaVisitable(UEntradaVisitable&&); \
	OBSERVER_API UEntradaVisitable(const UEntradaVisitable&); \
public:


#define Observer_Source_Observer_EntradaVisitable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API UEntradaVisitable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API UEntradaVisitable(UEntradaVisitable&&); \
	OBSERVER_API UEntradaVisitable(const UEntradaVisitable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, UEntradaVisitable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntradaVisitable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntradaVisitable)


#define Observer_Source_Observer_EntradaVisitable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEntradaVisitable(); \
	friend struct Z_Construct_UClass_UEntradaVisitable_Statics; \
public: \
	DECLARE_CLASS(UEntradaVisitable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Observer"), OBSERVER_API) \
	DECLARE_SERIALIZER(UEntradaVisitable)


#define Observer_Source_Observer_EntradaVisitable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Observer_Source_Observer_EntradaVisitable_h_13_GENERATED_UINTERFACE_BODY() \
	Observer_Source_Observer_EntradaVisitable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_EntradaVisitable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Observer_Source_Observer_EntradaVisitable_h_13_GENERATED_UINTERFACE_BODY() \
	Observer_Source_Observer_EntradaVisitable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_EntradaVisitable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEntradaVisitable() {} \
public: \
	typedef UEntradaVisitable UClassType; \
	typedef IEntradaVisitable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Observer_Source_Observer_EntradaVisitable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEntradaVisitable() {} \
public: \
	typedef UEntradaVisitable UClassType; \
	typedef IEntradaVisitable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Observer_Source_Observer_EntradaVisitable_h_10_PROLOG
#define Observer_Source_Observer_EntradaVisitable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_EntradaVisitable_h_13_SPARSE_DATA \
	Observer_Source_Observer_EntradaVisitable_h_13_RPC_WRAPPERS \
	Observer_Source_Observer_EntradaVisitable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_EntradaVisitable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_EntradaVisitable_h_13_SPARSE_DATA \
	Observer_Source_Observer_EntradaVisitable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_EntradaVisitable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class UEntradaVisitable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_EntradaVisitable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
