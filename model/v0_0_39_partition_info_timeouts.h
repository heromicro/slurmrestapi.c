/*
 * v0_0_39_partition_info_timeouts.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_timeouts_H_
#define _v0_0_39_partition_info_timeouts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_timeouts_t v0_0_39_partition_info_timeouts_t;

#include "v0_0_39_uint16_no_val.h"



typedef struct v0_0_39_partition_info_timeouts_t {
    struct v0_0_39_uint16_no_val_t *suspend; //model

} v0_0_39_partition_info_timeouts_t;

v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts_create(
    v0_0_39_uint16_no_val_t *suspend
);

void v0_0_39_partition_info_timeouts_free(v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts);

v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts_parseFromJSON(cJSON *v0_0_39_partition_info_timeoutsJSON);

cJSON *v0_0_39_partition_info_timeouts_convertToJSON(v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts);

#endif /* _v0_0_39_partition_info_timeouts_H_ */

