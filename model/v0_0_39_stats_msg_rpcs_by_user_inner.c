#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_msg_rpcs_by_user_inner.h"



v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner_create(
    char *user,
    int user_id,
    long count,
    long average_time,
    long total_time
    ) {
    v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner_local_var = malloc(sizeof(v0_0_39_stats_msg_rpcs_by_user_inner_t));
    if (!v0_0_39_stats_msg_rpcs_by_user_inner_local_var) {
        return NULL;
    }
    v0_0_39_stats_msg_rpcs_by_user_inner_local_var->user = user;
    v0_0_39_stats_msg_rpcs_by_user_inner_local_var->user_id = user_id;
    v0_0_39_stats_msg_rpcs_by_user_inner_local_var->count = count;
    v0_0_39_stats_msg_rpcs_by_user_inner_local_var->average_time = average_time;
    v0_0_39_stats_msg_rpcs_by_user_inner_local_var->total_time = total_time;

    return v0_0_39_stats_msg_rpcs_by_user_inner_local_var;
}


void v0_0_39_stats_msg_rpcs_by_user_inner_free(v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner) {
    if(NULL == v0_0_39_stats_msg_rpcs_by_user_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_stats_msg_rpcs_by_user_inner->user) {
        free(v0_0_39_stats_msg_rpcs_by_user_inner->user);
        v0_0_39_stats_msg_rpcs_by_user_inner->user = NULL;
    }
    free(v0_0_39_stats_msg_rpcs_by_user_inner);
}

cJSON *v0_0_39_stats_msg_rpcs_by_user_inner_convertToJSON(v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_msg_rpcs_by_user_inner->user
    if(v0_0_39_stats_msg_rpcs_by_user_inner->user) {
    if(cJSON_AddStringToObject(item, "user", v0_0_39_stats_msg_rpcs_by_user_inner->user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_stats_msg_rpcs_by_user_inner->user_id
    if(v0_0_39_stats_msg_rpcs_by_user_inner->user_id) {
    if(cJSON_AddNumberToObject(item, "user_id", v0_0_39_stats_msg_rpcs_by_user_inner->user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg_rpcs_by_user_inner->count
    if(v0_0_39_stats_msg_rpcs_by_user_inner->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_39_stats_msg_rpcs_by_user_inner->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg_rpcs_by_user_inner->average_time
    if(v0_0_39_stats_msg_rpcs_by_user_inner->average_time) {
    if(cJSON_AddNumberToObject(item, "average_time", v0_0_39_stats_msg_rpcs_by_user_inner->average_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg_rpcs_by_user_inner->total_time
    if(v0_0_39_stats_msg_rpcs_by_user_inner->total_time) {
    if(cJSON_AddNumberToObject(item, "total_time", v0_0_39_stats_msg_rpcs_by_user_inner->total_time) == NULL) {
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

v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner_parseFromJSON(cJSON *v0_0_39_stats_msg_rpcs_by_user_innerJSON){

    v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner_local_var = NULL;

    // v0_0_39_stats_msg_rpcs_by_user_inner->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_user_innerJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // v0_0_39_stats_msg_rpcs_by_user_inner->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_user_innerJSON, "user_id");
    if (user_id) { 
    if(!cJSON_IsNumber(user_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg_rpcs_by_user_inner->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_user_innerJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg_rpcs_by_user_inner->average_time
    cJSON *average_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_user_innerJSON, "average_time");
    if (average_time) { 
    if(!cJSON_IsNumber(average_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg_rpcs_by_user_inner->total_time
    cJSON *total_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msg_rpcs_by_user_innerJSON, "total_time");
    if (total_time) { 
    if(!cJSON_IsNumber(total_time))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_stats_msg_rpcs_by_user_inner_local_var = v0_0_39_stats_msg_rpcs_by_user_inner_create (
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        user_id ? user_id->valuedouble : 0,
        count ? count->valuedouble : 0,
        average_time ? average_time->valuedouble : 0,
        total_time ? total_time->valuedouble : 0
        );

    return v0_0_39_stats_msg_rpcs_by_user_inner_local_var;
end:
    return NULL;

}
