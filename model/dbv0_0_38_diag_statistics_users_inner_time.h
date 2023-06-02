/*
 * dbv0_0_38_diag_statistics_users_inner_time.h
 *
 * Time values
 */

#ifndef _dbv0_0_38_diag_statistics_users_inner_time_H_
#define _dbv0_0_38_diag_statistics_users_inner_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_diag_statistics_users_inner_time_t dbv0_0_38_diag_statistics_users_inner_time_t;




typedef struct dbv0_0_38_diag_statistics_users_inner_time_t {
    int average; //numeric
    int total; //numeric

} dbv0_0_38_diag_statistics_users_inner_time_t;

dbv0_0_38_diag_statistics_users_inner_time_t *dbv0_0_38_diag_statistics_users_inner_time_create(
    int average,
    int total
);

void dbv0_0_38_diag_statistics_users_inner_time_free(dbv0_0_38_diag_statistics_users_inner_time_t *dbv0_0_38_diag_statistics_users_inner_time);

dbv0_0_38_diag_statistics_users_inner_time_t *dbv0_0_38_diag_statistics_users_inner_time_parseFromJSON(cJSON *dbv0_0_38_diag_statistics_users_inner_timeJSON);

cJSON *dbv0_0_38_diag_statistics_users_inner_time_convertToJSON(dbv0_0_38_diag_statistics_users_inner_time_t *dbv0_0_38_diag_statistics_users_inner_time);

#endif /* _dbv0_0_38_diag_statistics_users_inner_time_H_ */

