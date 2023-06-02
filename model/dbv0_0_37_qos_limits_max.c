#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_limits_max.h"



dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max_create(
    dbv0_0_37_qos_limits_max_wall_clock_t *wall_clock,
    dbv0_0_37_qos_limits_max_jobs_t *jobs,
    dbv0_0_37_qos_limits_max_accruing_t *accruing,
    dbv0_0_37_qos_limits_max_tres_t *tres
    ) {
    dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max_local_var = malloc(sizeof(dbv0_0_37_qos_limits_max_t));
    if (!dbv0_0_37_qos_limits_max_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_limits_max_local_var->wall_clock = wall_clock;
    dbv0_0_37_qos_limits_max_local_var->jobs = jobs;
    dbv0_0_37_qos_limits_max_local_var->accruing = accruing;
    dbv0_0_37_qos_limits_max_local_var->tres = tres;

    return dbv0_0_37_qos_limits_max_local_var;
}


void dbv0_0_37_qos_limits_max_free(dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max) {
    if(NULL == dbv0_0_37_qos_limits_max){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_qos_limits_max->wall_clock) {
        dbv0_0_37_qos_limits_max_wall_clock_free(dbv0_0_37_qos_limits_max->wall_clock);
        dbv0_0_37_qos_limits_max->wall_clock = NULL;
    }
    if (dbv0_0_37_qos_limits_max->jobs) {
        dbv0_0_37_qos_limits_max_jobs_free(dbv0_0_37_qos_limits_max->jobs);
        dbv0_0_37_qos_limits_max->jobs = NULL;
    }
    if (dbv0_0_37_qos_limits_max->accruing) {
        dbv0_0_37_qos_limits_max_accruing_free(dbv0_0_37_qos_limits_max->accruing);
        dbv0_0_37_qos_limits_max->accruing = NULL;
    }
    if (dbv0_0_37_qos_limits_max->tres) {
        dbv0_0_37_qos_limits_max_tres_free(dbv0_0_37_qos_limits_max->tres);
        dbv0_0_37_qos_limits_max->tres = NULL;
    }
    free(dbv0_0_37_qos_limits_max);
}

cJSON *dbv0_0_37_qos_limits_max_convertToJSON(dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_limits_max->wall_clock
    if(dbv0_0_37_qos_limits_max->wall_clock) {
    cJSON *wall_clock_local_JSON = dbv0_0_37_qos_limits_max_wall_clock_convertToJSON(dbv0_0_37_qos_limits_max->wall_clock);
    if(wall_clock_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wall_clock", wall_clock_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_qos_limits_max->jobs
    if(dbv0_0_37_qos_limits_max->jobs) {
    cJSON *jobs_local_JSON = dbv0_0_37_qos_limits_max_jobs_convertToJSON(dbv0_0_37_qos_limits_max->jobs);
    if(jobs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "jobs", jobs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_qos_limits_max->accruing
    if(dbv0_0_37_qos_limits_max->accruing) {
    cJSON *accruing_local_JSON = dbv0_0_37_qos_limits_max_accruing_convertToJSON(dbv0_0_37_qos_limits_max->accruing);
    if(accruing_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "accruing", accruing_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_qos_limits_max->tres
    if(dbv0_0_37_qos_limits_max->tres) {
    cJSON *tres_local_JSON = dbv0_0_37_qos_limits_max_tres_convertToJSON(dbv0_0_37_qos_limits_max->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
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

dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max_parseFromJSON(cJSON *dbv0_0_37_qos_limits_maxJSON){

    dbv0_0_37_qos_limits_max_t *dbv0_0_37_qos_limits_max_local_var = NULL;

    // define the local variable for dbv0_0_37_qos_limits_max->wall_clock
    dbv0_0_37_qos_limits_max_wall_clock_t *wall_clock_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_qos_limits_max->jobs
    dbv0_0_37_qos_limits_max_jobs_t *jobs_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_qos_limits_max->accruing
    dbv0_0_37_qos_limits_max_accruing_t *accruing_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_qos_limits_max->tres
    dbv0_0_37_qos_limits_max_tres_t *tres_local_nonprim = NULL;

    // dbv0_0_37_qos_limits_max->wall_clock
    cJSON *wall_clock = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_maxJSON, "wall_clock");
    if (wall_clock) { 
    wall_clock_local_nonprim = dbv0_0_37_qos_limits_max_wall_clock_parseFromJSON(wall_clock); //nonprimitive
    }

    // dbv0_0_37_qos_limits_max->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_maxJSON, "jobs");
    if (jobs) { 
    jobs_local_nonprim = dbv0_0_37_qos_limits_max_jobs_parseFromJSON(jobs); //nonprimitive
    }

    // dbv0_0_37_qos_limits_max->accruing
    cJSON *accruing = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_maxJSON, "accruing");
    if (accruing) { 
    accruing_local_nonprim = dbv0_0_37_qos_limits_max_accruing_parseFromJSON(accruing); //nonprimitive
    }

    // dbv0_0_37_qos_limits_max->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_maxJSON, "tres");
    if (tres) { 
    tres_local_nonprim = dbv0_0_37_qos_limits_max_tres_parseFromJSON(tres); //nonprimitive
    }


    dbv0_0_37_qos_limits_max_local_var = dbv0_0_37_qos_limits_max_create (
        wall_clock ? wall_clock_local_nonprim : NULL,
        jobs ? jobs_local_nonprim : NULL,
        accruing ? accruing_local_nonprim : NULL,
        tres ? tres_local_nonprim : NULL
        );

    return dbv0_0_37_qos_limits_max_local_var;
end:
    if (wall_clock_local_nonprim) {
        dbv0_0_37_qos_limits_max_wall_clock_free(wall_clock_local_nonprim);
        wall_clock_local_nonprim = NULL;
    }
    if (jobs_local_nonprim) {
        dbv0_0_37_qos_limits_max_jobs_free(jobs_local_nonprim);
        jobs_local_nonprim = NULL;
    }
    if (accruing_local_nonprim) {
        dbv0_0_37_qos_limits_max_accruing_free(accruing_local_nonprim);
        accruing_local_nonprim = NULL;
    }
    if (tres_local_nonprim) {
        dbv0_0_37_qos_limits_max_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
