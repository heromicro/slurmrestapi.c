#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_preempt.h"



dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt_create(
    list_t *list,
    list_t *mode,
    int exempt_time
    ) {
    dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt_local_var = malloc(sizeof(dbv0_0_37_qos_preempt_t));
    if (!dbv0_0_37_qos_preempt_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_preempt_local_var->list = list;
    dbv0_0_37_qos_preempt_local_var->mode = mode;
    dbv0_0_37_qos_preempt_local_var->exempt_time = exempt_time;

    return dbv0_0_37_qos_preempt_local_var;
}


void dbv0_0_37_qos_preempt_free(dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt) {
    if(NULL == dbv0_0_37_qos_preempt){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_qos_preempt->list) {
        list_ForEach(listEntry, dbv0_0_37_qos_preempt->list) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_preempt->list);
        dbv0_0_37_qos_preempt->list = NULL;
    }
    if (dbv0_0_37_qos_preempt->mode) {
        list_ForEach(listEntry, dbv0_0_37_qos_preempt->mode) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_preempt->mode);
        dbv0_0_37_qos_preempt->mode = NULL;
    }
    free(dbv0_0_37_qos_preempt);
}

cJSON *dbv0_0_37_qos_preempt_convertToJSON(dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_preempt->list
    if(dbv0_0_37_qos_preempt->list) {
    cJSON *list = cJSON_AddArrayToObject(item, "list");
    if(list == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *listListEntry;
    list_ForEach(listListEntry, dbv0_0_37_qos_preempt->list) {
    if(cJSON_AddStringToObject(list, "", (char*)listListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_37_qos_preempt->mode
    if(dbv0_0_37_qos_preempt->mode) {
    cJSON *mode = cJSON_AddArrayToObject(item, "mode");
    if(mode == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *modeListEntry;
    list_ForEach(modeListEntry, dbv0_0_37_qos_preempt->mode) {
    if(cJSON_AddStringToObject(mode, "", (char*)modeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_37_qos_preempt->exempt_time
    if(dbv0_0_37_qos_preempt->exempt_time) {
    if(cJSON_AddNumberToObject(item, "exempt_time", dbv0_0_37_qos_preempt->exempt_time) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt_parseFromJSON(cJSON *dbv0_0_37_qos_preemptJSON){

    dbv0_0_37_qos_preempt_t *dbv0_0_37_qos_preempt_local_var = NULL;

    // define the local list for dbv0_0_37_qos_preempt->list
    list_t *listList = NULL;

    // define the local list for dbv0_0_37_qos_preempt->mode
    list_t *modeList = NULL;

    // dbv0_0_37_qos_preempt->list
    cJSON *list = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_preemptJSON, "list");
    if (list) { 
    cJSON *list_local = NULL;
    if(!cJSON_IsArray(list)) {
        goto end;//primitive container
    }
    listList = list_createList();

    cJSON_ArrayForEach(list_local, list)
    {
        if(!cJSON_IsString(list_local))
        {
            goto end;
        }
        list_addElement(listList , strdup(list_local->valuestring));
    }
    }

    // dbv0_0_37_qos_preempt->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_preemptJSON, "mode");
    if (mode) { 
    cJSON *mode_local = NULL;
    if(!cJSON_IsArray(mode)) {
        goto end;//primitive container
    }
    modeList = list_createList();

    cJSON_ArrayForEach(mode_local, mode)
    {
        if(!cJSON_IsString(mode_local))
        {
            goto end;
        }
        list_addElement(modeList , strdup(mode_local->valuestring));
    }
    }

    // dbv0_0_37_qos_preempt->exempt_time
    cJSON *exempt_time = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_preemptJSON, "exempt_time");
    if (exempt_time) { 
    if(!cJSON_IsNumber(exempt_time))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_qos_preempt_local_var = dbv0_0_37_qos_preempt_create (
        list ? listList : NULL,
        mode ? modeList : NULL,
        exempt_time ? exempt_time->valuedouble : 0
        );

    return dbv0_0_37_qos_preempt_local_var;
end:
    if (listList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, listList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(listList);
        listList = NULL;
    }
    if (modeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, modeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(modeList);
        modeList = NULL;
    }
    return NULL;

}
