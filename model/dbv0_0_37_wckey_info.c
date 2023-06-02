#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_wckey_info.h"



dbv0_0_37_wckey_info_t *dbv0_0_37_wckey_info_create(
    list_t *errors,
    list_t *wckeys
    ) {
    dbv0_0_37_wckey_info_t *dbv0_0_37_wckey_info_local_var = malloc(sizeof(dbv0_0_37_wckey_info_t));
    if (!dbv0_0_37_wckey_info_local_var) {
        return NULL;
    }
    dbv0_0_37_wckey_info_local_var->errors = errors;
    dbv0_0_37_wckey_info_local_var->wckeys = wckeys;

    return dbv0_0_37_wckey_info_local_var;
}


void dbv0_0_37_wckey_info_free(dbv0_0_37_wckey_info_t *dbv0_0_37_wckey_info) {
    if(NULL == dbv0_0_37_wckey_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_wckey_info->errors) {
        list_ForEach(listEntry, dbv0_0_37_wckey_info->errors) {
            dbv0_0_37_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_wckey_info->errors);
        dbv0_0_37_wckey_info->errors = NULL;
    }
    if (dbv0_0_37_wckey_info->wckeys) {
        list_ForEach(listEntry, dbv0_0_37_wckey_info->wckeys) {
            dbv0_0_37_wckey_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_wckey_info->wckeys);
        dbv0_0_37_wckey_info->wckeys = NULL;
    }
    free(dbv0_0_37_wckey_info);
}

cJSON *dbv0_0_37_wckey_info_convertToJSON(dbv0_0_37_wckey_info_t *dbv0_0_37_wckey_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_wckey_info->errors
    if(dbv0_0_37_wckey_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_37_wckey_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_37_wckey_info->errors) {
    cJSON *itemLocal = dbv0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_37_wckey_info->wckeys
    if(dbv0_0_37_wckey_info->wckeys) {
    cJSON *wckeys = cJSON_AddArrayToObject(item, "wckeys");
    if(wckeys == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *wckeysListEntry;
    if (dbv0_0_37_wckey_info->wckeys) {
    list_ForEach(wckeysListEntry, dbv0_0_37_wckey_info->wckeys) {
    cJSON *itemLocal = dbv0_0_37_wckey_convertToJSON(wckeysListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(wckeys, itemLocal);
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

dbv0_0_37_wckey_info_t *dbv0_0_37_wckey_info_parseFromJSON(cJSON *dbv0_0_37_wckey_infoJSON){

    dbv0_0_37_wckey_info_t *dbv0_0_37_wckey_info_local_var = NULL;

    // define the local list for dbv0_0_37_wckey_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_37_wckey_info->wckeys
    list_t *wckeysList = NULL;

    // dbv0_0_37_wckey_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckey_infoJSON, "errors");
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

    // dbv0_0_37_wckey_info->wckeys
    cJSON *wckeys = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckey_infoJSON, "wckeys");
    if (wckeys) { 
    cJSON *wckeys_local_nonprimitive = NULL;
    if(!cJSON_IsArray(wckeys)){
        goto end; //nonprimitive container
    }

    wckeysList = list_createList();

    cJSON_ArrayForEach(wckeys_local_nonprimitive,wckeys )
    {
        if(!cJSON_IsObject(wckeys_local_nonprimitive)){
            goto end;
        }
        dbv0_0_37_wckey_t *wckeysItem = dbv0_0_37_wckey_parseFromJSON(wckeys_local_nonprimitive);

        list_addElement(wckeysList, wckeysItem);
    }
    }


    dbv0_0_37_wckey_info_local_var = dbv0_0_37_wckey_info_create (
        errors ? errorsList : NULL,
        wckeys ? wckeysList : NULL
        );

    return dbv0_0_37_wckey_info_local_var;
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
    if (wckeysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, wckeysList) {
            dbv0_0_37_wckey_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(wckeysList);
        wckeysList = NULL;
    }
    return NULL;

}
