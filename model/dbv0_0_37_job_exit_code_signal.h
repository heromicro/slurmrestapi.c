/*
 * dbv0_0_37_job_exit_code_signal.h
 *
 * Signal details (if signaled)
 */

#ifndef _dbv0_0_37_job_exit_code_signal_H_
#define _dbv0_0_37_job_exit_code_signal_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_exit_code_signal_t dbv0_0_37_job_exit_code_signal_t;




typedef struct dbv0_0_37_job_exit_code_signal_t {
    int signal_id; //numeric
    char *name; // string

} dbv0_0_37_job_exit_code_signal_t;

dbv0_0_37_job_exit_code_signal_t *dbv0_0_37_job_exit_code_signal_create(
    int signal_id,
    char *name
);

void dbv0_0_37_job_exit_code_signal_free(dbv0_0_37_job_exit_code_signal_t *dbv0_0_37_job_exit_code_signal);

dbv0_0_37_job_exit_code_signal_t *dbv0_0_37_job_exit_code_signal_parseFromJSON(cJSON *dbv0_0_37_job_exit_code_signalJSON);

cJSON *dbv0_0_37_job_exit_code_signal_convertToJSON(dbv0_0_37_job_exit_code_signal_t *dbv0_0_37_job_exit_code_signal);

#endif /* _dbv0_0_37_job_exit_code_signal_H_ */

