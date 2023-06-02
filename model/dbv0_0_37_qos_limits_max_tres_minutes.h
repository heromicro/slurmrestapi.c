/*
 * dbv0_0_37_qos_limits_max_tres_minutes.h
 *
 * Max TRES minutes settings
 */

#ifndef _dbv0_0_37_qos_limits_max_tres_minutes_H_
#define _dbv0_0_37_qos_limits_max_tres_minutes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_qos_limits_max_tres_minutes_t dbv0_0_37_qos_limits_max_tres_minutes_t;

#include "dbv0_0_37_qos_limits_max_tres_minutes_per.h"



typedef struct dbv0_0_37_qos_limits_max_tres_minutes_t {
    struct dbv0_0_37_qos_limits_max_tres_minutes_per_t *per; //model

} dbv0_0_37_qos_limits_max_tres_minutes_t;

dbv0_0_37_qos_limits_max_tres_minutes_t *dbv0_0_37_qos_limits_max_tres_minutes_create(
    dbv0_0_37_qos_limits_max_tres_minutes_per_t *per
);

void dbv0_0_37_qos_limits_max_tres_minutes_free(dbv0_0_37_qos_limits_max_tres_minutes_t *dbv0_0_37_qos_limits_max_tres_minutes);

dbv0_0_37_qos_limits_max_tres_minutes_t *dbv0_0_37_qos_limits_max_tres_minutes_parseFromJSON(cJSON *dbv0_0_37_qos_limits_max_tres_minutesJSON);

cJSON *dbv0_0_37_qos_limits_max_tres_minutes_convertToJSON(dbv0_0_37_qos_limits_max_tres_minutes_t *dbv0_0_37_qos_limits_max_tres_minutes);

#endif /* _dbv0_0_37_qos_limits_max_tres_minutes_H_ */

