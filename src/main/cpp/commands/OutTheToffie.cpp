// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/OutTheToffie.h"

OutTheToffie::OutTheToffie(Shoot* m_shooter):m_shooter{m_shooter} {
  AddRequirements(this->m_shooter);
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void OutTheToffie::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void OutTheToffie::Execute() {
  this->m_shooter->DoIt(0.5);
}

// Called once the command ends or is interrupted.
void OutTheToffie::End(bool interrupted) {}

// Returns true when the command should end.
bool OutTheToffie::IsFinished() {
  return false;
}
