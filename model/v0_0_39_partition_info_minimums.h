/*
 * v0_0_39_partition_info_minimums.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_minimums_H_
#define _v0_0_39_partition_info_minimums_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_minimums_t v0_0_39_partition_info_minimums_t;




typedef struct v0_0_39_partition_info_minimums_t {
    int nodes; //numeric

} v0_0_39_partition_info_minimums_t;

v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums_create(
    int nodes
);

void v0_0_39_partition_info_minimums_free(v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums);

v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums_parseFromJSON(cJSON *v0_0_39_partition_info_minimumsJSON);

cJSON *v0_0_39_partition_info_minimums_convertToJSON(v0_0_39_partition_info_minimums_t *v0_0_39_partition_info_minimums);

#endif /* _v0_0_39_partition_info_minimums_H_ */

