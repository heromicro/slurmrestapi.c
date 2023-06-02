/*
 * dbv0_0_38_job_required.h
 *
 * Job run requirements
 */

#ifndef _dbv0_0_38_job_required_H_
#define _dbv0_0_38_job_required_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_required_t dbv0_0_38_job_required_t;




typedef struct dbv0_0_38_job_required_t {
    int cpus; //numeric
    int memory; //numeric

} dbv0_0_38_job_required_t;

dbv0_0_38_job_required_t *dbv0_0_38_job_required_create(
    int cpus,
    int memory
);

void dbv0_0_38_job_required_free(dbv0_0_38_job_required_t *dbv0_0_38_job_required);

dbv0_0_38_job_required_t *dbv0_0_38_job_required_parseFromJSON(cJSON *dbv0_0_38_job_requiredJSON);

cJSON *dbv0_0_38_job_required_convertToJSON(dbv0_0_38_job_required_t *dbv0_0_38_job_required);

#endif /* _dbv0_0_38_job_required_H_ */

