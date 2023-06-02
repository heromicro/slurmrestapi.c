#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_time_total.h"



dbv0_0_37_job_time_total_t *dbv0_0_37_job_time_total_create(
    int seconds,
    int microseconds
    ) {
    dbv0_0_37_job_time_total_t *dbv0_0_37_job_time_total_local_var = malloc(sizeof(dbv0_0_37_job_time_total_t));
    if (!dbv0_0_37_job_time_total_local_var) {
        return NULL;
    }
    dbv0_0_37_job_time_total_local_var->seconds = seconds;
    dbv0_0_37_job_time_total_local_var->microseconds = microseconds;

    return dbv0_0_37_job_time_total_local_var;
}


void dbv0_0_37_job_time_total_free(dbv0_0_37_job_time_total_t *dbv0_0_37_job_time_total) {
    if(NULL == dbv0_0_37_job_time_total){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_job_time_total);
}

cJSON *dbv0_0_37_job_time_total_convertToJSON(dbv0_0_37_job_time_total_t *dbv0_0_37_job_time_total) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_time_total->seconds
    if(dbv0_0_37_job_time_total->seconds) {
    if(cJSON_AddNumberToObject(item, "seconds", dbv0_0_37_job_time_total->seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_time_total->microseconds
    if(dbv0_0_37_job_time_total->microseconds) {
    if(cJSON_AddNumberToObject(item, "microseconds", dbv0_0_37_job_time_total->microseconds) == NULL) {
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

dbv0_0_37_job_time_total_t *dbv0_0_37_job_time_total_parseFromJSON(cJSON *dbv0_0_37_job_time_totalJSON){

    dbv0_0_37_job_time_total_t *dbv0_0_37_job_time_total_local_var = NULL;

    // dbv0_0_37_job_time_total->seconds
    cJSON *seconds = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_time_totalJSON, "seconds");
    if (seconds) { 
    if(!cJSON_IsNumber(seconds))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_time_total->microseconds
    cJSON *microseconds = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_time_totalJSON, "microseconds");
    if (microseconds) { 
    if(!cJSON_IsNumber(microseconds))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_time_total_local_var = dbv0_0_37_job_time_total_create (
        seconds ? seconds->valuedouble : 0,
        microseconds ? microseconds->valuedouble : 0
        );

    return dbv0_0_37_job_time_total_local_var;
end:
    return NULL;

}
