/*
 * dbv0_0_38_job_wckey.h
 *
 * Job assigned wckey details
 */

#ifndef _dbv0_0_38_job_wckey_H_
#define _dbv0_0_38_job_wckey_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_wckey_t dbv0_0_38_job_wckey_t;




typedef struct dbv0_0_38_job_wckey_t {
    char *wckey; // string
    list_t *flags; //primitive container

} dbv0_0_38_job_wckey_t;

dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey_create(
    char *wckey,
    list_t *flags
);

void dbv0_0_38_job_wckey_free(dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey);

dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey_parseFromJSON(cJSON *dbv0_0_38_job_wckeyJSON);

cJSON *dbv0_0_38_job_wckey_convertToJSON(dbv0_0_38_job_wckey_t *dbv0_0_38_job_wckey);

#endif /* _dbv0_0_38_job_wckey_H_ */

