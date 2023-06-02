/*
 * v0_0_39_stats_msg_rpcs_by_user_inner.h
 *
 * user
 */

#ifndef _v0_0_39_stats_msg_rpcs_by_user_inner_H_
#define _v0_0_39_stats_msg_rpcs_by_user_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_msg_rpcs_by_user_inner_t v0_0_39_stats_msg_rpcs_by_user_inner_t;




typedef struct v0_0_39_stats_msg_rpcs_by_user_inner_t {
    char *user; // string
    int user_id; //numeric
    long count; //numeric
    long average_time; //numeric
    long total_time; //numeric

} v0_0_39_stats_msg_rpcs_by_user_inner_t;

v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner_create(
    char *user,
    int user_id,
    long count,
    long average_time,
    long total_time
);

void v0_0_39_stats_msg_rpcs_by_user_inner_free(v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner);

v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner_parseFromJSON(cJSON *v0_0_39_stats_msg_rpcs_by_user_innerJSON);

cJSON *v0_0_39_stats_msg_rpcs_by_user_inner_convertToJSON(v0_0_39_stats_msg_rpcs_by_user_inner_t *v0_0_39_stats_msg_rpcs_by_user_inner);

#endif /* _v0_0_39_stats_msg_rpcs_by_user_inner_H_ */

