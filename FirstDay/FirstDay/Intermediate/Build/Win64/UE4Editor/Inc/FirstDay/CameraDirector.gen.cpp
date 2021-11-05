// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstDay/CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	FIRSTDAY_API UScriptStruct* Z_Construct_UScriptStruct_FChangeCameraData();
	UPackage* Z_Construct_UPackage__Script_FirstDay();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FIRSTDAY_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	FIRSTDAY_API UClass* Z_Construct_UClass_ACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FChangeCameraData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIRSTDAY_API uint32 Get_Z_Construct_UScriptStruct_FChangeCameraData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeCameraData, Z_Construct_UPackage__Script_FirstDay(), TEXT("ChangeCameraData"), sizeof(FChangeCameraData), Get_Z_Construct_UScriptStruct_FChangeCameraData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChangeCameraData(FChangeCameraData::StaticStruct, TEXT("/Script/FirstDay"), TEXT("ChangeCameraData"), false, nullptr, nullptr);
static struct FScriptStruct_FirstDay_StaticRegisterNativesFChangeCameraData
{
	FScriptStruct_FirstDay_StaticRegisterNativesFChangeCameraData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChangeCameraData")),new UScriptStruct::TCppStructOps<FChangeCameraData>);
	}
} ScriptStruct_FirstDay_StaticRegisterNativesFChangeCameraData;
	struct Z_Construct_UScriptStruct_FChangeCameraData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenCameraChanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenCameraChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeCameraData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime_MetaData[] = {
		{ "Category", "ChangeCameraData" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "SmoothBlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChangeCameraData, SmoothBlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges_MetaData[] = {
		{ "Category", "ChangeCameraData" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges = { UE4CodeGen_Private::EPropertyClass::Float, "TimeBetweenCameraChanges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChangeCameraData, TimeBetweenCameraChanges), METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ChangeCameraData" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChangeCameraData, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeCameraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirstDay,
		nullptr,
		&NewStructOps,
		"ChangeCameraData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		sizeof(FChangeCameraData),
		alignof(FChangeCameraData),
		Z_Construct_UScriptStruct_FChangeCameraData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChangeCameraData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChangeCameraData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FirstDay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChangeCameraData"), sizeof(FChangeCameraData), Get_Z_Construct_UScriptStruct_FChangeCameraData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChangeCameraData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChangeCameraData_CRC() { return 2636503545U; }
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToNextCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToNextCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cameras;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cameras_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstDay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirector.h" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCamera_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "CameraDirector.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nAActor* CameraTwo;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCamera = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToNextCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACameraDirector, TimeToNextCamera), METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras = { UE4CodeGen_Private::EPropertyClass::Array, "Cameras", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACameraDirector, Cameras), METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Cameras", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChangeCameraData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACameraDirector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraDirector, 2102123188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/FirstDay"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
