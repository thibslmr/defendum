//
// Created by Thibaud Lemaire on 23/11/2017.
//

#ifndef OS_ROBOT_POSITION_H
#define OS_ROBOT_POSITION_H

#include "motors.h"

#define POSITION_PERIOD   2000 // sleep time in ms
#define WHEEL_RADIUS      20 // wheel radius in mm

int init_position( void );
void *position_main(void *arg);
int update_position( enum commandState state );
void initialize_position( void );

extern position_t current_position;

#endif //OS_ROBOT_POSITION_H
