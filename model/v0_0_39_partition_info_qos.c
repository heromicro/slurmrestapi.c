#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_qos.h"



v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos_create(
    char *assigned
    ) {
    v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos_local_var = malloc(sizeof(v0_0_39_partition_info_qos_t));
    if (!v0_0_39_partition_info_qos_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_qos_local_var->assigned = assigned;

    return v0_0_39_partition_info_qos_local_var;
}


void v0_0_39_partition_info_qos_free(v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos) {
    if(NULL == v0_0_39_partition_info_qos){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_qos->assigned) {
        free(v0_0_39_partition_info_qos->assigned);
        v0_0_39_partition_info_qos->assigned = NULL;
    }
    free(v0_0_39_partition_info_qos);
}

cJSON *v0_0_39_partition_info_qos_convertToJSON(v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_qos->assigned
    if(v0_0_39_partition_info_qos->assigned) {
    if(cJSON_AddStringToObject(item, "assigned", v0_0_39_partition_info_qos->assigned) == NULL) {
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

v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos_parseFromJSON(cJSON *v0_0_39_partition_info_qosJSON){

    v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos_local_var = NULL;

    // v0_0_39_partition_info_qos->assigned
    cJSON *assigned = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_qosJSON, "assigned");
    if (assigned) { 
    if(!cJSON_IsString(assigned) && !cJSON_IsNull(assigned))
    {
    goto end; //String
    }
    }


    v0_0_39_partition_info_qos_local_var = v0_0_39_partition_info_qos_create (
        assigned && !cJSON_IsNull(assigned) ? strdup(assigned->valuestring) : NULL
        );

    return v0_0_39_partition_info_qos_local_var;
end:
    return NULL;

}
