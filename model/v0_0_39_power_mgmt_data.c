#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_power_mgmt_data.h"



v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data_create(
    v0_0_39_uint32_no_val_t *maximum_watts,
    int current_watts,
    long total_energy,
    int new_maximum_watts,
    int peak_watts,
    int lowest_watts,
    long new_job_time,
    int state,
    long time_start_day
    ) {
    v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data_local_var = malloc(sizeof(v0_0_39_power_mgmt_data_t));
    if (!v0_0_39_power_mgmt_data_local_var) {
        return NULL;
    }
    v0_0_39_power_mgmt_data_local_var->maximum_watts = maximum_watts;
    v0_0_39_power_mgmt_data_local_var->current_watts = current_watts;
    v0_0_39_power_mgmt_data_local_var->total_energy = total_energy;
    v0_0_39_power_mgmt_data_local_var->new_maximum_watts = new_maximum_watts;
    v0_0_39_power_mgmt_data_local_var->peak_watts = peak_watts;
    v0_0_39_power_mgmt_data_local_var->lowest_watts = lowest_watts;
    v0_0_39_power_mgmt_data_local_var->new_job_time = new_job_time;
    v0_0_39_power_mgmt_data_local_var->state = state;
    v0_0_39_power_mgmt_data_local_var->time_start_day = time_start_day;

    return v0_0_39_power_mgmt_data_local_var;
}


void v0_0_39_power_mgmt_data_free(v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data) {
    if(NULL == v0_0_39_power_mgmt_data){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_power_mgmt_data->maximum_watts) {
        v0_0_39_uint32_no_val_free(v0_0_39_power_mgmt_data->maximum_watts);
        v0_0_39_power_mgmt_data->maximum_watts = NULL;
    }
    free(v0_0_39_power_mgmt_data);
}

cJSON *v0_0_39_power_mgmt_data_convertToJSON(v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_power_mgmt_data->maximum_watts
    if(v0_0_39_power_mgmt_data->maximum_watts) {
    cJSON *maximum_watts_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_power_mgmt_data->maximum_watts);
    if(maximum_watts_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "maximum_watts", maximum_watts_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_power_mgmt_data->current_watts
    if(v0_0_39_power_mgmt_data->current_watts) {
    if(cJSON_AddNumberToObject(item, "current_watts", v0_0_39_power_mgmt_data->current_watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->total_energy
    if(v0_0_39_power_mgmt_data->total_energy) {
    if(cJSON_AddNumberToObject(item, "total_energy", v0_0_39_power_mgmt_data->total_energy) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->new_maximum_watts
    if(v0_0_39_power_mgmt_data->new_maximum_watts) {
    if(cJSON_AddNumberToObject(item, "new_maximum_watts", v0_0_39_power_mgmt_data->new_maximum_watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->peak_watts
    if(v0_0_39_power_mgmt_data->peak_watts) {
    if(cJSON_AddNumberToObject(item, "peak_watts", v0_0_39_power_mgmt_data->peak_watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->lowest_watts
    if(v0_0_39_power_mgmt_data->lowest_watts) {
    if(cJSON_AddNumberToObject(item, "lowest_watts", v0_0_39_power_mgmt_data->lowest_watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->new_job_time
    if(v0_0_39_power_mgmt_data->new_job_time) {
    if(cJSON_AddNumberToObject(item, "new_job_time", v0_0_39_power_mgmt_data->new_job_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->state
    if(v0_0_39_power_mgmt_data->state) {
    if(cJSON_AddNumberToObject(item, "state", v0_0_39_power_mgmt_data->state) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_power_mgmt_data->time_start_day
    if(v0_0_39_power_mgmt_data->time_start_day) {
    if(cJSON_AddNumberToObject(item, "time_start_day", v0_0_39_power_mgmt_data->time_start_day) == NULL) {
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

v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data_parseFromJSON(cJSON *v0_0_39_power_mgmt_dataJSON){

    v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data_local_var = NULL;

    // define the local variable for v0_0_39_power_mgmt_data->maximum_watts
    v0_0_39_uint32_no_val_t *maximum_watts_local_nonprim = NULL;

    // v0_0_39_power_mgmt_data->maximum_watts
    cJSON *maximum_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "maximum_watts");
    if (maximum_watts) { 
    maximum_watts_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(maximum_watts); //nonprimitive
    }

    // v0_0_39_power_mgmt_data->current_watts
    cJSON *current_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "current_watts");
    if (current_watts) { 
    if(!cJSON_IsNumber(current_watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->total_energy
    cJSON *total_energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "total_energy");
    if (total_energy) { 
    if(!cJSON_IsNumber(total_energy))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->new_maximum_watts
    cJSON *new_maximum_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "new_maximum_watts");
    if (new_maximum_watts) { 
    if(!cJSON_IsNumber(new_maximum_watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->peak_watts
    cJSON *peak_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "peak_watts");
    if (peak_watts) { 
    if(!cJSON_IsNumber(peak_watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->lowest_watts
    cJSON *lowest_watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "lowest_watts");
    if (lowest_watts) { 
    if(!cJSON_IsNumber(lowest_watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->new_job_time
    cJSON *new_job_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "new_job_time");
    if (new_job_time) { 
    if(!cJSON_IsNumber(new_job_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "state");
    if (state) { 
    if(!cJSON_IsNumber(state))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_power_mgmt_data->time_start_day
    cJSON *time_start_day = cJSON_GetObjectItemCaseSensitive(v0_0_39_power_mgmt_dataJSON, "time_start_day");
    if (time_start_day) { 
    if(!cJSON_IsNumber(time_start_day))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_power_mgmt_data_local_var = v0_0_39_power_mgmt_data_create (
        maximum_watts ? maximum_watts_local_nonprim : NULL,
        current_watts ? current_watts->valuedouble : 0,
        total_energy ? total_energy->valuedouble : 0,
        new_maximum_watts ? new_maximum_watts->valuedouble : 0,
        peak_watts ? peak_watts->valuedouble : 0,
        lowest_watts ? lowest_watts->valuedouble : 0,
        new_job_time ? new_job_time->valuedouble : 0,
        state ? state->valuedouble : 0,
        time_start_day ? time_start_day->valuedouble : 0
        );

    return v0_0_39_power_mgmt_data_local_var;
end:
    if (maximum_watts_local_nonprim) {
        v0_0_39_uint32_no_val_free(maximum_watts_local_nonprim);
        maximum_watts_local_nonprim = NULL;
    }
    return NULL;

}
