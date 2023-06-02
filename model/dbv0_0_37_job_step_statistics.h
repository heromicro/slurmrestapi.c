/*
 * dbv0_0_37_job_step_statistics.h
 *
 * Statistics of job step
 */

#ifndef _dbv0_0_37_job_step_statistics_H_
#define _dbv0_0_37_job_step_statistics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_statistics_t dbv0_0_37_job_step_statistics_t;

#include "dbv0_0_37_job_step_statistics_cpu.h"
#include "dbv0_0_37_job_step_statistics_energy.h"



typedef struct dbv0_0_37_job_step_statistics_t {
    struct dbv0_0_37_job_step_statistics_cpu_t *cpu; //model
    struct dbv0_0_37_job_step_statistics_energy_t *energy; //model

} dbv0_0_37_job_step_statistics_t;

dbv0_0_37_job_step_statistics_t *dbv0_0_37_job_step_statistics_create(
    dbv0_0_37_job_step_statistics_cpu_t *cpu,
    dbv0_0_37_job_step_statistics_energy_t *energy
);

void dbv0_0_37_job_step_statistics_free(dbv0_0_37_job_step_statistics_t *dbv0_0_37_job_step_statistics);

dbv0_0_37_job_step_statistics_t *dbv0_0_37_job_step_statistics_parseFromJSON(cJSON *dbv0_0_37_job_step_statisticsJSON);

cJSON *dbv0_0_37_job_step_statistics_convertToJSON(dbv0_0_37_job_step_statistics_t *dbv0_0_37_job_step_statistics);

#endif /* _dbv0_0_37_job_step_statistics_H_ */

