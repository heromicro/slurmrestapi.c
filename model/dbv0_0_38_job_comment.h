/*
 * dbv0_0_38_job_comment.h
 *
 * Job comments by type
 */

#ifndef _dbv0_0_38_job_comment_H_
#define _dbv0_0_38_job_comment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_comment_t dbv0_0_38_job_comment_t;




typedef struct dbv0_0_38_job_comment_t {
    char *administrator; // string
    char *job; // string
    char *system; // string

} dbv0_0_38_job_comment_t;

dbv0_0_38_job_comment_t *dbv0_0_38_job_comment_create(
    char *administrator,
    char *job,
    char *system
);

void dbv0_0_38_job_comment_free(dbv0_0_38_job_comment_t *dbv0_0_38_job_comment);

dbv0_0_38_job_comment_t *dbv0_0_38_job_comment_parseFromJSON(cJSON *dbv0_0_38_job_commentJSON);

cJSON *dbv0_0_38_job_comment_convertToJSON(dbv0_0_38_job_comment_t *dbv0_0_38_job_comment);

#endif /* _dbv0_0_38_job_comment_H_ */

