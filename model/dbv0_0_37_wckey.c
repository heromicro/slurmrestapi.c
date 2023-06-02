#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_wckey.h"



dbv0_0_37_wckey_t *dbv0_0_37_wckey_create(
    list_t *accounts,
    char *cluster,
    int id,
    char *name,
    char *user,
    list_t *flags
    ) {
    dbv0_0_37_wckey_t *dbv0_0_37_wckey_local_var = malloc(sizeof(dbv0_0_37_wckey_t));
    if (!dbv0_0_37_wckey_local_var) {
        return NULL;
    }
    dbv0_0_37_wckey_local_var->accounts = accounts;
    dbv0_0_37_wckey_local_var->cluster = cluster;
    dbv0_0_37_wckey_local_var->id = id;
    dbv0_0_37_wckey_local_var->name = name;
    dbv0_0_37_wckey_local_var->user = user;
    dbv0_0_37_wckey_local_var->flags = flags;

    return dbv0_0_37_wckey_local_var;
}


void dbv0_0_37_wckey_free(dbv0_0_37_wckey_t *dbv0_0_37_wckey) {
    if(NULL == dbv0_0_37_wckey){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_wckey->accounts) {
        list_ForEach(listEntry, dbv0_0_37_wckey->accounts) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_wckey->accounts);
        dbv0_0_37_wckey->accounts = NULL;
    }
    if (dbv0_0_37_wckey->cluster) {
        free(dbv0_0_37_wckey->cluster);
        dbv0_0_37_wckey->cluster = NULL;
    }
    if (dbv0_0_37_wckey->name) {
        free(dbv0_0_37_wckey->name);
        dbv0_0_37_wckey->name = NULL;
    }
    if (dbv0_0_37_wckey->user) {
        free(dbv0_0_37_wckey->user);
        dbv0_0_37_wckey->user = NULL;
    }
    if (dbv0_0_37_wckey->flags) {
        list_ForEach(listEntry, dbv0_0_37_wckey->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_wckey->flags);
        dbv0_0_37_wckey->flags = NULL;
    }
    free(dbv0_0_37_wckey);
}

cJSON *dbv0_0_37_wckey_convertToJSON(dbv0_0_37_wckey_t *dbv0_0_37_wckey) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_wckey->accounts
    if(dbv0_0_37_wckey->accounts) {
    cJSON *accounts = cJSON_AddArrayToObject(item, "accounts");
    if(accounts == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *accountsListEntry;
    list_ForEach(accountsListEntry, dbv0_0_37_wckey->accounts) {
    if(cJSON_AddStringToObject(accounts, "", (char*)accountsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_37_wckey->cluster
    if(dbv0_0_37_wckey->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", dbv0_0_37_wckey->cluster) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_wckey->id
    if(dbv0_0_37_wckey->id) {
    if(cJSON_AddNumberToObject(item, "id", dbv0_0_37_wckey->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_wckey->name
    if(dbv0_0_37_wckey->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_37_wckey->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_wckey->user
    if(dbv0_0_37_wckey->user) {
    if(cJSON_AddStringToObject(item, "user", dbv0_0_37_wckey->user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_wckey->flags
    if(dbv0_0_37_wckey->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_37_wckey->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
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

dbv0_0_37_wckey_t *dbv0_0_37_wckey_parseFromJSON(cJSON *dbv0_0_37_wckeyJSON){

    dbv0_0_37_wckey_t *dbv0_0_37_wckey_local_var = NULL;

    // define the local list for dbv0_0_37_wckey->accounts
    list_t *accountsList = NULL;

    // define the local list for dbv0_0_37_wckey->flags
    list_t *flagsList = NULL;

    // dbv0_0_37_wckey->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckeyJSON, "accounts");
    if (accounts) { 
    cJSON *accounts_local = NULL;
    if(!cJSON_IsArray(accounts)) {
        goto end;//primitive container
    }
    accountsList = list_createList();

    cJSON_ArrayForEach(accounts_local, accounts)
    {
        if(!cJSON_IsString(accounts_local))
        {
            goto end;
        }
        list_addElement(accountsList , strdup(accounts_local->valuestring));
    }
    }

    // dbv0_0_37_wckey->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckeyJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_wckey->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckeyJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_wckey->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckeyJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_wckey->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckeyJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_wckey->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_wckeyJSON, "flags");
    if (flags) { 
    cJSON *flags_local = NULL;
    if(!cJSON_IsArray(flags)) {
        goto end;//primitive container
    }
    flagsList = list_createList();

    cJSON_ArrayForEach(flags_local, flags)
    {
        if(!cJSON_IsString(flags_local))
        {
            goto end;
        }
        list_addElement(flagsList , strdup(flags_local->valuestring));
    }
    }


    dbv0_0_37_wckey_local_var = dbv0_0_37_wckey_create (
        accounts ? accountsList : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        id ? id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        flags ? flagsList : NULL
        );

    return dbv0_0_37_wckey_local_var;
end:
    if (accountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountsList);
        accountsList = NULL;
    }
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    return NULL;

}
