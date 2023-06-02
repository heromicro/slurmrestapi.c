/*
 * dbv0_0_37_job_step_step.h
 *
 * Step details
 */

#ifndef _dbv0_0_37_job_step_step_H_
#define _dbv0_0_37_job_step_step_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_step_t dbv0_0_37_job_step_step_t;

#include "dbv0_0_37_job_step_step_het.h"



typedef struct dbv0_0_37_job_step_step_t {
    int job_id; //numeric
    struct dbv0_0_37_job_step_step_het_t *het; //model
    char *id; // string
    char *name; // string

} dbv0_0_37_job_step_step_t;

dbv0_0_37_job_step_step_t *dbv0_0_37_job_step_step_create(
    int job_id,
    dbv0_0_37_job_step_step_het_t *het,
    char *id,
    char *name
);

void dbv0_0_37_job_step_step_free(dbv0_0_37_job_step_step_t *dbv0_0_37_job_step_step);

dbv0_0_37_job_step_step_t *dbv0_0_37_job_step_step_parseFromJSON(cJSON *dbv0_0_37_job_step_stepJSON);

cJSON *dbv0_0_37_job_step_step_convertToJSON(dbv0_0_37_job_step_step_t *dbv0_0_37_job_step_step);

#endif /* _dbv0_0_37_job_step_step_H_ */

