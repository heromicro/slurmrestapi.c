#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_diag_rpcu.h"



v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu_create(
    char *user,
    int user_id,
    int count,
    int average_time,
    int total_time
    ) {
    v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu_local_var = malloc(sizeof(v0_0_38_diag_rpcu_t));
    if (!v0_0_38_diag_rpcu_local_var) {
        return NULL;
    }
    v0_0_38_diag_rpcu_local_var->user = user;
    v0_0_38_diag_rpcu_local_var->user_id = user_id;
    v0_0_38_diag_rpcu_local_var->count = count;
    v0_0_38_diag_rpcu_local_var->average_time = average_time;
    v0_0_38_diag_rpcu_local_var->total_time = total_time;

    return v0_0_38_diag_rpcu_local_var;
}


void v0_0_38_diag_rpcu_free(v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu) {
    if(NULL == v0_0_38_diag_rpcu){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_diag_rpcu->user) {
        free(v0_0_38_diag_rpcu->user);
        v0_0_38_diag_rpcu->user = NULL;
    }
    free(v0_0_38_diag_rpcu);
}

cJSON *v0_0_38_diag_rpcu_convertToJSON(v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_diag_rpcu->user
    if(v0_0_38_diag_rpcu->user) {
    if(cJSON_AddStringToObject(item, "user", v0_0_38_diag_rpcu->user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_diag_rpcu->user_id
    if(v0_0_38_diag_rpcu->user_id) {
    if(cJSON_AddNumberToObject(item, "user_id", v0_0_38_diag_rpcu->user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_diag_rpcu->count
    if(v0_0_38_diag_rpcu->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_38_diag_rpcu->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_diag_rpcu->average_time
    if(v0_0_38_diag_rpcu->average_time) {
    if(cJSON_AddNumberToObject(item, "average_time", v0_0_38_diag_rpcu->average_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_diag_rpcu->total_time
    if(v0_0_38_diag_rpcu->total_time) {
    if(cJSON_AddNumberToObject(item, "total_time", v0_0_38_diag_rpcu->total_time) == NULL) {
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

v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu_parseFromJSON(cJSON *v0_0_38_diag_rpcuJSON){

    v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu_local_var = NULL;

    // v0_0_38_diag_rpcu->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcuJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // v0_0_38_diag_rpcu->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcuJSON, "user_id");
    if (user_id) { 
    if(!cJSON_IsNumber(user_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_diag_rpcu->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcuJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_diag_rpcu->average_time
    cJSON *average_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcuJSON, "average_time");
    if (average_time) { 
    if(!cJSON_IsNumber(average_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_diag_rpcu->total_time
    cJSON *total_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_diag_rpcuJSON, "total_time");
    if (total_time) { 
    if(!cJSON_IsNumber(total_time))
    {
    goto end; //Numeric
    }
    }


    v0_0_38_diag_rpcu_local_var = v0_0_38_diag_rpcu_create (
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        user_id ? user_id->valuedouble : 0,
        count ? count->valuedouble : 0,
        average_time ? average_time->valuedouble : 0,
        total_time ? total_time->valuedouble : 0
        );

    return v0_0_38_diag_rpcu_local_var;
end:
    return NULL;

}
