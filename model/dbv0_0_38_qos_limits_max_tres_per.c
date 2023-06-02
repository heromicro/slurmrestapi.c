#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos_limits_max_tres_per.h"



dbv0_0_38_qos_limits_max_tres_per_t *dbv0_0_38_qos_limits_max_tres_per_create(
    list_t *account,
    list_t *job,
    list_t *node,
    list_t *user
    ) {
    dbv0_0_38_qos_limits_max_tres_per_t *dbv0_0_38_qos_limits_max_tres_per_local_var = malloc(sizeof(dbv0_0_38_qos_limits_max_tres_per_t));
    if (!dbv0_0_38_qos_limits_max_tres_per_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_limits_max_tres_per_local_var->account = account;
    dbv0_0_38_qos_limits_max_tres_per_local_var->job = job;
    dbv0_0_38_qos_limits_max_tres_per_local_var->node = node;
    dbv0_0_38_qos_limits_max_tres_per_local_var->user = user;

    return dbv0_0_38_qos_limits_max_tres_per_local_var;
}


void dbv0_0_38_qos_limits_max_tres_per_free(dbv0_0_38_qos_limits_max_tres_per_t *dbv0_0_38_qos_limits_max_tres_per) {
    if(NULL == dbv0_0_38_qos_limits_max_tres_per){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_qos_limits_max_tres_per->account) {
        list_ForEach(listEntry, dbv0_0_38_qos_limits_max_tres_per->account) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_qos_limits_max_tres_per->account);
        dbv0_0_38_qos_limits_max_tres_per->account = NULL;
    }
    if (dbv0_0_38_qos_limits_max_tres_per->job) {
        list_ForEach(listEntry, dbv0_0_38_qos_limits_max_tres_per->job) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_qos_limits_max_tres_per->job);
        dbv0_0_38_qos_limits_max_tres_per->job = NULL;
    }
    if (dbv0_0_38_qos_limits_max_tres_per->node) {
        list_ForEach(listEntry, dbv0_0_38_qos_limits_max_tres_per->node) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_qos_limits_max_tres_per->node);
        dbv0_0_38_qos_limits_max_tres_per->node = NULL;
    }
    if (dbv0_0_38_qos_limits_max_tres_per->user) {
        list_ForEach(listEntry, dbv0_0_38_qos_limits_max_tres_per->user) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_qos_limits_max_tres_per->user);
        dbv0_0_38_qos_limits_max_tres_per->user = NULL;
    }
    free(dbv0_0_38_qos_limits_max_tres_per);
}

cJSON *dbv0_0_38_qos_limits_max_tres_per_convertToJSON(dbv0_0_38_qos_limits_max_tres_per_t *dbv0_0_38_qos_limits_max_tres_per) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos_limits_max_tres_per->account
    if(dbv0_0_38_qos_limits_max_tres_per->account) {
    cJSON *account = cJSON_AddArrayToObject(item, "account");
    if(account == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountListEntry;
    if (dbv0_0_38_qos_limits_max_tres_per->account) {
    list_ForEach(accountListEntry, dbv0_0_38_qos_limits_max_tres_per->account) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(accountListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(account, itemLocal);
    }
    }
    }


    // dbv0_0_38_qos_limits_max_tres_per->job
    if(dbv0_0_38_qos_limits_max_tres_per->job) {
    cJSON *job = cJSON_AddArrayToObject(item, "job");
    if(job == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobListEntry;
    if (dbv0_0_38_qos_limits_max_tres_per->job) {
    list_ForEach(jobListEntry, dbv0_0_38_qos_limits_max_tres_per->job) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(jobListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(job, itemLocal);
    }
    }
    }


    // dbv0_0_38_qos_limits_max_tres_per->node
    if(dbv0_0_38_qos_limits_max_tres_per->node) {
    cJSON *node = cJSON_AddArrayToObject(item, "node");
    if(node == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *nodeListEntry;
    if (dbv0_0_38_qos_limits_max_tres_per->node) {
    list_ForEach(nodeListEntry, dbv0_0_38_qos_limits_max_tres_per->node) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(nodeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(node, itemLocal);
    }
    }
    }


    // dbv0_0_38_qos_limits_max_tres_per->user
    if(dbv0_0_38_qos_limits_max_tres_per->user) {
    cJSON *user = cJSON_AddArrayToObject(item, "user");
    if(user == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *userListEntry;
    if (dbv0_0_38_qos_limits_max_tres_per->user) {
    list_ForEach(userListEntry, dbv0_0_38_qos_limits_max_tres_per->user) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(userListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(user, itemLocal);
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

dbv0_0_38_qos_limits_max_tres_per_t *dbv0_0_38_qos_limits_max_tres_per_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_tres_perJSON){

    dbv0_0_38_qos_limits_max_tres_per_t *dbv0_0_38_qos_limits_max_tres_per_local_var = NULL;

    // define the local list for dbv0_0_38_qos_limits_max_tres_per->account
    list_t *accountList = NULL;

    // define the local list for dbv0_0_38_qos_limits_max_tres_per->job
    list_t *jobList = NULL;

    // define the local list for dbv0_0_38_qos_limits_max_tres_per->node
    list_t *nodeList = NULL;

    // define the local list for dbv0_0_38_qos_limits_max_tres_per->user
    list_t *userList = NULL;

    // dbv0_0_38_qos_limits_max_tres_per->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tres_perJSON, "account");
    if (account) { 
    cJSON *account_local_nonprimitive = NULL;
    if(!cJSON_IsArray(account)){
        goto end; //nonprimitive container
    }

    accountList = list_createList();

    cJSON_ArrayForEach(account_local_nonprimitive,account )
    {
        if(!cJSON_IsObject(account_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *accountItem = dbv0_0_38_tres_list_inner_parseFromJSON(account_local_nonprimitive);

        list_addElement(accountList, accountItem);
    }
    }

    // dbv0_0_38_qos_limits_max_tres_per->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tres_perJSON, "job");
    if (job) { 
    cJSON *job_local_nonprimitive = NULL;
    if(!cJSON_IsArray(job)){
        goto end; //nonprimitive container
    }

    jobList = list_createList();

    cJSON_ArrayForEach(job_local_nonprimitive,job )
    {
        if(!cJSON_IsObject(job_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *jobItem = dbv0_0_38_tres_list_inner_parseFromJSON(job_local_nonprimitive);

        list_addElement(jobList, jobItem);
    }
    }

    // dbv0_0_38_qos_limits_max_tres_per->node
    cJSON *node = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tres_perJSON, "node");
    if (node) { 
    cJSON *node_local_nonprimitive = NULL;
    if(!cJSON_IsArray(node)){
        goto end; //nonprimitive container
    }

    nodeList = list_createList();

    cJSON_ArrayForEach(node_local_nonprimitive,node )
    {
        if(!cJSON_IsObject(node_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *nodeItem = dbv0_0_38_tres_list_inner_parseFromJSON(node_local_nonprimitive);

        list_addElement(nodeList, nodeItem);
    }
    }

    // dbv0_0_38_qos_limits_max_tres_per->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tres_perJSON, "user");
    if (user) { 
    cJSON *user_local_nonprimitive = NULL;
    if(!cJSON_IsArray(user)){
        goto end; //nonprimitive container
    }

    userList = list_createList();

    cJSON_ArrayForEach(user_local_nonprimitive,user )
    {
        if(!cJSON_IsObject(user_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *userItem = dbv0_0_38_tres_list_inner_parseFromJSON(user_local_nonprimitive);

        list_addElement(userList, userItem);
    }
    }


    dbv0_0_38_qos_limits_max_tres_per_local_var = dbv0_0_38_qos_limits_max_tres_per_create (
        account ? accountList : NULL,
        job ? jobList : NULL,
        node ? nodeList : NULL,
        user ? userList : NULL
        );

    return dbv0_0_38_qos_limits_max_tres_per_local_var;
end:
    if (accountList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountList);
        accountList = NULL;
    }
    if (jobList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobList);
        jobList = NULL;
    }
    if (nodeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, nodeList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(nodeList);
        nodeList = NULL;
    }
    if (userList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, userList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(userList);
        userList = NULL;
    }
    return NULL;

}
