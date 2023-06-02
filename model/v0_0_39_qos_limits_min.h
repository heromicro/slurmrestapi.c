/*
 * v0_0_39_qos_limits_min.h
 *
 * 
 */

#ifndef _v0_0_39_qos_limits_min_H_
#define _v0_0_39_qos_limits_min_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_qos_limits_min_t v0_0_39_qos_limits_min_t;

#include "v0_0_39_qos_limits_min_tres.h"



typedef struct v0_0_39_qos_limits_min_t {
    struct v0_0_39_qos_limits_min_tres_t *tres; //model

} v0_0_39_qos_limits_min_t;

v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min_create(
    v0_0_39_qos_limits_min_tres_t *tres
);

void v0_0_39_qos_limits_min_free(v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min);

v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min_parseFromJSON(cJSON *v0_0_39_qos_limits_minJSON);

cJSON *v0_0_39_qos_limits_min_convertToJSON(v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min);

#endif /* _v0_0_39_qos_limits_min_H_ */

