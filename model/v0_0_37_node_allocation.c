#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_node_allocation.h"



v0_0_37_node_allocation_t *v0_0_37_node_allocation_create(
    int memory,
    object_t *cpus,
    object_t *sockets,
    object_t *cores
    ) {
    v0_0_37_node_allocation_t *v0_0_37_node_allocation_local_var = malloc(sizeof(v0_0_37_node_allocation_t));
    if (!v0_0_37_node_allocation_local_var) {
        return NULL;
    }
    v0_0_37_node_allocation_local_var->memory = memory;
    v0_0_37_node_allocation_local_var->cpus = cpus;
    v0_0_37_node_allocation_local_var->sockets = sockets;
    v0_0_37_node_allocation_local_var->cores = cores;

    return v0_0_37_node_allocation_local_var;
}


void v0_0_37_node_allocation_free(v0_0_37_node_allocation_t *v0_0_37_node_allocation) {
    if(NULL == v0_0_37_node_allocation){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_node_allocation->cpus) {
        object_free(v0_0_37_node_allocation->cpus);
        v0_0_37_node_allocation->cpus = NULL;
    }
    if (v0_0_37_node_allocation->sockets) {
        object_free(v0_0_37_node_allocation->sockets);
        v0_0_37_node_allocation->sockets = NULL;
    }
    if (v0_0_37_node_allocation->cores) {
        object_free(v0_0_37_node_allocation->cores);
        v0_0_37_node_allocation->cores = NULL;
    }
    free(v0_0_37_node_allocation);
}

cJSON *v0_0_37_node_allocation_convertToJSON(v0_0_37_node_allocation_t *v0_0_37_node_allocation) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_node_allocation->memory
    if(v0_0_37_node_allocation->memory) {
    if(cJSON_AddNumberToObject(item, "memory", v0_0_37_node_allocation->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node_allocation->cpus
    if(v0_0_37_node_allocation->cpus) {
    cJSON *cpus_object = object_convertToJSON(v0_0_37_node_allocation->cpus);
    if(cpus_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpus", cpus_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_37_node_allocation->sockets
    if(v0_0_37_node_allocation->sockets) {
    cJSON *sockets_object = object_convertToJSON(v0_0_37_node_allocation->sockets);
    if(sockets_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sockets", sockets_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_37_node_allocation->cores
    if(v0_0_37_node_allocation->cores) {
    cJSON *cores_object = object_convertToJSON(v0_0_37_node_allocation->cores);
    if(cores_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cores", cores_object);
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

v0_0_37_node_allocation_t *v0_0_37_node_allocation_parseFromJSON(cJSON *v0_0_37_node_allocationJSON){

    v0_0_37_node_allocation_t *v0_0_37_node_allocation_local_var = NULL;

    // v0_0_37_node_allocation->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(v0_0_37_node_allocationJSON, "memory");
    if (memory) { 
    if(!cJSON_IsNumber(memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node_allocation->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_37_node_allocationJSON, "cpus");
    object_t *cpus_local_object = NULL;
    if (cpus) { 
    cpus_local_object = object_parseFromJSON(cpus); //object
    }

    // v0_0_37_node_allocation->sockets
    cJSON *sockets = cJSON_GetObjectItemCaseSensitive(v0_0_37_node_allocationJSON, "sockets");
    object_t *sockets_local_object = NULL;
    if (sockets) { 
    sockets_local_object = object_parseFromJSON(sockets); //object
    }

    // v0_0_37_node_allocation->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(v0_0_37_node_allocationJSON, "cores");
    object_t *cores_local_object = NULL;
    if (cores) { 
    cores_local_object = object_parseFromJSON(cores); //object
    }


    v0_0_37_node_allocation_local_var = v0_0_37_node_allocation_create (
        memory ? memory->valuedouble : 0,
        cpus ? cpus_local_object : NULL,
        sockets ? sockets_local_object : NULL,
        cores ? cores_local_object : NULL
        );

    return v0_0_37_node_allocation_local_var;
end:
    return NULL;

}
