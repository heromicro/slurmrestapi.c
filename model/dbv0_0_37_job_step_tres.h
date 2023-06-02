/*
 * dbv0_0_37_job_step_tres.h
 *
 * TRES usage
 */

#ifndef _dbv0_0_37_job_step_tres_H_
#define _dbv0_0_37_job_step_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_step_tres_t dbv0_0_37_job_step_tres_t;

#include "dbv0_0_37_job_step_tres_requested.h"
#include "dbv0_0_37_tres_list_inner.h"



typedef struct dbv0_0_37_job_step_tres_t {
    struct dbv0_0_37_job_step_tres_requested_t *requested; //model
    struct dbv0_0_37_job_step_tres_requested_t *consumed; //model
    list_t *allocated; //nonprimitive container

} dbv0_0_37_job_step_tres_t;

dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres_create(
    dbv0_0_37_job_step_tres_requested_t *requested,
    dbv0_0_37_job_step_tres_requested_t *consumed,
    list_t *allocated
);

void dbv0_0_37_job_step_tres_free(dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres);

dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres_parseFromJSON(cJSON *dbv0_0_37_job_step_tresJSON);

cJSON *dbv0_0_37_job_step_tres_convertToJSON(dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres);

#endif /* _dbv0_0_37_job_step_tres_H_ */

