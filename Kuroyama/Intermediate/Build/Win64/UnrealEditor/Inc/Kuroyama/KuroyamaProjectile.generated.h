// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef KUROYAMA_KuroyamaProjectile_generated_h
#error "KuroyamaProjectile.generated.h already included, missing '#pragma once' in KuroyamaProjectile.h"
#endif
#define KUROYAMA_KuroyamaProjectile_generated_h

#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_SPARSE_DATA
#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKuroyamaProjectile(); \
	friend struct Z_Construct_UClass_AKuroyamaProjectile_Statics; \
public: \
	DECLARE_CLASS(AKuroyamaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kuroyama"), NO_API) \
	DECLARE_SERIALIZER(AKuroyamaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAKuroyamaProjectile(); \
	friend struct Z_Construct_UClass_AKuroyamaProjectile_Statics; \
public: \
	DECLARE_CLASS(AKuroyamaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kuroyama"), NO_API) \
	DECLARE_SERIALIZER(AKuroyamaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKuroyamaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKuroyamaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKuroyamaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKuroyamaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKuroyamaProjectile(AKuroyamaProjectile&&); \
	NO_API AKuroyamaProjectile(const AKuroyamaProjectile&); \
public:


#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKuroyamaProjectile(AKuroyamaProjectile&&); \
	NO_API AKuroyamaProjectile(const AKuroyamaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKuroyamaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKuroyamaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKuroyamaProjectile)


#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_12_PROLOG
#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_SPARSE_DATA \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_RPC_WRAPPERS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_INCLASS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_SPARSE_DATA \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KUROYAMA_API UClass* StaticClass<class AKuroyamaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kuroyama_Source_Kuroyama_KuroyamaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
