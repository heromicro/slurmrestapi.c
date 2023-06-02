#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_user_info.h"



dbv0_0_38_user_info_t *dbv0_0_38_user_info_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    list_t *users
    ) {
    dbv0_0_38_user_info_t *dbv0_0_38_user_info_local_var = malloc(sizeof(dbv0_0_38_user_info_t));
    if (!dbv0_0_38_user_info_local_var) {
        return NULL;
    }
    dbv0_0_38_user_info_local_var->meta = meta;
    dbv0_0_38_user_info_local_var->errors = errors;
    dbv0_0_38_user_info_local_var->users = users;

    return dbv0_0_38_user_info_local_var;
}


void dbv0_0_38_user_info_free(dbv0_0_38_user_info_t *dbv0_0_38_user_info) {
    if(NULL == dbv0_0_38_user_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_user_info->meta) {
        dbv0_0_38_meta_free(dbv0_0_38_user_info->meta);
        dbv0_0_38_user_info->meta = NULL;
    }
    if (dbv0_0_38_user_info->errors) {
        list_ForEach(listEntry, dbv0_0_38_user_info->errors) {
            dbv0_0_38_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_user_info->errors);
        dbv0_0_38_user_info->errors = NULL;
    }
    if (dbv0_0_38_user_info->users) {
        list_ForEach(listEntry, dbv0_0_38_user_info->users) {
            dbv0_0_38_user_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_user_info->users);
        dbv0_0_38_user_info->users = NULL;
    }
    free(dbv0_0_38_user_info);
}

cJSON *dbv0_0_38_user_info_convertToJSON(dbv0_0_38_user_info_t *dbv0_0_38_user_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_user_info->meta
    if(dbv0_0_38_user_info->meta) {
    cJSON *meta_local_JSON = dbv0_0_38_meta_convertToJSON(dbv0_0_38_user_info->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_user_info->errors
    if(dbv0_0_38_user_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_38_user_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_38_user_info->errors) {
    cJSON *itemLocal = dbv0_0_38_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_38_user_info->users
    if(dbv0_0_38_user_info->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (dbv0_0_38_user_info->users) {
    list_ForEach(usersListEntry, dbv0_0_38_user_info->users) {
    cJSON *itemLocal = dbv0_0_38_user_convertToJSON(usersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(users, itemLocal);
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

dbv0_0_38_user_info_t *dbv0_0_38_user_info_parseFromJSON(cJSON *dbv0_0_38_user_infoJSON){

    dbv0_0_38_user_info_t *dbv0_0_38_user_info_local_var = NULL;

    // define the local variable for dbv0_0_38_user_info->meta
    dbv0_0_38_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_38_user_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_38_user_info->users
    list_t *usersList = NULL;

    // dbv0_0_38_user_info->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_user_infoJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_38_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_38_user_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_user_infoJSON, "errors");
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

    // dbv0_0_38_user_info->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_user_infoJSON, "users");
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


    dbv0_0_38_user_info_local_var = dbv0_0_38_user_info_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        users ? usersList : NULL
        );

    return dbv0_0_38_user_info_local_var;
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
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            dbv0_0_38_user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    return NULL;

}
