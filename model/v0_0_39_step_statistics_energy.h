/*
 * v0_0_39_step_statistics_energy.h
 *
 * 
 */

#ifndef _v0_0_39_step_statistics_energy_H_
#define _v0_0_39_step_statistics_energy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_statistics_energy_t v0_0_39_step_statistics_energy_t;

#include "v0_0_39_uint64_no_val.h"



typedef struct v0_0_39_step_statistics_energy_t {
    struct v0_0_39_uint64_no_val_t *consumed; //model

} v0_0_39_step_statistics_energy_t;

v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy_create(
    v0_0_39_uint64_no_val_t *consumed
);

void v0_0_39_step_statistics_energy_free(v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy);

v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy_parseFromJSON(cJSON *v0_0_39_step_statistics_energyJSON);

cJSON *v0_0_39_step_statistics_energy_convertToJSON(v0_0_39_step_statistics_energy_t *v0_0_39_step_statistics_energy);

#endif /* _v0_0_39_step_statistics_energy_H_ */

