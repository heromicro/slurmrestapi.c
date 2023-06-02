/*
 * dbv0_0_37_job_array_limits_max.h
 *
 * Limits on array settings
 */

#ifndef _dbv0_0_37_job_array_limits_max_H_
#define _dbv0_0_37_job_array_limits_max_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_array_limits_max_t dbv0_0_37_job_array_limits_max_t;

#include "dbv0_0_37_job_array_limits_max_running.h"



typedef struct dbv0_0_37_job_array_limits_max_t {
    struct dbv0_0_37_job_array_limits_max_running_t *running; //model

} dbv0_0_37_job_array_limits_max_t;

dbv0_0_37_job_array_limits_max_t *dbv0_0_37_job_array_limits_max_create(
    dbv0_0_37_job_array_limits_max_running_t *running
);

void dbv0_0_37_job_array_limits_max_free(dbv0_0_37_job_array_limits_max_t *dbv0_0_37_job_array_limits_max);

dbv0_0_37_job_array_limits_max_t *dbv0_0_37_job_array_limits_max_parseFromJSON(cJSON *dbv0_0_37_job_array_limits_maxJSON);

cJSON *dbv0_0_37_job_array_limits_max_convertToJSON(dbv0_0_37_job_array_limits_max_t *dbv0_0_37_job_array_limits_max);

#endif /* _dbv0_0_37_job_array_limits_max_H_ */

