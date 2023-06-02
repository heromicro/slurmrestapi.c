/*
 * v0_0_39_cluster_rec_associations.h
 *
 * 
 */

#ifndef _v0_0_39_cluster_rec_associations_H_
#define _v0_0_39_cluster_rec_associations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_cluster_rec_associations_t v0_0_39_cluster_rec_associations_t;

#include "v0_0_39_assoc_short.h"



typedef struct v0_0_39_cluster_rec_associations_t {
    struct v0_0_39_assoc_short_t *root; //model

} v0_0_39_cluster_rec_associations_t;

v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations_create(
    v0_0_39_assoc_short_t *root
);

void v0_0_39_cluster_rec_associations_free(v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations);

v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations_parseFromJSON(cJSON *v0_0_39_cluster_rec_associationsJSON);

cJSON *v0_0_39_cluster_rec_associations_convertToJSON(v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations);

#endif /* _v0_0_39_cluster_rec_associations_H_ */

