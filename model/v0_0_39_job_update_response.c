#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_update_response.h"



v0_0_39_job_update_response_t *v0_0_39_job_update_response_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *results
    ) {
    v0_0_39_job_update_response_t *v0_0_39_job_update_response_local_var = malloc(sizeof(v0_0_39_job_update_response_t));
    if (!v0_0_39_job_update_response_local_var) {
        return NULL;
    }
    v0_0_39_job_update_response_local_var->meta = meta;
    v0_0_39_job_update_response_local_var->errors = errors;
    v0_0_39_job_update_response_local_var->warnings = warnings;
    v0_0_39_job_update_response_local_var->results = results;

    return v0_0_39_job_update_response_local_var;
}


void v0_0_39_job_update_response_free(v0_0_39_job_update_response_t *v0_0_39_job_update_response) {
    if(NULL == v0_0_39_job_update_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_update_response->meta) {
        v0_0_39_meta_free(v0_0_39_job_update_response->meta);
        v0_0_39_job_update_response->meta = NULL;
    }
    if (v0_0_39_job_update_response->errors) {
        list_ForEach(listEntry, v0_0_39_job_update_response->errors) {
            v0_0_39_error_free(listEntry->data);
        }
        list_freeList(v0_0_39_job_update_response->errors);
        v0_0_39_job_update_response->errors = NULL;
    }
    if (v0_0_39_job_update_response->warnings) {
        list_ForEach(listEntry, v0_0_39_job_update_response->warnings) {
            v0_0_39_warning_free(listEntry->data);
        }
        list_freeList(v0_0_39_job_update_response->warnings);
        v0_0_39_job_update_response->warnings = NULL;
    }
    if (v0_0_39_job_update_response->results) {
        list_ForEach(listEntry, v0_0_39_job_update_response->results) {
            v0_0_39_job_array_response_msg_inner_free(listEntry->data);
        }
        list_freeList(v0_0_39_job_update_response->results);
        v0_0_39_job_update_response->results = NULL;
    }
    free(v0_0_39_job_update_response);
}

cJSON *v0_0_39_job_update_response_convertToJSON(v0_0_39_job_update_response_t *v0_0_39_job_update_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_update_response->meta
    if(v0_0_39_job_update_response->meta) {
    cJSON *meta_local_JSON = v0_0_39_meta_convertToJSON(v0_0_39_job_update_response->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_update_response->errors
    if(v0_0_39_job_update_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_39_job_update_response->errors) {
    list_ForEach(errorsListEntry, v0_0_39_job_update_response->errors) {
    cJSON *itemLocal = v0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_39_job_update_response->warnings
    if(v0_0_39_job_update_response->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (v0_0_39_job_update_response->warnings) {
    list_ForEach(warningsListEntry, v0_0_39_job_update_response->warnings) {
    cJSON *itemLocal = v0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // v0_0_39_job_update_response->results
    if(v0_0_39_job_update_response->results) {
    cJSON *results = cJSON_AddArrayToObject(item, "results");
    if(results == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultsListEntry;
    if (v0_0_39_job_update_response->results) {
    list_ForEach(resultsListEntry, v0_0_39_job_update_response->results) {
    cJSON *itemLocal = v0_0_39_job_array_response_msg_inner_convertToJSON(resultsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(results, itemLocal);
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

v0_0_39_job_update_response_t *v0_0_39_job_update_response_parseFromJSON(cJSON *v0_0_39_job_update_responseJSON){

    v0_0_39_job_update_response_t *v0_0_39_job_update_response_local_var = NULL;

    // define the local variable for v0_0_39_job_update_response->meta
    v0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for v0_0_39_job_update_response->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_39_job_update_response->warnings
    list_t *warningsList = NULL;

    // define the local list for v0_0_39_job_update_response->results
    list_t *resultsList = NULL;

    // v0_0_39_job_update_response->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_update_responseJSON, "meta");
    if (meta) { 
    meta_local_nonprim = v0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // v0_0_39_job_update_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_update_responseJSON, "errors");
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

    // v0_0_39_job_update_response->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_update_responseJSON, "warnings");
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

    // v0_0_39_job_update_response->results
    cJSON *results = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_update_responseJSON, "results");
    if (results) { 
    cJSON *results_local_nonprimitive = NULL;
    if(!cJSON_IsArray(results)){
        goto end; //nonprimitive container
    }

    resultsList = list_createList();

    cJSON_ArrayForEach(results_local_nonprimitive,results )
    {
        if(!cJSON_IsObject(results_local_nonprimitive)){
            goto end;
        }
        v0_0_39_job_array_response_msg_inner_t *resultsItem = v0_0_39_job_array_response_msg_inner_parseFromJSON(results_local_nonprimitive);

        list_addElement(resultsList, resultsItem);
    }
    }


    v0_0_39_job_update_response_local_var = v0_0_39_job_update_response_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        results ? resultsList : NULL
        );

    return v0_0_39_job_update_response_local_var;
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
    if (resultsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, resultsList) {
            v0_0_39_job_array_response_msg_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(resultsList);
        resultsList = NULL;
    }
    return NULL;

}
