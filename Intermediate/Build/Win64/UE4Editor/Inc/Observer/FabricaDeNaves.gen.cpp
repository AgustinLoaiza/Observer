// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/FabricaDeNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaDeNaves() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AFabricaDeNaves_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AFabricaDeNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	OBSERVER_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFabricaDeNaves::execFabricarNave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FabricarNaves);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANaveEnemiga**)Z_Param__Result=AFabricaDeNaves::FabricarNave(Z_Param_FabricarNaves,Z_Param_World,Z_Param_SpawnLocation,Z_Param_SpawnRotation);
		P_NATIVE_END;
	}
	void AFabricaDeNaves::StaticRegisterNativesAFabricaDeNaves()
	{
		UClass* Class = AFabricaDeNaves::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FabricarNave", &AFabricaDeNaves::execFabricarNave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics
	{
		struct FabricaDeNaves_eventFabricarNave_Parms
		{
			FString FabricarNaves;
			UWorld* World;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			ANaveEnemiga* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FabricarNaves;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_FabricarNaves = { "FabricarNaves", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeNaves_eventFabricarNave_Parms, FabricarNaves), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeNaves_eventFabricarNave_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeNaves_eventFabricarNave_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeNaves_eventFabricarNave_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaDeNaves_eventFabricarNave_Parms, ReturnValue), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_FabricarNaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::Function_MetaDataParams[] = {
		{ "Category", "FabricaDeNaves" },
		{ "ModuleRelativePath", "FabricaDeNaves.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabricaDeNaves, nullptr, "FabricarNave", nullptr, nullptr, sizeof(FabricaDeNaves_eventFabricarNave_Parms), Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabricaDeNaves_FabricarNave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabricaDeNaves_FabricarNave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFabricaDeNaves_NoRegister()
	{
		return AFabricaDeNaves::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaDeNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaDeNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFabricaDeNaves_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFabricaDeNaves_FabricarNave, "FabricarNave" }, // 4277713200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaDeNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaDeNaves.h" },
		{ "ModuleRelativePath", "FabricaDeNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaDeNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaDeNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaDeNaves_Statics::ClassParams = {
		&AFabricaDeNaves::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaDeNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaDeNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaDeNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaDeNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaDeNaves, 3962573643);
	template<> OBSERVER_API UClass* StaticClass<AFabricaDeNaves>()
	{
		return AFabricaDeNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaDeNaves(Z_Construct_UClass_AFabricaDeNaves, &AFabricaDeNaves::StaticClass, TEXT("/Script/Observer"), TEXT("AFabricaDeNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaDeNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
