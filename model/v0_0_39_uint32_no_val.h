/*
 * v0_0_39_uint32_no_val.h
 *
 * Integer number with flags
 */

#ifndef _v0_0_39_uint32_no_val_H_
#define _v0_0_39_uint32_no_val_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_uint32_no_val_t v0_0_39_uint32_no_val_t;




typedef struct v0_0_39_uint32_no_val_t {
    int set; //boolean
    int infinite; //boolean
    long number; //numeric

} v0_0_39_uint32_no_val_t;

v0_0_39_uint32_no_val_t *v0_0_39_uint32_no_val_create(
    int set,
    int infinite,
    long number
);

void v0_0_39_uint32_no_val_free(v0_0_39_uint32_no_val_t *v0_0_39_uint32_no_val);

v0_0_39_uint32_no_val_t *v0_0_39_uint32_no_val_parseFromJSON(cJSON *v0_0_39_uint32_no_valJSON);

cJSON *v0_0_39_uint32_no_val_convertToJSON(v0_0_39_uint32_no_val_t *v0_0_39_uint32_no_val);

#endif /* _v0_0_39_uint32_no_val_H_ */

