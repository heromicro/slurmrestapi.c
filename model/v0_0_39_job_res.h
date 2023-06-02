/*
 * v0_0_39_job_res.h
 *
 * 
 */

#ifndef _v0_0_39_job_res_H_
#define _v0_0_39_job_res_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_res_t v0_0_39_job_res_t;

#include "any_type.h"



typedef struct v0_0_39_job_res_t {
    char *nodes; // string
    int allocated_cores; //numeric
    int allocated_cpus; //numeric
    int allocated_hosts; //numeric
    list_t *allocated_nodes; //nonprimitive container

} v0_0_39_job_res_t;

v0_0_39_job_res_t *v0_0_39_job_res_create(
    char *nodes,
    int allocated_cores,
    int allocated_cpus,
    int allocated_hosts,
    list_t *allocated_nodes
);

void v0_0_39_job_res_free(v0_0_39_job_res_t *v0_0_39_job_res);

v0_0_39_job_res_t *v0_0_39_job_res_parseFromJSON(cJSON *v0_0_39_job_resJSON);

cJSON *v0_0_39_job_res_convertToJSON(v0_0_39_job_res_t *v0_0_39_job_res);

#endif /* _v0_0_39_job_res_H_ */

