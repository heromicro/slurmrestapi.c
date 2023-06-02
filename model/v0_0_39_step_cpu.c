#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_cpu.h"



v0_0_39_step_cpu_t *v0_0_39_step_cpu_create(
    char *governor
    ) {
    v0_0_39_step_cpu_t *v0_0_39_step_cpu_local_var = malloc(sizeof(v0_0_39_step_cpu_t));
    if (!v0_0_39_step_cpu_local_var) {
        return NULL;
    }
    v0_0_39_step_cpu_local_var->governor = governor;

    return v0_0_39_step_cpu_local_var;
}


void v0_0_39_step_cpu_free(v0_0_39_step_cpu_t *v0_0_39_step_cpu) {
    if(NULL == v0_0_39_step_cpu){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_cpu->governor) {
        free(v0_0_39_step_cpu->governor);
        v0_0_39_step_cpu->governor = NULL;
    }
    free(v0_0_39_step_cpu);
}

cJSON *v0_0_39_step_cpu_convertToJSON(v0_0_39_step_cpu_t *v0_0_39_step_cpu) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_cpu->governor
    if(v0_0_39_step_cpu->governor) {
    if(cJSON_AddStringToObject(item, "governor", v0_0_39_step_cpu->governor) == NULL) {
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

v0_0_39_step_cpu_t *v0_0_39_step_cpu_parseFromJSON(cJSON *v0_0_39_step_cpuJSON){

    v0_0_39_step_cpu_t *v0_0_39_step_cpu_local_var = NULL;

    // v0_0_39_step_cpu->governor
    cJSON *governor = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_cpuJSON, "governor");
    if (governor) { 
    if(!cJSON_IsString(governor) && !cJSON_IsNull(governor))
    {
    goto end; //String
    }
    }


    v0_0_39_step_cpu_local_var = v0_0_39_step_cpu_create (
        governor && !cJSON_IsNull(governor) ? strdup(governor->valuestring) : NULL
        );

    return v0_0_39_step_cpu_local_var;
end:
    return NULL;

}
