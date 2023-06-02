/*
 * dbv0_0_38_association_max_jobs_per.h
 *
 * Max jobs per settings
 */

#ifndef _dbv0_0_38_association_max_jobs_per_H_
#define _dbv0_0_38_association_max_jobs_per_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_max_jobs_per_t dbv0_0_38_association_max_jobs_per_t;




typedef struct dbv0_0_38_association_max_jobs_per_t {
    int wall_clock; //numeric

} dbv0_0_38_association_max_jobs_per_t;

dbv0_0_38_association_max_jobs_per_t *dbv0_0_38_association_max_jobs_per_create(
    int wall_clock
);

void dbv0_0_38_association_max_jobs_per_free(dbv0_0_38_association_max_jobs_per_t *dbv0_0_38_association_max_jobs_per);

dbv0_0_38_association_max_jobs_per_t *dbv0_0_38_association_max_jobs_per_parseFromJSON(cJSON *dbv0_0_38_association_max_jobs_perJSON);

cJSON *dbv0_0_38_association_max_jobs_per_convertToJSON(dbv0_0_38_association_max_jobs_per_t *dbv0_0_38_association_max_jobs_per);

#endif /* _dbv0_0_38_association_max_jobs_per_H_ */

