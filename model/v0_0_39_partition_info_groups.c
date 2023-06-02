#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_groups.h"



v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups_create(
    char *allowed
    ) {
    v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups_local_var = malloc(sizeof(v0_0_39_partition_info_groups_t));
    if (!v0_0_39_partition_info_groups_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_groups_local_var->allowed = allowed;

    return v0_0_39_partition_info_groups_local_var;
}


void v0_0_39_partition_info_groups_free(v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups) {
    if(NULL == v0_0_39_partition_info_groups){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_groups->allowed) {
        free(v0_0_39_partition_info_groups->allowed);
        v0_0_39_partition_info_groups->allowed = NULL;
    }
    free(v0_0_39_partition_info_groups);
}

cJSON *v0_0_39_partition_info_groups_convertToJSON(v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_groups->allowed
    if(v0_0_39_partition_info_groups->allowed) {
    if(cJSON_AddStringToObject(item, "allowed", v0_0_39_partition_info_groups->allowed) == NULL) {
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

v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups_parseFromJSON(cJSON *v0_0_39_partition_info_groupsJSON){

    v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups_local_var = NULL;

    // v0_0_39_partition_info_groups->allowed
    cJSON *allowed = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_groupsJSON, "allowed");
    if (allowed) { 
    if(!cJSON_IsString(allowed) && !cJSON_IsNull(allowed))
    {
    goto end; //String
    }
    }


    v0_0_39_partition_info_groups_local_var = v0_0_39_partition_info_groups_create (
        allowed && !cJSON_IsNull(allowed) ? strdup(allowed->valuestring) : NULL
        );

    return v0_0_39_partition_info_groups_local_var;
end:
    return NULL;

}
