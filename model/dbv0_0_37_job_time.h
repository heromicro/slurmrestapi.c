/*
 * dbv0_0_37_job_time.h
 *
 * Time properties
 */

#ifndef _dbv0_0_37_job_time_H_
#define _dbv0_0_37_job_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_time_t dbv0_0_37_job_time_t;

#include "dbv0_0_37_job_time_system.h"
#include "dbv0_0_37_job_time_total.h"
#include "dbv0_0_37_job_time_user.h"



typedef struct dbv0_0_37_job_time_t {
    int elapsed; //numeric
    int eligible; //numeric
    int end; //numeric
    int start; //numeric
    int submission; //numeric
    int suspended; //numeric
    struct dbv0_0_37_job_time_system_t *system; //model
    struct dbv0_0_37_job_time_total_t *total; //model
    struct dbv0_0_37_job_time_user_t *user; //model
    int limit; //numeric

} dbv0_0_37_job_time_t;

dbv0_0_37_job_time_t *dbv0_0_37_job_time_create(
    int elapsed,
    int eligible,
    int end,
    int start,
    int submission,
    int suspended,
    dbv0_0_37_job_time_system_t *system,
    dbv0_0_37_job_time_total_t *total,
    dbv0_0_37_job_time_user_t *user,
    int limit
);

void dbv0_0_37_job_time_free(dbv0_0_37_job_time_t *dbv0_0_37_job_time);

dbv0_0_37_job_time_t *dbv0_0_37_job_time_parseFromJSON(cJSON *dbv0_0_37_job_timeJSON);

cJSON *dbv0_0_37_job_time_convertToJSON(dbv0_0_37_job_time_t *dbv0_0_37_job_time);

#endif /* _dbv0_0_37_job_time_H_ */

