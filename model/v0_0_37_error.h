/*
 * v0_0_37_error.h
 *
 * 
 */

#ifndef _v0_0_37_error_H_
#define _v0_0_37_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_error_t v0_0_37_error_t;




typedef struct v0_0_37_error_t {
    char *error; // string
    int errno; //numeric

} v0_0_37_error_t;

v0_0_37_error_t *v0_0_37_error_create(
    char *error,
    int errno
);

void v0_0_37_error_free(v0_0_37_error_t *v0_0_37_error);

v0_0_37_error_t *v0_0_37_error_parseFromJSON(cJSON *v0_0_37_errorJSON);

cJSON *v0_0_37_error_convertToJSON(v0_0_37_error_t *v0_0_37_error);

#endif /* _v0_0_37_error_H_ */

