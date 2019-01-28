//////////////////////////////////////////////////
//               DO NOT EDIT                   //
//        Except Robbie and Lorenzo           //
//Program originally created by Discord user://
//             Lorenzo S#1711               //
//      Made for 72477A Lord Flashheart    //
//              DO NOT EDIT               //
///////////////////////////////////////////

#include "robot-config.h"

void usercontrol( void ) {
  using namespace vex;
  vex::brain Brain;
  vex::controller Controller01 = vex::controller();
  vex::motor LeftMotor(vex::PORT11, vex::gearSetting:18_1, false);
  vex::motor LeftMotor2(vex::PORT20,vex::gearSetting:18_1, false);
  vex::motor RightMotor(vex::PORT12, vex::gearSetting:18_1, true);
  vex::motor RightMotor2(vex::PORT15, vex::gearSetting:18_1, true);
  vex::motor ArmMotor(vex::PORT13, vex::gearSetting:18_1);
  vex::motor FrontMotor(vex::PORT18,vex::gearSetting:18_1, false);

  while(true)
  {
  LeftMotor.spin(vex::directionType::fwd, Controller01 Axis3.value(), vex::velocityUnits::pct);
  LeftMotor2.spin(vex::directionType::fwd, Controller01 Axis3.value(), vex::velocityUnits::pct);
  RightMotor.spin(vex::directionType::fwd, Controller01 Axis2.value(), vex::velocityUnits::pct);
  RightMotor2.spin(vex::directionType::fwd, Controller01 Axis2.value(), vex::velocityUnits::pct);
  FrontMotor.spin(vex::directionType::fwd, Controller01 Axis3.value(), vex::velocityUnits::pct);
  }

  if(Controller1.ButtonL1.pressing()) {
    ArmMotor.spin(vex::directionType::fwd, 70, vex::velocityUnits::pct);
  }
  else if(Controller1.ButtonL2.pressing()) {
    ArmMotor.spin(vex::directionType::fwd, 70, vex::velocityUnits::pct);
  }
  else {
    ArmMotor.stop(vex::brakeType::hold):
  }
  if(Controller01.ButtonR1.pressing()) {
    Controller01.screen.print("Meme Mode Activated");
    Brain.screen.print("Meme Mode Activated");
  }
  else if(Controller01.ButtonR2.pressing()) {
    Controller01.screen.print("Meme Mode Deactivated");
  }

void autonomus( void ) {
  vex::rotationUnits rotation = vex::rotationUnits::rev;
  int TimesR = 20
  LeftMotor.startRotateFor(TimesR, rotations);
  LeftMotor2.startRotateFor(TimesR, rotations);
  RightMotor.startRotateFor(TimesR, rotations);
  RightMotor2.startRotateFor(TimesR, rotations);
  FrontMotor.startRotateFor(TimesR, rotations);

  vex::task::sleep(100);

  TimesR = 1;
  ArmMotor.startRotateFor(TimesR, rotations);

  vex::task::sleep(500);

  TimesR = 1
  LeftMotor.startRotateFor(TimesR, rotations);
  LeftMotor2.startRotateFor(TimesR, rotations);

  vex::task::sleep(100);

  TimesR = 15
  LeftMotor.startRotateFor(TimesR, rotations);
  LeftMotor2.startRotateFor(TimesR, rotations);
  RightMotor.startRotateFor(TimesR, rotations);
  RightMotor2.startRotateFor(TimesR, rotations);
  FrontMotor.startRotateFor(TimesR, rotations);

  vex::task::sleep(100);

  TimesR = 5
  RightMotor.startRotateFor(TimesR, rotations);
  RightMotor2.startRotateFor(TimesR, rotations);

  vex::task::sleep(100)

  TimesR = 10
  LeftMotor.startRotateFor(TimesR, rotations);
  LeftMotor2.startRotateFor(TimesR, rotations);
  RightMotor.startRotateFor(TimesR, rotations);
  RightMotor2.startRotateFor(TimesR, rotations);
  FrontMotor.startRotateFor(TimesR, rotations);
}

int main() {
  Competition.autonomus( autonomus );
  Competition.drivercontrol( usercontrol );
}
