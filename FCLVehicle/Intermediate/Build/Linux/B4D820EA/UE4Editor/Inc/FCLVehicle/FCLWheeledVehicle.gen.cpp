// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FCLWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCLWheeledVehicle() {}
// Cross Module References
	FCLVEHICLE_API UClass* Z_Construct_UClass_AFCLWheeledVehicle_NoRegister();
	FCLVEHICLE_API UClass* Z_Construct_UClass_AFCLWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_FCLVehicle();
// End Cross Module References
	void AFCLWheeledVehicle::StaticRegisterNativesAFCLWheeledVehicle()
	{
	}
	UClass* Z_Construct_UClass_AFCLWheeledVehicle_NoRegister()
	{
		return AFCLWheeledVehicle::StaticClass();
	}
	UClass* Z_Construct_UClass_AFCLWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
				(UObject* (*)())Z_Construct_UPackage__Script_FCLVehicle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FCLWheeledVehicle.h" },
				{ "ModuleRelativePath", "FCLWheeledVehicle.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFCLWheeledVehicle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFCLWheeledVehicle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AFCLWheeledVehicle, 807350021);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFCLWheeledVehicle(Z_Construct_UClass_AFCLWheeledVehicle, &AFCLWheeledVehicle::StaticClass, TEXT("/Script/FCLVehicle"), TEXT("AFCLWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFCLWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
