// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/MementoVivere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMementoVivere() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AMementoVivere_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AMementoVivere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	OBSERVER_API UClass* Z_Construct_UClass_UMemento_NoRegister();
// End Cross Module References
	void AMementoVivere::StaticRegisterNativesAMementoVivere()
	{
	}
	UClass* Z_Construct_UClass_AMementoVivere_NoRegister()
	{
		return AMementoVivere::StaticClass();
	}
	struct Z_Construct_UClass_AMementoVivere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMementoVivere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMementoVivere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MementoVivere.h" },
		{ "ModuleRelativePath", "MementoVivere.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMementoVivere_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMemento_NoRegister, (int32)VTABLE_OFFSET(AMementoVivere, IMemento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMementoVivere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMementoVivere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMementoVivere_Statics::ClassParams = {
		&AMementoVivere::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMementoVivere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMementoVivere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMementoVivere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMementoVivere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMementoVivere, 1048231532);
	template<> OBSERVER_API UClass* StaticClass<AMementoVivere>()
	{
		return AMementoVivere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMementoVivere(Z_Construct_UClass_AMementoVivere, &AMementoVivere::StaticClass, TEXT("/Script/Observer"), TEXT("AMementoVivere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMementoVivere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
