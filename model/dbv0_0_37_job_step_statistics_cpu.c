#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_statistics_cpu.h"



dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu_create(
    int actual_frequency
    ) {
    dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu_local_var = malloc(sizeof(dbv0_0_37_job_step_statistics_cpu_t));
    if (!dbv0_0_37_job_step_statistics_cpu_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_statistics_cpu_local_var->actual_frequency = actual_frequency;

    return dbv0_0_37_job_step_statistics_cpu_local_var;
}


void dbv0_0_37_job_step_statistics_cpu_free(dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu) {
    if(NULL == dbv0_0_37_job_step_statistics_cpu){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_job_step_statistics_cpu);
}

cJSON *dbv0_0_37_job_step_statistics_cpu_convertToJSON(dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_statistics_cpu->actual_frequency
    if(dbv0_0_37_job_step_statistics_cpu->actual_frequency) {
    if(cJSON_AddNumberToObject(item, "actual_frequency", dbv0_0_37_job_step_statistics_cpu->actual_frequency) == NULL) {
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

dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu_parseFromJSON(cJSON *dbv0_0_37_job_step_statistics_cpuJSON){

    dbv0_0_37_job_step_statistics_cpu_t *dbv0_0_37_job_step_statistics_cpu_local_var = NULL;

    // dbv0_0_37_job_step_statistics_cpu->actual_frequency
    cJSON *actual_frequency = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_statistics_cpuJSON, "actual_frequency");
    if (actual_frequency) { 
    if(!cJSON_IsNumber(actual_frequency))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_step_statistics_cpu_local_var = dbv0_0_37_job_step_statistics_cpu_create (
        actual_frequency ? actual_frequency->valuedouble : 0
        );

    return dbv0_0_37_job_step_statistics_cpu_local_var;
end:
    return NULL;

}
