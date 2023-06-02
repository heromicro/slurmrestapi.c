/*
 * dbv0_0_37_job_step_statistics_energy.h
 *
 * Statistics of energy
 */

#ifndef _dbv0_0_37_job_step_statistics_energy_H_
#define _dbv0_0_37_job_step_statistics_energy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_statistics_energy_t dbv0_0_37_job_step_statistics_energy_t;




typedef struct dbv0_0_37_job_step_statistics_energy_t {
    int consumed; //numeric

} dbv0_0_37_job_step_statistics_energy_t;

dbv0_0_37_job_step_statistics_energy_t *dbv0_0_37_job_step_statistics_energy_create(
    int consumed
);

void dbv0_0_37_job_step_statistics_energy_free(dbv0_0_37_job_step_statistics_energy_t *dbv0_0_37_job_step_statistics_energy);

dbv0_0_37_job_step_statistics_energy_t *dbv0_0_37_job_step_statistics_energy_parseFromJSON(cJSON *dbv0_0_37_job_step_statistics_energyJSON);

cJSON *dbv0_0_37_job_step_statistics_energy_convertToJSON(dbv0_0_37_job_step_statistics_energy_t *dbv0_0_37_job_step_statistics_energy);

#endif /* _dbv0_0_37_job_step_statistics_energy_H_ */

