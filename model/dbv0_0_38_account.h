/*
 * dbv0_0_38_account.h
 *
 * Account description
 */

#ifndef _dbv0_0_38_account_H_
#define _dbv0_0_38_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_account_t dbv0_0_38_account_t;

#include "dbv0_0_38_association_short_info.h"
#include "dbv0_0_38_coordinator_info.h"



typedef struct dbv0_0_38_account_t {
    list_t *associations; //nonprimitive container
    list_t *coordinators; //nonprimitive container
    char *description; // string
    char *name; // string
    char *organization; // string
    list_t *flags; //primitive container

} dbv0_0_38_account_t;

dbv0_0_38_account_t *dbv0_0_38_account_create(
    list_t *associations,
    list_t *coordinators,
    char *description,
    char *name,
    char *organization,
    list_t *flags
);

void dbv0_0_38_account_free(dbv0_0_38_account_t *dbv0_0_38_account);

dbv0_0_38_account_t *dbv0_0_38_account_parseFromJSON(cJSON *dbv0_0_38_accountJSON);

cJSON *dbv0_0_38_account_convertToJSON(dbv0_0_38_account_t *dbv0_0_38_account);

#endif /* _dbv0_0_38_account_H_ */

