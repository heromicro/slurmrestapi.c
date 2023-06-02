/*
 * dbv0_0_38_job_mcs.h
 *
 * Multi-Category Security
 */

#ifndef _dbv0_0_38_job_mcs_H_
#define _dbv0_0_38_job_mcs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_mcs_t dbv0_0_38_job_mcs_t;




typedef struct dbv0_0_38_job_mcs_t {
    char *label; // string

} dbv0_0_38_job_mcs_t;

dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs_create(
    char *label
);

void dbv0_0_38_job_mcs_free(dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs);

dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs_parseFromJSON(cJSON *dbv0_0_38_job_mcsJSON);

cJSON *dbv0_0_38_job_mcs_convertToJSON(dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs);

#endif /* _dbv0_0_38_job_mcs_H_ */

