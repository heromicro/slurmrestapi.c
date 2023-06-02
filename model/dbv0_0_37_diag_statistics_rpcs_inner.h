/*
 * dbv0_0_37_diag_statistics_rpcs_inner.h
 *
 * Statistics by RPC type
 */

#ifndef _dbv0_0_37_diag_statistics_rpcs_inner_H_
#define _dbv0_0_37_diag_statistics_rpcs_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_diag_statistics_rpcs_inner_t dbv0_0_37_diag_statistics_rpcs_inner_t;

#include "dbv0_0_37_diag_statistics_rpcs_inner_time.h"



typedef struct dbv0_0_37_diag_statistics_rpcs_inner_t {
    char *rpc; // string
    int count; //numeric
    struct dbv0_0_37_diag_statistics_rpcs_inner_time_t *time; //model

} dbv0_0_37_diag_statistics_rpcs_inner_t;

dbv0_0_37_diag_statistics_rpcs_inner_t *dbv0_0_37_diag_statistics_rpcs_inner_create(
    char *rpc,
    int count,
    dbv0_0_37_diag_statistics_rpcs_inner_time_t *time
);

void dbv0_0_37_diag_statistics_rpcs_inner_free(dbv0_0_37_diag_statistics_rpcs_inner_t *dbv0_0_37_diag_statistics_rpcs_inner);

dbv0_0_37_diag_statistics_rpcs_inner_t *dbv0_0_37_diag_statistics_rpcs_inner_parseFromJSON(cJSON *dbv0_0_37_diag_statistics_rpcs_innerJSON);

cJSON *dbv0_0_37_diag_statistics_rpcs_inner_convertToJSON(dbv0_0_37_diag_statistics_rpcs_inner_t *dbv0_0_37_diag_statistics_rpcs_inner);

#endif /* _dbv0_0_37_diag_statistics_rpcs_inner_H_ */

