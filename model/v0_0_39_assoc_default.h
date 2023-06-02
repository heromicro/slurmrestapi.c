/*
 * v0_0_39_assoc_default.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_default_H_
#define _v0_0_39_assoc_default_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_default_t v0_0_39_assoc_default_t;




typedef struct v0_0_39_assoc_default_t {
    char *qos; // string

} v0_0_39_assoc_default_t;

v0_0_39_assoc_default_t *v0_0_39_assoc_default_create(
    char *qos
);

void v0_0_39_assoc_default_free(v0_0_39_assoc_default_t *v0_0_39_assoc_default);

v0_0_39_assoc_default_t *v0_0_39_assoc_default_parseFromJSON(cJSON *v0_0_39_assoc_defaultJSON);

cJSON *v0_0_39_assoc_default_convertToJSON(v0_0_39_assoc_default_t *v0_0_39_assoc_default);

#endif /* _v0_0_39_assoc_default_H_ */

