#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_slurm_step_id.h"



v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id_create(
    int job_id,
    int step_het_component,
    char *step_id
    ) {
    v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id_local_var = malloc(sizeof(v0_0_39_slurm_step_id_t));
    if (!v0_0_39_slurm_step_id_local_var) {
        return NULL;
    }
    v0_0_39_slurm_step_id_local_var->job_id = job_id;
    v0_0_39_slurm_step_id_local_var->step_het_component = step_het_component;
    v0_0_39_slurm_step_id_local_var->step_id = step_id;

    return v0_0_39_slurm_step_id_local_var;
}


void v0_0_39_slurm_step_id_free(v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id) {
    if(NULL == v0_0_39_slurm_step_id){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_slurm_step_id->step_id) {
        free(v0_0_39_slurm_step_id->step_id);
        v0_0_39_slurm_step_id->step_id = NULL;
    }
    free(v0_0_39_slurm_step_id);
}

cJSON *v0_0_39_slurm_step_id_convertToJSON(v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_slurm_step_id->job_id
    if(v0_0_39_slurm_step_id->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_39_slurm_step_id->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_slurm_step_id->step_het_component
    if(v0_0_39_slurm_step_id->step_het_component) {
    if(cJSON_AddNumberToObject(item, "step_het_component", v0_0_39_slurm_step_id->step_het_component) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_slurm_step_id->step_id
    if(v0_0_39_slurm_step_id->step_id) {
    if(cJSON_AddStringToObject(item, "step_id", v0_0_39_slurm_step_id->step_id) == NULL) {
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

v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id_parseFromJSON(cJSON *v0_0_39_slurm_step_idJSON){

    v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id_local_var = NULL;

    // v0_0_39_slurm_step_id->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_slurm_step_idJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_slurm_step_id->step_het_component
    cJSON *step_het_component = cJSON_GetObjectItemCaseSensitive(v0_0_39_slurm_step_idJSON, "step_het_component");
    if (step_het_component) { 
    if(!cJSON_IsNumber(step_het_component))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_slurm_step_id->step_id
    cJSON *step_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_slurm_step_idJSON, "step_id");
    if (step_id) { 
    if(!cJSON_IsString(step_id) && !cJSON_IsNull(step_id))
    {
    goto end; //String
    }
    }


    v0_0_39_slurm_step_id_local_var = v0_0_39_slurm_step_id_create (
        job_id ? job_id->valuedouble : 0,
        step_het_component ? step_het_component->valuedouble : 0,
        step_id && !cJSON_IsNull(step_id) ? strdup(step_id->valuestring) : NULL
        );

    return v0_0_39_slurm_step_id_local_var;
end:
    return NULL;

}
