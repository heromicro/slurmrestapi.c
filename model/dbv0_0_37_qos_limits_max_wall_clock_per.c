#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_limits_max_wall_clock_per.h"



dbv0_0_37_qos_limits_max_wall_clock_per_t *dbv0_0_37_qos_limits_max_wall_clock_per_create(
    int qos,
    int job
    ) {
    dbv0_0_37_qos_limits_max_wall_clock_per_t *dbv0_0_37_qos_limits_max_wall_clock_per_local_var = malloc(sizeof(dbv0_0_37_qos_limits_max_wall_clock_per_t));
    if (!dbv0_0_37_qos_limits_max_wall_clock_per_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_limits_max_wall_clock_per_local_var->qos = qos;
    dbv0_0_37_qos_limits_max_wall_clock_per_local_var->job = job;

    return dbv0_0_37_qos_limits_max_wall_clock_per_local_var;
}


void dbv0_0_37_qos_limits_max_wall_clock_per_free(dbv0_0_37_qos_limits_max_wall_clock_per_t *dbv0_0_37_qos_limits_max_wall_clock_per) {
    if(NULL == dbv0_0_37_qos_limits_max_wall_clock_per){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_qos_limits_max_wall_clock_per);
}

cJSON *dbv0_0_37_qos_limits_max_wall_clock_per_convertToJSON(dbv0_0_37_qos_limits_max_wall_clock_per_t *dbv0_0_37_qos_limits_max_wall_clock_per) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_limits_max_wall_clock_per->qos
    if(dbv0_0_37_qos_limits_max_wall_clock_per->qos) {
    if(cJSON_AddNumberToObject(item, "qos", dbv0_0_37_qos_limits_max_wall_clock_per->qos) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_qos_limits_max_wall_clock_per->job
    if(dbv0_0_37_qos_limits_max_wall_clock_per->job) {
    if(cJSON_AddNumberToObject(item, "job", dbv0_0_37_qos_limits_max_wall_clock_per->job) == NULL) {
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

dbv0_0_37_qos_limits_max_wall_clock_per_t *dbv0_0_37_qos_limits_max_wall_clock_per_parseFromJSON(cJSON *dbv0_0_37_qos_limits_max_wall_clock_perJSON){

    dbv0_0_37_qos_limits_max_wall_clock_per_t *dbv0_0_37_qos_limits_max_wall_clock_per_local_var = NULL;

    // dbv0_0_37_qos_limits_max_wall_clock_per->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_max_wall_clock_perJSON, "qos");
    if (qos) { 
    if(!cJSON_IsNumber(qos))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_qos_limits_max_wall_clock_per->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_max_wall_clock_perJSON, "job");
    if (job) { 
    if(!cJSON_IsNumber(job))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_qos_limits_max_wall_clock_per_local_var = dbv0_0_37_qos_limits_max_wall_clock_per_create (
        qos ? qos->valuedouble : 0,
        job ? job->valuedouble : 0
        );

    return dbv0_0_37_qos_limits_max_wall_clock_per_local_var;
end:
    return NULL;

}
