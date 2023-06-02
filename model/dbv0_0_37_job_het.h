/*
 * dbv0_0_37_job_het.h
 *
 * Heterogeneous Job details (optional)
 */

#ifndef _dbv0_0_37_job_het_H_
#define _dbv0_0_37_job_het_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_het_t dbv0_0_37_job_het_t;

#include "object.h"



typedef struct dbv0_0_37_job_het_t {
    object_t *job_id; //object
    object_t *job_offset; //object

} dbv0_0_37_job_het_t;

dbv0_0_37_job_het_t *dbv0_0_37_job_het_create(
    object_t *job_id,
    object_t *job_offset
);

void dbv0_0_37_job_het_free(dbv0_0_37_job_het_t *dbv0_0_37_job_het);

dbv0_0_37_job_het_t *dbv0_0_37_job_het_parseFromJSON(cJSON *dbv0_0_37_job_hetJSON);

cJSON *dbv0_0_37_job_het_convertToJSON(dbv0_0_37_job_het_t *dbv0_0_37_job_het);

#endif /* _dbv0_0_37_job_het_H_ */

