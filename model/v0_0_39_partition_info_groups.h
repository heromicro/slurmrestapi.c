/*
 * v0_0_39_partition_info_groups.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_groups_H_
#define _v0_0_39_partition_info_groups_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_groups_t v0_0_39_partition_info_groups_t;




typedef struct v0_0_39_partition_info_groups_t {
    char *allowed; // string

} v0_0_39_partition_info_groups_t;

v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups_create(
    char *allowed
);

void v0_0_39_partition_info_groups_free(v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups);

v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups_parseFromJSON(cJSON *v0_0_39_partition_info_groupsJSON);

cJSON *v0_0_39_partition_info_groups_convertToJSON(v0_0_39_partition_info_groups_t *v0_0_39_partition_info_groups);

#endif /* _v0_0_39_partition_info_groups_H_ */

