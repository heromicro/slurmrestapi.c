#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_het.h"



v0_0_39_job_het_t *v0_0_39_job_het_create(
    v0_0_39_uint32_no_val_t *job_offset
    ) {
    v0_0_39_job_het_t *v0_0_39_job_het_local_var = malloc(sizeof(v0_0_39_job_het_t));
    if (!v0_0_39_job_het_local_var) {
        return NULL;
    }
    v0_0_39_job_het_local_var->job_offset = job_offset;

    return v0_0_39_job_het_local_var;
}


void v0_0_39_job_het_free(v0_0_39_job_het_t *v0_0_39_job_het) {
    if(NULL == v0_0_39_job_het){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_het->job_offset) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_het->job_offset);
        v0_0_39_job_het->job_offset = NULL;
    }
    free(v0_0_39_job_het);
}

cJSON *v0_0_39_job_het_convertToJSON(v0_0_39_job_het_t *v0_0_39_job_het) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_het->job_offset
    if(v0_0_39_job_het->job_offset) {
    cJSON *job_offset_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_het->job_offset);
    if(job_offset_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "job_offset", job_offset_local_JSON);
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

v0_0_39_job_het_t *v0_0_39_job_het_parseFromJSON(cJSON *v0_0_39_job_hetJSON){

    v0_0_39_job_het_t *v0_0_39_job_het_local_var = NULL;

    // define the local variable for v0_0_39_job_het->job_offset
    v0_0_39_uint32_no_val_t *job_offset_local_nonprim = NULL;

    // v0_0_39_job_het->job_offset
    cJSON *job_offset = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_hetJSON, "job_offset");
    if (job_offset) { 
    job_offset_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(job_offset); //nonprimitive
    }


    v0_0_39_job_het_local_var = v0_0_39_job_het_create (
        job_offset ? job_offset_local_nonprim : NULL
        );

    return v0_0_39_job_het_local_var;
end:
    if (job_offset_local_nonprim) {
        v0_0_39_uint32_no_val_free(job_offset_local_nonprim);
        job_offset_local_nonprim = NULL;
    }
    return NULL;

}
