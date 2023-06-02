#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_job_submission_response.h"



v0_0_37_job_submission_response_t *v0_0_37_job_submission_response_create(
    list_t *errors,
    int job_id,
    char *step_id,
    char *job_submit_user_msg
    ) {
    v0_0_37_job_submission_response_t *v0_0_37_job_submission_response_local_var = malloc(sizeof(v0_0_37_job_submission_response_t));
    if (!v0_0_37_job_submission_response_local_var) {
        return NULL;
    }
    v0_0_37_job_submission_response_local_var->errors = errors;
    v0_0_37_job_submission_response_local_var->job_id = job_id;
    v0_0_37_job_submission_response_local_var->step_id = step_id;
    v0_0_37_job_submission_response_local_var->job_submit_user_msg = job_submit_user_msg;

    return v0_0_37_job_submission_response_local_var;
}


void v0_0_37_job_submission_response_free(v0_0_37_job_submission_response_t *v0_0_37_job_submission_response) {
    if(NULL == v0_0_37_job_submission_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_job_submission_response->errors) {
        list_ForEach(listEntry, v0_0_37_job_submission_response->errors) {
            v0_0_37_error_free(listEntry->data);
        }
        list_freeList(v0_0_37_job_submission_response->errors);
        v0_0_37_job_submission_response->errors = NULL;
    }
    if (v0_0_37_job_submission_response->step_id) {
        free(v0_0_37_job_submission_response->step_id);
        v0_0_37_job_submission_response->step_id = NULL;
    }
    if (v0_0_37_job_submission_response->job_submit_user_msg) {
        free(v0_0_37_job_submission_response->job_submit_user_msg);
        v0_0_37_job_submission_response->job_submit_user_msg = NULL;
    }
    free(v0_0_37_job_submission_response);
}

cJSON *v0_0_37_job_submission_response_convertToJSON(v0_0_37_job_submission_response_t *v0_0_37_job_submission_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_job_submission_response->errors
    if(v0_0_37_job_submission_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_37_job_submission_response->errors) {
    list_ForEach(errorsListEntry, v0_0_37_job_submission_response->errors) {
    cJSON *itemLocal = v0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_37_job_submission_response->job_id
    if(v0_0_37_job_submission_response->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_37_job_submission_response->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_job_submission_response->step_id
    if(v0_0_37_job_submission_response->step_id) {
    if(cJSON_AddStringToObject(item, "step_id", v0_0_37_job_submission_response->step_id) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_job_submission_response->job_submit_user_msg
    if(v0_0_37_job_submission_response->job_submit_user_msg) {
    if(cJSON_AddStringToObject(item, "job_submit_user_msg", v0_0_37_job_submission_response->job_submit_user_msg) == NULL) {
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

v0_0_37_job_submission_response_t *v0_0_37_job_submission_response_parseFromJSON(cJSON *v0_0_37_job_submission_responseJSON){

    v0_0_37_job_submission_response_t *v0_0_37_job_submission_response_local_var = NULL;

    // define the local list for v0_0_37_job_submission_response->errors
    list_t *errorsList = NULL;

    // v0_0_37_job_submission_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_submission_responseJSON, "errors");
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
        v0_0_37_error_t *errorsItem = v0_0_37_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // v0_0_37_job_submission_response->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_submission_responseJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_job_submission_response->step_id
    cJSON *step_id = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_submission_responseJSON, "step_id");
    if (step_id) { 
    if(!cJSON_IsString(step_id) && !cJSON_IsNull(step_id))
    {
    goto end; //String
    }
    }

    // v0_0_37_job_submission_response->job_submit_user_msg
    cJSON *job_submit_user_msg = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_submission_responseJSON, "job_submit_user_msg");
    if (job_submit_user_msg) { 
    if(!cJSON_IsString(job_submit_user_msg) && !cJSON_IsNull(job_submit_user_msg))
    {
    goto end; //String
    }
    }


    v0_0_37_job_submission_response_local_var = v0_0_37_job_submission_response_create (
        errors ? errorsList : NULL,
        job_id ? job_id->valuedouble : 0,
        step_id && !cJSON_IsNull(step_id) ? strdup(step_id->valuestring) : NULL,
        job_submit_user_msg && !cJSON_IsNull(job_submit_user_msg) ? strdup(job_submit_user_msg->valuestring) : NULL
        );

    return v0_0_37_job_submission_response_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            v0_0_37_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    return NULL;

}
