#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_set_config.h"



dbv0_0_39_set_config_t *dbv0_0_39_set_config_create(
    list_t *clusters,
    list_t *tres,
    list_t *accounts,
    list_t *users,
    list_t *qos,
    list_t *wckeys,
    list_t *associations
    ) {
    dbv0_0_39_set_config_t *dbv0_0_39_set_config_local_var = malloc(sizeof(dbv0_0_39_set_config_t));
    if (!dbv0_0_39_set_config_local_var) {
        return NULL;
    }
    dbv0_0_39_set_config_local_var->clusters = clusters;
    dbv0_0_39_set_config_local_var->tres = tres;
    dbv0_0_39_set_config_local_var->accounts = accounts;
    dbv0_0_39_set_config_local_var->users = users;
    dbv0_0_39_set_config_local_var->qos = qos;
    dbv0_0_39_set_config_local_var->wckeys = wckeys;
    dbv0_0_39_set_config_local_var->associations = associations;

    return dbv0_0_39_set_config_local_var;
}


void dbv0_0_39_set_config_free(dbv0_0_39_set_config_t *dbv0_0_39_set_config) {
    if(NULL == dbv0_0_39_set_config){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_set_config->clusters) {
        list_ForEach(listEntry, dbv0_0_39_set_config->clusters) {
            v0_0_39_cluster_rec_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->clusters);
        dbv0_0_39_set_config->clusters = NULL;
    }
    if (dbv0_0_39_set_config->tres) {
        list_ForEach(listEntry, dbv0_0_39_set_config->tres) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->tres);
        dbv0_0_39_set_config->tres = NULL;
    }
    if (dbv0_0_39_set_config->accounts) {
        list_ForEach(listEntry, dbv0_0_39_set_config->accounts) {
            v0_0_39_account_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->accounts);
        dbv0_0_39_set_config->accounts = NULL;
    }
    if (dbv0_0_39_set_config->users) {
        list_ForEach(listEntry, dbv0_0_39_set_config->users) {
            v0_0_39_user_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->users);
        dbv0_0_39_set_config->users = NULL;
    }
    if (dbv0_0_39_set_config->qos) {
        list_ForEach(listEntry, dbv0_0_39_set_config->qos) {
            v0_0_39_qos_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->qos);
        dbv0_0_39_set_config->qos = NULL;
    }
    if (dbv0_0_39_set_config->wckeys) {
        list_ForEach(listEntry, dbv0_0_39_set_config->wckeys) {
            v0_0_39_wckey_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->wckeys);
        dbv0_0_39_set_config->wckeys = NULL;
    }
    if (dbv0_0_39_set_config->associations) {
        list_ForEach(listEntry, dbv0_0_39_set_config->associations) {
            v0_0_39_assoc_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_set_config->associations);
        dbv0_0_39_set_config->associations = NULL;
    }
    free(dbv0_0_39_set_config);
}

cJSON *dbv0_0_39_set_config_convertToJSON(dbv0_0_39_set_config_t *dbv0_0_39_set_config) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_set_config->clusters
    if(dbv0_0_39_set_config->clusters) {
    cJSON *clusters = cJSON_AddArrayToObject(item, "clusters");
    if(clusters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *clustersListEntry;
    if (dbv0_0_39_set_config->clusters) {
    list_ForEach(clustersListEntry, dbv0_0_39_set_config->clusters) {
    cJSON *itemLocal = v0_0_39_cluster_rec_convertToJSON(clustersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(clusters, itemLocal);
    }
    }
    }


    // dbv0_0_39_set_config->tres
    if(dbv0_0_39_set_config->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "TRES");
    if(tres == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tresListEntry;
    list_ForEach(tresListEntry, dbv0_0_39_set_config->tres) {
    }
    }


    // dbv0_0_39_set_config->accounts
    if(dbv0_0_39_set_config->accounts) {
    cJSON *accounts = cJSON_AddArrayToObject(item, "accounts");
    if(accounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountsListEntry;
    if (dbv0_0_39_set_config->accounts) {
    list_ForEach(accountsListEntry, dbv0_0_39_set_config->accounts) {
    cJSON *itemLocal = v0_0_39_account_convertToJSON(accountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounts, itemLocal);
    }
    }
    }


    // dbv0_0_39_set_config->users
    if(dbv0_0_39_set_config->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (dbv0_0_39_set_config->users) {
    list_ForEach(usersListEntry, dbv0_0_39_set_config->users) {
    cJSON *itemLocal = v0_0_39_user_convertToJSON(usersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(users, itemLocal);
    }
    }
    }


    // dbv0_0_39_set_config->qos
    if(dbv0_0_39_set_config->qos) {
    cJSON *qos = cJSON_AddArrayToObject(item, "qos");
    if(qos == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *qosListEntry;
    if (dbv0_0_39_set_config->qos) {
    list_ForEach(qosListEntry, dbv0_0_39_set_config->qos) {
    cJSON *itemLocal = v0_0_39_qos_convertToJSON(qosListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(qos, itemLocal);
    }
    }
    }


    // dbv0_0_39_set_config->wckeys
    if(dbv0_0_39_set_config->wckeys) {
    cJSON *wckeys = cJSON_AddArrayToObject(item, "wckeys");
    if(wckeys == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *wckeysListEntry;
    if (dbv0_0_39_set_config->wckeys) {
    list_ForEach(wckeysListEntry, dbv0_0_39_set_config->wckeys) {
    cJSON *itemLocal = v0_0_39_wckey_convertToJSON(wckeysListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(wckeys, itemLocal);
    }
    }
    }


    // dbv0_0_39_set_config->associations
    if(dbv0_0_39_set_config->associations) {
    cJSON *associations = cJSON_AddArrayToObject(item, "associations");
    if(associations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *associationsListEntry;
    if (dbv0_0_39_set_config->associations) {
    list_ForEach(associationsListEntry, dbv0_0_39_set_config->associations) {
    cJSON *itemLocal = v0_0_39_assoc_convertToJSON(associationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(associations, itemLocal);
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

dbv0_0_39_set_config_t *dbv0_0_39_set_config_parseFromJSON(cJSON *dbv0_0_39_set_configJSON){

    dbv0_0_39_set_config_t *dbv0_0_39_set_config_local_var = NULL;

    // define the local list for dbv0_0_39_set_config->clusters
    list_t *clustersList = NULL;

    // define the local list for dbv0_0_39_set_config->tres
    list_t *tresList = NULL;

    // define the local list for dbv0_0_39_set_config->accounts
    list_t *accountsList = NULL;

    // define the local list for dbv0_0_39_set_config->users
    list_t *usersList = NULL;

    // define the local list for dbv0_0_39_set_config->qos
    list_t *qosList = NULL;

    // define the local list for dbv0_0_39_set_config->wckeys
    list_t *wckeysList = NULL;

    // define the local list for dbv0_0_39_set_config->associations
    list_t *associationsList = NULL;

    // dbv0_0_39_set_config->clusters
    cJSON *clusters = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "clusters");
    if (clusters) { 
    cJSON *clusters_local_nonprimitive = NULL;
    if(!cJSON_IsArray(clusters)){
        goto end; //nonprimitive container
    }

    clustersList = list_createList();

    cJSON_ArrayForEach(clusters_local_nonprimitive,clusters )
    {
        if(!cJSON_IsObject(clusters_local_nonprimitive)){
            goto end;
        }
        v0_0_39_cluster_rec_t *clustersItem = v0_0_39_cluster_rec_parseFromJSON(clusters_local_nonprimitive);

        list_addElement(clustersList, clustersItem);
    }
    }

    // dbv0_0_39_set_config->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "TRES");
    if (tres) { 
    cJSON *tres_local = NULL;
    if(!cJSON_IsArray(tres)) {
        goto end;//primitive container
    }
    tresList = list_createList();

    cJSON_ArrayForEach(tres_local, tres)
    {
    }
    }

    // dbv0_0_39_set_config->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "accounts");
    if (accounts) { 
    cJSON *accounts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(accounts)){
        goto end; //nonprimitive container
    }

    accountsList = list_createList();

    cJSON_ArrayForEach(accounts_local_nonprimitive,accounts )
    {
        if(!cJSON_IsObject(accounts_local_nonprimitive)){
            goto end;
        }
        v0_0_39_account_t *accountsItem = v0_0_39_account_parseFromJSON(accounts_local_nonprimitive);

        list_addElement(accountsList, accountsItem);
    }
    }

    // dbv0_0_39_set_config->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "users");
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
        v0_0_39_user_t *usersItem = v0_0_39_user_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }
    }

    // dbv0_0_39_set_config->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "qos");
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
        v0_0_39_qos_t *qosItem = v0_0_39_qos_parseFromJSON(qos_local_nonprimitive);

        list_addElement(qosList, qosItem);
    }
    }

    // dbv0_0_39_set_config->wckeys
    cJSON *wckeys = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "wckeys");
    if (wckeys) { 
    cJSON *wckeys_local_nonprimitive = NULL;
    if(!cJSON_IsArray(wckeys)){
        goto end; //nonprimitive container
    }

    wckeysList = list_createList();

    cJSON_ArrayForEach(wckeys_local_nonprimitive,wckeys )
    {
        if(!cJSON_IsObject(wckeys_local_nonprimitive)){
            goto end;
        }
        v0_0_39_wckey_t *wckeysItem = v0_0_39_wckey_parseFromJSON(wckeys_local_nonprimitive);

        list_addElement(wckeysList, wckeysItem);
    }
    }

    // dbv0_0_39_set_config->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_set_configJSON, "associations");
    if (associations) { 
    cJSON *associations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(associations)){
        goto end; //nonprimitive container
    }

    associationsList = list_createList();

    cJSON_ArrayForEach(associations_local_nonprimitive,associations )
    {
        if(!cJSON_IsObject(associations_local_nonprimitive)){
            goto end;
        }
        v0_0_39_assoc_t *associationsItem = v0_0_39_assoc_parseFromJSON(associations_local_nonprimitive);

        list_addElement(associationsList, associationsItem);
    }
    }


    dbv0_0_39_set_config_local_var = dbv0_0_39_set_config_create (
        clusters ? clustersList : NULL,
        tres ? tresList : NULL,
        accounts ? accountsList : NULL,
        users ? usersList : NULL,
        qos ? qosList : NULL,
        wckeys ? wckeysList : NULL,
        associations ? associationsList : NULL
        );

    return dbv0_0_39_set_config_local_var;
end:
    if (clustersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, clustersList) {
            v0_0_39_cluster_rec_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(clustersList);
        clustersList = NULL;
    }
    if (tresList) {
        list_freeList(tresList);
        tresList = NULL;
    }
    if (accountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountsList) {
            v0_0_39_account_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountsList);
        accountsList = NULL;
    }
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            v0_0_39_user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    if (qosList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, qosList) {
            v0_0_39_qos_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(qosList);
        qosList = NULL;
    }
    if (wckeysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, wckeysList) {
            v0_0_39_wckey_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(wckeysList);
        wckeysList = NULL;
    }
    if (associationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, associationsList) {
            v0_0_39_assoc_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(associationsList);
        associationsList = NULL;
    }
    return NULL;

}
