#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_comment.h"



v0_0_39_job_comment_t *v0_0_39_job_comment_create(
    char *system
    ) {
    v0_0_39_job_comment_t *v0_0_39_job_comment_local_var = malloc(sizeof(v0_0_39_job_comment_t));
    if (!v0_0_39_job_comment_local_var) {
        return NULL;
    }
    v0_0_39_job_comment_local_var->system = system;

    return v0_0_39_job_comment_local_var;
}


void v0_0_39_job_comment_free(v0_0_39_job_comment_t *v0_0_39_job_comment) {
    if(NULL == v0_0_39_job_comment){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_comment->system) {
        free(v0_0_39_job_comment->system);
        v0_0_39_job_comment->system = NULL;
    }
    free(v0_0_39_job_comment);
}

cJSON *v0_0_39_job_comment_convertToJSON(v0_0_39_job_comment_t *v0_0_39_job_comment) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_comment->system
    if(v0_0_39_job_comment->system) {
    if(cJSON_AddStringToObject(item, "system", v0_0_39_job_comment->system) == NULL) {
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

v0_0_39_job_comment_t *v0_0_39_job_comment_parseFromJSON(cJSON *v0_0_39_job_commentJSON){

    v0_0_39_job_comment_t *v0_0_39_job_comment_local_var = NULL;

    // v0_0_39_job_comment->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_commentJSON, "system");
    if (system) { 
    if(!cJSON_IsString(system) && !cJSON_IsNull(system))
    {
    goto end; //String
    }
    }


    v0_0_39_job_comment_local_var = v0_0_39_job_comment_create (
        system && !cJSON_IsNull(system) ? strdup(system->valuestring) : NULL
        );

    return v0_0_39_job_comment_local_var;
end:
    return NULL;

}
