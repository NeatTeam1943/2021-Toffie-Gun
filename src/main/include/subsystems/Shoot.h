// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <frc/PWMVictorSPX.h>
#include <frc2/command/SubsystemBase.h>

class Shoot : public frc2::SubsystemBase {
 public:
  Shoot();
  void DoIt(double power);
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  frc::PWMVictorSPX motor1{0};
  frc::PWMVictorSPX motor2{1};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
