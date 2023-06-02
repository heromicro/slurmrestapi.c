/*
 * v0_0_39_stats_user.h
 *
 * 
 */

#ifndef _v0_0_39_stats_user_H_
#define _v0_0_39_stats_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_user_t v0_0_39_stats_user_t;

#include "v0_0_39_stats_rpc_time.h"



typedef struct v0_0_39_stats_user_t {
    char *user; // string
    int count; //numeric
    struct v0_0_39_stats_rpc_time_t *time; //model

} v0_0_39_stats_user_t;

v0_0_39_stats_user_t *v0_0_39_stats_user_create(
    char *user,
    int count,
    v0_0_39_stats_rpc_time_t *time
);

void v0_0_39_stats_user_free(v0_0_39_stats_user_t *v0_0_39_stats_user);

v0_0_39_stats_user_t *v0_0_39_stats_user_parseFromJSON(cJSON *v0_0_39_stats_userJSON);

cJSON *v0_0_39_stats_user_convertToJSON(v0_0_39_stats_user_t *v0_0_39_stats_user);

#endif /* _v0_0_39_stats_user_H_ */

