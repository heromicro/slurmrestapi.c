/*
 * dbv0_0_37_diag.h
 *
 * 
 */

#ifndef _dbv0_0_37_diag_H_
#define _dbv0_0_37_diag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_diag_t dbv0_0_37_diag_t;

#include "dbv0_0_37_diag_statistics.h"
#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_diag_t {
    list_t *errors; //nonprimitive container
    struct dbv0_0_37_diag_statistics_t *statistics; //model

} dbv0_0_37_diag_t;

dbv0_0_37_diag_t *dbv0_0_37_diag_create(
    list_t *errors,
    dbv0_0_37_diag_statistics_t *statistics
);

void dbv0_0_37_diag_free(dbv0_0_37_diag_t *dbv0_0_37_diag);

dbv0_0_37_diag_t *dbv0_0_37_diag_parseFromJSON(cJSON *dbv0_0_37_diagJSON);

cJSON *dbv0_0_37_diag_convertToJSON(dbv0_0_37_diag_t *dbv0_0_37_diag);

#endif /* _dbv0_0_37_diag_H_ */

