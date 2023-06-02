/*
 * v0_0_39_step.h
 *
 * 
 */

#ifndef _v0_0_39_step_H_
#define _v0_0_39_step_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_t v0_0_39_step_t;

#include "v0_0_39_job_exit_code.h"
#include "v0_0_39_job_reservation.h"
#include "v0_0_39_step_cpu.h"
#include "v0_0_39_step_nodes.h"
#include "v0_0_39_step_statistics.h"
#include "v0_0_39_step_task.h"
#include "v0_0_39_step_tasks.h"
#include "v0_0_39_step_time.h"
#include "v0_0_39_step_tres.h"



typedef struct v0_0_39_step_t {
    struct v0_0_39_step_time_t *time; //model
    struct v0_0_39_job_exit_code_t *exit_code; //model
    struct v0_0_39_step_nodes_t *nodes; //model
    struct v0_0_39_step_tasks_t *tasks; //model
    char *pid; // string
    struct v0_0_39_step_cpu_t *cpu; //model
    char *kill_request_user; // string
    char *state; // string
    struct v0_0_39_step_statistics_t *statistics; //model
    struct v0_0_39_job_reservation_t *step; //model
    struct v0_0_39_step_task_t *task; //model
    struct v0_0_39_step_tres_t *tres; //model

} v0_0_39_step_t;

v0_0_39_step_t *v0_0_39_step_create(
    v0_0_39_step_time_t *time,
    v0_0_39_job_exit_code_t *exit_code,
    v0_0_39_step_nodes_t *nodes,
    v0_0_39_step_tasks_t *tasks,
    char *pid,
    v0_0_39_step_cpu_t *cpu,
    char *kill_request_user,
    char *state,
    v0_0_39_step_statistics_t *statistics,
    v0_0_39_job_reservation_t *step,
    v0_0_39_step_task_t *task,
    v0_0_39_step_tres_t *tres
);

void v0_0_39_step_free(v0_0_39_step_t *v0_0_39_step);

v0_0_39_step_t *v0_0_39_step_parseFromJSON(cJSON *v0_0_39_stepJSON);

cJSON *v0_0_39_step_convertToJSON(v0_0_39_step_t *v0_0_39_step);

#endif /* _v0_0_39_step_H_ */

