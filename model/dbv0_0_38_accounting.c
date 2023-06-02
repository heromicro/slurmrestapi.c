#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_accounting.h"



dbv0_0_38_accounting_t *dbv0_0_38_accounting_create(
    int allocated,
    int id,
    int start,
    list_t *tres
    ) {
    dbv0_0_38_accounting_t *dbv0_0_38_accounting_local_var = malloc(sizeof(dbv0_0_38_accounting_t));
    if (!dbv0_0_38_accounting_local_var) {
        return NULL;
    }
    dbv0_0_38_accounting_local_var->allocated = allocated;
    dbv0_0_38_accounting_local_var->id = id;
    dbv0_0_38_accounting_local_var->start = start;
    dbv0_0_38_accounting_local_var->tres = tres;

    return dbv0_0_38_accounting_local_var;
}


void dbv0_0_38_accounting_free(dbv0_0_38_accounting_t *dbv0_0_38_accounting) {
    if(NULL == dbv0_0_38_accounting){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_accounting->tres) {
        list_ForEach(listEntry, dbv0_0_38_accounting->tres) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_accounting->tres);
        dbv0_0_38_accounting->tres = NULL;
    }
    free(dbv0_0_38_accounting);
}

cJSON *dbv0_0_38_accounting_convertToJSON(dbv0_0_38_accounting_t *dbv0_0_38_accounting) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_accounting->allocated
    if(dbv0_0_38_accounting->allocated) {
    if(cJSON_AddNumberToObject(item, "allocated", dbv0_0_38_accounting->allocated) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_accounting->id
    if(dbv0_0_38_accounting->id) {
    if(cJSON_AddNumberToObject(item, "id", dbv0_0_38_accounting->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_accounting->start
    if(dbv0_0_38_accounting->start) {
    if(cJSON_AddNumberToObject(item, "start", dbv0_0_38_accounting->start) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_accounting->tres
    if(dbv0_0_38_accounting->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "TRES");
    if(tres == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tresListEntry;
    if (dbv0_0_38_accounting->tres) {
    list_ForEach(tresListEntry, dbv0_0_38_accounting->tres) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(tresListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tres, itemLocal);
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

dbv0_0_38_accounting_t *dbv0_0_38_accounting_parseFromJSON(cJSON *dbv0_0_38_accountingJSON){

    dbv0_0_38_accounting_t *dbv0_0_38_accounting_local_var = NULL;

    // define the local list for dbv0_0_38_accounting->tres
    list_t *tresList = NULL;

    // dbv0_0_38_accounting->allocated
    cJSON *allocated = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_accountingJSON, "allocated");
    if (allocated) { 
    if(!cJSON_IsNumber(allocated))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_accounting->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_accountingJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_accounting->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_accountingJSON, "start");
    if (start) { 
    if(!cJSON_IsNumber(start))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_accounting->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_accountingJSON, "TRES");
    if (tres) { 
    cJSON *tres_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tres)){
        goto end; //nonprimitive container
    }

    tresList = list_createList();

    cJSON_ArrayForEach(tres_local_nonprimitive,tres )
    {
        if(!cJSON_IsObject(tres_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *tresItem = dbv0_0_38_tres_list_inner_parseFromJSON(tres_local_nonprimitive);

        list_addElement(tresList, tresItem);
    }
    }


    dbv0_0_38_accounting_local_var = dbv0_0_38_accounting_create (
        allocated ? allocated->valuedouble : 0,
        id ? id->valuedouble : 0,
        start ? start->valuedouble : 0,
        tres ? tresList : NULL
        );

    return dbv0_0_38_accounting_local_var;
end:
    if (tresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tresList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tresList);
        tresList = NULL;
    }
    return NULL;

}
