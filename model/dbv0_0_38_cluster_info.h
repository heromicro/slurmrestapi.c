/*
 * dbv0_0_38_cluster_info.h
 *
 * 
 */

#ifndef _dbv0_0_38_cluster_info_H_
#define _dbv0_0_38_cluster_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_cluster_info_t dbv0_0_38_cluster_info_t;

#include "dbv0_0_38_cluster_info_associations.h"
#include "dbv0_0_38_cluster_info_controller.h"
#include "dbv0_0_38_response_tres.h"



typedef struct dbv0_0_38_cluster_info_t {
    struct dbv0_0_38_cluster_info_controller_t *controller; //model
    list_t *flags; //primitive container
    char *name; // string
    char *nodes; // string
    char *select_plugin; // string
    struct dbv0_0_38_cluster_info_associations_t *associations; //model
    int rpc_version; //numeric
    list_t *tres; //nonprimitive container

} dbv0_0_38_cluster_info_t;

dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info_create(
    dbv0_0_38_cluster_info_controller_t *controller,
    list_t *flags,
    char *name,
    char *nodes,
    char *select_plugin,
    dbv0_0_38_cluster_info_associations_t *associations,
    int rpc_version,
    list_t *tres
);

void dbv0_0_38_cluster_info_free(dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info);

dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info_parseFromJSON(cJSON *dbv0_0_38_cluster_infoJSON);

cJSON *dbv0_0_38_cluster_info_convertToJSON(dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info);

#endif /* _dbv0_0_38_cluster_info_H_ */

