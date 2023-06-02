#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_nodes.h"



dbv0_0_37_job_step_nodes_t *dbv0_0_37_job_step_nodes_create(
    int count,
    char *range
    ) {
    dbv0_0_37_job_step_nodes_t *dbv0_0_37_job_step_nodes_local_var = malloc(sizeof(dbv0_0_37_job_step_nodes_t));
    if (!dbv0_0_37_job_step_nodes_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_nodes_local_var->count = count;
    dbv0_0_37_job_step_nodes_local_var->range = range;

    return dbv0_0_37_job_step_nodes_local_var;
}


void dbv0_0_37_job_step_nodes_free(dbv0_0_37_job_step_nodes_t *dbv0_0_37_job_step_nodes) {
    if(NULL == dbv0_0_37_job_step_nodes){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_step_nodes->range) {
        free(dbv0_0_37_job_step_nodes->range);
        dbv0_0_37_job_step_nodes->range = NULL;
    }
    free(dbv0_0_37_job_step_nodes);
}

cJSON *dbv0_0_37_job_step_nodes_convertToJSON(dbv0_0_37_job_step_nodes_t *dbv0_0_37_job_step_nodes) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_nodes->count
    if(dbv0_0_37_job_step_nodes->count) {
    if(cJSON_AddNumberToObject(item, "count", dbv0_0_37_job_step_nodes->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_step_nodes->range
    if(dbv0_0_37_job_step_nodes->range) {
    if(cJSON_AddStringToObject(item, "range", dbv0_0_37_job_step_nodes->range) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_37_job_step_nodes_t *dbv0_0_37_job_step_nodes_parseFromJSON(cJSON *dbv0_0_37_job_step_nodesJSON){

    dbv0_0_37_job_step_nodes_t *dbv0_0_37_job_step_nodes_local_var = NULL;

    // dbv0_0_37_job_step_nodes->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_nodesJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_step_nodes->range
    cJSON *range = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_nodesJSON, "range");
    if (range) { 
    if(!cJSON_IsString(range) && !cJSON_IsNull(range))
    {
    goto end; //String
    }
    }


    dbv0_0_37_job_step_nodes_local_var = dbv0_0_37_job_step_nodes_create (
        count ? count->valuedouble : 0,
        range && !cJSON_IsNull(range) ? strdup(range->valuestring) : NULL
        );

    return dbv0_0_37_job_step_nodes_local_var;
end:
    return NULL;

}
