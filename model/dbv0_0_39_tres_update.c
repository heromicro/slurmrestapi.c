#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_tres_update.h"



dbv0_0_39_tres_update_t *dbv0_0_39_tres_update_create(
    list_t *tres
    ) {
    dbv0_0_39_tres_update_t *dbv0_0_39_tres_update_local_var = malloc(sizeof(dbv0_0_39_tres_update_t));
    if (!dbv0_0_39_tres_update_local_var) {
        return NULL;
    }
    dbv0_0_39_tres_update_local_var->tres = tres;

    return dbv0_0_39_tres_update_local_var;
}


void dbv0_0_39_tres_update_free(dbv0_0_39_tres_update_t *dbv0_0_39_tres_update) {
    if(NULL == dbv0_0_39_tres_update){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_tres_update->tres) {
        list_ForEach(listEntry, dbv0_0_39_tres_update->tres) {
            v0_0_39_tres_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_tres_update->tres);
        dbv0_0_39_tres_update->tres = NULL;
    }
    free(dbv0_0_39_tres_update);
}

cJSON *dbv0_0_39_tres_update_convertToJSON(dbv0_0_39_tres_update_t *dbv0_0_39_tres_update) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_tres_update->tres
    if(dbv0_0_39_tres_update->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "tres");
    if(tres == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tresListEntry;
    if (dbv0_0_39_tres_update->tres) {
    list_ForEach(tresListEntry, dbv0_0_39_tres_update->tres) {
    cJSON *itemLocal = v0_0_39_tres_convertToJSON(tresListEntry->data);
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

dbv0_0_39_tres_update_t *dbv0_0_39_tres_update_parseFromJSON(cJSON *dbv0_0_39_tres_updateJSON){

    dbv0_0_39_tres_update_t *dbv0_0_39_tres_update_local_var = NULL;

    // define the local list for dbv0_0_39_tres_update->tres
    list_t *tresList = NULL;

    // dbv0_0_39_tres_update->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_tres_updateJSON, "tres");
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
        v0_0_39_tres_t *tresItem = v0_0_39_tres_parseFromJSON(tres_local_nonprimitive);

        list_addElement(tresList, tresItem);
    }
    }


    dbv0_0_39_tres_update_local_var = dbv0_0_39_tres_update_create (
        tres ? tresList : NULL
        );

    return dbv0_0_39_tres_update_local_var;
end:
    if (tresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tresList) {
            v0_0_39_tres_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tresList);
        tresList = NULL;
    }
    return NULL;

}
