#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_ext_sensors_data.h"



v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data_create(
    v0_0_39_uint64_no_val_t *consumed_energy,
    v0_0_39_uint32_no_val_t *temperature,
    long energy_update_time,
    int current_watts
    ) {
    v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data_local_var = malloc(sizeof(v0_0_39_ext_sensors_data_t));
    if (!v0_0_39_ext_sensors_data_local_var) {
        return NULL;
    }
    v0_0_39_ext_sensors_data_local_var->consumed_energy = consumed_energy;
    v0_0_39_ext_sensors_data_local_var->temperature = temperature;
    v0_0_39_ext_sensors_data_local_var->energy_update_time = energy_update_time;
    v0_0_39_ext_sensors_data_local_var->current_watts = current_watts;

    return v0_0_39_ext_sensors_data_local_var;
}


void v0_0_39_ext_sensors_data_free(v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data) {
    if(NULL == v0_0_39_ext_sensors_data){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_ext_sensors_data->consumed_energy) {
        v0_0_39_uint64_no_val_free(v0_0_39_ext_sensors_data->consumed_energy);
        v0_0_39_ext_sensors_data->consumed_energy = NULL;
    }
    if (v0_0_39_ext_sensors_data->temperature) {
        v0_0_39_uint32_no_val_free(v0_0_39_ext_sensors_data->temperature);
        v0_0_39_ext_sensors_data->temperature = NULL;
    }
    free(v0_0_39_ext_sensors_data);
}

cJSON *v0_0_39_ext_sensors_data_convertToJSON(v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_ext_sensors_data->consumed_energy
    if(v0_0_39_ext_sensors_data->consumed_energy) {
    cJSON *consumed_energy_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_ext_sensors_data->consumed_energy);
    if(consumed_energy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "consumed_energy", consumed_energy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_ext_sensors_data->temperature
    if(v0_0_39_ext_sensors_data->temperature) {
    cJSON *temperature_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_ext_sensors_data->temperature);
    if(temperature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "temperature", temperature_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_ext_sensors_data->energy_update_time
    if(v0_0_39_ext_sensors_data->energy_update_time) {
    if(cJSON_AddNumberToObject(item, "energy_update_time", v0_0_39_ext_sensors_data->energy_update_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_ext_sensors_data->current_watts
    if(v0_0_39_ext_sensors_data->current_watts) {
    if(cJSON_AddNumberToObject(item, "current_watts", v0_0_39_ext_sensors_data->current_watts) == NULL) {
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

v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data_parseFromJSON(cJSON *v0_0_39_ext_sensors_dataJSON){

    v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data_local_var = NULL;

    // define the local variable for v0_0_39_ext_sensors_data->consumed_energy
    v0_0_39_uint64_no_val_t *consumed_energy_local_nonprim = NULL;

    // define the local variable for v0_0_39_ext_sensors_data->temperature
    v0_0_39_uint32_no_val_t *temperature_local_nonprim = NULL;

    // v0_0_39_ext_sensors_data->consumed_energy
    cJSON *consumed_energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_ext_sensors_dataJSON, "consumed_energy");
    if (consumed_energy) { 
    consumed_energy_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(consumed_energy); //nonprimitive
    }

    // v0_0_39_ext_sensors_data->temperature
    cJSON *temperature = cJSON_GetObjectItemCaseSensitive(v0_0_39_ext_sensors_dataJSON, "temperature");
    if (temperature) { 
    temperature_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(temperature); //nonprimitive
    }

    // v0_0_39_ext_sensors_data->energy_update_time
    cJSON *energy_update_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_ext_sensors_dataJSON, "energy_update_time");
    if (energy_update_time) { 
    if(!cJSON_IsNumber(energy_update_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_ext_sensors_data->current_watts
    cJSON *current_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_ext_sensors_dataJSON, "current_watts");
    if (current_watts) { 
    if(!cJSON_IsNumber(current_watts))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_ext_sensors_data_local_var = v0_0_39_ext_sensors_data_create (
        consumed_energy ? consumed_energy_local_nonprim : NULL,
        temperature ? temperature_local_nonprim : NULL,
        energy_update_time ? energy_update_time->valuedouble : 0,
        current_watts ? current_watts->valuedouble : 0
        );

    return v0_0_39_ext_sensors_data_local_var;
end:
    if (consumed_energy_local_nonprim) {
        v0_0_39_uint64_no_val_free(consumed_energy_local_nonprim);
        consumed_energy_local_nonprim = NULL;
    }
    if (temperature_local_nonprim) {
        v0_0_39_uint32_no_val_free(temperature_local_nonprim);
        temperature_local_nonprim = NULL;
    }
    return NULL;

}
