/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "ctre/phoenix.h"



class ExampleSubsystem : public frc2::SubsystemBase {
 public:

  ExampleSubsystem();


  void Periodic() override;
  void PracFunction();

 private:
};
