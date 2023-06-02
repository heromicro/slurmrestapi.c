/*
 * dbv0_0_38_association_max_tres.h
 *
 * Max TRES settings
 */

#ifndef _dbv0_0_38_association_max_tres_H_
#define _dbv0_0_38_association_max_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_max_tres_t dbv0_0_38_association_max_tres_t;

#include "dbv0_0_38_association_max_tres_minutes.h"
#include "dbv0_0_38_association_max_tres_per.h"
#include "dbv0_0_38_tres_list_inner.h"



typedef struct dbv0_0_38_association_max_tres_t {
    struct dbv0_0_38_association_max_tres_per_t *per; //model
    list_t *total; //nonprimitive container
    struct dbv0_0_38_association_max_tres_minutes_t *minutes; //model

} dbv0_0_38_association_max_tres_t;

dbv0_0_38_association_max_tres_t *dbv0_0_38_association_max_tres_create(
    dbv0_0_38_association_max_tres_per_t *per,
    list_t *total,
    dbv0_0_38_association_max_tres_minutes_t *minutes
);

void dbv0_0_38_association_max_tres_free(dbv0_0_38_association_max_tres_t *dbv0_0_38_association_max_tres);

dbv0_0_38_association_max_tres_t *dbv0_0_38_association_max_tres_parseFromJSON(cJSON *dbv0_0_38_association_max_tresJSON);

cJSON *dbv0_0_38_association_max_tres_convertToJSON(dbv0_0_38_association_max_tres_t *dbv0_0_38_association_max_tres);

#endif /* _dbv0_0_38_association_max_tres_H_ */

