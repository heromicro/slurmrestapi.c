/*
 * v0_0_39_assoc_max_jobs_per.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_max_jobs_per_H_
#define _v0_0_39_assoc_max_jobs_per_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_max_jobs_per_t v0_0_39_assoc_max_jobs_per_t;

#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_assoc_max_jobs_per_t {
    struct v0_0_39_uint32_no_val_t *wall_clock; //model

} v0_0_39_assoc_max_jobs_per_t;

v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per_create(
    v0_0_39_uint32_no_val_t *wall_clock
);

void v0_0_39_assoc_max_jobs_per_free(v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per);

v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per_parseFromJSON(cJSON *v0_0_39_assoc_max_jobs_perJSON);

cJSON *v0_0_39_assoc_max_jobs_per_convertToJSON(v0_0_39_assoc_max_jobs_per_t *v0_0_39_assoc_max_jobs_per);

#endif /* _v0_0_39_assoc_max_jobs_per_H_ */

