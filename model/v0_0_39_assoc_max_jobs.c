#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc_max_jobs.h"



v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs_create(
    v0_0_39_assoc_max_jobs_per_t *per
    ) {
    v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs_local_var = malloc(sizeof(v0_0_39_assoc_max_jobs_t));
    if (!v0_0_39_assoc_max_jobs_local_var) {
        return NULL;
    }
    v0_0_39_assoc_max_jobs_local_var->per = per;

    return v0_0_39_assoc_max_jobs_local_var;
}


void v0_0_39_assoc_max_jobs_free(v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs) {
    if(NULL == v0_0_39_assoc_max_jobs){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_assoc_max_jobs->per) {
        v0_0_39_assoc_max_jobs_per_free(v0_0_39_assoc_max_jobs->per);
        v0_0_39_assoc_max_jobs->per = NULL;
    }
    free(v0_0_39_assoc_max_jobs);
}

cJSON *v0_0_39_assoc_max_jobs_convertToJSON(v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc_max_jobs->per
    if(v0_0_39_assoc_max_jobs->per) {
    cJSON *per_local_JSON = v0_0_39_assoc_max_jobs_per_convertToJSON(v0_0_39_assoc_max_jobs->per);
    if(per_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "per", per_local_JSON);
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

v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs_parseFromJSON(cJSON *v0_0_39_assoc_max_jobsJSON){

    v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs_local_var = NULL;

    // define the local variable for v0_0_39_assoc_max_jobs->per
    v0_0_39_assoc_max_jobs_per_t *per_local_nonprim = NULL;

    // v0_0_39_assoc_max_jobs->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_max_jobsJSON, "per");
    if (per) { 
    per_local_nonprim = v0_0_39_assoc_max_jobs_per_parseFromJSON(per); //nonprimitive
    }


    v0_0_39_assoc_max_jobs_local_var = v0_0_39_assoc_max_jobs_create (
        per ? per_local_nonprim : NULL
        );

    return v0_0_39_assoc_max_jobs_local_var;
end:
    if (per_local_nonprim) {
        v0_0_39_assoc_max_jobs_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    return NULL;

}
