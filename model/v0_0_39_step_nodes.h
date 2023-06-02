/*
 * v0_0_39_step_nodes.h
 *
 * 
 */

#ifndef _v0_0_39_step_nodes_H_
#define _v0_0_39_step_nodes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_nodes_t v0_0_39_step_nodes_t;




typedef struct v0_0_39_step_nodes_t {
    list_t *list; //primitive container

} v0_0_39_step_nodes_t;

v0_0_39_step_nodes_t *v0_0_39_step_nodes_create(
    list_t *list
);

void v0_0_39_step_nodes_free(v0_0_39_step_nodes_t *v0_0_39_step_nodes);

v0_0_39_step_nodes_t *v0_0_39_step_nodes_parseFromJSON(cJSON *v0_0_39_step_nodesJSON);

cJSON *v0_0_39_step_nodes_convertToJSON(v0_0_39_step_nodes_t *v0_0_39_step_nodes);

#endif /* _v0_0_39_step_nodes_H_ */

