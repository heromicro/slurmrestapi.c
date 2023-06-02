/*
 * v0_0_37_pings.h
 *
 * 
 */

#ifndef _v0_0_37_pings_H_
#define _v0_0_37_pings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_pings_t v0_0_37_pings_t;

#include "v0_0_37_error.h"
#include "v0_0_37_ping.h"



typedef struct v0_0_37_pings_t {
    list_t *errors; //nonprimitive container
    list_t *pings; //nonprimitive container

} v0_0_37_pings_t;

v0_0_37_pings_t *v0_0_37_pings_create(
    list_t *errors,
    list_t *pings
);

void v0_0_37_pings_free(v0_0_37_pings_t *v0_0_37_pings);

v0_0_37_pings_t *v0_0_37_pings_parseFromJSON(cJSON *v0_0_37_pingsJSON);

cJSON *v0_0_37_pings_convertToJSON(v0_0_37_pings_t *v0_0_37_pings);

#endif /* _v0_0_37_pings_H_ */

