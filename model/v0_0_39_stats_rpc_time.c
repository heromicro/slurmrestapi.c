#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_rpc_time.h"



v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time_create(
    long total
    ) {
    v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time_local_var = malloc(sizeof(v0_0_39_stats_rpc_time_t));
    if (!v0_0_39_stats_rpc_time_local_var) {
        return NULL;
    }
    v0_0_39_stats_rpc_time_local_var->total = total;

    return v0_0_39_stats_rpc_time_local_var;
}


void v0_0_39_stats_rpc_time_free(v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time) {
    if(NULL == v0_0_39_stats_rpc_time){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_stats_rpc_time);
}

cJSON *v0_0_39_stats_rpc_time_convertToJSON(v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_rpc_time->total
    if(v0_0_39_stats_rpc_time->total) {
    if(cJSON_AddNumberToObject(item, "total", v0_0_39_stats_rpc_time->total) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time_parseFromJSON(cJSON *v0_0_39_stats_rpc_timeJSON){

    v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time_local_var = NULL;

    // v0_0_39_stats_rpc_time->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_rpc_timeJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_stats_rpc_time_local_var = v0_0_39_stats_rpc_time_create (
        total ? total->valuedouble : 0
        );

    return v0_0_39_stats_rpc_time_local_var;
end:
    return NULL;

}
