#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_diag_statistics_users_inner.h"



dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner_create(
    char *user,
    int count,
    dbv0_0_38_diag_statistics_users_inner_time_t *time
    ) {
    dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner_local_var = malloc(sizeof(dbv0_0_38_diag_statistics_users_inner_t));
    if (!dbv0_0_38_diag_statistics_users_inner_local_var) {
        return NULL;
    }
    dbv0_0_38_diag_statistics_users_inner_local_var->user = user;
    dbv0_0_38_diag_statistics_users_inner_local_var->count = count;
    dbv0_0_38_diag_statistics_users_inner_local_var->time = time;

    return dbv0_0_38_diag_statistics_users_inner_local_var;
}


void dbv0_0_38_diag_statistics_users_inner_free(dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner) {
    if(NULL == dbv0_0_38_diag_statistics_users_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_diag_statistics_users_inner->user) {
        free(dbv0_0_38_diag_statistics_users_inner->user);
        dbv0_0_38_diag_statistics_users_inner->user = NULL;
    }
    if (dbv0_0_38_diag_statistics_users_inner->time) {
        dbv0_0_38_diag_statistics_users_inner_time_free(dbv0_0_38_diag_statistics_users_inner->time);
        dbv0_0_38_diag_statistics_users_inner->time = NULL;
    }
    free(dbv0_0_38_diag_statistics_users_inner);
}

cJSON *dbv0_0_38_diag_statistics_users_inner_convertToJSON(dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_diag_statistics_users_inner->user
    if(dbv0_0_38_diag_statistics_users_inner->user) {
    if(cJSON_AddStringToObject(item, "user", dbv0_0_38_diag_statistics_users_inner->user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_diag_statistics_users_inner->count
    if(dbv0_0_38_diag_statistics_users_inner->count) {
    if(cJSON_AddNumberToObject(item, "count", dbv0_0_38_diag_statistics_users_inner->count) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_diag_statistics_users_inner->time
    if(dbv0_0_38_diag_statistics_users_inner->time) {
    cJSON *time_local_JSON = dbv0_0_38_diag_statistics_users_inner_time_convertToJSON(dbv0_0_38_diag_statistics_users_inner->time);
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

dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner_parseFromJSON(cJSON *dbv0_0_38_diag_statistics_users_innerJSON){

    dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner_local_var = NULL;

    // define the local variable for dbv0_0_38_diag_statistics_users_inner->time
    dbv0_0_38_diag_statistics_users_inner_time_t *time_local_nonprim = NULL;

    // dbv0_0_38_diag_statistics_users_inner->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statistics_users_innerJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_diag_statistics_users_inner->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statistics_users_innerJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_diag_statistics_users_inner->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diag_statistics_users_innerJSON, "time");
    if (time) { 
    time_local_nonprim = dbv0_0_38_diag_statistics_users_inner_time_parseFromJSON(time); //nonprimitive
    }


    dbv0_0_38_diag_statistics_users_inner_local_var = dbv0_0_38_diag_statistics_users_inner_create (
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        count ? count->valuedouble : 0,
        time ? time_local_nonprim : NULL
        );

    return dbv0_0_38_diag_statistics_users_inner_local_var;
end:
    if (time_local_nonprim) {
        dbv0_0_38_diag_statistics_users_inner_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    return NULL;

}
