#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status.h"



status_t *status_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings
    ) {
    status_t *status_local_var = malloc(sizeof(status_t));
    if (!status_local_var) {
        return NULL;
    }
    status_local_var->meta = meta;
    status_local_var->errors = errors;
    status_local_var->warnings = warnings;

    return status_local_var;
}


void status_free(status_t *status) {
    if(NULL == status){
        return ;
    }
    listEntry_t *listEntry;
    if (status->meta) {
        dbv0_0_39_meta_free(status->meta);
        status->meta = NULL;
    }
    if (status->errors) {
        list_ForEach(listEntry, status->errors) {
            dbv0_0_39_error_free(listEntry->data);
        }
        list_freeList(status->errors);
        status->errors = NULL;
    }
    if (status->warnings) {
        list_ForEach(listEntry, status->warnings) {
            dbv0_0_39_warning_free(listEntry->data);
        }
        list_freeList(status->warnings);
        status->warnings = NULL;
    }
    free(status);
}

cJSON *status_convertToJSON(status_t *status) {
    cJSON *item = cJSON_CreateObject();

    // status->meta
    if(status->meta) {
    cJSON *meta_local_JSON = dbv0_0_39_meta_convertToJSON(status->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // status->errors
    if(status->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (status->errors) {
    list_ForEach(errorsListEntry, status->errors) {
    cJSON *itemLocal = dbv0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // status->warnings
    if(status->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (status->warnings) {
    list_ForEach(warningsListEntry, status->warnings) {
    cJSON *itemLocal = dbv0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
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

status_t *status_parseFromJSON(cJSON *statusJSON){

    status_t *status_local_var = NULL;

    // define the local variable for status->meta
    dbv0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for status->errors
    list_t *errorsList = NULL;

    // define the local list for status->warnings
    list_t *warningsList = NULL;

    // status->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(statusJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // status->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(statusJSON, "errors");
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
        dbv0_0_39_error_t *errorsItem = dbv0_0_39_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // status->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(statusJSON, "warnings");
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
        dbv0_0_39_warning_t *warningsItem = dbv0_0_39_warning_parseFromJSON(warnings_local_nonprimitive);

        list_addElement(warningsList, warningsItem);
    }
    }


    status_local_var = status_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL
        );

    return status_local_var;
end:
    if (meta_local_nonprim) {
        dbv0_0_39_meta_free(meta_local_nonprim);
        meta_local_nonprim = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_39_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (warningsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warningsList) {
            dbv0_0_39_warning_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warningsList);
        warningsList = NULL;
    }
    return NULL;

}
