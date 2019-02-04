#include "robot-config.h"

void usercontrol( void ) {
  using namespace pros;
  pros::brain Brain;
  pros::motor LeftMotor(pros::PORT11, pros::gearSetting::18_1, false);
  pros::motor LeftMotor2(pros::PORT20,pros::gearSetting::18_1, false);
  pros::motor RightMotor(pros::PORT12, pros::gearSetting::18_1, true);
  pros::motor RightMotor2(pros::PORT15, pros::gearSetting::18_1, true);
  pros::motor ArmMotor(pros::PORT13, pros::gearSetting::18_1);
  pros::motor RolleMotorFront(pros::PORT18,pros::gearSetting::18_1, false);

  while(true)
  {
    LeftMotor.spim(pros::directionType::fwd, Controller Axis3.value(), pros::velocityUnits::pct);
    LeftMotor2.spin(pros::directionType::fwd, Controller Axis3.value(), pros::velocityUnits::pct);
    RightMotor.spin(pros::directionType::fwd, Controller Axis2.value(), pros::velocityUnits::pct);
    RightMotor2.spin(pros::directionType::fwd, Controller Axis3.value(), pros::velocityUnits::pct);
  }

  if(Controller.ButtonUp.pressed(pressedFunction)) {
    ArmMotor.spin(pros::directionType::fwd, 70, pros::velocityUnits::pct);
  }
  else if(Controller.ButtonDown.pressed(pressedFunction)) {
    ArmMotor.spin(pros::directionType::fwd, 70, pros::velocityUnits::pct);
  }


void autonomus( void ) {
  pros::rotationUnits rotation = pros::rotationUnits::rev;
  int SpinFor = 20;
  LeftMotor.startRotateFor(SpinFor, rotations);
  LeftMotor2.startRotateFor(SpinFor, rotations);
  RightMotor.startRotateFor(SpinFor, rotations);
  RightMotor2.startRotateFor(SpinFor, rotations);

  pros::task::sleep(1000);
  }
}
