/*
 * dbv0_0_38_association_max.h
 *
 * Max settings
 */

#ifndef _dbv0_0_38_association_max_H_
#define _dbv0_0_38_association_max_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_max_t dbv0_0_38_association_max_t;

#include "dbv0_0_38_association_max_jobs.h"
#include "dbv0_0_38_association_max_per.h"
#include "dbv0_0_38_association_max_tres.h"



typedef struct dbv0_0_38_association_max_t {
    struct dbv0_0_38_association_max_jobs_t *jobs; //model
    struct dbv0_0_38_association_max_per_t *per; //model
    struct dbv0_0_38_association_max_tres_t *tres; //model

} dbv0_0_38_association_max_t;

dbv0_0_38_association_max_t *dbv0_0_38_association_max_create(
    dbv0_0_38_association_max_jobs_t *jobs,
    dbv0_0_38_association_max_per_t *per,
    dbv0_0_38_association_max_tres_t *tres
);

void dbv0_0_38_association_max_free(dbv0_0_38_association_max_t *dbv0_0_38_association_max);

dbv0_0_38_association_max_t *dbv0_0_38_association_max_parseFromJSON(cJSON *dbv0_0_38_association_maxJSON);

cJSON *dbv0_0_38_association_max_convertToJSON(dbv0_0_38_association_max_t *dbv0_0_38_association_max);

#endif /* _dbv0_0_38_association_max_H_ */

