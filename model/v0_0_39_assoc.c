#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc.h"


char* flagsv0_0_39_assoc_ToString(slurm_rest_api_v0_0_39_assoc_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "DELETED" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_assoc_FLAGS_e flagsv0_0_39_assoc_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "DELETED" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_assoc_t *v0_0_39_assoc_create(
    char *account,
    char *cluster,
    v0_0_39_assoc_default_t *_default,
    list_t *flags,
    v0_0_39_assoc_max_t *max,
    int is_default,
    v0_0_39_assoc_min_t *min,
    char *parent_account,
    char *partition,
    v0_0_39_uint32_no_val_t *priority,
    list_t *qos,
    int shares_raw,
    v0_0_39_assoc_usage_t *usage,
    char *user
    ) {
    v0_0_39_assoc_t *v0_0_39_assoc_local_var = malloc(sizeof(v0_0_39_assoc_t));
    if (!v0_0_39_assoc_local_var) {
        return NULL;
    }
    v0_0_39_assoc_local_var->account = account;
    v0_0_39_assoc_local_var->cluster = cluster;
    v0_0_39_assoc_local_var->_default = _default;
    v0_0_39_assoc_local_var->flags = flags;
    v0_0_39_assoc_local_var->max = max;
    v0_0_39_assoc_local_var->is_default = is_default;
    v0_0_39_assoc_local_var->min = min;
    v0_0_39_assoc_local_var->parent_account = parent_account;
    v0_0_39_assoc_local_var->partition = partition;
    v0_0_39_assoc_local_var->priority = priority;
    v0_0_39_assoc_local_var->qos = qos;
    v0_0_39_assoc_local_var->shares_raw = shares_raw;
    v0_0_39_assoc_local_var->usage = usage;
    v0_0_39_assoc_local_var->user = user;

    return v0_0_39_assoc_local_var;
}


void v0_0_39_assoc_free(v0_0_39_assoc_t *v0_0_39_assoc) {
    if(NULL == v0_0_39_assoc){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_assoc->account) {
        free(v0_0_39_assoc->account);
        v0_0_39_assoc->account = NULL;
    }
    if (v0_0_39_assoc->cluster) {
        free(v0_0_39_assoc->cluster);
        v0_0_39_assoc->cluster = NULL;
    }
    if (v0_0_39_assoc->_default) {
        v0_0_39_assoc_default_free(v0_0_39_assoc->_default);
        v0_0_39_assoc->_default = NULL;
    }
    if (v0_0_39_assoc->flags) {
        list_ForEach(listEntry, v0_0_39_assoc->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_assoc->flags);
        v0_0_39_assoc->flags = NULL;
    }
    if (v0_0_39_assoc->max) {
        v0_0_39_assoc_max_free(v0_0_39_assoc->max);
        v0_0_39_assoc->max = NULL;
    }
    if (v0_0_39_assoc->min) {
        v0_0_39_assoc_min_free(v0_0_39_assoc->min);
        v0_0_39_assoc->min = NULL;
    }
    if (v0_0_39_assoc->parent_account) {
        free(v0_0_39_assoc->parent_account);
        v0_0_39_assoc->parent_account = NULL;
    }
    if (v0_0_39_assoc->partition) {
        free(v0_0_39_assoc->partition);
        v0_0_39_assoc->partition = NULL;
    }
    if (v0_0_39_assoc->priority) {
        v0_0_39_uint32_no_val_free(v0_0_39_assoc->priority);
        v0_0_39_assoc->priority = NULL;
    }
    if (v0_0_39_assoc->qos) {
        list_ForEach(listEntry, v0_0_39_assoc->qos) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_assoc->qos);
        v0_0_39_assoc->qos = NULL;
    }
    if (v0_0_39_assoc->usage) {
        v0_0_39_assoc_usage_free(v0_0_39_assoc->usage);
        v0_0_39_assoc->usage = NULL;
    }
    if (v0_0_39_assoc->user) {
        free(v0_0_39_assoc->user);
        v0_0_39_assoc->user = NULL;
    }
    free(v0_0_39_assoc);
}

cJSON *v0_0_39_assoc_convertToJSON(v0_0_39_assoc_t *v0_0_39_assoc) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc->account
    if(v0_0_39_assoc->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_39_assoc->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc->cluster
    if(v0_0_39_assoc->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", v0_0_39_assoc->cluster) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc->_default
    if(v0_0_39_assoc->_default) {
    cJSON *_default_local_JSON = v0_0_39_assoc_default_convertToJSON(v0_0_39_assoc->_default);
    if(_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "default", _default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_assoc->flags
    if(v0_0_39_assoc->flags != slurm_rest_api_v0_0_39_assoc_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_assoc->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_assoc->max
    if(v0_0_39_assoc->max) {
    cJSON *max_local_JSON = v0_0_39_assoc_max_convertToJSON(v0_0_39_assoc->max);
    if(max_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "max", max_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_assoc->is_default
    if(v0_0_39_assoc->is_default) {
    if(cJSON_AddBoolToObject(item, "is_default", v0_0_39_assoc->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_assoc->min
    if(v0_0_39_assoc->min) {
    cJSON *min_local_JSON = v0_0_39_assoc_min_convertToJSON(v0_0_39_assoc->min);
    if(min_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "min", min_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_assoc->parent_account
    if(v0_0_39_assoc->parent_account) {
    if(cJSON_AddStringToObject(item, "parent_account", v0_0_39_assoc->parent_account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc->partition
    if(v0_0_39_assoc->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_39_assoc->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc->priority
    if(v0_0_39_assoc->priority) {
    cJSON *priority_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_assoc->priority);
    if(priority_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "priority", priority_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_assoc->qos
    if(v0_0_39_assoc->qos) {
    cJSON *qos = cJSON_AddArrayToObject(item, "qos");
    if(qos == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *qosListEntry;
    list_ForEach(qosListEntry, v0_0_39_assoc->qos) {
    if(cJSON_AddStringToObject(qos, "", (char*)qosListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_assoc->shares_raw
    if(v0_0_39_assoc->shares_raw) {
    if(cJSON_AddNumberToObject(item, "shares_raw", v0_0_39_assoc->shares_raw) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc->usage
    if(v0_0_39_assoc->usage) {
    cJSON *usage_local_JSON = v0_0_39_assoc_usage_convertToJSON(v0_0_39_assoc->usage);
    if(usage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "usage", usage_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_assoc->user
    if (!v0_0_39_assoc->user) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "user", v0_0_39_assoc->user) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_assoc_t *v0_0_39_assoc_parseFromJSON(cJSON *v0_0_39_assocJSON){

    v0_0_39_assoc_t *v0_0_39_assoc_local_var = NULL;

    // define the local variable for v0_0_39_assoc->_default
    v0_0_39_assoc_default_t *_default_local_nonprim = NULL;

    // define the local list for v0_0_39_assoc->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_assoc->max
    v0_0_39_assoc_max_t *max_local_nonprim = NULL;

    // define the local variable for v0_0_39_assoc->min
    v0_0_39_assoc_min_t *min_local_nonprim = NULL;

    // define the local variable for v0_0_39_assoc->priority
    v0_0_39_uint32_no_val_t *priority_local_nonprim = NULL;

    // define the local list for v0_0_39_assoc->qos
    list_t *qosList = NULL;

    // define the local variable for v0_0_39_assoc->usage
    v0_0_39_assoc_usage_t *usage_local_nonprim = NULL;

    // v0_0_39_assoc->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "default");
    if (_default) { 
    _default_local_nonprim = v0_0_39_assoc_default_parseFromJSON(_default); //nonprimitive
    }

    // v0_0_39_assoc->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "flags");
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

    // v0_0_39_assoc->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "max");
    if (max) { 
    max_local_nonprim = v0_0_39_assoc_max_parseFromJSON(max); //nonprimitive
    }

    // v0_0_39_assoc->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "is_default");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_assoc->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "min");
    if (min) { 
    min_local_nonprim = v0_0_39_assoc_min_parseFromJSON(min); //nonprimitive
    }

    // v0_0_39_assoc->parent_account
    cJSON *parent_account = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "parent_account");
    if (parent_account) { 
    if(!cJSON_IsString(parent_account) && !cJSON_IsNull(parent_account))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "priority");
    if (priority) { 
    priority_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(priority); //nonprimitive
    }

    // v0_0_39_assoc->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "qos");
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

    // v0_0_39_assoc->shares_raw
    cJSON *shares_raw = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "shares_raw");
    if (shares_raw) { 
    if(!cJSON_IsNumber(shares_raw))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc->usage
    cJSON *usage = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "usage");
    if (usage) { 
    usage_local_nonprim = v0_0_39_assoc_usage_parseFromJSON(usage); //nonprimitive
    }

    // v0_0_39_assoc->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_assocJSON, "user");
    if (!user) {
        goto end;
    }

    
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }


    v0_0_39_assoc_local_var = v0_0_39_assoc_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        _default ? _default_local_nonprim : NULL,
        flags ? flagsList : NULL,
        max ? max_local_nonprim : NULL,
        is_default ? is_default->valueint : 0,
        min ? min_local_nonprim : NULL,
        parent_account && !cJSON_IsNull(parent_account) ? strdup(parent_account->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        priority ? priority_local_nonprim : NULL,
        qos ? qosList : NULL,
        shares_raw ? shares_raw->valuedouble : 0,
        usage ? usage_local_nonprim : NULL,
        strdup(user->valuestring)
        );

    return v0_0_39_assoc_local_var;
end:
    if (_default_local_nonprim) {
        v0_0_39_assoc_default_free(_default_local_nonprim);
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
        v0_0_39_assoc_max_free(max_local_nonprim);
        max_local_nonprim = NULL;
    }
    if (min_local_nonprim) {
        v0_0_39_assoc_min_free(min_local_nonprim);
        min_local_nonprim = NULL;
    }
    if (priority_local_nonprim) {
        v0_0_39_uint32_no_val_free(priority_local_nonprim);
        priority_local_nonprim = NULL;
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
    if (usage_local_nonprim) {
        v0_0_39_assoc_usage_free(usage_local_nonprim);
        usage_local_nonprim = NULL;
    }
    return NULL;

}
