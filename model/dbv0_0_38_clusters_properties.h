/*
 * dbv0_0_38_clusters_properties.h
 *
 * 
 */

#ifndef _dbv0_0_38_clusters_properties_H_
#define _dbv0_0_38_clusters_properties_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_clusters_properties_t dbv0_0_38_clusters_properties_t;

#include "dbv0_0_38_cluster_info.h"



typedef struct dbv0_0_38_clusters_properties_t {
    struct dbv0_0_38_cluster_info_t *clusters; //model

} dbv0_0_38_clusters_properties_t;

dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties_create(
    dbv0_0_38_cluster_info_t *clusters
);

void dbv0_0_38_clusters_properties_free(dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties);

dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties_parseFromJSON(cJSON *dbv0_0_38_clusters_propertiesJSON);

cJSON *dbv0_0_38_clusters_properties_convertToJSON(dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties);

#endif /* _dbv0_0_38_clusters_properties_H_ */

