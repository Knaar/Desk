// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TeacherCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UAnimMontage;

UCLASS()
class MYPROJECT_API ATeacherCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATeacherCharacter();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Settings")
	UCameraComponent *CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Settings")
	UStaticMeshComponent *PointerMesh;
	
	UPROPERTY(EditDefaultsOnly, Category="Settings")
	UAnimMontage *AnimMontage;

	void MoveForward(float Amount);
	void MoveRight(float Amount);

	bool bOnSprint=false;
	void OnStartRunning();
	void OnStopRunning();

	void IndexStart();
	void IndexEnd();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	bool bIndexing=false;

	UFUNCTION(BlueprintCallable)
	bool GetbIndexing(){return bIndexing;}

	float PointerTraceLenght=15000.0f;
};
