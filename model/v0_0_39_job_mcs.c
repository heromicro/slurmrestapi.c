#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_mcs.h"



v0_0_39_job_mcs_t *v0_0_39_job_mcs_create(
    char *label
    ) {
    v0_0_39_job_mcs_t *v0_0_39_job_mcs_local_var = malloc(sizeof(v0_0_39_job_mcs_t));
    if (!v0_0_39_job_mcs_local_var) {
        return NULL;
    }
    v0_0_39_job_mcs_local_var->label = label;

    return v0_0_39_job_mcs_local_var;
}


void v0_0_39_job_mcs_free(v0_0_39_job_mcs_t *v0_0_39_job_mcs) {
    if(NULL == v0_0_39_job_mcs){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_mcs->label) {
        free(v0_0_39_job_mcs->label);
        v0_0_39_job_mcs->label = NULL;
    }
    free(v0_0_39_job_mcs);
}

cJSON *v0_0_39_job_mcs_convertToJSON(v0_0_39_job_mcs_t *v0_0_39_job_mcs) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_mcs->label
    if(v0_0_39_job_mcs->label) {
    if(cJSON_AddStringToObject(item, "label", v0_0_39_job_mcs->label) == NULL) {
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

v0_0_39_job_mcs_t *v0_0_39_job_mcs_parseFromJSON(cJSON *v0_0_39_job_mcsJSON){

    v0_0_39_job_mcs_t *v0_0_39_job_mcs_local_var = NULL;

    // v0_0_39_job_mcs->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_mcsJSON, "label");
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }


    v0_0_39_job_mcs_local_var = v0_0_39_job_mcs_create (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL
        );

    return v0_0_39_job_mcs_local_var;
end:
    return NULL;

}
