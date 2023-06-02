#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc_max_jobs_per.h"



v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per_create(
    v0_0_39_uint32_no_val_t *wall_clock
    ) {
    v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per_local_var = malloc(sizeof(v0_0_39_assoc_max_jobs_per_t));
    if (!v0_0_39_assoc_max_jobs_per_local_var) {
        return NULL;
    }
    v0_0_39_assoc_max_jobs_per_local_var->wall_clock = wall_clock;

    return v0_0_39_assoc_max_jobs_per_local_var;
}


void v0_0_39_assoc_max_jobs_per_free(v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per) {
    if(NULL == v0_0_39_assoc_max_jobs_per){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_assoc_max_jobs_per->wall_clock) {
        v0_0_39_uint32_no_val_free(v0_0_39_assoc_max_jobs_per->wall_clock);
        v0_0_39_assoc_max_jobs_per->wall_clock = NULL;
    }
    free(v0_0_39_assoc_max_jobs_per);
}

cJSON *v0_0_39_assoc_max_jobs_per_convertToJSON(v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc_max_jobs_per->wall_clock
    if(v0_0_39_assoc_max_jobs_per->wall_clock) {
    cJSON *wall_clock_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_assoc_max_jobs_per->wall_clock);
    if(wall_clock_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wall_clock", wall_clock_local_JSON);
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

v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per_parseFromJSON(cJSON *v0_0_39_assoc_max_jobs_perJSON){

    v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per_local_var = NULL;

    // define the local variable for v0_0_39_assoc_max_jobs_per->wall_clock
    v0_0_39_uint32_no_val_t *wall_clock_local_nonprim = NULL;

    // v0_0_39_assoc_max_jobs_per->wall_clock
    cJSON *wall_clock = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_max_jobs_perJSON, "wall_clock");
    if (wall_clock) { 
    wall_clock_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(wall_clock); //nonprimitive
    }


    v0_0_39_assoc_max_jobs_per_local_var = v0_0_39_assoc_max_jobs_per_create (
        wall_clock ? wall_clock_local_nonprim : NULL
        );

    return v0_0_39_assoc_max_jobs_per_local_var;
end:
    if (wall_clock_local_nonprim) {
        v0_0_39_uint32_no_val_free(wall_clock_local_nonprim);
        wall_clock_local_nonprim = NULL;
    }
    return NULL;

}
