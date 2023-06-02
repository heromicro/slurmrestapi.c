/*
 * dbv0_0_38_job_array.h
 *
 * Array properties (optional)
 */

#ifndef _dbv0_0_38_job_array_H_
#define _dbv0_0_38_job_array_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_array_t dbv0_0_38_job_array_t;

#include "dbv0_0_38_job_array_limits.h"



typedef struct dbv0_0_38_job_array_t {
    int job_id; //numeric
    struct dbv0_0_38_job_array_limits_t *limits; //model
    char *task; // string
    int task_id; //numeric

} dbv0_0_38_job_array_t;

dbv0_0_38_job_array_t *dbv0_0_38_job_array_create(
    int job_id,
    dbv0_0_38_job_array_limits_t *limits,
    char *task,
    int task_id
);

void dbv0_0_38_job_array_free(dbv0_0_38_job_array_t *dbv0_0_38_job_array);

dbv0_0_38_job_array_t *dbv0_0_38_job_array_parseFromJSON(cJSON *dbv0_0_38_job_arrayJSON);

cJSON *dbv0_0_38_job_array_convertToJSON(dbv0_0_38_job_array_t *dbv0_0_38_job_array);

#endif /* _dbv0_0_38_job_array_H_ */

