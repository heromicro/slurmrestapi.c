#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_cluster_info_controller.h"



dbv0_0_37_cluster_info_controller_t *dbv0_0_37_cluster_info_controller_create(
    char *host,
    int port
    ) {
    dbv0_0_37_cluster_info_controller_t *dbv0_0_37_cluster_info_controller_local_var = malloc(sizeof(dbv0_0_37_cluster_info_controller_t));
    if (!dbv0_0_37_cluster_info_controller_local_var) {
        return NULL;
    }
    dbv0_0_37_cluster_info_controller_local_var->host = host;
    dbv0_0_37_cluster_info_controller_local_var->port = port;

    return dbv0_0_37_cluster_info_controller_local_var;
}


void dbv0_0_37_cluster_info_controller_free(dbv0_0_37_cluster_info_controller_t *dbv0_0_37_cluster_info_controller) {
    if(NULL == dbv0_0_37_cluster_info_controller){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_cluster_info_controller->host) {
        free(dbv0_0_37_cluster_info_controller->host);
        dbv0_0_37_cluster_info_controller->host = NULL;
    }
    free(dbv0_0_37_cluster_info_controller);
}

cJSON *dbv0_0_37_cluster_info_controller_convertToJSON(dbv0_0_37_cluster_info_controller_t *dbv0_0_37_cluster_info_controller) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_cluster_info_controller->host
    if(dbv0_0_37_cluster_info_controller->host) {
    if(cJSON_AddStringToObject(item, "host", dbv0_0_37_cluster_info_controller->host) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_cluster_info_controller->port
    if(dbv0_0_37_cluster_info_controller->port) {
    if(cJSON_AddNumberToObject(item, "port", dbv0_0_37_cluster_info_controller->port) == NULL) {
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

dbv0_0_37_cluster_info_controller_t *dbv0_0_37_cluster_info_controller_parseFromJSON(cJSON *dbv0_0_37_cluster_info_controllerJSON){

    dbv0_0_37_cluster_info_controller_t *dbv0_0_37_cluster_info_controller_local_var = NULL;

    // dbv0_0_37_cluster_info_controller->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_cluster_info_controllerJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host) && !cJSON_IsNull(host))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_cluster_info_controller->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_cluster_info_controllerJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_cluster_info_controller_local_var = dbv0_0_37_cluster_info_controller_create (
        host && !cJSON_IsNull(host) ? strdup(host->valuestring) : NULL,
        port ? port->valuedouble : 0
        );

    return dbv0_0_37_cluster_info_controller_local_var;
end:
    return NULL;

}
