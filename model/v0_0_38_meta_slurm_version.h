/*
 * v0_0_38_meta_slurm_version.h
 *
 * 
 */

#ifndef _v0_0_38_meta_slurm_version_H_
#define _v0_0_38_meta_slurm_version_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_meta_slurm_version_t v0_0_38_meta_slurm_version_t;




typedef struct v0_0_38_meta_slurm_version_t {
    char *major; // string
    char *micro; // string
    char *minor; // string

} v0_0_38_meta_slurm_version_t;

v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version_create(
    char *major,
    char *micro,
    char *minor
);

void v0_0_38_meta_slurm_version_free(v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version);

v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version_parseFromJSON(cJSON *v0_0_38_meta_slurm_versionJSON);

cJSON *v0_0_38_meta_slurm_version_convertToJSON(v0_0_38_meta_slurm_version_t *v0_0_38_meta_slurm_version);

#endif /* _v0_0_38_meta_slurm_version_H_ */

