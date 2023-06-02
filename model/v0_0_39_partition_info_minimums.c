#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_minimums.h"



v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums_create(
    int nodes
    ) {
    v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums_local_var = malloc(sizeof(v0_0_39_partition_info_minimums_t));
    if (!v0_0_39_partition_info_minimums_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_minimums_local_var->nodes = nodes;

    return v0_0_39_partition_info_minimums_local_var;
}


void v0_0_39_partition_info_minimums_free(v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums) {
    if(NULL == v0_0_39_partition_info_minimums){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_partition_info_minimums);
}

cJSON *v0_0_39_partition_info_minimums_convertToJSON(v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_minimums->nodes
    if(v0_0_39_partition_info_minimums->nodes) {
    if(cJSON_AddNumberToObject(item, "nodes", v0_0_39_partition_info_minimums->nodes) == NULL) {
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

v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums_parseFromJSON(cJSON *v0_0_39_partition_info_minimumsJSON){

    v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums_local_var = NULL;

    // v0_0_39_partition_info_minimums->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_minimumsJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsNumber(nodes))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_partition_info_minimums_local_var = v0_0_39_partition_info_minimums_create (
        nodes ? nodes->valuedouble : 0
        );

    return v0_0_39_partition_info_minimums_local_var;
end:
    return NULL;

}
