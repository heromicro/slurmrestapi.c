#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_meta_slurm_version.h"



v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version_create(
    int major,
    int micro,
    int minor
    ) {
    v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version_local_var = malloc(sizeof(v0_0_39_meta_slurm_version_t));
    if (!v0_0_39_meta_slurm_version_local_var) {
        return NULL;
    }
    v0_0_39_meta_slurm_version_local_var->major = major;
    v0_0_39_meta_slurm_version_local_var->micro = micro;
    v0_0_39_meta_slurm_version_local_var->minor = minor;

    return v0_0_39_meta_slurm_version_local_var;
}


void v0_0_39_meta_slurm_version_free(v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version) {
    if(NULL == v0_0_39_meta_slurm_version){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_meta_slurm_version);
}

cJSON *v0_0_39_meta_slurm_version_convertToJSON(v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_meta_slurm_version->major
    if(v0_0_39_meta_slurm_version->major) {
    if(cJSON_AddNumberToObject(item, "major", v0_0_39_meta_slurm_version->major) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_meta_slurm_version->micro
    if(v0_0_39_meta_slurm_version->micro) {
    if(cJSON_AddNumberToObject(item, "micro", v0_0_39_meta_slurm_version->micro) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_meta_slurm_version->minor
    if(v0_0_39_meta_slurm_version->minor) {
    if(cJSON_AddNumberToObject(item, "minor", v0_0_39_meta_slurm_version->minor) == NULL) {
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

v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version_parseFromJSON(cJSON *v0_0_39_meta_slurm_versionJSON){

    v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version_local_var = NULL;

    // v0_0_39_meta_slurm_version->major
    cJSON *major = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_slurm_versionJSON, "major");
    if (major) { 
    if(!cJSON_IsNumber(major))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_meta_slurm_version->micro
    cJSON *micro = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_slurm_versionJSON, "micro");
    if (micro) { 
    if(!cJSON_IsNumber(micro))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_meta_slurm_version->minor
    cJSON *minor = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_slurm_versionJSON, "minor");
    if (minor) { 
    if(!cJSON_IsNumber(minor))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_meta_slurm_version_local_var = v0_0_39_meta_slurm_version_create (
        major ? major->valuedouble : 0,
        micro ? micro->valuedouble : 0,
        minor ? minor->valuedouble : 0
        );

    return v0_0_39_meta_slurm_version_local_var;
end:
    return NULL;

}
