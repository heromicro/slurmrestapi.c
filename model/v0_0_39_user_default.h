/*
 * v0_0_39_user_default.h
 *
 * 
 */

#ifndef _v0_0_39_user_default_H_
#define _v0_0_39_user_default_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_user_default_t v0_0_39_user_default_t;




typedef struct v0_0_39_user_default_t {
    char *wckey; // string

} v0_0_39_user_default_t;

v0_0_39_user_default_t *v0_0_39_user_default_create(
    char *wckey
);

void v0_0_39_user_default_free(v0_0_39_user_default_t *v0_0_39_user_default);

v0_0_39_user_default_t *v0_0_39_user_default_parseFromJSON(cJSON *v0_0_39_user_defaultJSON);

cJSON *v0_0_39_user_default_convertToJSON(v0_0_39_user_default_t *v0_0_39_user_default);

#endif /* _v0_0_39_user_default_H_ */

