// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TeacherCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeacherCharacter() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ATeacherCharacter_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATeacherCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void ATeacherCharacter::StaticRegisterNativesATeacherCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeacherCharacter);
	UClass* Z_Construct_UClass_ATeacherCharacter_NoRegister()
	{
		return ATeacherCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATeacherCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIndexing_MetaData[];
#endif
		static void NewProp_bIndexing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndexing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeacherCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeacherCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TeacherCharacter.h" },
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeacherCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeacherCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeacherCharacter, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing_SetBit(void* Obj)
	{
		((ATeacherCharacter*)Obj)->bIndexing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing = { "bIndexing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATeacherCharacter), &Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeacherCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_bIndexing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeacherCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeacherCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeacherCharacter_Statics::ClassParams = {
		&ATeacherCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeacherCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeacherCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeacherCharacter()
	{
		if (!Z_Registration_Info_UClass_ATeacherCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeacherCharacter.OuterSingleton, Z_Construct_UClass_ATeacherCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeacherCharacter.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ATeacherCharacter>()
	{
		return ATeacherCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeacherCharacter);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeacherCharacter, ATeacherCharacter::StaticClass, TEXT("ATeacherCharacter"), &Z_Registration_Info_UClass_ATeacherCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeacherCharacter), 2806745651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_2070756264(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
