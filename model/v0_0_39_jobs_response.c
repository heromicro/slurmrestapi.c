#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_jobs_response.h"



v0_0_39_jobs_response_t *v0_0_39_jobs_response_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *jobs
    ) {
    v0_0_39_jobs_response_t *v0_0_39_jobs_response_local_var = malloc(sizeof(v0_0_39_jobs_response_t));
    if (!v0_0_39_jobs_response_local_var) {
        return NULL;
    }
    v0_0_39_jobs_response_local_var->meta = meta;
    v0_0_39_jobs_response_local_var->errors = errors;
    v0_0_39_jobs_response_local_var->warnings = warnings;
    v0_0_39_jobs_response_local_var->jobs = jobs;

    return v0_0_39_jobs_response_local_var;
}


void v0_0_39_jobs_response_free(v0_0_39_jobs_response_t *v0_0_39_jobs_response) {
    if(NULL == v0_0_39_jobs_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_jobs_response->meta) {
        v0_0_39_meta_free(v0_0_39_jobs_response->meta);
        v0_0_39_jobs_response->meta = NULL;
    }
    if (v0_0_39_jobs_response->errors) {
        list_ForEach(listEntry, v0_0_39_jobs_response->errors) {
            v0_0_39_error_free(listEntry->data);
        }
        list_freeList(v0_0_39_jobs_response->errors);
        v0_0_39_jobs_response->errors = NULL;
    }
    if (v0_0_39_jobs_response->warnings) {
        list_ForEach(listEntry, v0_0_39_jobs_response->warnings) {
            v0_0_39_warning_free(listEntry->data);
        }
        list_freeList(v0_0_39_jobs_response->warnings);
        v0_0_39_jobs_response->warnings = NULL;
    }
    if (v0_0_39_jobs_response->jobs) {
        list_ForEach(listEntry, v0_0_39_jobs_response->jobs) {
            v0_0_39_job_info_free(listEntry->data);
        }
        list_freeList(v0_0_39_jobs_response->jobs);
        v0_0_39_jobs_response->jobs = NULL;
    }
    free(v0_0_39_jobs_response);
}

cJSON *v0_0_39_jobs_response_convertToJSON(v0_0_39_jobs_response_t *v0_0_39_jobs_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_jobs_response->meta
    if(v0_0_39_jobs_response->meta) {
    cJSON *meta_local_JSON = v0_0_39_meta_convertToJSON(v0_0_39_jobs_response->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_jobs_response->errors
    if(v0_0_39_jobs_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_39_jobs_response->errors) {
    list_ForEach(errorsListEntry, v0_0_39_jobs_response->errors) {
    cJSON *itemLocal = v0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_39_jobs_response->warnings
    if(v0_0_39_jobs_response->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (v0_0_39_jobs_response->warnings) {
    list_ForEach(warningsListEntry, v0_0_39_jobs_response->warnings) {
    cJSON *itemLocal = v0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // v0_0_39_jobs_response->jobs
    if(v0_0_39_jobs_response->jobs) {
    cJSON *jobs = cJSON_AddArrayToObject(item, "jobs");
    if(jobs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobsListEntry;
    if (v0_0_39_jobs_response->jobs) {
    list_ForEach(jobsListEntry, v0_0_39_jobs_response->jobs) {
    cJSON *itemLocal = v0_0_39_job_info_convertToJSON(jobsListEntry->data);
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

v0_0_39_jobs_response_t *v0_0_39_jobs_response_parseFromJSON(cJSON *v0_0_39_jobs_responseJSON){

    v0_0_39_jobs_response_t *v0_0_39_jobs_response_local_var = NULL;

    // define the local variable for v0_0_39_jobs_response->meta
    v0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for v0_0_39_jobs_response->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_39_jobs_response->warnings
    list_t *warningsList = NULL;

    // define the local list for v0_0_39_jobs_response->jobs
    list_t *jobsList = NULL;

    // v0_0_39_jobs_response->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobs_responseJSON, "meta");
    if (meta) { 
    meta_local_nonprim = v0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // v0_0_39_jobs_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobs_responseJSON, "errors");
    if (errors) { 
    cJSON *errors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(errors)){
        goto end; //nonprimitive container
    }

    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local_nonprimitive,errors )
    {
        if(!cJSON_IsObject(errors_local_nonprimitive)){
            goto end;
        }
        v0_0_39_error_t *errorsItem = v0_0_39_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // v0_0_39_jobs_response->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobs_responseJSON, "warnings");
    if (warnings) { 
    cJSON *warnings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(warnings)){
        goto end; //nonprimitive container
    }

    warningsList = list_createList();

    cJSON_ArrayForEach(warnings_local_nonprimitive,warnings )
    {
        if(!cJSON_IsObject(warnings_local_nonprimitive)){
            goto end;
        }
        v0_0_39_warning_t *warningsItem = v0_0_39_warning_parseFromJSON(warnings_local_nonprimitive);

        list_addElement(warningsList, warningsItem);
    }
    }

    // v0_0_39_jobs_response->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobs_responseJSON, "jobs");
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
        v0_0_39_job_info_t *jobsItem = v0_0_39_job_info_parseFromJSON(jobs_local_nonprimitive);

        list_addElement(jobsList, jobsItem);
    }
    }


    v0_0_39_jobs_response_local_var = v0_0_39_jobs_response_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        jobs ? jobsList : NULL
        );

    return v0_0_39_jobs_response_local_var;
end:
    if (meta_local_nonprim) {
        v0_0_39_meta_free(meta_local_nonprim);
        meta_local_nonprim = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            v0_0_39_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (warningsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warningsList) {
            v0_0_39_warning_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warningsList);
        warningsList = NULL;
    }
    if (jobsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobsList) {
            v0_0_39_job_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobsList);
        jobsList = NULL;
    }
    return NULL;

}
