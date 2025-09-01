#include <stdint.h>
#ifndef motor_mrduino_h
#define motor_mrduino_h
class Motor_Arduino{
  private:
    uint8_t in1;
    uint8_t in2;
    uint8_t PWM;
  
  public:
    Motor_Arduino(uint8_t in1, uint8_t in2, uint8_t PWM);
    void init();
    void stop();
    void move_front(int speed);
    void move_back(int speed);
    static const int MAX_SPEED = 255;
    static const int HALF_SPEED = 128;
    int potencia(int speed, float porcentage);
};
#endif