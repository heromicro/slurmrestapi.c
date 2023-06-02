#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_config_info.h"



dbv0_0_38_config_info_t *dbv0_0_38_config_info_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    list_t *tres,
    list_t *accounts,
    list_t *associations,
    list_t *users,
    list_t *qos,
    list_t *wckeys
    ) {
    dbv0_0_38_config_info_t *dbv0_0_38_config_info_local_var = malloc(sizeof(dbv0_0_38_config_info_t));
    if (!dbv0_0_38_config_info_local_var) {
        return NULL;
    }
    dbv0_0_38_config_info_local_var->meta = meta;
    dbv0_0_38_config_info_local_var->errors = errors;
    dbv0_0_38_config_info_local_var->tres = tres;
    dbv0_0_38_config_info_local_var->accounts = accounts;
    dbv0_0_38_config_info_local_var->associations = associations;
    dbv0_0_38_config_info_local_var->users = users;
    dbv0_0_38_config_info_local_var->qos = qos;
    dbv0_0_38_config_info_local_var->wckeys = wckeys;

    return dbv0_0_38_config_info_local_var;
}


void dbv0_0_38_config_info_free(dbv0_0_38_config_info_t *dbv0_0_38_config_info) {
    if(NULL == dbv0_0_38_config_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_config_info->meta) {
        dbv0_0_38_meta_free(dbv0_0_38_config_info->meta);
        dbv0_0_38_config_info->meta = NULL;
    }
    if (dbv0_0_38_config_info->errors) {
        list_ForEach(listEntry, dbv0_0_38_config_info->errors) {
            dbv0_0_38_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->errors);
        dbv0_0_38_config_info->errors = NULL;
    }
    if (dbv0_0_38_config_info->tres) {
        list_ForEach(listEntry, dbv0_0_38_config_info->tres) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->tres);
        dbv0_0_38_config_info->tres = NULL;
    }
    if (dbv0_0_38_config_info->accounts) {
        list_ForEach(listEntry, dbv0_0_38_config_info->accounts) {
            dbv0_0_38_account_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->accounts);
        dbv0_0_38_config_info->accounts = NULL;
    }
    if (dbv0_0_38_config_info->associations) {
        list_ForEach(listEntry, dbv0_0_38_config_info->associations) {
            dbv0_0_38_association_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->associations);
        dbv0_0_38_config_info->associations = NULL;
    }
    if (dbv0_0_38_config_info->users) {
        list_ForEach(listEntry, dbv0_0_38_config_info->users) {
            dbv0_0_38_user_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->users);
        dbv0_0_38_config_info->users = NULL;
    }
    if (dbv0_0_38_config_info->qos) {
        list_ForEach(listEntry, dbv0_0_38_config_info->qos) {
            dbv0_0_38_qos_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->qos);
        dbv0_0_38_config_info->qos = NULL;
    }
    if (dbv0_0_38_config_info->wckeys) {
        list_ForEach(listEntry, dbv0_0_38_config_info->wckeys) {
            dbv0_0_38_wckey_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_config_info->wckeys);
        dbv0_0_38_config_info->wckeys = NULL;
    }
    free(dbv0_0_38_config_info);
}

cJSON *dbv0_0_38_config_info_convertToJSON(dbv0_0_38_config_info_t *dbv0_0_38_config_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_config_info->meta
    if(dbv0_0_38_config_info->meta) {
    cJSON *meta_local_JSON = dbv0_0_38_meta_convertToJSON(dbv0_0_38_config_info->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_config_info->errors
    if(dbv0_0_38_config_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_38_config_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_38_config_info->errors) {
    cJSON *itemLocal = dbv0_0_38_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_38_config_info->tres
    if(dbv0_0_38_config_info->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "tres");
    if(tres == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tresListEntry;
    list_ForEach(tresListEntry, dbv0_0_38_config_info->tres) {
    }
    }


    // dbv0_0_38_config_info->accounts
    if(dbv0_0_38_config_info->accounts) {
    cJSON *accounts = cJSON_AddArrayToObject(item, "accounts");
    if(accounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountsListEntry;
    if (dbv0_0_38_config_info->accounts) {
    list_ForEach(accountsListEntry, dbv0_0_38_config_info->accounts) {
    cJSON *itemLocal = dbv0_0_38_account_convertToJSON(accountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounts, itemLocal);
    }
    }
    }


    // dbv0_0_38_config_info->associations
    if(dbv0_0_38_config_info->associations) {
    cJSON *associations = cJSON_AddArrayToObject(item, "associations");
    if(associations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *associationsListEntry;
    if (dbv0_0_38_config_info->associations) {
    list_ForEach(associationsListEntry, dbv0_0_38_config_info->associations) {
    cJSON *itemLocal = dbv0_0_38_association_convertToJSON(associationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(associations, itemLocal);
    }
    }
    }


    // dbv0_0_38_config_info->users
    if(dbv0_0_38_config_info->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (dbv0_0_38_config_info->users) {
    list_ForEach(usersListEntry, dbv0_0_38_config_info->users) {
    cJSON *itemLocal = dbv0_0_38_user_convertToJSON(usersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(users, itemLocal);
    }
    }
    }


    // dbv0_0_38_config_info->qos
    if(dbv0_0_38_config_info->qos) {
    cJSON *qos = cJSON_AddArrayToObject(item, "qos");
    if(qos == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *qosListEntry;
    if (dbv0_0_38_config_info->qos) {
    list_ForEach(qosListEntry, dbv0_0_38_config_info->qos) {
    cJSON *itemLocal = dbv0_0_38_qos_convertToJSON(qosListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(qos, itemLocal);
    }
    }
    }


    // dbv0_0_38_config_info->wckeys
    if(dbv0_0_38_config_info->wckeys) {
    cJSON *wckeys = cJSON_AddArrayToObject(item, "wckeys");
    if(wckeys == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *wckeysListEntry;
    if (dbv0_0_38_config_info->wckeys) {
    list_ForEach(wckeysListEntry, dbv0_0_38_config_info->wckeys) {
    cJSON *itemLocal = dbv0_0_38_wckey_convertToJSON(wckeysListEntry->data);
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

dbv0_0_38_config_info_t *dbv0_0_38_config_info_parseFromJSON(cJSON *dbv0_0_38_config_infoJSON){

    dbv0_0_38_config_info_t *dbv0_0_38_config_info_local_var = NULL;

    // define the local variable for dbv0_0_38_config_info->meta
    dbv0_0_38_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_38_config_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_38_config_info->tres
    list_t *tresList = NULL;

    // define the local list for dbv0_0_38_config_info->accounts
    list_t *accountsList = NULL;

    // define the local list for dbv0_0_38_config_info->associations
    list_t *associationsList = NULL;

    // define the local list for dbv0_0_38_config_info->users
    list_t *usersList = NULL;

    // define the local list for dbv0_0_38_config_info->qos
    list_t *qosList = NULL;

    // define the local list for dbv0_0_38_config_info->wckeys
    list_t *wckeysList = NULL;

    // dbv0_0_38_config_info->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_38_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_38_config_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "errors");
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
        dbv0_0_38_error_t *errorsItem = dbv0_0_38_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // dbv0_0_38_config_info->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "tres");
    if (tres) { 
    cJSON *tres_local = NULL;
    if(!cJSON_IsArray(tres)) {
        goto end;//primitive container
    }
    tresList = list_createList();

    cJSON_ArrayForEach(tres_local, tres)
    {
    }
    }

    // dbv0_0_38_config_info->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "accounts");
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
        dbv0_0_38_account_t *accountsItem = dbv0_0_38_account_parseFromJSON(accounts_local_nonprimitive);

        list_addElement(accountsList, accountsItem);
    }
    }

    // dbv0_0_38_config_info->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "associations");
    if (associations) { 
    cJSON *associations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(associations)){
        goto end; //nonprimitive container
    }

    associationsList = list_createList();

    cJSON_ArrayForEach(associations_local_nonprimitive,associations )
    {
        if(!cJSON_IsObject(associations_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_association_t *associationsItem = dbv0_0_38_association_parseFromJSON(associations_local_nonprimitive);

        list_addElement(associationsList, associationsItem);
    }
    }

    // dbv0_0_38_config_info->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "users");
    if (users) { 
    cJSON *users_local_nonprimitive = NULL;
    if(!cJSON_IsArray(users)){
        goto end; //nonprimitive container
    }

    usersList = list_createList();

    cJSON_ArrayForEach(users_local_nonprimitive,users )
    {
        if(!cJSON_IsObject(users_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_user_t *usersItem = dbv0_0_38_user_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }
    }

    // dbv0_0_38_config_info->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "qos");
    if (qos) { 
    cJSON *qos_local_nonprimitive = NULL;
    if(!cJSON_IsArray(qos)){
        goto end; //nonprimitive container
    }

    qosList = list_createList();

    cJSON_ArrayForEach(qos_local_nonprimitive,qos )
    {
        if(!cJSON_IsObject(qos_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_qos_t *qosItem = dbv0_0_38_qos_parseFromJSON(qos_local_nonprimitive);

        list_addElement(qosList, qosItem);
    }
    }

    // dbv0_0_38_config_info->wckeys
    cJSON *wckeys = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_config_infoJSON, "wckeys");
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
        dbv0_0_38_wckey_t *wckeysItem = dbv0_0_38_wckey_parseFromJSON(wckeys_local_nonprimitive);

        list_addElement(wckeysList, wckeysItem);
    }
    }


    dbv0_0_38_config_info_local_var = dbv0_0_38_config_info_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        tres ? tresList : NULL,
        accounts ? accountsList : NULL,
        associations ? associationsList : NULL,
        users ? usersList : NULL,
        qos ? qosList : NULL,
        wckeys ? wckeysList : NULL
        );

    return dbv0_0_38_config_info_local_var;
end:
    if (meta_local_nonprim) {
        dbv0_0_38_meta_free(meta_local_nonprim);
        meta_local_nonprim = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_38_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (tresList) {
        list_freeList(tresList);
        tresList = NULL;
    }
    if (accountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountsList) {
            dbv0_0_38_account_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountsList);
        accountsList = NULL;
    }
    if (associationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, associationsList) {
            dbv0_0_38_association_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(associationsList);
        associationsList = NULL;
    }
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            dbv0_0_38_user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    if (qosList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, qosList) {
            dbv0_0_38_qos_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(qosList);
        qosList = NULL;
    }
    if (wckeysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, wckeysList) {
            dbv0_0_38_wckey_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(wckeysList);
        wckeysList = NULL;
    }
    return NULL;

}
