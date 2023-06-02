/*
 * v0_0_37_partitions_response.h
 *
 * 
 */

#ifndef _v0_0_37_partitions_response_H_
#define _v0_0_37_partitions_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_partitions_response_t v0_0_37_partitions_response_t;

#include "v0_0_37_error.h"
#include "v0_0_37_partition.h"



typedef struct v0_0_37_partitions_response_t {
    list_t *errors; //nonprimitive container
    list_t *partitions; //nonprimitive container

} v0_0_37_partitions_response_t;

v0_0_37_partitions_response_t *v0_0_37_partitions_response_create(
    list_t *errors,
    list_t *partitions
);

void v0_0_37_partitions_response_free(v0_0_37_partitions_response_t *v0_0_37_partitions_response);

v0_0_37_partitions_response_t *v0_0_37_partitions_response_parseFromJSON(cJSON *v0_0_37_partitions_responseJSON);

cJSON *v0_0_37_partitions_response_convertToJSON(v0_0_37_partitions_response_t *v0_0_37_partitions_response);

#endif /* _v0_0_37_partitions_response_H_ */

