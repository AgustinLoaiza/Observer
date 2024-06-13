// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Ingeniero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIngeniero() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AIngeniero_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AIngeniero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	OBSERVER_API UClass* Z_Construct_UClass_UObrero_NoRegister();
// End Cross Module References
	void AIngeniero::StaticRegisterNativesAIngeniero()
	{
	}
	UClass* Z_Construct_UClass_AIngeniero_NoRegister()
	{
		return AIngeniero::StaticClass();
	}
	struct Z_Construct_UClass_AIngeniero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIngeniero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngeniero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ingeniero.h" },
		{ "ModuleRelativePath", "Ingeniero.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIngeniero_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObrero_NoRegister, (int32)VTABLE_OFFSET(AIngeniero, IObrero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIngeniero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIngeniero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIngeniero_Statics::ClassParams = {
		&AIngeniero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIngeniero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIngeniero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIngeniero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIngeniero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIngeniero, 3339424745);
	template<> OBSERVER_API UClass* StaticClass<AIngeniero>()
	{
		return AIngeniero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIngeniero(Z_Construct_UClass_AIngeniero, &AIngeniero::StaticClass, TEXT("/Script/Observer"), TEXT("AIngeniero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIngeniero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
