/*
 * v0_0_39_assoc_max.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_max_H_
#define _v0_0_39_assoc_max_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_max_t v0_0_39_assoc_max_t;

#include "v0_0_39_assoc_max_jobs.h"



typedef struct v0_0_39_assoc_max_t {
    struct v0_0_39_assoc_max_jobs_t *jobs; //model

} v0_0_39_assoc_max_t;

v0_0_39_assoc_max_t *v0_0_39_assoc_max_create(
    v0_0_39_assoc_max_jobs_t *jobs
);

void v0_0_39_assoc_max_free(v0_0_39_assoc_max_t *v0_0_39_assoc_max);

v0_0_39_assoc_max_t *v0_0_39_assoc_max_parseFromJSON(cJSON *v0_0_39_assoc_maxJSON);

cJSON *v0_0_39_assoc_max_convertToJSON(v0_0_39_assoc_max_t *v0_0_39_assoc_max);

#endif /* _v0_0_39_assoc_max_H_ */

