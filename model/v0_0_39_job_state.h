/*
 * v0_0_39_job_state.h
 *
 * 
 */

#ifndef _v0_0_39_job_state_H_
#define _v0_0_39_job_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_state_t v0_0_39_job_state_t;




typedef struct v0_0_39_job_state_t {
    char *reason; // string

} v0_0_39_job_state_t;

v0_0_39_job_state_t *v0_0_39_job_state_create(
    char *reason
);

void v0_0_39_job_state_free(v0_0_39_job_state_t *v0_0_39_job_state);

v0_0_39_job_state_t *v0_0_39_job_state_parseFromJSON(cJSON *v0_0_39_job_stateJSON);

cJSON *v0_0_39_job_state_convertToJSON(v0_0_39_job_state_t *v0_0_39_job_state);

#endif /* _v0_0_39_job_state_H_ */

