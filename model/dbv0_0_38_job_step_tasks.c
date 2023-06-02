#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step_tasks.h"



dbv0_0_38_job_step_tasks_t *dbv0_0_38_job_step_tasks_create(
    int count
    ) {
    dbv0_0_38_job_step_tasks_t *dbv0_0_38_job_step_tasks_local_var = malloc(sizeof(dbv0_0_38_job_step_tasks_t));
    if (!dbv0_0_38_job_step_tasks_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_tasks_local_var->count = count;

    return dbv0_0_38_job_step_tasks_local_var;
}


void dbv0_0_38_job_step_tasks_free(dbv0_0_38_job_step_tasks_t *dbv0_0_38_job_step_tasks) {
    if(NULL == dbv0_0_38_job_step_tasks){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_job_step_tasks);
}

cJSON *dbv0_0_38_job_step_tasks_convertToJSON(dbv0_0_38_job_step_tasks_t *dbv0_0_38_job_step_tasks) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step_tasks->count
    if(dbv0_0_38_job_step_tasks->count) {
    if(cJSON_AddNumberToObject(item, "count", dbv0_0_38_job_step_tasks->count) == NULL) {
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

dbv0_0_38_job_step_tasks_t *dbv0_0_38_job_step_tasks_parseFromJSON(cJSON *dbv0_0_38_job_step_tasksJSON){

    dbv0_0_38_job_step_tasks_t *dbv0_0_38_job_step_tasks_local_var = NULL;

    // dbv0_0_38_job_step_tasks->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_tasksJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_job_step_tasks_local_var = dbv0_0_38_job_step_tasks_create (
        count ? count->valuedouble : 0
        );

    return dbv0_0_38_job_step_tasks_local_var;
end:
    return NULL;

}
