#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_wckey.h"


char* flagsv0_0_39_wckey_ToString(slurm_rest_api_v0_0_39_wckey_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "DELETED" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_wckey_FLAGS_e flagsv0_0_39_wckey_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "DELETED" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_wckey_t *v0_0_39_wckey_create(
    list_t *accounting,
    char *cluster,
    int id,
    char *name,
    char *user,
    list_t *flags
    ) {
    v0_0_39_wckey_t *v0_0_39_wckey_local_var = malloc(sizeof(v0_0_39_wckey_t));
    if (!v0_0_39_wckey_local_var) {
        return NULL;
    }
    v0_0_39_wckey_local_var->accounting = accounting;
    v0_0_39_wckey_local_var->cluster = cluster;
    v0_0_39_wckey_local_var->id = id;
    v0_0_39_wckey_local_var->name = name;
    v0_0_39_wckey_local_var->user = user;
    v0_0_39_wckey_local_var->flags = flags;

    return v0_0_39_wckey_local_var;
}


void v0_0_39_wckey_free(v0_0_39_wckey_t *v0_0_39_wckey) {
    if(NULL == v0_0_39_wckey){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_wckey->accounting) {
        list_ForEach(listEntry, v0_0_39_wckey->accounting) {
            v0_0_39_accounting_free(listEntry->data);
        }
        list_freeList(v0_0_39_wckey->accounting);
        v0_0_39_wckey->accounting = NULL;
    }
    if (v0_0_39_wckey->cluster) {
        free(v0_0_39_wckey->cluster);
        v0_0_39_wckey->cluster = NULL;
    }
    if (v0_0_39_wckey->name) {
        free(v0_0_39_wckey->name);
        v0_0_39_wckey->name = NULL;
    }
    if (v0_0_39_wckey->user) {
        free(v0_0_39_wckey->user);
        v0_0_39_wckey->user = NULL;
    }
    if (v0_0_39_wckey->flags) {
        list_ForEach(listEntry, v0_0_39_wckey->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_wckey->flags);
        v0_0_39_wckey->flags = NULL;
    }
    free(v0_0_39_wckey);
}

cJSON *v0_0_39_wckey_convertToJSON(v0_0_39_wckey_t *v0_0_39_wckey) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_wckey->accounting
    if(v0_0_39_wckey->accounting) {
    cJSON *accounting = cJSON_AddArrayToObject(item, "accounting");
    if(accounting == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountingListEntry;
    if (v0_0_39_wckey->accounting) {
    list_ForEach(accountingListEntry, v0_0_39_wckey->accounting) {
    cJSON *itemLocal = v0_0_39_accounting_convertToJSON(accountingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounting, itemLocal);
    }
    }
    }


    // v0_0_39_wckey->cluster
    if (!v0_0_39_wckey->cluster) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cluster", v0_0_39_wckey->cluster) == NULL) {
    goto fail; //String
    }


    // v0_0_39_wckey->id
    if(v0_0_39_wckey->id) {
    if(cJSON_AddNumberToObject(item, "id", v0_0_39_wckey->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_wckey->name
    if (!v0_0_39_wckey->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", v0_0_39_wckey->name) == NULL) {
    goto fail; //String
    }


    // v0_0_39_wckey->user
    if (!v0_0_39_wckey->user) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "user", v0_0_39_wckey->user) == NULL) {
    goto fail; //String
    }


    // v0_0_39_wckey->flags
    if(v0_0_39_wckey->flags != slurm_rest_api_v0_0_39_wckey_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_wckey->flags) {
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

v0_0_39_wckey_t *v0_0_39_wckey_parseFromJSON(cJSON *v0_0_39_wckeyJSON){

    v0_0_39_wckey_t *v0_0_39_wckey_local_var = NULL;

    // define the local list for v0_0_39_wckey->accounting
    list_t *accountingList = NULL;

    // define the local list for v0_0_39_wckey->flags
    list_t *flagsList = NULL;

    // v0_0_39_wckey->accounting
    cJSON *accounting = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckeyJSON, "accounting");
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
        v0_0_39_accounting_t *accountingItem = v0_0_39_accounting_parseFromJSON(accounting_local_nonprimitive);

        list_addElement(accountingList, accountingItem);
    }
    }

    // v0_0_39_wckey->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckeyJSON, "cluster");
    if (!cluster) {
        goto end;
    }

    
    if(!cJSON_IsString(cluster))
    {
    goto end; //String
    }

    // v0_0_39_wckey->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckeyJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_wckey->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckeyJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // v0_0_39_wckey->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckeyJSON, "user");
    if (!user) {
        goto end;
    }

    
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }

    // v0_0_39_wckey->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckeyJSON, "flags");
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


    v0_0_39_wckey_local_var = v0_0_39_wckey_create (
        accounting ? accountingList : NULL,
        strdup(cluster->valuestring),
        id ? id->valuedouble : 0,
        strdup(name->valuestring),
        strdup(user->valuestring),
        flags ? flagsList : NULL
        );

    return v0_0_39_wckey_local_var;
end:
    if (accountingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountingList) {
            v0_0_39_accounting_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountingList);
        accountingList = NULL;
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
