#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_user.h"



v0_0_39_stats_user_t *v0_0_39_stats_user_create(
    char *user,
    int count,
    v0_0_39_stats_rpc_time_t *time
    ) {
    v0_0_39_stats_user_t *v0_0_39_stats_user_local_var = malloc(sizeof(v0_0_39_stats_user_t));
    if (!v0_0_39_stats_user_local_var) {
        return NULL;
    }
    v0_0_39_stats_user_local_var->user = user;
    v0_0_39_stats_user_local_var->count = count;
    v0_0_39_stats_user_local_var->time = time;

    return v0_0_39_stats_user_local_var;
}


void v0_0_39_stats_user_free(v0_0_39_stats_user_t *v0_0_39_stats_user) {
    if(NULL == v0_0_39_stats_user){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_stats_user->user) {
        free(v0_0_39_stats_user->user);
        v0_0_39_stats_user->user = NULL;
    }
    if (v0_0_39_stats_user->time) {
        v0_0_39_stats_rpc_time_free(v0_0_39_stats_user->time);
        v0_0_39_stats_user->time = NULL;
    }
    free(v0_0_39_stats_user);
}

cJSON *v0_0_39_stats_user_convertToJSON(v0_0_39_stats_user_t *v0_0_39_stats_user) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_user->user
    if(v0_0_39_stats_user->user) {
    if(cJSON_AddStringToObject(item, "user", v0_0_39_stats_user->user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_stats_user->count
    if(v0_0_39_stats_user->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_39_stats_user->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_user->time
    if(v0_0_39_stats_user->time) {
    cJSON *time_local_JSON = v0_0_39_stats_rpc_time_convertToJSON(v0_0_39_stats_user->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
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

v0_0_39_stats_user_t *v0_0_39_stats_user_parseFromJSON(cJSON *v0_0_39_stats_userJSON){

    v0_0_39_stats_user_t *v0_0_39_stats_user_local_var = NULL;

    // define the local variable for v0_0_39_stats_user->time
    v0_0_39_stats_rpc_time_t *time_local_nonprim = NULL;

    // v0_0_39_stats_user->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_userJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // v0_0_39_stats_user->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_userJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_user->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_userJSON, "time");
    if (time) { 
    time_local_nonprim = v0_0_39_stats_rpc_time_parseFromJSON(time); //nonprimitive
    }


    v0_0_39_stats_user_local_var = v0_0_39_stats_user_create (
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        count ? count->valuedouble : 0,
        time ? time_local_nonprim : NULL
        );

    return v0_0_39_stats_user_local_var;
end:
    if (time_local_nonprim) {
        v0_0_39_stats_rpc_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    return NULL;

}
