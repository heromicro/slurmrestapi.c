#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max_tres_minutes.h"



dbv0_0_37_association_max_tres_minutes_t *dbv0_0_37_association_max_tres_minutes_create(
    dbv0_0_37_association_max_tres_minutes_per_t *per,
    list_t *total
    ) {
    dbv0_0_37_association_max_tres_minutes_t *dbv0_0_37_association_max_tres_minutes_local_var = malloc(sizeof(dbv0_0_37_association_max_tres_minutes_t));
    if (!dbv0_0_37_association_max_tres_minutes_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_tres_minutes_local_var->per = per;
    dbv0_0_37_association_max_tres_minutes_local_var->total = total;

    return dbv0_0_37_association_max_tres_minutes_local_var;
}


void dbv0_0_37_association_max_tres_minutes_free(dbv0_0_37_association_max_tres_minutes_t *dbv0_0_37_association_max_tres_minutes) {
    if(NULL == dbv0_0_37_association_max_tres_minutes){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_max_tres_minutes->per) {
        dbv0_0_37_association_max_tres_minutes_per_free(dbv0_0_37_association_max_tres_minutes->per);
        dbv0_0_37_association_max_tres_minutes->per = NULL;
    }
    if (dbv0_0_37_association_max_tres_minutes->total) {
        list_ForEach(listEntry, dbv0_0_37_association_max_tres_minutes->total) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_association_max_tres_minutes->total);
        dbv0_0_37_association_max_tres_minutes->total = NULL;
    }
    free(dbv0_0_37_association_max_tres_minutes);
}

cJSON *dbv0_0_37_association_max_tres_minutes_convertToJSON(dbv0_0_37_association_max_tres_minutes_t *dbv0_0_37_association_max_tres_minutes) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max_tres_minutes->per
    if(dbv0_0_37_association_max_tres_minutes->per) {
    cJSON *per_local_JSON = dbv0_0_37_association_max_tres_minutes_per_convertToJSON(dbv0_0_37_association_max_tres_minutes->per);
    if(per_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "per", per_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_association_max_tres_minutes->total
    if(dbv0_0_37_association_max_tres_minutes->total) {
    cJSON *total = cJSON_AddArrayToObject(item, "total");
    if(total == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *totalListEntry;
    if (dbv0_0_37_association_max_tres_minutes->total) {
    list_ForEach(totalListEntry, dbv0_0_37_association_max_tres_minutes->total) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(totalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(total, itemLocal);
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

dbv0_0_37_association_max_tres_minutes_t *dbv0_0_37_association_max_tres_minutes_parseFromJSON(cJSON *dbv0_0_37_association_max_tres_minutesJSON){

    dbv0_0_37_association_max_tres_minutes_t *dbv0_0_37_association_max_tres_minutes_local_var = NULL;

    // define the local variable for dbv0_0_37_association_max_tres_minutes->per
    dbv0_0_37_association_max_tres_minutes_per_t *per_local_nonprim = NULL;

    // define the local list for dbv0_0_37_association_max_tres_minutes->total
    list_t *totalList = NULL;

    // dbv0_0_37_association_max_tres_minutes->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tres_minutesJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_37_association_max_tres_minutes_per_parseFromJSON(per); //nonprimitive
    }

    // dbv0_0_37_association_max_tres_minutes->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tres_minutesJSON, "total");
    if (total) { 
    cJSON *total_local_nonprimitive = NULL;
    if(!cJSON_IsArray(total)){
        goto end; //nonprimitive container
    }

    totalList = list_createList();

    cJSON_ArrayForEach(total_local_nonprimitive,total )
    {
        if(!cJSON_IsObject(total_local_nonprimitive)){
            goto end;
        }
        dbv0_0_37_tres_list_inner_t *totalItem = dbv0_0_37_tres_list_inner_parseFromJSON(total_local_nonprimitive);

        list_addElement(totalList, totalItem);
    }
    }


    dbv0_0_37_association_max_tres_minutes_local_var = dbv0_0_37_association_max_tres_minutes_create (
        per ? per_local_nonprim : NULL,
        total ? totalList : NULL
        );

    return dbv0_0_37_association_max_tres_minutes_local_var;
end:
    if (per_local_nonprim) {
        dbv0_0_37_association_max_tres_minutes_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    if (totalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, totalList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(totalList);
        totalList = NULL;
    }
    return NULL;

}
