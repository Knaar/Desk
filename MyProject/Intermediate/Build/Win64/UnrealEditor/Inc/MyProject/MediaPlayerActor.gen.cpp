// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MediaPlayerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMediaPlayerActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMediaPlayerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
// End Cross Module References
	void AMediaPlayerActor::StaticRegisterNativesAMediaPlayerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMediaPlayerActor);
	UClass* Z_Construct_UClass_AMediaPlayerActor_NoRegister()
	{
		return AMediaPlayerActor::StaticClass();
	}
	struct Z_Construct_UClass_AMediaPlayerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMediaPlayerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaPlayerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MediaPlayerActor.h" },
		{ "ModuleRelativePath", "MediaPlayerActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaPlayerActor_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "MediaPlayerActor" },
		{ "ModuleRelativePath", "MediaPlayerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMediaPlayerActor_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMediaPlayerActor, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaPlayerActor_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlayerActor_Statics::NewProp_MediaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMediaPlayerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaPlayerActor_Statics::NewProp_MediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMediaPlayerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediaPlayerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMediaPlayerActor_Statics::ClassParams = {
		&AMediaPlayerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMediaPlayerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlayerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMediaPlayerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlayerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMediaPlayerActor()
	{
		if (!Z_Registration_Info_UClass_AMediaPlayerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMediaPlayerActor.OuterSingleton, Z_Construct_UClass_AMediaPlayerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMediaPlayerActor.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMediaPlayerActor>()
	{
		return AMediaPlayerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMediaPlayerActor);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MediaPlayerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MediaPlayerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMediaPlayerActor, AMediaPlayerActor::StaticClass, TEXT("AMediaPlayerActor"), &Z_Registration_Info_UClass_AMediaPlayerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMediaPlayerActor), 445529258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MediaPlayerActor_h_1924270864(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MediaPlayerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MediaPlayerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
