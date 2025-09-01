# Arduino-motor
this code allows your arduino to move motors using an h-bridge.

**example of use**

**define the pines you connected to the H-Bridge.**

Motor_Arduino motor_A(4,5,6);//right motor
Motor_Arduino motor_B(7,8,9);//left motor

int speed = Motor_Arduino::MAX_SPEED;

float rotation_ = 0.5;

**the in the loop you can simply call the functions you need:**

motor_A.move_front(speed);

motor_B.move_back(speed);

motor_B.move_front(motor_B.potencia(speed, rotation_));
