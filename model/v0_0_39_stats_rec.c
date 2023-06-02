#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_rec.h"



v0_0_39_stats_rec_t *v0_0_39_stats_rec_create(
    long time_start,
    list_t *rollups,
    list_t *rpcs,
    list_t *users
    ) {
    v0_0_39_stats_rec_t *v0_0_39_stats_rec_local_var = malloc(sizeof(v0_0_39_stats_rec_t));
    if (!v0_0_39_stats_rec_local_var) {
        return NULL;
    }
    v0_0_39_stats_rec_local_var->time_start = time_start;
    v0_0_39_stats_rec_local_var->rollups = rollups;
    v0_0_39_stats_rec_local_var->rpcs = rpcs;
    v0_0_39_stats_rec_local_var->users = users;

    return v0_0_39_stats_rec_local_var;
}


void v0_0_39_stats_rec_free(v0_0_39_stats_rec_t *v0_0_39_stats_rec) {
    if(NULL == v0_0_39_stats_rec){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_stats_rec->rollups) {
        list_ForEach(listEntry, v0_0_39_stats_rec->rollups) {
            v0_0_39_rollup_stats_inner_free(listEntry->data);
        }
        list_freeList(v0_0_39_stats_rec->rollups);
        v0_0_39_stats_rec->rollups = NULL;
    }
    if (v0_0_39_stats_rec->rpcs) {
        list_ForEach(listEntry, v0_0_39_stats_rec->rpcs) {
            v0_0_39_stats_rpc_free(listEntry->data);
        }
        list_freeList(v0_0_39_stats_rec->rpcs);
        v0_0_39_stats_rec->rpcs = NULL;
    }
    if (v0_0_39_stats_rec->users) {
        list_ForEach(listEntry, v0_0_39_stats_rec->users) {
            v0_0_39_stats_user_free(listEntry->data);
        }
        list_freeList(v0_0_39_stats_rec->users);
        v0_0_39_stats_rec->users = NULL;
    }
    free(v0_0_39_stats_rec);
}

cJSON *v0_0_39_stats_rec_convertToJSON(v0_0_39_stats_rec_t *v0_0_39_stats_rec) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_rec->time_start
    if(v0_0_39_stats_rec->time_start) {
    if(cJSON_AddNumberToObject(item, "time_start", v0_0_39_stats_rec->time_start) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_rec->rollups
    if(v0_0_39_stats_rec->rollups) {
    cJSON *rollups = cJSON_AddArrayToObject(item, "rollups");
    if(rollups == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rollupsListEntry;
    if (v0_0_39_stats_rec->rollups) {
    list_ForEach(rollupsListEntry, v0_0_39_stats_rec->rollups) {
    cJSON *itemLocal = v0_0_39_rollup_stats_inner_convertToJSON(rollupsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rollups, itemLocal);
    }
    }
    }


    // v0_0_39_stats_rec->rpcs
    if(v0_0_39_stats_rec->rpcs) {
    cJSON *rpcs = cJSON_AddArrayToObject(item, "RPCs");
    if(rpcs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rpcsListEntry;
    if (v0_0_39_stats_rec->rpcs) {
    list_ForEach(rpcsListEntry, v0_0_39_stats_rec->rpcs) {
    cJSON *itemLocal = v0_0_39_stats_rpc_convertToJSON(rpcsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rpcs, itemLocal);
    }
    }
    }


    // v0_0_39_stats_rec->users
    if(v0_0_39_stats_rec->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (v0_0_39_stats_rec->users) {
    list_ForEach(usersListEntry, v0_0_39_stats_rec->users) {
    cJSON *itemLocal = v0_0_39_stats_user_convertToJSON(usersListEntry->data);
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

v0_0_39_stats_rec_t *v0_0_39_stats_rec_parseFromJSON(cJSON *v0_0_39_stats_recJSON){

    v0_0_39_stats_rec_t *v0_0_39_stats_rec_local_var = NULL;

    // define the local list for v0_0_39_stats_rec->rollups
    list_t *rollupsList = NULL;

    // define the local list for v0_0_39_stats_rec->rpcs
    list_t *rpcsList = NULL;

    // define the local list for v0_0_39_stats_rec->users
    list_t *usersList = NULL;

    // v0_0_39_stats_rec->time_start
    cJSON *time_start = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_recJSON, "time_start");
    if (time_start) { 
    if(!cJSON_IsNumber(time_start))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_rec->rollups
    cJSON *rollups = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_recJSON, "rollups");
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
        v0_0_39_rollup_stats_inner_t *rollupsItem = v0_0_39_rollup_stats_inner_parseFromJSON(rollups_local_nonprimitive);

        list_addElement(rollupsList, rollupsItem);
    }
    }

    // v0_0_39_stats_rec->rpcs
    cJSON *rpcs = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_recJSON, "RPCs");
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
        v0_0_39_stats_rpc_t *rpcsItem = v0_0_39_stats_rpc_parseFromJSON(rpcs_local_nonprimitive);

        list_addElement(rpcsList, rpcsItem);
    }
    }

    // v0_0_39_stats_rec->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_recJSON, "users");
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
        v0_0_39_stats_user_t *usersItem = v0_0_39_stats_user_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }
    }


    v0_0_39_stats_rec_local_var = v0_0_39_stats_rec_create (
        time_start ? time_start->valuedouble : 0,
        rollups ? rollupsList : NULL,
        rpcs ? rpcsList : NULL,
        users ? usersList : NULL
        );

    return v0_0_39_stats_rec_local_var;
end:
    if (rollupsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rollupsList) {
            v0_0_39_rollup_stats_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rollupsList);
        rollupsList = NULL;
    }
    if (rpcsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rpcsList) {
            v0_0_39_stats_rpc_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rpcsList);
        rpcsList = NULL;
    }
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            v0_0_39_stats_user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    return NULL;

}
