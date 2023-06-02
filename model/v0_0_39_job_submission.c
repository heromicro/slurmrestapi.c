#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_submission.h"



v0_0_39_job_submission_t *v0_0_39_job_submission_create(
    char *script,
    v0_0_39_job_desc_msg_t *job,
    list_t *jobs
    ) {
    v0_0_39_job_submission_t *v0_0_39_job_submission_local_var = malloc(sizeof(v0_0_39_job_submission_t));
    if (!v0_0_39_job_submission_local_var) {
        return NULL;
    }
    v0_0_39_job_submission_local_var->script = script;
    v0_0_39_job_submission_local_var->job = job;
    v0_0_39_job_submission_local_var->jobs = jobs;

    return v0_0_39_job_submission_local_var;
}


void v0_0_39_job_submission_free(v0_0_39_job_submission_t *v0_0_39_job_submission) {
    if(NULL == v0_0_39_job_submission){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_submission->script) {
        free(v0_0_39_job_submission->script);
        v0_0_39_job_submission->script = NULL;
    }
    if (v0_0_39_job_submission->job) {
        v0_0_39_job_desc_msg_free(v0_0_39_job_submission->job);
        v0_0_39_job_submission->job = NULL;
    }
    if (v0_0_39_job_submission->jobs) {
        list_ForEach(listEntry, v0_0_39_job_submission->jobs) {
            v0_0_39_job_desc_msg_free(listEntry->data);
        }
        list_freeList(v0_0_39_job_submission->jobs);
        v0_0_39_job_submission->jobs = NULL;
    }
    free(v0_0_39_job_submission);
}

cJSON *v0_0_39_job_submission_convertToJSON(v0_0_39_job_submission_t *v0_0_39_job_submission) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_submission->script
    if(v0_0_39_job_submission->script) {
    if(cJSON_AddStringToObject(item, "script", v0_0_39_job_submission->script) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_submission->job
    if(v0_0_39_job_submission->job) {
    cJSON *job_local_JSON = v0_0_39_job_desc_msg_convertToJSON(v0_0_39_job_submission->job);
    if(job_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "job", job_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_submission->jobs
    if(v0_0_39_job_submission->jobs) {
    cJSON *jobs = cJSON_AddArrayToObject(item, "jobs");
    if(jobs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobsListEntry;
    if (v0_0_39_job_submission->jobs) {
    list_ForEach(jobsListEntry, v0_0_39_job_submission->jobs) {
    cJSON *itemLocal = v0_0_39_job_desc_msg_convertToJSON(jobsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(jobs, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_job_submission_t *v0_0_39_job_submission_parseFromJSON(cJSON *v0_0_39_job_submissionJSON){

    v0_0_39_job_submission_t *v0_0_39_job_submission_local_var = NULL;

    // define the local variable for v0_0_39_job_submission->job
    v0_0_39_job_desc_msg_t *job_local_nonprim = NULL;

    // define the local list for v0_0_39_job_submission->jobs
    list_t *jobsList = NULL;

    // v0_0_39_job_submission->script
    cJSON *script = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_submissionJSON, "script");
    if (script) { 
    if(!cJSON_IsString(script) && !cJSON_IsNull(script))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_submission->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_submissionJSON, "job");
    if (job) { 
    job_local_nonprim = v0_0_39_job_desc_msg_parseFromJSON(job); //nonprimitive
    }

    // v0_0_39_job_submission->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_submissionJSON, "jobs");
    if (jobs) { 
    cJSON *jobs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(jobs)){
        goto end; //nonprimitive container
    }

    jobsList = list_createList();

    cJSON_ArrayForEach(jobs_local_nonprimitive,jobs )
    {
        if(!cJSON_IsObject(jobs_local_nonprimitive)){
            goto end;
        }
        v0_0_39_job_desc_msg_t *jobsItem = v0_0_39_job_desc_msg_parseFromJSON(jobs_local_nonprimitive);

        list_addElement(jobsList, jobsItem);
    }
    }


    v0_0_39_job_submission_local_var = v0_0_39_job_submission_create (
        script && !cJSON_IsNull(script) ? strdup(script->valuestring) : NULL,
        job ? job_local_nonprim : NULL,
        jobs ? jobsList : NULL
        );

    return v0_0_39_job_submission_local_var;
end:
    if (job_local_nonprim) {
        v0_0_39_job_desc_msg_free(job_local_nonprim);
        job_local_nonprim = NULL;
    }
    if (jobsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobsList) {
            v0_0_39_job_desc_msg_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobsList);
        jobsList = NULL;
    }
    return NULL;

}
