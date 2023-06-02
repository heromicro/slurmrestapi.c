#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_ping.h"


char* pingv0_0_38_ping_ToString(slurm_rest_api_v0_0_38_ping_PING_e ping) {
    char* pingArray[] =  { "NULL", "UP", "DOWN" };
	return pingArray[ping];
}

slurm_rest_api_v0_0_38_ping_PING_e pingv0_0_38_ping_FromString(char* ping){
    int stringToReturn = 0;
    char *pingArray[] =  { "NULL", "UP", "DOWN" };
    size_t sizeofArray = sizeof(pingArray) / sizeof(pingArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ping, pingArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_38_ping_t *v0_0_38_ping_create(
    char *hostname,
    slurm_rest_api_v0_0_38_ping_PING_e ping,
    char *mode,
    int status
    ) {
    v0_0_38_ping_t *v0_0_38_ping_local_var = malloc(sizeof(v0_0_38_ping_t));
    if (!v0_0_38_ping_local_var) {
        return NULL;
    }
    v0_0_38_ping_local_var->hostname = hostname;
    v0_0_38_ping_local_var->ping = ping;
    v0_0_38_ping_local_var->mode = mode;
    v0_0_38_ping_local_var->status = status;

    return v0_0_38_ping_local_var;
}


void v0_0_38_ping_free(v0_0_38_ping_t *v0_0_38_ping) {
    if(NULL == v0_0_38_ping){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_ping->hostname) {
        free(v0_0_38_ping->hostname);
        v0_0_38_ping->hostname = NULL;
    }
    if (v0_0_38_ping->mode) {
        free(v0_0_38_ping->mode);
        v0_0_38_ping->mode = NULL;
    }
    free(v0_0_38_ping);
}

cJSON *v0_0_38_ping_convertToJSON(v0_0_38_ping_t *v0_0_38_ping) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_ping->hostname
    if(v0_0_38_ping->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", v0_0_38_ping->hostname) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_ping->ping
    if(v0_0_38_ping->ping != slurm_rest_api_v0_0_38_ping_PING_NULL) {
    if(cJSON_AddStringToObject(item, "ping", pingv0_0_38_ping_ToString(v0_0_38_ping->ping)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // v0_0_38_ping->mode
    if(v0_0_38_ping->mode) {
    if(cJSON_AddStringToObject(item, "mode", v0_0_38_ping->mode) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_ping->status
    if(v0_0_38_ping->status) {
    if(cJSON_AddNumberToObject(item, "status", v0_0_38_ping->status) == NULL) {
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

v0_0_38_ping_t *v0_0_38_ping_parseFromJSON(cJSON *v0_0_38_pingJSON){

    v0_0_38_ping_t *v0_0_38_ping_local_var = NULL;

    // v0_0_38_ping->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(v0_0_38_pingJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }

    // v0_0_38_ping->ping
    cJSON *ping = cJSON_GetObjectItemCaseSensitive(v0_0_38_pingJSON, "ping");
    slurm_rest_api_v0_0_38_ping_PING_e pingVariable;
    if (ping) { 
    if(!cJSON_IsString(ping))
    {
    goto end; //Enum
    }
    pingVariable = pingv0_0_38_ping_FromString(ping->valuestring);
    }

    // v0_0_38_ping->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(v0_0_38_pingJSON, "mode");
    if (mode) { 
    if(!cJSON_IsString(mode) && !cJSON_IsNull(mode))
    {
    goto end; //String
    }
    }

    // v0_0_38_ping->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(v0_0_38_pingJSON, "status");
    if (status) { 
    if(!cJSON_IsNumber(status))
    {
    goto end; //Numeric
    }
    }


    v0_0_38_ping_local_var = v0_0_38_ping_create (
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL,
        ping ? pingVariable : -1,
        mode && !cJSON_IsNull(mode) ? strdup(mode->valuestring) : NULL,
        status ? status->valuedouble : 0
        );

    return v0_0_38_ping_local_var;
end:
    return NULL;

}
