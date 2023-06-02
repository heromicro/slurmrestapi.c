/*
 * dbv0_0_38_job_step_time.h
 *
 * Time properties
 */

#ifndef _dbv0_0_38_job_step_time_H_
#define _dbv0_0_38_job_step_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_step_time_t dbv0_0_38_job_step_time_t;

#include "dbv0_0_38_job_time_system.h"
#include "dbv0_0_38_job_time_total.h"
#include "dbv0_0_38_job_time_user.h"



typedef struct dbv0_0_38_job_step_time_t {
    int elapsed; //numeric
    int end; //numeric
    int start; //numeric
    int suspended; //numeric
    struct dbv0_0_38_job_time_system_t *system; //model
    struct dbv0_0_38_job_time_total_t *total; //model
    struct dbv0_0_38_job_time_user_t *user; //model

} dbv0_0_38_job_step_time_t;

dbv0_0_38_job_step_time_t *dbv0_0_38_job_step_time_create(
    int elapsed,
    int end,
    int start,
    int suspended,
    dbv0_0_38_job_time_system_t *system,
    dbv0_0_38_job_time_total_t *total,
    dbv0_0_38_job_time_user_t *user
);

void dbv0_0_38_job_step_time_free(dbv0_0_38_job_step_time_t *dbv0_0_38_job_step_time);

dbv0_0_38_job_step_time_t *dbv0_0_38_job_step_time_parseFromJSON(cJSON *dbv0_0_38_job_step_timeJSON);

cJSON *dbv0_0_38_job_step_time_convertToJSON(dbv0_0_38_job_step_time_t *dbv0_0_38_job_step_time);

#endif /* _dbv0_0_38_job_step_time_H_ */

