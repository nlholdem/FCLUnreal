// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FCLVehicleWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCLVehicleWheelFront() {}
// Cross Module References
	FCLVEHICLE_API UClass* Z_Construct_UClass_UFCLVehicleWheelFront_NoRegister();
	FCLVEHICLE_API UClass* Z_Construct_UClass_UFCLVehicleWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_FCLVehicle();
// End Cross Module References
	void UFCLVehicleWheelFront::StaticRegisterNativesUFCLVehicleWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UFCLVehicleWheelFront_NoRegister()
	{
		return UFCLVehicleWheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UFCLVehicleWheelFront()
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
				{ "IncludePath", "FCLVehicleWheelFront.h" },
				{ "ModuleRelativePath", "FCLVehicleWheelFront.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFCLVehicleWheelFront>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFCLVehicleWheelFront::StaticClass,
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
	IMPLEMENT_CLASS(UFCLVehicleWheelFront, 2039522705);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFCLVehicleWheelFront(Z_Construct_UClass_UFCLVehicleWheelFront, &UFCLVehicleWheelFront::StaticClass, TEXT("/Script/FCLVehicle"), TEXT("UFCLVehicleWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCLVehicleWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
