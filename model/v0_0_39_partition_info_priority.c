#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_priority.h"



v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority_create(
    int tier
    ) {
    v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority_local_var = malloc(sizeof(v0_0_39_partition_info_priority_t));
    if (!v0_0_39_partition_info_priority_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_priority_local_var->tier = tier;

    return v0_0_39_partition_info_priority_local_var;
}


void v0_0_39_partition_info_priority_free(v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority) {
    if(NULL == v0_0_39_partition_info_priority){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_partition_info_priority);
}

cJSON *v0_0_39_partition_info_priority_convertToJSON(v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_priority->tier
    if(v0_0_39_partition_info_priority->tier) {
    if(cJSON_AddNumberToObject(item, "tier", v0_0_39_partition_info_priority->tier) == NULL) {
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

v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority_parseFromJSON(cJSON *v0_0_39_partition_info_priorityJSON){

    v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority_local_var = NULL;

    // v0_0_39_partition_info_priority->tier
    cJSON *tier = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_priorityJSON, "tier");
    if (tier) { 
    if(!cJSON_IsNumber(tier))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_partition_info_priority_local_var = v0_0_39_partition_info_priority_create (
        tier ? tier->valuedouble : 0
        );

    return v0_0_39_partition_info_priority_local_var;
end:
    return NULL;

}
