/*
 * dbv0_0_37_association_max_tres_per.h
 *
 * Max TRES per settings
 */

#ifndef _dbv0_0_37_association_max_tres_per_H_
#define _dbv0_0_37_association_max_tres_per_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_association_max_tres_per_t dbv0_0_37_association_max_tres_per_t;

#include "dbv0_0_37_tres_list_inner.h"



typedef struct dbv0_0_37_association_max_tres_per_t {
    list_t *job; //nonprimitive container
    list_t *node; //nonprimitive container

} dbv0_0_37_association_max_tres_per_t;

dbv0_0_37_association_max_tres_per_t *dbv0_0_37_association_max_tres_per_create(
    list_t *job,
    list_t *node
);

void dbv0_0_37_association_max_tres_per_free(dbv0_0_37_association_max_tres_per_t *dbv0_0_37_association_max_tres_per);

dbv0_0_37_association_max_tres_per_t *dbv0_0_37_association_max_tres_per_parseFromJSON(cJSON *dbv0_0_37_association_max_tres_perJSON);

cJSON *dbv0_0_37_association_max_tres_per_convertToJSON(dbv0_0_37_association_max_tres_per_t *dbv0_0_37_association_max_tres_per);

#endif /* _dbv0_0_37_association_max_tres_per_H_ */

