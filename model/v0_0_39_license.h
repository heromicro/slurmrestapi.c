/*
 * v0_0_39_license.h
 *
 * 
 */

#ifndef _v0_0_39_license_H_
#define _v0_0_39_license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_license_t v0_0_39_license_t;




typedef struct v0_0_39_license_t {
    char *license_name; // string
    int total; //numeric
    int used; //numeric
    int free; //numeric
    int remote; //boolean
    int reserved; //numeric
    int last_consumed; //numeric
    int last_deficit; //numeric
    long last_update; //numeric

} v0_0_39_license_t;

v0_0_39_license_t *v0_0_39_license_create(
    char *license_name,
    int total,
    int used,
    int free,
    int remote,
    int reserved,
    int last_consumed,
    int last_deficit,
    long last_update
);

void v0_0_39_license_free(v0_0_39_license_t *v0_0_39_license);

v0_0_39_license_t *v0_0_39_license_parseFromJSON(cJSON *v0_0_39_licenseJSON);

cJSON *v0_0_39_license_convertToJSON(v0_0_39_license_t *v0_0_39_license);

#endif /* _v0_0_39_license_H_ */

