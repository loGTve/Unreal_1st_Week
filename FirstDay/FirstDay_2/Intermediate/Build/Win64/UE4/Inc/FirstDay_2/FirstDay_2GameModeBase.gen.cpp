// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstDay_2/FirstDay_2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstDay_2GameModeBase() {}
// Cross Module References
	FIRSTDAY_2_API UClass* Z_Construct_UClass_AFirstDay_2GameModeBase_NoRegister();
	FIRSTDAY_2_API UClass* Z_Construct_UClass_AFirstDay_2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstDay_2();
// End Cross Module References
	void AFirstDay_2GameModeBase::StaticRegisterNativesAFirstDay_2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFirstDay_2GameModeBase_NoRegister()
	{
		return AFirstDay_2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstDay_2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstDay_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstDay_2GameModeBase.h" },
		{ "ModuleRelativePath", "FirstDay_2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstDay_2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::ClassParams = {
		&AFirstDay_2GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstDay_2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstDay_2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstDay_2GameModeBase, 376832910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstDay_2GameModeBase(Z_Construct_UClass_AFirstDay_2GameModeBase, &AFirstDay_2GameModeBase::StaticClass, TEXT("/Script/FirstDay_2"), TEXT("AFirstDay_2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstDay_2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
