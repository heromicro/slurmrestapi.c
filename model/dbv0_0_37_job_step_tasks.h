/*
 * dbv0_0_37_job_step_tasks.h
 *
 * Task properties
 */

#ifndef _dbv0_0_37_job_step_tasks_H_
#define _dbv0_0_37_job_step_tasks_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_tasks_t dbv0_0_37_job_step_tasks_t;




typedef struct dbv0_0_37_job_step_tasks_t {
    int count; //numeric

} dbv0_0_37_job_step_tasks_t;

dbv0_0_37_job_step_tasks_t *dbv0_0_37_job_step_tasks_create(
    int count
);

void dbv0_0_37_job_step_tasks_free(dbv0_0_37_job_step_tasks_t *dbv0_0_37_job_step_tasks);

dbv0_0_37_job_step_tasks_t *dbv0_0_37_job_step_tasks_parseFromJSON(cJSON *dbv0_0_37_job_step_tasksJSON);

cJSON *dbv0_0_37_job_step_tasks_convertToJSON(dbv0_0_37_job_step_tasks_t *dbv0_0_37_job_step_tasks);

#endif /* _dbv0_0_37_job_step_tasks_H_ */

