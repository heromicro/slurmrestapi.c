/*
 * v0_0_38_job_submission_response.h
 *
 * 
 */

#ifndef _v0_0_38_job_submission_response_H_
#define _v0_0_38_job_submission_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_job_submission_response_t v0_0_38_job_submission_response_t;

#include "v0_0_38_error.h"
#include "v0_0_38_meta.h"



typedef struct v0_0_38_job_submission_response_t {
    struct v0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    int job_id; //numeric
    char *step_id; // string
    char *job_submit_user_msg; // string

} v0_0_38_job_submission_response_t;

v0_0_38_job_submission_response_t *v0_0_38_job_submission_response_create(
    v0_0_38_meta_t *meta,
    list_t *errors,
    int job_id,
    char *step_id,
    char *job_submit_user_msg
);

void v0_0_38_job_submission_response_free(v0_0_38_job_submission_response_t *v0_0_38_job_submission_response);

v0_0_38_job_submission_response_t *v0_0_38_job_submission_response_parseFromJSON(cJSON *v0_0_38_job_submission_responseJSON);

cJSON *v0_0_38_job_submission_response_convertToJSON(v0_0_38_job_submission_response_t *v0_0_38_job_submission_response);

#endif /* _v0_0_38_job_submission_response_H_ */

