#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_info.h"



dbv0_0_37_qos_info_t *dbv0_0_37_qos_info_create(
    list_t *errors,
    list_t *qos
    ) {
    dbv0_0_37_qos_info_t *dbv0_0_37_qos_info_local_var = malloc(sizeof(dbv0_0_37_qos_info_t));
    if (!dbv0_0_37_qos_info_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_info_local_var->errors = errors;
    dbv0_0_37_qos_info_local_var->qos = qos;

    return dbv0_0_37_qos_info_local_var;
}


void dbv0_0_37_qos_info_free(dbv0_0_37_qos_info_t *dbv0_0_37_qos_info) {
    if(NULL == dbv0_0_37_qos_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_qos_info->errors) {
        list_ForEach(listEntry, dbv0_0_37_qos_info->errors) {
            dbv0_0_37_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_info->errors);
        dbv0_0_37_qos_info->errors = NULL;
    }
    if (dbv0_0_37_qos_info->qos) {
        list_ForEach(listEntry, dbv0_0_37_qos_info->qos) {
            dbv0_0_37_qos_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_info->qos);
        dbv0_0_37_qos_info->qos = NULL;
    }
    free(dbv0_0_37_qos_info);
}

cJSON *dbv0_0_37_qos_info_convertToJSON(dbv0_0_37_qos_info_t *dbv0_0_37_qos_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_info->errors
    if(dbv0_0_37_qos_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_37_qos_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_37_qos_info->errors) {
    cJSON *itemLocal = dbv0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_37_qos_info->qos
    if(dbv0_0_37_qos_info->qos) {
    cJSON *qos = cJSON_AddArrayToObject(item, "qos");
    if(qos == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *qosListEntry;
    if (dbv0_0_37_qos_info->qos) {
    list_ForEach(qosListEntry, dbv0_0_37_qos_info->qos) {
    cJSON *itemLocal = dbv0_0_37_qos_convertToJSON(qosListEntry->data);
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

dbv0_0_37_qos_info_t *dbv0_0_37_qos_info_parseFromJSON(cJSON *dbv0_0_37_qos_infoJSON){

    dbv0_0_37_qos_info_t *dbv0_0_37_qos_info_local_var = NULL;

    // define the local list for dbv0_0_37_qos_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_37_qos_info->qos
    list_t *qosList = NULL;

    // dbv0_0_37_qos_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_infoJSON, "errors");
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
        dbv0_0_37_error_t *errorsItem = dbv0_0_37_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // dbv0_0_37_qos_info->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_infoJSON, "qos");
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
        dbv0_0_37_qos_t *qosItem = dbv0_0_37_qos_parseFromJSON(qos_local_nonprimitive);

        list_addElement(qosList, qosItem);
    }
    }


    dbv0_0_37_qos_info_local_var = dbv0_0_37_qos_info_create (
        errors ? errorsList : NULL,
        qos ? qosList : NULL
        );

    return dbv0_0_37_qos_info_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_37_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (qosList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, qosList) {
            dbv0_0_37_qos_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(qosList);
        qosList = NULL;
    }
    return NULL;

}
