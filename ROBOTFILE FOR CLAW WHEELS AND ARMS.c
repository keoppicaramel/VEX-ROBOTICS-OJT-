#pragma config(Motor,  motor2,          leftMotor,     tmotorVexIQ, openLoop, reversed)
#pragma config(Motor,  motor3,          rightMotor,    tmotorVexIQ, openLoop)
#pragma config(Motor,  motor4,          armMotor,      tmotorVexIQ, openLoop)
#pragma config(Motor,  motor5,          clawMotor,     tmotorServoStandard, openLoop)


task main()
{
  while (true)
  {

    motor[leftMotor] = vexRT[Ch3];
    motor[rightMotor] = vexRT[Ch2];

    if (vexRT[Btn6U])
    {
      motor[armMotor] = 50;
    }
    else if (vexRT[Btn6D])
    {
      motor[armMotor] = -50; d
    }
    else
    {
      motor[armMotor] = 0;
    }

    if (vexRT[Btn5U])
    {
      motor[clawMotor] = 50;
    }
    else if (vexRT[Btn5D])
    {
      motor[clawMotor] = -50;
    }
    else
    {
      motor[clawMotor] = 0;
    }
  }
}
