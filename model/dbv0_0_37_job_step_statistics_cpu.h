/*
 * dbv0_0_37_job_step_statistics_cpu.h
 *
 * Statistics of CPU
 */

#ifndef _dbv0_0_37_job_step_statistics_cpu_H_
#define _dbv0_0_37_job_step_statistics_cpu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_statistics_cpu_t dbv0_0_37_job_step_statistics_cpu_t;




typedef struct dbv0_0_37_job_step_statistics_cpu_t {
    int actual_frequency; //numeric

} dbv0_0_37_job_step_statistics_cpu_t;

dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu_create(
    int actual_frequency
);

void dbv0_0_37_job_step_statistics_cpu_free(dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu);

dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu_parseFromJSON(cJSON *dbv0_0_37_job_step_statistics_cpuJSON);

cJSON *dbv0_0_37_job_step_statistics_cpu_convertToJSON(dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu);

#endif /* _dbv0_0_37_job_step_statistics_cpu_H_ */

