/*
 * dbv0_0_37_job_time_system.h
 *
 * System time values
 */

#ifndef _dbv0_0_37_job_time_system_H_
#define _dbv0_0_37_job_time_system_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_time_system_t dbv0_0_37_job_time_system_t;




typedef struct dbv0_0_37_job_time_system_t {
    int seconds; //numeric
    int microseconds; //numeric

} dbv0_0_37_job_time_system_t;

dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system_create(
    int seconds,
    int microseconds
);

void dbv0_0_37_job_time_system_free(dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system);

dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system_parseFromJSON(cJSON *dbv0_0_37_job_time_systemJSON);

cJSON *dbv0_0_37_job_time_system_convertToJSON(dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system);

#endif /* _dbv0_0_37_job_time_system_H_ */

