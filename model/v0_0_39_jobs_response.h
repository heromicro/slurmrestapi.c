/*
 * v0_0_39_jobs_response.h
 *
 * 
 */

#ifndef _v0_0_39_jobs_response_H_
#define _v0_0_39_jobs_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_jobs_response_t v0_0_39_jobs_response_t;

#include "v0_0_39_error.h"
#include "v0_0_39_job_info.h"
#include "v0_0_39_meta.h"
#include "v0_0_39_warning.h"



typedef struct v0_0_39_jobs_response_t {
    struct v0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    list_t *jobs; //nonprimitive container

} v0_0_39_jobs_response_t;

v0_0_39_jobs_response_t *v0_0_39_jobs_response_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *jobs
);

void v0_0_39_jobs_response_free(v0_0_39_jobs_response_t *v0_0_39_jobs_response);

v0_0_39_jobs_response_t *v0_0_39_jobs_response_parseFromJSON(cJSON *v0_0_39_jobs_responseJSON);

cJSON *v0_0_39_jobs_response_convertToJSON(v0_0_39_jobs_response_t *v0_0_39_jobs_response);

#endif /* _v0_0_39_jobs_response_H_ */

