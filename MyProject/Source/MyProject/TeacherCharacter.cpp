#include "TeacherCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

ATeacherCharacter::ATeacherCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	PointerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PointerMesh"));
	PointerMesh-> AttachToComponent(GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,"RightHandSocket");
	
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
	if (bIndexing)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		
		Controller->GetPlayerViewPoint(CameraLocation,CameraRotation);

		
		//UE_LOG(LogTemp,Warning,TEXT("Tracing"));
		const FTransform SocketTransform=PointerMesh->GetSocketTransform("PointerSocket");
		const FVector StartTrace=CameraLocation;//SocketTransform.GetLocation();
		const FVector TraceDirection=CameraRotation.Vector();//SocketTransform.GetRotation().GetForwardVector();
		const FVector EndTrace=StartTrace+TraceDirection*PointerTraceLenght;

		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(GetOwner());

		FHitResult HitResult;
		GetWorld()->LineTraceSingleByChannel(HitResult,StartTrace,EndTrace,ECollisionChannel::ECC_Visibility,CollisionParams);
		
		DrawDebugLine(GetWorld(),SocketTransform.GetLocation(),HitResult.ImpactPoint,FColor::Red,false,0,0,2.0f);
		DrawDebugSphere(GetWorld(),HitResult.Location,3,10,FColor::Red,false,0,0,0.3f);
		
	}

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

	PlayerInputComponent->BindAction("IndexAnimation",EInputEvent::IE_Pressed, this, &ATeacherCharacter::IndexStart);
	PlayerInputComponent->BindAction("IndexAnimation",EInputEvent::IE_Released, this, &ATeacherCharacter::IndexEnd);

	
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

void ATeacherCharacter::IndexStart()
{
	bIndexing=true;
	
}

void ATeacherCharacter::IndexEnd()
{
	bIndexing=false;
}





