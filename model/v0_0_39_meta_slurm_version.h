/*
 * v0_0_39_meta_slurm_version.h
 *
 * 
 */

#ifndef _v0_0_39_meta_slurm_version_H_
#define _v0_0_39_meta_slurm_version_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_meta_slurm_version_t v0_0_39_meta_slurm_version_t;




typedef struct v0_0_39_meta_slurm_version_t {
    int major; //numeric
    int micro; //numeric
    int minor; //numeric

} v0_0_39_meta_slurm_version_t;

v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version_create(
    int major,
    int micro,
    int minor
);

void v0_0_39_meta_slurm_version_free(v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version);

v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version_parseFromJSON(cJSON *v0_0_39_meta_slurm_versionJSON);

cJSON *v0_0_39_meta_slurm_version_convertToJSON(v0_0_39_meta_slurm_version_t *v0_0_39_meta_slurm_version);

#endif /* _v0_0_39_meta_slurm_version_H_ */

