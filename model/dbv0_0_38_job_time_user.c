#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_time_user.h"



dbv0_0_38_job_time_user_t *dbv0_0_38_job_time_user_create(
    int seconds,
    int microseconds
    ) {
    dbv0_0_38_job_time_user_t *dbv0_0_38_job_time_user_local_var = malloc(sizeof(dbv0_0_38_job_time_user_t));
    if (!dbv0_0_38_job_time_user_local_var) {
        return NULL;
    }
    dbv0_0_38_job_time_user_local_var->seconds = seconds;
    dbv0_0_38_job_time_user_local_var->microseconds = microseconds;

    return dbv0_0_38_job_time_user_local_var;
}


void dbv0_0_38_job_time_user_free(dbv0_0_38_job_time_user_t *dbv0_0_38_job_time_user) {
    if(NULL == dbv0_0_38_job_time_user){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_job_time_user);
}

cJSON *dbv0_0_38_job_time_user_convertToJSON(dbv0_0_38_job_time_user_t *dbv0_0_38_job_time_user) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_time_user->seconds
    if(dbv0_0_38_job_time_user->seconds) {
    if(cJSON_AddNumberToObject(item, "seconds", dbv0_0_38_job_time_user->seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_job_time_user->microseconds
    if(dbv0_0_38_job_time_user->microseconds) {
    if(cJSON_AddNumberToObject(item, "microseconds", dbv0_0_38_job_time_user->microseconds) == NULL) {
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

dbv0_0_38_job_time_user_t *dbv0_0_38_job_time_user_parseFromJSON(cJSON *dbv0_0_38_job_time_userJSON){

    dbv0_0_38_job_time_user_t *dbv0_0_38_job_time_user_local_var = NULL;

    // dbv0_0_38_job_time_user->seconds
    cJSON *seconds = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_time_userJSON, "seconds");
    if (seconds) { 
    if(!cJSON_IsNumber(seconds))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_job_time_user->microseconds
    cJSON *microseconds = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_time_userJSON, "microseconds");
    if (microseconds) { 
    if(!cJSON_IsNumber(microseconds))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_job_time_user_local_var = dbv0_0_38_job_time_user_create (
        seconds ? seconds->valuedouble : 0,
        microseconds ? microseconds->valuedouble : 0
        );

    return dbv0_0_38_job_time_user_local_var;
end:
    return NULL;

}
