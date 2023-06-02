#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max_tres_group.h"



dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group_create(
    list_t *minutes,
    list_t *active
    ) {
    dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group_local_var = malloc(sizeof(dbv0_0_37_association_max_tres_group_t));
    if (!dbv0_0_37_association_max_tres_group_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_tres_group_local_var->minutes = minutes;
    dbv0_0_37_association_max_tres_group_local_var->active = active;

    return dbv0_0_37_association_max_tres_group_local_var;
}


void dbv0_0_37_association_max_tres_group_free(dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group) {
    if(NULL == dbv0_0_37_association_max_tres_group){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_max_tres_group->minutes) {
        list_ForEach(listEntry, dbv0_0_37_association_max_tres_group->minutes) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_association_max_tres_group->minutes);
        dbv0_0_37_association_max_tres_group->minutes = NULL;
    }
    if (dbv0_0_37_association_max_tres_group->active) {
        list_ForEach(listEntry, dbv0_0_37_association_max_tres_group->active) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_association_max_tres_group->active);
        dbv0_0_37_association_max_tres_group->active = NULL;
    }
    free(dbv0_0_37_association_max_tres_group);
}

cJSON *dbv0_0_37_association_max_tres_group_convertToJSON(dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max_tres_group->minutes
    if(dbv0_0_37_association_max_tres_group->minutes) {
    cJSON *minutes = cJSON_AddArrayToObject(item, "minutes");
    if(minutes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *minutesListEntry;
    if (dbv0_0_37_association_max_tres_group->minutes) {
    list_ForEach(minutesListEntry, dbv0_0_37_association_max_tres_group->minutes) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(minutesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(minutes, itemLocal);
    }
    }
    }


    // dbv0_0_37_association_max_tres_group->active
    if(dbv0_0_37_association_max_tres_group->active) {
    cJSON *active = cJSON_AddArrayToObject(item, "active");
    if(active == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *activeListEntry;
    if (dbv0_0_37_association_max_tres_group->active) {
    list_ForEach(activeListEntry, dbv0_0_37_association_max_tres_group->active) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(activeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(active, itemLocal);
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

dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group_parseFromJSON(cJSON *dbv0_0_37_association_max_tres_groupJSON){

    dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group_local_var = NULL;

    // define the local list for dbv0_0_37_association_max_tres_group->minutes
    list_t *minutesList = NULL;

    // define the local list for dbv0_0_37_association_max_tres_group->active
    list_t *activeList = NULL;

    // dbv0_0_37_association_max_tres_group->minutes
    cJSON *minutes = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tres_groupJSON, "minutes");
    if (minutes) { 
    cJSON *minutes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(minutes)){
        goto end; //nonprimitive container
    }

    minutesList = list_createList();

    cJSON_ArrayForEach(minutes_local_nonprimitive,minutes )
    {
        if(!cJSON_IsObject(minutes_local_nonprimitive)){
            goto end;
        }
        dbv0_0_37_tres_list_inner_t *minutesItem = dbv0_0_37_tres_list_inner_parseFromJSON(minutes_local_nonprimitive);

        list_addElement(minutesList, minutesItem);
    }
    }

    // dbv0_0_37_association_max_tres_group->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_tres_groupJSON, "active");
    if (active) { 
    cJSON *active_local_nonprimitive = NULL;
    if(!cJSON_IsArray(active)){
        goto end; //nonprimitive container
    }

    activeList = list_createList();

    cJSON_ArrayForEach(active_local_nonprimitive,active )
    {
        if(!cJSON_IsObject(active_local_nonprimitive)){
            goto end;
        }
        dbv0_0_37_tres_list_inner_t *activeItem = dbv0_0_37_tres_list_inner_parseFromJSON(active_local_nonprimitive);

        list_addElement(activeList, activeItem);
    }
    }


    dbv0_0_37_association_max_tres_group_local_var = dbv0_0_37_association_max_tres_group_create (
        minutes ? minutesList : NULL,
        active ? activeList : NULL
        );

    return dbv0_0_37_association_max_tres_group_local_var;
end:
    if (minutesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, minutesList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(minutesList);
        minutesList = NULL;
    }
    if (activeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, activeList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(activeList);
        activeList = NULL;
    }
    return NULL;

}
