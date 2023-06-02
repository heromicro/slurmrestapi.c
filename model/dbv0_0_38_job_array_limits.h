/*
 * dbv0_0_38_job_array_limits.h
 *
 * Limits on array settings
 */

#ifndef _dbv0_0_38_job_array_limits_H_
#define _dbv0_0_38_job_array_limits_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_array_limits_t dbv0_0_38_job_array_limits_t;

#include "dbv0_0_38_job_array_limits_max.h"



typedef struct dbv0_0_38_job_array_limits_t {
    struct dbv0_0_38_job_array_limits_max_t *max; //model

} dbv0_0_38_job_array_limits_t;

dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits_create(
    dbv0_0_38_job_array_limits_max_t *max
);

void dbv0_0_38_job_array_limits_free(dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits);

dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits_parseFromJSON(cJSON *dbv0_0_38_job_array_limitsJSON);

cJSON *dbv0_0_38_job_array_limits_convertToJSON(dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits);

#endif /* _dbv0_0_38_job_array_limits_H_ */

