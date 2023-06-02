#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_rollup_stats_inner.h"


char* typev0_0_39_rollup_stats_inner_ToString(slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e type) {
    char* typeArray[] =  { "NULL", "internal", "user", "unknown" };
	return typeArray[type];
}

slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e typev0_0_39_rollup_stats_inner_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "internal", "user", "unknown" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner_create(
    slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e type,
    int last_run,
    long max_cycle,
    long total_time,
    long total_cycles,
    long mean_cycles
    ) {
    v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner_local_var = malloc(sizeof(v0_0_39_rollup_stats_inner_t));
    if (!v0_0_39_rollup_stats_inner_local_var) {
        return NULL;
    }
    v0_0_39_rollup_stats_inner_local_var->type = type;
    v0_0_39_rollup_stats_inner_local_var->last_run = last_run;
    v0_0_39_rollup_stats_inner_local_var->max_cycle = max_cycle;
    v0_0_39_rollup_stats_inner_local_var->total_time = total_time;
    v0_0_39_rollup_stats_inner_local_var->total_cycles = total_cycles;
    v0_0_39_rollup_stats_inner_local_var->mean_cycles = mean_cycles;

    return v0_0_39_rollup_stats_inner_local_var;
}


void v0_0_39_rollup_stats_inner_free(v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner) {
    if(NULL == v0_0_39_rollup_stats_inner){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_rollup_stats_inner);
}

cJSON *v0_0_39_rollup_stats_inner_convertToJSON(v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_rollup_stats_inner->type
    if(v0_0_39_rollup_stats_inner->type != slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typev0_0_39_rollup_stats_inner_ToString(v0_0_39_rollup_stats_inner->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // v0_0_39_rollup_stats_inner->last_run
    if(v0_0_39_rollup_stats_inner->last_run) {
    if(cJSON_AddNumberToObject(item, "last run", v0_0_39_rollup_stats_inner->last_run) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_rollup_stats_inner->max_cycle
    if(v0_0_39_rollup_stats_inner->max_cycle) {
    if(cJSON_AddNumberToObject(item, "max_cycle", v0_0_39_rollup_stats_inner->max_cycle) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_rollup_stats_inner->total_time
    if(v0_0_39_rollup_stats_inner->total_time) {
    if(cJSON_AddNumberToObject(item, "total_time", v0_0_39_rollup_stats_inner->total_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_rollup_stats_inner->total_cycles
    if(v0_0_39_rollup_stats_inner->total_cycles) {
    if(cJSON_AddNumberToObject(item, "total_cycles", v0_0_39_rollup_stats_inner->total_cycles) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_rollup_stats_inner->mean_cycles
    if(v0_0_39_rollup_stats_inner->mean_cycles) {
    if(cJSON_AddNumberToObject(item, "mean_cycles", v0_0_39_rollup_stats_inner->mean_cycles) == NULL) {
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

v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner_parseFromJSON(cJSON *v0_0_39_rollup_stats_innerJSON){

    v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner_local_var = NULL;

    // v0_0_39_rollup_stats_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(v0_0_39_rollup_stats_innerJSON, "type");
    slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typev0_0_39_rollup_stats_inner_FromString(type->valuestring);
    }

    // v0_0_39_rollup_stats_inner->last_run
    cJSON *last_run = cJSON_GetObjectItemCaseSensitive(v0_0_39_rollup_stats_innerJSON, "last run");
    if (last_run) { 
    if(!cJSON_IsNumber(last_run))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_rollup_stats_inner->max_cycle
    cJSON *max_cycle = cJSON_GetObjectItemCaseSensitive(v0_0_39_rollup_stats_innerJSON, "max_cycle");
    if (max_cycle) { 
    if(!cJSON_IsNumber(max_cycle))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_rollup_stats_inner->total_time
    cJSON *total_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_rollup_stats_innerJSON, "total_time");
    if (total_time) { 
    if(!cJSON_IsNumber(total_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_rollup_stats_inner->total_cycles
    cJSON *total_cycles = cJSON_GetObjectItemCaseSensitive(v0_0_39_rollup_stats_innerJSON, "total_cycles");
    if (total_cycles) { 
    if(!cJSON_IsNumber(total_cycles))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_rollup_stats_inner->mean_cycles
    cJSON *mean_cycles = cJSON_GetObjectItemCaseSensitive(v0_0_39_rollup_stats_innerJSON, "mean_cycles");
    if (mean_cycles) { 
    if(!cJSON_IsNumber(mean_cycles))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_rollup_stats_inner_local_var = v0_0_39_rollup_stats_inner_create (
        type ? typeVariable : -1,
        last_run ? last_run->valuedouble : 0,
        max_cycle ? max_cycle->valuedouble : 0,
        total_time ? total_time->valuedouble : 0,
        total_cycles ? total_cycles->valuedouble : 0,
        mean_cycles ? mean_cycles->valuedouble : 0
        );

    return v0_0_39_rollup_stats_inner_local_var;
end:
    return NULL;

}
