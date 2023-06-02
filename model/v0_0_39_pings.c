#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_pings.h"



v0_0_39_pings_t *v0_0_39_pings_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *pings
    ) {
    v0_0_39_pings_t *v0_0_39_pings_local_var = malloc(sizeof(v0_0_39_pings_t));
    if (!v0_0_39_pings_local_var) {
        return NULL;
    }
    v0_0_39_pings_local_var->meta = meta;
    v0_0_39_pings_local_var->errors = errors;
    v0_0_39_pings_local_var->warnings = warnings;
    v0_0_39_pings_local_var->pings = pings;

    return v0_0_39_pings_local_var;
}


void v0_0_39_pings_free(v0_0_39_pings_t *v0_0_39_pings) {
    if(NULL == v0_0_39_pings){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_pings->meta) {
        v0_0_39_meta_free(v0_0_39_pings->meta);
        v0_0_39_pings->meta = NULL;
    }
    if (v0_0_39_pings->errors) {
        list_ForEach(listEntry, v0_0_39_pings->errors) {
            v0_0_39_error_free(listEntry->data);
        }
        list_freeList(v0_0_39_pings->errors);
        v0_0_39_pings->errors = NULL;
    }
    if (v0_0_39_pings->warnings) {
        list_ForEach(listEntry, v0_0_39_pings->warnings) {
            v0_0_39_warning_free(listEntry->data);
        }
        list_freeList(v0_0_39_pings->warnings);
        v0_0_39_pings->warnings = NULL;
    }
    if (v0_0_39_pings->pings) {
        list_ForEach(listEntry, v0_0_39_pings->pings) {
            v0_0_39_controller_ping_free(listEntry->data);
        }
        list_freeList(v0_0_39_pings->pings);
        v0_0_39_pings->pings = NULL;
    }
    free(v0_0_39_pings);
}

cJSON *v0_0_39_pings_convertToJSON(v0_0_39_pings_t *v0_0_39_pings) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_pings->meta
    if(v0_0_39_pings->meta) {
    cJSON *meta_local_JSON = v0_0_39_meta_convertToJSON(v0_0_39_pings->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_pings->errors
    if(v0_0_39_pings->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_39_pings->errors) {
    list_ForEach(errorsListEntry, v0_0_39_pings->errors) {
    cJSON *itemLocal = v0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_39_pings->warnings
    if(v0_0_39_pings->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (v0_0_39_pings->warnings) {
    list_ForEach(warningsListEntry, v0_0_39_pings->warnings) {
    cJSON *itemLocal = v0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // v0_0_39_pings->pings
    if(v0_0_39_pings->pings) {
    cJSON *pings = cJSON_AddArrayToObject(item, "pings");
    if(pings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pingsListEntry;
    if (v0_0_39_pings->pings) {
    list_ForEach(pingsListEntry, v0_0_39_pings->pings) {
    cJSON *itemLocal = v0_0_39_controller_ping_convertToJSON(pingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(pings, itemLocal);
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

v0_0_39_pings_t *v0_0_39_pings_parseFromJSON(cJSON *v0_0_39_pingsJSON){

    v0_0_39_pings_t *v0_0_39_pings_local_var = NULL;

    // define the local variable for v0_0_39_pings->meta
    v0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for v0_0_39_pings->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_39_pings->warnings
    list_t *warningsList = NULL;

    // define the local list for v0_0_39_pings->pings
    list_t *pingsList = NULL;

    // v0_0_39_pings->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(v0_0_39_pingsJSON, "meta");
    if (meta) { 
    meta_local_nonprim = v0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // v0_0_39_pings->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_39_pingsJSON, "errors");
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

    // v0_0_39_pings->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(v0_0_39_pingsJSON, "warnings");
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

    // v0_0_39_pings->pings
    cJSON *pings = cJSON_GetObjectItemCaseSensitive(v0_0_39_pingsJSON, "pings");
    if (pings) { 
    cJSON *pings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(pings)){
        goto end; //nonprimitive container
    }

    pingsList = list_createList();

    cJSON_ArrayForEach(pings_local_nonprimitive,pings )
    {
        if(!cJSON_IsObject(pings_local_nonprimitive)){
            goto end;
        }
        v0_0_39_controller_ping_t *pingsItem = v0_0_39_controller_ping_parseFromJSON(pings_local_nonprimitive);

        list_addElement(pingsList, pingsItem);
    }
    }


    v0_0_39_pings_local_var = v0_0_39_pings_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        pings ? pingsList : NULL
        );

    return v0_0_39_pings_local_var;
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
    if (pingsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pingsList) {
            v0_0_39_controller_ping_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pingsList);
        pingsList = NULL;
    }
    return NULL;

}
