/*
 * dbv0_0_37_job_array_limits_max_running.h
 *
 * Limits on array settings
 */

#ifndef _dbv0_0_37_job_array_limits_max_running_H_
#define _dbv0_0_37_job_array_limits_max_running_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_array_limits_max_running_t dbv0_0_37_job_array_limits_max_running_t;




typedef struct dbv0_0_37_job_array_limits_max_running_t {
    int tasks; //numeric

} dbv0_0_37_job_array_limits_max_running_t;

dbv0_0_37_job_array_limits_max_running_t *dbv0_0_37_job_array_limits_max_running_create(
    int tasks
);

void dbv0_0_37_job_array_limits_max_running_free(dbv0_0_37_job_array_limits_max_running_t *dbv0_0_37_job_array_limits_max_running);

dbv0_0_37_job_array_limits_max_running_t *dbv0_0_37_job_array_limits_max_running_parseFromJSON(cJSON *dbv0_0_37_job_array_limits_max_runningJSON);

cJSON *dbv0_0_37_job_array_limits_max_running_convertToJSON(dbv0_0_37_job_array_limits_max_running_t *dbv0_0_37_job_array_limits_max_running);

#endif /* _dbv0_0_37_job_array_limits_max_running_H_ */

