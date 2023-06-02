#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_job_resources.h"



v0_0_37_job_resources_t *v0_0_37_job_resources_create(
    char *nodes,
    int allocated_cpus,
    int allocated_hosts,
    list_t *allocated_nodes
    ) {
    v0_0_37_job_resources_t *v0_0_37_job_resources_local_var = malloc(sizeof(v0_0_37_job_resources_t));
    if (!v0_0_37_job_resources_local_var) {
        return NULL;
    }
    v0_0_37_job_resources_local_var->nodes = nodes;
    v0_0_37_job_resources_local_var->allocated_cpus = allocated_cpus;
    v0_0_37_job_resources_local_var->allocated_hosts = allocated_hosts;
    v0_0_37_job_resources_local_var->allocated_nodes = allocated_nodes;

    return v0_0_37_job_resources_local_var;
}


void v0_0_37_job_resources_free(v0_0_37_job_resources_t *v0_0_37_job_resources) {
    if(NULL == v0_0_37_job_resources){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_job_resources->nodes) {
        free(v0_0_37_job_resources->nodes);
        v0_0_37_job_resources->nodes = NULL;
    }
    if (v0_0_37_job_resources->allocated_nodes) {
        list_ForEach(listEntry, v0_0_37_job_resources->allocated_nodes) {
            v0_0_37_node_allocation_free(listEntry->data);
        }
        list_freeList(v0_0_37_job_resources->allocated_nodes);
        v0_0_37_job_resources->allocated_nodes = NULL;
    }
    free(v0_0_37_job_resources);
}

cJSON *v0_0_37_job_resources_convertToJSON(v0_0_37_job_resources_t *v0_0_37_job_resources) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_job_resources->nodes
    if(v0_0_37_job_resources->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_37_job_resources->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_job_resources->allocated_cpus
    if(v0_0_37_job_resources->allocated_cpus) {
    if(cJSON_AddNumberToObject(item, "allocated_cpus", v0_0_37_job_resources->allocated_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_job_resources->allocated_hosts
    if(v0_0_37_job_resources->allocated_hosts) {
    if(cJSON_AddNumberToObject(item, "allocated_hosts", v0_0_37_job_resources->allocated_hosts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_job_resources->allocated_nodes
    if(v0_0_37_job_resources->allocated_nodes) {
    cJSON *allocated_nodes = cJSON_AddArrayToObject(item, "allocated_nodes");
    if(allocated_nodes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allocated_nodesListEntry;
    if (v0_0_37_job_resources->allocated_nodes) {
    list_ForEach(allocated_nodesListEntry, v0_0_37_job_resources->allocated_nodes) {
    cJSON *itemLocal = v0_0_37_node_allocation_convertToJSON(allocated_nodesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allocated_nodes, itemLocal);
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

v0_0_37_job_resources_t *v0_0_37_job_resources_parseFromJSON(cJSON *v0_0_37_job_resourcesJSON){

    v0_0_37_job_resources_t *v0_0_37_job_resources_local_var = NULL;

    // define the local list for v0_0_37_job_resources->allocated_nodes
    list_t *allocated_nodesList = NULL;

    // v0_0_37_job_resources->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_resourcesJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_37_job_resources->allocated_cpus
    cJSON *allocated_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_resourcesJSON, "allocated_cpus");
    if (allocated_cpus) { 
    if(!cJSON_IsNumber(allocated_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_job_resources->allocated_hosts
    cJSON *allocated_hosts = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_resourcesJSON, "allocated_hosts");
    if (allocated_hosts) { 
    if(!cJSON_IsNumber(allocated_hosts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_job_resources->allocated_nodes
    cJSON *allocated_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_37_job_resourcesJSON, "allocated_nodes");
    if (allocated_nodes) { 
    cJSON *allocated_nodes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(allocated_nodes)){
        goto end; //nonprimitive container
    }

    allocated_nodesList = list_createList();

    cJSON_ArrayForEach(allocated_nodes_local_nonprimitive,allocated_nodes )
    {
        if(!cJSON_IsObject(allocated_nodes_local_nonprimitive)){
            goto end;
        }
        v0_0_37_node_allocation_t *allocated_nodesItem = v0_0_37_node_allocation_parseFromJSON(allocated_nodes_local_nonprimitive);

        list_addElement(allocated_nodesList, allocated_nodesItem);
    }
    }


    v0_0_37_job_resources_local_var = v0_0_37_job_resources_create (
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        allocated_cpus ? allocated_cpus->valuedouble : 0,
        allocated_hosts ? allocated_hosts->valuedouble : 0,
        allocated_nodes ? allocated_nodesList : NULL
        );

    return v0_0_37_job_resources_local_var;
end:
    if (allocated_nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, allocated_nodesList) {
            v0_0_37_node_allocation_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(allocated_nodesList);
        allocated_nodesList = NULL;
    }
    return NULL;

}
