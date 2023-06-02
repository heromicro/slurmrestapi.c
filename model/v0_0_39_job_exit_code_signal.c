#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_exit_code_signal.h"



v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal_create(
    int signal_id,
    char *name
    ) {
    v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal_local_var = malloc(sizeof(v0_0_39_job_exit_code_signal_t));
    if (!v0_0_39_job_exit_code_signal_local_var) {
        return NULL;
    }
    v0_0_39_job_exit_code_signal_local_var->signal_id = signal_id;
    v0_0_39_job_exit_code_signal_local_var->name = name;

    return v0_0_39_job_exit_code_signal_local_var;
}


void v0_0_39_job_exit_code_signal_free(v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal) {
    if(NULL == v0_0_39_job_exit_code_signal){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_exit_code_signal->name) {
        free(v0_0_39_job_exit_code_signal->name);
        v0_0_39_job_exit_code_signal->name = NULL;
    }
    free(v0_0_39_job_exit_code_signal);
}

cJSON *v0_0_39_job_exit_code_signal_convertToJSON(v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_exit_code_signal->signal_id
    if(v0_0_39_job_exit_code_signal->signal_id) {
    if(cJSON_AddNumberToObject(item, "signal_id", v0_0_39_job_exit_code_signal->signal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_exit_code_signal->name
    if(v0_0_39_job_exit_code_signal->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_job_exit_code_signal->name) == NULL) {
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

v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal_parseFromJSON(cJSON *v0_0_39_job_exit_code_signalJSON){

    v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal_local_var = NULL;

    // v0_0_39_job_exit_code_signal->signal_id
    cJSON *signal_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_exit_code_signalJSON, "signal_id");
    if (signal_id) { 
    if(!cJSON_IsNumber(signal_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_exit_code_signal->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_exit_code_signalJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    v0_0_39_job_exit_code_signal_local_var = v0_0_39_job_exit_code_signal_create (
        signal_id ? signal_id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return v0_0_39_job_exit_code_signal_local_var;
end:
    return NULL;

}
