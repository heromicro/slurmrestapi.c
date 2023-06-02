/*
 * dbv0_0_37_cluster_info_associations.h
 *
 * Information about associations
 */

#ifndef _dbv0_0_37_cluster_info_associations_H_
#define _dbv0_0_37_cluster_info_associations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_cluster_info_associations_t dbv0_0_37_cluster_info_associations_t;

#include "dbv0_0_37_association_short_info.h"



typedef struct dbv0_0_37_cluster_info_associations_t {
    struct dbv0_0_37_association_short_info_t *root; //model

} dbv0_0_37_cluster_info_associations_t;

dbv0_0_37_cluster_info_associations_t *dbv0_0_37_cluster_info_associations_create(
    dbv0_0_37_association_short_info_t *root
);

void dbv0_0_37_cluster_info_associations_free(dbv0_0_37_cluster_info_associations_t *dbv0_0_37_cluster_info_associations);

dbv0_0_37_cluster_info_associations_t *dbv0_0_37_cluster_info_associations_parseFromJSON(cJSON *dbv0_0_37_cluster_info_associationsJSON);

cJSON *dbv0_0_37_cluster_info_associations_convertToJSON(dbv0_0_37_cluster_info_associations_t *dbv0_0_37_cluster_info_associations);

#endif /* _dbv0_0_37_cluster_info_associations_H_ */

