/*
 * v0_0_39_job_het.h
 *
 * 
 */

#ifndef _v0_0_39_job_het_H_
#define _v0_0_39_job_het_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_het_t v0_0_39_job_het_t;

#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_job_het_t {
    struct v0_0_39_uint32_no_val_t *job_offset; //model

} v0_0_39_job_het_t;

v0_0_39_job_het_t *v0_0_39_job_het_create(
    v0_0_39_uint32_no_val_t *job_offset
);

void v0_0_39_job_het_free(v0_0_39_job_het_t *v0_0_39_job_het);

v0_0_39_job_het_t *v0_0_39_job_het_parseFromJSON(cJSON *v0_0_39_job_hetJSON);

cJSON *v0_0_39_job_het_convertToJSON(v0_0_39_job_het_t *v0_0_39_job_het);

#endif /* _v0_0_39_job_het_H_ */

