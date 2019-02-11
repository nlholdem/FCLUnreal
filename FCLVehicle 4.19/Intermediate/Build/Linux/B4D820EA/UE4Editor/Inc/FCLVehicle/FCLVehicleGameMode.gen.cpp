// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FCLVehicleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCLVehicleGameMode() {}
// Cross Module References
	FCLVEHICLE_API UClass* Z_Construct_UClass_AFCLVehicleGameMode_NoRegister();
	FCLVEHICLE_API UClass* Z_Construct_UClass_AFCLVehicleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FCLVehicle();
// End Cross Module References
	void AFCLVehicleGameMode::StaticRegisterNativesAFCLVehicleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFCLVehicleGameMode_NoRegister()
	{
		return AFCLVehicleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFCLVehicleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FCLVehicle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FCLVehicleGameMode.h" },
				{ "ModuleRelativePath", "FCLVehicleGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFCLVehicleGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFCLVehicleGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFCLVehicleGameMode, 920666122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFCLVehicleGameMode(Z_Construct_UClass_AFCLVehicleGameMode, &AFCLVehicleGameMode::StaticClass, TEXT("/Script/FCLVehicle"), TEXT("AFCLVehicleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFCLVehicleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
