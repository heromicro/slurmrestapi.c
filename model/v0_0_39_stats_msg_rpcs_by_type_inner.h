/*
 * v0_0_39_stats_msg_rpcs_by_type_inner.h
 *
 * RPC
 */

#ifndef _v0_0_39_stats_msg_rpcs_by_type_inner_H_
#define _v0_0_39_stats_msg_rpcs_by_type_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_msg_rpcs_by_type_inner_t v0_0_39_stats_msg_rpcs_by_type_inner_t;




typedef struct v0_0_39_stats_msg_rpcs_by_type_inner_t {
    char *message_type; // string
    int type_id; //numeric
    long count; //numeric
    long average_time; //numeric
    long total_time; //numeric

} v0_0_39_stats_msg_rpcs_by_type_inner_t;

v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner_create(
    char *message_type,
    int type_id,
    long count,
    long average_time,
    long total_time
);

void v0_0_39_stats_msg_rpcs_by_type_inner_free(v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner);

v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner_parseFromJSON(cJSON *v0_0_39_stats_msg_rpcs_by_type_innerJSON);

cJSON *v0_0_39_stats_msg_rpcs_by_type_inner_convertToJSON(v0_0_39_stats_msg_rpcs_by_type_inner_t *v0_0_39_stats_msg_rpcs_by_type_inner);

#endif /* _v0_0_39_stats_msg_rpcs_by_type_inner_H_ */

