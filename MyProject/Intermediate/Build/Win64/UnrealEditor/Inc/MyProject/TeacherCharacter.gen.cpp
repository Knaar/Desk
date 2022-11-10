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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATeacherCharacter::execGetbIndexing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbIndexing();
		P_NATIVE_END;
	}
	void ATeacherCharacter::StaticRegisterNativesATeacherCharacter()
	{
		UClass* Class = ATeacherCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetbIndexing", &ATeacherCharacter::execGetbIndexing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics
	{
		struct TeacherCharacter_eventGetbIndexing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TeacherCharacter_eventGetbIndexing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TeacherCharacter_eventGetbIndexing_Parms), &Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeacherCharacter, nullptr, "GetbIndexing", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::TeacherCharacter_eventGetbIndexing_Parms), Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeacherCharacter_GetbIndexing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeacherCharacter_GetbIndexing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeacherCharacter);
	UClass* Z_Construct_UClass_ATeacherCharacter_NoRegister()
	{
		return ATeacherCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATeacherCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointerMesh;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeacherCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeacherCharacter_GetbIndexing, "GetbIndexing" }, // 1866891218
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_PointerMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TeacherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_PointerMesh = { "PointerMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeacherCharacter, PointerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_PointerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_PointerMesh_MetaData)) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeacherCharacter_Statics::NewProp_PointerMesh,
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
		FuncInfo,
		Z_Construct_UClass_ATeacherCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ATeacherCharacter, ATeacherCharacter::StaticClass, TEXT("ATeacherCharacter"), &Z_Registration_Info_UClass_ATeacherCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeacherCharacter), 4104031626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_1569927422(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_TeacherCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
