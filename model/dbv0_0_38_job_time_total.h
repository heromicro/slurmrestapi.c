/*
 * dbv0_0_38_job_time_total.h
 *
 * System time values
 */

#ifndef _dbv0_0_38_job_time_total_H_
#define _dbv0_0_38_job_time_total_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_time_total_t dbv0_0_38_job_time_total_t;




typedef struct dbv0_0_38_job_time_total_t {
    int seconds; //numeric
    int microseconds; //numeric

} dbv0_0_38_job_time_total_t;

dbv0_0_38_job_time_total_t *dbv0_0_38_job_time_total_create(
    int seconds,
    int microseconds
);

void dbv0_0_38_job_time_total_free(dbv0_0_38_job_time_total_t *dbv0_0_38_job_time_total);

dbv0_0_38_job_time_total_t *dbv0_0_38_job_time_total_parseFromJSON(cJSON *dbv0_0_38_job_time_totalJSON);

cJSON *dbv0_0_38_job_time_total_convertToJSON(dbv0_0_38_job_time_total_t *dbv0_0_38_job_time_total);

#endif /* _dbv0_0_38_job_time_total_H_ */

