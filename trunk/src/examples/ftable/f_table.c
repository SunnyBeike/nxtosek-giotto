/* This file was generated by GiottoC: http://www.eecs.berkeley.edu/~fresco/giotto */

#include "f_table.h"

trigger_type trigger_table[MAXTRIGGER] = {
  { "giotto_timer", giotto_timer_enable_code, giotto_timer_save_code, giotto_timer_trigger_code }
};

c_int portLight;
c_int portSonar;
c_int actMotorSonar;
c_int global_portMotorSonar;
c_int local_portMotorSonar;
c_bool global_portFound;
c_bool local_portFound;
c_bool global_portIntrusion;
c_bool local_portIntrusion;
c_int global_portAngle;
c_int local_portAngle;
c_int global_portDistance;
c_int local_portDistance;
c_int global_portLightO;
c_int local_portLightO;
c_int global_portSonarO;
c_int local_portSonarO;
c_bool guardTask_intrusion;
c_int guardTask_light;
c_bool guardTask_stateintrusion;
c_bool searchTask_found;
c_int searchTask_sonar;
c_bool searchTask_statefound;

port_type port_table[MAXPORT] = {
  { "portLight", &portLight, sizeof(c_int) },
  { "portSonar", &portSonar, sizeof(c_int) },
  { "actMotorSonar", &actMotorSonar, sizeof(c_int) },
  { "global_portMotorSonar", &global_portMotorSonar, sizeof(c_int) },
  { "local_portMotorSonar", &local_portMotorSonar, sizeof(c_int) },
  { "global_portFound", &global_portFound, sizeof(c_bool) },
  { "local_portFound", &local_portFound, sizeof(c_bool) },
  { "global_portIntrusion", &global_portIntrusion, sizeof(c_bool) },
  { "local_portIntrusion", &local_portIntrusion, sizeof(c_bool) },
  { "global_portAngle", &global_portAngle, sizeof(c_int) },
  { "local_portAngle", &local_portAngle, sizeof(c_int) },
  { "global_portDistance", &global_portDistance, sizeof(c_int) },
  { "local_portDistance", &local_portDistance, sizeof(c_int) },
  { "global_portLightO", &global_portLightO, sizeof(c_int) },
  { "local_portLightO", &local_portLightO, sizeof(c_int) },
  { "global_portSonarO", &global_portSonarO, sizeof(c_int) },
  { "local_portSonarO", &local_portSonarO, sizeof(c_int) },
  { "guardTask_intrusion", &guardTask_intrusion, sizeof(c_bool) },
  { "guardTask_light", &guardTask_light, sizeof(c_int) },
  { "guardTask_stateintrusion", &guardTask_stateintrusion, sizeof(c_bool) },
  { "searchTask_found", &searchTask_found, sizeof(c_bool) },
  { "searchTask_sonar", &searchTask_sonar, sizeof(c_int) },
  { "searchTask_statefound", &searchTask_statefound, sizeof(c_bool) }
};


#if defined(OSEK) || defined(NXTOSEK)
TASK(task_guardTask) {
#elif defined(PTHREADS)
void task_guardTask () {
#endif
  c_guard_task(&guardTask_intrusion,&local_portIntrusion,&guardTask_light,&local_portLightO,&guardTask_stateintrusion);
#if defined(OSEK) || defined(NXTOSEK)
  e_machine_go();
#endif
}

#if defined(OSEK) || defined(NXTOSEK)
TASK(task_searchTask) {
#elif defined(PTHREADS)
void task_searchTask () {
#endif
  c_search_task(&searchTask_found,&searchTask_statefound,&local_portFound,&searchTask_sonar,&local_portSonarO);
#if defined(OSEK) || defined(NXTOSEK)
  e_machine_go();
#endif
}

task_type task_table[MAXTASK] = {
  { "guardTask", (int)TASKNAME(task_guardTask) },
  { "searchTask", (int)TASKNAME(task_searchTask) }
};


void driver_portLight_c_get_light_sensor () {
  c_get_light_sensor(&portLight);
}

void driver_portSonar_c_get_sonar_sensor () {
  c_get_sonar_sensor(&portSonar);
}

void driver_actMotorSonar_c_set_motor_sonar_speed () {
  c_set_motor_sonar_speed(&actMotorSonar);
}

void driver_portMotorSonar_init_c_zero () {
  c_zero(&local_portMotorSonar);
}

void driver_portMotorSonar_copy_c_int () {
  copy_c_int(&local_portMotorSonar,&global_portMotorSonar);
}

void driver_portFound_init_c_false () {
  c_false(&local_portFound);
}

void driver_portFound_copy_c_bool () {
  copy_c_bool(&local_portFound,&global_portFound);
}

void driver_portIntrusion_init_c_false () {
  c_false(&local_portIntrusion);
}

void driver_portIntrusion_copy_c_bool () {
  copy_c_bool(&local_portIntrusion,&global_portIntrusion);
}

void driver_portAngle_init_c_zero () {
  c_zero(&local_portAngle);
}

void driver_portAngle_copy_c_int () {
  copy_c_int(&local_portAngle,&global_portAngle);
}

void driver_portDistance_init_c_zero () {
  c_zero(&local_portDistance);
}

void driver_portDistance_copy_c_int () {
  copy_c_int(&local_portDistance,&global_portDistance);
}

void driver_portLightO_init_c_zero () {
  c_zero(&local_portLightO);
}

void driver_portLightO_copy_c_int () {
  copy_c_int(&local_portLightO,&global_portLightO);
}

void driver_portSonarO_init_c_zero () {
  c_zero(&local_portSonarO);
}

void driver_portSonarO_copy_c_int () {
  copy_c_int(&local_portSonarO,&global_portSonarO);
}

void driver_guardTask_stateintrusion_init_c_false () {
  c_false(&guardTask_stateintrusion);
}

void driver_searchTask_statefound_init_c_false () {
  c_false(&searchTask_statefound);
}

void driver_actMotorSonar_driverSonarMotor () {
  c_int_to_int(&global_portMotorSonar,&actMotorSonar);
}

void driver_search_driverGuardToSearch () {
  c_switch_mode(&global_portMotorSonar);
}

void driver_guardTask_driverIntrusionStatus () {
  c_bool_to_bool_and_int_to_int(&guardTask_intrusion,&global_portIntrusion,&portLight,&guardTask_light);
}

void driver_guard_driverSearchToGuard () {
  c_switch_mode(&global_portMotorSonar);
}

void driver_searchTask_driverSearchStatus () {
  c_bool_to_bool_and_int_to_int(&global_portFound,&searchTask_found,&portSonar,&searchTask_sonar);
}

driver_type driver_table[MAXDRIVER] = {
  { "portLight_c_get_light_sensor", driver_portLight_c_get_light_sensor, 0 },
  { "portSonar_c_get_sonar_sensor", driver_portSonar_c_get_sonar_sensor, 0 },
  { "actMotorSonar_c_set_motor_sonar_speed", driver_actMotorSonar_c_set_motor_sonar_speed, 0 },
  { "portMotorSonar_init_c_zero", driver_portMotorSonar_init_c_zero, 0 },
  { "portMotorSonar_copy_c_int", driver_portMotorSonar_copy_c_int, 0 },
  { "portFound_init_c_false", driver_portFound_init_c_false, 2 },
  { "portFound_copy_c_bool", driver_portFound_copy_c_bool, 2 },
  { "portIntrusion_init_c_false", driver_portIntrusion_init_c_false, 1 },
  { "portIntrusion_copy_c_bool", driver_portIntrusion_copy_c_bool, 1 },
  { "portAngle_init_c_zero", driver_portAngle_init_c_zero, 0 },
  { "portAngle_copy_c_int", driver_portAngle_copy_c_int, 0 },
  { "portDistance_init_c_zero", driver_portDistance_init_c_zero, 0 },
  { "portDistance_copy_c_int", driver_portDistance_copy_c_int, 0 },
  { "portLightO_init_c_zero", driver_portLightO_init_c_zero, 1 },
  { "portLightO_copy_c_int", driver_portLightO_copy_c_int, 1 },
  { "portSonarO_init_c_zero", driver_portSonarO_init_c_zero, 2 },
  { "portSonarO_copy_c_int", driver_portSonarO_copy_c_int, 2 },
  { "guardTask_stateintrusion_init_c_false", driver_guardTask_stateintrusion_init_c_false, 1 },
  { "searchTask_statefound_init_c_false", driver_searchTask_statefound_init_c_false, 2 },
  { "actMotorSonar_driverSonarMotor", driver_actMotorSonar_driverSonarMotor, 0 },
  { "search_driverGuardToSearch", driver_search_driverGuardToSearch, 0 },
  { "guardTask_driverIntrusionStatus", driver_guardTask_driverIntrusionStatus, 1 },
  { "guard_driverSearchToGuard", driver_guard_driverSearchToGuard, 0 },
  { "searchTask_driverSearchStatus", driver_searchTask_driverSearchStatus, 2 }
};


unsigned condition_actMotorSonar_driverSonarMotor () {
  return c_true();
}

unsigned condition_search_driverGuardToSearch () {
  return c_ready_to_search(&global_portIntrusion);
}

unsigned condition_guardTask_driverIntrusionStatus () {
  return c_true();
}

unsigned condition_guard_driverSearchToGuard () {
  return c_ready_to_guard(&global_portFound);
}

unsigned condition_searchTask_driverSearchStatus () {
  return c_true();
}

condition_type condition_table[MAXCONDITION] = {
  { "actMotorSonar_driverSonarMotor", condition_actMotorSonar_driverSonarMotor, 0 },
  { "search_driverGuardToSearch", condition_search_driverGuardToSearch, 0 },
  { "guardTask_driverIntrusionStatus", condition_guardTask_driverIntrusionStatus, 0 },
  { "guard_driverSearchToGuard", condition_guard_driverSearchToGuard, 0 },
  { "searchTask_driverSearchStatus", condition_searchTask_driverSearchStatus, 0 }
};

