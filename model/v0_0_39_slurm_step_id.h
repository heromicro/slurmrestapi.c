/*
 * v0_0_39_slurm_step_id.h
 *
 * step details
 */

#ifndef _v0_0_39_slurm_step_id_H_
#define _v0_0_39_slurm_step_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_slurm_step_id_t v0_0_39_slurm_step_id_t;




typedef struct v0_0_39_slurm_step_id_t {
    int job_id; //numeric
    int step_het_component; //numeric
    char *step_id; // string

} v0_0_39_slurm_step_id_t;

v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id_create(
    int job_id,
    int step_het_component,
    char *step_id
);

void v0_0_39_slurm_step_id_free(v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id);

v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id_parseFromJSON(cJSON *v0_0_39_slurm_step_idJSON);

cJSON *v0_0_39_slurm_step_id_convertToJSON(v0_0_39_slurm_step_id_t *v0_0_39_slurm_step_id);

#endif /* _v0_0_39_slurm_step_id_H_ */

