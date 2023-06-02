/*
 * dbv0_0_38_diag_statistics_users_inner.h
 *
 * Statistics by user RPCs
 */

#ifndef _dbv0_0_38_diag_statistics_users_inner_H_
#define _dbv0_0_38_diag_statistics_users_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_diag_statistics_users_inner_t dbv0_0_38_diag_statistics_users_inner_t;

#include "dbv0_0_38_diag_statistics_users_inner_time.h"



typedef struct dbv0_0_38_diag_statistics_users_inner_t {
    char *user; // string
    int count; //numeric
    struct dbv0_0_38_diag_statistics_users_inner_time_t *time; //model

} dbv0_0_38_diag_statistics_users_inner_t;

dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner_create(
    char *user,
    int count,
    dbv0_0_38_diag_statistics_users_inner_time_t *time
);

void dbv0_0_38_diag_statistics_users_inner_free(dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner);

dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner_parseFromJSON(cJSON *dbv0_0_38_diag_statistics_users_innerJSON);

cJSON *dbv0_0_38_diag_statistics_users_inner_convertToJSON(dbv0_0_38_diag_statistics_users_inner_t *dbv0_0_38_diag_statistics_users_inner);

#endif /* _dbv0_0_38_diag_statistics_users_inner_H_ */

