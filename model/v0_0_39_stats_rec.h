/*
 * v0_0_39_stats_rec.h
 *
 * 
 */

#ifndef _v0_0_39_stats_rec_H_
#define _v0_0_39_stats_rec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_rec_t v0_0_39_stats_rec_t;

#include "v0_0_39_rollup_stats_inner.h"
#include "v0_0_39_stats_rpc.h"
#include "v0_0_39_stats_user.h"



typedef struct v0_0_39_stats_rec_t {
    long time_start; //numeric
    list_t *rollups; //nonprimitive container
    list_t *rpcs; //nonprimitive container
    list_t *users; //nonprimitive container

} v0_0_39_stats_rec_t;

v0_0_39_stats_rec_t *v0_0_39_stats_rec_create(
    long time_start,
    list_t *rollups,
    list_t *rpcs,
    list_t *users
);

void v0_0_39_stats_rec_free(v0_0_39_stats_rec_t *v0_0_39_stats_rec);

v0_0_39_stats_rec_t *v0_0_39_stats_rec_parseFromJSON(cJSON *v0_0_39_stats_recJSON);

cJSON *v0_0_39_stats_rec_convertToJSON(v0_0_39_stats_rec_t *v0_0_39_stats_rec);

#endif /* _v0_0_39_stats_rec_H_ */

