/*
 * dbv0_0_38_qos.h
 *
 * QOS description
 */

#ifndef _dbv0_0_38_qos_H_
#define _dbv0_0_38_qos_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_qos_t dbv0_0_38_qos_t;

#include "dbv0_0_38_qos_limits.h"
#include "dbv0_0_38_qos_preempt.h"



typedef struct dbv0_0_38_qos_t {
    char *description; // string
    list_t *flags; //primitive container
    char *id; // string
    struct dbv0_0_38_qos_limits_t *limits; //model
    struct dbv0_0_38_qos_preempt_t *preempt; //model
    int priority; //numeric
    double usage_factor; //numeric
    double usage_threshold; //numeric
    char *name; // string

} dbv0_0_38_qos_t;

dbv0_0_38_qos_t *dbv0_0_38_qos_create(
    char *description,
    list_t *flags,
    char *id,
    dbv0_0_38_qos_limits_t *limits,
    dbv0_0_38_qos_preempt_t *preempt,
    int priority,
    double usage_factor,
    double usage_threshold,
    char *name
);

void dbv0_0_38_qos_free(dbv0_0_38_qos_t *dbv0_0_38_qos);

dbv0_0_38_qos_t *dbv0_0_38_qos_parseFromJSON(cJSON *dbv0_0_38_qosJSON);

cJSON *dbv0_0_38_qos_convertToJSON(dbv0_0_38_qos_t *dbv0_0_38_qos);

#endif /* _dbv0_0_38_qos_H_ */

