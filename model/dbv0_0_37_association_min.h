/*
 * dbv0_0_37_association_min.h
 *
 * Min settings
 */

#ifndef _dbv0_0_37_association_min_H_
#define _dbv0_0_37_association_min_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_association_min_t dbv0_0_37_association_min_t;




typedef struct dbv0_0_37_association_min_t {
    int priority_threshold; //numeric

} dbv0_0_37_association_min_t;

dbv0_0_37_association_min_t *dbv0_0_37_association_min_create(
    int priority_threshold
);

void dbv0_0_37_association_min_free(dbv0_0_37_association_min_t *dbv0_0_37_association_min);

dbv0_0_37_association_min_t *dbv0_0_37_association_min_parseFromJSON(cJSON *dbv0_0_37_association_minJSON);

cJSON *dbv0_0_37_association_min_convertToJSON(dbv0_0_37_association_min_t *dbv0_0_37_association_min);

#endif /* _dbv0_0_37_association_min_H_ */

