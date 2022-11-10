#include "TeacherCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

ATeacherCharacter::ATeacherCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm-> SetupAttachment(GetRootComponent());
	SpringArm->bUsePawnControlRotation=true;
	SpringArm->SocketOffset=FVector(0.0f,100.0f,80.0f);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->AttachToComponent(GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,"HeadSocket");
	

}

void ATeacherCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATeacherCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeacherCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATeacherCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATeacherCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ATeacherCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnAround", this, &ATeacherCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("Jump",EInputEvent::IE_Pressed, this, &ATeacherCharacter::Jump);
	
	PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Pressed, this, &ATeacherCharacter::OnStartRunning);
	PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Released, this, &ATeacherCharacter::OnStopRunning);

	PlayerInputComponent->BindAction("IndexAnimation",EInputEvent::IE_Pressed, this, &ATeacherCharacter::Index);
	PlayerInputComponent->BindAction("IndexAnimation",EInputEvent::IE_Released, this, &ATeacherCharacter::Index);
}

void ATeacherCharacter::MoveForward(float Amount)
{
	AddMovementInput(GetActorForwardVector(),Amount*2);
}

void ATeacherCharacter::MoveRight(float Amount)
{
	AddMovementInput(GetActorRightVector(),Amount);
}

void ATeacherCharacter::OnStartRunning()
{
	bOnSprint=true;
	GetCharacterMovement()->MaxWalkSpeed=800;
}

void ATeacherCharacter::OnStopRunning()
{
	bOnSprint=false;
	GetCharacterMovement()->MaxWalkSpeed=600;
}

void ATeacherCharacter::Index()
{
	PlayAnimMontage(AnimMontage);
	
	UE_LOG(LogTemp,Warning,TEXT("Pointing"));
}

