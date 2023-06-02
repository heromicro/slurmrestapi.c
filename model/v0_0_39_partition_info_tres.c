#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_tres.h"



v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres_create(
    char *configured
    ) {
    v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres_local_var = malloc(sizeof(v0_0_39_partition_info_tres_t));
    if (!v0_0_39_partition_info_tres_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_tres_local_var->configured = configured;

    return v0_0_39_partition_info_tres_local_var;
}


void v0_0_39_partition_info_tres_free(v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres) {
    if(NULL == v0_0_39_partition_info_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_tres->configured) {
        free(v0_0_39_partition_info_tres->configured);
        v0_0_39_partition_info_tres->configured = NULL;
    }
    free(v0_0_39_partition_info_tres);
}

cJSON *v0_0_39_partition_info_tres_convertToJSON(v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_tres->configured
    if(v0_0_39_partition_info_tres->configured) {
    if(cJSON_AddStringToObject(item, "configured", v0_0_39_partition_info_tres->configured) == NULL) {
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

v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres_parseFromJSON(cJSON *v0_0_39_partition_info_tresJSON){

    v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres_local_var = NULL;

    // v0_0_39_partition_info_tres->configured
    cJSON *configured = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_tresJSON, "configured");
    if (configured) { 
    if(!cJSON_IsString(configured) && !cJSON_IsNull(configured))
    {
    goto end; //String
    }
    }


    v0_0_39_partition_info_tres_local_var = v0_0_39_partition_info_tres_create (
        configured && !cJSON_IsNull(configured) ? strdup(configured->valuestring) : NULL
        );

    return v0_0_39_partition_info_tres_local_var;
end:
    return NULL;

}
