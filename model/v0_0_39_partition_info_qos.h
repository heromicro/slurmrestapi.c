/*
 * v0_0_39_partition_info_qos.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_qos_H_
#define _v0_0_39_partition_info_qos_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_qos_t v0_0_39_partition_info_qos_t;




typedef struct v0_0_39_partition_info_qos_t {
    char *assigned; // string

} v0_0_39_partition_info_qos_t;

v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos_create(
    char *assigned
);

void v0_0_39_partition_info_qos_free(v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos);

v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos_parseFromJSON(cJSON *v0_0_39_partition_info_qosJSON);

cJSON *v0_0_39_partition_info_qos_convertToJSON(v0_0_39_partition_info_qos_t *v0_0_39_partition_info_qos);

#endif /* _v0_0_39_partition_info_qos_H_ */

