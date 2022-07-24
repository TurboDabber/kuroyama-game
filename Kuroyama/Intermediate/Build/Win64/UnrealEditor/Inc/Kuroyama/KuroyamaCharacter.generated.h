// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KUROYAMA_KuroyamaCharacter_generated_h
#error "KuroyamaCharacter.generated.h already included, missing '#pragma once' in KuroyamaCharacter.h"
#endif
#define KUROYAMA_KuroyamaCharacter_generated_h

#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_SPARSE_DATA
#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_RPC_WRAPPERS
#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKuroyamaCharacter(); \
	friend struct Z_Construct_UClass_AKuroyamaCharacter_Statics; \
public: \
	DECLARE_CLASS(AKuroyamaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kuroyama"), NO_API) \
	DECLARE_SERIALIZER(AKuroyamaCharacter)


#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAKuroyamaCharacter(); \
	friend struct Z_Construct_UClass_AKuroyamaCharacter_Statics; \
public: \
	DECLARE_CLASS(AKuroyamaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kuroyama"), NO_API) \
	DECLARE_SERIALIZER(AKuroyamaCharacter)


#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKuroyamaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKuroyamaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKuroyamaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKuroyamaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKuroyamaCharacter(AKuroyamaCharacter&&); \
	NO_API AKuroyamaCharacter(const AKuroyamaCharacter&); \
public:


#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKuroyamaCharacter(AKuroyamaCharacter&&); \
	NO_API AKuroyamaCharacter(const AKuroyamaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKuroyamaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKuroyamaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKuroyamaCharacter)


#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_20_PROLOG
#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_SPARSE_DATA \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_RPC_WRAPPERS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_INCLASS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_SPARSE_DATA \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KUROYAMA_API UClass* StaticClass<class AKuroyamaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kuroyama_Source_Kuroyama_KuroyamaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
