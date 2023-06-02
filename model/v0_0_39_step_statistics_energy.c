#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_statistics_energy.h"



v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy_create(
    v0_0_39_uint64_no_val_t *consumed
    ) {
    v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy_local_var = malloc(sizeof(v0_0_39_step_statistics_energy_t));
    if (!v0_0_39_step_statistics_energy_local_var) {
        return NULL;
    }
    v0_0_39_step_statistics_energy_local_var->consumed = consumed;

    return v0_0_39_step_statistics_energy_local_var;
}


void v0_0_39_step_statistics_energy_free(v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy) {
    if(NULL == v0_0_39_step_statistics_energy){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_statistics_energy->consumed) {
        v0_0_39_uint64_no_val_free(v0_0_39_step_statistics_energy->consumed);
        v0_0_39_step_statistics_energy->consumed = NULL;
    }
    free(v0_0_39_step_statistics_energy);
}

cJSON *v0_0_39_step_statistics_energy_convertToJSON(v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_statistics_energy->consumed
    if(v0_0_39_step_statistics_energy->consumed) {
    cJSON *consumed_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_step_statistics_energy->consumed);
    if(consumed_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "consumed", consumed_local_JSON);
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

v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy_parseFromJSON(cJSON *v0_0_39_step_statistics_energyJSON){

    v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy_local_var = NULL;

    // define the local variable for v0_0_39_step_statistics_energy->consumed
    v0_0_39_uint64_no_val_t *consumed_local_nonprim = NULL;

    // v0_0_39_step_statistics_energy->consumed
    cJSON *consumed = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_statistics_energyJSON, "consumed");
    if (consumed) { 
    consumed_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(consumed); //nonprimitive
    }


    v0_0_39_step_statistics_energy_local_var = v0_0_39_step_statistics_energy_create (
        consumed ? consumed_local_nonprim : NULL
        );

    return v0_0_39_step_statistics_energy_local_var;
end:
    if (consumed_local_nonprim) {
        v0_0_39_uint64_no_val_free(consumed_local_nonprim);
        consumed_local_nonprim = NULL;
    }
    return NULL;

}
