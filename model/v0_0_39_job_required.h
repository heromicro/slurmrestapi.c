/*
 * v0_0_39_job_required.h
 *
 * 
 */

#ifndef _v0_0_39_job_required_H_
#define _v0_0_39_job_required_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_required_t v0_0_39_job_required_t;




typedef struct v0_0_39_job_required_t {
    long memory; //numeric

} v0_0_39_job_required_t;

v0_0_39_job_required_t *v0_0_39_job_required_create(
    long memory
);

void v0_0_39_job_required_free(v0_0_39_job_required_t *v0_0_39_job_required);

v0_0_39_job_required_t *v0_0_39_job_required_parseFromJSON(cJSON *v0_0_39_job_requiredJSON);

cJSON *v0_0_39_job_required_convertToJSON(v0_0_39_job_required_t *v0_0_39_job_required);

#endif /* _v0_0_39_job_required_H_ */

