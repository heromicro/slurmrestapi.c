#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_exit_code.h"



v0_0_39_job_exit_code_t *v0_0_39_job_exit_code_create(
    char *status,
    int return_code,
    v0_0_39_job_exit_code_signal_t *signal
    ) {
    v0_0_39_job_exit_code_t *v0_0_39_job_exit_code_local_var = malloc(sizeof(v0_0_39_job_exit_code_t));
    if (!v0_0_39_job_exit_code_local_var) {
        return NULL;
    }
    v0_0_39_job_exit_code_local_var->status = status;
    v0_0_39_job_exit_code_local_var->return_code = return_code;
    v0_0_39_job_exit_code_local_var->signal = signal;

    return v0_0_39_job_exit_code_local_var;
}


void v0_0_39_job_exit_code_free(v0_0_39_job_exit_code_t *v0_0_39_job_exit_code) {
    if(NULL == v0_0_39_job_exit_code){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_exit_code->status) {
        free(v0_0_39_job_exit_code->status);
        v0_0_39_job_exit_code->status = NULL;
    }
    if (v0_0_39_job_exit_code->signal) {
        v0_0_39_job_exit_code_signal_free(v0_0_39_job_exit_code->signal);
        v0_0_39_job_exit_code->signal = NULL;
    }
    free(v0_0_39_job_exit_code);
}

cJSON *v0_0_39_job_exit_code_convertToJSON(v0_0_39_job_exit_code_t *v0_0_39_job_exit_code) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_exit_code->status
    if(v0_0_39_job_exit_code->status) {
    if(cJSON_AddStringToObject(item, "status", v0_0_39_job_exit_code->status) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_exit_code->return_code
    if(v0_0_39_job_exit_code->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", v0_0_39_job_exit_code->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_exit_code->signal
    if(v0_0_39_job_exit_code->signal) {
    cJSON *signal_local_JSON = v0_0_39_job_exit_code_signal_convertToJSON(v0_0_39_job_exit_code->signal);
    if(signal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "signal", signal_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_job_exit_code_t *v0_0_39_job_exit_code_parseFromJSON(cJSON *v0_0_39_job_exit_codeJSON){

    v0_0_39_job_exit_code_t *v0_0_39_job_exit_code_local_var = NULL;

    // define the local variable for v0_0_39_job_exit_code->signal
    v0_0_39_job_exit_code_signal_t *signal_local_nonprim = NULL;

    // v0_0_39_job_exit_code->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_exit_codeJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_exit_code->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_exit_codeJSON, "return_code");
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_exit_code->signal
    cJSON *signal = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_exit_codeJSON, "signal");
    if (signal) { 
    signal_local_nonprim = v0_0_39_job_exit_code_signal_parseFromJSON(signal); //nonprimitive
    }


    v0_0_39_job_exit_code_local_var = v0_0_39_job_exit_code_create (
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        return_code ? return_code->valuedouble : 0,
        signal ? signal_local_nonprim : NULL
        );

    return v0_0_39_job_exit_code_local_var;
end:
    if (signal_local_nonprim) {
        v0_0_39_job_exit_code_signal_free(signal_local_nonprim);
        signal_local_nonprim = NULL;
    }
    return NULL;

}
