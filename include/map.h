//
// Created by Thibaud Lemaire on 23/11/2017.
//

#ifndef OS_ROBOT_MAP_H
#define OS_ROBOT_MAP_H

#include "main.h"

#define MAP_MAX_WIDTH 26
#define MAP_MAX_HEIGHT 42
#define START_COORD_X 13
#define START_COORD_Y 1


typedef struct {
    char tab[MAP_MAX_WIDTH][MAP_MAX_HEIGHT];
    int width;
    int height;
} map_t;

typedef struct {
    coordinates_t set[MAP_MAX_WIDTH*MAP_MAX_HEIGHT];
    int len ;
}point_cluster;


void init_map_small_arena();
char get_Object(position_t point);
void set_Object(position_t point, char objectType);
void init_map_random();
point_cluster get_points_of_a_type(char objectType);
void send_map();
position_t coordinates_to_position(coordinates_t coordinates);
coordinates_t position_to_coordinates(position_t position);

#endif //OS_ROBOT_MAP_H
