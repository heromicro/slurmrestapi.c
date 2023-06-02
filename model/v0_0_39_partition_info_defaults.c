#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_defaults.h"



v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults_create(
    char *job
    ) {
    v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults_local_var = malloc(sizeof(v0_0_39_partition_info_defaults_t));
    if (!v0_0_39_partition_info_defaults_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_defaults_local_var->job = job;

    return v0_0_39_partition_info_defaults_local_var;
}


void v0_0_39_partition_info_defaults_free(v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults) {
    if(NULL == v0_0_39_partition_info_defaults){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_defaults->job) {
        free(v0_0_39_partition_info_defaults->job);
        v0_0_39_partition_info_defaults->job = NULL;
    }
    free(v0_0_39_partition_info_defaults);
}

cJSON *v0_0_39_partition_info_defaults_convertToJSON(v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_defaults->job
    if(v0_0_39_partition_info_defaults->job) {
    if(cJSON_AddStringToObject(item, "job", v0_0_39_partition_info_defaults->job) == NULL) {
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

v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults_parseFromJSON(cJSON *v0_0_39_partition_info_defaultsJSON){

    v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults_local_var = NULL;

    // v0_0_39_partition_info_defaults->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_defaultsJSON, "job");
    if (job) { 
    if(!cJSON_IsString(job) && !cJSON_IsNull(job))
    {
    goto end; //String
    }
    }


    v0_0_39_partition_info_defaults_local_var = v0_0_39_partition_info_defaults_create (
        job && !cJSON_IsNull(job) ? strdup(job->valuestring) : NULL
        );

    return v0_0_39_partition_info_defaults_local_var;
end:
    return NULL;

}
