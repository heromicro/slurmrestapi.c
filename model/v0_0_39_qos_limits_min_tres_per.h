/*
 * v0_0_39_qos_limits_min_tres_per.h
 *
 * 
 */

#ifndef _v0_0_39_qos_limits_min_tres_per_H_
#define _v0_0_39_qos_limits_min_tres_per_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_qos_limits_min_tres_per_t v0_0_39_qos_limits_min_tres_per_t;

#include "v0_0_39_tres.h"



typedef struct v0_0_39_qos_limits_min_tres_per_t {
    list_t *job; //nonprimitive container

} v0_0_39_qos_limits_min_tres_per_t;

v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per_create(
    list_t *job
);

void v0_0_39_qos_limits_min_tres_per_free(v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per);

v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per_parseFromJSON(cJSON *v0_0_39_qos_limits_min_tres_perJSON);

cJSON *v0_0_39_qos_limits_min_tres_per_convertToJSON(v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per);

#endif /* _v0_0_39_qos_limits_min_tres_per_H_ */

