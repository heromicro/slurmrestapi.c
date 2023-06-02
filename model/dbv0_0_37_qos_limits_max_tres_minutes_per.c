#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_limits_max_tres_minutes_per.h"



dbv0_0_37_qos_limits_max_tres_minutes_per_t *dbv0_0_37_qos_limits_max_tres_minutes_per_create(
    list_t *job,
    list_t *account,
    list_t *user
    ) {
    dbv0_0_37_qos_limits_max_tres_minutes_per_t *dbv0_0_37_qos_limits_max_tres_minutes_per_local_var = malloc(sizeof(dbv0_0_37_qos_limits_max_tres_minutes_per_t));
    if (!dbv0_0_37_qos_limits_max_tres_minutes_per_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_limits_max_tres_minutes_per_local_var->job = job;
    dbv0_0_37_qos_limits_max_tres_minutes_per_local_var->account = account;
    dbv0_0_37_qos_limits_max_tres_minutes_per_local_var->user = user;

    return dbv0_0_37_qos_limits_max_tres_minutes_per_local_var;
}


void dbv0_0_37_qos_limits_max_tres_minutes_per_free(dbv0_0_37_qos_limits_max_tres_minutes_per_t *dbv0_0_37_qos_limits_max_tres_minutes_per) {
    if(NULL == dbv0_0_37_qos_limits_max_tres_minutes_per){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_qos_limits_max_tres_minutes_per->job) {
        list_ForEach(listEntry, dbv0_0_37_qos_limits_max_tres_minutes_per->job) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_limits_max_tres_minutes_per->job);
        dbv0_0_37_qos_limits_max_tres_minutes_per->job = NULL;
    }
    if (dbv0_0_37_qos_limits_max_tres_minutes_per->account) {
        list_ForEach(listEntry, dbv0_0_37_qos_limits_max_tres_minutes_per->account) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_limits_max_tres_minutes_per->account);
        dbv0_0_37_qos_limits_max_tres_minutes_per->account = NULL;
    }
    if (dbv0_0_37_qos_limits_max_tres_minutes_per->user) {
        list_ForEach(listEntry, dbv0_0_37_qos_limits_max_tres_minutes_per->user) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_qos_limits_max_tres_minutes_per->user);
        dbv0_0_37_qos_limits_max_tres_minutes_per->user = NULL;
    }
    free(dbv0_0_37_qos_limits_max_tres_minutes_per);
}

cJSON *dbv0_0_37_qos_limits_max_tres_minutes_per_convertToJSON(dbv0_0_37_qos_limits_max_tres_minutes_per_t *dbv0_0_37_qos_limits_max_tres_minutes_per) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_limits_max_tres_minutes_per->job
    if(dbv0_0_37_qos_limits_max_tres_minutes_per->job) {
    cJSON *job = cJSON_AddArrayToObject(item, "job");
    if(job == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobListEntry;
    if (dbv0_0_37_qos_limits_max_tres_minutes_per->job) {
    list_ForEach(jobListEntry, dbv0_0_37_qos_limits_max_tres_minutes_per->job) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(jobListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(job, itemLocal);
    }
    }
    }


    // dbv0_0_37_qos_limits_max_tres_minutes_per->account
    if(dbv0_0_37_qos_limits_max_tres_minutes_per->account) {
    cJSON *account = cJSON_AddArrayToObject(item, "account");
    if(account == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accountListEntry;
    if (dbv0_0_37_qos_limits_max_tres_minutes_per->account) {
    list_ForEach(accountListEntry, dbv0_0_37_qos_limits_max_tres_minutes_per->account) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(accountListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(account, itemLocal);
    }
    }
    }


    // dbv0_0_37_qos_limits_max_tres_minutes_per->user
    if(dbv0_0_37_qos_limits_max_tres_minutes_per->user) {
    cJSON *user = cJSON_AddArrayToObject(item, "user");
    if(user == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *userListEntry;
    if (dbv0_0_37_qos_limits_max_tres_minutes_per->user) {
    list_ForEach(userListEntry, dbv0_0_37_qos_limits_max_tres_minutes_per->user) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(userListEntry->data);
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

dbv0_0_37_qos_limits_max_tres_minutes_per_t *dbv0_0_37_qos_limits_max_tres_minutes_per_parseFromJSON(cJSON *dbv0_0_37_qos_limits_max_tres_minutes_perJSON){

    dbv0_0_37_qos_limits_max_tres_minutes_per_t *dbv0_0_37_qos_limits_max_tres_minutes_per_local_var = NULL;

    // define the local list for dbv0_0_37_qos_limits_max_tres_minutes_per->job
    list_t *jobList = NULL;

    // define the local list for dbv0_0_37_qos_limits_max_tres_minutes_per->account
    list_t *accountList = NULL;

    // define the local list for dbv0_0_37_qos_limits_max_tres_minutes_per->user
    list_t *userList = NULL;

    // dbv0_0_37_qos_limits_max_tres_minutes_per->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_max_tres_minutes_perJSON, "job");
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
        dbv0_0_37_tres_list_inner_t *jobItem = dbv0_0_37_tres_list_inner_parseFromJSON(job_local_nonprimitive);

        list_addElement(jobList, jobItem);
    }
    }

    // dbv0_0_37_qos_limits_max_tres_minutes_per->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_max_tres_minutes_perJSON, "account");
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
        dbv0_0_37_tres_list_inner_t *accountItem = dbv0_0_37_tres_list_inner_parseFromJSON(account_local_nonprimitive);

        list_addElement(accountList, accountItem);
    }
    }

    // dbv0_0_37_qos_limits_max_tres_minutes_per->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_max_tres_minutes_perJSON, "user");
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
        dbv0_0_37_tres_list_inner_t *userItem = dbv0_0_37_tres_list_inner_parseFromJSON(user_local_nonprimitive);

        list_addElement(userList, userItem);
    }
    }


    dbv0_0_37_qos_limits_max_tres_minutes_per_local_var = dbv0_0_37_qos_limits_max_tres_minutes_per_create (
        job ? jobList : NULL,
        account ? accountList : NULL,
        user ? userList : NULL
        );

    return dbv0_0_37_qos_limits_max_tres_minutes_per_local_var;
end:
    if (jobList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobList);
        jobList = NULL;
    }
    if (accountList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accountList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accountList);
        accountList = NULL;
    }
    if (userList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, userList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(userList);
        userList = NULL;
    }
    return NULL;

}
