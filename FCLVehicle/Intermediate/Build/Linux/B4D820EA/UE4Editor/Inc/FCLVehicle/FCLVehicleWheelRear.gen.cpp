// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FCLVehicleWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCLVehicleWheelRear() {}
// Cross Module References
	FCLVEHICLE_API UClass* Z_Construct_UClass_UFCLVehicleWheelRear_NoRegister();
	FCLVEHICLE_API UClass* Z_Construct_UClass_UFCLVehicleWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_FCLVehicle();
// End Cross Module References
	void UFCLVehicleWheelRear::StaticRegisterNativesUFCLVehicleWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UFCLVehicleWheelRear_NoRegister()
	{
		return UFCLVehicleWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UFCLVehicleWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
				(UObject* (*)())Z_Construct_UPackage__Script_FCLVehicle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FCLVehicleWheelRear.h" },
				{ "ModuleRelativePath", "FCLVehicleWheelRear.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFCLVehicleWheelRear>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFCLVehicleWheelRear::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UFCLVehicleWheelRear, 3828542143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFCLVehicleWheelRear(Z_Construct_UClass_UFCLVehicleWheelRear, &UFCLVehicleWheelRear::StaticClass, TEXT("/Script/FCLVehicle"), TEXT("UFCLVehicleWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCLVehicleWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
