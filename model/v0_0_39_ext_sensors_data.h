/*
 * v0_0_39_ext_sensors_data.h
 *
 * 
 */

#ifndef _v0_0_39_ext_sensors_data_H_
#define _v0_0_39_ext_sensors_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_ext_sensors_data_t v0_0_39_ext_sensors_data_t;

#include "v0_0_39_uint32_no_val.h"
#include "v0_0_39_uint64_no_val.h"



typedef struct v0_0_39_ext_sensors_data_t {
    struct v0_0_39_uint64_no_val_t *consumed_energy; //model
    struct v0_0_39_uint32_no_val_t *temperature; //model
    long energy_update_time; //numeric
    int current_watts; //numeric

} v0_0_39_ext_sensors_data_t;

v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data_create(
    v0_0_39_uint64_no_val_t *consumed_energy,
    v0_0_39_uint32_no_val_t *temperature,
    long energy_update_time,
    int current_watts
);

void v0_0_39_ext_sensors_data_free(v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data);

v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data_parseFromJSON(cJSON *v0_0_39_ext_sensors_dataJSON);

cJSON *v0_0_39_ext_sensors_data_convertToJSON(v0_0_39_ext_sensors_data_t *v0_0_39_ext_sensors_data);

#endif /* _v0_0_39_ext_sensors_data_H_ */

