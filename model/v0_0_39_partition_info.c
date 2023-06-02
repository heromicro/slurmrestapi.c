#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info.h"



v0_0_39_partition_info_t *v0_0_39_partition_info_create(
    v0_0_39_partition_info_nodes_t *nodes,
    v0_0_39_partition_info_accounts_t *accounts,
    v0_0_39_partition_info_groups_t *groups,
    v0_0_39_partition_info_qos_t *qos,
    char *alternate,
    v0_0_39_partition_info_tres_t *tres,
    char *cluster,
    v0_0_39_partition_info_nodes_t *cpus,
    v0_0_39_partition_info_defaults_t *defaults,
    int grace_time,
    v0_0_39_partition_info_maximums_t *maximums,
    v0_0_39_partition_info_minimums_t *minimums,
    char *name,
    char *node_sets,
    v0_0_39_partition_info_priority_t *priority,
    v0_0_39_partition_info_timeouts_t *timeouts,
    v0_0_39_uint32_no_val_t *suspend_time
    ) {
    v0_0_39_partition_info_t *v0_0_39_partition_info_local_var = malloc(sizeof(v0_0_39_partition_info_t));
    if (!v0_0_39_partition_info_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_local_var->nodes = nodes;
    v0_0_39_partition_info_local_var->accounts = accounts;
    v0_0_39_partition_info_local_var->groups = groups;
    v0_0_39_partition_info_local_var->qos = qos;
    v0_0_39_partition_info_local_var->alternate = alternate;
    v0_0_39_partition_info_local_var->tres = tres;
    v0_0_39_partition_info_local_var->cluster = cluster;
    v0_0_39_partition_info_local_var->cpus = cpus;
    v0_0_39_partition_info_local_var->defaults = defaults;
    v0_0_39_partition_info_local_var->grace_time = grace_time;
    v0_0_39_partition_info_local_var->maximums = maximums;
    v0_0_39_partition_info_local_var->minimums = minimums;
    v0_0_39_partition_info_local_var->name = name;
    v0_0_39_partition_info_local_var->node_sets = node_sets;
    v0_0_39_partition_info_local_var->priority = priority;
    v0_0_39_partition_info_local_var->timeouts = timeouts;
    v0_0_39_partition_info_local_var->suspend_time = suspend_time;

    return v0_0_39_partition_info_local_var;
}


void v0_0_39_partition_info_free(v0_0_39_partition_info_t *v0_0_39_partition_info) {
    if(NULL == v0_0_39_partition_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info->nodes) {
        v0_0_39_partition_info_nodes_free(v0_0_39_partition_info->nodes);
        v0_0_39_partition_info->nodes = NULL;
    }
    if (v0_0_39_partition_info->accounts) {
        v0_0_39_partition_info_accounts_free(v0_0_39_partition_info->accounts);
        v0_0_39_partition_info->accounts = NULL;
    }
    if (v0_0_39_partition_info->groups) {
        v0_0_39_partition_info_groups_free(v0_0_39_partition_info->groups);
        v0_0_39_partition_info->groups = NULL;
    }
    if (v0_0_39_partition_info->qos) {
        v0_0_39_partition_info_qos_free(v0_0_39_partition_info->qos);
        v0_0_39_partition_info->qos = NULL;
    }
    if (v0_0_39_partition_info->alternate) {
        free(v0_0_39_partition_info->alternate);
        v0_0_39_partition_info->alternate = NULL;
    }
    if (v0_0_39_partition_info->tres) {
        v0_0_39_partition_info_tres_free(v0_0_39_partition_info->tres);
        v0_0_39_partition_info->tres = NULL;
    }
    if (v0_0_39_partition_info->cluster) {
        free(v0_0_39_partition_info->cluster);
        v0_0_39_partition_info->cluster = NULL;
    }
    if (v0_0_39_partition_info->cpus) {
        v0_0_39_partition_info_nodes_free(v0_0_39_partition_info->cpus);
        v0_0_39_partition_info->cpus = NULL;
    }
    if (v0_0_39_partition_info->defaults) {
        v0_0_39_partition_info_defaults_free(v0_0_39_partition_info->defaults);
        v0_0_39_partition_info->defaults = NULL;
    }
    if (v0_0_39_partition_info->maximums) {
        v0_0_39_partition_info_maximums_free(v0_0_39_partition_info->maximums);
        v0_0_39_partition_info->maximums = NULL;
    }
    if (v0_0_39_partition_info->minimums) {
        v0_0_39_partition_info_minimums_free(v0_0_39_partition_info->minimums);
        v0_0_39_partition_info->minimums = NULL;
    }
    if (v0_0_39_partition_info->name) {
        free(v0_0_39_partition_info->name);
        v0_0_39_partition_info->name = NULL;
    }
    if (v0_0_39_partition_info->node_sets) {
        free(v0_0_39_partition_info->node_sets);
        v0_0_39_partition_info->node_sets = NULL;
    }
    if (v0_0_39_partition_info->priority) {
        v0_0_39_partition_info_priority_free(v0_0_39_partition_info->priority);
        v0_0_39_partition_info->priority = NULL;
    }
    if (v0_0_39_partition_info->timeouts) {
        v0_0_39_partition_info_timeouts_free(v0_0_39_partition_info->timeouts);
        v0_0_39_partition_info->timeouts = NULL;
    }
    if (v0_0_39_partition_info->suspend_time) {
        v0_0_39_uint32_no_val_free(v0_0_39_partition_info->suspend_time);
        v0_0_39_partition_info->suspend_time = NULL;
    }
    free(v0_0_39_partition_info);
}

cJSON *v0_0_39_partition_info_convertToJSON(v0_0_39_partition_info_t *v0_0_39_partition_info) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info->nodes
    if(v0_0_39_partition_info->nodes) {
    cJSON *nodes_local_JSON = v0_0_39_partition_info_nodes_convertToJSON(v0_0_39_partition_info->nodes);
    if(nodes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodes", nodes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->accounts
    if(v0_0_39_partition_info->accounts) {
    cJSON *accounts_local_JSON = v0_0_39_partition_info_accounts_convertToJSON(v0_0_39_partition_info->accounts);
    if(accounts_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "accounts", accounts_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->groups
    if(v0_0_39_partition_info->groups) {
    cJSON *groups_local_JSON = v0_0_39_partition_info_groups_convertToJSON(v0_0_39_partition_info->groups);
    if(groups_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "groups", groups_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->qos
    if(v0_0_39_partition_info->qos) {
    cJSON *qos_local_JSON = v0_0_39_partition_info_qos_convertToJSON(v0_0_39_partition_info->qos);
    if(qos_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "qos", qos_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->alternate
    if(v0_0_39_partition_info->alternate) {
    if(cJSON_AddStringToObject(item, "alternate", v0_0_39_partition_info->alternate) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_partition_info->tres
    if(v0_0_39_partition_info->tres) {
    cJSON *tres_local_JSON = v0_0_39_partition_info_tres_convertToJSON(v0_0_39_partition_info->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->cluster
    if(v0_0_39_partition_info->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", v0_0_39_partition_info->cluster) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_partition_info->cpus
    if(v0_0_39_partition_info->cpus) {
    cJSON *cpus_local_JSON = v0_0_39_partition_info_nodes_convertToJSON(v0_0_39_partition_info->cpus);
    if(cpus_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpus", cpus_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->defaults
    if(v0_0_39_partition_info->defaults) {
    cJSON *defaults_local_JSON = v0_0_39_partition_info_defaults_convertToJSON(v0_0_39_partition_info->defaults);
    if(defaults_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "defaults", defaults_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->grace_time
    if(v0_0_39_partition_info->grace_time) {
    if(cJSON_AddNumberToObject(item, "grace_time", v0_0_39_partition_info->grace_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_partition_info->maximums
    if(v0_0_39_partition_info->maximums) {
    cJSON *maximums_local_JSON = v0_0_39_partition_info_maximums_convertToJSON(v0_0_39_partition_info->maximums);
    if(maximums_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "maximums", maximums_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->minimums
    if(v0_0_39_partition_info->minimums) {
    cJSON *minimums_local_JSON = v0_0_39_partition_info_minimums_convertToJSON(v0_0_39_partition_info->minimums);
    if(minimums_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "minimums", minimums_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->name
    if(v0_0_39_partition_info->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_partition_info->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_partition_info->node_sets
    if(v0_0_39_partition_info->node_sets) {
    if(cJSON_AddStringToObject(item, "node_sets", v0_0_39_partition_info->node_sets) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_partition_info->priority
    if(v0_0_39_partition_info->priority) {
    cJSON *priority_local_JSON = v0_0_39_partition_info_priority_convertToJSON(v0_0_39_partition_info->priority);
    if(priority_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "priority", priority_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->timeouts
    if(v0_0_39_partition_info->timeouts) {
    cJSON *timeouts_local_JSON = v0_0_39_partition_info_timeouts_convertToJSON(v0_0_39_partition_info->timeouts);
    if(timeouts_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "timeouts", timeouts_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_partition_info->suspend_time
    if(v0_0_39_partition_info->suspend_time) {
    cJSON *suspend_time_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_partition_info->suspend_time);
    if(suspend_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "suspend_time", suspend_time_local_JSON);
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

v0_0_39_partition_info_t *v0_0_39_partition_info_parseFromJSON(cJSON *v0_0_39_partition_infoJSON){

    v0_0_39_partition_info_t *v0_0_39_partition_info_local_var = NULL;

    // define the local variable for v0_0_39_partition_info->nodes
    v0_0_39_partition_info_nodes_t *nodes_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->accounts
    v0_0_39_partition_info_accounts_t *accounts_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->groups
    v0_0_39_partition_info_groups_t *groups_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->qos
    v0_0_39_partition_info_qos_t *qos_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->tres
    v0_0_39_partition_info_tres_t *tres_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->cpus
    v0_0_39_partition_info_nodes_t *cpus_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->defaults
    v0_0_39_partition_info_defaults_t *defaults_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->maximums
    v0_0_39_partition_info_maximums_t *maximums_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->minimums
    v0_0_39_partition_info_minimums_t *minimums_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->priority
    v0_0_39_partition_info_priority_t *priority_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->timeouts
    v0_0_39_partition_info_timeouts_t *timeouts_local_nonprim = NULL;

    // define the local variable for v0_0_39_partition_info->suspend_time
    v0_0_39_uint32_no_val_t *suspend_time_local_nonprim = NULL;

    // v0_0_39_partition_info->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "nodes");
    if (nodes) { 
    nodes_local_nonprim = v0_0_39_partition_info_nodes_parseFromJSON(nodes); //nonprimitive
    }

    // v0_0_39_partition_info->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "accounts");
    if (accounts) { 
    accounts_local_nonprim = v0_0_39_partition_info_accounts_parseFromJSON(accounts); //nonprimitive
    }

    // v0_0_39_partition_info->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "groups");
    if (groups) { 
    groups_local_nonprim = v0_0_39_partition_info_groups_parseFromJSON(groups); //nonprimitive
    }

    // v0_0_39_partition_info->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "qos");
    if (qos) { 
    qos_local_nonprim = v0_0_39_partition_info_qos_parseFromJSON(qos); //nonprimitive
    }

    // v0_0_39_partition_info->alternate
    cJSON *alternate = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "alternate");
    if (alternate) { 
    if(!cJSON_IsString(alternate) && !cJSON_IsNull(alternate))
    {
    goto end; //String
    }
    }

    // v0_0_39_partition_info->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "tres");
    if (tres) { 
    tres_local_nonprim = v0_0_39_partition_info_tres_parseFromJSON(tres); //nonprimitive
    }

    // v0_0_39_partition_info->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // v0_0_39_partition_info->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "cpus");
    if (cpus) { 
    cpus_local_nonprim = v0_0_39_partition_info_nodes_parseFromJSON(cpus); //nonprimitive
    }

    // v0_0_39_partition_info->defaults
    cJSON *defaults = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "defaults");
    if (defaults) { 
    defaults_local_nonprim = v0_0_39_partition_info_defaults_parseFromJSON(defaults); //nonprimitive
    }

    // v0_0_39_partition_info->grace_time
    cJSON *grace_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "grace_time");
    if (grace_time) { 
    if(!cJSON_IsNumber(grace_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_partition_info->maximums
    cJSON *maximums = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "maximums");
    if (maximums) { 
    maximums_local_nonprim = v0_0_39_partition_info_maximums_parseFromJSON(maximums); //nonprimitive
    }

    // v0_0_39_partition_info->minimums
    cJSON *minimums = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "minimums");
    if (minimums) { 
    minimums_local_nonprim = v0_0_39_partition_info_minimums_parseFromJSON(minimums); //nonprimitive
    }

    // v0_0_39_partition_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_partition_info->node_sets
    cJSON *node_sets = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "node_sets");
    if (node_sets) { 
    if(!cJSON_IsString(node_sets) && !cJSON_IsNull(node_sets))
    {
    goto end; //String
    }
    }

    // v0_0_39_partition_info->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "priority");
    if (priority) { 
    priority_local_nonprim = v0_0_39_partition_info_priority_parseFromJSON(priority); //nonprimitive
    }

    // v0_0_39_partition_info->timeouts
    cJSON *timeouts = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "timeouts");
    if (timeouts) { 
    timeouts_local_nonprim = v0_0_39_partition_info_timeouts_parseFromJSON(timeouts); //nonprimitive
    }

    // v0_0_39_partition_info->suspend_time
    cJSON *suspend_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_infoJSON, "suspend_time");
    if (suspend_time) { 
    suspend_time_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(suspend_time); //nonprimitive
    }


    v0_0_39_partition_info_local_var = v0_0_39_partition_info_create (
        nodes ? nodes_local_nonprim : NULL,
        accounts ? accounts_local_nonprim : NULL,
        groups ? groups_local_nonprim : NULL,
        qos ? qos_local_nonprim : NULL,
        alternate && !cJSON_IsNull(alternate) ? strdup(alternate->valuestring) : NULL,
        tres ? tres_local_nonprim : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        cpus ? cpus_local_nonprim : NULL,
        defaults ? defaults_local_nonprim : NULL,
        grace_time ? grace_time->valuedouble : 0,
        maximums ? maximums_local_nonprim : NULL,
        minimums ? minimums_local_nonprim : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        node_sets && !cJSON_IsNull(node_sets) ? strdup(node_sets->valuestring) : NULL,
        priority ? priority_local_nonprim : NULL,
        timeouts ? timeouts_local_nonprim : NULL,
        suspend_time ? suspend_time_local_nonprim : NULL
        );

    return v0_0_39_partition_info_local_var;
end:
    if (nodes_local_nonprim) {
        v0_0_39_partition_info_nodes_free(nodes_local_nonprim);
        nodes_local_nonprim = NULL;
    }
    if (accounts_local_nonprim) {
        v0_0_39_partition_info_accounts_free(accounts_local_nonprim);
        accounts_local_nonprim = NULL;
    }
    if (groups_local_nonprim) {
        v0_0_39_partition_info_groups_free(groups_local_nonprim);
        groups_local_nonprim = NULL;
    }
    if (qos_local_nonprim) {
        v0_0_39_partition_info_qos_free(qos_local_nonprim);
        qos_local_nonprim = NULL;
    }
    if (tres_local_nonprim) {
        v0_0_39_partition_info_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    if (cpus_local_nonprim) {
        v0_0_39_partition_info_nodes_free(cpus_local_nonprim);
        cpus_local_nonprim = NULL;
    }
    if (defaults_local_nonprim) {
        v0_0_39_partition_info_defaults_free(defaults_local_nonprim);
        defaults_local_nonprim = NULL;
    }
    if (maximums_local_nonprim) {
        v0_0_39_partition_info_maximums_free(maximums_local_nonprim);
        maximums_local_nonprim = NULL;
    }
    if (minimums_local_nonprim) {
        v0_0_39_partition_info_minimums_free(minimums_local_nonprim);
        minimums_local_nonprim = NULL;
    }
    if (priority_local_nonprim) {
        v0_0_39_partition_info_priority_free(priority_local_nonprim);
        priority_local_nonprim = NULL;
    }
    if (timeouts_local_nonprim) {
        v0_0_39_partition_info_timeouts_free(timeouts_local_nonprim);
        timeouts_local_nonprim = NULL;
    }
    if (suspend_time_local_nonprim) {
        v0_0_39_uint32_no_val_free(suspend_time_local_nonprim);
        suspend_time_local_nonprim = NULL;
    }
    return NULL;

}
