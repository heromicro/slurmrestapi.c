/*
 * dbv0_0_38_association_usage.h
 *
 * Association usage
 */

#ifndef _dbv0_0_38_association_usage_H_
#define _dbv0_0_38_association_usage_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_usage_t dbv0_0_38_association_usage_t;




typedef struct dbv0_0_38_association_usage_t {
    int accrue_job_count; //numeric
    double group_used_wallclock; //numeric
    double fairshare_factor; //numeric
    int fairshare_shares; //numeric
    int normalized_priority; //numeric
    double normalized_shares; //numeric
    double effective_normalized_usage; //numeric
    int raw_usage; //numeric
    int job_count; //numeric
    double fairshare_level; //numeric

} dbv0_0_38_association_usage_t;

dbv0_0_38_association_usage_t *dbv0_0_38_association_usage_create(
    int accrue_job_count,
    double group_used_wallclock,
    double fairshare_factor,
    int fairshare_shares,
    int normalized_priority,
    double normalized_shares,
    double effective_normalized_usage,
    int raw_usage,
    int job_count,
    double fairshare_level
);

void dbv0_0_38_association_usage_free(dbv0_0_38_association_usage_t *dbv0_0_38_association_usage);

dbv0_0_38_association_usage_t *dbv0_0_38_association_usage_parseFromJSON(cJSON *dbv0_0_38_association_usageJSON);

cJSON *dbv0_0_38_association_usage_convertToJSON(dbv0_0_38_association_usage_t *dbv0_0_38_association_usage);

#endif /* _dbv0_0_38_association_usage_H_ */

