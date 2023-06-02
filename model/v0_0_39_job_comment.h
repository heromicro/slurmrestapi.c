/*
 * v0_0_39_job_comment.h
 *
 * 
 */

#ifndef _v0_0_39_job_comment_H_
#define _v0_0_39_job_comment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_comment_t v0_0_39_job_comment_t;




typedef struct v0_0_39_job_comment_t {
    char *system; // string

} v0_0_39_job_comment_t;

v0_0_39_job_comment_t *v0_0_39_job_comment_create(
    char *system
);

void v0_0_39_job_comment_free(v0_0_39_job_comment_t *v0_0_39_job_comment);

v0_0_39_job_comment_t *v0_0_39_job_comment_parseFromJSON(cJSON *v0_0_39_job_commentJSON);

cJSON *v0_0_39_job_comment_convertToJSON(v0_0_39_job_comment_t *v0_0_39_job_comment);

#endif /* _v0_0_39_job_comment_H_ */

