#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_diag_statistics_rollups_inner.h"



dbv0_0_37_diag_statistics_rollups_inner_t *dbv0_0_37_diag_statistics_rollups_inner_create(
    char *type,
    int last_run,
    int last_cycle,
    int max_cycle,
    int total_time,
    int mean_cycles
    ) {
    dbv0_0_37_diag_statistics_rollups_inner_t *dbv0_0_37_diag_statistics_rollups_inner_local_var = malloc(sizeof(dbv0_0_37_diag_statistics_rollups_inner_t));
    if (!dbv0_0_37_diag_statistics_rollups_inner_local_var) {
        return NULL;
    }
    dbv0_0_37_diag_statistics_rollups_inner_local_var->type = type;
    dbv0_0_37_diag_statistics_rollups_inner_local_var->last_run = last_run;
    dbv0_0_37_diag_statistics_rollups_inner_local_var->last_cycle = last_cycle;
    dbv0_0_37_diag_statistics_rollups_inner_local_var->max_cycle = max_cycle;
    dbv0_0_37_diag_statistics_rollups_inner_local_var->total_time = total_time;
    dbv0_0_37_diag_statistics_rollups_inner_local_var->mean_cycles = mean_cycles;

    return dbv0_0_37_diag_statistics_rollups_inner_local_var;
}


void dbv0_0_37_diag_statistics_rollups_inner_free(dbv0_0_37_diag_statistics_rollups_inner_t *dbv0_0_37_diag_statistics_rollups_inner) {
    if(NULL == dbv0_0_37_diag_statistics_rollups_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_diag_statistics_rollups_inner->type) {
        free(dbv0_0_37_diag_statistics_rollups_inner->type);
        dbv0_0_37_diag_statistics_rollups_inner->type = NULL;
    }
    free(dbv0_0_37_diag_statistics_rollups_inner);
}

cJSON *dbv0_0_37_diag_statistics_rollups_inner_convertToJSON(dbv0_0_37_diag_statistics_rollups_inner_t *dbv0_0_37_diag_statistics_rollups_inner) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_diag_statistics_rollups_inner->type
    if(dbv0_0_37_diag_statistics_rollups_inner->type) {
    if(cJSON_AddStringToObject(item, "type", dbv0_0_37_diag_statistics_rollups_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_diag_statistics_rollups_inner->last_run
    if(dbv0_0_37_diag_statistics_rollups_inner->last_run) {
    if(cJSON_AddNumberToObject(item, "last_run", dbv0_0_37_diag_statistics_rollups_inner->last_run) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_diag_statistics_rollups_inner->last_cycle
    if(dbv0_0_37_diag_statistics_rollups_inner->last_cycle) {
    if(cJSON_AddNumberToObject(item, "last_cycle", dbv0_0_37_diag_statistics_rollups_inner->last_cycle) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_diag_statistics_rollups_inner->max_cycle
    if(dbv0_0_37_diag_statistics_rollups_inner->max_cycle) {
    if(cJSON_AddNumberToObject(item, "max_cycle", dbv0_0_37_diag_statistics_rollups_inner->max_cycle) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_diag_statistics_rollups_inner->total_time
    if(dbv0_0_37_diag_statistics_rollups_inner->total_time) {
    if(cJSON_AddNumberToObject(item, "total_time", dbv0_0_37_diag_statistics_rollups_inner->total_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_diag_statistics_rollups_inner->mean_cycles
    if(dbv0_0_37_diag_statistics_rollups_inner->mean_cycles) {
    if(cJSON_AddNumberToObject(item, "mean_cycles", dbv0_0_37_diag_statistics_rollups_inner->mean_cycles) == NULL) {
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

dbv0_0_37_diag_statistics_rollups_inner_t *dbv0_0_37_diag_statistics_rollups_inner_parseFromJSON(cJSON *dbv0_0_37_diag_statistics_rollups_innerJSON){

    dbv0_0_37_diag_statistics_rollups_inner_t *dbv0_0_37_diag_statistics_rollups_inner_local_var = NULL;

    // dbv0_0_37_diag_statistics_rollups_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rollups_innerJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_diag_statistics_rollups_inner->last_run
    cJSON *last_run = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rollups_innerJSON, "last_run");
    if (last_run) { 
    if(!cJSON_IsNumber(last_run))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_diag_statistics_rollups_inner->last_cycle
    cJSON *last_cycle = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rollups_innerJSON, "last_cycle");
    if (last_cycle) { 
    if(!cJSON_IsNumber(last_cycle))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_diag_statistics_rollups_inner->max_cycle
    cJSON *max_cycle = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rollups_innerJSON, "max_cycle");
    if (max_cycle) { 
    if(!cJSON_IsNumber(max_cycle))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_diag_statistics_rollups_inner->total_time
    cJSON *total_time = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rollups_innerJSON, "total_time");
    if (total_time) { 
    if(!cJSON_IsNumber(total_time))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_diag_statistics_rollups_inner->mean_cycles
    cJSON *mean_cycles = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rollups_innerJSON, "mean_cycles");
    if (mean_cycles) { 
    if(!cJSON_IsNumber(mean_cycles))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_diag_statistics_rollups_inner_local_var = dbv0_0_37_diag_statistics_rollups_inner_create (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        last_run ? last_run->valuedouble : 0,
        last_cycle ? last_cycle->valuedouble : 0,
        max_cycle ? max_cycle->valuedouble : 0,
        total_time ? total_time->valuedouble : 0,
        mean_cycles ? mean_cycles->valuedouble : 0
        );

    return dbv0_0_37_diag_statistics_rollups_inner_local_var;
end:
    return NULL;

}
