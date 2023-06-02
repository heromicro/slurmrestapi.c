/*
 * dbv0_0_38_response_qos_delete.h
 *
 * 
 */

#ifndef _dbv0_0_38_response_qos_delete_H_
#define _dbv0_0_38_response_qos_delete_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_response_qos_delete_t dbv0_0_38_response_qos_delete_t;

#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"



typedef struct dbv0_0_38_response_qos_delete_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container

} dbv0_0_38_response_qos_delete_t;

dbv0_0_38_response_qos_delete_t *dbv0_0_38_response_qos_delete_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors
);

void dbv0_0_38_response_qos_delete_free(dbv0_0_38_response_qos_delete_t *dbv0_0_38_response_qos_delete);

dbv0_0_38_response_qos_delete_t *dbv0_0_38_response_qos_delete_parseFromJSON(cJSON *dbv0_0_38_response_qos_deleteJSON);

cJSON *dbv0_0_38_response_qos_delete_convertToJSON(dbv0_0_38_response_qos_delete_t *dbv0_0_38_response_qos_delete);

#endif /* _dbv0_0_38_response_qos_delete_H_ */

