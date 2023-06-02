#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_time_system.h"



dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system_create(
    int seconds,
    int microseconds
    ) {
    dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system_local_var = malloc(sizeof(dbv0_0_37_job_time_system_t));
    if (!dbv0_0_37_job_time_system_local_var) {
        return NULL;
    }
    dbv0_0_37_job_time_system_local_var->seconds = seconds;
    dbv0_0_37_job_time_system_local_var->microseconds = microseconds;

    return dbv0_0_37_job_time_system_local_var;
}


void dbv0_0_37_job_time_system_free(dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system) {
    if(NULL == dbv0_0_37_job_time_system){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_job_time_system);
}

cJSON *dbv0_0_37_job_time_system_convertToJSON(dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_time_system->seconds
    if(dbv0_0_37_job_time_system->seconds) {
    if(cJSON_AddNumberToObject(item, "seconds", dbv0_0_37_job_time_system->seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_time_system->microseconds
    if(dbv0_0_37_job_time_system->microseconds) {
    if(cJSON_AddNumberToObject(item, "microseconds", dbv0_0_37_job_time_system->microseconds) == NULL) {
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

dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system_parseFromJSON(cJSON *dbv0_0_37_job_time_systemJSON){

    dbv0_0_37_job_time_system_t *dbv0_0_37_job_time_system_local_var = NULL;

    // dbv0_0_37_job_time_system->seconds
    cJSON *seconds = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_time_systemJSON, "seconds");
    if (seconds) { 
    if(!cJSON_IsNumber(seconds))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_time_system->microseconds
    cJSON *microseconds = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_time_systemJSON, "microseconds");
    if (microseconds) { 
    if(!cJSON_IsNumber(microseconds))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_time_system_local_var = dbv0_0_37_job_time_system_create (
        seconds ? seconds->valuedouble : 0,
        microseconds ? microseconds->valuedouble : 0
        );

    return dbv0_0_37_job_time_system_local_var;
end:
    return NULL;

}
