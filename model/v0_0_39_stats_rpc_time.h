/*
 * v0_0_39_stats_rpc_time.h
 *
 * 
 */

#ifndef _v0_0_39_stats_rpc_time_H_
#define _v0_0_39_stats_rpc_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_rpc_time_t v0_0_39_stats_rpc_time_t;




typedef struct v0_0_39_stats_rpc_time_t {
    long total; //numeric

} v0_0_39_stats_rpc_time_t;

v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time_create(
    long total
);

void v0_0_39_stats_rpc_time_free(v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time);

v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time_parseFromJSON(cJSON *v0_0_39_stats_rpc_timeJSON);

cJSON *v0_0_39_stats_rpc_time_convertToJSON(v0_0_39_stats_rpc_time_t *v0_0_39_stats_rpc_time);

#endif /* _v0_0_39_stats_rpc_time_H_ */

