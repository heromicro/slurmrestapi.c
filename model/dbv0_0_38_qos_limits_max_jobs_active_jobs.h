/*
 * dbv0_0_38_qos_limits_max_jobs_active_jobs.h
 *
 * Limits on active jobs settings
 */

#ifndef _dbv0_0_38_qos_limits_max_jobs_active_jobs_H_
#define _dbv0_0_38_qos_limits_max_jobs_active_jobs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_qos_limits_max_jobs_active_jobs_t dbv0_0_38_qos_limits_max_jobs_active_jobs_t;

#include "dbv0_0_38_qos_limits_max_jobs_active_jobs_per.h"



typedef struct dbv0_0_38_qos_limits_max_jobs_active_jobs_t {
    struct dbv0_0_38_qos_limits_max_jobs_active_jobs_per_t *per; //model

} dbv0_0_38_qos_limits_max_jobs_active_jobs_t;

dbv0_0_38_qos_limits_max_jobs_active_jobs_t *dbv0_0_38_qos_limits_max_jobs_active_jobs_create(
    dbv0_0_38_qos_limits_max_jobs_active_jobs_per_t *per
);

void dbv0_0_38_qos_limits_max_jobs_active_jobs_free(dbv0_0_38_qos_limits_max_jobs_active_jobs_t *dbv0_0_38_qos_limits_max_jobs_active_jobs);

dbv0_0_38_qos_limits_max_jobs_active_jobs_t *dbv0_0_38_qos_limits_max_jobs_active_jobs_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_jobs_active_jobsJSON);

cJSON *dbv0_0_38_qos_limits_max_jobs_active_jobs_convertToJSON(dbv0_0_38_qos_limits_max_jobs_active_jobs_t *dbv0_0_38_qos_limits_max_jobs_active_jobs);

#endif /* _dbv0_0_38_qos_limits_max_jobs_active_jobs_H_ */

