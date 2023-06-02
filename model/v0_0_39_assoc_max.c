#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc_max.h"



v0_0_39_assoc_max_t *v0_0_39_assoc_max_create(
    v0_0_39_assoc_max_jobs_t *jobs
    ) {
    v0_0_39_assoc_max_t *v0_0_39_assoc_max_local_var = malloc(sizeof(v0_0_39_assoc_max_t));
    if (!v0_0_39_assoc_max_local_var) {
        return NULL;
    }
    v0_0_39_assoc_max_local_var->jobs = jobs;

    return v0_0_39_assoc_max_local_var;
}


void v0_0_39_assoc_max_free(v0_0_39_assoc_max_t *v0_0_39_assoc_max) {
    if(NULL == v0_0_39_assoc_max){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_assoc_max->jobs) {
        v0_0_39_assoc_max_jobs_free(v0_0_39_assoc_max->jobs);
        v0_0_39_assoc_max->jobs = NULL;
    }
    free(v0_0_39_assoc_max);
}

cJSON *v0_0_39_assoc_max_convertToJSON(v0_0_39_assoc_max_t *v0_0_39_assoc_max) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc_max->jobs
    if(v0_0_39_assoc_max->jobs) {
    cJSON *jobs_local_JSON = v0_0_39_assoc_max_jobs_convertToJSON(v0_0_39_assoc_max->jobs);
    if(jobs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "jobs", jobs_local_JSON);
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

v0_0_39_assoc_max_t *v0_0_39_assoc_max_parseFromJSON(cJSON *v0_0_39_assoc_maxJSON){

    v0_0_39_assoc_max_t *v0_0_39_assoc_max_local_var = NULL;

    // define the local variable for v0_0_39_assoc_max->jobs
    v0_0_39_assoc_max_jobs_t *jobs_local_nonprim = NULL;

    // v0_0_39_assoc_max->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_maxJSON, "jobs");
    if (jobs) { 
    jobs_local_nonprim = v0_0_39_assoc_max_jobs_parseFromJSON(jobs); //nonprimitive
    }


    v0_0_39_assoc_max_local_var = v0_0_39_assoc_max_create (
        jobs ? jobs_local_nonprim : NULL
        );

    return v0_0_39_assoc_max_local_var;
end:
    if (jobs_local_nonprim) {
        v0_0_39_assoc_max_jobs_free(jobs_local_nonprim);
        jobs_local_nonprim = NULL;
    }
    return NULL;

}
