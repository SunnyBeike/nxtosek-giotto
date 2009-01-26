/* This file was generated by GiottoC: http://www.eecs.berkeley.edu/~fresco/giotto */

#include "e_code.h"

instruction_type program[MAXPROGRAM] = {
/* 0 */  CALL(3)          /* Call initialization driver: driver_control_output_init_c_empty_string */,
/* 1 */  CALL(5)          /* Call initialization driver: driver_navigation_output_init_c_one */,
/* 2 */  CALL(7)          /* Call initialization driver: driver_navigation_navigation_state_init_c_one */,
/* 3 */  JUMP(4)          /* Jump to start mode: normal */,
/* 4 */  CALL(4)          /* Call output port copy driver: driver_control_output_copy_c_string for task: task_control */,
/* 5 */  CALL(6)          /* Call output port copy driver: driver_navigation_output_copy_c_int for task: task_navigation */,
/* 6 */  IF(0,7,8)          /* If actuator driver: condition_display_actuator_display_driver */,
/* 7 */  CALL(8)          /* Call actuator driver: driver_display_actuator_display_driver */,
/* 8 */  CALL(2)          /* Call actuator device driver: driver_display_actuator_c_connect_actuator_to_display */,
/* 9 */  CALL(0)          /* Call sensor device driver: driver_key_sensor_c_connect_sensor_to_return_key */,
/* 10 */  IF(1,11,13)          /* If mode driver: condition_degraded_key_pressed */,
/* 11 */  CALL(9)          /* Call mode driver: driver_degraded_key_pressed */,
/* 12 */  JUMP(56)          /*  Switch from mode: normal, unit: 0 to mode: degraded, unit: 0 */,
/* 13 */  CALL(1)          /* Call sensor device driver: driver_random_sensor_c_connect_sensor_to_random_generator */,
/* 14 */  IF(2,15,17)          /* If task driver: condition_control_control_driver */,
/* 15 */  CALL(10)          /* Call task driver: driver_control_control_driver */,
/* 16 */  SCHEDULE(0,0,32768000)       /* Schedule task: task_control, release time: 0, relative deadline: 8000 */,
/* 17 */  IF(3,18,20)          /* If task driver: condition_navigation_navigation_driver */,
/* 18 */  CALL(11)          /* Call task driver: driver_navigation_navigation_driver */,
/* 19 */  SCHEDULE(1,0,8192000)       /* Schedule task: task_navigation, release time: 0, relative deadline: 2000 */,
/* 20 */  FUTURE(0,22,2000)          /* Triggered jump to mode: normal, unit: 1 */,
/* 21 */  RETURN()          /* From mode: normal, unit: 0 */,
/* 22 */  CALL(6)          /* Call output port copy driver: driver_navigation_output_copy_c_int for task: task_navigation */,
/* 23 */  CALL(1)          /* Call sensor device driver: driver_random_sensor_c_connect_sensor_to_random_generator */,
/* 24 */  IF(3,25,27)          /* If task driver: condition_navigation_navigation_driver */,
/* 25 */  CALL(11)          /* Call task driver: driver_navigation_navigation_driver */,
/* 26 */  SCHEDULE(1,0,8192000)       /* Schedule task: task_navigation, release time: 0, relative deadline: 2000 */,
/* 27 */  FUTURE(0,29,2000)          /* Triggered jump to mode: normal, unit: 2 */,
/* 28 */  RETURN()          /* From mode: normal, unit: 1 */,
/* 29 */  CALL(6)          /* Call output port copy driver: driver_navigation_output_copy_c_int for task: task_navigation */,
/* 30 */  CALL(0)          /* Call sensor device driver: driver_key_sensor_c_connect_sensor_to_return_key */,
/* 31 */  IF(1,32,34)          /* If mode driver: condition_degraded_key_pressed */,
/* 32 */  CALL(9)          /* Call mode driver: driver_degraded_key_pressed */,
/* 33 */  JUMP(66)          /*  Switch from mode: normal, unit: 2 to mode: degraded, unit: 1 */,
/* 34 */  CALL(1)          /* Call sensor device driver: driver_random_sensor_c_connect_sensor_to_random_generator */,
/* 35 */  IF(3,36,38)          /* If task driver: condition_navigation_navigation_driver */,
/* 36 */  CALL(11)          /* Call task driver: driver_navigation_navigation_driver */,
/* 37 */  SCHEDULE(1,0,8192000)       /* Schedule task: task_navigation, release time: 0, relative deadline: 2000 */,
/* 38 */  FUTURE(0,40,2000)          /* Triggered jump to mode: normal, unit: 3 */,
/* 39 */  RETURN()          /* From mode: normal, unit: 2 */,
/* 40 */  CALL(6)          /* Call output port copy driver: driver_navigation_output_copy_c_int for task: task_navigation */,
/* 41 */  CALL(1)          /* Call sensor device driver: driver_random_sensor_c_connect_sensor_to_random_generator */,
/* 42 */  IF(3,43,45)          /* If task driver: condition_navigation_navigation_driver */,
/* 43 */  CALL(11)          /* Call task driver: driver_navigation_navigation_driver */,
/* 44 */  SCHEDULE(1,0,8192000)       /* Schedule task: task_navigation, release time: 0, relative deadline: 2000 */,
/* 45 */  FUTURE(0,4,2000)          /* Triggered jump to mode: normal, unit: 0 */,
/* 46 */  RETURN()          /* From mode: normal, unit: 3 */,
/* 47 */  CALL(4)          /* Call output port copy driver: driver_control_output_copy_c_string for task: task_control */,
/* 48 */  CALL(6)          /* Call output port copy driver: driver_navigation_output_copy_c_int for task: task_navigation */,
/* 49 */  IF(0,50,51)          /* If actuator driver: condition_display_actuator_display_driver */,
/* 50 */  CALL(8)          /* Call actuator driver: driver_display_actuator_display_driver */,
/* 51 */  CALL(2)          /* Call actuator device driver: driver_display_actuator_c_connect_actuator_to_display */,
/* 52 */  CALL(0)          /* Call sensor device driver: driver_key_sensor_c_connect_sensor_to_return_key */,
/* 53 */  IF(4,54,56)          /* If mode driver: condition_normal_key_pressed */,
/* 54 */  CALL(12)          /* Call mode driver: driver_normal_key_pressed */,
/* 55 */  JUMP(13)          /*  Switch from mode: degraded, unit: 0 to mode: normal, unit: 0 */,
/* 56 */  CALL(1)          /* Call sensor device driver: driver_random_sensor_c_connect_sensor_to_random_generator */,
/* 57 */  IF(2,58,60)          /* If task driver: condition_control_control_driver */,
/* 58 */  CALL(10)          /* Call task driver: driver_control_control_driver */,
/* 59 */  SCHEDULE(0,0,32768000)       /* Schedule task: task_control, release time: 0, relative deadline: 8000 */,
/* 60 */  IF(3,61,63)          /* If task driver: condition_navigation_navigation_driver */,
/* 61 */  CALL(11)          /* Call task driver: driver_navigation_navigation_driver */,
/* 62 */  SCHEDULE(1,0,16384000)       /* Schedule task: task_navigation, release time: 0, relative deadline: 4000 */,
/* 63 */  FUTURE(0,65,4000)          /* Triggered jump to mode: degraded, unit: 1 */,
/* 64 */  RETURN()          /* From mode: degraded, unit: 0 */,
/* 65 */  CALL(6)          /* Call output port copy driver: driver_navigation_output_copy_c_int for task: task_navigation */,
/* 66 */  CALL(1)          /* Call sensor device driver: driver_random_sensor_c_connect_sensor_to_random_generator */,
/* 67 */  IF(3,68,70)          /* If task driver: condition_navigation_navigation_driver */,
/* 68 */  CALL(11)          /* Call task driver: driver_navigation_navigation_driver */,
/* 69 */  SCHEDULE(1,0,16384000)       /* Schedule task: task_navigation, release time: 0, relative deadline: 4000 */,
/* 70 */  FUTURE(0,47,4000)          /* Triggered jump to mode: degraded, unit: 0 */,
/* 71 */  RETURN()          /* From mode: degraded, unit: 1 */
};