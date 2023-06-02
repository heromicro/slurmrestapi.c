/*
 * dbv0_0_39_update_qos.h
 *
 * 
 */

#ifndef _dbv0_0_39_update_qos_H_
#define _dbv0_0_39_update_qos_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_update_qos_t dbv0_0_39_update_qos_t;

#include "v0_0_39_qos.h"



typedef struct dbv0_0_39_update_qos_t {
    list_t *qos; //nonprimitive container

} dbv0_0_39_update_qos_t;

dbv0_0_39_update_qos_t *dbv0_0_39_update_qos_create(
    list_t *qos
);

void dbv0_0_39_update_qos_free(dbv0_0_39_update_qos_t *dbv0_0_39_update_qos);

dbv0_0_39_update_qos_t *dbv0_0_39_update_qos_parseFromJSON(cJSON *dbv0_0_39_update_qosJSON);

cJSON *dbv0_0_39_update_qos_convertToJSON(dbv0_0_39_update_qos_t *dbv0_0_39_update_qos);

#endif /* _dbv0_0_39_update_qos_H_ */

