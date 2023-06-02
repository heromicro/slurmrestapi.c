/*
 * v0_0_39_rollup_stats_inner.h
 *
 * recorded rollup statistics
 */

#ifndef _v0_0_39_rollup_stats_inner_H_
#define _v0_0_39_rollup_stats_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_rollup_stats_inner_t v0_0_39_rollup_stats_inner_t;


// Enum TYPE for v0_0_39_rollup_stats_inner

typedef enum  { slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_NULL = 0, slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_internal, slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_user, slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_unknown } slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e;

char* v0_0_39_rollup_stats_inner_type_ToString(slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e type);

slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e v0_0_39_rollup_stats_inner_type_FromString(char* type);



typedef struct v0_0_39_rollup_stats_inner_t {
    slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e type; //enum
    int last_run; //numeric
    long max_cycle; //numeric
    long total_time; //numeric
    long total_cycles; //numeric
    long mean_cycles; //numeric

} v0_0_39_rollup_stats_inner_t;

v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner_create(
    slurm_rest_api_v0_0_39_rollup_stats_inner_TYPE_e type,
    int last_run,
    long max_cycle,
    long total_time,
    long total_cycles,
    long mean_cycles
);

void v0_0_39_rollup_stats_inner_free(v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner);

v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner_parseFromJSON(cJSON *v0_0_39_rollup_stats_innerJSON);

cJSON *v0_0_39_rollup_stats_inner_convertToJSON(v0_0_39_rollup_stats_inner_t *v0_0_39_rollup_stats_inner);

#endif /* _v0_0_39_rollup_stats_inner_H_ */

