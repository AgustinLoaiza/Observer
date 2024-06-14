// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Meteoro_generated_h
#error "Meteoro.generated.h already included, missing '#pragma once' in Meteoro.h"
#endif
#define OBSERVER_Meteoro_generated_h

#define Observer_Source_Observer_Meteoro_h_15_SPARSE_DATA
#define Observer_Source_Observer_Meteoro_h_15_RPC_WRAPPERS
#define Observer_Source_Observer_Meteoro_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Meteoro_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeteoro(); \
	friend struct Z_Construct_UClass_AMeteoro_Statics; \
public: \
	DECLARE_CLASS(AMeteoro, AObstaculos, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AMeteoro)


#define Observer_Source_Observer_Meteoro_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMeteoro(); \
	friend struct Z_Construct_UClass_AMeteoro_Statics; \
public: \
	DECLARE_CLASS(AMeteoro, AObstaculos, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AMeteoro)


#define Observer_Source_Observer_Meteoro_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeteoro(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeteoro) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeteoro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeteoro); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeteoro(AMeteoro&&); \
	NO_API AMeteoro(const AMeteoro&); \
public:


#define Observer_Source_Observer_Meteoro_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeteoro(AMeteoro&&); \
	NO_API AMeteoro(const AMeteoro&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeteoro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeteoro); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeteoro)


#define Observer_Source_Observer_Meteoro_h_15_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_Meteoro_h_12_PROLOG
#define Observer_Source_Observer_Meteoro_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Meteoro_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Meteoro_h_15_SPARSE_DATA \
	Observer_Source_Observer_Meteoro_h_15_RPC_WRAPPERS \
	Observer_Source_Observer_Meteoro_h_15_INCLASS \
	Observer_Source_Observer_Meteoro_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Meteoro_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Meteoro_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Meteoro_h_15_SPARSE_DATA \
	Observer_Source_Observer_Meteoro_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Meteoro_h_15_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Meteoro_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AMeteoro>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Meteoro_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
