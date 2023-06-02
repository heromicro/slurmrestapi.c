/*
 * v0_0_39_partition_info_defaults.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_defaults_H_
#define _v0_0_39_partition_info_defaults_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_defaults_t v0_0_39_partition_info_defaults_t;




typedef struct v0_0_39_partition_info_defaults_t {
    char *job; // string

} v0_0_39_partition_info_defaults_t;

v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults_create(
    char *job
);

void v0_0_39_partition_info_defaults_free(v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults);

v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults_parseFromJSON(cJSON *v0_0_39_partition_info_defaultsJSON);

cJSON *v0_0_39_partition_info_defaults_convertToJSON(v0_0_39_partition_info_defaults_t *v0_0_39_partition_info_defaults);

#endif /* _v0_0_39_partition_info_defaults_H_ */

