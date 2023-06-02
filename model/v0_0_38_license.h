/*
 * v0_0_38_license.h
 *
 * 
 */

#ifndef _v0_0_38_license_H_
#define _v0_0_38_license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_license_t v0_0_38_license_t;




typedef struct v0_0_38_license_t {
    char *license_name; // string
    int total; //numeric
    int used; //numeric
    int free; //numeric
    int reserved; //numeric
    int remote; //boolean

} v0_0_38_license_t;

v0_0_38_license_t *v0_0_38_license_create(
    char *license_name,
    int total,
    int used,
    int free,
    int reserved,
    int remote
);

void v0_0_38_license_free(v0_0_38_license_t *v0_0_38_license);

v0_0_38_license_t *v0_0_38_license_parseFromJSON(cJSON *v0_0_38_licenseJSON);

cJSON *v0_0_38_license_convertToJSON(v0_0_38_license_t *v0_0_38_license);

#endif /* _v0_0_38_license_H_ */

