#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_wckey.h"



dbv0_0_38_wckey_t *dbv0_0_38_wckey_create(
    char *cluster,
    int id,
    char *name,
    char *user,
    list_t *flags,
    list_t *accounting
    ) {
    dbv0_0_38_wckey_t *dbv0_0_38_wckey_local_var = malloc(sizeof(dbv0_0_38_wckey_t));
    if (!dbv0_0_38_wckey_local_var) {
        return NULL;
    }
    dbv0_0_38_wckey_local_var->cluster = cluster;
    dbv0_0_38_wckey_local_var->id = id;
    dbv0_0_38_wckey_local_var->name = name;
    dbv0_0_38_wckey_local_var->user = user;
    dbv0_0_38_wckey_local_var->flags = flags;
    dbv0_0_38_wckey_local_var->accounting = accounting;

    return dbv0_0_38_wckey_local_var;
}


void dbv0_0_38_wckey_free(dbv0_0_38_wckey_t *dbv0_0_38_wckey) {
    if(NULL == dbv0_0_38_wckey){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_wckey->cluster) {
        free(dbv0_0_38_wckey->cluster);
        dbv0_0_38_wckey->cluster = NULL;
    }
    if (dbv0_0_38_wckey->name) {
        free(dbv0_0_38_wckey->name);
        dbv0_0_38_wckey->name = NULL;
    }
    if (dbv0_0_38_wckey->user) {
        free(dbv0_0_38_wckey->user);
        dbv0_0_38_wckey->user = NULL;
    }
    if (dbv0_0_38_wckey->flags) {
        list_ForEach(listEntry, dbv0_0_38_wckey->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_wckey->flags);
        dbv0_0_38_wckey->flags = NULL;
    }
    if (dbv0_0_38_wckey->accounting) {
        list_ForEach(listEntry, dbv0_0_38_wckey->accounting) {
            dbv0_0_38_accounting_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_wckey->accounting);
        dbv0_0_38_wckey->accounting = NULL;
    }
    free(dbv0_0_38_wckey);
}

cJSON *dbv0_0_38_wckey_convertToJSON(dbv0_0_38_wckey_t *dbv0_0_38_wckey) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_wckey->cluster
    if(dbv0_0_38_wckey->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", dbv0_0_38_wckey->cluster) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_wckey->id
    if(dbv0_0_38_wckey->id) {
    if(cJSON_AddNumberToObject(item, "id", dbv0_0_38_wckey->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_wckey->name
    if(dbv0_0_38_wckey->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_wckey->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_wckey->user
    if(dbv0_0_38_wckey->user) {
    if(cJSON_AddStringToObject(item, "user", dbv0_0_38_wckey->user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_wckey->flags
    if(dbv0_0_38_wckey->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_38_wckey->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_38_wckey->accounting
    if(dbv0_0_38_wckey->accounting) {
    cJSON *accounting = cJSON_AddArrayToObject(item, "accounting");
    if(accounting == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountingListEntry;
    if (dbv0_0_38_wckey->accounting) {
    list_ForEach(accountingListEntry, dbv0_0_38_wckey->accounting) {
    cJSON *itemLocal = dbv0_0_38_accounting_convertToJSON(accountingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounting, itemLocal);
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

dbv0_0_38_wckey_t *dbv0_0_38_wckey_parseFromJSON(cJSON *dbv0_0_38_wckeyJSON){

    dbv0_0_38_wckey_t *dbv0_0_38_wckey_local_var = NULL;

    // define the local list for dbv0_0_38_wckey->flags
    list_t *flagsList = NULL;

    // define the local list for dbv0_0_38_wckey->accounting
    list_t *accountingList = NULL;

    // dbv0_0_38_wckey->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_wckeyJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_wckey->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_wckeyJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_wckey->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_wckeyJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_wckey->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_wckeyJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_wckey->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_wckeyJSON, "flags");
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

    // dbv0_0_38_wckey->accounting
    cJSON *accounting = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_wckeyJSON, "accounting");
    if (accounting) { 
    cJSON *accounting_local_nonprimitive = NULL;
    if(!cJSON_IsArray(accounting)){
        goto end; //nonprimitive container
    }

    accountingList = list_createList();

    cJSON_ArrayForEach(accounting_local_nonprimitive,accounting )
    {
        if(!cJSON_IsObject(accounting_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_accounting_t *accountingItem = dbv0_0_38_accounting_parseFromJSON(accounting_local_nonprimitive);

        list_addElement(accountingList, accountingItem);
    }
    }


    dbv0_0_38_wckey_local_var = dbv0_0_38_wckey_create (
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        id ? id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        flags ? flagsList : NULL,
        accounting ? accountingList : NULL
        );

    return dbv0_0_38_wckey_local_var;
end:
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (accountingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountingList) {
            dbv0_0_38_accounting_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountingList);
        accountingList = NULL;
    }
    return NULL;

}
