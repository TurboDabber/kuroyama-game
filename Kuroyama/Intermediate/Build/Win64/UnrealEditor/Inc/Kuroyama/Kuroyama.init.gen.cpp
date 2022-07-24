// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuroyama_init() {}
	KUROYAMA_API UFunction* Z_Construct_UDelegateFunction_Kuroyama_OnPickUp__DelegateSignature();
	KUROYAMA_API UFunction* Z_Construct_UDelegateFunction_Kuroyama_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Kuroyama;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Kuroyama()
	{
		if (!Z_Registration_Info_UPackage__Script_Kuroyama.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Kuroyama_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Kuroyama_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Kuroyama",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBB8022F5,
				0xADC048D0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Kuroyama.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Kuroyama.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Kuroyama(Z_Construct_UPackage__Script_Kuroyama, TEXT("/Script/Kuroyama"), Z_Registration_Info_UPackage__Script_Kuroyama, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB8022F5, 0xADC048D0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
