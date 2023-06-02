#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_required.h"



v0_0_39_job_required_t *v0_0_39_job_required_create(
    long memory
    ) {
    v0_0_39_job_required_t *v0_0_39_job_required_local_var = malloc(sizeof(v0_0_39_job_required_t));
    if (!v0_0_39_job_required_local_var) {
        return NULL;
    }
    v0_0_39_job_required_local_var->memory = memory;

    return v0_0_39_job_required_local_var;
}


void v0_0_39_job_required_free(v0_0_39_job_required_t *v0_0_39_job_required) {
    if(NULL == v0_0_39_job_required){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_job_required);
}

cJSON *v0_0_39_job_required_convertToJSON(v0_0_39_job_required_t *v0_0_39_job_required) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_required->memory
    if(v0_0_39_job_required->memory) {
    if(cJSON_AddNumberToObject(item, "memory", v0_0_39_job_required->memory) == NULL) {
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

v0_0_39_job_required_t *v0_0_39_job_required_parseFromJSON(cJSON *v0_0_39_job_requiredJSON){

    v0_0_39_job_required_t *v0_0_39_job_required_local_var = NULL;

    // v0_0_39_job_required->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_requiredJSON, "memory");
    if (memory) { 
    if(!cJSON_IsNumber(memory))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_job_required_local_var = v0_0_39_job_required_create (
        memory ? memory->valuedouble : 0
        );

    return v0_0_39_job_required_local_var;
end:
    return NULL;

}
