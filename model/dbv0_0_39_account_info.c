#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_account_info.h"



dbv0_0_39_account_info_t *dbv0_0_39_account_info_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *accounts
    ) {
    dbv0_0_39_account_info_t *dbv0_0_39_account_info_local_var = malloc(sizeof(dbv0_0_39_account_info_t));
    if (!dbv0_0_39_account_info_local_var) {
        return NULL;
    }
    dbv0_0_39_account_info_local_var->meta = meta;
    dbv0_0_39_account_info_local_var->errors = errors;
    dbv0_0_39_account_info_local_var->warnings = warnings;
    dbv0_0_39_account_info_local_var->accounts = accounts;

    return dbv0_0_39_account_info_local_var;
}


void dbv0_0_39_account_info_free(dbv0_0_39_account_info_t *dbv0_0_39_account_info) {
    if(NULL == dbv0_0_39_account_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_account_info->meta) {
        dbv0_0_39_meta_free(dbv0_0_39_account_info->meta);
        dbv0_0_39_account_info->meta = NULL;
    }
    if (dbv0_0_39_account_info->errors) {
        list_ForEach(listEntry, dbv0_0_39_account_info->errors) {
            dbv0_0_39_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_account_info->errors);
        dbv0_0_39_account_info->errors = NULL;
    }
    if (dbv0_0_39_account_info->warnings) {
        list_ForEach(listEntry, dbv0_0_39_account_info->warnings) {
            dbv0_0_39_warning_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_account_info->warnings);
        dbv0_0_39_account_info->warnings = NULL;
    }
    if (dbv0_0_39_account_info->accounts) {
        list_ForEach(listEntry, dbv0_0_39_account_info->accounts) {
            v0_0_39_account_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_account_info->accounts);
        dbv0_0_39_account_info->accounts = NULL;
    }
    free(dbv0_0_39_account_info);
}

cJSON *dbv0_0_39_account_info_convertToJSON(dbv0_0_39_account_info_t *dbv0_0_39_account_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_account_info->meta
    if(dbv0_0_39_account_info->meta) {
    cJSON *meta_local_JSON = dbv0_0_39_meta_convertToJSON(dbv0_0_39_account_info->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_39_account_info->errors
    if(dbv0_0_39_account_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_39_account_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_39_account_info->errors) {
    cJSON *itemLocal = dbv0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_39_account_info->warnings
    if(dbv0_0_39_account_info->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (dbv0_0_39_account_info->warnings) {
    list_ForEach(warningsListEntry, dbv0_0_39_account_info->warnings) {
    cJSON *itemLocal = dbv0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // dbv0_0_39_account_info->accounts
    if(dbv0_0_39_account_info->accounts) {
    cJSON *accounts = cJSON_AddArrayToObject(item, "accounts");
    if(accounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountsListEntry;
    if (dbv0_0_39_account_info->accounts) {
    list_ForEach(accountsListEntry, dbv0_0_39_account_info->accounts) {
    cJSON *itemLocal = v0_0_39_account_convertToJSON(accountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounts, itemLocal);
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

dbv0_0_39_account_info_t *dbv0_0_39_account_info_parseFromJSON(cJSON *dbv0_0_39_account_infoJSON){

    dbv0_0_39_account_info_t *dbv0_0_39_account_info_local_var = NULL;

    // define the local variable for dbv0_0_39_account_info->meta
    dbv0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_39_account_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_39_account_info->warnings
    list_t *warningsList = NULL;

    // define the local list for dbv0_0_39_account_info->accounts
    list_t *accountsList = NULL;

    // dbv0_0_39_account_info->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_account_infoJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_39_account_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_account_infoJSON, "errors");
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

    // dbv0_0_39_account_info->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_account_infoJSON, "warnings");
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

    // dbv0_0_39_account_info->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_account_infoJSON, "accounts");
    if (accounts) { 
    cJSON *accounts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(accounts)){
        goto end; //nonprimitive container
    }

    accountsList = list_createList();

    cJSON_ArrayForEach(accounts_local_nonprimitive,accounts )
    {
        if(!cJSON_IsObject(accounts_local_nonprimitive)){
            goto end;
        }
        v0_0_39_account_t *accountsItem = v0_0_39_account_parseFromJSON(accounts_local_nonprimitive);

        list_addElement(accountsList, accountsItem);
    }
    }


    dbv0_0_39_account_info_local_var = dbv0_0_39_account_info_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        accounts ? accountsList : NULL
        );

    return dbv0_0_39_account_info_local_var;
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
    if (accountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountsList) {
            v0_0_39_account_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountsList);
        accountsList = NULL;
    }
    return NULL;

}
