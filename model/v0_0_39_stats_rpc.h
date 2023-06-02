/*
 * v0_0_39_stats_rpc.h
 *
 * 
 */

#ifndef _v0_0_39_stats_rpc_H_
#define _v0_0_39_stats_rpc_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_rpc_t v0_0_39_stats_rpc_t;

#include "v0_0_39_stats_rpc_time.h"



typedef struct v0_0_39_stats_rpc_t {
    char *rpc; // string
    int count; //numeric
    struct v0_0_39_stats_rpc_time_t *time; //model

} v0_0_39_stats_rpc_t;

v0_0_39_stats_rpc_t *v0_0_39_stats_rpc_create(
    char *rpc,
    int count,
    v0_0_39_stats_rpc_time_t *time
);

void v0_0_39_stats_rpc_free(v0_0_39_stats_rpc_t *v0_0_39_stats_rpc);

v0_0_39_stats_rpc_t *v0_0_39_stats_rpc_parseFromJSON(cJSON *v0_0_39_stats_rpcJSON);

cJSON *v0_0_39_stats_rpc_convertToJSON(v0_0_39_stats_rpc_t *v0_0_39_stats_rpc);

#endif /* _v0_0_39_stats_rpc_H_ */

