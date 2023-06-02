/*
 * dbv0_0_38_meta.h
 *
 * 
 */

#ifndef _dbv0_0_38_meta_H_
#define _dbv0_0_38_meta_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_meta_t dbv0_0_38_meta_t;

#include "v0_0_38_meta_plugin.h"
#include "v0_0_38_meta_slurm.h"



typedef struct dbv0_0_38_meta_t {
    struct v0_0_38_meta_plugin_t *plugin; //model
    struct v0_0_38_meta_slurm_t *slurm; //model

} dbv0_0_38_meta_t;

dbv0_0_38_meta_t *dbv0_0_38_meta_create(
    v0_0_38_meta_plugin_t *plugin,
    v0_0_38_meta_slurm_t *slurm
);

void dbv0_0_38_meta_free(dbv0_0_38_meta_t *dbv0_0_38_meta);

dbv0_0_38_meta_t *dbv0_0_38_meta_parseFromJSON(cJSON *dbv0_0_38_metaJSON);

cJSON *dbv0_0_38_meta_convertToJSON(dbv0_0_38_meta_t *dbv0_0_38_meta);

#endif /* _dbv0_0_38_meta_H_ */

