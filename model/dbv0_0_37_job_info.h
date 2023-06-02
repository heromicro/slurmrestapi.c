/*
 * dbv0_0_37_job_info.h
 *
 * 
 */

#ifndef _dbv0_0_37_job_info_H_
#define _dbv0_0_37_job_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_info_t dbv0_0_37_job_info_t;

#include "dbv0_0_37_error.h"
#include "dbv0_0_37_job.h"



typedef struct dbv0_0_37_job_info_t {
    list_t *errors; //nonprimitive container
    list_t *jobs; //nonprimitive container

} dbv0_0_37_job_info_t;

dbv0_0_37_job_info_t *dbv0_0_37_job_info_create(
    list_t *errors,
    list_t *jobs
);

void dbv0_0_37_job_info_free(dbv0_0_37_job_info_t *dbv0_0_37_job_info);

dbv0_0_37_job_info_t *dbv0_0_37_job_info_parseFromJSON(cJSON *dbv0_0_37_job_infoJSON);

cJSON *dbv0_0_37_job_info_convertToJSON(dbv0_0_37_job_info_t *dbv0_0_37_job_info);

#endif /* _dbv0_0_37_job_info_H_ */

