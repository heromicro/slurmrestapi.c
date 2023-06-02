/*
 * dbv0_0_37_qos_limits_min_tres.h
 *
 * Min tres settings
 */

#ifndef _dbv0_0_37_qos_limits_min_tres_H_
#define _dbv0_0_37_qos_limits_min_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_qos_limits_min_tres_t dbv0_0_37_qos_limits_min_tres_t;

#include "dbv0_0_37_qos_limits_min_tres_per.h"



typedef struct dbv0_0_37_qos_limits_min_tres_t {
    struct dbv0_0_37_qos_limits_min_tres_per_t *per; //model

} dbv0_0_37_qos_limits_min_tres_t;

dbv0_0_37_qos_limits_min_tres_t *dbv0_0_37_qos_limits_min_tres_create(
    dbv0_0_37_qos_limits_min_tres_per_t *per
);

void dbv0_0_37_qos_limits_min_tres_free(dbv0_0_37_qos_limits_min_tres_t *dbv0_0_37_qos_limits_min_tres);

dbv0_0_37_qos_limits_min_tres_t *dbv0_0_37_qos_limits_min_tres_parseFromJSON(cJSON *dbv0_0_37_qos_limits_min_tresJSON);

cJSON *dbv0_0_37_qos_limits_min_tres_convertToJSON(dbv0_0_37_qos_limits_min_tres_t *dbv0_0_37_qos_limits_min_tres);

#endif /* _dbv0_0_37_qos_limits_min_tres_H_ */

