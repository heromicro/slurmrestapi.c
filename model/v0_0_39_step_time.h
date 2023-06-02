/*
 * v0_0_39_step_time.h
 *
 * 
 */

#ifndef _v0_0_39_step_time_H_
#define _v0_0_39_step_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_time_t v0_0_39_step_time_t;

#include "v0_0_39_step_time_user.h"



typedef struct v0_0_39_step_time_t {
    struct v0_0_39_step_time_user_t *user; //model

} v0_0_39_step_time_t;

v0_0_39_step_time_t *v0_0_39_step_time_create(
    v0_0_39_step_time_user_t *user
);

void v0_0_39_step_time_free(v0_0_39_step_time_t *v0_0_39_step_time);

v0_0_39_step_time_t *v0_0_39_step_time_parseFromJSON(cJSON *v0_0_39_step_timeJSON);

cJSON *v0_0_39_step_time_convertToJSON(v0_0_39_step_time_t *v0_0_39_step_time);

#endif /* _v0_0_39_step_time_H_ */

