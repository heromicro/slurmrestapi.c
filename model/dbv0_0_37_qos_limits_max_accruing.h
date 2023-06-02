/*
 * dbv0_0_37_qos_limits_max_accruing.h
 *
 * Limits on accruing priority
 */

#ifndef _dbv0_0_37_qos_limits_max_accruing_H_
#define _dbv0_0_37_qos_limits_max_accruing_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_qos_limits_max_accruing_t dbv0_0_37_qos_limits_max_accruing_t;

#include "dbv0_0_37_qos_limits_max_accruing_per.h"



typedef struct dbv0_0_37_qos_limits_max_accruing_t {
    struct dbv0_0_37_qos_limits_max_accruing_per_t *per; //model

} dbv0_0_37_qos_limits_max_accruing_t;

dbv0_0_37_qos_limits_max_accruing_t *dbv0_0_37_qos_limits_max_accruing_create(
    dbv0_0_37_qos_limits_max_accruing_per_t *per
);

void dbv0_0_37_qos_limits_max_accruing_free(dbv0_0_37_qos_limits_max_accruing_t *dbv0_0_37_qos_limits_max_accruing);

dbv0_0_37_qos_limits_max_accruing_t *dbv0_0_37_qos_limits_max_accruing_parseFromJSON(cJSON *dbv0_0_37_qos_limits_max_accruingJSON);

cJSON *dbv0_0_37_qos_limits_max_accruing_convertToJSON(dbv0_0_37_qos_limits_max_accruing_t *dbv0_0_37_qos_limits_max_accruing);

#endif /* _dbv0_0_37_qos_limits_max_accruing_H_ */

