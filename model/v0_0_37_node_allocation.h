/*
 * v0_0_37_node_allocation.h
 *
 * 
 */

#ifndef _v0_0_37_node_allocation_H_
#define _v0_0_37_node_allocation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_node_allocation_t v0_0_37_node_allocation_t;

#include "object.h"



typedef struct v0_0_37_node_allocation_t {
    int memory; //numeric
    object_t *cpus; //object
    object_t *sockets; //object
    object_t *cores; //object

} v0_0_37_node_allocation_t;

v0_0_37_node_allocation_t *v0_0_37_node_allocation_create(
    int memory,
    object_t *cpus,
    object_t *sockets,
    object_t *cores
);

void v0_0_37_node_allocation_free(v0_0_37_node_allocation_t *v0_0_37_node_allocation);

v0_0_37_node_allocation_t *v0_0_37_node_allocation_parseFromJSON(cJSON *v0_0_37_node_allocationJSON);

cJSON *v0_0_37_node_allocation_convertToJSON(v0_0_37_node_allocation_t *v0_0_37_node_allocation);

#endif /* _v0_0_37_node_allocation_H_ */

