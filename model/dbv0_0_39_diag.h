/*
 * dbv0_0_39_diag.h
 *
 * 
 */

#ifndef _dbv0_0_39_diag_H_
#define _dbv0_0_39_diag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_diag_t dbv0_0_39_diag_t;

#include "dbv0_0_39_error.h"
#include "dbv0_0_39_meta.h"
#include "dbv0_0_39_warning.h"
#include "v0_0_39_stats_rec.h"



typedef struct dbv0_0_39_diag_t {
    struct dbv0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    struct v0_0_39_stats_rec_t *statistics; //model

} dbv0_0_39_diag_t;

dbv0_0_39_diag_t *dbv0_0_39_diag_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    v0_0_39_stats_rec_t *statistics
);

void dbv0_0_39_diag_free(dbv0_0_39_diag_t *dbv0_0_39_diag);

dbv0_0_39_diag_t *dbv0_0_39_diag_parseFromJSON(cJSON *dbv0_0_39_diagJSON);

cJSON *dbv0_0_39_diag_convertToJSON(dbv0_0_39_diag_t *dbv0_0_39_diag);

#endif /* _dbv0_0_39_diag_H_ */

