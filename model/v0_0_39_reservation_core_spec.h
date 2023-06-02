/*
 * v0_0_39_reservation_core_spec.h
 *
 * 
 */

#ifndef _v0_0_39_reservation_core_spec_H_
#define _v0_0_39_reservation_core_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_reservation_core_spec_t v0_0_39_reservation_core_spec_t;




typedef struct v0_0_39_reservation_core_spec_t {
    char *node; // string
    char *core; // string

} v0_0_39_reservation_core_spec_t;

v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec_create(
    char *node,
    char *core
);

void v0_0_39_reservation_core_spec_free(v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec);

v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec_parseFromJSON(cJSON *v0_0_39_reservation_core_specJSON);

cJSON *v0_0_39_reservation_core_spec_convertToJSON(v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec);

#endif /* _v0_0_39_reservation_core_spec_H_ */

