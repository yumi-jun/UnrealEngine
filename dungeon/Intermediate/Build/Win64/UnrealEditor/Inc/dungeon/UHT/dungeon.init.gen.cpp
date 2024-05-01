// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedungeon_init() {}
	DUNGEON_API UFunction* Z_Construct_UDelegateFunction_dungeon_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_dungeon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_dungeon()
	{
		if (!Z_Registration_Info_UPackage__Script_dungeon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_dungeon_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/dungeon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x65F98681,
				0x61A09ADA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_dungeon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_dungeon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_dungeon(Z_Construct_UPackage__Script_dungeon, TEXT("/Script/dungeon"), Z_Registration_Info_UPackage__Script_dungeon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65F98681, 0x61A09ADA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
