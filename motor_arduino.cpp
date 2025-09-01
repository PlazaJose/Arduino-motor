#include <stdint.h>
#include "motor_arduino_h.h"
#include <Arduino.h>
Motor_Arduino::Motor_Arduino(uint8_t in1, uint8_t in2, uint8_t PWM){
  this->in1 = in1;
  this->in2 = in2;
  this->PWM = PWM;
  init();
}
void Motor_Arduino::init(){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(PWM, OUTPUT);
  stop();
}
void Motor_Arduino::stop(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
void Motor_Arduino::move_front(int speed){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(PWM, speed);
}
void Motor_Arduino::move_back(int speed){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(PWM, speed);
}
int Motor_Arduino::potencia(int speed, float porcentage){
  float nfs = speed*porcentage;
  return int(nfs);
}