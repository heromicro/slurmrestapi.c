#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_diag_rpcm.h"



v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm_create(
    char *message_type,
    int type_id,
    int count,
    int average_time,
    int total_time
    ) {
    v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm_local_var = malloc(sizeof(v0_0_38_diag_rpcm_t));
    if (!v0_0_38_diag_rpcm_local_var) {
        return NULL;
    }
    v0_0_38_diag_rpcm_local_var->message_type = message_type;
    v0_0_38_diag_rpcm_local_var->type_id = type_id;
    v0_0_38_diag_rpcm_local_var->count = count;
    v0_0_38_diag_rpcm_local_var->average_time = average_time;
    v0_0_38_diag_rpcm_local_var->total_time = total_time;

    return v0_0_38_diag_rpcm_local_var;
}


void v0_0_38_diag_rpcm_free(v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm) {
    if(NULL == v0_0_38_diag_rpcm){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_diag_rpcm->message_type) {
        free(v0_0_38_diag_rpcm->message_type);
        v0_0_38_diag_rpcm->message_type = NULL;
    }
    free(v0_0_38_diag_rpcm);
}

cJSON *v0_0_38_diag_rpcm_convertToJSON(v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_diag_rpcm->message_type
    if(v0_0_38_diag_rpcm->message_type) {
    if(cJSON_AddStringToObject(item, "message_type", v0_0_38_diag_rpcm->message_type) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_diag_rpcm->type_id
    if(v0_0_38_diag_rpcm->type_id) {
    if(cJSON_AddNumberToObject(item, "type_id", v0_0_38_diag_rpcm->type_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_diag_rpcm->count
    if(v0_0_38_diag_rpcm->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_38_diag_rpcm->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_diag_rpcm->average_time
    if(v0_0_38_diag_rpcm->average_time) {
    if(cJSON_AddNumberToObject(item, "average_time", v0_0_38_diag_rpcm->average_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_diag_rpcm->total_time
    if(v0_0_38_diag_rpcm->total_time) {
    if(cJSON_AddNumberToObject(item, "total_time", v0_0_38_diag_rpcm->total_time) == NULL) {
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

v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm_parseFromJSON(cJSON *v0_0_38_diag_rpcmJSON){

    v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm_local_var = NULL;

    // v0_0_38_diag_rpcm->message_type
    cJSON *message_type = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcmJSON, "message_type");
    if (message_type) { 
    if(!cJSON_IsString(message_type) && !cJSON_IsNull(message_type))
    {
    goto end; //String
    }
    }

    // v0_0_38_diag_rpcm->type_id
    cJSON *type_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcmJSON, "type_id");
    if (type_id) { 
    if(!cJSON_IsNumber(type_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_diag_rpcm->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcmJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_diag_rpcm->average_time
    cJSON *average_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcmJSON, "average_time");
    if (average_time) { 
    if(!cJSON_IsNumber(average_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_diag_rpcm->total_time
    cJSON *total_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcmJSON, "total_time");
    if (total_time) { 
    if(!cJSON_IsNumber(total_time))
    {
    goto end; //Numeric
    }
    }


    v0_0_38_diag_rpcm_local_var = v0_0_38_diag_rpcm_create (
        message_type && !cJSON_IsNull(message_type) ? strdup(message_type->valuestring) : NULL,
        type_id ? type_id->valuedouble : 0,
        count ? count->valuedouble : 0,
        average_time ? average_time->valuedouble : 0,
        total_time ? total_time->valuedouble : 0
        );

    return v0_0_38_diag_rpcm_local_var;
end:
    return NULL;

}
