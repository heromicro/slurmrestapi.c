#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_acct_gather_energy.h"



v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy_create(
    int average_watts,
    long base_consumed_energy,
    long consumed_energy,
    int current_watts,
    long previous_consumed_energy,
    long last_collected
    ) {
    v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy_local_var = malloc(sizeof(v0_0_39_acct_gather_energy_t));
    if (!v0_0_39_acct_gather_energy_local_var) {
        return NULL;
    }
    v0_0_39_acct_gather_energy_local_var->average_watts = average_watts;
    v0_0_39_acct_gather_energy_local_var->base_consumed_energy = base_consumed_energy;
    v0_0_39_acct_gather_energy_local_var->consumed_energy = consumed_energy;
    v0_0_39_acct_gather_energy_local_var->current_watts = current_watts;
    v0_0_39_acct_gather_energy_local_var->previous_consumed_energy = previous_consumed_energy;
    v0_0_39_acct_gather_energy_local_var->last_collected = last_collected;

    return v0_0_39_acct_gather_energy_local_var;
}


void v0_0_39_acct_gather_energy_free(v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy) {
    if(NULL == v0_0_39_acct_gather_energy){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_acct_gather_energy);
}

cJSON *v0_0_39_acct_gather_energy_convertToJSON(v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_acct_gather_energy->average_watts
    if(v0_0_39_acct_gather_energy->average_watts) {
    if(cJSON_AddNumberToObject(item, "average_watts", v0_0_39_acct_gather_energy->average_watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_acct_gather_energy->base_consumed_energy
    if(v0_0_39_acct_gather_energy->base_consumed_energy) {
    if(cJSON_AddNumberToObject(item, "base_consumed_energy", v0_0_39_acct_gather_energy->base_consumed_energy) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_acct_gather_energy->consumed_energy
    if(v0_0_39_acct_gather_energy->consumed_energy) {
    if(cJSON_AddNumberToObject(item, "consumed_energy", v0_0_39_acct_gather_energy->consumed_energy) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_acct_gather_energy->current_watts
    if(v0_0_39_acct_gather_energy->current_watts) {
    if(cJSON_AddNumberToObject(item, "current_watts", v0_0_39_acct_gather_energy->current_watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_acct_gather_energy->previous_consumed_energy
    if(v0_0_39_acct_gather_energy->previous_consumed_energy) {
    if(cJSON_AddNumberToObject(item, "previous_consumed_energy", v0_0_39_acct_gather_energy->previous_consumed_energy) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_acct_gather_energy->last_collected
    if(v0_0_39_acct_gather_energy->last_collected) {
    if(cJSON_AddNumberToObject(item, "last_collected", v0_0_39_acct_gather_energy->last_collected) == NULL) {
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

v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy_parseFromJSON(cJSON *v0_0_39_acct_gather_energyJSON){

    v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy_local_var = NULL;

    // v0_0_39_acct_gather_energy->average_watts
    cJSON *average_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_acct_gather_energyJSON, "average_watts");
    if (average_watts) { 
    if(!cJSON_IsNumber(average_watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_acct_gather_energy->base_consumed_energy
    cJSON *base_consumed_energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_acct_gather_energyJSON, "base_consumed_energy");
    if (base_consumed_energy) { 
    if(!cJSON_IsNumber(base_consumed_energy))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_acct_gather_energy->consumed_energy
    cJSON *consumed_energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_acct_gather_energyJSON, "consumed_energy");
    if (consumed_energy) { 
    if(!cJSON_IsNumber(consumed_energy))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_acct_gather_energy->current_watts
    cJSON *current_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_acct_gather_energyJSON, "current_watts");
    if (current_watts) { 
    if(!cJSON_IsNumber(current_watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_acct_gather_energy->previous_consumed_energy
    cJSON *previous_consumed_energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_acct_gather_energyJSON, "previous_consumed_energy");
    if (previous_consumed_energy) { 
    if(!cJSON_IsNumber(previous_consumed_energy))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_acct_gather_energy->last_collected
    cJSON *last_collected = cJSON_GetObjectItemCaseSensitive(v0_0_39_acct_gather_energyJSON, "last_collected");
    if (last_collected) { 
    if(!cJSON_IsNumber(last_collected))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_acct_gather_energy_local_var = v0_0_39_acct_gather_energy_create (
        average_watts ? average_watts->valuedouble : 0,
        base_consumed_energy ? base_consumed_energy->valuedouble : 0,
        consumed_energy ? consumed_energy->valuedouble : 0,
        current_watts ? current_watts->valuedouble : 0,
        previous_consumed_energy ? previous_consumed_energy->valuedouble : 0,
        last_collected ? last_collected->valuedouble : 0
        );

    return v0_0_39_acct_gather_energy_local_var;
end:
    return NULL;

}
