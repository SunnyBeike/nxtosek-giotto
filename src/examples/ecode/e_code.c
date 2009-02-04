/* This file was generated by GiottoC: http://www.eecs.berkeley.edu/~fresco/giotto */

#include "e_code.h"

instruction_type program[MAXPROGRAM] = {
/* 0 */  CALL(3)          /* Call initialization driver: driver_portMotorSonar_init_c_zero */,
/* 1 */  CALL(5)          /* Call initialization driver: driver_portFound_init_c_false */,
/* 2 */  CALL(7)          /* Call initialization driver: driver_portIntrusion_init_c_false */,
/* 3 */  CALL(9)          /* Call initialization driver: driver_portAngle_init_c_zero */,
/* 4 */  CALL(11)          /* Call initialization driver: driver_portDistance_init_c_zero */,
/* 5 */  CALL(13)          /* Call initialization driver: driver_portLightO_init_c_zero */,
/* 6 */  CALL(15)          /* Call initialization driver: driver_portSonarO_init_c_zero */,
/* 7 */  CALL(17)          /* Call initialization driver: driver_guardTask_stateintrusion_init_c_false */,
/* 8 */  CALL(18)          /* Call initialization driver: driver_searchTask_statefound_init_c_false */,
/* 9 */  JUMP(10)          /* Jump to start mode: guard */,
/* 10 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 11 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 12 */  IF(0,13,14)          /* If actuator driver: condition_actMotorSonar_driverSonarMotor */,
/* 13 */  CALL(19)          /* Call actuator driver: driver_actMotorSonar_driverSonarMotor */,
/* 14 */  CALL(2)          /* Call actuator device driver: driver_actMotorSonar_c_set_motor_sonar_speed */,
/* 15 */  IF(1,16,18)          /* If mode driver: condition_search_driverGuardToSearch */,
/* 16 */  CALL(20)          /* Call mode driver: driver_search_driverGuardToSearch */,
/* 17 */  JUMP(104)          /*  Switch from mode: guard, unit: 0 to mode: search, unit: 0 */,
/* 18 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 19 */  IF(2,20,22)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 20 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 21 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 22 */  FUTURE(0,24,100)          /* Triggered jump to mode: guard, unit: 1 */,
/* 23 */  RETURN()          /* From mode: guard, unit: 0 */,
/* 24 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 25 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 26 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 27 */  IF(2,28,30)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 28 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 29 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 30 */  FUTURE(0,32,100)          /* Triggered jump to mode: guard, unit: 2 */,
/* 31 */  RETURN()          /* From mode: guard, unit: 1 */,
/* 32 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 33 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 34 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 35 */  IF(2,36,38)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 36 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 37 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 38 */  FUTURE(0,40,100)          /* Triggered jump to mode: guard, unit: 3 */,
/* 39 */  RETURN()          /* From mode: guard, unit: 2 */,
/* 40 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 41 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 42 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 43 */  IF(2,44,46)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 44 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 45 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 46 */  FUTURE(0,48,100)          /* Triggered jump to mode: guard, unit: 4 */,
/* 47 */  RETURN()          /* From mode: guard, unit: 3 */,
/* 48 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 49 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 50 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 51 */  IF(2,52,54)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 52 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 53 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 54 */  FUTURE(0,56,100)          /* Triggered jump to mode: guard, unit: 5 */,
/* 55 */  RETURN()          /* From mode: guard, unit: 4 */,
/* 56 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 57 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 58 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 59 */  IF(2,60,62)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 60 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 61 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 62 */  FUTURE(0,64,100)          /* Triggered jump to mode: guard, unit: 6 */,
/* 63 */  RETURN()          /* From mode: guard, unit: 5 */,
/* 64 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 65 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 66 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 67 */  IF(2,68,70)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 68 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 69 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 70 */  FUTURE(0,72,100)          /* Triggered jump to mode: guard, unit: 7 */,
/* 71 */  RETURN()          /* From mode: guard, unit: 6 */,
/* 72 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 73 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 74 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 75 */  IF(2,76,78)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 76 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 77 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 78 */  FUTURE(0,80,100)          /* Triggered jump to mode: guard, unit: 8 */,
/* 79 */  RETURN()          /* From mode: guard, unit: 7 */,
/* 80 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 81 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 82 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 83 */  IF(2,84,86)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 84 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 85 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 86 */  FUTURE(0,88,100)          /* Triggered jump to mode: guard, unit: 9 */,
/* 87 */  RETURN()          /* From mode: guard, unit: 8 */,
/* 88 */  CALL(8)          /* Call output port copy driver: driver_portIntrusion_copy_c_bool for task: task_guardTask */,
/* 89 */  CALL(14)          /* Call output port copy driver: driver_portLightO_copy_c_int for task: task_guardTask */,
/* 90 */  CALL(0)          /* Call sensor device driver: driver_portLight_c_get_light_sensor */,
/* 91 */  IF(2,92,94)          /* If task driver: condition_guardTask_driverIntrusionStatus */,
/* 92 */  CALL(21)          /* Call task driver: driver_guardTask_driverIntrusionStatus */,
/* 93 */  SCHEDULE(0,0,409600)       /* Schedule task: task_guardTask, release time: 0, relative deadline: 100 */,
/* 94 */  FUTURE(0,10,100)          /* Triggered jump to mode: guard, unit: 0 */,
/* 95 */  RETURN()          /* From mode: guard, unit: 9 */,
/* 96 */  CALL(6)          /* Call output port copy driver: driver_portFound_copy_c_bool for task: task_searchTask */,
/* 97 */  CALL(16)          /* Call output port copy driver: driver_portSonarO_copy_c_int for task: task_searchTask */,
/* 98 */  IF(0,99,100)          /* If actuator driver: condition_actMotorSonar_driverSonarMotor */,
/* 99 */  CALL(19)          /* Call actuator driver: driver_actMotorSonar_driverSonarMotor */,
/* 100 */  CALL(2)          /* Call actuator device driver: driver_actMotorSonar_c_set_motor_sonar_speed */,
/* 101 */  IF(3,102,104)          /* If mode driver: condition_guard_driverSearchToGuard */,
/* 102 */  CALL(22)          /* Call mode driver: driver_guard_driverSearchToGuard */,
/* 103 */  JUMP(18)          /*  Switch from mode: search, unit: 0 to mode: guard, unit: 0 */,
/* 104 */  CALL(1)          /* Call sensor device driver: driver_portSonar_c_get_sonar_sensor */,
/* 105 */  IF(4,106,108)          /* If task driver: condition_searchTask_driverSearchStatus */,
/* 106 */  CALL(23)          /* Call task driver: driver_searchTask_driverSearchStatus */,
/* 107 */  SCHEDULE(1,0,4096000)       /* Schedule task: task_searchTask, release time: 0, relative deadline: 1000 */,
/* 108 */  FUTURE(0,96,1000)          /* Triggered jump to mode: search, unit: 0 */,
/* 109 */  RETURN()          /* From mode: search, unit: 0 */
};
