#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_array_limits_max_running.h"



dbv0_0_38_job_array_limits_max_running_t *dbv0_0_38_job_array_limits_max_running_create(
    int tasks
    ) {
    dbv0_0_38_job_array_limits_max_running_t *dbv0_0_38_job_array_limits_max_running_local_var = malloc(sizeof(dbv0_0_38_job_array_limits_max_running_t));
    if (!dbv0_0_38_job_array_limits_max_running_local_var) {
        return NULL;
    }
    dbv0_0_38_job_array_limits_max_running_local_var->tasks = tasks;

    return dbv0_0_38_job_array_limits_max_running_local_var;
}


void dbv0_0_38_job_array_limits_max_running_free(dbv0_0_38_job_array_limits_max_running_t *dbv0_0_38_job_array_limits_max_running) {
    if(NULL == dbv0_0_38_job_array_limits_max_running){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_job_array_limits_max_running);
}

cJSON *dbv0_0_38_job_array_limits_max_running_convertToJSON(dbv0_0_38_job_array_limits_max_running_t *dbv0_0_38_job_array_limits_max_running) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_array_limits_max_running->tasks
    if(dbv0_0_38_job_array_limits_max_running->tasks) {
    if(cJSON_AddNumberToObject(item, "tasks", dbv0_0_38_job_array_limits_max_running->tasks) == NULL) {
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

dbv0_0_38_job_array_limits_max_running_t *dbv0_0_38_job_array_limits_max_running_parseFromJSON(cJSON *dbv0_0_38_job_array_limits_max_runningJSON){

    dbv0_0_38_job_array_limits_max_running_t *dbv0_0_38_job_array_limits_max_running_local_var = NULL;

    // dbv0_0_38_job_array_limits_max_running->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_array_limits_max_runningJSON, "tasks");
    if (tasks) { 
    if(!cJSON_IsNumber(tasks))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_job_array_limits_max_running_local_var = dbv0_0_38_job_array_limits_max_running_create (
        tasks ? tasks->valuedouble : 0
        );

    return dbv0_0_38_job_array_limits_max_running_local_var;
end:
    return NULL;

}
