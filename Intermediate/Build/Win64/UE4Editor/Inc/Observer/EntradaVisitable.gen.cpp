// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/EntradaVisitable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntradaVisitable() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_UEntradaVisitable_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UEntradaVisitable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void UEntradaVisitable::StaticRegisterNativesUEntradaVisitable()
	{
	}
	UClass* Z_Construct_UClass_UEntradaVisitable_NoRegister()
	{
		return UEntradaVisitable::StaticClass();
	}
	struct Z_Construct_UClass_UEntradaVisitable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntradaVisitable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntradaVisitable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EntradaVisitable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntradaVisitable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEntradaVisitable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEntradaVisitable_Statics::ClassParams = {
		&UEntradaVisitable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEntradaVisitable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEntradaVisitable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntradaVisitable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEntradaVisitable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEntradaVisitable, 706050821);
	template<> OBSERVER_API UClass* StaticClass<UEntradaVisitable>()
	{
		return UEntradaVisitable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEntradaVisitable(Z_Construct_UClass_UEntradaVisitable, &UEntradaVisitable::StaticClass, TEXT("/Script/Observer"), TEXT("UEntradaVisitable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntradaVisitable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
