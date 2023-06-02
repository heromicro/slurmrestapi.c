/*
 * v0_0_39_partition_info_nodes.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_nodes_H_
#define _v0_0_39_partition_info_nodes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_nodes_t v0_0_39_partition_info_nodes_t;




typedef struct v0_0_39_partition_info_nodes_t {
    int total; //numeric

} v0_0_39_partition_info_nodes_t;

v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes_create(
    int total
);

void v0_0_39_partition_info_nodes_free(v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes);

v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes_parseFromJSON(cJSON *v0_0_39_partition_info_nodesJSON);

cJSON *v0_0_39_partition_info_nodes_convertToJSON(v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes);

#endif /* _v0_0_39_partition_info_nodes_H_ */

