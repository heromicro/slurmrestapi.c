#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_statistics.h"



v0_0_39_step_statistics_t *v0_0_39_step_statistics_create(
    v0_0_39_step_statistics_energy_t *energy
    ) {
    v0_0_39_step_statistics_t *v0_0_39_step_statistics_local_var = malloc(sizeof(v0_0_39_step_statistics_t));
    if (!v0_0_39_step_statistics_local_var) {
        return NULL;
    }
    v0_0_39_step_statistics_local_var->energy = energy;

    return v0_0_39_step_statistics_local_var;
}


void v0_0_39_step_statistics_free(v0_0_39_step_statistics_t *v0_0_39_step_statistics) {
    if(NULL == v0_0_39_step_statistics){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_statistics->energy) {
        v0_0_39_step_statistics_energy_free(v0_0_39_step_statistics->energy);
        v0_0_39_step_statistics->energy = NULL;
    }
    free(v0_0_39_step_statistics);
}

cJSON *v0_0_39_step_statistics_convertToJSON(v0_0_39_step_statistics_t *v0_0_39_step_statistics) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_statistics->energy
    if(v0_0_39_step_statistics->energy) {
    cJSON *energy_local_JSON = v0_0_39_step_statistics_energy_convertToJSON(v0_0_39_step_statistics->energy);
    if(energy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "energy", energy_local_JSON);
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

v0_0_39_step_statistics_t *v0_0_39_step_statistics_parseFromJSON(cJSON *v0_0_39_step_statisticsJSON){

    v0_0_39_step_statistics_t *v0_0_39_step_statistics_local_var = NULL;

    // define the local variable for v0_0_39_step_statistics->energy
    v0_0_39_step_statistics_energy_t *energy_local_nonprim = NULL;

    // v0_0_39_step_statistics->energy
    cJSON *energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_statisticsJSON, "energy");
    if (energy) { 
    energy_local_nonprim = v0_0_39_step_statistics_energy_parseFromJSON(energy); //nonprimitive
    }


    v0_0_39_step_statistics_local_var = v0_0_39_step_statistics_create (
        energy ? energy_local_nonprim : NULL
        );

    return v0_0_39_step_statistics_local_var;
end:
    if (energy_local_nonprim) {
        v0_0_39_step_statistics_energy_free(energy_local_nonprim);
        energy_local_nonprim = NULL;
    }
    return NULL;

}
