#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step_statistics.h"



dbv0_0_38_job_step_statistics_t *dbv0_0_38_job_step_statistics_create(
    dbv0_0_38_job_step_statistics_cpu_t *cpu,
    dbv0_0_38_job_step_statistics_energy_t *energy
    ) {
    dbv0_0_38_job_step_statistics_t *dbv0_0_38_job_step_statistics_local_var = malloc(sizeof(dbv0_0_38_job_step_statistics_t));
    if (!dbv0_0_38_job_step_statistics_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_statistics_local_var->cpu = cpu;
    dbv0_0_38_job_step_statistics_local_var->energy = energy;

    return dbv0_0_38_job_step_statistics_local_var;
}


void dbv0_0_38_job_step_statistics_free(dbv0_0_38_job_step_statistics_t *dbv0_0_38_job_step_statistics) {
    if(NULL == dbv0_0_38_job_step_statistics){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_step_statistics->cpu) {
        dbv0_0_38_job_step_statistics_cpu_free(dbv0_0_38_job_step_statistics->cpu);
        dbv0_0_38_job_step_statistics->cpu = NULL;
    }
    if (dbv0_0_38_job_step_statistics->energy) {
        dbv0_0_38_job_step_statistics_energy_free(dbv0_0_38_job_step_statistics->energy);
        dbv0_0_38_job_step_statistics->energy = NULL;
    }
    free(dbv0_0_38_job_step_statistics);
}

cJSON *dbv0_0_38_job_step_statistics_convertToJSON(dbv0_0_38_job_step_statistics_t *dbv0_0_38_job_step_statistics) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step_statistics->cpu
    if(dbv0_0_38_job_step_statistics->cpu) {
    cJSON *cpu_local_JSON = dbv0_0_38_job_step_statistics_cpu_convertToJSON(dbv0_0_38_job_step_statistics->cpu);
    if(cpu_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "CPU", cpu_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step_statistics->energy
    if(dbv0_0_38_job_step_statistics->energy) {
    cJSON *energy_local_JSON = dbv0_0_38_job_step_statistics_energy_convertToJSON(dbv0_0_38_job_step_statistics->energy);
    if(energy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "energy", energy_local_JSON);
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

dbv0_0_38_job_step_statistics_t *dbv0_0_38_job_step_statistics_parseFromJSON(cJSON *dbv0_0_38_job_step_statisticsJSON){

    dbv0_0_38_job_step_statistics_t *dbv0_0_38_job_step_statistics_local_var = NULL;

    // define the local variable for dbv0_0_38_job_step_statistics->cpu
    dbv0_0_38_job_step_statistics_cpu_t *cpu_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step_statistics->energy
    dbv0_0_38_job_step_statistics_energy_t *energy_local_nonprim = NULL;

    // dbv0_0_38_job_step_statistics->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_statisticsJSON, "CPU");
    if (cpu) { 
    cpu_local_nonprim = dbv0_0_38_job_step_statistics_cpu_parseFromJSON(cpu); //nonprimitive
    }

    // dbv0_0_38_job_step_statistics->energy
    cJSON *energy = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_statisticsJSON, "energy");
    if (energy) { 
    energy_local_nonprim = dbv0_0_38_job_step_statistics_energy_parseFromJSON(energy); //nonprimitive
    }


    dbv0_0_38_job_step_statistics_local_var = dbv0_0_38_job_step_statistics_create (
        cpu ? cpu_local_nonprim : NULL,
        energy ? energy_local_nonprim : NULL
        );

    return dbv0_0_38_job_step_statistics_local_var;
end:
    if (cpu_local_nonprim) {
        dbv0_0_38_job_step_statistics_cpu_free(cpu_local_nonprim);
        cpu_local_nonprim = NULL;
    }
    if (energy_local_nonprim) {
        dbv0_0_38_job_step_statistics_energy_free(energy_local_nonprim);
        energy_local_nonprim = NULL;
    }
    return NULL;

}
