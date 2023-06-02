/*
 * dbv0_0_38_diag_statistics_rollups_inner.h
 *
 * Rollup statistics
 */

#ifndef _dbv0_0_38_diag_statistics_rollups_inner_H_
#define _dbv0_0_38_diag_statistics_rollups_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_diag_statistics_rollups_inner_t dbv0_0_38_diag_statistics_rollups_inner_t;




typedef struct dbv0_0_38_diag_statistics_rollups_inner_t {
    char *type; // string
    int last_run; //numeric
    int last_cycle; //numeric
    int max_cycle; //numeric
    int total_time; //numeric
    int mean_cycles; //numeric

} dbv0_0_38_diag_statistics_rollups_inner_t;

dbv0_0_38_diag_statistics_rollups_inner_t *dbv0_0_38_diag_statistics_rollups_inner_create(
    char *type,
    int last_run,
    int last_cycle,
    int max_cycle,
    int total_time,
    int mean_cycles
);

void dbv0_0_38_diag_statistics_rollups_inner_free(dbv0_0_38_diag_statistics_rollups_inner_t *dbv0_0_38_diag_statistics_rollups_inner);

dbv0_0_38_diag_statistics_rollups_inner_t *dbv0_0_38_diag_statistics_rollups_inner_parseFromJSON(cJSON *dbv0_0_38_diag_statistics_rollups_innerJSON);

cJSON *dbv0_0_38_diag_statistics_rollups_inner_convertToJSON(dbv0_0_38_diag_statistics_rollups_inner_t *dbv0_0_38_diag_statistics_rollups_inner);

#endif /* _dbv0_0_38_diag_statistics_rollups_inner_H_ */

