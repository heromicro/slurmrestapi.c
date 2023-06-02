/*
 * v0_0_39_qos_limits.h
 *
 * 
 */

#ifndef _v0_0_39_qos_limits_H_
#define _v0_0_39_qos_limits_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_qos_limits_t v0_0_39_qos_limits_t;

#include "v0_0_39_qos_limits_min.h"



typedef struct v0_0_39_qos_limits_t {
    struct v0_0_39_qos_limits_min_t *min; //model

} v0_0_39_qos_limits_t;

v0_0_39_qos_limits_t *v0_0_39_qos_limits_create(
    v0_0_39_qos_limits_min_t *min
);

void v0_0_39_qos_limits_free(v0_0_39_qos_limits_t *v0_0_39_qos_limits);

v0_0_39_qos_limits_t *v0_0_39_qos_limits_parseFromJSON(cJSON *v0_0_39_qos_limitsJSON);

cJSON *v0_0_39_qos_limits_convertToJSON(v0_0_39_qos_limits_t *v0_0_39_qos_limits);

#endif /* _v0_0_39_qos_limits_H_ */

