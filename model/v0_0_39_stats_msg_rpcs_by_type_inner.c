#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_msg_rpcs_by_type_inner.h"



v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner_create(
    char *message_type,
    int type_id,
    long count,
    long average_time,
    long total_time
    ) {
    v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner_local_var = malloc(sizeof(v0_0_39_stats_msg_rpcs_by_type_inner_t));
    if (!v0_0_39_stats_msg_rpcs_by_type_inner_local_var) {
        return NULL;
    }
    v0_0_39_stats_msg_rpcs_by_type_inner_local_var->message_type = message_type;
    v0_0_39_stats_msg_rpcs_by_type_inner_local_var->type_id = type_id;
    v0_0_39_stats_msg_rpcs_by_type_inner_local_var->count = count;
    v0_0_39_stats_msg_rpcs_by_type_inner_local_var->average_time = average_time;
    v0_0_39_stats_msg_rpcs_by_type_inner_local_var->total_time = total_time;

    return v0_0_39_stats_msg_rpcs_by_type_inner_local_var;
}


void v0_0_39_stats_msg_rpcs_by_type_inner_free(v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner) {
    if(NULL == v0_0_39_stats_msg_rpcs_by_type_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_stats_msg_rpcs_by_type_inner->message_type) {
        free(v0_0_39_stats_msg_rpcs_by_type_inner->message_type);
        v0_0_39_stats_msg_rpcs_by_type_inner->message_type = NULL;
    }
    free(v0_0_39_stats_msg_rpcs_by_type_inner);
}

cJSON *v0_0_39_stats_msg_rpcs_by_type_inner_convertToJSON(v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_msg_rpcs_by_type_inner->message_type
    if(v0_0_39_stats_msg_rpcs_by_type_inner->message_type) {
    if(cJSON_AddStringToObject(item, "message_type", v0_0_39_stats_msg_rpcs_by_type_inner->message_type) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_stats_msg_rpcs_by_type_inner->type_id
    if(v0_0_39_stats_msg_rpcs_by_type_inner->type_id) {
    if(cJSON_AddNumberToObject(item, "type_id", v0_0_39_stats_msg_rpcs_by_type_inner->type_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg_rpcs_by_type_inner->count
    if(v0_0_39_stats_msg_rpcs_by_type_inner->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_39_stats_msg_rpcs_by_type_inner->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg_rpcs_by_type_inner->average_time
    if(v0_0_39_stats_msg_rpcs_by_type_inner->average_time) {
    if(cJSON_AddNumberToObject(item, "average_time", v0_0_39_stats_msg_rpcs_by_type_inner->average_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg_rpcs_by_type_inner->total_time
    if(v0_0_39_stats_msg_rpcs_by_type_inner->total_time) {
    if(cJSON_AddNumberToObject(item, "total_time", v0_0_39_stats_msg_rpcs_by_type_inner->total_time) == NULL) {
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

v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner_parseFromJSON(cJSON *v0_0_39_stats_msg_rpcs_by_type_innerJSON){

    v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner_local_var = NULL;

    // v0_0_39_stats_msg_rpcs_by_type_inner->message_type
    cJSON *message_type = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_type_innerJSON, "message_type");
    if (message_type) { 
    if(!cJSON_IsString(message_type) && !cJSON_IsNull(message_type))
    {
    goto end; //String
    }
    }

    // v0_0_39_stats_msg_rpcs_by_type_inner->type_id
    cJSON *type_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_type_innerJSON, "type_id");
    if (type_id) { 
    if(!cJSON_IsNumber(type_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg_rpcs_by_type_inner->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_type_innerJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg_rpcs_by_type_inner->average_time
    cJSON *average_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_type_innerJSON, "average_time");
    if (average_time) { 
    if(!cJSON_IsNumber(average_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg_rpcs_by_type_inner->total_time
    cJSON *total_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_type_innerJSON, "total_time");
    if (total_time) { 
    if(!cJSON_IsNumber(total_time))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_stats_msg_rpcs_by_type_inner_local_var = v0_0_39_stats_msg_rpcs_by_type_inner_create (
        message_type && !cJSON_IsNull(message_type) ? strdup(message_type->valuestring) : NULL,
        type_id ? type_id->valuedouble : 0,
        count ? count->valuedouble : 0,
        average_time ? average_time->valuedouble : 0,
        total_time ? total_time->valuedouble : 0
        );

    return v0_0_39_stats_msg_rpcs_by_type_inner_local_var;
end:
    return NULL;

}
