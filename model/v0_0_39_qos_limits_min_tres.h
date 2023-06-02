/*
 * v0_0_39_qos_limits_min_tres.h
 *
 * 
 */

#ifndef _v0_0_39_qos_limits_min_tres_H_
#define _v0_0_39_qos_limits_min_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_qos_limits_min_tres_t v0_0_39_qos_limits_min_tres_t;

#include "v0_0_39_qos_limits_min_tres_per.h"



typedef struct v0_0_39_qos_limits_min_tres_t {
    struct v0_0_39_qos_limits_min_tres_per_t *per; //model

} v0_0_39_qos_limits_min_tres_t;

v0_0_39_qos_limits_min_tres_t *v0_0_39_qos_limits_min_tres_create(
    v0_0_39_qos_limits_min_tres_per_t *per
);

void v0_0_39_qos_limits_min_tres_free(v0_0_39_qos_limits_min_tres_t *v0_0_39_qos_limits_min_tres);

v0_0_39_qos_limits_min_tres_t *v0_0_39_qos_limits_min_tres_parseFromJSON(cJSON *v0_0_39_qos_limits_min_tresJSON);

cJSON *v0_0_39_qos_limits_min_tres_convertToJSON(v0_0_39_qos_limits_min_tres_t *v0_0_39_qos_limits_min_tres);

#endif /* _v0_0_39_qos_limits_min_tres_H_ */

