/*
 * v0_0_39_step_statistics.h
 *
 * 
 */

#ifndef _v0_0_39_step_statistics_H_
#define _v0_0_39_step_statistics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_statistics_t v0_0_39_step_statistics_t;

#include "v0_0_39_step_statistics_energy.h"



typedef struct v0_0_39_step_statistics_t {
    struct v0_0_39_step_statistics_energy_t *energy; //model

} v0_0_39_step_statistics_t;

v0_0_39_step_statistics_t *v0_0_39_step_statistics_create(
    v0_0_39_step_statistics_energy_t *energy
);

void v0_0_39_step_statistics_free(v0_0_39_step_statistics_t *v0_0_39_step_statistics);

v0_0_39_step_statistics_t *v0_0_39_step_statistics_parseFromJSON(cJSON *v0_0_39_step_statisticsJSON);

cJSON *v0_0_39_step_statistics_convertToJSON(v0_0_39_step_statistics_t *v0_0_39_step_statistics);

#endif /* _v0_0_39_step_statistics_H_ */

