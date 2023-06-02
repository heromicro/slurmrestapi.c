/*
 * v0_0_38_node_allocation_sockets.h
 *
 * assignment status of each socket by numeric socket id
 */

#ifndef _v0_0_38_node_allocation_sockets_H_
#define _v0_0_38_node_allocation_sockets_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_node_allocation_sockets_t v0_0_38_node_allocation_sockets_t;

#include "object.h"



typedef struct v0_0_38_node_allocation_sockets_t {
    object_t *cores; //object

} v0_0_38_node_allocation_sockets_t;

v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets_create(
    object_t *cores
);

void v0_0_38_node_allocation_sockets_free(v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets);

v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets_parseFromJSON(cJSON *v0_0_38_node_allocation_socketsJSON);

cJSON *v0_0_38_node_allocation_sockets_convertToJSON(v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets);

#endif /* _v0_0_38_node_allocation_sockets_H_ */

