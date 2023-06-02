#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_node_allocation_sockets.h"



v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets_create(
    object_t *cores
    ) {
    v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets_local_var = malloc(sizeof(v0_0_38_node_allocation_sockets_t));
    if (!v0_0_38_node_allocation_sockets_local_var) {
        return NULL;
    }
    v0_0_38_node_allocation_sockets_local_var->cores = cores;

    return v0_0_38_node_allocation_sockets_local_var;
}


void v0_0_38_node_allocation_sockets_free(v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets) {
    if(NULL == v0_0_38_node_allocation_sockets){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_node_allocation_sockets->cores) {
        object_free(v0_0_38_node_allocation_sockets->cores);
        v0_0_38_node_allocation_sockets->cores = NULL;
    }
    free(v0_0_38_node_allocation_sockets);
}

cJSON *v0_0_38_node_allocation_sockets_convertToJSON(v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_node_allocation_sockets->cores
    if(v0_0_38_node_allocation_sockets->cores) {
    cJSON *cores_object = object_convertToJSON(v0_0_38_node_allocation_sockets->cores);
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

v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets_parseFromJSON(cJSON *v0_0_38_node_allocation_socketsJSON){

    v0_0_38_node_allocation_sockets_t *v0_0_38_node_allocation_sockets_local_var = NULL;

    // v0_0_38_node_allocation_sockets->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(v0_0_38_node_allocation_socketsJSON, "cores");
    object_t *cores_local_object = NULL;
    if (cores) { 
    cores_local_object = object_parseFromJSON(cores); //object
    }


    v0_0_38_node_allocation_sockets_local_var = v0_0_38_node_allocation_sockets_create (
        cores ? cores_local_object : NULL
        );

    return v0_0_38_node_allocation_sockets_local_var;
end:
    return NULL;

}
