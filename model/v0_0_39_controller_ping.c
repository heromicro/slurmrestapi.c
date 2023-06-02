#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_controller_ping.h"



v0_0_39_controller_ping_t *v0_0_39_controller_ping_create(
    char *hostname,
    char *pinged,
    long latency,
    char *mode
    ) {
    v0_0_39_controller_ping_t *v0_0_39_controller_ping_local_var = malloc(sizeof(v0_0_39_controller_ping_t));
    if (!v0_0_39_controller_ping_local_var) {
        return NULL;
    }
    v0_0_39_controller_ping_local_var->hostname = hostname;
    v0_0_39_controller_ping_local_var->pinged = pinged;
    v0_0_39_controller_ping_local_var->latency = latency;
    v0_0_39_controller_ping_local_var->mode = mode;

    return v0_0_39_controller_ping_local_var;
}


void v0_0_39_controller_ping_free(v0_0_39_controller_ping_t *v0_0_39_controller_ping) {
    if(NULL == v0_0_39_controller_ping){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_controller_ping->hostname) {
        free(v0_0_39_controller_ping->hostname);
        v0_0_39_controller_ping->hostname = NULL;
    }
    if (v0_0_39_controller_ping->pinged) {
        free(v0_0_39_controller_ping->pinged);
        v0_0_39_controller_ping->pinged = NULL;
    }
    if (v0_0_39_controller_ping->mode) {
        free(v0_0_39_controller_ping->mode);
        v0_0_39_controller_ping->mode = NULL;
    }
    free(v0_0_39_controller_ping);
}

cJSON *v0_0_39_controller_ping_convertToJSON(v0_0_39_controller_ping_t *v0_0_39_controller_ping) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_controller_ping->hostname
    if(v0_0_39_controller_ping->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", v0_0_39_controller_ping->hostname) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_controller_ping->pinged
    if(v0_0_39_controller_ping->pinged) {
    if(cJSON_AddStringToObject(item, "pinged", v0_0_39_controller_ping->pinged) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_controller_ping->latency
    if(v0_0_39_controller_ping->latency) {
    if(cJSON_AddNumberToObject(item, "latency", v0_0_39_controller_ping->latency) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_controller_ping->mode
    if(v0_0_39_controller_ping->mode) {
    if(cJSON_AddStringToObject(item, "mode", v0_0_39_controller_ping->mode) == NULL) {
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

v0_0_39_controller_ping_t *v0_0_39_controller_ping_parseFromJSON(cJSON *v0_0_39_controller_pingJSON){

    v0_0_39_controller_ping_t *v0_0_39_controller_ping_local_var = NULL;

    // v0_0_39_controller_ping->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(v0_0_39_controller_pingJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }

    // v0_0_39_controller_ping->pinged
    cJSON *pinged = cJSON_GetObjectItemCaseSensitive(v0_0_39_controller_pingJSON, "pinged");
    if (pinged) { 
    if(!cJSON_IsString(pinged) && !cJSON_IsNull(pinged))
    {
    goto end; //String
    }
    }

    // v0_0_39_controller_ping->latency
    cJSON *latency = cJSON_GetObjectItemCaseSensitive(v0_0_39_controller_pingJSON, "latency");
    if (latency) { 
    if(!cJSON_IsNumber(latency))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_controller_ping->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(v0_0_39_controller_pingJSON, "mode");
    if (mode) { 
    if(!cJSON_IsString(mode) && !cJSON_IsNull(mode))
    {
    goto end; //String
    }
    }


    v0_0_39_controller_ping_local_var = v0_0_39_controller_ping_create (
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL,
        pinged && !cJSON_IsNull(pinged) ? strdup(pinged->valuestring) : NULL,
        latency ? latency->valuedouble : 0,
        mode && !cJSON_IsNull(mode) ? strdup(mode->valuestring) : NULL
        );

    return v0_0_39_controller_ping_local_var;
end:
    return NULL;

}
