#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_cluster_rec_controller.h"



v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller_create(
    int port
    ) {
    v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller_local_var = malloc(sizeof(v0_0_39_cluster_rec_controller_t));
    if (!v0_0_39_cluster_rec_controller_local_var) {
        return NULL;
    }
    v0_0_39_cluster_rec_controller_local_var->port = port;

    return v0_0_39_cluster_rec_controller_local_var;
}


void v0_0_39_cluster_rec_controller_free(v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller) {
    if(NULL == v0_0_39_cluster_rec_controller){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_cluster_rec_controller);
}

cJSON *v0_0_39_cluster_rec_controller_convertToJSON(v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_cluster_rec_controller->port
    if(v0_0_39_cluster_rec_controller->port) {
    if(cJSON_AddNumberToObject(item, "port", v0_0_39_cluster_rec_controller->port) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller_parseFromJSON(cJSON *v0_0_39_cluster_rec_controllerJSON){

    v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller_local_var = NULL;

    // v0_0_39_cluster_rec_controller->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_rec_controllerJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_cluster_rec_controller_local_var = v0_0_39_cluster_rec_controller_create (
        port ? port->valuedouble : 0
        );

    return v0_0_39_cluster_rec_controller_local_var;
end:
    return NULL;

}
