#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_state.h"



dbv0_0_38_job_state_t *dbv0_0_38_job_state_create(
    char *current,
    char *reason
    ) {
    dbv0_0_38_job_state_t *dbv0_0_38_job_state_local_var = malloc(sizeof(dbv0_0_38_job_state_t));
    if (!dbv0_0_38_job_state_local_var) {
        return NULL;
    }
    dbv0_0_38_job_state_local_var->current = current;
    dbv0_0_38_job_state_local_var->reason = reason;

    return dbv0_0_38_job_state_local_var;
}


void dbv0_0_38_job_state_free(dbv0_0_38_job_state_t *dbv0_0_38_job_state) {
    if(NULL == dbv0_0_38_job_state){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_state->current) {
        free(dbv0_0_38_job_state->current);
        dbv0_0_38_job_state->current = NULL;
    }
    if (dbv0_0_38_job_state->reason) {
        free(dbv0_0_38_job_state->reason);
        dbv0_0_38_job_state->reason = NULL;
    }
    free(dbv0_0_38_job_state);
}

cJSON *dbv0_0_38_job_state_convertToJSON(dbv0_0_38_job_state_t *dbv0_0_38_job_state) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_state->current
    if(dbv0_0_38_job_state->current) {
    if(cJSON_AddStringToObject(item, "current", dbv0_0_38_job_state->current) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_state->reason
    if(dbv0_0_38_job_state->reason) {
    if(cJSON_AddStringToObject(item, "reason", dbv0_0_38_job_state->reason) == NULL) {
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

dbv0_0_38_job_state_t *dbv0_0_38_job_state_parseFromJSON(cJSON *dbv0_0_38_job_stateJSON){

    dbv0_0_38_job_state_t *dbv0_0_38_job_state_local_var = NULL;

    // dbv0_0_38_job_state->current
    cJSON *current = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stateJSON, "current");
    if (current) { 
    if(!cJSON_IsString(current) && !cJSON_IsNull(current))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_state->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stateJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }


    dbv0_0_38_job_state_local_var = dbv0_0_38_job_state_create (
        current && !cJSON_IsNull(current) ? strdup(current->valuestring) : NULL,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL
        );

    return dbv0_0_38_job_state_local_var;
end:
    return NULL;

}
