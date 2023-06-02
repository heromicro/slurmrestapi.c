#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_partition.h"



v0_0_37_partition_t *v0_0_37_partition_create(
    list_t *flags,
    list_t *preemption_mode,
    char *allowed_allocation_nodes,
    char *allowed_accounts,
    char *allowed_groups,
    char *allowed_qos,
    char *alternative,
    char *billing_weights,
    long default_memory_per_cpu,
    long default_time_limit,
    char *denied_accounts,
    char *denied_qos,
    long preemption_grace_time,
    int maximum_cpus_per_node,
    long maximum_memory_per_node,
    int maximum_nodes_per_job,
    long max_time_limit,
    int min_nodes_per_job,
    char *name,
    char *nodes,
    int over_time_limit,
    int priority_job_factor,
    int priority_tier,
    char *qos,
    char *state,
    int total_cpus,
    int total_nodes,
    char *tres
    ) {
    v0_0_37_partition_t *v0_0_37_partition_local_var = malloc(sizeof(v0_0_37_partition_t));
    if (!v0_0_37_partition_local_var) {
        return NULL;
    }
    v0_0_37_partition_local_var->flags = flags;
    v0_0_37_partition_local_var->preemption_mode = preemption_mode;
    v0_0_37_partition_local_var->allowed_allocation_nodes = allowed_allocation_nodes;
    v0_0_37_partition_local_var->allowed_accounts = allowed_accounts;
    v0_0_37_partition_local_var->allowed_groups = allowed_groups;
    v0_0_37_partition_local_var->allowed_qos = allowed_qos;
    v0_0_37_partition_local_var->alternative = alternative;
    v0_0_37_partition_local_var->billing_weights = billing_weights;
    v0_0_37_partition_local_var->default_memory_per_cpu = default_memory_per_cpu;
    v0_0_37_partition_local_var->default_time_limit = default_time_limit;
    v0_0_37_partition_local_var->denied_accounts = denied_accounts;
    v0_0_37_partition_local_var->denied_qos = denied_qos;
    v0_0_37_partition_local_var->preemption_grace_time = preemption_grace_time;
    v0_0_37_partition_local_var->maximum_cpus_per_node = maximum_cpus_per_node;
    v0_0_37_partition_local_var->maximum_memory_per_node = maximum_memory_per_node;
    v0_0_37_partition_local_var->maximum_nodes_per_job = maximum_nodes_per_job;
    v0_0_37_partition_local_var->max_time_limit = max_time_limit;
    v0_0_37_partition_local_var->min_nodes_per_job = min_nodes_per_job;
    v0_0_37_partition_local_var->name = name;
    v0_0_37_partition_local_var->nodes = nodes;
    v0_0_37_partition_local_var->over_time_limit = over_time_limit;
    v0_0_37_partition_local_var->priority_job_factor = priority_job_factor;
    v0_0_37_partition_local_var->priority_tier = priority_tier;
    v0_0_37_partition_local_var->qos = qos;
    v0_0_37_partition_local_var->state = state;
    v0_0_37_partition_local_var->total_cpus = total_cpus;
    v0_0_37_partition_local_var->total_nodes = total_nodes;
    v0_0_37_partition_local_var->tres = tres;

    return v0_0_37_partition_local_var;
}


void v0_0_37_partition_free(v0_0_37_partition_t *v0_0_37_partition) {
    if(NULL == v0_0_37_partition){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_partition->flags) {
        list_ForEach(listEntry, v0_0_37_partition->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_37_partition->flags);
        v0_0_37_partition->flags = NULL;
    }
    if (v0_0_37_partition->preemption_mode) {
        list_ForEach(listEntry, v0_0_37_partition->preemption_mode) {
            free(listEntry->data);
        }
        list_freeList(v0_0_37_partition->preemption_mode);
        v0_0_37_partition->preemption_mode = NULL;
    }
    if (v0_0_37_partition->allowed_allocation_nodes) {
        free(v0_0_37_partition->allowed_allocation_nodes);
        v0_0_37_partition->allowed_allocation_nodes = NULL;
    }
    if (v0_0_37_partition->allowed_accounts) {
        free(v0_0_37_partition->allowed_accounts);
        v0_0_37_partition->allowed_accounts = NULL;
    }
    if (v0_0_37_partition->allowed_groups) {
        free(v0_0_37_partition->allowed_groups);
        v0_0_37_partition->allowed_groups = NULL;
    }
    if (v0_0_37_partition->allowed_qos) {
        free(v0_0_37_partition->allowed_qos);
        v0_0_37_partition->allowed_qos = NULL;
    }
    if (v0_0_37_partition->alternative) {
        free(v0_0_37_partition->alternative);
        v0_0_37_partition->alternative = NULL;
    }
    if (v0_0_37_partition->billing_weights) {
        free(v0_0_37_partition->billing_weights);
        v0_0_37_partition->billing_weights = NULL;
    }
    if (v0_0_37_partition->denied_accounts) {
        free(v0_0_37_partition->denied_accounts);
        v0_0_37_partition->denied_accounts = NULL;
    }
    if (v0_0_37_partition->denied_qos) {
        free(v0_0_37_partition->denied_qos);
        v0_0_37_partition->denied_qos = NULL;
    }
    if (v0_0_37_partition->name) {
        free(v0_0_37_partition->name);
        v0_0_37_partition->name = NULL;
    }
    if (v0_0_37_partition->nodes) {
        free(v0_0_37_partition->nodes);
        v0_0_37_partition->nodes = NULL;
    }
    if (v0_0_37_partition->qos) {
        free(v0_0_37_partition->qos);
        v0_0_37_partition->qos = NULL;
    }
    if (v0_0_37_partition->state) {
        free(v0_0_37_partition->state);
        v0_0_37_partition->state = NULL;
    }
    if (v0_0_37_partition->tres) {
        free(v0_0_37_partition->tres);
        v0_0_37_partition->tres = NULL;
    }
    free(v0_0_37_partition);
}

cJSON *v0_0_37_partition_convertToJSON(v0_0_37_partition_t *v0_0_37_partition) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_partition->flags
    if(v0_0_37_partition->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_37_partition->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_37_partition->preemption_mode
    if(v0_0_37_partition->preemption_mode) {
    cJSON *preemption_mode = cJSON_AddArrayToObject(item, "preemption_mode");
    if(preemption_mode == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *preemption_modeListEntry;
    list_ForEach(preemption_modeListEntry, v0_0_37_partition->preemption_mode) {
    if(cJSON_AddStringToObject(preemption_mode, "", (char*)preemption_modeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_37_partition->allowed_allocation_nodes
    if(v0_0_37_partition->allowed_allocation_nodes) {
    if(cJSON_AddStringToObject(item, "allowed_allocation_nodes", v0_0_37_partition->allowed_allocation_nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->allowed_accounts
    if(v0_0_37_partition->allowed_accounts) {
    if(cJSON_AddStringToObject(item, "allowed_accounts", v0_0_37_partition->allowed_accounts) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->allowed_groups
    if(v0_0_37_partition->allowed_groups) {
    if(cJSON_AddStringToObject(item, "allowed_groups", v0_0_37_partition->allowed_groups) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->allowed_qos
    if(v0_0_37_partition->allowed_qos) {
    if(cJSON_AddStringToObject(item, "allowed_qos", v0_0_37_partition->allowed_qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->alternative
    if(v0_0_37_partition->alternative) {
    if(cJSON_AddStringToObject(item, "alternative", v0_0_37_partition->alternative) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->billing_weights
    if(v0_0_37_partition->billing_weights) {
    if(cJSON_AddStringToObject(item, "billing_weights", v0_0_37_partition->billing_weights) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->default_memory_per_cpu
    if(v0_0_37_partition->default_memory_per_cpu) {
    if(cJSON_AddNumberToObject(item, "default_memory_per_cpu", v0_0_37_partition->default_memory_per_cpu) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->default_time_limit
    if(v0_0_37_partition->default_time_limit) {
    if(cJSON_AddNumberToObject(item, "default_time_limit", v0_0_37_partition->default_time_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->denied_accounts
    if(v0_0_37_partition->denied_accounts) {
    if(cJSON_AddStringToObject(item, "denied_accounts", v0_0_37_partition->denied_accounts) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->denied_qos
    if(v0_0_37_partition->denied_qos) {
    if(cJSON_AddStringToObject(item, "denied_qos", v0_0_37_partition->denied_qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->preemption_grace_time
    if(v0_0_37_partition->preemption_grace_time) {
    if(cJSON_AddNumberToObject(item, "preemption_grace_time", v0_0_37_partition->preemption_grace_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->maximum_cpus_per_node
    if(v0_0_37_partition->maximum_cpus_per_node) {
    if(cJSON_AddNumberToObject(item, "maximum_cpus_per_node", v0_0_37_partition->maximum_cpus_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->maximum_memory_per_node
    if(v0_0_37_partition->maximum_memory_per_node) {
    if(cJSON_AddNumberToObject(item, "maximum_memory_per_node", v0_0_37_partition->maximum_memory_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->maximum_nodes_per_job
    if(v0_0_37_partition->maximum_nodes_per_job) {
    if(cJSON_AddNumberToObject(item, "maximum_nodes_per_job", v0_0_37_partition->maximum_nodes_per_job) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->max_time_limit
    if(v0_0_37_partition->max_time_limit) {
    if(cJSON_AddNumberToObject(item, "max_time_limit", v0_0_37_partition->max_time_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->min_nodes_per_job
    if(v0_0_37_partition->min_nodes_per_job) {
    if(cJSON_AddNumberToObject(item, "min_nodes_per_job", v0_0_37_partition->min_nodes_per_job) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->name
    if(v0_0_37_partition->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_37_partition->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->nodes
    if(v0_0_37_partition->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_37_partition->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->over_time_limit
    if(v0_0_37_partition->over_time_limit) {
    if(cJSON_AddNumberToObject(item, "over_time_limit", v0_0_37_partition->over_time_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->priority_job_factor
    if(v0_0_37_partition->priority_job_factor) {
    if(cJSON_AddNumberToObject(item, "priority_job_factor", v0_0_37_partition->priority_job_factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->priority_tier
    if(v0_0_37_partition->priority_tier) {
    if(cJSON_AddNumberToObject(item, "priority_tier", v0_0_37_partition->priority_tier) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->qos
    if(v0_0_37_partition->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_37_partition->qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->state
    if(v0_0_37_partition->state) {
    if(cJSON_AddStringToObject(item, "state", v0_0_37_partition->state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_partition->total_cpus
    if(v0_0_37_partition->total_cpus) {
    if(cJSON_AddNumberToObject(item, "total_cpus", v0_0_37_partition->total_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->total_nodes
    if(v0_0_37_partition->total_nodes) {
    if(cJSON_AddNumberToObject(item, "total_nodes", v0_0_37_partition->total_nodes) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_partition->tres
    if(v0_0_37_partition->tres) {
    if(cJSON_AddStringToObject(item, "tres", v0_0_37_partition->tres) == NULL) {
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

v0_0_37_partition_t *v0_0_37_partition_parseFromJSON(cJSON *v0_0_37_partitionJSON){

    v0_0_37_partition_t *v0_0_37_partition_local_var = NULL;

    // define the local list for v0_0_37_partition->flags
    list_t *flagsList = NULL;

    // define the local list for v0_0_37_partition->preemption_mode
    list_t *preemption_modeList = NULL;

    // v0_0_37_partition->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "flags");
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

    // v0_0_37_partition->preemption_mode
    cJSON *preemption_mode = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "preemption_mode");
    if (preemption_mode) { 
    cJSON *preemption_mode_local = NULL;
    if(!cJSON_IsArray(preemption_mode)) {
        goto end;//primitive container
    }
    preemption_modeList = list_createList();

    cJSON_ArrayForEach(preemption_mode_local, preemption_mode)
    {
        if(!cJSON_IsString(preemption_mode_local))
        {
            goto end;
        }
        list_addElement(preemption_modeList , strdup(preemption_mode_local->valuestring));
    }
    }

    // v0_0_37_partition->allowed_allocation_nodes
    cJSON *allowed_allocation_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "allowed_allocation_nodes");
    if (allowed_allocation_nodes) { 
    if(!cJSON_IsString(allowed_allocation_nodes) && !cJSON_IsNull(allowed_allocation_nodes))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->allowed_accounts
    cJSON *allowed_accounts = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "allowed_accounts");
    if (allowed_accounts) { 
    if(!cJSON_IsString(allowed_accounts) && !cJSON_IsNull(allowed_accounts))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->allowed_groups
    cJSON *allowed_groups = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "allowed_groups");
    if (allowed_groups) { 
    if(!cJSON_IsString(allowed_groups) && !cJSON_IsNull(allowed_groups))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->allowed_qos
    cJSON *allowed_qos = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "allowed_qos");
    if (allowed_qos) { 
    if(!cJSON_IsString(allowed_qos) && !cJSON_IsNull(allowed_qos))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->alternative
    cJSON *alternative = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "alternative");
    if (alternative) { 
    if(!cJSON_IsString(alternative) && !cJSON_IsNull(alternative))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->billing_weights
    cJSON *billing_weights = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "billing_weights");
    if (billing_weights) { 
    if(!cJSON_IsString(billing_weights) && !cJSON_IsNull(billing_weights))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->default_memory_per_cpu
    cJSON *default_memory_per_cpu = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "default_memory_per_cpu");
    if (default_memory_per_cpu) { 
    if(!cJSON_IsNumber(default_memory_per_cpu))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->default_time_limit
    cJSON *default_time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "default_time_limit");
    if (default_time_limit) { 
    if(!cJSON_IsNumber(default_time_limit))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->denied_accounts
    cJSON *denied_accounts = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "denied_accounts");
    if (denied_accounts) { 
    if(!cJSON_IsString(denied_accounts) && !cJSON_IsNull(denied_accounts))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->denied_qos
    cJSON *denied_qos = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "denied_qos");
    if (denied_qos) { 
    if(!cJSON_IsString(denied_qos) && !cJSON_IsNull(denied_qos))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->preemption_grace_time
    cJSON *preemption_grace_time = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "preemption_grace_time");
    if (preemption_grace_time) { 
    if(!cJSON_IsNumber(preemption_grace_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->maximum_cpus_per_node
    cJSON *maximum_cpus_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "maximum_cpus_per_node");
    if (maximum_cpus_per_node) { 
    if(!cJSON_IsNumber(maximum_cpus_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->maximum_memory_per_node
    cJSON *maximum_memory_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "maximum_memory_per_node");
    if (maximum_memory_per_node) { 
    if(!cJSON_IsNumber(maximum_memory_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->maximum_nodes_per_job
    cJSON *maximum_nodes_per_job = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "maximum_nodes_per_job");
    if (maximum_nodes_per_job) { 
    if(!cJSON_IsNumber(maximum_nodes_per_job))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->max_time_limit
    cJSON *max_time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "max_time_limit");
    if (max_time_limit) { 
    if(!cJSON_IsNumber(max_time_limit))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->min_nodes_per_job
    cJSON *min_nodes_per_job = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "min_nodes_per_job");
    if (min_nodes_per_job) { 
    if(!cJSON_IsNumber(min_nodes_per_job))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->over_time_limit
    cJSON *over_time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "over_time_limit");
    if (over_time_limit) { 
    if(!cJSON_IsNumber(over_time_limit))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->priority_job_factor
    cJSON *priority_job_factor = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "priority_job_factor");
    if (priority_job_factor) { 
    if(!cJSON_IsNumber(priority_job_factor))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->priority_tier
    cJSON *priority_tier = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "priority_tier");
    if (priority_tier) { 
    if(!cJSON_IsNumber(priority_tier))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "state");
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // v0_0_37_partition->total_cpus
    cJSON *total_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "total_cpus");
    if (total_cpus) { 
    if(!cJSON_IsNumber(total_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->total_nodes
    cJSON *total_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "total_nodes");
    if (total_nodes) { 
    if(!cJSON_IsNumber(total_nodes))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_partition->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_37_partitionJSON, "tres");
    if (tres) { 
    if(!cJSON_IsString(tres) && !cJSON_IsNull(tres))
    {
    goto end; //String
    }
    }


    v0_0_37_partition_local_var = v0_0_37_partition_create (
        flags ? flagsList : NULL,
        preemption_mode ? preemption_modeList : NULL,
        allowed_allocation_nodes && !cJSON_IsNull(allowed_allocation_nodes) ? strdup(allowed_allocation_nodes->valuestring) : NULL,
        allowed_accounts && !cJSON_IsNull(allowed_accounts) ? strdup(allowed_accounts->valuestring) : NULL,
        allowed_groups && !cJSON_IsNull(allowed_groups) ? strdup(allowed_groups->valuestring) : NULL,
        allowed_qos && !cJSON_IsNull(allowed_qos) ? strdup(allowed_qos->valuestring) : NULL,
        alternative && !cJSON_IsNull(alternative) ? strdup(alternative->valuestring) : NULL,
        billing_weights && !cJSON_IsNull(billing_weights) ? strdup(billing_weights->valuestring) : NULL,
        default_memory_per_cpu ? default_memory_per_cpu->valuedouble : 0,
        default_time_limit ? default_time_limit->valuedouble : 0,
        denied_accounts && !cJSON_IsNull(denied_accounts) ? strdup(denied_accounts->valuestring) : NULL,
        denied_qos && !cJSON_IsNull(denied_qos) ? strdup(denied_qos->valuestring) : NULL,
        preemption_grace_time ? preemption_grace_time->valuedouble : 0,
        maximum_cpus_per_node ? maximum_cpus_per_node->valuedouble : 0,
        maximum_memory_per_node ? maximum_memory_per_node->valuedouble : 0,
        maximum_nodes_per_job ? maximum_nodes_per_job->valuedouble : 0,
        max_time_limit ? max_time_limit->valuedouble : 0,
        min_nodes_per_job ? min_nodes_per_job->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        over_time_limit ? over_time_limit->valuedouble : 0,
        priority_job_factor ? priority_job_factor->valuedouble : 0,
        priority_tier ? priority_tier->valuedouble : 0,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        total_cpus ? total_cpus->valuedouble : 0,
        total_nodes ? total_nodes->valuedouble : 0,
        tres && !cJSON_IsNull(tres) ? strdup(tres->valuestring) : NULL
        );

    return v0_0_37_partition_local_var;
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
    if (preemption_modeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, preemption_modeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(preemption_modeList);
        preemption_modeList = NULL;
    }
    return NULL;

}
