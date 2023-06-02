#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_task.h"



v0_0_39_step_task_t *v0_0_39_step_task_create(
    char *distribution
    ) {
    v0_0_39_step_task_t *v0_0_39_step_task_local_var = malloc(sizeof(v0_0_39_step_task_t));
    if (!v0_0_39_step_task_local_var) {
        return NULL;
    }
    v0_0_39_step_task_local_var->distribution = distribution;

    return v0_0_39_step_task_local_var;
}


void v0_0_39_step_task_free(v0_0_39_step_task_t *v0_0_39_step_task) {
    if(NULL == v0_0_39_step_task){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_task->distribution) {
        free(v0_0_39_step_task->distribution);
        v0_0_39_step_task->distribution = NULL;
    }
    free(v0_0_39_step_task);
}

cJSON *v0_0_39_step_task_convertToJSON(v0_0_39_step_task_t *v0_0_39_step_task) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_task->distribution
    if(v0_0_39_step_task->distribution) {
    if(cJSON_AddStringToObject(item, "distribution", v0_0_39_step_task->distribution) == NULL) {
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

v0_0_39_step_task_t *v0_0_39_step_task_parseFromJSON(cJSON *v0_0_39_step_taskJSON){

    v0_0_39_step_task_t *v0_0_39_step_task_local_var = NULL;

    // v0_0_39_step_task->distribution
    cJSON *distribution = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_taskJSON, "distribution");
    if (distribution) { 
    if(!cJSON_IsString(distribution) && !cJSON_IsNull(distribution))
    {
    goto end; //String
    }
    }


    v0_0_39_step_task_local_var = v0_0_39_step_task_create (
        distribution && !cJSON_IsNull(distribution) ? strdup(distribution->valuestring) : NULL
        );

    return v0_0_39_step_task_local_var;
end:
    return NULL;

}
