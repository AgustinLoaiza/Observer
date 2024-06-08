// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Cuidador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuidador() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ACuidador_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ACuidador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	OBSERVER_API UClass* Z_Construct_UClass_AMementoVivere_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AObserverPawn_NoRegister();
// End Cross Module References
	void ACuidador::StaticRegisterNativesACuidador()
	{
	}
	UClass* Z_Construct_UClass_ACuidador_NoRegister()
	{
		return ACuidador::StaticClass();
	}
	struct Z_Construct_UClass_ACuidador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MementoVivere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MementoVivere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuidador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuidador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cuidador.h" },
		{ "ModuleRelativePath", "Cuidador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuidador_Statics::NewProp_MementoVivere_MetaData[] = {
		{ "Category", "Cuidador" },
		{ "ModuleRelativePath", "Cuidador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuidador_Statics::NewProp_MementoVivere = { "MementoVivere", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACuidador, MementoVivere), Z_Construct_UClass_AMementoVivere_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACuidador_Statics::NewProp_MementoVivere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACuidador_Statics::NewProp_MementoVivere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuidador_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Cuidador" },
		{ "ModuleRelativePath", "Cuidador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuidador_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACuidador, Pawn), Z_Construct_UClass_AObserverPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACuidador_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACuidador_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACuidador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuidador_Statics::NewProp_MementoVivere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuidador_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuidador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuidador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACuidador_Statics::ClassParams = {
		&ACuidador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACuidador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACuidador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACuidador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACuidador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACuidador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACuidador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACuidador, 1883361614);
	template<> OBSERVER_API UClass* StaticClass<ACuidador>()
	{
		return ACuidador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACuidador(Z_Construct_UClass_ACuidador, &ACuidador::StaticClass, TEXT("/Script/Observer"), TEXT("ACuidador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuidador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
