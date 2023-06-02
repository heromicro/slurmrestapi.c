#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_state.h"



v0_0_39_job_state_t *v0_0_39_job_state_create(
    char *reason
    ) {
    v0_0_39_job_state_t *v0_0_39_job_state_local_var = malloc(sizeof(v0_0_39_job_state_t));
    if (!v0_0_39_job_state_local_var) {
        return NULL;
    }
    v0_0_39_job_state_local_var->reason = reason;

    return v0_0_39_job_state_local_var;
}


void v0_0_39_job_state_free(v0_0_39_job_state_t *v0_0_39_job_state) {
    if(NULL == v0_0_39_job_state){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_state->reason) {
        free(v0_0_39_job_state->reason);
        v0_0_39_job_state->reason = NULL;
    }
    free(v0_0_39_job_state);
}

cJSON *v0_0_39_job_state_convertToJSON(v0_0_39_job_state_t *v0_0_39_job_state) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_state->reason
    if(v0_0_39_job_state->reason) {
    if(cJSON_AddStringToObject(item, "reason", v0_0_39_job_state->reason) == NULL) {
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

v0_0_39_job_state_t *v0_0_39_job_state_parseFromJSON(cJSON *v0_0_39_job_stateJSON){

    v0_0_39_job_state_t *v0_0_39_job_state_local_var = NULL;

    // v0_0_39_job_state->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_stateJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }


    v0_0_39_job_state_local_var = v0_0_39_job_state_create (
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL
        );

    return v0_0_39_job_state_local_var;
end:
    return NULL;

}
