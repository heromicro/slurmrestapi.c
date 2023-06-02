/*
 * dbv0_0_38_qos_limits_min.h
 *
 * Min limit settings
 */

#ifndef _dbv0_0_38_qos_limits_min_H_
#define _dbv0_0_38_qos_limits_min_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_qos_limits_min_t dbv0_0_38_qos_limits_min_t;

#include "dbv0_0_38_qos_limits_min_tres.h"



typedef struct dbv0_0_38_qos_limits_min_t {
    int priority_threshold; //numeric
    struct dbv0_0_38_qos_limits_min_tres_t *tres; //model

} dbv0_0_38_qos_limits_min_t;

dbv0_0_38_qos_limits_min_t *dbv0_0_38_qos_limits_min_create(
    int priority_threshold,
    dbv0_0_38_qos_limits_min_tres_t *tres
);

void dbv0_0_38_qos_limits_min_free(dbv0_0_38_qos_limits_min_t *dbv0_0_38_qos_limits_min);

dbv0_0_38_qos_limits_min_t *dbv0_0_38_qos_limits_min_parseFromJSON(cJSON *dbv0_0_38_qos_limits_minJSON);

cJSON *dbv0_0_38_qos_limits_min_convertToJSON(dbv0_0_38_qos_limits_min_t *dbv0_0_38_qos_limits_min);

#endif /* _dbv0_0_38_qos_limits_min_H_ */

