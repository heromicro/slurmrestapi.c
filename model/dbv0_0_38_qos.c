#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos.h"



dbv0_0_38_qos_t *dbv0_0_38_qos_create(
    char *description,
    list_t *flags,
    char *id,
    dbv0_0_38_qos_limits_t *limits,
    dbv0_0_38_qos_preempt_t *preempt,
    int priority,
    double usage_factor,
    double usage_threshold,
    char *name
    ) {
    dbv0_0_38_qos_t *dbv0_0_38_qos_local_var = malloc(sizeof(dbv0_0_38_qos_t));
    if (!dbv0_0_38_qos_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_local_var->description = description;
    dbv0_0_38_qos_local_var->flags = flags;
    dbv0_0_38_qos_local_var->id = id;
    dbv0_0_38_qos_local_var->limits = limits;
    dbv0_0_38_qos_local_var->preempt = preempt;
    dbv0_0_38_qos_local_var->priority = priority;
    dbv0_0_38_qos_local_var->usage_factor = usage_factor;
    dbv0_0_38_qos_local_var->usage_threshold = usage_threshold;
    dbv0_0_38_qos_local_var->name = name;

    return dbv0_0_38_qos_local_var;
}


void dbv0_0_38_qos_free(dbv0_0_38_qos_t *dbv0_0_38_qos) {
    if(NULL == dbv0_0_38_qos){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_qos->description) {
        free(dbv0_0_38_qos->description);
        dbv0_0_38_qos->description = NULL;
    }
    if (dbv0_0_38_qos->flags) {
        list_ForEach(listEntry, dbv0_0_38_qos->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_qos->flags);
        dbv0_0_38_qos->flags = NULL;
    }
    if (dbv0_0_38_qos->id) {
        free(dbv0_0_38_qos->id);
        dbv0_0_38_qos->id = NULL;
    }
    if (dbv0_0_38_qos->limits) {
        dbv0_0_38_qos_limits_free(dbv0_0_38_qos->limits);
        dbv0_0_38_qos->limits = NULL;
    }
    if (dbv0_0_38_qos->preempt) {
        dbv0_0_38_qos_preempt_free(dbv0_0_38_qos->preempt);
        dbv0_0_38_qos->preempt = NULL;
    }
    if (dbv0_0_38_qos->name) {
        free(dbv0_0_38_qos->name);
        dbv0_0_38_qos->name = NULL;
    }
    free(dbv0_0_38_qos);
}

cJSON *dbv0_0_38_qos_convertToJSON(dbv0_0_38_qos_t *dbv0_0_38_qos) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos->description
    if(dbv0_0_38_qos->description) {
    if(cJSON_AddStringToObject(item, "description", dbv0_0_38_qos->description) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_qos->flags
    if(dbv0_0_38_qos->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_38_qos->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_38_qos->id
    if(dbv0_0_38_qos->id) {
    if(cJSON_AddStringToObject(item, "id", dbv0_0_38_qos->id) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_qos->limits
    if(dbv0_0_38_qos->limits) {
    cJSON *limits_local_JSON = dbv0_0_38_qos_limits_convertToJSON(dbv0_0_38_qos->limits);
    if(limits_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "limits", limits_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_qos->preempt
    if(dbv0_0_38_qos->preempt) {
    cJSON *preempt_local_JSON = dbv0_0_38_qos_preempt_convertToJSON(dbv0_0_38_qos->preempt);
    if(preempt_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preempt", preempt_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_qos->priority
    if(dbv0_0_38_qos->priority) {
    if(cJSON_AddNumberToObject(item, "priority", dbv0_0_38_qos->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_qos->usage_factor
    if(dbv0_0_38_qos->usage_factor) {
    if(cJSON_AddNumberToObject(item, "usage_factor", dbv0_0_38_qos->usage_factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_qos->usage_threshold
    if(dbv0_0_38_qos->usage_threshold) {
    if(cJSON_AddNumberToObject(item, "usage_threshold", dbv0_0_38_qos->usage_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_qos->name
    if(dbv0_0_38_qos->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_qos->name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_38_qos_t *dbv0_0_38_qos_parseFromJSON(cJSON *dbv0_0_38_qosJSON){

    dbv0_0_38_qos_t *dbv0_0_38_qos_local_var = NULL;

    // define the local list for dbv0_0_38_qos->flags
    list_t *flagsList = NULL;

    // define the local variable for dbv0_0_38_qos->limits
    dbv0_0_38_qos_limits_t *limits_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_qos->preempt
    dbv0_0_38_qos_preempt_t *preempt_local_nonprim = NULL;

    // dbv0_0_38_qos->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_qos->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "flags");
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

    // dbv0_0_38_qos->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_qos->limits
    cJSON *limits = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "limits");
    if (limits) { 
    limits_local_nonprim = dbv0_0_38_qos_limits_parseFromJSON(limits); //nonprimitive
    }

    // dbv0_0_38_qos->preempt
    cJSON *preempt = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "preempt");
    if (preempt) { 
    preempt_local_nonprim = dbv0_0_38_qos_preempt_parseFromJSON(preempt); //nonprimitive
    }

    // dbv0_0_38_qos->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_qos->usage_factor
    cJSON *usage_factor = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "usage_factor");
    if (usage_factor) { 
    if(!cJSON_IsNumber(usage_factor))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_qos->usage_threshold
    cJSON *usage_threshold = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "usage_threshold");
    if (usage_threshold) { 
    if(!cJSON_IsNumber(usage_threshold))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_qos->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qosJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    dbv0_0_38_qos_local_var = dbv0_0_38_qos_create (
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        flags ? flagsList : NULL,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        limits ? limits_local_nonprim : NULL,
        preempt ? preempt_local_nonprim : NULL,
        priority ? priority->valuedouble : 0,
        usage_factor ? usage_factor->valuedouble : 0,
        usage_threshold ? usage_threshold->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return dbv0_0_38_qos_local_var;
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
        dbv0_0_38_qos_limits_free(limits_local_nonprim);
        limits_local_nonprim = NULL;
    }
    if (preempt_local_nonprim) {
        dbv0_0_38_qos_preempt_free(preempt_local_nonprim);
        preempt_local_nonprim = NULL;
    }
    return NULL;

}
