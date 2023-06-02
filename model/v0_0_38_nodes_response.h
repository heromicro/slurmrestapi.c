/*
 * v0_0_38_nodes_response.h
 *
 * 
 */

#ifndef _v0_0_38_nodes_response_H_
#define _v0_0_38_nodes_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_nodes_response_t v0_0_38_nodes_response_t;

#include "v0_0_38_error.h"
#include "v0_0_38_meta.h"
#include "v0_0_38_node.h"



typedef struct v0_0_38_nodes_response_t {
    struct v0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *nodes; //nonprimitive container

} v0_0_38_nodes_response_t;

v0_0_38_nodes_response_t *v0_0_38_nodes_response_create(
    v0_0_38_meta_t *meta,
    list_t *errors,
    list_t *nodes
);

void v0_0_38_nodes_response_free(v0_0_38_nodes_response_t *v0_0_38_nodes_response);

v0_0_38_nodes_response_t *v0_0_38_nodes_response_parseFromJSON(cJSON *v0_0_38_nodes_responseJSON);

cJSON *v0_0_38_nodes_response_convertToJSON(v0_0_38_nodes_response_t *v0_0_38_nodes_response);

#endif /* _v0_0_38_nodes_response_H_ */

