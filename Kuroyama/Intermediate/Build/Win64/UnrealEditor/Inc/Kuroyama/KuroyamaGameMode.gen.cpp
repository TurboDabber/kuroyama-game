// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kuroyama/KuroyamaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuroyamaGameMode() {}
// Cross Module References
	KUROYAMA_API UClass* Z_Construct_UClass_AKuroyamaGameMode_NoRegister();
	KUROYAMA_API UClass* Z_Construct_UClass_AKuroyamaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Kuroyama();
// End Cross Module References
	void AKuroyamaGameMode::StaticRegisterNativesAKuroyamaGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKuroyamaGameMode);
	UClass* Z_Construct_UClass_AKuroyamaGameMode_NoRegister()
	{
		return AKuroyamaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKuroyamaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKuroyamaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Kuroyama,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuroyamaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KuroyamaGameMode.h" },
		{ "ModuleRelativePath", "KuroyamaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKuroyamaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKuroyamaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKuroyamaGameMode_Statics::ClassParams = {
		&AKuroyamaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKuroyamaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKuroyamaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKuroyamaGameMode()
	{
		if (!Z_Registration_Info_UClass_AKuroyamaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKuroyamaGameMode.OuterSingleton, Z_Construct_UClass_AKuroyamaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKuroyamaGameMode.OuterSingleton;
	}
	template<> KUROYAMA_API UClass* StaticClass<AKuroyamaGameMode>()
	{
		return AKuroyamaGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKuroyamaGameMode);
	struct Z_CompiledInDeferFile_FID_Kuroyama_Source_Kuroyama_KuroyamaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kuroyama_Source_Kuroyama_KuroyamaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKuroyamaGameMode, AKuroyamaGameMode::StaticClass, TEXT("AKuroyamaGameMode"), &Z_Registration_Info_UClass_AKuroyamaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKuroyamaGameMode), 1199560170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kuroyama_Source_Kuroyama_KuroyamaGameMode_h_2994967521(TEXT("/Script/Kuroyama"),
		Z_CompiledInDeferFile_FID_Kuroyama_Source_Kuroyama_KuroyamaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kuroyama_Source_Kuroyama_KuroyamaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
