#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_response_associations_delete.h"



dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *removed_associations
    ) {
    dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete_local_var = malloc(sizeof(dbv0_0_39_response_associations_delete_t));
    if (!dbv0_0_39_response_associations_delete_local_var) {
        return NULL;
    }
    dbv0_0_39_response_associations_delete_local_var->meta = meta;
    dbv0_0_39_response_associations_delete_local_var->errors = errors;
    dbv0_0_39_response_associations_delete_local_var->warnings = warnings;
    dbv0_0_39_response_associations_delete_local_var->removed_associations = removed_associations;

    return dbv0_0_39_response_associations_delete_local_var;
}


void dbv0_0_39_response_associations_delete_free(dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete) {
    if(NULL == dbv0_0_39_response_associations_delete){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_response_associations_delete->meta) {
        dbv0_0_39_meta_free(dbv0_0_39_response_associations_delete->meta);
        dbv0_0_39_response_associations_delete->meta = NULL;
    }
    if (dbv0_0_39_response_associations_delete->errors) {
        list_ForEach(listEntry, dbv0_0_39_response_associations_delete->errors) {
            dbv0_0_39_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_response_associations_delete->errors);
        dbv0_0_39_response_associations_delete->errors = NULL;
    }
    if (dbv0_0_39_response_associations_delete->warnings) {
        list_ForEach(listEntry, dbv0_0_39_response_associations_delete->warnings) {
            dbv0_0_39_warning_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_response_associations_delete->warnings);
        dbv0_0_39_response_associations_delete->warnings = NULL;
    }
    if (dbv0_0_39_response_associations_delete->removed_associations) {
        list_ForEach(listEntry, dbv0_0_39_response_associations_delete->removed_associations) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_39_response_associations_delete->removed_associations);
        dbv0_0_39_response_associations_delete->removed_associations = NULL;
    }
    free(dbv0_0_39_response_associations_delete);
}

cJSON *dbv0_0_39_response_associations_delete_convertToJSON(dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_response_associations_delete->meta
    if(dbv0_0_39_response_associations_delete->meta) {
    cJSON *meta_local_JSON = dbv0_0_39_meta_convertToJSON(dbv0_0_39_response_associations_delete->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_39_response_associations_delete->errors
    if(dbv0_0_39_response_associations_delete->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_39_response_associations_delete->errors) {
    list_ForEach(errorsListEntry, dbv0_0_39_response_associations_delete->errors) {
    cJSON *itemLocal = dbv0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_39_response_associations_delete->warnings
    if(dbv0_0_39_response_associations_delete->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (dbv0_0_39_response_associations_delete->warnings) {
    list_ForEach(warningsListEntry, dbv0_0_39_response_associations_delete->warnings) {
    cJSON *itemLocal = dbv0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // dbv0_0_39_response_associations_delete->removed_associations
    if(dbv0_0_39_response_associations_delete->removed_associations) {
    cJSON *removed_associations = cJSON_AddArrayToObject(item, "removed_associations");
    if(removed_associations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *removed_associationsListEntry;
    list_ForEach(removed_associationsListEntry, dbv0_0_39_response_associations_delete->removed_associations) {
    if(cJSON_AddStringToObject(removed_associations, "", (char*)removed_associationsListEntry->data) == NULL)
    {
        goto fail;
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

dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete_parseFromJSON(cJSON *dbv0_0_39_response_associations_deleteJSON){

    dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete_local_var = NULL;

    // define the local variable for dbv0_0_39_response_associations_delete->meta
    dbv0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_39_response_associations_delete->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_39_response_associations_delete->warnings
    list_t *warningsList = NULL;

    // define the local list for dbv0_0_39_response_associations_delete->removed_associations
    list_t *removed_associationsList = NULL;

    // dbv0_0_39_response_associations_delete->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_response_associations_deleteJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_39_response_associations_delete->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_response_associations_deleteJSON, "errors");
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

    // dbv0_0_39_response_associations_delete->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_response_associations_deleteJSON, "warnings");
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

    // dbv0_0_39_response_associations_delete->removed_associations
    cJSON *removed_associations = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_response_associations_deleteJSON, "removed_associations");
    if (removed_associations) { 
    cJSON *removed_associations_local = NULL;
    if(!cJSON_IsArray(removed_associations)) {
        goto end;//primitive container
    }
    removed_associationsList = list_createList();

    cJSON_ArrayForEach(removed_associations_local, removed_associations)
    {
        if(!cJSON_IsString(removed_associations_local))
        {
            goto end;
        }
        list_addElement(removed_associationsList , strdup(removed_associations_local->valuestring));
    }
    }


    dbv0_0_39_response_associations_delete_local_var = dbv0_0_39_response_associations_delete_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        removed_associations ? removed_associationsList : NULL
        );

    return dbv0_0_39_response_associations_delete_local_var;
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
    if (removed_associationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, removed_associationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(removed_associationsList);
        removed_associationsList = NULL;
    }
    return NULL;

}
