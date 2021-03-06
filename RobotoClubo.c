#pragma config(Motor,  port2,           front_left,    tmotorVex393_MC29, openLoop,)
#pragma config(Motor,  port3,           front_right,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           back_left,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           back_right,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           lift_left,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           lift_right,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"
void drive(int left, int right){   //function void drive,gives variables to all motors, joystick
	motor[front_left]=left;
	motor[back_left]=left;
	motor[front_right]=right;
	motor[back_right]=right;
}
void lift(int power){              //function to lift, two are connected, same int
	motor[lift_left]=power;
	motor[lift_right]=power;
}


/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
  // ..........................................................................
  // Insert user code here.
  // ..........................................................................

  // Remove this function call once you have "real" code.
  AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
  // User control code here, inside the loop

  while (true)
  {
  	drive(vexRT[Ch3], vexRT[Ch2]);
    if(vexRT[Btn5U]==1){
    	//lift up command
    }else if(vexRT[Btn6U]==1){
    //lift down command
  }else{
  //no lift
}



}q
