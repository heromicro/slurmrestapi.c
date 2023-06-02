/*
 * dbv0_0_37_qos_limits_max.h
 *
 * Limits on max settings
 */

#ifndef _dbv0_0_37_qos_limits_max_H_
#define _dbv0_0_37_qos_limits_max_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_qos_limits_max_t dbv0_0_37_qos_limits_max_t;

#include "dbv0_0_37_qos_limits_max_accruing.h"
#include "dbv0_0_37_qos_limits_max_jobs.h"
#include "dbv0_0_37_qos_limits_max_tres.h"
#include "dbv0_0_37_qos_limits_max_wall_clock.h"



typedef struct dbv0_0_37_qos_limits_max_t {
    struct dbv0_0_37_qos_limits_max_wall_clock_t *wall_clock; //model
    struct dbv0_0_37_qos_limits_max_jobs_t *jobs; //model
    struct dbv0_0_37_qos_limits_max_accruing_t *accruing; //model
    struct dbv0_0_37_qos_limits_max_tres_t *tres; //model

} dbv0_0_37_qos_limits_max_t;

dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max_create(
    dbv0_0_37_qos_limits_max_wall_clock_t *wall_clock,
    dbv0_0_37_qos_limits_max_jobs_t *jobs,
    dbv0_0_37_qos_limits_max_accruing_t *accruing,
    dbv0_0_37_qos_limits_max_tres_t *tres
);

void dbv0_0_37_qos_limits_max_free(dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max);

dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max_parseFromJSON(cJSON *dbv0_0_37_qos_limits_maxJSON);

cJSON *dbv0_0_37_qos_limits_max_convertToJSON(dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max);

#endif /* _dbv0_0_37_qos_limits_max_H_ */

