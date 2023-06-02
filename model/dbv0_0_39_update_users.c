#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_update_users.h"



dbv0_0_39_update_users_t *dbv0_0_39_update_users_create(
    list_t *users
    ) {
    dbv0_0_39_update_users_t *dbv0_0_39_update_users_local_var = malloc(sizeof(dbv0_0_39_update_users_t));
    if (!dbv0_0_39_update_users_local_var) {
        return NULL;
    }
    dbv0_0_39_update_users_local_var->users = users;

    return dbv0_0_39_update_users_local_var;
}


void dbv0_0_39_update_users_free(dbv0_0_39_update_users_t *dbv0_0_39_update_users) {
    if(NULL == dbv0_0_39_update_users){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_update_users->users) {
        list_ForEach(listEntry, dbv0_0_39_update_users->users) {
            v0_0_39_user_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_update_users->users);
        dbv0_0_39_update_users->users = NULL;
    }
    free(dbv0_0_39_update_users);
}

cJSON *dbv0_0_39_update_users_convertToJSON(dbv0_0_39_update_users_t *dbv0_0_39_update_users) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_update_users->users
    if(dbv0_0_39_update_users->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (dbv0_0_39_update_users->users) {
    list_ForEach(usersListEntry, dbv0_0_39_update_users->users) {
    cJSON *itemLocal = v0_0_39_user_convertToJSON(usersListEntry->data);
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

dbv0_0_39_update_users_t *dbv0_0_39_update_users_parseFromJSON(cJSON *dbv0_0_39_update_usersJSON){

    dbv0_0_39_update_users_t *dbv0_0_39_update_users_local_var = NULL;

    // define the local list for dbv0_0_39_update_users->users
    list_t *usersList = NULL;

    // dbv0_0_39_update_users->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_update_usersJSON, "users");
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
        v0_0_39_user_t *usersItem = v0_0_39_user_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }
    }


    dbv0_0_39_update_users_local_var = dbv0_0_39_update_users_create (
        users ? usersList : NULL
        );

    return dbv0_0_39_update_users_local_var;
end:
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            v0_0_39_user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    return NULL;

}
