#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max_tres.h"



dbv0_0_37_association_max_tres_t *dbv0_0_37_association_max_tres_create(
    dbv0_0_37_association_max_tres_group_t *group,
    dbv0_0_37_association_max_tres_per_t *per,
    list_t *total,
    dbv0_0_37_association_max_tres_minutes_t *minutes
    ) {
    dbv0_0_37_association_max_tres_t *dbv0_0_37_association_max_tres_local_var = malloc(sizeof(dbv0_0_37_association_max_tres_t));
    if (!dbv0_0_37_association_max_tres_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_tres_local_var->group = group;
    dbv0_0_37_association_max_tres_local_var->per = per;
    dbv0_0_37_association_max_tres_local_var->total = total;
    dbv0_0_37_association_max_tres_local_var->minutes = minutes;

    return dbv0_0_37_association_max_tres_local_var;
}


void dbv0_0_37_association_max_tres_free(dbv0_0_37_association_max_tres_t *dbv0_0_37_association_max_tres) {
    if(NULL == dbv0_0_37_association_max_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_max_tres->group) {
        dbv0_0_37_association_max_tres_group_free(dbv0_0_37_association_max_tres->group);
        dbv0_0_37_association_max_tres->group = NULL;
    }
    if (dbv0_0_37_association_max_tres->per) {
        dbv0_0_37_association_max_tres_per_free(dbv0_0_37_association_max_tres->per);
        dbv0_0_37_association_max_tres->per = NULL;
    }
    if (dbv0_0_37_association_max_tres->total) {
        list_ForEach(listEntry, dbv0_0_37_association_max_tres->total) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_association_max_tres->total);
        dbv0_0_37_association_max_tres->total = NULL;
    }
    if (dbv0_0_37_association_max_tres->minutes) {
        dbv0_0_37_association_max_tres_minutes_free(dbv0_0_37_association_max_tres->minutes);
        dbv0_0_37_association_max_tres->minutes = NULL;
    }
    free(dbv0_0_37_association_max_tres);
}

cJSON *dbv0_0_37_association_max_tres_convertToJSON(dbv0_0_37_association_max_tres_t *dbv0_0_37_association_max_tres) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max_tres->group
    if(dbv0_0_37_association_max_tres->group) {
    cJSON *group_local_JSON = dbv0_0_37_association_max_tres_group_convertToJSON(dbv0_0_37_association_max_tres->group);
    if(group_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "group", group_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_association_max_tres->per
    if(dbv0_0_37_association_max_tres->per) {
    cJSON *per_local_JSON = dbv0_0_37_association_max_tres_per_convertToJSON(dbv0_0_37_association_max_tres->per);
    if(per_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "per", per_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_association_max_tres->total
    if(dbv0_0_37_association_max_tres->total) {
    cJSON *total = cJSON_AddArrayToObject(item, "total");
    if(total == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *totalListEntry;
    if (dbv0_0_37_association_max_tres->total) {
    list_ForEach(totalListEntry, dbv0_0_37_association_max_tres->total) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(totalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(total, itemLocal);
    }
    }
    }


    // dbv0_0_37_association_max_tres->minutes
    if(dbv0_0_37_association_max_tres->minutes) {
    cJSON *minutes_local_JSON = dbv0_0_37_association_max_tres_minutes_convertToJSON(dbv0_0_37_association_max_tres->minutes);
    if(minutes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "minutes", minutes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_37_association_max_tres_t *dbv0_0_37_association_max_tres_parseFromJSON(cJSON *dbv0_0_37_association_max_tresJSON){

    dbv0_0_37_association_max_tres_t *dbv0_0_37_association_max_tres_local_var = NULL;

    // define the local variable for dbv0_0_37_association_max_tres->group
    dbv0_0_37_association_max_tres_group_t *group_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_association_max_tres->per
    dbv0_0_37_association_max_tres_per_t *per_local_nonprim = NULL;

    // define the local list for dbv0_0_37_association_max_tres->total
    list_t *totalList = NULL;

    // define the local variable for dbv0_0_37_association_max_tres->minutes
    dbv0_0_37_association_max_tres_minutes_t *minutes_local_nonprim = NULL;

    // dbv0_0_37_association_max_tres->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tresJSON, "group");
    if (group) { 
    group_local_nonprim = dbv0_0_37_association_max_tres_group_parseFromJSON(group); //nonprimitive
    }

    // dbv0_0_37_association_max_tres->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tresJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_37_association_max_tres_per_parseFromJSON(per); //nonprimitive
    }

    // dbv0_0_37_association_max_tres->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tresJSON, "total");
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

    // dbv0_0_37_association_max_tres->minutes
    cJSON *minutes = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tresJSON, "minutes");
    if (minutes) { 
    minutes_local_nonprim = dbv0_0_37_association_max_tres_minutes_parseFromJSON(minutes); //nonprimitive
    }


    dbv0_0_37_association_max_tres_local_var = dbv0_0_37_association_max_tres_create (
        group ? group_local_nonprim : NULL,
        per ? per_local_nonprim : NULL,
        total ? totalList : NULL,
        minutes ? minutes_local_nonprim : NULL
        );

    return dbv0_0_37_association_max_tres_local_var;
end:
    if (group_local_nonprim) {
        dbv0_0_37_association_max_tres_group_free(group_local_nonprim);
        group_local_nonprim = NULL;
    }
    if (per_local_nonprim) {
        dbv0_0_37_association_max_tres_per_free(per_local_nonprim);
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
    if (minutes_local_nonprim) {
        dbv0_0_37_association_max_tres_minutes_free(minutes_local_nonprim);
        minutes_local_nonprim = NULL;
    }
    return NULL;

}
