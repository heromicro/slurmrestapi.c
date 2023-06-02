#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_time.h"



dbv0_0_37_job_step_time_t *dbv0_0_37_job_step_time_create(
    int elapsed,
    int end,
    int start,
    int suspended,
    dbv0_0_37_job_time_system_t *system,
    dbv0_0_37_job_time_total_t *total,
    dbv0_0_37_job_time_user_t *user
    ) {
    dbv0_0_37_job_step_time_t *dbv0_0_37_job_step_time_local_var = malloc(sizeof(dbv0_0_37_job_step_time_t));
    if (!dbv0_0_37_job_step_time_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_time_local_var->elapsed = elapsed;
    dbv0_0_37_job_step_time_local_var->end = end;
    dbv0_0_37_job_step_time_local_var->start = start;
    dbv0_0_37_job_step_time_local_var->suspended = suspended;
    dbv0_0_37_job_step_time_local_var->system = system;
    dbv0_0_37_job_step_time_local_var->total = total;
    dbv0_0_37_job_step_time_local_var->user = user;

    return dbv0_0_37_job_step_time_local_var;
}


void dbv0_0_37_job_step_time_free(dbv0_0_37_job_step_time_t *dbv0_0_37_job_step_time) {
    if(NULL == dbv0_0_37_job_step_time){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_step_time->system) {
        dbv0_0_37_job_time_system_free(dbv0_0_37_job_step_time->system);
        dbv0_0_37_job_step_time->system = NULL;
    }
    if (dbv0_0_37_job_step_time->total) {
        dbv0_0_37_job_time_total_free(dbv0_0_37_job_step_time->total);
        dbv0_0_37_job_step_time->total = NULL;
    }
    if (dbv0_0_37_job_step_time->user) {
        dbv0_0_37_job_time_user_free(dbv0_0_37_job_step_time->user);
        dbv0_0_37_job_step_time->user = NULL;
    }
    free(dbv0_0_37_job_step_time);
}

cJSON *dbv0_0_37_job_step_time_convertToJSON(dbv0_0_37_job_step_time_t *dbv0_0_37_job_step_time) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_time->elapsed
    if(dbv0_0_37_job_step_time->elapsed) {
    if(cJSON_AddNumberToObject(item, "elapsed", dbv0_0_37_job_step_time->elapsed) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_step_time->end
    if(dbv0_0_37_job_step_time->end) {
    if(cJSON_AddNumberToObject(item, "end", dbv0_0_37_job_step_time->end) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_step_time->start
    if(dbv0_0_37_job_step_time->start) {
    if(cJSON_AddNumberToObject(item, "start", dbv0_0_37_job_step_time->start) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_step_time->suspended
    if(dbv0_0_37_job_step_time->suspended) {
    if(cJSON_AddNumberToObject(item, "suspended", dbv0_0_37_job_step_time->suspended) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_step_time->system
    if(dbv0_0_37_job_step_time->system) {
    cJSON *system_local_JSON = dbv0_0_37_job_time_system_convertToJSON(dbv0_0_37_job_step_time->system);
    if(system_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "system", system_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_step_time->total
    if(dbv0_0_37_job_step_time->total) {
    cJSON *total_local_JSON = dbv0_0_37_job_time_total_convertToJSON(dbv0_0_37_job_step_time->total);
    if(total_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "total", total_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_step_time->user
    if(dbv0_0_37_job_step_time->user) {
    cJSON *user_local_JSON = dbv0_0_37_job_time_user_convertToJSON(dbv0_0_37_job_step_time->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
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

dbv0_0_37_job_step_time_t *dbv0_0_37_job_step_time_parseFromJSON(cJSON *dbv0_0_37_job_step_timeJSON){

    dbv0_0_37_job_step_time_t *dbv0_0_37_job_step_time_local_var = NULL;

    // define the local variable for dbv0_0_37_job_step_time->system
    dbv0_0_37_job_time_system_t *system_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job_step_time->total
    dbv0_0_37_job_time_total_t *total_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job_step_time->user
    dbv0_0_37_job_time_user_t *user_local_nonprim = NULL;

    // dbv0_0_37_job_step_time->elapsed
    cJSON *elapsed = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "elapsed");
    if (elapsed) { 
    if(!cJSON_IsNumber(elapsed))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_step_time->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "end");
    if (end) { 
    if(!cJSON_IsNumber(end))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_step_time->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "start");
    if (start) { 
    if(!cJSON_IsNumber(start))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_step_time->suspended
    cJSON *suspended = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "suspended");
    if (suspended) { 
    if(!cJSON_IsNumber(suspended))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_step_time->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "system");
    if (system) { 
    system_local_nonprim = dbv0_0_37_job_time_system_parseFromJSON(system); //nonprimitive
    }

    // dbv0_0_37_job_step_time->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "total");
    if (total) { 
    total_local_nonprim = dbv0_0_37_job_time_total_parseFromJSON(total); //nonprimitive
    }

    // dbv0_0_37_job_step_time->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_timeJSON, "user");
    if (user) { 
    user_local_nonprim = dbv0_0_37_job_time_user_parseFromJSON(user); //nonprimitive
    }


    dbv0_0_37_job_step_time_local_var = dbv0_0_37_job_step_time_create (
        elapsed ? elapsed->valuedouble : 0,
        end ? end->valuedouble : 0,
        start ? start->valuedouble : 0,
        suspended ? suspended->valuedouble : 0,
        system ? system_local_nonprim : NULL,
        total ? total_local_nonprim : NULL,
        user ? user_local_nonprim : NULL
        );

    return dbv0_0_37_job_step_time_local_var;
end:
    if (system_local_nonprim) {
        dbv0_0_37_job_time_system_free(system_local_nonprim);
        system_local_nonprim = NULL;
    }
    if (total_local_nonprim) {
        dbv0_0_37_job_time_total_free(total_local_nonprim);
        total_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        dbv0_0_37_job_time_user_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    return NULL;

}
