#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_rpc.h"



v0_0_39_stats_rpc_t *v0_0_39_stats_rpc_create(
    char *rpc,
    int count,
    v0_0_39_stats_rpc_time_t *time
    ) {
    v0_0_39_stats_rpc_t *v0_0_39_stats_rpc_local_var = malloc(sizeof(v0_0_39_stats_rpc_t));
    if (!v0_0_39_stats_rpc_local_var) {
        return NULL;
    }
    v0_0_39_stats_rpc_local_var->rpc = rpc;
    v0_0_39_stats_rpc_local_var->count = count;
    v0_0_39_stats_rpc_local_var->time = time;

    return v0_0_39_stats_rpc_local_var;
}


void v0_0_39_stats_rpc_free(v0_0_39_stats_rpc_t *v0_0_39_stats_rpc) {
    if(NULL == v0_0_39_stats_rpc){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_stats_rpc->rpc) {
        free(v0_0_39_stats_rpc->rpc);
        v0_0_39_stats_rpc->rpc = NULL;
    }
    if (v0_0_39_stats_rpc->time) {
        v0_0_39_stats_rpc_time_free(v0_0_39_stats_rpc->time);
        v0_0_39_stats_rpc->time = NULL;
    }
    free(v0_0_39_stats_rpc);
}

cJSON *v0_0_39_stats_rpc_convertToJSON(v0_0_39_stats_rpc_t *v0_0_39_stats_rpc) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_rpc->rpc
    if(v0_0_39_stats_rpc->rpc) {
    if(cJSON_AddStringToObject(item, "rpc", v0_0_39_stats_rpc->rpc) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_stats_rpc->count
    if(v0_0_39_stats_rpc->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_39_stats_rpc->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_rpc->time
    if(v0_0_39_stats_rpc->time) {
    cJSON *time_local_JSON = v0_0_39_stats_rpc_time_convertToJSON(v0_0_39_stats_rpc->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_stats_rpc_t *v0_0_39_stats_rpc_parseFromJSON(cJSON *v0_0_39_stats_rpcJSON){

    v0_0_39_stats_rpc_t *v0_0_39_stats_rpc_local_var = NULL;

    // define the local variable for v0_0_39_stats_rpc->time
    v0_0_39_stats_rpc_time_t *time_local_nonprim = NULL;

    // v0_0_39_stats_rpc->rpc
    cJSON *rpc = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_rpcJSON, "rpc");
    if (rpc) { 
    if(!cJSON_IsString(rpc) && !cJSON_IsNull(rpc))
    {
    goto end; //String
    }
    }

    // v0_0_39_stats_rpc->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_rpcJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_rpc->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_rpcJSON, "time");
    if (time) { 
    time_local_nonprim = v0_0_39_stats_rpc_time_parseFromJSON(time); //nonprimitive
    }


    v0_0_39_stats_rpc_local_var = v0_0_39_stats_rpc_create (
        rpc && !cJSON_IsNull(rpc) ? strdup(rpc->valuestring) : NULL,
        count ? count->valuedouble : 0,
        time ? time_local_nonprim : NULL
        );

    return v0_0_39_stats_rpc_local_var;
end:
    if (time_local_nonprim) {
        v0_0_39_stats_rpc_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    return NULL;

}
