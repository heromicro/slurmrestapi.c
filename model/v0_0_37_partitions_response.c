#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_partitions_response.h"



v0_0_37_partitions_response_t *v0_0_37_partitions_response_create(
    list_t *errors,
    list_t *partitions
    ) {
    v0_0_37_partitions_response_t *v0_0_37_partitions_response_local_var = malloc(sizeof(v0_0_37_partitions_response_t));
    if (!v0_0_37_partitions_response_local_var) {
        return NULL;
    }
    v0_0_37_partitions_response_local_var->errors = errors;
    v0_0_37_partitions_response_local_var->partitions = partitions;

    return v0_0_37_partitions_response_local_var;
}


void v0_0_37_partitions_response_free(v0_0_37_partitions_response_t *v0_0_37_partitions_response) {
    if(NULL == v0_0_37_partitions_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_partitions_response->errors) {
        list_ForEach(listEntry, v0_0_37_partitions_response->errors) {
            v0_0_37_error_free(listEntry->data);
        }
        list_freeList(v0_0_37_partitions_response->errors);
        v0_0_37_partitions_response->errors = NULL;
    }
    if (v0_0_37_partitions_response->partitions) {
        list_ForEach(listEntry, v0_0_37_partitions_response->partitions) {
            v0_0_37_partition_free(listEntry->data);
        }
        list_freeList(v0_0_37_partitions_response->partitions);
        v0_0_37_partitions_response->partitions = NULL;
    }
    free(v0_0_37_partitions_response);
}

cJSON *v0_0_37_partitions_response_convertToJSON(v0_0_37_partitions_response_t *v0_0_37_partitions_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_partitions_response->errors
    if(v0_0_37_partitions_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_37_partitions_response->errors) {
    list_ForEach(errorsListEntry, v0_0_37_partitions_response->errors) {
    cJSON *itemLocal = v0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_37_partitions_response->partitions
    if(v0_0_37_partitions_response->partitions) {
    cJSON *partitions = cJSON_AddArrayToObject(item, "partitions");
    if(partitions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *partitionsListEntry;
    if (v0_0_37_partitions_response->partitions) {
    list_ForEach(partitionsListEntry, v0_0_37_partitions_response->partitions) {
    cJSON *itemLocal = v0_0_37_partition_convertToJSON(partitionsListEntry->data);
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

v0_0_37_partitions_response_t *v0_0_37_partitions_response_parseFromJSON(cJSON *v0_0_37_partitions_responseJSON){

    v0_0_37_partitions_response_t *v0_0_37_partitions_response_local_var = NULL;

    // define the local list for v0_0_37_partitions_response->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_37_partitions_response->partitions
    list_t *partitionsList = NULL;

    // v0_0_37_partitions_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitions_responseJSON, "errors");
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

    // v0_0_37_partitions_response->partitions
    cJSON *partitions = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitions_responseJSON, "partitions");
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
        v0_0_37_partition_t *partitionsItem = v0_0_37_partition_parseFromJSON(partitions_local_nonprimitive);

        list_addElement(partitionsList, partitionsItem);
    }
    }


    v0_0_37_partitions_response_local_var = v0_0_37_partitions_response_create (
        errors ? errorsList : NULL,
        partitions ? partitionsList : NULL
        );

    return v0_0_37_partitions_response_local_var;
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
    if (partitionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, partitionsList) {
            v0_0_37_partition_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(partitionsList);
        partitionsList = NULL;
    }
    return NULL;

}
