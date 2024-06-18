// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/FabricaDeCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaDeCapsulas() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AFabricaDeCapsulas_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AFabricaDeCapsulas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	OBSERVER_API UClass* Z_Construct_UClass_ACapsulas_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFabricaDeCapsulas::execCrearCapsula)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CapsulaAFabricar);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACapsulas**)Z_Param__Result=AFabricaDeCapsulas::CrearCapsula(Z_Param_CapsulaAFabricar,Z_Param_World,Z_Param_SpawnLocation,Z_Param_SpawnRotation);
		P_NATIVE_END;
	}
	void AFabricaDeCapsulas::StaticRegisterNativesAFabricaDeCapsulas()
	{
		UClass* Class = AFabricaDeCapsulas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearCapsula", &AFabricaDeCapsulas::execCrearCapsula },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics
	{
		struct FabricaDeCapsulas_eventCrearCapsula_Parms
		{
			FString CapsulaAFabricar;
			UWorld* World;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			ACapsulas* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CapsulaAFabricar;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_CapsulaAFabricar = { "CapsulaAFabricar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeCapsulas_eventCrearCapsula_Parms, CapsulaAFabricar), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeCapsulas_eventCrearCapsula_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeCapsulas_eventCrearCapsula_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeCapsulas_eventCrearCapsula_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeCapsulas_eventCrearCapsula_Parms, ReturnValue), Z_Construct_UClass_ACapsulas_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_CapsulaAFabricar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::Function_MetaDataParams[] = {
		{ "Category", "FabricaDeCapsulas" },
		{ "ModuleRelativePath", "FabricaDeCapsulas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabricaDeCapsulas, nullptr, "CrearCapsula", nullptr, nullptr, sizeof(FabricaDeCapsulas_eventCrearCapsula_Parms), Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFabricaDeCapsulas_NoRegister()
	{
		return AFabricaDeCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaDeCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaDeCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFabricaDeCapsulas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFabricaDeCapsulas_CrearCapsula, "CrearCapsula" }, // 1147536830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaDeCapsulas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaDeCapsulas.h" },
		{ "ModuleRelativePath", "FabricaDeCapsulas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaDeCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaDeCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaDeCapsulas_Statics::ClassParams = {
		&AFabricaDeCapsulas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaDeCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaDeCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaDeCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaDeCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaDeCapsulas, 1460653021);
	template<> OBSERVER_API UClass* StaticClass<AFabricaDeCapsulas>()
	{
		return AFabricaDeCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaDeCapsulas(Z_Construct_UClass_AFabricaDeCapsulas, &AFabricaDeCapsulas::StaticClass, TEXT("/Script/Observer"), TEXT("AFabricaDeCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaDeCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
