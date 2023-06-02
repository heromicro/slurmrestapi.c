/*
 * dbv0_0_37_response_cluster_add.h
 *
 * 
 */

#ifndef _dbv0_0_37_response_cluster_add_H_
#define _dbv0_0_37_response_cluster_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_response_cluster_add_t dbv0_0_37_response_cluster_add_t;

#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_response_cluster_add_t {
    list_t *errors; //nonprimitive container

} dbv0_0_37_response_cluster_add_t;

dbv0_0_37_response_cluster_add_t *dbv0_0_37_response_cluster_add_create(
    list_t *errors
);

void dbv0_0_37_response_cluster_add_free(dbv0_0_37_response_cluster_add_t *dbv0_0_37_response_cluster_add);

dbv0_0_37_response_cluster_add_t *dbv0_0_37_response_cluster_add_parseFromJSON(cJSON *dbv0_0_37_response_cluster_addJSON);

cJSON *dbv0_0_37_response_cluster_add_convertToJSON(dbv0_0_37_response_cluster_add_t *dbv0_0_37_response_cluster_add);

#endif /* _dbv0_0_37_response_cluster_add_H_ */

