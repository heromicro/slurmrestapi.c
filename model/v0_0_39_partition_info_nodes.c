#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_nodes.h"



v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes_create(
    int total
    ) {
    v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes_local_var = malloc(sizeof(v0_0_39_partition_info_nodes_t));
    if (!v0_0_39_partition_info_nodes_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_nodes_local_var->total = total;

    return v0_0_39_partition_info_nodes_local_var;
}


void v0_0_39_partition_info_nodes_free(v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes) {
    if(NULL == v0_0_39_partition_info_nodes){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_partition_info_nodes);
}

cJSON *v0_0_39_partition_info_nodes_convertToJSON(v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_nodes->total
    if(v0_0_39_partition_info_nodes->total) {
    if(cJSON_AddNumberToObject(item, "total", v0_0_39_partition_info_nodes->total) == NULL) {
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

v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes_parseFromJSON(cJSON *v0_0_39_partition_info_nodesJSON){

    v0_0_39_partition_info_nodes_t *v0_0_39_partition_info_nodes_local_var = NULL;

    // v0_0_39_partition_info_nodes->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_nodesJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_partition_info_nodes_local_var = v0_0_39_partition_info_nodes_create (
        total ? total->valuedouble : 0
        );

    return v0_0_39_partition_info_nodes_local_var;
end:
    return NULL;

}
