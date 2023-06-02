/*
 * dbv0_0_38_job_state.h
 *
 * State properties of job
 */

#ifndef _dbv0_0_38_job_state_H_
#define _dbv0_0_38_job_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_state_t dbv0_0_38_job_state_t;




typedef struct dbv0_0_38_job_state_t {
    char *current; // string
    char *reason; // string

} dbv0_0_38_job_state_t;

dbv0_0_38_job_state_t *dbv0_0_38_job_state_create(
    char *current,
    char *reason
);

void dbv0_0_38_job_state_free(dbv0_0_38_job_state_t *dbv0_0_38_job_state);

dbv0_0_38_job_state_t *dbv0_0_38_job_state_parseFromJSON(cJSON *dbv0_0_38_job_stateJSON);

cJSON *dbv0_0_38_job_state_convertToJSON(dbv0_0_38_job_state_t *dbv0_0_38_job_state);

#endif /* _dbv0_0_38_job_state_H_ */

