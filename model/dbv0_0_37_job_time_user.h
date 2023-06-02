/*
 * dbv0_0_37_job_time_user.h
 *
 * User land time values
 */

#ifndef _dbv0_0_37_job_time_user_H_
#define _dbv0_0_37_job_time_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_time_user_t dbv0_0_37_job_time_user_t;




typedef struct dbv0_0_37_job_time_user_t {
    int seconds; //numeric
    int microseconds; //numeric

} dbv0_0_37_job_time_user_t;

dbv0_0_37_job_time_user_t *dbv0_0_37_job_time_user_create(
    int seconds,
    int microseconds
);

void dbv0_0_37_job_time_user_free(dbv0_0_37_job_time_user_t *dbv0_0_37_job_time_user);

dbv0_0_37_job_time_user_t *dbv0_0_37_job_time_user_parseFromJSON(cJSON *dbv0_0_37_job_time_userJSON);

cJSON *dbv0_0_37_job_time_user_convertToJSON(dbv0_0_37_job_time_user_t *dbv0_0_37_job_time_user);

#endif /* _dbv0_0_37_job_time_user_H_ */

