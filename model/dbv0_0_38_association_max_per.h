/*
 * dbv0_0_38_association_max_per.h
 *
 * Max per settings
 */

#ifndef _dbv0_0_38_association_max_per_H_
#define _dbv0_0_38_association_max_per_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_max_per_t dbv0_0_38_association_max_per_t;

#include "dbv0_0_38_association_max_per_account.h"



typedef struct dbv0_0_38_association_max_per_t {
    struct dbv0_0_38_association_max_per_account_t *account; //model

} dbv0_0_38_association_max_per_t;

dbv0_0_38_association_max_per_t *dbv0_0_38_association_max_per_create(
    dbv0_0_38_association_max_per_account_t *account
);

void dbv0_0_38_association_max_per_free(dbv0_0_38_association_max_per_t *dbv0_0_38_association_max_per);

dbv0_0_38_association_max_per_t *dbv0_0_38_association_max_per_parseFromJSON(cJSON *dbv0_0_38_association_max_perJSON);

cJSON *dbv0_0_38_association_max_per_convertToJSON(dbv0_0_38_association_max_per_t *dbv0_0_38_association_max_per);

#endif /* _dbv0_0_38_association_max_per_H_ */

