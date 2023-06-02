#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step_cpu_requested_frequency.h"



dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency_create(
    int min,
    int max
    ) {
    dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency_local_var = malloc(sizeof(dbv0_0_38_job_step_cpu_requested_frequency_t));
    if (!dbv0_0_38_job_step_cpu_requested_frequency_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_cpu_requested_frequency_local_var->min = min;
    dbv0_0_38_job_step_cpu_requested_frequency_local_var->max = max;

    return dbv0_0_38_job_step_cpu_requested_frequency_local_var;
}


void dbv0_0_38_job_step_cpu_requested_frequency_free(dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency) {
    if(NULL == dbv0_0_38_job_step_cpu_requested_frequency){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_job_step_cpu_requested_frequency);
}

cJSON *dbv0_0_38_job_step_cpu_requested_frequency_convertToJSON(dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step_cpu_requested_frequency->min
    if(dbv0_0_38_job_step_cpu_requested_frequency->min) {
    if(cJSON_AddNumberToObject(item, "min", dbv0_0_38_job_step_cpu_requested_frequency->min) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_job_step_cpu_requested_frequency->max
    if(dbv0_0_38_job_step_cpu_requested_frequency->max) {
    if(cJSON_AddNumberToObject(item, "max", dbv0_0_38_job_step_cpu_requested_frequency->max) == NULL) {
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

dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency_parseFromJSON(cJSON *dbv0_0_38_job_step_cpu_requested_frequencyJSON){

    dbv0_0_38_job_step_cpu_requested_frequency_t *dbv0_0_38_job_step_cpu_requested_frequency_local_var = NULL;

    // dbv0_0_38_job_step_cpu_requested_frequency->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_cpu_requested_frequencyJSON, "min");
    if (min) { 
    if(!cJSON_IsNumber(min))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_job_step_cpu_requested_frequency->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_cpu_requested_frequencyJSON, "max");
    if (max) { 
    if(!cJSON_IsNumber(max))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_job_step_cpu_requested_frequency_local_var = dbv0_0_38_job_step_cpu_requested_frequency_create (
        min ? min->valuedouble : 0,
        max ? max->valuedouble : 0
        );

    return dbv0_0_38_job_step_cpu_requested_frequency_local_var;
end:
    return NULL;

}
