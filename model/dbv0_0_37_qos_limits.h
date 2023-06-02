/*
 * dbv0_0_37_qos_limits.h
 *
 * Assigned limits
 */

#ifndef _dbv0_0_37_qos_limits_H_
#define _dbv0_0_37_qos_limits_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_qos_limits_t dbv0_0_37_qos_limits_t;

#include "dbv0_0_37_qos_limits_max.h"
#include "dbv0_0_37_qos_limits_min.h"



typedef struct dbv0_0_37_qos_limits_t {
    double factor; //numeric
    struct dbv0_0_37_qos_limits_max_t *max; //model
    struct dbv0_0_37_qos_limits_min_t *min; //model

} dbv0_0_37_qos_limits_t;

dbv0_0_37_qos_limits_t *dbv0_0_37_qos_limits_create(
    double factor,
    dbv0_0_37_qos_limits_max_t *max,
    dbv0_0_37_qos_limits_min_t *min
);

void dbv0_0_37_qos_limits_free(dbv0_0_37_qos_limits_t *dbv0_0_37_qos_limits);

dbv0_0_37_qos_limits_t *dbv0_0_37_qos_limits_parseFromJSON(cJSON *dbv0_0_37_qos_limitsJSON);

cJSON *dbv0_0_37_qos_limits_convertToJSON(dbv0_0_37_qos_limits_t *dbv0_0_37_qos_limits);

#endif /* _dbv0_0_37_qos_limits_H_ */

