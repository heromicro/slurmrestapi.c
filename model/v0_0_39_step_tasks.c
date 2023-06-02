#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_tasks.h"



v0_0_39_step_tasks_t *v0_0_39_step_tasks_create(
    int count
    ) {
    v0_0_39_step_tasks_t *v0_0_39_step_tasks_local_var = malloc(sizeof(v0_0_39_step_tasks_t));
    if (!v0_0_39_step_tasks_local_var) {
        return NULL;
    }
    v0_0_39_step_tasks_local_var->count = count;

    return v0_0_39_step_tasks_local_var;
}


void v0_0_39_step_tasks_free(v0_0_39_step_tasks_t *v0_0_39_step_tasks) {
    if(NULL == v0_0_39_step_tasks){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_step_tasks);
}

cJSON *v0_0_39_step_tasks_convertToJSON(v0_0_39_step_tasks_t *v0_0_39_step_tasks) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_tasks->count
    if(v0_0_39_step_tasks->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_39_step_tasks->count) == NULL) {
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

v0_0_39_step_tasks_t *v0_0_39_step_tasks_parseFromJSON(cJSON *v0_0_39_step_tasksJSON){

    v0_0_39_step_tasks_t *v0_0_39_step_tasks_local_var = NULL;

    // v0_0_39_step_tasks->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_tasksJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_step_tasks_local_var = v0_0_39_step_tasks_create (
        count ? count->valuedouble : 0
        );

    return v0_0_39_step_tasks_local_var;
end:
    return NULL;

}
