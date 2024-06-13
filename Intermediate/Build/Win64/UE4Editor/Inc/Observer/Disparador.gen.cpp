// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Disparador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparador() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ADisparador_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ADisparador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ADisparador::StaticRegisterNativesADisparador()
	{
	}
	UClass* Z_Construct_UClass_ADisparador_NoRegister()
	{
		return ADisparador::StaticClass();
	}
	struct Z_Construct_UClass_ADisparador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Disparador.h" },
		{ "ModuleRelativePath", "Disparador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparador_Statics::ClassParams = {
		&ADisparador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADisparador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparador, 1561008551);
	template<> OBSERVER_API UClass* StaticClass<ADisparador>()
	{
		return ADisparador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparador(Z_Construct_UClass_ADisparador, &ADisparador::StaticClass, TEXT("/Script/Observer"), TEXT("ADisparador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
