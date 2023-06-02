/*
 * v0_0_39_assoc_min.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_min_H_
#define _v0_0_39_assoc_min_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_min_t v0_0_39_assoc_min_t;

#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_assoc_min_t {
    struct v0_0_39_uint32_no_val_t *priority_threshold; //model

} v0_0_39_assoc_min_t;

v0_0_39_assoc_min_t *v0_0_39_assoc_min_create(
    v0_0_39_uint32_no_val_t *priority_threshold
);

void v0_0_39_assoc_min_free(v0_0_39_assoc_min_t *v0_0_39_assoc_min);

v0_0_39_assoc_min_t *v0_0_39_assoc_min_parseFromJSON(cJSON *v0_0_39_assoc_minJSON);

cJSON *v0_0_39_assoc_min_convertToJSON(v0_0_39_assoc_min_t *v0_0_39_assoc_min);

#endif /* _v0_0_39_assoc_min_H_ */

