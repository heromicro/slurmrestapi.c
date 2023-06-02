/*
 * v0_0_39_qos_preempt.h
 *
 * 
 */

#ifndef _v0_0_39_qos_preempt_H_
#define _v0_0_39_qos_preempt_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_qos_preempt_t v0_0_39_qos_preempt_t;

#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_qos_preempt_t {
    struct v0_0_39_uint32_no_val_t *exempt_time; //model

} v0_0_39_qos_preempt_t;

v0_0_39_qos_preempt_t *v0_0_39_qos_preempt_create(
    v0_0_39_uint32_no_val_t *exempt_time
);

void v0_0_39_qos_preempt_free(v0_0_39_qos_preempt_t *v0_0_39_qos_preempt);

v0_0_39_qos_preempt_t *v0_0_39_qos_preempt_parseFromJSON(cJSON *v0_0_39_qos_preemptJSON);

cJSON *v0_0_39_qos_preempt_convertToJSON(v0_0_39_qos_preempt_t *v0_0_39_qos_preempt);

#endif /* _v0_0_39_qos_preempt_H_ */

