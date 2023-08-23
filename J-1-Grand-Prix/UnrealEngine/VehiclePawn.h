// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "VehiclePawn.generated.h"


UCLASS()
class J_1GP_API AVehiclePawn : public AWheeledVehicle
{
	GENERATED_BODY()
	
public:

	AVehiclePawn();

	virtual void Tick(float DeltaTime)override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)override;

	/*Throttle/Steering*/
	void ApplyThrottle(float Val);
	void ApplySteering(float Val);

	/*Look around*/
	void LookUp(float Val);
	void Turn(float Val);

	/*Handbrake*/
	void OnHandbrakePressed();
	void OnHandbrakeReleased();

	/*Update in air physics*/
	void UpdateInAirControl(float DeltaTime);

	// �J�n����G���W�����̃T�E���h�L���[
	UPROPERTY(EditDefaultsOnly, Category = "Engine Sound")
		class USoundCue* EngineSoundCue;

	// �G���W�����𐧌䂷��I�[�f�B�I�R���|�[�l���g
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Engine Sound")
		class UAudioComponent* EngineSoundComponent;

	// �G���W�������J�n����֐�
	UFUNCTION(BlueprintCallable, Category = "Engine Sound")
		void StartEngineSound();

	// �G���W�������~����֐�
	UFUNCTION(BlueprintCallable, Category = "Engine Sound")
		void StopEngineSound();

protected:
 
	 //Spring arm that will offset the camera
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadonly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	//Camera component that will be our viewpoint
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;
};
