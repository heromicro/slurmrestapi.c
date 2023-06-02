/*
 * dbv0_0_38_qos_limits_max_wall_clock_per.h
 *
 * Limit on wallclock per settings
 */

#ifndef _dbv0_0_38_qos_limits_max_wall_clock_per_H_
#define _dbv0_0_38_qos_limits_max_wall_clock_per_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_qos_limits_max_wall_clock_per_t dbv0_0_38_qos_limits_max_wall_clock_per_t;




typedef struct dbv0_0_38_qos_limits_max_wall_clock_per_t {
    int qos; //numeric
    int job; //numeric

} dbv0_0_38_qos_limits_max_wall_clock_per_t;

dbv0_0_38_qos_limits_max_wall_clock_per_t *dbv0_0_38_qos_limits_max_wall_clock_per_create(
    int qos,
    int job
);

void dbv0_0_38_qos_limits_max_wall_clock_per_free(dbv0_0_38_qos_limits_max_wall_clock_per_t *dbv0_0_38_qos_limits_max_wall_clock_per);

dbv0_0_38_qos_limits_max_wall_clock_per_t *dbv0_0_38_qos_limits_max_wall_clock_per_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_wall_clock_perJSON);

cJSON *dbv0_0_38_qos_limits_max_wall_clock_per_convertToJSON(dbv0_0_38_qos_limits_max_wall_clock_per_t *dbv0_0_38_qos_limits_max_wall_clock_per);

#endif /* _dbv0_0_38_qos_limits_max_wall_clock_per_H_ */

