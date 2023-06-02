#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_meta_slurm_version.h"



v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version_create(
    char *major,
    char *micro,
    char *minor
    ) {
    v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version_local_var = malloc(sizeof(v0_0_38_meta_slurm_version_t));
    if (!v0_0_38_meta_slurm_version_local_var) {
        return NULL;
    }
    v0_0_38_meta_slurm_version_local_var->major = major;
    v0_0_38_meta_slurm_version_local_var->micro = micro;
    v0_0_38_meta_slurm_version_local_var->minor = minor;

    return v0_0_38_meta_slurm_version_local_var;
}


void v0_0_38_meta_slurm_version_free(v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version) {
    if(NULL == v0_0_38_meta_slurm_version){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_meta_slurm_version->major) {
        free(v0_0_38_meta_slurm_version->major);
        v0_0_38_meta_slurm_version->major = NULL;
    }
    if (v0_0_38_meta_slurm_version->micro) {
        free(v0_0_38_meta_slurm_version->micro);
        v0_0_38_meta_slurm_version->micro = NULL;
    }
    if (v0_0_38_meta_slurm_version->minor) {
        free(v0_0_38_meta_slurm_version->minor);
        v0_0_38_meta_slurm_version->minor = NULL;
    }
    free(v0_0_38_meta_slurm_version);
}

cJSON *v0_0_38_meta_slurm_version_convertToJSON(v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_meta_slurm_version->major
    if(v0_0_38_meta_slurm_version->major) {
    if(cJSON_AddStringToObject(item, "major", v0_0_38_meta_slurm_version->major) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_meta_slurm_version->micro
    if(v0_0_38_meta_slurm_version->micro) {
    if(cJSON_AddStringToObject(item, "micro", v0_0_38_meta_slurm_version->micro) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_meta_slurm_version->minor
    if(v0_0_38_meta_slurm_version->minor) {
    if(cJSON_AddStringToObject(item, "minor", v0_0_38_meta_slurm_version->minor) == NULL) {
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

v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version_parseFromJSON(cJSON *v0_0_38_meta_slurm_versionJSON){

    v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version_local_var = NULL;

    // v0_0_38_meta_slurm_version->major
    cJSON *major = cJSON_GetObjectItemCaseSensitive(v0_0_38_meta_slurm_versionJSON, "major");
    if (major) { 
    if(!cJSON_IsString(major) && !cJSON_IsNull(major))
    {
    goto end; //String
    }
    }

    // v0_0_38_meta_slurm_version->micro
    cJSON *micro = cJSON_GetObjectItemCaseSensitive(v0_0_38_meta_slurm_versionJSON, "micro");
    if (micro) { 
    if(!cJSON_IsString(micro) && !cJSON_IsNull(micro))
    {
    goto end; //String
    }
    }

    // v0_0_38_meta_slurm_version->minor
    cJSON *minor = cJSON_GetObjectItemCaseSensitive(v0_0_38_meta_slurm_versionJSON, "minor");
    if (minor) { 
    if(!cJSON_IsString(minor) && !cJSON_IsNull(minor))
    {
    goto end; //String
    }
    }


    v0_0_38_meta_slurm_version_local_var = v0_0_38_meta_slurm_version_create (
        major && !cJSON_IsNull(major) ? strdup(major->valuestring) : NULL,
        micro && !cJSON_IsNull(micro) ? strdup(micro->valuestring) : NULL,
        minor && !cJSON_IsNull(minor) ? strdup(minor->valuestring) : NULL
        );

    return v0_0_38_meta_slurm_version_local_var;
end:
    return NULL;

}
