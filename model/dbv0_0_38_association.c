#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_association.h"



dbv0_0_38_association_t *dbv0_0_38_association_create(
    char *account,
    char *cluster,
    dbv0_0_38_association_default_t *_default,
    list_t *flags,
    dbv0_0_38_association_max_t *max,
    dbv0_0_38_association_min_t *min,
    char *parent_account,
    char *partition,
    int priority,
    int shares_raw,
    dbv0_0_38_association_usage_t *usage,
    char *user,
    list_t *qos
    ) {
    dbv0_0_38_association_t *dbv0_0_38_association_local_var = malloc(sizeof(dbv0_0_38_association_t));
    if (!dbv0_0_38_association_local_var) {
        return NULL;
    }
    dbv0_0_38_association_local_var->account = account;
    dbv0_0_38_association_local_var->cluster = cluster;
    dbv0_0_38_association_local_var->_default = _default;
    dbv0_0_38_association_local_var->flags = flags;
    dbv0_0_38_association_local_var->max = max;
    dbv0_0_38_association_local_var->min = min;
    dbv0_0_38_association_local_var->parent_account = parent_account;
    dbv0_0_38_association_local_var->partition = partition;
    dbv0_0_38_association_local_var->priority = priority;
    dbv0_0_38_association_local_var->shares_raw = shares_raw;
    dbv0_0_38_association_local_var->usage = usage;
    dbv0_0_38_association_local_var->user = user;
    dbv0_0_38_association_local_var->qos = qos;

    return dbv0_0_38_association_local_var;
}


void dbv0_0_38_association_free(dbv0_0_38_association_t *dbv0_0_38_association) {
    if(NULL == dbv0_0_38_association){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_association->account) {
        free(dbv0_0_38_association->account);
        dbv0_0_38_association->account = NULL;
    }
    if (dbv0_0_38_association->cluster) {
        free(dbv0_0_38_association->cluster);
        dbv0_0_38_association->cluster = NULL;
    }
    if (dbv0_0_38_association->_default) {
        dbv0_0_38_association_default_free(dbv0_0_38_association->_default);
        dbv0_0_38_association->_default = NULL;
    }
    if (dbv0_0_38_association->flags) {
        list_ForEach(listEntry, dbv0_0_38_association->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_association->flags);
        dbv0_0_38_association->flags = NULL;
    }
    if (dbv0_0_38_association->max) {
        dbv0_0_38_association_max_free(dbv0_0_38_association->max);
        dbv0_0_38_association->max = NULL;
    }
    if (dbv0_0_38_association->min) {
        dbv0_0_38_association_min_free(dbv0_0_38_association->min);
        dbv0_0_38_association->min = NULL;
    }
    if (dbv0_0_38_association->parent_account) {
        free(dbv0_0_38_association->parent_account);
        dbv0_0_38_association->parent_account = NULL;
    }
    if (dbv0_0_38_association->partition) {
        free(dbv0_0_38_association->partition);
        dbv0_0_38_association->partition = NULL;
    }
    if (dbv0_0_38_association->usage) {
        dbv0_0_38_association_usage_free(dbv0_0_38_association->usage);
        dbv0_0_38_association->usage = NULL;
    }
    if (dbv0_0_38_association->user) {
        free(dbv0_0_38_association->user);
        dbv0_0_38_association->user = NULL;
    }
    if (dbv0_0_38_association->qos) {
        list_ForEach(listEntry, dbv0_0_38_association->qos) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_association->qos);
        dbv0_0_38_association->qos = NULL;
    }
    free(dbv0_0_38_association);
}

cJSON *dbv0_0_38_association_convertToJSON(dbv0_0_38_association_t *dbv0_0_38_association) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_association->account
    if(dbv0_0_38_association->account) {
    if(cJSON_AddStringToObject(item, "account", dbv0_0_38_association->account) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association->cluster
    if(dbv0_0_38_association->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", dbv0_0_38_association->cluster) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association->_default
    if(dbv0_0_38_association->_default) {
    cJSON *_default_local_JSON = dbv0_0_38_association_default_convertToJSON(dbv0_0_38_association->_default);
    if(_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "default", _default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_association->flags
    if(dbv0_0_38_association->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_38_association->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_38_association->max
    if(dbv0_0_38_association->max) {
    cJSON *max_local_JSON = dbv0_0_38_association_max_convertToJSON(dbv0_0_38_association->max);
    if(max_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "max", max_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_association->min
    if(dbv0_0_38_association->min) {
    cJSON *min_local_JSON = dbv0_0_38_association_min_convertToJSON(dbv0_0_38_association->min);
    if(min_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "min", min_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_association->parent_account
    if(dbv0_0_38_association->parent_account) {
    if(cJSON_AddStringToObject(item, "parent_account", dbv0_0_38_association->parent_account) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association->partition
    if(dbv0_0_38_association->partition) {
    if(cJSON_AddStringToObject(item, "partition", dbv0_0_38_association->partition) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association->priority
    if(dbv0_0_38_association->priority) {
    if(cJSON_AddNumberToObject(item, "priority", dbv0_0_38_association->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_association->shares_raw
    if(dbv0_0_38_association->shares_raw) {
    if(cJSON_AddNumberToObject(item, "shares_raw", dbv0_0_38_association->shares_raw) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_association->usage
    if(dbv0_0_38_association->usage) {
    cJSON *usage_local_JSON = dbv0_0_38_association_usage_convertToJSON(dbv0_0_38_association->usage);
    if(usage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "usage", usage_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_association->user
    if(dbv0_0_38_association->user) {
    if(cJSON_AddStringToObject(item, "user", dbv0_0_38_association->user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association->qos
    if(dbv0_0_38_association->qos) {
    cJSON *qos = cJSON_AddArrayToObject(item, "QOS");
    if(qos == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *qosListEntry;
    list_ForEach(qosListEntry, dbv0_0_38_association->qos) {
    if(cJSON_AddStringToObject(qos, "", (char*)qosListEntry->data) == NULL)
    {
        goto fail;
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

dbv0_0_38_association_t *dbv0_0_38_association_parseFromJSON(cJSON *dbv0_0_38_associationJSON){

    dbv0_0_38_association_t *dbv0_0_38_association_local_var = NULL;

    // define the local variable for dbv0_0_38_association->_default
    dbv0_0_38_association_default_t *_default_local_nonprim = NULL;

    // define the local list for dbv0_0_38_association->flags
    list_t *flagsList = NULL;

    // define the local variable for dbv0_0_38_association->max
    dbv0_0_38_association_max_t *max_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_association->min
    dbv0_0_38_association_min_t *min_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_association->usage
    dbv0_0_38_association_usage_t *usage_local_nonprim = NULL;

    // define the local list for dbv0_0_38_association->qos
    list_t *qosList = NULL;

    // dbv0_0_38_association->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "default");
    if (_default) { 
    _default_local_nonprim = dbv0_0_38_association_default_parseFromJSON(_default); //nonprimitive
    }

    // dbv0_0_38_association->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "flags");
    if (flags) { 
    cJSON *flags_local = NULL;
    if(!cJSON_IsArray(flags)) {
        goto end;//primitive container
    }
    flagsList = list_createList();

    cJSON_ArrayForEach(flags_local, flags)
    {
        if(!cJSON_IsString(flags_local))
        {
            goto end;
        }
        list_addElement(flagsList , strdup(flags_local->valuestring));
    }
    }

    // dbv0_0_38_association->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "max");
    if (max) { 
    max_local_nonprim = dbv0_0_38_association_max_parseFromJSON(max); //nonprimitive
    }

    // dbv0_0_38_association->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "min");
    if (min) { 
    min_local_nonprim = dbv0_0_38_association_min_parseFromJSON(min); //nonprimitive
    }

    // dbv0_0_38_association->parent_account
    cJSON *parent_account = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "parent_account");
    if (parent_account) { 
    if(!cJSON_IsString(parent_account) && !cJSON_IsNull(parent_account))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_association->shares_raw
    cJSON *shares_raw = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "shares_raw");
    if (shares_raw) { 
    if(!cJSON_IsNumber(shares_raw))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_association->usage
    cJSON *usage = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "usage");
    if (usage) { 
    usage_local_nonprim = dbv0_0_38_association_usage_parseFromJSON(usage); //nonprimitive
    }

    // dbv0_0_38_association->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_associationJSON, "QOS");
    if (qos) { 
    cJSON *qos_local = NULL;
    if(!cJSON_IsArray(qos)) {
        goto end;//primitive container
    }
    qosList = list_createList();

    cJSON_ArrayForEach(qos_local, qos)
    {
        if(!cJSON_IsString(qos_local))
        {
            goto end;
        }
        list_addElement(qosList , strdup(qos_local->valuestring));
    }
    }


    dbv0_0_38_association_local_var = dbv0_0_38_association_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        _default ? _default_local_nonprim : NULL,
        flags ? flagsList : NULL,
        max ? max_local_nonprim : NULL,
        min ? min_local_nonprim : NULL,
        parent_account && !cJSON_IsNull(parent_account) ? strdup(parent_account->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        priority ? priority->valuedouble : 0,
        shares_raw ? shares_raw->valuedouble : 0,
        usage ? usage_local_nonprim : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        qos ? qosList : NULL
        );

    return dbv0_0_38_association_local_var;
end:
    if (_default_local_nonprim) {
        dbv0_0_38_association_default_free(_default_local_nonprim);
        _default_local_nonprim = NULL;
    }
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (max_local_nonprim) {
        dbv0_0_38_association_max_free(max_local_nonprim);
        max_local_nonprim = NULL;
    }
    if (min_local_nonprim) {
        dbv0_0_38_association_min_free(min_local_nonprim);
        min_local_nonprim = NULL;
    }
    if (usage_local_nonprim) {
        dbv0_0_38_association_usage_free(usage_local_nonprim);
        usage_local_nonprim = NULL;
    }
    if (qosList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, qosList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(qosList);
        qosList = NULL;
    }
    return NULL;

}
