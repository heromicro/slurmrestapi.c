/*
 * dbv0_0_38_job_step_step_het.h
 *
 * Heterogeneous job details
 */

#ifndef _dbv0_0_38_job_step_step_het_H_
#define _dbv0_0_38_job_step_step_het_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_step_step_het_t dbv0_0_38_job_step_step_het_t;




typedef struct dbv0_0_38_job_step_step_het_t {
    int component; //numeric

} dbv0_0_38_job_step_step_het_t;

dbv0_0_38_job_step_step_het_t *dbv0_0_38_job_step_step_het_create(
    int component
);

void dbv0_0_38_job_step_step_het_free(dbv0_0_38_job_step_step_het_t *dbv0_0_38_job_step_step_het);

dbv0_0_38_job_step_step_het_t *dbv0_0_38_job_step_step_het_parseFromJSON(cJSON *dbv0_0_38_job_step_step_hetJSON);

cJSON *dbv0_0_38_job_step_step_het_convertToJSON(dbv0_0_38_job_step_step_het_t *dbv0_0_38_job_step_step_het);

#endif /* _dbv0_0_38_job_step_step_het_H_ */

