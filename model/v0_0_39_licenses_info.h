/*
 * v0_0_39_licenses_info.h
 *
 * 
 */

#ifndef _v0_0_39_licenses_info_H_
#define _v0_0_39_licenses_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_licenses_info_t v0_0_39_licenses_info_t;

#include "v0_0_39_error.h"
#include "v0_0_39_license.h"
#include "v0_0_39_meta.h"
#include "v0_0_39_warning.h"



typedef struct v0_0_39_licenses_info_t {
    struct v0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    list_t *licenses; //nonprimitive container

} v0_0_39_licenses_info_t;

v0_0_39_licenses_info_t *v0_0_39_licenses_info_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *licenses
);

void v0_0_39_licenses_info_free(v0_0_39_licenses_info_t *v0_0_39_licenses_info);

v0_0_39_licenses_info_t *v0_0_39_licenses_info_parseFromJSON(cJSON *v0_0_39_licenses_infoJSON);

cJSON *v0_0_39_licenses_info_convertToJSON(v0_0_39_licenses_info_t *v0_0_39_licenses_info);

#endif /* _v0_0_39_licenses_info_H_ */

