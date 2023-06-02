#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_step_het.h"



dbv0_0_37_job_step_step_het_t *dbv0_0_37_job_step_step_het_create(
    int component
    ) {
    dbv0_0_37_job_step_step_het_t *dbv0_0_37_job_step_step_het_local_var = malloc(sizeof(dbv0_0_37_job_step_step_het_t));
    if (!dbv0_0_37_job_step_step_het_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_step_het_local_var->component = component;

    return dbv0_0_37_job_step_step_het_local_var;
}


void dbv0_0_37_job_step_step_het_free(dbv0_0_37_job_step_step_het_t *dbv0_0_37_job_step_step_het) {
    if(NULL == dbv0_0_37_job_step_step_het){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_job_step_step_het);
}

cJSON *dbv0_0_37_job_step_step_het_convertToJSON(dbv0_0_37_job_step_step_het_t *dbv0_0_37_job_step_step_het) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_step_het->component
    if(dbv0_0_37_job_step_step_het->component) {
    if(cJSON_AddNumberToObject(item, "component", dbv0_0_37_job_step_step_het->component) == NULL) {
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

dbv0_0_37_job_step_step_het_t *dbv0_0_37_job_step_step_het_parseFromJSON(cJSON *dbv0_0_37_job_step_step_hetJSON){

    dbv0_0_37_job_step_step_het_t *dbv0_0_37_job_step_step_het_local_var = NULL;

    // dbv0_0_37_job_step_step_het->component
    cJSON *component = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_step_hetJSON, "component");
    if (component) { 
    if(!cJSON_IsNumber(component))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_step_step_het_local_var = dbv0_0_37_job_step_step_het_create (
        component ? component->valuedouble : 0
        );

    return dbv0_0_37_job_step_step_het_local_var;
end:
    return NULL;

}
