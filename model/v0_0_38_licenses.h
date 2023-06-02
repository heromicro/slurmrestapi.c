/*
 * v0_0_38_licenses.h
 *
 * 
 */

#ifndef _v0_0_38_licenses_H_
#define _v0_0_38_licenses_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_licenses_t v0_0_38_licenses_t;

#include "v0_0_38_error.h"
#include "v0_0_38_license.h"



typedef struct v0_0_38_licenses_t {
    list_t *errors; //nonprimitive container
    list_t *licenses; //nonprimitive container

} v0_0_38_licenses_t;

v0_0_38_licenses_t *v0_0_38_licenses_create(
    list_t *errors,
    list_t *licenses
);

void v0_0_38_licenses_free(v0_0_38_licenses_t *v0_0_38_licenses);

v0_0_38_licenses_t *v0_0_38_licenses_parseFromJSON(cJSON *v0_0_38_licensesJSON);

cJSON *v0_0_38_licenses_convertToJSON(v0_0_38_licenses_t *v0_0_38_licenses);

#endif /* _v0_0_38_licenses_H_ */

