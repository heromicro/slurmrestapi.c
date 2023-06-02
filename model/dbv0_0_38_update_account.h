/*
 * dbv0_0_38_update_account.h
 *
 * 
 */

#ifndef _dbv0_0_38_update_account_H_
#define _dbv0_0_38_update_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_update_account_t dbv0_0_38_update_account_t;

#include "dbv0_0_38_account.h"



typedef struct dbv0_0_38_update_account_t {
    list_t *accounts; //nonprimitive container

} dbv0_0_38_update_account_t;

dbv0_0_38_update_account_t *dbv0_0_38_update_account_create(
    list_t *accounts
);

void dbv0_0_38_update_account_free(dbv0_0_38_update_account_t *dbv0_0_38_update_account);

dbv0_0_38_update_account_t *dbv0_0_38_update_account_parseFromJSON(cJSON *dbv0_0_38_update_accountJSON);

cJSON *dbv0_0_38_update_account_convertToJSON(dbv0_0_38_update_account_t *dbv0_0_38_update_account);

#endif /* _dbv0_0_38_update_account_H_ */

