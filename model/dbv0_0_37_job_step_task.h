/*
 * dbv0_0_37_job_step_task.h
 *
 * Task properties
 */

#ifndef _dbv0_0_37_job_step_task_H_
#define _dbv0_0_37_job_step_task_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_task_t dbv0_0_37_job_step_task_t;




typedef struct dbv0_0_37_job_step_task_t {
    char *distribution; // string

} dbv0_0_37_job_step_task_t;

dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task_create(
    char *distribution
);

void dbv0_0_37_job_step_task_free(dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task);

dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task_parseFromJSON(cJSON *dbv0_0_37_job_step_taskJSON);

cJSON *dbv0_0_37_job_step_task_convertToJSON(dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task);

#endif /* _dbv0_0_37_job_step_task_H_ */

