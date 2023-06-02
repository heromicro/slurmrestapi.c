#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_diag_statistics.h"



dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics_create(
    int time_start,
    list_t *rollups,
    list_t *rpcs,
    list_t *users
    ) {
    dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics_local_var = malloc(sizeof(dbv0_0_38_diag_statistics_t));
    if (!dbv0_0_38_diag_statistics_local_var) {
        return NULL;
    }
    dbv0_0_38_diag_statistics_local_var->time_start = time_start;
    dbv0_0_38_diag_statistics_local_var->rollups = rollups;
    dbv0_0_38_diag_statistics_local_var->rpcs = rpcs;
    dbv0_0_38_diag_statistics_local_var->users = users;

    return dbv0_0_38_diag_statistics_local_var;
}


void dbv0_0_38_diag_statistics_free(dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics) {
    if(NULL == dbv0_0_38_diag_statistics){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_diag_statistics->rollups) {
        list_ForEach(listEntry, dbv0_0_38_diag_statistics->rollups) {
            dbv0_0_38_diag_statistics_rollups_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_diag_statistics->rollups);
        dbv0_0_38_diag_statistics->rollups = NULL;
    }
    if (dbv0_0_38_diag_statistics->rpcs) {
        list_ForEach(listEntry, dbv0_0_38_diag_statistics->rpcs) {
            dbv0_0_38_diag_statistics_rpcs_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_diag_statistics->rpcs);
        dbv0_0_38_diag_statistics->rpcs = NULL;
    }
    if (dbv0_0_38_diag_statistics->users) {
        list_ForEach(listEntry, dbv0_0_38_diag_statistics->users) {
            dbv0_0_38_diag_statistics_users_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_diag_statistics->users);
        dbv0_0_38_diag_statistics->users = NULL;
    }
    free(dbv0_0_38_diag_statistics);
}

cJSON *dbv0_0_38_diag_statistics_convertToJSON(dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_diag_statistics->time_start
    if(dbv0_0_38_diag_statistics->time_start) {
    if(cJSON_AddNumberToObject(item, "time_start", dbv0_0_38_diag_statistics->time_start) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_diag_statistics->rollups
    if(dbv0_0_38_diag_statistics->rollups) {
    cJSON *rollups = cJSON_AddArrayToObject(item, "rollups");
    if(rollups == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rollupsListEntry;
    if (dbv0_0_38_diag_statistics->rollups) {
    list_ForEach(rollupsListEntry, dbv0_0_38_diag_statistics->rollups) {
    cJSON *itemLocal = dbv0_0_38_diag_statistics_rollups_inner_convertToJSON(rollupsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rollups, itemLocal);
    }
    }
    }


    // dbv0_0_38_diag_statistics->rpcs
    if(dbv0_0_38_diag_statistics->rpcs) {
    cJSON *rpcs = cJSON_AddArrayToObject(item, "RPCs");
    if(rpcs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rpcsListEntry;
    if (dbv0_0_38_diag_statistics->rpcs) {
    list_ForEach(rpcsListEntry, dbv0_0_38_diag_statistics->rpcs) {
    cJSON *itemLocal = dbv0_0_38_diag_statistics_rpcs_inner_convertToJSON(rpcsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rpcs, itemLocal);
    }
    }
    }


    // dbv0_0_38_diag_statistics->users
    if(dbv0_0_38_diag_statistics->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (dbv0_0_38_diag_statistics->users) {
    list_ForEach(usersListEntry, dbv0_0_38_diag_statistics->users) {
    cJSON *itemLocal = dbv0_0_38_diag_statistics_users_inner_convertToJSON(usersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(users, itemLocal);
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

dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics_parseFromJSON(cJSON *dbv0_0_38_diag_statisticsJSON){

    dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics_local_var = NULL;

    // define the local list for dbv0_0_38_diag_statistics->rollups
    list_t *rollupsList = NULL;

    // define the local list for dbv0_0_38_diag_statistics->rpcs
    list_t *rpcsList = NULL;

    // define the local list for dbv0_0_38_diag_statistics->users
    list_t *usersList = NULL;

    // dbv0_0_38_diag_statistics->time_start
    cJSON *time_start = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statisticsJSON, "time_start");
    if (time_start) { 
    if(!cJSON_IsNumber(time_start))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_diag_statistics->rollups
    cJSON *rollups = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statisticsJSON, "rollups");
    if (rollups) { 
    cJSON *rollups_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rollups)){
        goto end; //nonprimitive container
    }

    rollupsList = list_createList();

    cJSON_ArrayForEach(rollups_local_nonprimitive,rollups )
    {
        if(!cJSON_IsObject(rollups_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_diag_statistics_rollups_inner_t *rollupsItem = dbv0_0_38_diag_statistics_rollups_inner_parseFromJSON(rollups_local_nonprimitive);

        list_addElement(rollupsList, rollupsItem);
    }
    }

    // dbv0_0_38_diag_statistics->rpcs
    cJSON *rpcs = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statisticsJSON, "RPCs");
    if (rpcs) { 
    cJSON *rpcs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rpcs)){
        goto end; //nonprimitive container
    }

    rpcsList = list_createList();

    cJSON_ArrayForEach(rpcs_local_nonprimitive,rpcs )
    {
        if(!cJSON_IsObject(rpcs_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_diag_statistics_rpcs_inner_t *rpcsItem = dbv0_0_38_diag_statistics_rpcs_inner_parseFromJSON(rpcs_local_nonprimitive);

        list_addElement(rpcsList, rpcsItem);
    }
    }

    // dbv0_0_38_diag_statistics->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statisticsJSON, "users");
    if (users) { 
    cJSON *users_local_nonprimitive = NULL;
    if(!cJSON_IsArray(users)){
        goto end; //nonprimitive container
    }

    usersList = list_createList();

    cJSON_ArrayForEach(users_local_nonprimitive,users )
    {
        if(!cJSON_IsObject(users_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_diag_statistics_users_inner_t *usersItem = dbv0_0_38_diag_statistics_users_inner_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }
    }


    dbv0_0_38_diag_statistics_local_var = dbv0_0_38_diag_statistics_create (
        time_start ? time_start->valuedouble : 0,
        rollups ? rollupsList : NULL,
        rpcs ? rpcsList : NULL,
        users ? usersList : NULL
        );

    return dbv0_0_38_diag_statistics_local_var;
end:
    if (rollupsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rollupsList) {
            dbv0_0_38_diag_statistics_rollups_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rollupsList);
        rollupsList = NULL;
    }
    if (rpcsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rpcsList) {
            dbv0_0_38_diag_statistics_rpcs_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rpcsList);
        rpcsList = NULL;
    }
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            dbv0_0_38_diag_statistics_users_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    return NULL;

}
