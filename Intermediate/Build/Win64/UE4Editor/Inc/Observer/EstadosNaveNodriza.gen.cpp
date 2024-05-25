// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/EstadosNaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadosNaveNodriza() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_UEstadosNaveNodriza_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UEstadosNaveNodriza();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void UEstadosNaveNodriza::StaticRegisterNativesUEstadosNaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_UEstadosNaveNodriza_NoRegister()
	{
		return UEstadosNaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_UEstadosNaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstadosNaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstadosNaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstadosNaveNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstadosNaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstadosNaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstadosNaveNodriza_Statics::ClassParams = {
		&UEstadosNaveNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstadosNaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstadosNaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstadosNaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstadosNaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstadosNaveNodriza, 2806243477);
	template<> OBSERVER_API UClass* StaticClass<UEstadosNaveNodriza>()
	{
		return UEstadosNaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstadosNaveNodriza(Z_Construct_UClass_UEstadosNaveNodriza, &UEstadosNaveNodriza::StaticClass, TEXT("/Script/Observer"), TEXT("UEstadosNaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstadosNaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
