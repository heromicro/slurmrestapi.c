/*
 * v0_0_37_job_resources.h
 *
 * 
 */

#ifndef _v0_0_37_job_resources_H_
#define _v0_0_37_job_resources_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_job_resources_t v0_0_37_job_resources_t;

#include "v0_0_37_node_allocation.h"



typedef struct v0_0_37_job_resources_t {
    char *nodes; // string
    int allocated_cpus; //numeric
    int allocated_hosts; //numeric
    list_t *allocated_nodes; //nonprimitive container

} v0_0_37_job_resources_t;

v0_0_37_job_resources_t *v0_0_37_job_resources_create(
    char *nodes,
    int allocated_cpus,
    int allocated_hosts,
    list_t *allocated_nodes
);

void v0_0_37_job_resources_free(v0_0_37_job_resources_t *v0_0_37_job_resources);

v0_0_37_job_resources_t *v0_0_37_job_resources_parseFromJSON(cJSON *v0_0_37_job_resourcesJSON);

cJSON *v0_0_37_job_resources_convertToJSON(v0_0_37_job_resources_t *v0_0_37_job_resources);

#endif /* _v0_0_37_job_resources_H_ */

