/*
 * v0_0_39_partition_info_maximums.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_maximums_H_
#define _v0_0_39_partition_info_maximums_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_maximums_t v0_0_39_partition_info_maximums_t;

#include "v0_0_39_uint16_no_val.h"



typedef struct v0_0_39_partition_info_maximums_t {
    struct v0_0_39_uint16_no_val_t *over_time_limit; //model

} v0_0_39_partition_info_maximums_t;

v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums_create(
    v0_0_39_uint16_no_val_t *over_time_limit
);

void v0_0_39_partition_info_maximums_free(v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums);

v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums_parseFromJSON(cJSON *v0_0_39_partition_info_maximumsJSON);

cJSON *v0_0_39_partition_info_maximums_convertToJSON(v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums);

#endif /* _v0_0_39_partition_info_maximums_H_ */

