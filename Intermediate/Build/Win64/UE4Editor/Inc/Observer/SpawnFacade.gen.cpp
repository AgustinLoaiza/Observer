// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/SpawnFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnFacade() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ASpawnFacade_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ASpawnFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ASpawnFacade::StaticRegisterNativesASpawnFacade()
	{
	}
	UClass* Z_Construct_UClass_ASpawnFacade_NoRegister()
	{
		return ASpawnFacade::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnFacade.h" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnFacade_Statics::ClassParams = {
		&ASpawnFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnFacade, 3263063113);
	template<> OBSERVER_API UClass* StaticClass<ASpawnFacade>()
	{
		return ASpawnFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnFacade(Z_Construct_UClass_ASpawnFacade, &ASpawnFacade::StaticClass, TEXT("/Script/Observer"), TEXT("ASpawnFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
