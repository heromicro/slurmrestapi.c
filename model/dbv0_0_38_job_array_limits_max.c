#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_array_limits_max.h"



dbv0_0_38_job_array_limits_max_t *dbv0_0_38_job_array_limits_max_create(
    dbv0_0_38_job_array_limits_max_running_t *running
    ) {
    dbv0_0_38_job_array_limits_max_t *dbv0_0_38_job_array_limits_max_local_var = malloc(sizeof(dbv0_0_38_job_array_limits_max_t));
    if (!dbv0_0_38_job_array_limits_max_local_var) {
        return NULL;
    }
    dbv0_0_38_job_array_limits_max_local_var->running = running;

    return dbv0_0_38_job_array_limits_max_local_var;
}


void dbv0_0_38_job_array_limits_max_free(dbv0_0_38_job_array_limits_max_t *dbv0_0_38_job_array_limits_max) {
    if(NULL == dbv0_0_38_job_array_limits_max){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_array_limits_max->running) {
        dbv0_0_38_job_array_limits_max_running_free(dbv0_0_38_job_array_limits_max->running);
        dbv0_0_38_job_array_limits_max->running = NULL;
    }
    free(dbv0_0_38_job_array_limits_max);
}

cJSON *dbv0_0_38_job_array_limits_max_convertToJSON(dbv0_0_38_job_array_limits_max_t *dbv0_0_38_job_array_limits_max) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_array_limits_max->running
    if(dbv0_0_38_job_array_limits_max->running) {
    cJSON *running_local_JSON = dbv0_0_38_job_array_limits_max_running_convertToJSON(dbv0_0_38_job_array_limits_max->running);
    if(running_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "running", running_local_JSON);
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

dbv0_0_38_job_array_limits_max_t *dbv0_0_38_job_array_limits_max_parseFromJSON(cJSON *dbv0_0_38_job_array_limits_maxJSON){

    dbv0_0_38_job_array_limits_max_t *dbv0_0_38_job_array_limits_max_local_var = NULL;

    // define the local variable for dbv0_0_38_job_array_limits_max->running
    dbv0_0_38_job_array_limits_max_running_t *running_local_nonprim = NULL;

    // dbv0_0_38_job_array_limits_max->running
    cJSON *running = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_array_limits_maxJSON, "running");
    if (running) { 
    running_local_nonprim = dbv0_0_38_job_array_limits_max_running_parseFromJSON(running); //nonprimitive
    }


    dbv0_0_38_job_array_limits_max_local_var = dbv0_0_38_job_array_limits_max_create (
        running ? running_local_nonprim : NULL
        );

    return dbv0_0_38_job_array_limits_max_local_var;
end:
    if (running_local_nonprim) {
        dbv0_0_38_job_array_limits_max_running_free(running_local_nonprim);
        running_local_nonprim = NULL;
    }
    return NULL;

}
