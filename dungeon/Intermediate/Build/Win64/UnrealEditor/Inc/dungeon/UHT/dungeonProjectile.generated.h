// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "dungeonProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUNGEON_dungeonProjectile_generated_h
#error "dungeonProjectile.generated.h already included, missing '#pragma once' in dungeonProjectile.h"
#endif
#define DUNGEON_dungeonProjectile_generated_h

#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_SPARSE_DATA
#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_ACCESSORS
#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAdungeonProjectile(); \
	friend struct Z_Construct_UClass_AdungeonProjectile_Statics; \
public: \
	DECLARE_CLASS(AdungeonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/dungeon"), NO_API) \
	DECLARE_SERIALIZER(AdungeonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AdungeonProjectile(AdungeonProjectile&&); \
	NO_API AdungeonProjectile(const AdungeonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AdungeonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdungeonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AdungeonProjectile) \
	NO_API virtual ~AdungeonProjectile();


#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_12_PROLOG
#define FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_SPARSE_DATA \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_ACCESSORS \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_API UClass* StaticClass<class AdungeonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_yumi_CLEAN_UnrealEngine_dungeon_Source_dungeon_dungeonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
