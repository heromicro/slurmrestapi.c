/*
 * v0_0_39_job_array.h
 *
 * 
 */

#ifndef _v0_0_39_job_array_H_
#define _v0_0_39_job_array_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_array_t v0_0_39_job_array_t;




typedef struct v0_0_39_job_array_t {
    char *task; // string

} v0_0_39_job_array_t;

v0_0_39_job_array_t *v0_0_39_job_array_create(
    char *task
);

void v0_0_39_job_array_free(v0_0_39_job_array_t *v0_0_39_job_array);

v0_0_39_job_array_t *v0_0_39_job_array_parseFromJSON(cJSON *v0_0_39_job_arrayJSON);

cJSON *v0_0_39_job_array_convertToJSON(v0_0_39_job_array_t *v0_0_39_job_array);

#endif /* _v0_0_39_job_array_H_ */

