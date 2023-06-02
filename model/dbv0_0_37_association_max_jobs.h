/*
 * dbv0_0_37_association_max_jobs.h
 *
 * Max jobs settings
 */

#ifndef _dbv0_0_37_association_max_jobs_H_
#define _dbv0_0_37_association_max_jobs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_association_max_jobs_t dbv0_0_37_association_max_jobs_t;

#include "dbv0_0_37_association_max_jobs_per.h"



typedef struct dbv0_0_37_association_max_jobs_t {
    int active; //numeric
    int accruing; //numeric
    int total; //numeric
    struct dbv0_0_37_association_max_jobs_per_t *per; //model

} dbv0_0_37_association_max_jobs_t;

dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs_create(
    int active,
    int accruing,
    int total,
    dbv0_0_37_association_max_jobs_per_t *per
);

void dbv0_0_37_association_max_jobs_free(dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs);

dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs_parseFromJSON(cJSON *dbv0_0_37_association_max_jobsJSON);

cJSON *dbv0_0_37_association_max_jobs_convertToJSON(dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs);

#endif /* _dbv0_0_37_association_max_jobs_H_ */

