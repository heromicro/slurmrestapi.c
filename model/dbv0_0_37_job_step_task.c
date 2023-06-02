#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_task.h"



dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task_create(
    char *distribution
    ) {
    dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task_local_var = malloc(sizeof(dbv0_0_37_job_step_task_t));
    if (!dbv0_0_37_job_step_task_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_task_local_var->distribution = distribution;

    return dbv0_0_37_job_step_task_local_var;
}


void dbv0_0_37_job_step_task_free(dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task) {
    if(NULL == dbv0_0_37_job_step_task){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_step_task->distribution) {
        free(dbv0_0_37_job_step_task->distribution);
        dbv0_0_37_job_step_task->distribution = NULL;
    }
    free(dbv0_0_37_job_step_task);
}

cJSON *dbv0_0_37_job_step_task_convertToJSON(dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_task->distribution
    if(dbv0_0_37_job_step_task->distribution) {
    if(cJSON_AddStringToObject(item, "distribution", dbv0_0_37_job_step_task->distribution) == NULL) {
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

dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task_parseFromJSON(cJSON *dbv0_0_37_job_step_taskJSON){

    dbv0_0_37_job_step_task_t *dbv0_0_37_job_step_task_local_var = NULL;

    // dbv0_0_37_job_step_task->distribution
    cJSON *distribution = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_taskJSON, "distribution");
    if (distribution) { 
    if(!cJSON_IsString(distribution) && !cJSON_IsNull(distribution))
    {
    goto end; //String
    }
    }


    dbv0_0_37_job_step_task_local_var = dbv0_0_37_job_step_task_create (
        distribution && !cJSON_IsNull(distribution) ? strdup(distribution->valuestring) : NULL
        );

    return dbv0_0_37_job_step_task_local_var;
end:
    return NULL;

}
