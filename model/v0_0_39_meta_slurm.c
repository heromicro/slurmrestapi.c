#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_meta_slurm.h"



v0_0_39_meta_slurm_t *v0_0_39_meta_slurm_create(
    v0_0_39_meta_slurm_version_t *version,
    char *release
    ) {
    v0_0_39_meta_slurm_t *v0_0_39_meta_slurm_local_var = malloc(sizeof(v0_0_39_meta_slurm_t));
    if (!v0_0_39_meta_slurm_local_var) {
        return NULL;
    }
    v0_0_39_meta_slurm_local_var->version = version;
    v0_0_39_meta_slurm_local_var->release = release;

    return v0_0_39_meta_slurm_local_var;
}


void v0_0_39_meta_slurm_free(v0_0_39_meta_slurm_t *v0_0_39_meta_slurm) {
    if(NULL == v0_0_39_meta_slurm){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_meta_slurm->version) {
        v0_0_39_meta_slurm_version_free(v0_0_39_meta_slurm->version);
        v0_0_39_meta_slurm->version = NULL;
    }
    if (v0_0_39_meta_slurm->release) {
        free(v0_0_39_meta_slurm->release);
        v0_0_39_meta_slurm->release = NULL;
    }
    free(v0_0_39_meta_slurm);
}

cJSON *v0_0_39_meta_slurm_convertToJSON(v0_0_39_meta_slurm_t *v0_0_39_meta_slurm) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_meta_slurm->version
    if(v0_0_39_meta_slurm->version) {
    cJSON *version_local_JSON = v0_0_39_meta_slurm_version_convertToJSON(v0_0_39_meta_slurm->version);
    if(version_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "version", version_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_meta_slurm->release
    if(v0_0_39_meta_slurm->release) {
    if(cJSON_AddStringToObject(item, "release", v0_0_39_meta_slurm->release) == NULL) {
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

v0_0_39_meta_slurm_t *v0_0_39_meta_slurm_parseFromJSON(cJSON *v0_0_39_meta_slurmJSON){

    v0_0_39_meta_slurm_t *v0_0_39_meta_slurm_local_var = NULL;

    // define the local variable for v0_0_39_meta_slurm->version
    v0_0_39_meta_slurm_version_t *version_local_nonprim = NULL;

    // v0_0_39_meta_slurm->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_slurmJSON, "version");
    if (version) { 
    version_local_nonprim = v0_0_39_meta_slurm_version_parseFromJSON(version); //nonprimitive
    }

    // v0_0_39_meta_slurm->release
    cJSON *release = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_slurmJSON, "release");
    if (release) { 
    if(!cJSON_IsString(release) && !cJSON_IsNull(release))
    {
    goto end; //String
    }
    }


    v0_0_39_meta_slurm_local_var = v0_0_39_meta_slurm_create (
        version ? version_local_nonprim : NULL,
        release && !cJSON_IsNull(release) ? strdup(release->valuestring) : NULL
        );

    return v0_0_39_meta_slurm_local_var;
end:
    if (version_local_nonprim) {
        v0_0_39_meta_slurm_version_free(version_local_nonprim);
        version_local_nonprim = NULL;
    }
    return NULL;

}
