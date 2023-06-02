/*
 * v0_0_39_partition_info_priority.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_priority_H_
#define _v0_0_39_partition_info_priority_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_priority_t v0_0_39_partition_info_priority_t;




typedef struct v0_0_39_partition_info_priority_t {
    int tier; //numeric

} v0_0_39_partition_info_priority_t;

v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority_create(
    int tier
);

void v0_0_39_partition_info_priority_free(v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority);

v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority_parseFromJSON(cJSON *v0_0_39_partition_info_priorityJSON);

cJSON *v0_0_39_partition_info_priority_convertToJSON(v0_0_39_partition_info_priority_t *v0_0_39_partition_info_priority);

#endif /* _v0_0_39_partition_info_priority_H_ */

