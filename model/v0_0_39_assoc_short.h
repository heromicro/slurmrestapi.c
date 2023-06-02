/*
 * v0_0_39_assoc_short.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_short_H_
#define _v0_0_39_assoc_short_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_short_t v0_0_39_assoc_short_t;




typedef struct v0_0_39_assoc_short_t {
    char *account; // string
    char *cluster; // string
    char *partition; // string
    char *user; // string

} v0_0_39_assoc_short_t;

v0_0_39_assoc_short_t *v0_0_39_assoc_short_create(
    char *account,
    char *cluster,
    char *partition,
    char *user
);

void v0_0_39_assoc_short_free(v0_0_39_assoc_short_t *v0_0_39_assoc_short);

v0_0_39_assoc_short_t *v0_0_39_assoc_short_parseFromJSON(cJSON *v0_0_39_assoc_shortJSON);

cJSON *v0_0_39_assoc_short_convertToJSON(v0_0_39_assoc_short_t *v0_0_39_assoc_short);

#endif /* _v0_0_39_assoc_short_H_ */

