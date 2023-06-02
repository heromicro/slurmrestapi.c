/*
 * v0_0_39_assoc_max_jobs.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_max_jobs_H_
#define _v0_0_39_assoc_max_jobs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_max_jobs_t v0_0_39_assoc_max_jobs_t;

#include "v0_0_39_assoc_max_jobs_per.h"



typedef struct v0_0_39_assoc_max_jobs_t {
    struct v0_0_39_assoc_max_jobs_per_t *per; //model

} v0_0_39_assoc_max_jobs_t;

v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs_create(
    v0_0_39_assoc_max_jobs_per_t *per
);

void v0_0_39_assoc_max_jobs_free(v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs);

v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs_parseFromJSON(cJSON *v0_0_39_assoc_max_jobsJSON);

cJSON *v0_0_39_assoc_max_jobs_convertToJSON(v0_0_39_assoc_max_jobs_t *v0_0_39_assoc_max_jobs);

#endif /* _v0_0_39_assoc_max_jobs_H_ */

