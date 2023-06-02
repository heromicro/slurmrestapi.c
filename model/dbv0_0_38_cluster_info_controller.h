/*
 * dbv0_0_38_cluster_info_controller.h
 *
 * Information about controller
 */

#ifndef _dbv0_0_38_cluster_info_controller_H_
#define _dbv0_0_38_cluster_info_controller_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_cluster_info_controller_t dbv0_0_38_cluster_info_controller_t;




typedef struct dbv0_0_38_cluster_info_controller_t {
    char *host; // string
    int port; //numeric

} dbv0_0_38_cluster_info_controller_t;

dbv0_0_38_cluster_info_controller_t *dbv0_0_38_cluster_info_controller_create(
    char *host,
    int port
);

void dbv0_0_38_cluster_info_controller_free(dbv0_0_38_cluster_info_controller_t *dbv0_0_38_cluster_info_controller);

dbv0_0_38_cluster_info_controller_t *dbv0_0_38_cluster_info_controller_parseFromJSON(cJSON *dbv0_0_38_cluster_info_controllerJSON);

cJSON *dbv0_0_38_cluster_info_controller_convertToJSON(dbv0_0_38_cluster_info_controller_t *dbv0_0_38_cluster_info_controller);

#endif /* _dbv0_0_38_cluster_info_controller_H_ */

