/*
 * v0_0_39_job_exit_code.h
 *
 * job exit details
 */

#ifndef _v0_0_39_job_exit_code_H_
#define _v0_0_39_job_exit_code_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_exit_code_t v0_0_39_job_exit_code_t;

#include "v0_0_39_job_exit_code_signal.h"



typedef struct v0_0_39_job_exit_code_t {
    char *status; // string
    int return_code; //numeric
    struct v0_0_39_job_exit_code_signal_t *signal; //model

} v0_0_39_job_exit_code_t;

v0_0_39_job_exit_code_t *v0_0_39_job_exit_code_create(
    char *status,
    int return_code,
    v0_0_39_job_exit_code_signal_t *signal
);

void v0_0_39_job_exit_code_free(v0_0_39_job_exit_code_t *v0_0_39_job_exit_code);

v0_0_39_job_exit_code_t *v0_0_39_job_exit_code_parseFromJSON(cJSON *v0_0_39_job_exit_codeJSON);

cJSON *v0_0_39_job_exit_code_convertToJSON(v0_0_39_job_exit_code_t *v0_0_39_job_exit_code);

#endif /* _v0_0_39_job_exit_code_H_ */

