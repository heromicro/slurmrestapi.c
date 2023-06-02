#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_update_account.h"



dbv0_0_38_update_account_t *dbv0_0_38_update_account_create(
    list_t *accounts
    ) {
    dbv0_0_38_update_account_t *dbv0_0_38_update_account_local_var = malloc(sizeof(dbv0_0_38_update_account_t));
    if (!dbv0_0_38_update_account_local_var) {
        return NULL;
    }
    dbv0_0_38_update_account_local_var->accounts = accounts;

    return dbv0_0_38_update_account_local_var;
}


void dbv0_0_38_update_account_free(dbv0_0_38_update_account_t *dbv0_0_38_update_account) {
    if(NULL == dbv0_0_38_update_account){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_update_account->accounts) {
        list_ForEach(listEntry, dbv0_0_38_update_account->accounts) {
            dbv0_0_38_account_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_update_account->accounts);
        dbv0_0_38_update_account->accounts = NULL;
    }
    free(dbv0_0_38_update_account);
}

cJSON *dbv0_0_38_update_account_convertToJSON(dbv0_0_38_update_account_t *dbv0_0_38_update_account) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_update_account->accounts
    if(dbv0_0_38_update_account->accounts) {
    cJSON *accounts = cJSON_AddArrayToObject(item, "accounts");
    if(accounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountsListEntry;
    if (dbv0_0_38_update_account->accounts) {
    list_ForEach(accountsListEntry, dbv0_0_38_update_account->accounts) {
    cJSON *itemLocal = dbv0_0_38_account_convertToJSON(accountsListEntry->data);
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

dbv0_0_38_update_account_t *dbv0_0_38_update_account_parseFromJSON(cJSON *dbv0_0_38_update_accountJSON){

    dbv0_0_38_update_account_t *dbv0_0_38_update_account_local_var = NULL;

    // define the local list for dbv0_0_38_update_account->accounts
    list_t *accountsList = NULL;

    // dbv0_0_38_update_account->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_update_accountJSON, "accounts");
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


    dbv0_0_38_update_account_local_var = dbv0_0_38_update_account_create (
        accounts ? accountsList : NULL
        );

    return dbv0_0_38_update_account_local_var;
end:
    if (accountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountsList) {
            dbv0_0_38_account_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountsList);
        accountsList = NULL;
    }
    return NULL;

}
