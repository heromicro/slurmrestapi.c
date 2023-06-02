/*
 * v0_0_38_job_submission.h
 *
 * 
 */

#ifndef _v0_0_38_job_submission_H_
#define _v0_0_38_job_submission_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_job_submission_t v0_0_38_job_submission_t;

#include "v0_0_38_job_properties.h"



typedef struct v0_0_38_job_submission_t {
    char *script; // string
    struct v0_0_38_job_properties_t *job; //model
    list_t *jobs; //nonprimitive container

} v0_0_38_job_submission_t;

v0_0_38_job_submission_t *v0_0_38_job_submission_create(
    char *script,
    v0_0_38_job_properties_t *job,
    list_t *jobs
);

void v0_0_38_job_submission_free(v0_0_38_job_submission_t *v0_0_38_job_submission);

v0_0_38_job_submission_t *v0_0_38_job_submission_parseFromJSON(cJSON *v0_0_38_job_submissionJSON);

cJSON *v0_0_38_job_submission_convertToJSON(v0_0_38_job_submission_t *v0_0_38_job_submission);

#endif /* _v0_0_38_job_submission_H_ */

