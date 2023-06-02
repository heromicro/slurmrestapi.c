/*
 * v0_0_39_warning.h
 *
 * 
 */

#ifndef _v0_0_39_warning_H_
#define _v0_0_39_warning_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_warning_t v0_0_39_warning_t;




typedef struct v0_0_39_warning_t {
    char *warning; // string
    char *source; // string
    char *description; // string

} v0_0_39_warning_t;

v0_0_39_warning_t *v0_0_39_warning_create(
    char *warning,
    char *source,
    char *description
);

void v0_0_39_warning_free(v0_0_39_warning_t *v0_0_39_warning);

v0_0_39_warning_t *v0_0_39_warning_parseFromJSON(cJSON *v0_0_39_warningJSON);

cJSON *v0_0_39_warning_convertToJSON(v0_0_39_warning_t *v0_0_39_warning);

#endif /* _v0_0_39_warning_H_ */

