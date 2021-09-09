#ifndef CONFIG_H
#define CONFIG_H

#define LOOPTIME 100

#define K_P 0.6
#define K_I 0.3
#define K_D 0.5

#define DEBUG 1
#define DEBUG_RATE 5

#define MAX_RPM 200
#define WHEEL_DIAMETER 0.058
#define ENCODER_PULSE 112
#define PWM_BITS 8

#define PWM_MAX 250
#define PWM_MIN -250

#define MOTOR_DRIVER BTS7960
//motor 1
#define RPWM1 7
#define LPWM1 6

//motor 2
#define RPWM2 10
#define LPWM2 9

//motor 3
#define RPWM3 12
#define LPWM3 11

//enco1
#define ENCO1A 2
#define ENCO1B 3

//enco2
#define ENCO2A 19
#define ENCO2B 18

//enco3
#define ENCO3A 21
#define ENCO3B 20

#endif
