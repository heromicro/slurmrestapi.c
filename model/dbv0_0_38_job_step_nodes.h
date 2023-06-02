/*
 * dbv0_0_38_job_step_nodes.h
 *
 * Node details
 */

#ifndef _dbv0_0_38_job_step_nodes_H_
#define _dbv0_0_38_job_step_nodes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_step_nodes_t dbv0_0_38_job_step_nodes_t;




typedef struct dbv0_0_38_job_step_nodes_t {
    int count; //numeric
    char *range; // string

} dbv0_0_38_job_step_nodes_t;

dbv0_0_38_job_step_nodes_t *dbv0_0_38_job_step_nodes_create(
    int count,
    char *range
);

void dbv0_0_38_job_step_nodes_free(dbv0_0_38_job_step_nodes_t *dbv0_0_38_job_step_nodes);

dbv0_0_38_job_step_nodes_t *dbv0_0_38_job_step_nodes_parseFromJSON(cJSON *dbv0_0_38_job_step_nodesJSON);

cJSON *dbv0_0_38_job_step_nodes_convertToJSON(dbv0_0_38_job_step_nodes_t *dbv0_0_38_job_step_nodes);

#endif /* _dbv0_0_38_job_step_nodes_H_ */

