/*
 * dbv0_0_38_diag.h
 *
 * 
 */

#ifndef _dbv0_0_38_diag_H_
#define _dbv0_0_38_diag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_diag_t dbv0_0_38_diag_t;

#include "dbv0_0_38_diag_statistics.h"
#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"



typedef struct dbv0_0_38_diag_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    struct dbv0_0_38_diag_statistics_t *statistics; //model

} dbv0_0_38_diag_t;

dbv0_0_38_diag_t *dbv0_0_38_diag_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    dbv0_0_38_diag_statistics_t *statistics
);

void dbv0_0_38_diag_free(dbv0_0_38_diag_t *dbv0_0_38_diag);

dbv0_0_38_diag_t *dbv0_0_38_diag_parseFromJSON(cJSON *dbv0_0_38_diagJSON);

cJSON *dbv0_0_38_diag_convertToJSON(dbv0_0_38_diag_t *dbv0_0_38_diag);

#endif /* _dbv0_0_38_diag_H_ */

