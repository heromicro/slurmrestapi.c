/*
 * v0_0_39_job_exit_code_signal.h
 *
 * Job exited due to signal
 */

#ifndef _v0_0_39_job_exit_code_signal_H_
#define _v0_0_39_job_exit_code_signal_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_exit_code_signal_t v0_0_39_job_exit_code_signal_t;




typedef struct v0_0_39_job_exit_code_signal_t {
    int signal_id; //numeric
    char *name; // string

} v0_0_39_job_exit_code_signal_t;

v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal_create(
    int signal_id,
    char *name
);

void v0_0_39_job_exit_code_signal_free(v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal);

v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal_parseFromJSON(cJSON *v0_0_39_job_exit_code_signalJSON);

cJSON *v0_0_39_job_exit_code_signal_convertToJSON(v0_0_39_job_exit_code_signal_t *v0_0_39_job_exit_code_signal);

#endif /* _v0_0_39_job_exit_code_signal_H_ */

