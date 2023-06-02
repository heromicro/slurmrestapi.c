#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_node_allocation.h"



v0_0_38_node_allocation_t *v0_0_38_node_allocation_create(
    int memory,
    int cpus,
    v0_0_38_node_allocation_sockets_t *sockets,
    char *nodename
    ) {
    v0_0_38_node_allocation_t *v0_0_38_node_allocation_local_var = malloc(sizeof(v0_0_38_node_allocation_t));
    if (!v0_0_38_node_allocation_local_var) {
        return NULL;
    }
    v0_0_38_node_allocation_local_var->memory = memory;
    v0_0_38_node_allocation_local_var->cpus = cpus;
    v0_0_38_node_allocation_local_var->sockets = sockets;
    v0_0_38_node_allocation_local_var->nodename = nodename;

    return v0_0_38_node_allocation_local_var;
}


void v0_0_38_node_allocation_free(v0_0_38_node_allocation_t *v0_0_38_node_allocation) {
    if(NULL == v0_0_38_node_allocation){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_node_allocation->sockets) {
        v0_0_38_node_allocation_sockets_free(v0_0_38_node_allocation->sockets);
        v0_0_38_node_allocation->sockets = NULL;
    }
    if (v0_0_38_node_allocation->nodename) {
        free(v0_0_38_node_allocation->nodename);
        v0_0_38_node_allocation->nodename = NULL;
    }
    free(v0_0_38_node_allocation);
}

cJSON *v0_0_38_node_allocation_convertToJSON(v0_0_38_node_allocation_t *v0_0_38_node_allocation) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_node_allocation->memory
    if(v0_0_38_node_allocation->memory) {
    if(cJSON_AddNumberToObject(item, "memory", v0_0_38_node_allocation->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_node_allocation->cpus
    if(v0_0_38_node_allocation->cpus) {
    if(cJSON_AddNumberToObject(item, "cpus", v0_0_38_node_allocation->cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_node_allocation->sockets
    if(v0_0_38_node_allocation->sockets) {
    cJSON *sockets_local_JSON = v0_0_38_node_allocation_sockets_convertToJSON(v0_0_38_node_allocation->sockets);
    if(sockets_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sockets", sockets_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_38_node_allocation->nodename
    if(v0_0_38_node_allocation->nodename) {
    if(cJSON_AddStringToObject(item, "nodename", v0_0_38_node_allocation->nodename) == NULL) {
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

v0_0_38_node_allocation_t *v0_0_38_node_allocation_parseFromJSON(cJSON *v0_0_38_node_allocationJSON){

    v0_0_38_node_allocation_t *v0_0_38_node_allocation_local_var = NULL;

    // define the local variable for v0_0_38_node_allocation->sockets
    v0_0_38_node_allocation_sockets_t *sockets_local_nonprim = NULL;

    // v0_0_38_node_allocation->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(v0_0_38_node_allocationJSON, "memory");
    if (memory) { 
    if(!cJSON_IsNumber(memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_node_allocation->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_38_node_allocationJSON, "cpus");
    if (cpus) { 
    if(!cJSON_IsNumber(cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_node_allocation->sockets
    cJSON *sockets = cJSON_GetObjectItemCaseSensitive(v0_0_38_node_allocationJSON, "sockets");
    if (sockets) { 
    sockets_local_nonprim = v0_0_38_node_allocation_sockets_parseFromJSON(sockets); //nonprimitive
    }

    // v0_0_38_node_allocation->nodename
    cJSON *nodename = cJSON_GetObjectItemCaseSensitive(v0_0_38_node_allocationJSON, "nodename");
    if (nodename) { 
    if(!cJSON_IsString(nodename) && !cJSON_IsNull(nodename))
    {
    goto end; //String
    }
    }


    v0_0_38_node_allocation_local_var = v0_0_38_node_allocation_create (
        memory ? memory->valuedouble : 0,
        cpus ? cpus->valuedouble : 0,
        sockets ? sockets_local_nonprim : NULL,
        nodename && !cJSON_IsNull(nodename) ? strdup(nodename->valuestring) : NULL
        );

    return v0_0_38_node_allocation_local_var;
end:
    if (sockets_local_nonprim) {
        v0_0_38_node_allocation_sockets_free(sockets_local_nonprim);
        sockets_local_nonprim = NULL;
    }
    return NULL;

}
