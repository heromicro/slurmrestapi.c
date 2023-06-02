/*
 * v0_0_39_partition_info_tres.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_tres_H_
#define _v0_0_39_partition_info_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_tres_t v0_0_39_partition_info_tres_t;




typedef struct v0_0_39_partition_info_tres_t {
    char *configured; // string

} v0_0_39_partition_info_tres_t;

v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres_create(
    char *configured
);

void v0_0_39_partition_info_tres_free(v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres);

v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres_parseFromJSON(cJSON *v0_0_39_partition_info_tresJSON);

cJSON *v0_0_39_partition_info_tres_convertToJSON(v0_0_39_partition_info_tres_t *v0_0_39_partition_info_tres);

#endif /* _v0_0_39_partition_info_tres_H_ */

