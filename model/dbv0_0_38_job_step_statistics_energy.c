#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step_statistics_energy.h"



dbv0_0_38_job_step_statistics_energy_t *dbv0_0_38_job_step_statistics_energy_create(
    int consumed
    ) {
    dbv0_0_38_job_step_statistics_energy_t *dbv0_0_38_job_step_statistics_energy_local_var = malloc(sizeof(dbv0_0_38_job_step_statistics_energy_t));
    if (!dbv0_0_38_job_step_statistics_energy_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_statistics_energy_local_var->consumed = consumed;

    return dbv0_0_38_job_step_statistics_energy_local_var;
}


void dbv0_0_38_job_step_statistics_energy_free(dbv0_0_38_job_step_statistics_energy_t *dbv0_0_38_job_step_statistics_energy) {
    if(NULL == dbv0_0_38_job_step_statistics_energy){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_job_step_statistics_energy);
}

cJSON *dbv0_0_38_job_step_statistics_energy_convertToJSON(dbv0_0_38_job_step_statistics_energy_t *dbv0_0_38_job_step_statistics_energy) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step_statistics_energy->consumed
    if(dbv0_0_38_job_step_statistics_energy->consumed) {
    if(cJSON_AddNumberToObject(item, "consumed", dbv0_0_38_job_step_statistics_energy->consumed) == NULL) {
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

dbv0_0_38_job_step_statistics_energy_t *dbv0_0_38_job_step_statistics_energy_parseFromJSON(cJSON *dbv0_0_38_job_step_statistics_energyJSON){

    dbv0_0_38_job_step_statistics_energy_t *dbv0_0_38_job_step_statistics_energy_local_var = NULL;

    // dbv0_0_38_job_step_statistics_energy->consumed
    cJSON *consumed = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_statistics_energyJSON, "consumed");
    if (consumed) { 
    if(!cJSON_IsNumber(consumed))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_job_step_statistics_energy_local_var = dbv0_0_38_job_step_statistics_energy_create (
        consumed ? consumed->valuedouble : 0
        );

    return dbv0_0_38_job_step_statistics_energy_local_var;
end:
    return NULL;

}
