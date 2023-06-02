/*
 * dbv0_0_37_job_exit_code.h
 *
 * 
 */

#ifndef _dbv0_0_37_job_exit_code_H_
#define _dbv0_0_37_job_exit_code_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_exit_code_t dbv0_0_37_job_exit_code_t;

#include "dbv0_0_37_job_exit_code_signal.h"



typedef struct dbv0_0_37_job_exit_code_t {
    char *status; // string
    int return_code; //numeric
    struct dbv0_0_37_job_exit_code_signal_t *signal; //model

} dbv0_0_37_job_exit_code_t;

dbv0_0_37_job_exit_code_t *dbv0_0_37_job_exit_code_create(
    char *status,
    int return_code,
    dbv0_0_37_job_exit_code_signal_t *signal
);

void dbv0_0_37_job_exit_code_free(dbv0_0_37_job_exit_code_t *dbv0_0_37_job_exit_code);

dbv0_0_37_job_exit_code_t *dbv0_0_37_job_exit_code_parseFromJSON(cJSON *dbv0_0_37_job_exit_codeJSON);

cJSON *dbv0_0_37_job_exit_code_convertToJSON(dbv0_0_37_job_exit_code_t *dbv0_0_37_job_exit_code);

#endif /* _dbv0_0_37_job_exit_code_H_ */

