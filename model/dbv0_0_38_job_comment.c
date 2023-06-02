#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_comment.h"



dbv0_0_38_job_comment_t *dbv0_0_38_job_comment_create(
    char *administrator,
    char *job,
    char *system
    ) {
    dbv0_0_38_job_comment_t *dbv0_0_38_job_comment_local_var = malloc(sizeof(dbv0_0_38_job_comment_t));
    if (!dbv0_0_38_job_comment_local_var) {
        return NULL;
    }
    dbv0_0_38_job_comment_local_var->administrator = administrator;
    dbv0_0_38_job_comment_local_var->job = job;
    dbv0_0_38_job_comment_local_var->system = system;

    return dbv0_0_38_job_comment_local_var;
}


void dbv0_0_38_job_comment_free(dbv0_0_38_job_comment_t *dbv0_0_38_job_comment) {
    if(NULL == dbv0_0_38_job_comment){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_comment->administrator) {
        free(dbv0_0_38_job_comment->administrator);
        dbv0_0_38_job_comment->administrator = NULL;
    }
    if (dbv0_0_38_job_comment->job) {
        free(dbv0_0_38_job_comment->job);
        dbv0_0_38_job_comment->job = NULL;
    }
    if (dbv0_0_38_job_comment->system) {
        free(dbv0_0_38_job_comment->system);
        dbv0_0_38_job_comment->system = NULL;
    }
    free(dbv0_0_38_job_comment);
}

cJSON *dbv0_0_38_job_comment_convertToJSON(dbv0_0_38_job_comment_t *dbv0_0_38_job_comment) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_comment->administrator
    if(dbv0_0_38_job_comment->administrator) {
    if(cJSON_AddStringToObject(item, "administrator", dbv0_0_38_job_comment->administrator) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_comment->job
    if(dbv0_0_38_job_comment->job) {
    if(cJSON_AddStringToObject(item, "job", dbv0_0_38_job_comment->job) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_comment->system
    if(dbv0_0_38_job_comment->system) {
    if(cJSON_AddStringToObject(item, "system", dbv0_0_38_job_comment->system) == NULL) {
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

dbv0_0_38_job_comment_t *dbv0_0_38_job_comment_parseFromJSON(cJSON *dbv0_0_38_job_commentJSON){

    dbv0_0_38_job_comment_t *dbv0_0_38_job_comment_local_var = NULL;

    // dbv0_0_38_job_comment->administrator
    cJSON *administrator = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_commentJSON, "administrator");
    if (administrator) { 
    if(!cJSON_IsString(administrator) && !cJSON_IsNull(administrator))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_comment->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_commentJSON, "job");
    if (job) { 
    if(!cJSON_IsString(job) && !cJSON_IsNull(job))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_comment->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_commentJSON, "system");
    if (system) { 
    if(!cJSON_IsString(system) && !cJSON_IsNull(system))
    {
    goto end; //String
    }
    }


    dbv0_0_38_job_comment_local_var = dbv0_0_38_job_comment_create (
        administrator && !cJSON_IsNull(administrator) ? strdup(administrator->valuestring) : NULL,
        job && !cJSON_IsNull(job) ? strdup(job->valuestring) : NULL,
        system && !cJSON_IsNull(system) ? strdup(system->valuestring) : NULL
        );

    return dbv0_0_38_job_comment_local_var;
end:
    return NULL;

}
