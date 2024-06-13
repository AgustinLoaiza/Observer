// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/ComponenteBoqueron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteBoqueron() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_UComponenteBoqueron_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UComponenteBoqueron();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteBoqueron::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void UComponenteBoqueron::StaticRegisterNativesUComponenteBoqueron()
	{
		UClass* Class = UComponenteBoqueron::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &UComponenteBoqueron::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteBoqueron_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteBoqueron_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteBoqueron.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteBoqueron_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteBoqueron, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteBoqueron_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteBoqueron_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteBoqueron_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteBoqueron_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteBoqueron_NoRegister()
	{
		return UComponenteBoqueron::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteBoqueron_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteBoqueron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteBoqueron_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteBoqueron_Spawn, "Spawn" }, // 2095320504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteBoqueron_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComponenteBoqueron.h" },
		{ "ModuleRelativePath", "ComponenteBoqueron.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteBoqueron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteBoqueron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteBoqueron_Statics::ClassParams = {
		&UComponenteBoqueron::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteBoqueron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteBoqueron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteBoqueron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteBoqueron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteBoqueron, 3065869224);
	template<> OBSERVER_API UClass* StaticClass<UComponenteBoqueron>()
	{
		return UComponenteBoqueron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteBoqueron(Z_Construct_UClass_UComponenteBoqueron, &UComponenteBoqueron::StaticClass, TEXT("/Script/Observer"), TEXT("UComponenteBoqueron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteBoqueron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
