/*
 * dbv0_0_37_association_default.h
 *
 * Default settings
 */

#ifndef _dbv0_0_37_association_default_H_
#define _dbv0_0_37_association_default_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_association_default_t dbv0_0_37_association_default_t;




typedef struct dbv0_0_37_association_default_t {
    char *qos; // string

} dbv0_0_37_association_default_t;

dbv0_0_37_association_default_t *dbv0_0_37_association_default_create(
    char *qos
);

void dbv0_0_37_association_default_free(dbv0_0_37_association_default_t *dbv0_0_37_association_default);

dbv0_0_37_association_default_t *dbv0_0_37_association_default_parseFromJSON(cJSON *dbv0_0_37_association_defaultJSON);

cJSON *dbv0_0_37_association_default_convertToJSON(dbv0_0_37_association_default_t *dbv0_0_37_association_default);

#endif /* _dbv0_0_37_association_default_H_ */

