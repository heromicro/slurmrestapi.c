/*
 * dbv0_0_38_job_step_cpu_requested_frequency.h
 *
 * CPU frequency requested
 */

#ifndef _dbv0_0_38_job_step_cpu_requested_frequency_H_
#define _dbv0_0_38_job_step_cpu_requested_frequency_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_step_cpu_requested_frequency_t dbv0_0_38_job_step_cpu_requested_frequency_t;




typedef struct dbv0_0_38_job_step_cpu_requested_frequency_t {
    int min; //numeric
    int max; //numeric

} dbv0_0_38_job_step_cpu_requested_frequency_t;

dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency_create(
    int min,
    int max
);

void dbv0_0_38_job_step_cpu_requested_frequency_free(dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency);

dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency_parseFromJSON(cJSON *dbv0_0_38_job_step_cpu_requested_frequencyJSON);

cJSON *dbv0_0_38_job_step_cpu_requested_frequency_convertToJSON(dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency);

#endif /* _dbv0_0_38_job_step_cpu_requested_frequency_H_ */

