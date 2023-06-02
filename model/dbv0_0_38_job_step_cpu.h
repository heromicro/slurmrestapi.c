/*
 * dbv0_0_38_job_step_cpu.h
 *
 * CPU properties
 */

#ifndef _dbv0_0_38_job_step_cpu_H_
#define _dbv0_0_38_job_step_cpu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_step_cpu_t dbv0_0_38_job_step_cpu_t;

#include "dbv0_0_38_job_step_cpu_requested_frequency.h"



typedef struct dbv0_0_38_job_step_cpu_t {
    struct dbv0_0_38_job_step_cpu_requested_frequency_t *requested_frequency; //model
    list_t *governor; //primitive container

} dbv0_0_38_job_step_cpu_t;

dbv0_0_38_job_step_cpu_t *dbv0_0_38_job_step_cpu_create(
    dbv0_0_38_job_step_cpu_requested_frequency_t *requested_frequency,
    list_t *governor
);

void dbv0_0_38_job_step_cpu_free(dbv0_0_38_job_step_cpu_t *dbv0_0_38_job_step_cpu);

dbv0_0_38_job_step_cpu_t *dbv0_0_38_job_step_cpu_parseFromJSON(cJSON *dbv0_0_38_job_step_cpuJSON);

cJSON *dbv0_0_38_job_step_cpu_convertToJSON(dbv0_0_38_job_step_cpu_t *dbv0_0_38_job_step_cpu);

#endif /* _dbv0_0_38_job_step_cpu_H_ */

