/*
 * v0_0_39_error.h
 *
 * 
 */

#ifndef _v0_0_39_error_H_
#define _v0_0_39_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_error_t v0_0_39_error_t;




typedef struct v0_0_39_error_t {
    int error_number; //numeric
    char *error; // string
    char *source; // string
    char *description; // string

} v0_0_39_error_t;

v0_0_39_error_t *v0_0_39_error_create(
    int error_number,
    char *error,
    char *source,
    char *description
);

void v0_0_39_error_free(v0_0_39_error_t *v0_0_39_error);

v0_0_39_error_t *v0_0_39_error_parseFromJSON(cJSON *v0_0_39_errorJSON);

cJSON *v0_0_39_error_convertToJSON(v0_0_39_error_t *v0_0_39_error);

#endif /* _v0_0_39_error_H_ */

