/*
 * dbv0_0_37_job_tres.h
 *
 * TRES settings
 */

#ifndef _dbv0_0_37_job_tres_H_
#define _dbv0_0_37_job_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_tres_t dbv0_0_37_job_tres_t;

#include "dbv0_0_37_tres_list_inner.h"



typedef struct dbv0_0_37_job_tres_t {
    list_t *allocated; //nonprimitive container
    list_t *requested; //nonprimitive container

} dbv0_0_37_job_tres_t;

dbv0_0_37_job_tres_t *dbv0_0_37_job_tres_create(
    list_t *allocated,
    list_t *requested
);

void dbv0_0_37_job_tres_free(dbv0_0_37_job_tres_t *dbv0_0_37_job_tres);

dbv0_0_37_job_tres_t *dbv0_0_37_job_tres_parseFromJSON(cJSON *dbv0_0_37_job_tresJSON);

cJSON *dbv0_0_37_job_tres_convertToJSON(dbv0_0_37_job_tres_t *dbv0_0_37_job_tres);

#endif /* _dbv0_0_37_job_tres_H_ */

