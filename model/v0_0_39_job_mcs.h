/*
 * v0_0_39_job_mcs.h
 *
 * 
 */

#ifndef _v0_0_39_job_mcs_H_
#define _v0_0_39_job_mcs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_mcs_t v0_0_39_job_mcs_t;




typedef struct v0_0_39_job_mcs_t {
    char *label; // string

} v0_0_39_job_mcs_t;

v0_0_39_job_mcs_t *v0_0_39_job_mcs_create(
    char *label
);

void v0_0_39_job_mcs_free(v0_0_39_job_mcs_t *v0_0_39_job_mcs);

v0_0_39_job_mcs_t *v0_0_39_job_mcs_parseFromJSON(cJSON *v0_0_39_job_mcsJSON);

cJSON *v0_0_39_job_mcs_convertToJSON(v0_0_39_job_mcs_t *v0_0_39_job_mcs);

#endif /* _v0_0_39_job_mcs_H_ */

