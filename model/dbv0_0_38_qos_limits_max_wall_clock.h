/*
 * dbv0_0_38_qos_limits_max_wall_clock.h
 *
 * Limit on wallclock settings
 */

#ifndef _dbv0_0_38_qos_limits_max_wall_clock_H_
#define _dbv0_0_38_qos_limits_max_wall_clock_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_qos_limits_max_wall_clock_t dbv0_0_38_qos_limits_max_wall_clock_t;

#include "dbv0_0_38_qos_limits_max_wall_clock_per.h"



typedef struct dbv0_0_38_qos_limits_max_wall_clock_t {
    struct dbv0_0_38_qos_limits_max_wall_clock_per_t *per; //model

} dbv0_0_38_qos_limits_max_wall_clock_t;

dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock_create(
    dbv0_0_38_qos_limits_max_wall_clock_per_t *per
);

void dbv0_0_38_qos_limits_max_wall_clock_free(dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock);

dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_wall_clockJSON);

cJSON *dbv0_0_38_qos_limits_max_wall_clock_convertToJSON(dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock);

#endif /* _dbv0_0_38_qos_limits_max_wall_clock_H_ */

