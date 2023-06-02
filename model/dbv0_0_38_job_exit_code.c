#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_exit_code.h"



dbv0_0_38_job_exit_code_t *dbv0_0_38_job_exit_code_create(
    char *status,
    int return_code,
    dbv0_0_38_job_exit_code_signal_t *signal
    ) {
    dbv0_0_38_job_exit_code_t *dbv0_0_38_job_exit_code_local_var = malloc(sizeof(dbv0_0_38_job_exit_code_t));
    if (!dbv0_0_38_job_exit_code_local_var) {
        return NULL;
    }
    dbv0_0_38_job_exit_code_local_var->status = status;
    dbv0_0_38_job_exit_code_local_var->return_code = return_code;
    dbv0_0_38_job_exit_code_local_var->signal = signal;

    return dbv0_0_38_job_exit_code_local_var;
}


void dbv0_0_38_job_exit_code_free(dbv0_0_38_job_exit_code_t *dbv0_0_38_job_exit_code) {
    if(NULL == dbv0_0_38_job_exit_code){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_exit_code->status) {
        free(dbv0_0_38_job_exit_code->status);
        dbv0_0_38_job_exit_code->status = NULL;
    }
    if (dbv0_0_38_job_exit_code->signal) {
        dbv0_0_38_job_exit_code_signal_free(dbv0_0_38_job_exit_code->signal);
        dbv0_0_38_job_exit_code->signal = NULL;
    }
    free(dbv0_0_38_job_exit_code);
}

cJSON *dbv0_0_38_job_exit_code_convertToJSON(dbv0_0_38_job_exit_code_t *dbv0_0_38_job_exit_code) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_exit_code->status
    if(dbv0_0_38_job_exit_code->status) {
    if(cJSON_AddStringToObject(item, "status", dbv0_0_38_job_exit_code->status) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_exit_code->return_code
    if(dbv0_0_38_job_exit_code->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", dbv0_0_38_job_exit_code->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_job_exit_code->signal
    if(dbv0_0_38_job_exit_code->signal) {
    cJSON *signal_local_JSON = dbv0_0_38_job_exit_code_signal_convertToJSON(dbv0_0_38_job_exit_code->signal);
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

dbv0_0_38_job_exit_code_t *dbv0_0_38_job_exit_code_parseFromJSON(cJSON *dbv0_0_38_job_exit_codeJSON){

    dbv0_0_38_job_exit_code_t *dbv0_0_38_job_exit_code_local_var = NULL;

    // define the local variable for dbv0_0_38_job_exit_code->signal
    dbv0_0_38_job_exit_code_signal_t *signal_local_nonprim = NULL;

    // dbv0_0_38_job_exit_code->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_exit_codeJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_exit_code->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_exit_codeJSON, "return_code");
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_job_exit_code->signal
    cJSON *signal = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_exit_codeJSON, "signal");
    if (signal) { 
    signal_local_nonprim = dbv0_0_38_job_exit_code_signal_parseFromJSON(signal); //nonprimitive
    }


    dbv0_0_38_job_exit_code_local_var = dbv0_0_38_job_exit_code_create (
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        return_code ? return_code->valuedouble : 0,
        signal ? signal_local_nonprim : NULL
        );

    return dbv0_0_38_job_exit_code_local_var;
end:
    if (signal_local_nonprim) {
        dbv0_0_38_job_exit_code_signal_free(signal_local_nonprim);
        signal_local_nonprim = NULL;
    }
    return NULL;

}
