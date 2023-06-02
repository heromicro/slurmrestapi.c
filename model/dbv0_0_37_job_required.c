#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_required.h"



dbv0_0_37_job_required_t *dbv0_0_37_job_required_create(
    int cpus,
    int memory
    ) {
    dbv0_0_37_job_required_t *dbv0_0_37_job_required_local_var = malloc(sizeof(dbv0_0_37_job_required_t));
    if (!dbv0_0_37_job_required_local_var) {
        return NULL;
    }
    dbv0_0_37_job_required_local_var->cpus = cpus;
    dbv0_0_37_job_required_local_var->memory = memory;

    return dbv0_0_37_job_required_local_var;
}


void dbv0_0_37_job_required_free(dbv0_0_37_job_required_t *dbv0_0_37_job_required) {
    if(NULL == dbv0_0_37_job_required){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_job_required);
}

cJSON *dbv0_0_37_job_required_convertToJSON(dbv0_0_37_job_required_t *dbv0_0_37_job_required) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_required->cpus
    if(dbv0_0_37_job_required->cpus) {
    if(cJSON_AddNumberToObject(item, "CPUs", dbv0_0_37_job_required->cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_required->memory
    if(dbv0_0_37_job_required->memory) {
    if(cJSON_AddNumberToObject(item, "memory", dbv0_0_37_job_required->memory) == NULL) {
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

dbv0_0_37_job_required_t *dbv0_0_37_job_required_parseFromJSON(cJSON *dbv0_0_37_job_requiredJSON){

    dbv0_0_37_job_required_t *dbv0_0_37_job_required_local_var = NULL;

    // dbv0_0_37_job_required->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_requiredJSON, "CPUs");
    if (cpus) { 
    if(!cJSON_IsNumber(cpus))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_required->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_requiredJSON, "memory");
    if (memory) { 
    if(!cJSON_IsNumber(memory))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_required_local_var = dbv0_0_37_job_required_create (
        cpus ? cpus->valuedouble : 0,
        memory ? memory->valuedouble : 0
        );

    return dbv0_0_37_job_required_local_var;
end:
    return NULL;

}
