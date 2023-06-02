/*
 * dbv0_0_37_association_max_per_account.h
 *
 * Max per accounting settings
 */

#ifndef _dbv0_0_37_association_max_per_account_H_
#define _dbv0_0_37_association_max_per_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_association_max_per_account_t dbv0_0_37_association_max_per_account_t;




typedef struct dbv0_0_37_association_max_per_account_t {
    int wall_clock; //numeric

} dbv0_0_37_association_max_per_account_t;

dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account_create(
    int wall_clock
);

void dbv0_0_37_association_max_per_account_free(dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account);

dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account_parseFromJSON(cJSON *dbv0_0_37_association_max_per_accountJSON);

cJSON *dbv0_0_37_association_max_per_account_convertToJSON(dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account);

#endif /* _dbv0_0_37_association_max_per_account_H_ */

