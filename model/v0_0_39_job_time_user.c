#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_time_user.h"



v0_0_39_job_time_user_t *v0_0_39_job_time_user_create(
    long microseconds
    ) {
    v0_0_39_job_time_user_t *v0_0_39_job_time_user_local_var = malloc(sizeof(v0_0_39_job_time_user_t));
    if (!v0_0_39_job_time_user_local_var) {
        return NULL;
    }
    v0_0_39_job_time_user_local_var->microseconds = microseconds;

    return v0_0_39_job_time_user_local_var;
}


void v0_0_39_job_time_user_free(v0_0_39_job_time_user_t *v0_0_39_job_time_user) {
    if(NULL == v0_0_39_job_time_user){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_job_time_user);
}

cJSON *v0_0_39_job_time_user_convertToJSON(v0_0_39_job_time_user_t *v0_0_39_job_time_user) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_time_user->microseconds
    if(v0_0_39_job_time_user->microseconds) {
    if(cJSON_AddNumberToObject(item, "microseconds", v0_0_39_job_time_user->microseconds) == NULL) {
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

v0_0_39_job_time_user_t *v0_0_39_job_time_user_parseFromJSON(cJSON *v0_0_39_job_time_userJSON){

    v0_0_39_job_time_user_t *v0_0_39_job_time_user_local_var = NULL;

    // v0_0_39_job_time_user->microseconds
    cJSON *microseconds = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_time_userJSON, "microseconds");
    if (microseconds) { 
    if(!cJSON_IsNumber(microseconds))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_job_time_user_local_var = v0_0_39_job_time_user_create (
        microseconds ? microseconds->valuedouble : 0
        );

    return v0_0_39_job_time_user_local_var;
end:
    return NULL;

}
