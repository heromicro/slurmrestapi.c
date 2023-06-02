/*
 * v0_0_39_power_mgmt_data.h
 *
 * 
 */

#ifndef _v0_0_39_power_mgmt_data_H_
#define _v0_0_39_power_mgmt_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_power_mgmt_data_t v0_0_39_power_mgmt_data_t;

#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_power_mgmt_data_t {
    struct v0_0_39_uint32_no_val_t *maximum_watts; //model
    int current_watts; //numeric
    long total_energy; //numeric
    int new_maximum_watts; //numeric
    int peak_watts; //numeric
    int lowest_watts; //numeric
    long new_job_time; //numeric
    int state; //numeric
    long time_start_day; //numeric

} v0_0_39_power_mgmt_data_t;

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
);

void v0_0_39_power_mgmt_data_free(v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data);

v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data_parseFromJSON(cJSON *v0_0_39_power_mgmt_dataJSON);

cJSON *v0_0_39_power_mgmt_data_convertToJSON(v0_0_39_power_mgmt_data_t *v0_0_39_power_mgmt_data);

#endif /* _v0_0_39_power_mgmt_data_H_ */

