/*
 * v0_0_38_meta_slurm.h
 *
 * Slurm information
 */

#ifndef _v0_0_38_meta_slurm_H_
#define _v0_0_38_meta_slurm_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_meta_slurm_t v0_0_38_meta_slurm_t;

#include "v0_0_38_meta_slurm_version.h"



typedef struct v0_0_38_meta_slurm_t {
    struct v0_0_38_meta_slurm_version_t *version; //model
    char *release; // string

} v0_0_38_meta_slurm_t;

v0_0_38_meta_slurm_t *v0_0_38_meta_slurm_create(
    v0_0_38_meta_slurm_version_t *version,
    char *release
);

void v0_0_38_meta_slurm_free(v0_0_38_meta_slurm_t *v0_0_38_meta_slurm);

v0_0_38_meta_slurm_t *v0_0_38_meta_slurm_parseFromJSON(cJSON *v0_0_38_meta_slurmJSON);

cJSON *v0_0_38_meta_slurm_convertToJSON(v0_0_38_meta_slurm_t *v0_0_38_meta_slurm);

#endif /* _v0_0_38_meta_slurm_H_ */

