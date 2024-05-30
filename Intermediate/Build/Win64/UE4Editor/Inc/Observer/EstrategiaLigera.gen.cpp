// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/EstrategiaLigera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaLigera() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AEstrategiaLigera_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AEstrategiaLigera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void AEstrategiaLigera::StaticRegisterNativesAEstrategiaLigera()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaLigera_NoRegister()
	{
		return AEstrategiaLigera::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaLigera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaLigera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaLigera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaLigera.h" },
		{ "ModuleRelativePath", "EstrategiaLigera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaLigera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaLigera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaLigera_Statics::ClassParams = {
		&AEstrategiaLigera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaLigera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaLigera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaLigera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaLigera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaLigera, 3120932325);
	template<> OBSERVER_API UClass* StaticClass<AEstrategiaLigera>()
	{
		return AEstrategiaLigera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaLigera(Z_Construct_UClass_AEstrategiaLigera, &AEstrategiaLigera::StaticClass, TEXT("/Script/Observer"), TEXT("AEstrategiaLigera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaLigera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
