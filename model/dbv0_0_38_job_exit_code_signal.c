#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_exit_code_signal.h"



dbv0_0_38_job_exit_code_signal_t *dbv0_0_38_job_exit_code_signal_create(
    int signal_id,
    char *name
    ) {
    dbv0_0_38_job_exit_code_signal_t *dbv0_0_38_job_exit_code_signal_local_var = malloc(sizeof(dbv0_0_38_job_exit_code_signal_t));
    if (!dbv0_0_38_job_exit_code_signal_local_var) {
        return NULL;
    }
    dbv0_0_38_job_exit_code_signal_local_var->signal_id = signal_id;
    dbv0_0_38_job_exit_code_signal_local_var->name = name;

    return dbv0_0_38_job_exit_code_signal_local_var;
}


void dbv0_0_38_job_exit_code_signal_free(dbv0_0_38_job_exit_code_signal_t *dbv0_0_38_job_exit_code_signal) {
    if(NULL == dbv0_0_38_job_exit_code_signal){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_exit_code_signal->name) {
        free(dbv0_0_38_job_exit_code_signal->name);
        dbv0_0_38_job_exit_code_signal->name = NULL;
    }
    free(dbv0_0_38_job_exit_code_signal);
}

cJSON *dbv0_0_38_job_exit_code_signal_convertToJSON(dbv0_0_38_job_exit_code_signal_t *dbv0_0_38_job_exit_code_signal) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_exit_code_signal->signal_id
    if(dbv0_0_38_job_exit_code_signal->signal_id) {
    if(cJSON_AddNumberToObject(item, "signal_id", dbv0_0_38_job_exit_code_signal->signal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_job_exit_code_signal->name
    if(dbv0_0_38_job_exit_code_signal->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_job_exit_code_signal->name) == NULL) {
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

dbv0_0_38_job_exit_code_signal_t *dbv0_0_38_job_exit_code_signal_parseFromJSON(cJSON *dbv0_0_38_job_exit_code_signalJSON){

    dbv0_0_38_job_exit_code_signal_t *dbv0_0_38_job_exit_code_signal_local_var = NULL;

    // dbv0_0_38_job_exit_code_signal->signal_id
    cJSON *signal_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_exit_code_signalJSON, "signal_id");
    if (signal_id) { 
    if(!cJSON_IsNumber(signal_id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_job_exit_code_signal->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_exit_code_signalJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    dbv0_0_38_job_exit_code_signal_local_var = dbv0_0_38_job_exit_code_signal_create (
        signal_id ? signal_id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return dbv0_0_38_job_exit_code_signal_local_var;
end:
    return NULL;

}
