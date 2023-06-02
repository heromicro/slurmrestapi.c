#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_limits_max_jobs.h"



dbv0_0_37_qos_limits_max_jobs_t *dbv0_0_37_qos_limits_max_jobs_create(
    dbv0_0_37_qos_limits_max_jobs_active_jobs_t *active_jobs
    ) {
    dbv0_0_37_qos_limits_max_jobs_t *dbv0_0_37_qos_limits_max_jobs_local_var = malloc(sizeof(dbv0_0_37_qos_limits_max_jobs_t));
    if (!dbv0_0_37_qos_limits_max_jobs_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_limits_max_jobs_local_var->active_jobs = active_jobs;

    return dbv0_0_37_qos_limits_max_jobs_local_var;
}


void dbv0_0_37_qos_limits_max_jobs_free(dbv0_0_37_qos_limits_max_jobs_t *dbv0_0_37_qos_limits_max_jobs) {
    if(NULL == dbv0_0_37_qos_limits_max_jobs){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_qos_limits_max_jobs->active_jobs) {
        dbv0_0_37_qos_limits_max_jobs_active_jobs_free(dbv0_0_37_qos_limits_max_jobs->active_jobs);
        dbv0_0_37_qos_limits_max_jobs->active_jobs = NULL;
    }
    free(dbv0_0_37_qos_limits_max_jobs);
}

cJSON *dbv0_0_37_qos_limits_max_jobs_convertToJSON(dbv0_0_37_qos_limits_max_jobs_t *dbv0_0_37_qos_limits_max_jobs) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_limits_max_jobs->active_jobs
    if(dbv0_0_37_qos_limits_max_jobs->active_jobs) {
    cJSON *active_jobs_local_JSON = dbv0_0_37_qos_limits_max_jobs_active_jobs_convertToJSON(dbv0_0_37_qos_limits_max_jobs->active_jobs);
    if(active_jobs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "active_jobs", active_jobs_local_JSON);
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

dbv0_0_37_qos_limits_max_jobs_t *dbv0_0_37_qos_limits_max_jobs_parseFromJSON(cJSON *dbv0_0_37_qos_limits_max_jobsJSON){

    dbv0_0_37_qos_limits_max_jobs_t *dbv0_0_37_qos_limits_max_jobs_local_var = NULL;

    // define the local variable for dbv0_0_37_qos_limits_max_jobs->active_jobs
    dbv0_0_37_qos_limits_max_jobs_active_jobs_t *active_jobs_local_nonprim = NULL;

    // dbv0_0_37_qos_limits_max_jobs->active_jobs
    cJSON *active_jobs = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_max_jobsJSON, "active_jobs");
    if (active_jobs) { 
    active_jobs_local_nonprim = dbv0_0_37_qos_limits_max_jobs_active_jobs_parseFromJSON(active_jobs); //nonprimitive
    }


    dbv0_0_37_qos_limits_max_jobs_local_var = dbv0_0_37_qos_limits_max_jobs_create (
        active_jobs ? active_jobs_local_nonprim : NULL
        );

    return dbv0_0_37_qos_limits_max_jobs_local_var;
end:
    if (active_jobs_local_nonprim) {
        dbv0_0_37_qos_limits_max_jobs_active_jobs_free(active_jobs_local_nonprim);
        active_jobs_local_nonprim = NULL;
    }
    return NULL;

}
