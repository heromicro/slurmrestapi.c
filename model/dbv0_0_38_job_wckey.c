#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_wckey.h"



dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey_create(
    char *wckey,
    list_t *flags
    ) {
    dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey_local_var = malloc(sizeof(dbv0_0_38_job_wckey_t));
    if (!dbv0_0_38_job_wckey_local_var) {
        return NULL;
    }
    dbv0_0_38_job_wckey_local_var->wckey = wckey;
    dbv0_0_38_job_wckey_local_var->flags = flags;

    return dbv0_0_38_job_wckey_local_var;
}


void dbv0_0_38_job_wckey_free(dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey) {
    if(NULL == dbv0_0_38_job_wckey){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_wckey->wckey) {
        free(dbv0_0_38_job_wckey->wckey);
        dbv0_0_38_job_wckey->wckey = NULL;
    }
    if (dbv0_0_38_job_wckey->flags) {
        list_ForEach(listEntry, dbv0_0_38_job_wckey->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_wckey->flags);
        dbv0_0_38_job_wckey->flags = NULL;
    }
    free(dbv0_0_38_job_wckey);
}

cJSON *dbv0_0_38_job_wckey_convertToJSON(dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_wckey->wckey
    if(dbv0_0_38_job_wckey->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", dbv0_0_38_job_wckey->wckey) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_wckey->flags
    if(dbv0_0_38_job_wckey->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_38_job_wckey->flags) {
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

dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey_parseFromJSON(cJSON *dbv0_0_38_job_wckeyJSON){

    dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey_local_var = NULL;

    // define the local list for dbv0_0_38_job_wckey->flags
    list_t *flagsList = NULL;

    // dbv0_0_38_job_wckey->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_wckeyJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_wckey->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_wckeyJSON, "flags");
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


    dbv0_0_38_job_wckey_local_var = dbv0_0_38_job_wckey_create (
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL,
        flags ? flagsList : NULL
        );

    return dbv0_0_38_job_wckey_local_var;
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
    return NULL;

}
