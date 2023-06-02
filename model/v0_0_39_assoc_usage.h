/*
 * v0_0_39_assoc_usage.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_usage_H_
#define _v0_0_39_assoc_usage_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_usage_t v0_0_39_assoc_usage_t;




typedef struct v0_0_39_assoc_usage_t {
    int accrue_job_count; //numeric
    double group_used_wallclock; //numeric
    double fairshare_factor; //numeric
    int fairshare_shares; //numeric
    double normalized_priority; //numeric
    double normalized_shares; //numeric
    double effective_normalized_usage; //numeric
    double normalized_usage; //numeric
    double raw_usage; //numeric
    int active_jobs; //numeric
    int job_count; //numeric
    double fairshare_level; //numeric

} v0_0_39_assoc_usage_t;

v0_0_39_assoc_usage_t *v0_0_39_assoc_usage_create(
    int accrue_job_count,
    double group_used_wallclock,
    double fairshare_factor,
    int fairshare_shares,
    double normalized_priority,
    double normalized_shares,
    double effective_normalized_usage,
    double normalized_usage,
    double raw_usage,
    int active_jobs,
    int job_count,
    double fairshare_level
);

void v0_0_39_assoc_usage_free(v0_0_39_assoc_usage_t *v0_0_39_assoc_usage);

v0_0_39_assoc_usage_t *v0_0_39_assoc_usage_parseFromJSON(cJSON *v0_0_39_assoc_usageJSON);

cJSON *v0_0_39_assoc_usage_convertToJSON(v0_0_39_assoc_usage_t *v0_0_39_assoc_usage);

#endif /* _v0_0_39_assoc_usage_H_ */

