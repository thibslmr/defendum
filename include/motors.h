//
// Created by Thibaud Lemaire on 17/11/2017.
//

#ifndef OS_ROBOT_MOTORS_H
#define OS_ROBOT_MOTORS_H

//Enum
enum linearSpeed {
      ONE = 210, /* 20/100 * 1050  ---> 20% of maximum speed */
      TWO = 420,
      THREE = 630,
      FOR = 840,
      FIVE = 1050,
};

// Speed
#define SPEED_CIRCULAR 210 

// Motors config
#define MOTOR_LEFT     OUTC
#define MOTOR_RIGHT    OUTB
#define MOTOR_BOTH     ( MOTOR_LEFT | MOTOR_RIGHT )

// Refresh period
#define MOTORS_PERIOD   50  // Motors update period in ms

int init_motors( void );
void *motors_main(void *arg);
void rotate_left(int angle);
void rotate_right(int angle);
void forward(enum linearSpeed);
void backward(enum linearSpeed);
void stop(void);

#endif //OS_ROBOT_MOTORS_H
