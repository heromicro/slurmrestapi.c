#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_qos.h"


char* flagsv0_0_39_qos_ToString(slurm_rest_api_v0_0_39_qos_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "NOT_SET", "ADD", "REMOVE", "PARTITION_MINIMUM_NODE", "PARTITION_MAXIMUM_NODE", "PARTITION_TIME_LIMIT", "ENFORCE_USAGE_THRESHOLD", "NO_RESERVE", "REQUIRED_RESERVATION", "DENY_LIMIT", "OVERRIDE_PARTITION_QOS", "NO_DECAY", "USAGE_FACTOR_SAFE" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_qos_FLAGS_e flagsv0_0_39_qos_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "NOT_SET", "ADD", "REMOVE", "PARTITION_MINIMUM_NODE", "PARTITION_MAXIMUM_NODE", "PARTITION_TIME_LIMIT", "ENFORCE_USAGE_THRESHOLD", "NO_RESERVE", "REQUIRED_RESERVATION", "DENY_LIMIT", "OVERRIDE_PARTITION_QOS", "NO_DECAY", "USAGE_FACTOR_SAFE" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_qos_t *v0_0_39_qos_create(
    char *description,
    list_t *flags,
    int id,
    v0_0_39_qos_limits_t *limits,
    char *name,
    v0_0_39_qos_preempt_t *preempt,
    int priority,
    v0_0_39_float64_no_val_t *usage_factor,
    v0_0_39_float64_no_val_t *usage_threshold
    ) {
    v0_0_39_qos_t *v0_0_39_qos_local_var = malloc(sizeof(v0_0_39_qos_t));
    if (!v0_0_39_qos_local_var) {
        return NULL;
    }
    v0_0_39_qos_local_var->description = description;
    v0_0_39_qos_local_var->flags = flags;
    v0_0_39_qos_local_var->id = id;
    v0_0_39_qos_local_var->limits = limits;
    v0_0_39_qos_local_var->name = name;
    v0_0_39_qos_local_var->preempt = preempt;
    v0_0_39_qos_local_var->priority = priority;
    v0_0_39_qos_local_var->usage_factor = usage_factor;
    v0_0_39_qos_local_var->usage_threshold = usage_threshold;

    return v0_0_39_qos_local_var;
}


void v0_0_39_qos_free(v0_0_39_qos_t *v0_0_39_qos) {
    if(NULL == v0_0_39_qos){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_qos->description) {
        free(v0_0_39_qos->description);
        v0_0_39_qos->description = NULL;
    }
    if (v0_0_39_qos->flags) {
        list_ForEach(listEntry, v0_0_39_qos->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_qos->flags);
        v0_0_39_qos->flags = NULL;
    }
    if (v0_0_39_qos->limits) {
        v0_0_39_qos_limits_free(v0_0_39_qos->limits);
        v0_0_39_qos->limits = NULL;
    }
    if (v0_0_39_qos->name) {
        free(v0_0_39_qos->name);
        v0_0_39_qos->name = NULL;
    }
    if (v0_0_39_qos->preempt) {
        v0_0_39_qos_preempt_free(v0_0_39_qos->preempt);
        v0_0_39_qos->preempt = NULL;
    }
    if (v0_0_39_qos->usage_factor) {
        v0_0_39_float64_no_val_free(v0_0_39_qos->usage_factor);
        v0_0_39_qos->usage_factor = NULL;
    }
    if (v0_0_39_qos->usage_threshold) {
        v0_0_39_float64_no_val_free(v0_0_39_qos->usage_threshold);
        v0_0_39_qos->usage_threshold = NULL;
    }
    free(v0_0_39_qos);
}

cJSON *v0_0_39_qos_convertToJSON(v0_0_39_qos_t *v0_0_39_qos) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_qos->description
    if(v0_0_39_qos->description) {
    if(cJSON_AddStringToObject(item, "description", v0_0_39_qos->description) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_qos->flags
    if(v0_0_39_qos->flags != slurm_rest_api_v0_0_39_qos_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_qos->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_qos->id
    if(v0_0_39_qos->id) {
    if(cJSON_AddNumberToObject(item, "id", v0_0_39_qos->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_qos->limits
    if(v0_0_39_qos->limits) {
    cJSON *limits_local_JSON = v0_0_39_qos_limits_convertToJSON(v0_0_39_qos->limits);
    if(limits_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "limits", limits_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_qos->name
    if(v0_0_39_qos->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_qos->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_qos->preempt
    if(v0_0_39_qos->preempt) {
    cJSON *preempt_local_JSON = v0_0_39_qos_preempt_convertToJSON(v0_0_39_qos->preempt);
    if(preempt_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preempt", preempt_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_qos->priority
    if(v0_0_39_qos->priority) {
    if(cJSON_AddNumberToObject(item, "priority", v0_0_39_qos->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_qos->usage_factor
    if(v0_0_39_qos->usage_factor) {
    cJSON *usage_factor_local_JSON = v0_0_39_float64_no_val_convertToJSON(v0_0_39_qos->usage_factor);
    if(usage_factor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "usage_factor", usage_factor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_qos->usage_threshold
    if(v0_0_39_qos->usage_threshold) {
    cJSON *usage_threshold_local_JSON = v0_0_39_float64_no_val_convertToJSON(v0_0_39_qos->usage_threshold);
    if(usage_threshold_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "usage_threshold", usage_threshold_local_JSON);
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

v0_0_39_qos_t *v0_0_39_qos_parseFromJSON(cJSON *v0_0_39_qosJSON){

    v0_0_39_qos_t *v0_0_39_qos_local_var = NULL;

    // define the local list for v0_0_39_qos->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_qos->limits
    v0_0_39_qos_limits_t *limits_local_nonprim = NULL;

    // define the local variable for v0_0_39_qos->preempt
    v0_0_39_qos_preempt_t *preempt_local_nonprim = NULL;

    // define the local variable for v0_0_39_qos->usage_factor
    v0_0_39_float64_no_val_t *usage_factor_local_nonprim = NULL;

    // define the local variable for v0_0_39_qos->usage_threshold
    v0_0_39_float64_no_val_t *usage_threshold_local_nonprim = NULL;

    // v0_0_39_qos->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // v0_0_39_qos->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "flags");
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

    // v0_0_39_qos->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_qos->limits
    cJSON *limits = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "limits");
    if (limits) { 
    limits_local_nonprim = v0_0_39_qos_limits_parseFromJSON(limits); //nonprimitive
    }

    // v0_0_39_qos->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_qos->preempt
    cJSON *preempt = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "preempt");
    if (preempt) { 
    preempt_local_nonprim = v0_0_39_qos_preempt_parseFromJSON(preempt); //nonprimitive
    }

    // v0_0_39_qos->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_qos->usage_factor
    cJSON *usage_factor = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "usage_factor");
    if (usage_factor) { 
    usage_factor_local_nonprim = v0_0_39_float64_no_val_parseFromJSON(usage_factor); //nonprimitive
    }

    // v0_0_39_qos->usage_threshold
    cJSON *usage_threshold = cJSON_GetObjectItemCaseSensitive(v0_0_39_qosJSON, "usage_threshold");
    if (usage_threshold) { 
    usage_threshold_local_nonprim = v0_0_39_float64_no_val_parseFromJSON(usage_threshold); //nonprimitive
    }


    v0_0_39_qos_local_var = v0_0_39_qos_create (
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        flags ? flagsList : NULL,
        id ? id->valuedouble : 0,
        limits ? limits_local_nonprim : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        preempt ? preempt_local_nonprim : NULL,
        priority ? priority->valuedouble : 0,
        usage_factor ? usage_factor_local_nonprim : NULL,
        usage_threshold ? usage_threshold_local_nonprim : NULL
        );

    return v0_0_39_qos_local_var;
end:
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (limits_local_nonprim) {
        v0_0_39_qos_limits_free(limits_local_nonprim);
        limits_local_nonprim = NULL;
    }
    if (preempt_local_nonprim) {
        v0_0_39_qos_preempt_free(preempt_local_nonprim);
        preempt_local_nonprim = NULL;
    }
    if (usage_factor_local_nonprim) {
        v0_0_39_float64_no_val_free(usage_factor_local_nonprim);
        usage_factor_local_nonprim = NULL;
    }
    if (usage_threshold_local_nonprim) {
        v0_0_39_float64_no_val_free(usage_threshold_local_nonprim);
        usage_threshold_local_nonprim = NULL;
    }
    return NULL;

}
