/*
 * v0_0_39_step_tres.h
 *
 * 
 */

#ifndef _v0_0_39_step_tres_H_
#define _v0_0_39_step_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_tres_t v0_0_39_step_tres_t;

#include "v0_0_39_tres.h"



typedef struct v0_0_39_step_tres_t {
    list_t *allocated; //nonprimitive container

} v0_0_39_step_tres_t;

v0_0_39_step_tres_t *v0_0_39_step_tres_create(
    list_t *allocated
);

void v0_0_39_step_tres_free(v0_0_39_step_tres_t *v0_0_39_step_tres);

v0_0_39_step_tres_t *v0_0_39_step_tres_parseFromJSON(cJSON *v0_0_39_step_tresJSON);

cJSON *v0_0_39_step_tres_convertToJSON(v0_0_39_step_tres_t *v0_0_39_step_tres);

#endif /* _v0_0_39_step_tres_H_ */

