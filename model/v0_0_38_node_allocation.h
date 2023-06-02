/*
 * v0_0_38_node_allocation.h
 *
 * 
 */

#ifndef _v0_0_38_node_allocation_H_
#define _v0_0_38_node_allocation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_node_allocation_t v0_0_38_node_allocation_t;

#include "v0_0_38_node_allocation_sockets.h"



typedef struct v0_0_38_node_allocation_t {
    int memory; //numeric
    int cpus; //numeric
    struct v0_0_38_node_allocation_sockets_t *sockets; //model
    char *nodename; // string

} v0_0_38_node_allocation_t;

v0_0_38_node_allocation_t *v0_0_38_node_allocation_create(
    int memory,
    int cpus,
    v0_0_38_node_allocation_sockets_t *sockets,
    char *nodename
);

void v0_0_38_node_allocation_free(v0_0_38_node_allocation_t *v0_0_38_node_allocation);

v0_0_38_node_allocation_t *v0_0_38_node_allocation_parseFromJSON(cJSON *v0_0_38_node_allocationJSON);

cJSON *v0_0_38_node_allocation_convertToJSON(v0_0_38_node_allocation_t *v0_0_38_node_allocation);

#endif /* _v0_0_38_node_allocation_H_ */

