#include "motor.h"

controller::controller(driver motor_driver, int rpwm, int lpwm):
    motor_driver_(motor_driver),
    rpwm_(rpwm),
    lpwm_(lpwm)
{
    if(motor_driver == BTS7960){
        pinMode(rpwm_, OUTPUT);
        pinMode(lpwm_, OUTPUT);
        analogWrite(rpwm_, 0);
        analogWrite(lpwm_, 0);
    }
}

void controller::spin(int pwm){
    if (motor_driver_ == BTS7960){
        if (pwm > 0){
            analogWrite(rpwm_, 0);
            analogWrite(lpwm_, abs(pwm));
        }
        else if (pwm < 0){
            analogWrite(rpwm_, abs(pwm));
            analogWrite(lpwm_, 0);
        }
        else {
            analogWrite(rpwm_, 0);
            analogWrite(lpwm_, 0);
        }
    }
}
