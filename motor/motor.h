#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class controller
{
    public:
        enum driver {BTS7960};
        controller(driver motor_driver, int rpwm, int lpwm);
        void spin(int pwm);

    private:
        
        driver motor_driver_;
        int rpwm_;
        int lpwm_;
};

#endif
