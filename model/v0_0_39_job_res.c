#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_res.h"



v0_0_39_job_res_t *v0_0_39_job_res_create(
    char *nodes,
    int allocated_cores,
    int allocated_cpus,
    int allocated_hosts,
    list_t *allocated_nodes
    ) {
    v0_0_39_job_res_t *v0_0_39_job_res_local_var = malloc(sizeof(v0_0_39_job_res_t));
    if (!v0_0_39_job_res_local_var) {
        return NULL;
    }
    v0_0_39_job_res_local_var->nodes = nodes;
    v0_0_39_job_res_local_var->allocated_cores = allocated_cores;
    v0_0_39_job_res_local_var->allocated_cpus = allocated_cpus;
    v0_0_39_job_res_local_var->allocated_hosts = allocated_hosts;
    v0_0_39_job_res_local_var->allocated_nodes = allocated_nodes;

    return v0_0_39_job_res_local_var;
}


void v0_0_39_job_res_free(v0_0_39_job_res_t *v0_0_39_job_res) {
    if(NULL == v0_0_39_job_res){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_res->nodes) {
        free(v0_0_39_job_res->nodes);
        v0_0_39_job_res->nodes = NULL;
    }
    if (v0_0_39_job_res->allocated_nodes) {
        list_ForEach(listEntry, v0_0_39_job_res->allocated_nodes) {
            any_type_free(listEntry->data);
        }
        list_freeList(v0_0_39_job_res->allocated_nodes);
        v0_0_39_job_res->allocated_nodes = NULL;
    }
    free(v0_0_39_job_res);
}

cJSON *v0_0_39_job_res_convertToJSON(v0_0_39_job_res_t *v0_0_39_job_res) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_res->nodes
    if(v0_0_39_job_res->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_39_job_res->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_res->allocated_cores
    if(v0_0_39_job_res->allocated_cores) {
    if(cJSON_AddNumberToObject(item, "allocated_cores", v0_0_39_job_res->allocated_cores) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_res->allocated_cpus
    if(v0_0_39_job_res->allocated_cpus) {
    if(cJSON_AddNumberToObject(item, "allocated_cpus", v0_0_39_job_res->allocated_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_res->allocated_hosts
    if(v0_0_39_job_res->allocated_hosts) {
    if(cJSON_AddNumberToObject(item, "allocated_hosts", v0_0_39_job_res->allocated_hosts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_res->allocated_nodes
    if(v0_0_39_job_res->allocated_nodes) {
    cJSON *allocated_nodes = cJSON_AddArrayToObject(item, "allocated_nodes");
    if(allocated_nodes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allocated_nodesListEntry;
    if (v0_0_39_job_res->allocated_nodes) {
    list_ForEach(allocated_nodesListEntry, v0_0_39_job_res->allocated_nodes) {
    cJSON *itemLocal = any_type_convertToJSON(allocated_nodesListEntry->data);
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

v0_0_39_job_res_t *v0_0_39_job_res_parseFromJSON(cJSON *v0_0_39_job_resJSON){

    v0_0_39_job_res_t *v0_0_39_job_res_local_var = NULL;

    // define the local list for v0_0_39_job_res->allocated_nodes
    list_t *allocated_nodesList = NULL;

    // v0_0_39_job_res->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_resJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_res->allocated_cores
    cJSON *allocated_cores = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_resJSON, "allocated_cores");
    if (allocated_cores) { 
    if(!cJSON_IsNumber(allocated_cores))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_res->allocated_cpus
    cJSON *allocated_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_resJSON, "allocated_cpus");
    if (allocated_cpus) { 
    if(!cJSON_IsNumber(allocated_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_res->allocated_hosts
    cJSON *allocated_hosts = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_resJSON, "allocated_hosts");
    if (allocated_hosts) { 
    if(!cJSON_IsNumber(allocated_hosts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_res->allocated_nodes
    cJSON *allocated_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_resJSON, "allocated_nodes");
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
        any_type_t *allocated_nodesItem = any_type_parseFromJSON(allocated_nodes_local_nonprimitive);

        list_addElement(allocated_nodesList, allocated_nodesItem);
    }
    }


    v0_0_39_job_res_local_var = v0_0_39_job_res_create (
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        allocated_cores ? allocated_cores->valuedouble : 0,
        allocated_cpus ? allocated_cpus->valuedouble : 0,
        allocated_hosts ? allocated_hosts->valuedouble : 0,
        allocated_nodes ? allocated_nodesList : NULL
        );

    return v0_0_39_job_res_local_var;
end:
    if (allocated_nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, allocated_nodesList) {
            any_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(allocated_nodesList);
        allocated_nodesList = NULL;
    }
    return NULL;

}
