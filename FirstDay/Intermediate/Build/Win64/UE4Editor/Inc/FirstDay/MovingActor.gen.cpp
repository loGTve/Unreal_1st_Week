// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstDay/MovingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingActor() {}
// Cross Module References
	FIRSTDAY_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();
	FIRSTDAY_API UClass* Z_Construct_UClass_AMovingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstDay();
// End Cross Module References
	void AMovingActor::StaticRegisterNativesAMovingActor()
	{
	}
	UClass* Z_Construct_UClass_AMovingActor_NoRegister()
	{
		return AMovingActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstDay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingActor.h" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingActor_Statics::ClassParams = {
		&AMovingActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingActor, 3160730684);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingActor(Z_Construct_UClass_AMovingActor, &AMovingActor::StaticClass, TEXT("/Script/FirstDay"), TEXT("AMovingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
