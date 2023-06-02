/*
 * v0_0_39_pings.h
 *
 * 
 */

#ifndef _v0_0_39_pings_H_
#define _v0_0_39_pings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_pings_t v0_0_39_pings_t;

#include "v0_0_39_controller_ping.h"
#include "v0_0_39_error.h"
#include "v0_0_39_meta.h"
#include "v0_0_39_warning.h"



typedef struct v0_0_39_pings_t {
    struct v0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    list_t *pings; //nonprimitive container

} v0_0_39_pings_t;

v0_0_39_pings_t *v0_0_39_pings_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *pings
);

void v0_0_39_pings_free(v0_0_39_pings_t *v0_0_39_pings);

v0_0_39_pings_t *v0_0_39_pings_parseFromJSON(cJSON *v0_0_39_pingsJSON);

cJSON *v0_0_39_pings_convertToJSON(v0_0_39_pings_t *v0_0_39_pings);

#endif /* _v0_0_39_pings_H_ */

