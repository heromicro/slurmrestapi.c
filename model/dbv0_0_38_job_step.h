/*
 * dbv0_0_38_job_step.h
 *
 * 
 */

#ifndef _dbv0_0_38_job_step_H_
#define _dbv0_0_38_job_step_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_step_t dbv0_0_38_job_step_t;

#include "dbv0_0_38_job_exit_code.h"
#include "dbv0_0_38_job_step_cpu.h"
#include "dbv0_0_38_job_step_nodes.h"
#include "dbv0_0_38_job_step_statistics.h"
#include "dbv0_0_38_job_step_step.h"
#include "dbv0_0_38_job_step_tasks.h"
#include "dbv0_0_38_job_step_time.h"
#include "dbv0_0_38_job_step_tres.h"



typedef struct dbv0_0_38_job_step_t {
    struct dbv0_0_38_job_step_time_t *time; //model
    struct dbv0_0_38_job_exit_code_t *exit_code; //model
    struct dbv0_0_38_job_step_nodes_t *nodes; //model
    struct dbv0_0_38_job_step_tasks_t *tasks; //model
    char *pid; // string
    struct dbv0_0_38_job_step_cpu_t *cpu; //model
    char *kill_request_user; // string
    char *state; // string
    struct dbv0_0_38_job_step_statistics_t *statistics; //model
    struct dbv0_0_38_job_step_step_t *step; //model
    char *task; // string
    struct dbv0_0_38_job_step_tres_t *tres; //model

} dbv0_0_38_job_step_t;

dbv0_0_38_job_step_t *dbv0_0_38_job_step_create(
    dbv0_0_38_job_step_time_t *time,
    dbv0_0_38_job_exit_code_t *exit_code,
    dbv0_0_38_job_step_nodes_t *nodes,
    dbv0_0_38_job_step_tasks_t *tasks,
    char *pid,
    dbv0_0_38_job_step_cpu_t *cpu,
    char *kill_request_user,
    char *state,
    dbv0_0_38_job_step_statistics_t *statistics,
    dbv0_0_38_job_step_step_t *step,
    char *task,
    dbv0_0_38_job_step_tres_t *tres
);

void dbv0_0_38_job_step_free(dbv0_0_38_job_step_t *dbv0_0_38_job_step);

dbv0_0_38_job_step_t *dbv0_0_38_job_step_parseFromJSON(cJSON *dbv0_0_38_job_stepJSON);

cJSON *dbv0_0_38_job_step_convertToJSON(dbv0_0_38_job_step_t *dbv0_0_38_job_step);

#endif /* _dbv0_0_38_job_step_H_ */

