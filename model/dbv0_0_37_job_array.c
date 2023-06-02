#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_array.h"



dbv0_0_37_job_array_t *dbv0_0_37_job_array_create(
    int job_id,
    dbv0_0_37_job_array_limits_t *limits,
    char *task,
    int task_id
    ) {
    dbv0_0_37_job_array_t *dbv0_0_37_job_array_local_var = malloc(sizeof(dbv0_0_37_job_array_t));
    if (!dbv0_0_37_job_array_local_var) {
        return NULL;
    }
    dbv0_0_37_job_array_local_var->job_id = job_id;
    dbv0_0_37_job_array_local_var->limits = limits;
    dbv0_0_37_job_array_local_var->task = task;
    dbv0_0_37_job_array_local_var->task_id = task_id;

    return dbv0_0_37_job_array_local_var;
}


void dbv0_0_37_job_array_free(dbv0_0_37_job_array_t *dbv0_0_37_job_array) {
    if(NULL == dbv0_0_37_job_array){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_array->limits) {
        dbv0_0_37_job_array_limits_free(dbv0_0_37_job_array->limits);
        dbv0_0_37_job_array->limits = NULL;
    }
    if (dbv0_0_37_job_array->task) {
        free(dbv0_0_37_job_array->task);
        dbv0_0_37_job_array->task = NULL;
    }
    free(dbv0_0_37_job_array);
}

cJSON *dbv0_0_37_job_array_convertToJSON(dbv0_0_37_job_array_t *dbv0_0_37_job_array) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_array->job_id
    if(dbv0_0_37_job_array->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", dbv0_0_37_job_array->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_array->limits
    if(dbv0_0_37_job_array->limits) {
    cJSON *limits_local_JSON = dbv0_0_37_job_array_limits_convertToJSON(dbv0_0_37_job_array->limits);
    if(limits_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "limits", limits_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_array->task
    if(dbv0_0_37_job_array->task) {
    if(cJSON_AddStringToObject(item, "task", dbv0_0_37_job_array->task) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job_array->task_id
    if(dbv0_0_37_job_array->task_id) {
    if(cJSON_AddNumberToObject(item, "task_id", dbv0_0_37_job_array->task_id) == NULL) {
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

dbv0_0_37_job_array_t *dbv0_0_37_job_array_parseFromJSON(cJSON *dbv0_0_37_job_arrayJSON){

    dbv0_0_37_job_array_t *dbv0_0_37_job_array_local_var = NULL;

    // define the local variable for dbv0_0_37_job_array->limits
    dbv0_0_37_job_array_limits_t *limits_local_nonprim = NULL;

    // dbv0_0_37_job_array->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_arrayJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_array->limits
    cJSON *limits = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_arrayJSON, "limits");
    if (limits) { 
    limits_local_nonprim = dbv0_0_37_job_array_limits_parseFromJSON(limits); //nonprimitive
    }

    // dbv0_0_37_job_array->task
    cJSON *task = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_arrayJSON, "task");
    if (task) { 
    if(!cJSON_IsString(task) && !cJSON_IsNull(task))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job_array->task_id
    cJSON *task_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_arrayJSON, "task_id");
    if (task_id) { 
    if(!cJSON_IsNumber(task_id))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_array_local_var = dbv0_0_37_job_array_create (
        job_id ? job_id->valuedouble : 0,
        limits ? limits_local_nonprim : NULL,
        task && !cJSON_IsNull(task) ? strdup(task->valuestring) : NULL,
        task_id ? task_id->valuedouble : 0
        );

    return dbv0_0_37_job_array_local_var;
end:
    if (limits_local_nonprim) {
        dbv0_0_37_job_array_limits_free(limits_local_nonprim);
        limits_local_nonprim = NULL;
    }
    return NULL;

}
