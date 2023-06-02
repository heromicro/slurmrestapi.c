/*
 * dbv0_0_37_qos_preempt.h
 *
 * Preemption settings
 */

#ifndef _dbv0_0_37_qos_preempt_H_
#define _dbv0_0_37_qos_preempt_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_qos_preempt_t dbv0_0_37_qos_preempt_t;




typedef struct dbv0_0_37_qos_preempt_t {
    list_t *list; //primitive container
    list_t *mode; //primitive container
    int exempt_time; //numeric

} dbv0_0_37_qos_preempt_t;

dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt_create(
    list_t *list,
    list_t *mode,
    int exempt_time
);

void dbv0_0_37_qos_preempt_free(dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt);

dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt_parseFromJSON(cJSON *dbv0_0_37_qos_preemptJSON);

cJSON *dbv0_0_37_qos_preempt_convertToJSON(dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt);

#endif /* _dbv0_0_37_qos_preempt_H_ */

