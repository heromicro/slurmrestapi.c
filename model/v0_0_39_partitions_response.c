#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partitions_response.h"



v0_0_39_partitions_response_t *v0_0_39_partitions_response_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *partitions
    ) {
    v0_0_39_partitions_response_t *v0_0_39_partitions_response_local_var = malloc(sizeof(v0_0_39_partitions_response_t));
    if (!v0_0_39_partitions_response_local_var) {
        return NULL;
    }
    v0_0_39_partitions_response_local_var->meta = meta;
    v0_0_39_partitions_response_local_var->errors = errors;
    v0_0_39_partitions_response_local_var->warnings = warnings;
    v0_0_39_partitions_response_local_var->partitions = partitions;

    return v0_0_39_partitions_response_local_var;
}


void v0_0_39_partitions_response_free(v0_0_39_partitions_response_t *v0_0_39_partitions_response) {
    if(NULL == v0_0_39_partitions_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partitions_response->meta) {
        v0_0_39_meta_free(v0_0_39_partitions_response->meta);
        v0_0_39_partitions_response->meta = NULL;
    }
    if (v0_0_39_partitions_response->errors) {
        list_ForEach(listEntry, v0_0_39_partitions_response->errors) {
            v0_0_39_error_free(listEntry->data);
        }
        list_freeList(v0_0_39_partitions_response->errors);
        v0_0_39_partitions_response->errors = NULL;
    }
    if (v0_0_39_partitions_response->warnings) {
        list_ForEach(listEntry, v0_0_39_partitions_response->warnings) {
            v0_0_39_warning_free(listEntry->data);
        }
        list_freeList(v0_0_39_partitions_response->warnings);
        v0_0_39_partitions_response->warnings = NULL;
    }
    if (v0_0_39_partitions_response->partitions) {
        list_ForEach(listEntry, v0_0_39_partitions_response->partitions) {
            v0_0_39_partition_info_free(listEntry->data);
        }
        list_freeList(v0_0_39_partitions_response->partitions);
        v0_0_39_partitions_response->partitions = NULL;
    }
    free(v0_0_39_partitions_response);
}

cJSON *v0_0_39_partitions_response_convertToJSON(v0_0_39_partitions_response_t *v0_0_39_partitions_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partitions_response->meta
    if(v0_0_39_partitions_response->meta) {
    cJSON *meta_local_JSON = v0_0_39_meta_convertToJSON(v0_0_39_partitions_response->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partitions_response->errors
    if(v0_0_39_partitions_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_39_partitions_response->errors) {
    list_ForEach(errorsListEntry, v0_0_39_partitions_response->errors) {
    cJSON *itemLocal = v0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_39_partitions_response->warnings
    if(v0_0_39_partitions_response->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (v0_0_39_partitions_response->warnings) {
    list_ForEach(warningsListEntry, v0_0_39_partitions_response->warnings) {
    cJSON *itemLocal = v0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // v0_0_39_partitions_response->partitions
    if(v0_0_39_partitions_response->partitions) {
    cJSON *partitions = cJSON_AddArrayToObject(item, "partitions");
    if(partitions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *partitionsListEntry;
    if (v0_0_39_partitions_response->partitions) {
    list_ForEach(partitionsListEntry, v0_0_39_partitions_response->partitions) {
    cJSON *itemLocal = v0_0_39_partition_info_convertToJSON(partitionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(partitions, itemLocal);
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

v0_0_39_partitions_response_t *v0_0_39_partitions_response_parseFromJSON(cJSON *v0_0_39_partitions_responseJSON){

    v0_0_39_partitions_response_t *v0_0_39_partitions_response_local_var = NULL;

    // define the local variable for v0_0_39_partitions_response->meta
    v0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for v0_0_39_partitions_response->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_39_partitions_response->warnings
    list_t *warningsList = NULL;

    // define the local list for v0_0_39_partitions_response->partitions
    list_t *partitionsList = NULL;

    // v0_0_39_partitions_response->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(v0_0_39_partitions_responseJSON, "meta");
    if (meta) { 
    meta_local_nonprim = v0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // v0_0_39_partitions_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_39_partitions_responseJSON, "errors");
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

    // v0_0_39_partitions_response->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(v0_0_39_partitions_responseJSON, "warnings");
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

    // v0_0_39_partitions_response->partitions
    cJSON *partitions = cJSON_GetObjectItemCaseSensitive(v0_0_39_partitions_responseJSON, "partitions");
    if (partitions) { 
    cJSON *partitions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(partitions)){
        goto end; //nonprimitive container
    }

    partitionsList = list_createList();

    cJSON_ArrayForEach(partitions_local_nonprimitive,partitions )
    {
        if(!cJSON_IsObject(partitions_local_nonprimitive)){
            goto end;
        }
        v0_0_39_partition_info_t *partitionsItem = v0_0_39_partition_info_parseFromJSON(partitions_local_nonprimitive);

        list_addElement(partitionsList, partitionsItem);
    }
    }


    v0_0_39_partitions_response_local_var = v0_0_39_partitions_response_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        partitions ? partitionsList : NULL
        );

    return v0_0_39_partitions_response_local_var;
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
    if (partitionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, partitionsList) {
            v0_0_39_partition_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(partitionsList);
        partitionsList = NULL;
    }
    return NULL;

}
