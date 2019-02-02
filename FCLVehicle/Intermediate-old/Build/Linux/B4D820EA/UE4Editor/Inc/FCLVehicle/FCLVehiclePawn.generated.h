// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FCLVEHICLE_FCLVehiclePawn_generated_h
#error "FCLVehiclePawn.generated.h already included, missing '#pragma once' in FCLVehiclePawn.h"
#endif
#define FCLVEHICLE_FCLVehiclePawn_generated_h

#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_RPC_WRAPPERS
#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFCLVehiclePawn(); \
	friend FCLVEHICLE_API class UClass* Z_Construct_UClass_AFCLVehiclePawn(); \
public: \
	DECLARE_CLASS(AFCLVehiclePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FCLVehicle"), NO_API) \
	DECLARE_SERIALIZER(AFCLVehiclePawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFCLVehiclePawn(); \
	friend FCLVEHICLE_API class UClass* Z_Construct_UClass_AFCLVehiclePawn(); \
public: \
	DECLARE_CLASS(AFCLVehiclePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FCLVehicle"), NO_API) \
	DECLARE_SERIALIZER(AFCLVehiclePawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFCLVehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFCLVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFCLVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFCLVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFCLVehiclePawn(AFCLVehiclePawn&&); \
	NO_API AFCLVehiclePawn(const AFCLVehiclePawn&); \
public:


#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFCLVehiclePawn(AFCLVehiclePawn&&); \
	NO_API AFCLVehiclePawn(const AFCLVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFCLVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFCLVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFCLVehiclePawn)


#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AFCLVehiclePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFCLVehiclePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AFCLVehiclePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AFCLVehiclePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AFCLVehiclePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AFCLVehiclePawn, InCarGear); }


#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_16_PROLOG
#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_RPC_WRAPPERS \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_INCLASS \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_INCLASS_NO_PURE_DECLS \
	FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FCLVehicle_Source_FCLVehicle_FCLVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
