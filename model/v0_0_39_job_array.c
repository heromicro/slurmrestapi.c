#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_array.h"



v0_0_39_job_array_t *v0_0_39_job_array_create(
    char *task
    ) {
    v0_0_39_job_array_t *v0_0_39_job_array_local_var = malloc(sizeof(v0_0_39_job_array_t));
    if (!v0_0_39_job_array_local_var) {
        return NULL;
    }
    v0_0_39_job_array_local_var->task = task;

    return v0_0_39_job_array_local_var;
}


void v0_0_39_job_array_free(v0_0_39_job_array_t *v0_0_39_job_array) {
    if(NULL == v0_0_39_job_array){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_array->task) {
        free(v0_0_39_job_array->task);
        v0_0_39_job_array->task = NULL;
    }
    free(v0_0_39_job_array);
}

cJSON *v0_0_39_job_array_convertToJSON(v0_0_39_job_array_t *v0_0_39_job_array) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_array->task
    if(v0_0_39_job_array->task) {
    if(cJSON_AddStringToObject(item, "task", v0_0_39_job_array->task) == NULL) {
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

v0_0_39_job_array_t *v0_0_39_job_array_parseFromJSON(cJSON *v0_0_39_job_arrayJSON){

    v0_0_39_job_array_t *v0_0_39_job_array_local_var = NULL;

    // v0_0_39_job_array->task
    cJSON *task = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_arrayJSON, "task");
    if (task) { 
    if(!cJSON_IsString(task) && !cJSON_IsNull(task))
    {
    goto end; //String
    }
    }


    v0_0_39_job_array_local_var = v0_0_39_job_array_create (
        task && !cJSON_IsNull(task) ? strdup(task->valuestring) : NULL
        );

    return v0_0_39_job_array_local_var;
end:
    return NULL;

}
