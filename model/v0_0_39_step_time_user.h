/*
 * v0_0_39_step_time_user.h
 *
 * 
 */

#ifndef _v0_0_39_step_time_user_H_
#define _v0_0_39_step_time_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_time_user_t v0_0_39_step_time_user_t;




typedef struct v0_0_39_step_time_user_t {
    int microseconds; //numeric

} v0_0_39_step_time_user_t;

v0_0_39_step_time_user_t *v0_0_39_step_time_user_create(
    int microseconds
);

void v0_0_39_step_time_user_free(v0_0_39_step_time_user_t *v0_0_39_step_time_user);

v0_0_39_step_time_user_t *v0_0_39_step_time_user_parseFromJSON(cJSON *v0_0_39_step_time_userJSON);

cJSON *v0_0_39_step_time_user_convertToJSON(v0_0_39_step_time_user_t *v0_0_39_step_time_user);

#endif /* _v0_0_39_step_time_user_H_ */

