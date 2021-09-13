// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shoot.h"

Shoot::Shoot() = default;

// This method will be called once per scheduler run
void Shoot::Periodic() {}
void Shoot::DoIt(double power){
    this->motor1.Set(power);
    this->motor2.Set(-power);
}
