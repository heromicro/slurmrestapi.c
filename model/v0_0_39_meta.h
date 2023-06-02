/*
 * v0_0_39_meta.h
 *
 * 
 */

#ifndef _v0_0_39_meta_H_
#define _v0_0_39_meta_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_meta_t v0_0_39_meta_t;

#include "v0_0_39_meta_plugin.h"
#include "v0_0_39_meta_slurm.h"



typedef struct v0_0_39_meta_t {
    struct v0_0_39_meta_plugin_t *plugin; //model
    struct v0_0_39_meta_slurm_t *slurm; //model

} v0_0_39_meta_t;

v0_0_39_meta_t *v0_0_39_meta_create(
    v0_0_39_meta_plugin_t *plugin,
    v0_0_39_meta_slurm_t *slurm
);

void v0_0_39_meta_free(v0_0_39_meta_t *v0_0_39_meta);

v0_0_39_meta_t *v0_0_39_meta_parseFromJSON(cJSON *v0_0_39_metaJSON);

cJSON *v0_0_39_meta_convertToJSON(v0_0_39_meta_t *v0_0_39_meta);

#endif /* _v0_0_39_meta_H_ */

