/*
 * dbv0_0_38_qos_limits_max_tres.h
 *
 * Limits on TRES
 */

#ifndef _dbv0_0_38_qos_limits_max_tres_H_
#define _dbv0_0_38_qos_limits_max_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_qos_limits_max_tres_t dbv0_0_38_qos_limits_max_tres_t;

#include "dbv0_0_38_qos_limits_max_tres_minutes.h"
#include "dbv0_0_38_qos_limits_max_tres_per.h"



typedef struct dbv0_0_38_qos_limits_max_tres_t {
    struct dbv0_0_38_qos_limits_max_tres_minutes_t *minutes; //model
    struct dbv0_0_38_qos_limits_max_tres_per_t *per; //model

} dbv0_0_38_qos_limits_max_tres_t;

dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres_create(
    dbv0_0_38_qos_limits_max_tres_minutes_t *minutes,
    dbv0_0_38_qos_limits_max_tres_per_t *per
);

void dbv0_0_38_qos_limits_max_tres_free(dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres);

dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_tresJSON);

cJSON *dbv0_0_38_qos_limits_max_tres_convertToJSON(dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres);

#endif /* _dbv0_0_38_qos_limits_max_tres_H_ */

