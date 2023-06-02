#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_info.h"



dbv0_0_37_job_info_t *dbv0_0_37_job_info_create(
    list_t *errors,
    list_t *jobs
    ) {
    dbv0_0_37_job_info_t *dbv0_0_37_job_info_local_var = malloc(sizeof(dbv0_0_37_job_info_t));
    if (!dbv0_0_37_job_info_local_var) {
        return NULL;
    }
    dbv0_0_37_job_info_local_var->errors = errors;
    dbv0_0_37_job_info_local_var->jobs = jobs;

    return dbv0_0_37_job_info_local_var;
}


void dbv0_0_37_job_info_free(dbv0_0_37_job_info_t *dbv0_0_37_job_info) {
    if(NULL == dbv0_0_37_job_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_info->errors) {
        list_ForEach(listEntry, dbv0_0_37_job_info->errors) {
            dbv0_0_37_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_job_info->errors);
        dbv0_0_37_job_info->errors = NULL;
    }
    if (dbv0_0_37_job_info->jobs) {
        list_ForEach(listEntry, dbv0_0_37_job_info->jobs) {
            dbv0_0_37_job_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_job_info->jobs);
        dbv0_0_37_job_info->jobs = NULL;
    }
    free(dbv0_0_37_job_info);
}

cJSON *dbv0_0_37_job_info_convertToJSON(dbv0_0_37_job_info_t *dbv0_0_37_job_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_info->errors
    if(dbv0_0_37_job_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_37_job_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_37_job_info->errors) {
    cJSON *itemLocal = dbv0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_37_job_info->jobs
    if(dbv0_0_37_job_info->jobs) {
    cJSON *jobs = cJSON_AddArrayToObject(item, "jobs");
    if(jobs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobsListEntry;
    if (dbv0_0_37_job_info->jobs) {
    list_ForEach(jobsListEntry, dbv0_0_37_job_info->jobs) {
    cJSON *itemLocal = dbv0_0_37_job_convertToJSON(jobsListEntry->data);
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

dbv0_0_37_job_info_t *dbv0_0_37_job_info_parseFromJSON(cJSON *dbv0_0_37_job_infoJSON){

    dbv0_0_37_job_info_t *dbv0_0_37_job_info_local_var = NULL;

    // define the local list for dbv0_0_37_job_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_37_job_info->jobs
    list_t *jobsList = NULL;

    // dbv0_0_37_job_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_infoJSON, "errors");
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
        dbv0_0_37_error_t *errorsItem = dbv0_0_37_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // dbv0_0_37_job_info->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_infoJSON, "jobs");
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
        dbv0_0_37_job_t *jobsItem = dbv0_0_37_job_parseFromJSON(jobs_local_nonprimitive);

        list_addElement(jobsList, jobsItem);
    }
    }


    dbv0_0_37_job_info_local_var = dbv0_0_37_job_info_create (
        errors ? errorsList : NULL,
        jobs ? jobsList : NULL
        );

    return dbv0_0_37_job_info_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_37_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (jobsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobsList) {
            dbv0_0_37_job_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobsList);
        jobsList = NULL;
    }
    return NULL;

}
