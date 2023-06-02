/*
 * dbv0_0_38_diag_statistics.h
 *
 * 
 */

#ifndef _dbv0_0_38_diag_statistics_H_
#define _dbv0_0_38_diag_statistics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_diag_statistics_t dbv0_0_38_diag_statistics_t;

#include "dbv0_0_38_diag_statistics_rollups_inner.h"
#include "dbv0_0_38_diag_statistics_rpcs_inner.h"
#include "dbv0_0_38_diag_statistics_users_inner.h"



typedef struct dbv0_0_38_diag_statistics_t {
    int time_start; //numeric
    list_t *rollups; //nonprimitive container
    list_t *rpcs; //nonprimitive container
    list_t *users; //nonprimitive container

} dbv0_0_38_diag_statistics_t;

dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics_create(
    int time_start,
    list_t *rollups,
    list_t *rpcs,
    list_t *users
);

void dbv0_0_38_diag_statistics_free(dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics);

dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics_parseFromJSON(cJSON *dbv0_0_38_diag_statisticsJSON);

cJSON *dbv0_0_38_diag_statistics_convertToJSON(dbv0_0_38_diag_statistics_t *dbv0_0_38_diag_statistics);

#endif /* _dbv0_0_38_diag_statistics_H_ */

