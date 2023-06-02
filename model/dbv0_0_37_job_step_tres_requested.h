/*
 * dbv0_0_37_job_step_tres_requested.h
 *
 * TRES requested for job
 */

#ifndef _dbv0_0_37_job_step_tres_requested_H_
#define _dbv0_0_37_job_step_tres_requested_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_tres_requested_t dbv0_0_37_job_step_tres_requested_t;

#include "dbv0_0_37_tres_list_inner.h"



typedef struct dbv0_0_37_job_step_tres_requested_t {
    list_t *average; //nonprimitive container
    list_t *max; //nonprimitive container
    list_t *min; //nonprimitive container
    list_t *total; //nonprimitive container

} dbv0_0_37_job_step_tres_requested_t;

dbv0_0_37_job_step_tres_requested_t *dbv0_0_37_job_step_tres_requested_create(
    list_t *average,
    list_t *max,
    list_t *min,
    list_t *total
);

void dbv0_0_37_job_step_tres_requested_free(dbv0_0_37_job_step_tres_requested_t *dbv0_0_37_job_step_tres_requested);

dbv0_0_37_job_step_tres_requested_t *dbv0_0_37_job_step_tres_requested_parseFromJSON(cJSON *dbv0_0_37_job_step_tres_requestedJSON);

cJSON *dbv0_0_37_job_step_tres_requested_convertToJSON(dbv0_0_37_job_step_tres_requested_t *dbv0_0_37_job_step_tres_requested);

#endif /* _dbv0_0_37_job_step_tres_requested_H_ */

