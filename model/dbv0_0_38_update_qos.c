#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_update_qos.h"



dbv0_0_38_update_qos_t *dbv0_0_38_update_qos_create(
    list_t *qos
    ) {
    dbv0_0_38_update_qos_t *dbv0_0_38_update_qos_local_var = malloc(sizeof(dbv0_0_38_update_qos_t));
    if (!dbv0_0_38_update_qos_local_var) {
        return NULL;
    }
    dbv0_0_38_update_qos_local_var->qos = qos;

    return dbv0_0_38_update_qos_local_var;
}


void dbv0_0_38_update_qos_free(dbv0_0_38_update_qos_t *dbv0_0_38_update_qos) {
    if(NULL == dbv0_0_38_update_qos){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_update_qos->qos) {
        list_ForEach(listEntry, dbv0_0_38_update_qos->qos) {
            dbv0_0_38_qos_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_update_qos->qos);
        dbv0_0_38_update_qos->qos = NULL;
    }
    free(dbv0_0_38_update_qos);
}

cJSON *dbv0_0_38_update_qos_convertToJSON(dbv0_0_38_update_qos_t *dbv0_0_38_update_qos) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_update_qos->qos
    if(dbv0_0_38_update_qos->qos) {
    cJSON *qos = cJSON_AddArrayToObject(item, "qos");
    if(qos == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *qosListEntry;
    if (dbv0_0_38_update_qos->qos) {
    list_ForEach(qosListEntry, dbv0_0_38_update_qos->qos) {
    cJSON *itemLocal = dbv0_0_38_qos_convertToJSON(qosListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(qos, itemLocal);
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

dbv0_0_38_update_qos_t *dbv0_0_38_update_qos_parseFromJSON(cJSON *dbv0_0_38_update_qosJSON){

    dbv0_0_38_update_qos_t *dbv0_0_38_update_qos_local_var = NULL;

    // define the local list for dbv0_0_38_update_qos->qos
    list_t *qosList = NULL;

    // dbv0_0_38_update_qos->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_update_qosJSON, "qos");
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


    dbv0_0_38_update_qos_local_var = dbv0_0_38_update_qos_create (
        qos ? qosList : NULL
        );

    return dbv0_0_38_update_qos_local_var;
end:
    if (qosList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, qosList) {
            dbv0_0_38_qos_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(qosList);
        qosList = NULL;
    }
    return NULL;

}
