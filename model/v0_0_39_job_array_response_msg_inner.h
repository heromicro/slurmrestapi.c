/*
 * v0_0_39_job_array_response_msg_inner.h
 *
 * ArrayJob
 */

#ifndef _v0_0_39_job_array_response_msg_inner_H_
#define _v0_0_39_job_array_response_msg_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_array_response_msg_inner_t v0_0_39_job_array_response_msg_inner_t;




typedef struct v0_0_39_job_array_response_msg_inner_t {
    int job_id; //numeric
    int error_code; //numeric
    char *error; // string
    char *why; // string

} v0_0_39_job_array_response_msg_inner_t;

v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner_create(
    int job_id,
    int error_code,
    char *error,
    char *why
);

void v0_0_39_job_array_response_msg_inner_free(v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner);

v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner_parseFromJSON(cJSON *v0_0_39_job_array_response_msg_innerJSON);

cJSON *v0_0_39_job_array_response_msg_inner_convertToJSON(v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner);

#endif /* _v0_0_39_job_array_response_msg_inner_H_ */

